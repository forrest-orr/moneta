#include "StdAfx.h"
#include "FileIo.hpp"
#include "PE.hpp"
#include "Moneta.hpp"
#include "Process.hpp"
#include "Blocks.hpp"
#include "Interface.hpp"
#include "MemDump.hpp"
#include "Suspicions.hpp"
#include "Environment.hpp"

using namespace std;
using namespace PeFile;
using namespace Moneta;

uint32_t Thread::GetTid() {
	return this->Id;
}

void* Thread::GetEntryPoint() {
	return this->StartAddress;
}

void Thread::SetEntryPoint(void* pStartAddress) {
	this->StartAddress = pStartAddress;
}
Thread::Thread(uint32_t dwTid) : Id(dwTid) {}
Thread::Thread(uint32_t dwTid, void *pStartAddress) : Id(dwTid), StartAddress(pStartAddress) {}

Process::~Process() {
	if (this->Handle != nullptr) {
		CloseHandle(this->Handle);
	}

	for (vector<Thread*>::const_iterator Itr = this->Threads.begin(); Itr != this->Threads.end(); ++Itr) {
		delete* Itr;
	}

	for (map<uint8_t*, Entity*>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		if (Itr->second->GetType() == Entity::Type::PE_FILE) {
			delete dynamic_cast<PeVm::Body*>(Itr->second); // This will call the destructors for PE, mapped file and entity all to be called in inheritted order.
		}
		else if (Itr->second->GetType() == Entity::Type::MAPPED_FILE) {
			delete dynamic_cast<MappedFile*>(Itr->second);
		}
		else {
			delete dynamic_cast<ABlock*>(Itr->second);;
		}
	}
}

HANDLE Process::GetHandle() {
	return this->Handle;
}

BOOL Process::IsWow64() {
	return this->Wow64;
}

#define ThreadQuerySetWin32StartAddress 9

Process::Process(uint32_t dwPid) : Pid(dwPid) {
	//
	// Initialize a new entity for each allocation base and add it to this process address space map
	//

	this->Handle = OpenProcess(PROCESS_VM_READ | PROCESS_QUERY_INFORMATION, false, dwPid);

	if (this->Handle != nullptr) {
		//
		//
		//

		HANDLE hThreadSnap = INVALID_HANDLE_VALUE;
		THREADENTRY32 ThreadEntry;

		if ((hThreadSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0)) != INVALID_HANDLE_VALUE) {
			ThreadEntry.dwSize = sizeof(THREADENTRY32);

			if (Thread32First(hThreadSnap, &ThreadEntry)) {
				do
				{
					if (ThreadEntry.th32OwnerProcessID == this->Pid) {
						Thread* CurrentThread = new Thread(ThreadEntry.th32ThreadID);
						//Interface::Log("* TID: 0x%08x\r\n", CurrentThread.GetTid());
						HANDLE hThread = OpenThread(THREAD_QUERY_INFORMATION, false, CurrentThread->GetTid()); // OpenThreadToken consistently failed even with impersonation (ERROR_NO_TOKEN). The idea was abandoned due to lack of relevance. Get-InjectedThread returns the user as SYSTEM even when it was a regular user which launched the remote thread.

						if (hThread != nullptr) {
							typedef NTSTATUS(NTAPI* NtQueryInformationThread_t) (HANDLE, THREADINFOCLASS, void*, uint32_t, uint32_t*);
							static NtQueryInformationThread_t NtQueryInformationThread = (NtQueryInformationThread_t)GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtQueryInformationThread");
							void* pStartAddress = nullptr;
							HANDLE hDupThread = nullptr;

							if (DuplicateHandle(GetCurrentProcess(), hThread, GetCurrentProcess(), &hDupThread, THREAD_QUERY_INFORMATION, FALSE, 0)) { // Without duplicating this handle NtQueryInformationThread will consistently fail to query the start address.
								NTSTATUS NtStatus = NtQueryInformationThread(hDupThread, (THREADINFOCLASS)ThreadQuerySetWin32StartAddress, &pStartAddress, sizeof(pStartAddress), nullptr);

								if (NT_SUCCESS(NtStatus)) {
									CurrentThread->SetEntryPoint(pStartAddress);
									//Interface::Log("* Start address: 0x%p\r\n", CurrentThread.GetEntryPoint());
								}

								CloseHandle(hDupThread);
							}

							this->Threads.push_back(CurrentThread);
							CloseHandle(hThread);
						}
					}
				} while (Thread32Next(hThreadSnap, &ThreadEntry));
			}

			CloseHandle(hThreadSnap);
		}
		//system("pause");

		wchar_t ImageName[MAX_PATH + 1] = { 0 }, DevFilePath[MAX_PATH + 1] = { 0 };

		if (GetModuleBaseNameW(this->Handle, nullptr, ImageName, MAX_PATH + 1) && GetProcessImageFileNameW(this->Handle, DevFilePath, sizeof(DevFilePath))) {
			wchar_t ImageFilePath[MAX_PATH + 1] = { 0 };

			if (FileBase::TranslateDevicePath(DevFilePath, ImageFilePath)) {
				//printf("Translated %ws to %ws\r\n", DevFilePath, ImageFilePath);
				this->Name = wstring(ImageName);
				this->ImageFilePath = wstring(ImageFilePath);
				Interface::Log(4, "* Mapping address space of PID %d [%ws]\r\n", this->Pid, this->Name.c_str());
				typedef BOOL(WINAPI* ISWOW64PROCESS) (HANDLE, PBOOL);
				static ISWOW64PROCESS IsWow64Process = (ISWOW64PROCESS)GetProcAddress(GetModuleHandleW(L"Kernel32.dll"), "IsWow64Process");

				if (IsWow64Process != nullptr) {
					BOOL bSelfWow64 = FALSE;

					if (IsWow64Process(GetCurrentProcess(), (PBOOL)&bSelfWow64)) {
						if (IsWow64Process(this->Handle, (PBOOL)&this->Wow64)) {
							if (this->IsWow64()) {
								//CloseHandle(this->Handle);
								Interface::Log(4, "* PID %d is Wow64\r\n", this->Pid);
								//system("pause");
								//throw 2;
							}
							else {
								if (bSelfWow64) {
									Interface::Log(4, "* Cannot scan non-Wow64 process from Wow64 Moneta instance\r\n");
									throw 2;
								}
							}
						}
					}
				}
			}
		}

		Interface::Log(4, "* Scanning sblocks...\r\n");
		//system("pause");
		SIZE_T cbRegionSize = 0;
		vector<SBlock*> SBlocks;
		vector<SBlock*>::iterator ABlock;
		//Entity* CurrentEntity = nullptr;

		//Loop memory, building list of SBlocks. Once a block is found which does not match the "current" allocation base, create a new entity containing the corresponding sblock list, and insert it into the address space entities map using the ablock as the key.

		//if (this->Pid == 3272) system("pause");

		for (uint8_t* pBaseAddr = nullptr;; pBaseAddr += cbRegionSize) {
			MEMORY_BASIC_INFORMATION* pMbi = new MEMORY_BASIC_INFORMATION;

			if (VirtualQueryEx(this->Handle, pBaseAddr, (MEMORY_BASIC_INFORMATION*)pMbi, sizeof(MEMORY_BASIC_INFORMATION)) == sizeof(MEMORY_BASIC_INFORMATION)) {
				cbRegionSize = pMbi->RegionSize;

				if (!SBlocks.empty()) { // If the sblock list is empty then there is no ablock for comparison
					//
					// In the event that this is a new ablock, create a map pair and insert it into the entities map
					//

					Interface::Log(5, "Sblock list not empty\r\n");

					if (pMbi->AllocationBase != (*ABlock)->GetBasic()->AllocationBase) {
						Interface::Log(5, "Found a new ablock. Saving sblock list to new entity entry.\r\n");
						this->Entities.insert(make_pair((uint8_t*)(*ABlock)->GetBasic()->AllocationBase, Entity::Create(this->Handle, SBlocks)));
						SBlocks.clear();
					}
					//Interface::Log("done2\r\n");
				}

				Interface::Log(5, "Adding mew sblock to list\r\n");
				SBlocks.push_back(new SBlock((MEMORY_BASIC_INFORMATION*)pMbi, nullptr, this->Threads));
				ABlock = SBlocks.begin(); // This DOES fix a bug.
			}
			else {
				Interface::Log(5, "VirtualQuery failed\r\n");
				//system("pause");
				delete pMbi;
				if (!SBlocks.empty()) { // Edge case: new ablock not yet found but finished enumerating sblocks.
					this->Entities.insert(make_pair((uint8_t*)(*ABlock)->GetBasic()->AllocationBase, Entity::Create(this->Handle, SBlocks)));
				}
				//Interface::Log("done\r\n");
				break;
			}
		}

		//this->PermissionRecords = new MemoryPermissionRecord(this->Blocks); // Initialize 
		//CloseHandle(hProcess);
	}
	else {
		Interface::Log(4, "- Failed to open handle to PID %d\r\n", this->Pid);
		throw 1; // Not throwing a specific value crashes it
	}
}


uint32_t Process::GetPid() {
	return this->Pid;
}

void AlignName(const wchar_t* pOriginalName, wchar_t* pAlignedName, int32_t nAlignTo) { // Make generic and move to interface?
	assert(nAlignTo >= 1);
	assert(wcslen(pOriginalName) <= nAlignTo);

	if (wcslen(pOriginalName)) {
		wcsncpy_s(pAlignedName, (nAlignTo + 1), pOriginalName, nAlignTo);
		for (int32_t nX = wcslen(pAlignedName); nX < nAlignTo; nX++) {
			wcscat_s(pAlignedName, (nAlignTo + 1), L" ");
		}
	}
	else {
		wcscpy_s(pAlignedName, (nAlignTo + 1), L" ");

		for (int32_t nX = 1; nX < nAlignTo; nX++) {
			wcscat_s(pAlignedName, (nAlignTo + 1), L" ");
		}
	}
}

/*

ArchWow64PathExpand

The purpose of this function is to receive an unformatted file path (which may
contain architecture folders or environment variables) and convert the two
ambiguous architecture directories to Wow64 if applicable.

1. Expand all environment variables.
2. Check whether the path begins with either of the ambiguous architecture
folders: C:\Windows\system32, C:\Program Files
3. If the path does not begin with an ambiguous arch folder return it as is.
4. If the path does begin with an ambiguous arch folder then convert it to
the Wow64 equivalent and return it.

Examples:

%programfiles%\example1\example.exe -> C:\Program Files (x86)\example1\example.exe
C:\Program Files (x86)\example2\example.exe -> C:\Program Files (x86)\example2\example.exe
C:\Program Files\example3\example.exe -> C:\Program Files (x86)\example3\example.exe
C:\Windows\system32\notepad.exe -> C:\Windows\syswow64\notepad.exe

*/

wstring Process::GetImageFilePath() {
	return this->ImageFilePath;
}

wstring Process::GetName() {
	return this->Name;
}

void EnumerateThreads(const wstring Indent, vector<Thread*> Threads) {
	for (vector<Thread*>::iterator ThItr = Threads.begin(); ThItr != Threads.end(); ++ThItr) {
		Interface::Log("%wsThread 0x%p [TID 0x%08x]\r\n", Indent.c_str(), (*ThItr)->GetEntryPoint(), (*ThItr)->GetTid());
	}
}

/*
Region map -> Key [Allocation base]
				-> Suspicions map -> Key [SBlock address]
									   -> Suspicions list
*/

int32_t FilterSuspicions(map <uint8_t*, map<uint8_t*, vector<Suspicion*>>>&SuspicionsMap) {
	//printf("before:\r\n");
	//Suspicion::EnumerateMap(SuspicionsMap);
	bool bReWalkMap = false;

	do {
		if (bReWalkMap) {
			bReWalkMap = false; // The re-walk boolean is only set when a suspicion was filtered. Reset it each time this happens.
		}

		/* Concept ~ Walk the map and search through the suspicion list corresponding to each sblock.
		             When a suspicion is filtered, remove it from the list, and remove the sblock map
					 entry if it was the only suspicion in its list. If the ablock map only had the
					 one sblock map entry, then remove the ablock map entry as well. Walk the list
					 again now that the map has updated, and repeat the process until there are no
					 filterable suspicions remaining
		
		*/
		for (map <uint8_t*, map<uint8_t*, vector<Suspicion*>>>::const_iterator AbMapItr = SuspicionsMap.begin(); !bReWalkMap && AbMapItr != SuspicionsMap.end(); ++AbMapItr) {
			map < uint8_t*, vector<Suspicion*>>& RefSbMap = SuspicionsMap.at(AbMapItr->first);
			int32_t nSbIndex = 0;

			for (map<uint8_t*, vector<Suspicion*>>::const_iterator SbMapItr = AbMapItr->second.begin(); !bReWalkMap && SbMapItr != AbMapItr->second.end(); ++SbMapItr, nSbIndex++) {
				//vector<Suspicion*> SuspListCopy = SbMapItr->second;
				//vector<Suspicion*>::const_iterator SuspCopyItr = SuspListCopy.begin();
				vector<Suspicion*>& RefSuspList = RefSbMap.at(SbMapItr->first);
				//vector<Suspicion*>& RefSuspList = reinterpret_cast<vector<Suspicion*>>(SbMapItr->second); // Bug: element removed from list which is still being iterated
				vector<Suspicion*>::const_iterator SuspItr = SbMapItr->second.begin();

				for (int32_t nSuspIndex = 0; !bReWalkMap && SuspItr != SbMapItr->second.end(); ++SuspItr, nSuspIndex++) {
					switch ((*SuspItr)->GetType()) {
					/*case Suspicion::Type::XPRV: {
						//Interface::Log("* Filtered executable private memory at 0x%p\r\n", (*SuspItr)->GetBlock()->GetBasic()->BaseAddress);
						bReWalkMap = true;
						RefSuspList.erase(SuspItr);

						if (!RefSuspList.size()) {
							//
							// Erase the suspicion list from the sblock map and then erase the sblock map from the ablock map. Finalize by removing the ablock map from the suspicion map itself.
							//

							RefSbMap.erase(SbMapItr);

							if (!RefSbMap.size()) {
								SuspicionsMap.erase(AbMapItr); // Will this cause a bug if multiple suspicions are erased in one call to this function?
							}
						}
						break;
					}*/
					case Suspicion::Type::MISSING_PEB_MODULE: {
						/* Filter cases for missing PEB modules:
							 ~ Signed metadata PEs. These appear in the C:\Windows\System32\WinMetadata folder with the .winmd extension. They've also been noted to appear in WindpwsApps, SystemApps and others.

							   0x000000000F3E0000:0x0009e000 | Executable image | C:\Windows\System32\WinMetadata\Windows.UI.winmd | Missing PEB module
							   0x000000000F3E0000:0x0009e000 | R        | Header   | 0x00000000
							   0x000000000F3E0000:0x0009e000 | R        | .text    | 0x00000000
							   0x000000000F3E0000:0x0009e000 | R        | .rsrc    | 0x00000000
						*/

						PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>((*SuspItr)->GetParentObject());

						if (PeEntity->IsSigned()) {
							static const wchar_t* pWinmbExt = L".winmd";
							//if (_wcsnicmp(PeEntity->GetPath().c_str(), Environment::MetadataPath.c_str(), Environment::MetadataPath.length()) == 0 && _wcsicmp(PeEntity->GetPath().c_str() + PeEntity->GetPath().length() - wcslen(pWinmbExt), pWinmbExt) == 0) {
							if (_wcsicmp(PeEntity->GetPath().c_str() + PeEntity->GetPath().length() - wcslen(pWinmbExt), pWinmbExt) == 0) {
								if (PeEntity->GetPe() != nullptr && PeEntity->GetPe()->GetEntryPoint() == 0) {
									//Interface::Log("* %ws is within metadata path\r\n", PeEntity->GetPath().c_str());
									//system("pause");

									bReWalkMap = true;
									RefSuspList.erase(SuspItr);

									if (!RefSuspList.size()) {
										//
										// Erase the suspicion list from the sblock map and then erase the sblock map from the ablock map. Finalize by removing the ablock map from the suspicion map itself.
										//

										RefSbMap.erase(SbMapItr);

										if (!RefSbMap.size()) {
											SuspicionsMap.erase(AbMapItr); // Will this cause a bug if multiple suspicions are erased in one call to this function?
										}
									}
								}
							}
						}

						break;
					}
					}
				}
			}
		}
	} while (bReWalkMap);

	//Suspicion::EnumerateMap(SuspicionsMap);
	//printf("enum done\r\n");
	return 0;
}

/*
void Process::EnumerateSBlocks(map<uint8_t*, vector<Suspicion*>> &SuspicionsMap, vector<SBlock*> SBlocks) {
	for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
		bool bSuspiciousSblock = false;
		wchar_t AlignedAttribDesc[9] = { 0 };

		AlignName(SBlock::AttribDesc((*SbItr)->GetBasic()), AlignedAttribDesc, 8);

		Interface::Log("    0x%p:0x%08x | %ws | 0x%08x", (*SbItr)->GetBasic()->BaseAddress, (*SbItr)->GetBasic()->RegionSize, AlignedAttribDesc,
			SBlock::GetPrivateSize(this->GetHandle(), static_cast<uint8_t*>((*SbItr)->GetBasic()->BaseAddress), (uint32_t)(*SbItr)->GetBasic()->RegionSize));

		if (SuspicionsMap.count((uint8_t*)(*SbItr)->GetBasic()->BaseAddress)) {
			vector<Suspicion*>& SuspicionsList = SuspicionsMap.at((uint8_t*)(*SbItr)->GetBasic()->BaseAddress);

			for (vector<Suspicion*>::const_iterator SuspItr = SuspicionsList.begin(); SuspItr != SuspicionsList.end(); ++SuspItr) {
				if (!(*SuspItr)->IsFullEntitySuspicion()) {
					Interface::Log(" | %ws", (*SuspItr)->GetDescription().c_str());
				}
			}
		}

		Interface::Log("\r\n");
		EnumerateThreads(L"      ", (*SbItr)->GetThreads());
	}
}*/

int32_t AppendOverlapSuspicion(map<uint8_t*, vector<Suspicion*>>* pSbMap, uint8_t *pSbAddress, bool bEntityTop) {
	if (pSbMap != nullptr && pSbMap->count(pSbAddress)) {
		vector<Suspicion*>& SuspicionsList = pSbMap->at(pSbAddress);

		for (vector<Suspicion*>::const_iterator SuspItr = SuspicionsList.begin(); SuspItr != SuspicionsList.end(); ++SuspItr) {
			if (bEntityTop == (*SuspItr)->IsFullEntitySuspicion()) {
				Interface::Log(" | %ws", (*SuspItr)->GetDescription().c_str());
			}
		}
	}
}

bool Process::DumpBlock(MemDump &ProcDmp, MEMORY_BASIC_INFORMATION *pMbi, wstring Indent) {
	wchar_t DumpFilePath[MAX_PATH + 1] = { 0 };

	if (pMbi->State == MEM_COMMIT) {
		if (ProcDmp.Create(pMbi, DumpFilePath, MAX_PATH + 1)) {
			Interface::Log("%ws~ Memory dumped to %ws\r\n", Indent.c_str(), DumpFilePath);
			return true;
		}
		else {
			Interface::Log("%ws~ Memory dump failed.\r\n", Indent.c_str());
			return false;
		}
	}
}
/*
  0x00007FFC668B0000:0x0009e000   | Executable image    | C:\Windows\System32\msvcrt.dll
  |__ Mapped file base: 0x00007FFC668B0000
    | Mapped file size: 0x0009e000
	| Mapped file path: C:\Windows\System32\msvcrt.dll
	| Non-executable: no
	| Signed: yes
	|__ PEB module
	  | Image base: 0x00007FFC668B0000
	  | Image size: 0x0009e000
	  | Image file path: C:\Windows\System32\msvcrt.dll
	  | Module name: msvcrt.dll
	  | Entry point: 0x00007FFC668B0000
	__|
	|__ PE file
	  | AddressOfEntryPoint: 0x68B0000

	0x00007FFC668B0000:0x00001000 | R        | Header   | 0x00000000
	|__ Base: 0x00007FFC668B0000
	  | Size: 0x1000
	  | Permissions: R
	  | Size: 0x1000
	  | State: MEM_COMMIT
	  | Type: MEM_IMAGE
	  | Allocation base: 0x00007FFC668B0000
	  | Initial protection: RWXC

	0x00007FFC668B1000:0x00075000 | RX       | .text    | 0x00000000
	|__ Base: 0x00007FFC668B0000
	  | Size: 0x1000
	  | Permissions: R
	  | Size: 0x1000
	  | State: MEM_COMMIT
	  | Type: MEM_IMAGE
	  | Allocation base: 0x00007FFC668B0000
	  | Initial protection: RWXC

	0x00007FFC66926000:0x00019000 | R        | .rdata   | 0x00002000
	|__ Base: 0x00007FFC668B0000
	  | Size: 0x1000
	  | Permissions: R
	  | Size: 0x1000
	  | State: MEM_COMMIT
	  | Type: MEM_IMAGE
	  | Allocation base: 0x00007FFC668B0000
	  | Initial protection: RWXC

	0x00007FFC6693F000:0x00002000 | RW       | .data    | 0x00002000
	|__ Base: 0x00007FFC668B0000
	  | Size: 0x1000
	  | Permissions: RW
	  | Size: 0x00002000
	  | State: MEM_COMMIT
	  | Type: MEM_IMAGE
	  | Allocation base: 0x00007FFC668B0000
	  | Initial protection: RWXC

  0x0000026D27C90000:0x00001000   | Mapped   | Page File
  |__ Mapped file base: 0x0000026D27C90000
    | Mapped file size: 0x00001000
	| Mapped file path: N/A
	0x0000026D27C90000:0x00001000 | R        | 0x00000000
	|__ Base: 0x0000026D27C90000
	  | Size: 0x1000
	  | Permissions: R
	  | Size: 0x1000
	  | State: MEM_COMMIT
	  | Type: MEM_MAPPED
	  | Allocation base: 0x00007FFC668B0000
	  | Initial protection: R

  0x0000026D27CA0000:0x00002000   | Private
	0x0000026D27CA0000:0x00002000 | RW       | 0x00002000
	|__ Base: 0x0000026D27C90000
	  | Size: 0x1000
	  | Permissions: R
	  | Size: 0x1000
	  | State: MEM_COMMIT
	  | Type: MEM_MAPPED
	  | Allocation base: 0x00007FFC668B0000
	  | Initial protection: R
  0x0000026D27CB0000:0x000c7000   | Mapped   | C:\Windows\System32\locale.nls
	0x0000026D27CB0000:0x000c7000 | R        | 0x00000000
  0x0000026D27D80000:0x00007000   | Private
	0x0000026D27D80000:0x00001000 | RW       | 0x00001000
	0x0000026D27D81000:0x00006000 | Reserve  | 0x00006000
*/
/*
1. Loop entities to build suspicions list
2. Filter suspicions
3. Loop entities for enumeration if:
   mselect == process
   mselect == sblock and this eneity contains the sblock
   mselect == suspicious and there is 1 or more suspicions
4. Show the process if it has not been shown before
5. Display entity info (exe image, private, mapped + total size) ALWAYS (criteria already applied going into loop) along with suspicions (if any)
5. For PEs, loop sblocks/sections. Enum if:
	mselect == process
	mselect == sblock && sblock == current, or the  "from base" option is set
	or mselect == suspicious and the current sblock has a suspicion or the  "from base" option is set
6. Dump the current sblock based on the same criteria as above but ONLY if the "from base" option is not set.
7. Dump the entire PE entity if it met the initial enum criteria and "from base" option is set

8. For private/mapped loop sblocks and enum if:
	mselect == process
	mselect == sblock && sblock == current, or the  "from base" option is set
	or mselect == suspicious and the current sblock has a suspicion or the  "from base" option is set
9. Dump the current sblock based on the same criteria as above but ONLY if the "from base" option is not set.
10. Dump the entire entity if it met the initial enum criteria and "from base" option is set
*/

void Process::Enumerate(uint64_t qwOptFlags, MemorySelectionType MemSelectType, VerbosityLevel VLvl, uint8_t *pSelectSblock) {
	bool bShownProc = false;
	MemDump ProcDmp(this->Handle, this->Pid);
	wstring_convert<codecvt_utf8_utf16<wchar_t>> UnicodeConverter;
	map <uint8_t*, map<uint8_t*, vector<Suspicion*>>> SuspicionsMap; // More efficient to only filter this map once. Currently filtering it for every single entity

	//
	// Build suspicions list for following memory selection and apply filters to it.
	//

	for (map<uint8_t*, Entity*>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		Suspicion::InspectEntity(*this, *Itr->second, SuspicionsMap);
	}

	if (SuspicionsMap.size()) {
		FilterSuspicions(SuspicionsMap);
	}

	//
	// Display information on each selected sblock and/or entity within the process address space
	//

	for (map<uint8_t*, Entity*>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		auto AbMapItr = SuspicionsMap.find(Itr->second->GetStartVa()); // An iterator into the main ablock map which points to the entry for the sb map.
		map<uint8_t*, vector<Suspicion*>>* pSbMap = nullptr;

		if (AbMapItr != SuspicionsMap.end()) {
			pSbMap = &SuspicionsMap.at(Itr->second->GetStartVa());
		}

		if (MemSelectType == MemorySelectionType::Process ||
			(MemSelectType == MemorySelectionType::Block && ((pSelectSblock >= Itr->second->GetStartVa()) && (pSelectSblock < Itr->second->GetEndVa()))) ||
			(MemSelectType == MemorySelectionType::Suspicious && AbMapItr != SuspicionsMap.end())) {

			//
			// Display process and/or entity information: the criteria has already been met for this to be done without further checks
			//

			if (!bShownProc) {
				Interface::Log("\r\n%ws [%ws] : %d : %ws\r\n", this->Name.c_str(), this->ImageFilePath.c_str(), this->GetPid(), this->IsWow64() ? L"Wow64" : L"x64");
				bShownProc = true;
			}

			if (Itr->second->GetType() == Entity::Type::PE_FILE) {
				PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>(Itr->second);

				if (PeEntity->IsNonExecutableImage()) {
					Interface::Log("  0x%p:0x%08x   | Unexecutable image  | %ws", PeEntity->GetPeBase(), PeEntity->GetEntitySize(), PeEntity->GetPath().c_str());
				}
				else {
					Interface::Log("  0x%p:0x%08x   | Executable image    | %ws", PeEntity->GetPeBase(), PeEntity->GetEntitySize(), PeEntity->GetPath().c_str());
				}
			}
			else if (Itr->second->GetType() == Entity::Type::MAPPED_FILE) {
				Interface::Log("  0x%p:0x%08x   | Mapped   | %ws", Itr->second->GetStartVa(), Itr->second->GetEntitySize(), dynamic_cast<MappedFile*>(Itr->second)->GetPath().c_str());
			}
			else {
				if (Itr->second->GetSBlocks().front()->GetBasic()->Type == MEM_PRIVATE) {
					Interface::Log("  0x%p:0x%08x   | Private", Itr->second->GetStartVa(), Itr->second->GetEntitySize());
				}
				else {
					continue;
				}
			}

			//
			// Display suspicions associated with the entity, if the current entity has any suspicions associated with it
			//

			AppendOverlapSuspicion(pSbMap, (uint8_t*)Itr->second->GetStartVa(), true);
			Interface::Log("\r\n");

			//
			// Display the section/sblock information associated with this eneity provided it meets the selection criteria
			//

			vector<SBlock*> SBlocks = Itr->second->GetSBlocks();

			for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
				if (MemSelectType == MemorySelectionType::Process ||
					(MemSelectType == MemorySelectionType::Block && (pSelectSblock == (*SbItr)->GetBasic()->BaseAddress || (qwOptFlags & MONETA_FLAG_FROM_BASE))) ||
					(MemSelectType == MemorySelectionType::Suspicious && ((qwOptFlags & MONETA_FLAG_FROM_BASE) || (pSbMap != nullptr && pSbMap->count((uint8_t*)(*SbItr)->GetBasic()->BaseAddress))))) {
					wchar_t AlignedAttribDesc[9] = { 0 };

					AlignName(SBlock::AttribDesc((*SbItr)->GetBasic()), AlignedAttribDesc, 8);

					if (Itr->second->GetType() == Entity::Type::PE_FILE && !dynamic_cast<PeVm::Body*>(Itr->second)->IsPhantom()) {
						//
						// Generate a list of all sections overlapping with this sblock and display them all. A typical example is a +r sblock at the end of the PE which encompasses all consecutive readonly sections ie. .rdata, .rsrc, .reloc
						//
						vector<PeVm::Section*> OverlapSections = dynamic_cast<PeVm::Body*>(Itr->second)->FindOverlapSect(*(*SbItr));

						if (OverlapSections.empty()) {
							Interface::Log("    0x%p:0x%08x | %ws | ?        | 0x%08x", (*SbItr)->GetBasic()->BaseAddress, (*SbItr)->GetBasic()->RegionSize, AlignedAttribDesc,
								SBlock::GetPrivateSize(this->GetHandle(), static_cast<uint8_t*>((*SbItr)->GetBasic()->BaseAddress), (uint32_t)(*SbItr)->GetBasic()->RegionSize));
							AppendOverlapSuspicion(pSbMap, (uint8_t*)(*SbItr)->GetBasic()->BaseAddress, false);
							Interface::Log("\r\n");
						}
						else{
							for (vector<PeVm::Section*>::const_iterator SectItr = OverlapSections.begin(); SectItr != OverlapSections.end(); ++SectItr) {
								wchar_t AlignedSectName[9] = { 0 };
								char AnsiSectName[9];

								strncpy_s(AnsiSectName, 9, (char*)(*SectItr)->GetHeader()->Name, 8);
								wstring UnicodeSectName = UnicodeConverter.from_bytes(AnsiSectName);
								AlignName((const wchar_t*)UnicodeSectName.c_str(), AlignedSectName, 8);

								Interface::Log("    0x%p:0x%08x | %ws | %ws | 0x%08x", (*SbItr)->GetBasic()->BaseAddress, (*SbItr)->GetBasic()->RegionSize, AlignedAttribDesc, AlignedSectName,
									SBlock::GetPrivateSize(this->GetHandle(), static_cast<uint8_t*>((*SbItr)->GetBasic()->BaseAddress), (uint32_t)(*SbItr)->GetBasic()->RegionSize));
								AppendOverlapSuspicion(pSbMap, (uint8_t*)(*SbItr)->GetBasic()->BaseAddress, false);
								Interface::Log("\r\n");

							}
						}
					}
					else {
						Interface::Log("    0x%p:0x%08x | %ws | 0x%08x", (*SbItr)->GetBasic()->BaseAddress, (*SbItr)->GetBasic()->RegionSize, AlignedAttribDesc,
							SBlock::GetPrivateSize(this->GetHandle(), static_cast<uint8_t*>((*SbItr)->GetBasic()->BaseAddress), (uint32_t)(*SbItr)->GetBasic()->RegionSize));
						AppendOverlapSuspicion(pSbMap, (uint8_t*)(*SbItr)->GetBasic()->BaseAddress, false);
						Interface::Log("\r\n");
					}

					EnumerateThreads(L"      ", (*SbItr)->GetThreads());

					if ((qwOptFlags & MONETA_FLAG_MEMDUMP)) {
						if (!(qwOptFlags & MONETA_FLAG_FROM_BASE)) {
							this->DumpBlock(ProcDmp, (*SbItr)->GetBasic(), L"      ");
						}
					}
				}
			}

			if ((qwOptFlags & MONETA_FLAG_MEMDUMP)) {
				if ((qwOptFlags & MONETA_FLAG_FROM_BASE)) {
					if (Entity::Dump(ProcDmp, *Itr->second)) {
						Interface::Log("      ~ Generated full region dump at 0x%p\r\n", Itr->second->GetStartVa());
					}
					else {
						Interface::Log("      ~ Failed to generate full region dump at 0x%p\r\n", Itr->second->GetStartVa());
					}
				}
			}
		}
	}
}

	/*
	bool bFileRange = false, bImageRange = false;

	for (list<SBlock*>::const_iterator RecordItr = this->SBlocks.begin(); RecordItr != this->SBlocks.end(); ++RecordItr) {
		uint32_t dwPrivateSize = 0;

		if ((*RecordItr)->GetBasic()->Type == MEM_MAPPED || (*RecordItr)->GetBasic()->Type == MEM_IMAGE) {
			dwPrivateSize = VmProcess::GetPrivateSize((uint8_t*)(*RecordItr)->GetBasic()->BaseAddress, (*RecordItr)->GetBasic()->RegionSize);
			if ((*RecordItr)->GetBasic()->AllocationBase == (*RecordItr)->GetBasic()->BaseAddress) {
				bFileRange = true;
				wchar_t FileName[MAX_PATH] = { 0 };
				HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, false, this->Pid);

				if (hProcess != nullptr) {
					if ((*RecordItr)->GetBasic()->Type == MEM_MAPPED) {
						if (GetMappedFileNameW(hProcess, (*RecordItr)->GetBasic()->AllocationBase, FileName, MAX_PATH)) {
							//Interface::Log("%ws\r\n", MappedFileName);
						}
						else {
							wcscpy_s(FileName, MAX_PATH, L"Page file");
						}
					}
					else {
						bImageRange = true;
						if (GetModuleFileNameExW(hProcess, (HMODULE)(*RecordItr)->GetBasic()->AllocationBase, FileName, MAX_PATH)) {
							//Interface::Log("%ws\r\n", ModuleFileName);
						}
						else {
							wcscpy_s(FileName, MAX_PATH, L"?");
							Interface::Log("!!!! FAILED to get module name\r\n");
						}
					}

					CloseHandle(hProcess);
				}
				else {
					wcscpy_s(FileName, MAX_PATH, L"Access denied");
				}

				Interface::Log("======[ 0x%p : %ws\r\n", (*RecordItr)->GetBasic()->BaseAddress, FileName);
			}
		}
		else {
			bFileRange = false;
			bImageRange = false;
			Interface::Log("======[ 0x%p\r\n", (*RecordItr)->GetBasic()->BaseAddress);
		}

		wchar_t Indent[40] = { 0 };

		wcscpy_s(Indent, 40, L"  ");

		if (bImageRange) {
			wcscat_s(Indent, 40, L"  ");
		}

		Interface::Log(
			"%wsAllocated base 0x%p\r\n"
			"%wsBase: 0x%p\r\n"
			"%wsSize: %zu\r\n",
			Indent,
			(*RecordItr)->GetBasic()->AllocationBase,
			Indent,
			(*RecordItr)->GetBasic()->BaseAddress,
			Indent,
			(*RecordItr)->GetBasic()->RegionSize);

		Interface::Log("%wsState: ", Indent);
		switch ((*RecordItr)->GetBasic()->State)
		{
		case MEM_COMMIT:
			Interface::Log("MEM_COMMIT\r\n");
			break;
		case MEM_RESERVE:
			Interface::Log("MEM_RESERVE\r\n");
			break;
		case MEM_FREE:
			Interface::Log("MEM_FREE\r\n");
			break;
		default:
			Interface::Log("?\r\n");
		}

		Interface::Log("%wsType: ", Indent);
		switch ((*RecordItr)->GetBasic()->Type)
		{
		case MEM_IMAGE:
			Interface::Log("MEM_IMAGE\r\n");
			break;
		case MEM_MAPPED:
			Interface::Log("MEM_MAPPED\r\n");
			break;
		case MEM_PRIVATE:
			Interface::Log("MEM_PRIVATE\r\n");
			break;
		default:
			Interface::Log("N/A\r\n");
		}

		Interface::Log("%wsPrivate size: %d\r\n", Indent, dwPrivateSize);
		Interface::Log("%wsCurrent permissions: 0x%08x\r\n", Indent, (*RecordItr)->GetBasic()->Protect);
		Interface::Log("%wsOriginal permissions: 0x%08x\r\n", Indent, (*RecordItr)->GetBasic()->AllocationProtect);

		if ((*RecordItr)->GetRegion() != nullptr) {
			Interface::Log("%wsRegion allocation base: 0x%p\r\n", Indent, (*RecordItr)->GetRegion()->AllocationBase);
			Interface::Log("%wsRegion size: %d\r\n", Indent, (*RecordItr)->GetRegion()->RegionSize);
			Interface::Log("%wsCommit size: %d\r\n", Indent, (*RecordItr)->GetRegion()->CommitSize);
			Interface::Log("%wsRegion type literal: 0x%08x\r\n", Indent, (*RecordItr)->GetRegion()->RegionType); // These fields do not match struct declaration, likely different across Windows versions. Ignore them for now.
		}

		Interface::Log("\r\n");
	}*/