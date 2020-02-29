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

// 1 = suspicious memory
// 2 = process info regardless of whether it contains suspicious memory
// 3 = all artifacts from enumerated processes
// 4 - status output while parsing memory for processes

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
					case Suspicion::Type::XPRV: {
						/* Filter cases for private executable memory

						*/

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
					}
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

void Process::EnumerateSBlocks(map<uint8_t*, vector<Suspicion*>> &SuspicionsMap, vector<SBlock*> SBlocks) {
	for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
		bool bSuspiciousSblock = false;
		wchar_t AlignedAttribDesc[9] = { 0 };

		AlignName(SBlock::AttribDesc((*SbItr)->GetBasic()), AlignedAttribDesc, 8);

		Interface::Log("    0x%p:0x%08x | %ws | 0x%08x", (*SbItr)->GetBasic()->BaseAddress, (*SbItr)->GetBasic()->RegionSize, AlignedAttribDesc,
			Moneta::GetPrivateSize(this->GetHandle(), static_cast<uint8_t*>((*SbItr)->GetBasic()->BaseAddress), (uint32_t)(*SbItr)->GetBasic()->RegionSize));

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
}

void Process::Enumerate(uint64_t qwMemdmpOptFlags) {
	bool bShownProc = false;
	MemDump ProcDmp(this->Handle, this->Pid);
	wchar_t DumpFilePath[MAX_PATH + 1] = { 0 };
	wstring_convert<codecvt_utf8_utf16<wchar_t>> UnicodeConverter;
	map <uint8_t*, map<uint8_t*, vector<Suspicion*>>> SuspicionsMap; // More efficient to only filter this map once. Currently filtering it for every single entity

	for (map<uint8_t*, Entity*>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		//printf("1\r\n");
		Suspicion::InspectEntity(*this, *Itr->second, SuspicionsMap);
		//printf("2\r\n");
		if (SuspicionsMap.size()) {
			//printf("3\r\n");
			//Interface::Log("\r\n%ws [%ws] : %d : %ws\r\n", this->Name.c_str(), this->ImageFilePath.c_str(), this->GetPid(), this->IsWow64() ? L"Wow64" : L"x64");
			FilterSuspicions(SuspicionsMap);
			//printf("filter done\r\n");
			auto AbMapItr = SuspicionsMap.find(Itr->second->GetStartVa()); // An iterator into the main ablock map which points to the entry for the sb map.

			//
			// Retrospectively enumerate the entire entity if a suspicious sblock was found within it, or enumerate it simply based on verbosity level
			//
			//printf("4\r\n");
			if (Interface::GetVerbosity() >= 3 || (Interface::GetVerbosity() < 3 && AbMapItr != SuspicionsMap.end())) {
				map<uint8_t*, vector<Suspicion*>>& RefSbMap = SuspicionsMap.at(Itr->second->GetStartVa());
				//printf("5\r\n");
				if (!bShownProc) {
					Interface::Log("\r\n%ws [%ws] : %d : %ws\r\n", this->Name.c_str(), this->ImageFilePath.c_str(), this->GetPid(), this->IsWow64() ? L"Wow64" : L"x64");
					bShownProc = true;
				}

				switch (Itr->second->GetType()) {
				case Entity::Type::PE_FILE: {
					PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>(Itr->second);

					if (PeEntity->IsNonExecutableImage()) {
						Interface::Log("  0x%p:0x%08x | Non-executable image | %ws", PeEntity->GetPeBase(), PeEntity->GetEntitySize(), PeEntity->GetPath().c_str());
					}
					else {
						Interface::Log("  0x%p:0x%08x | Executable image | %ws", PeEntity->GetPeBase(), PeEntity->GetEntitySize(), PeEntity->GetPath().c_str());
					}

					if (RefSbMap.count((uint8_t*)PeEntity->GetStartVa())) {
						vector<Suspicion*>& SuspicionsList = AbMapItr->second.at(AbMapItr->first);

						for (vector<Suspicion*>::const_iterator SuspItr = SuspicionsList.begin(); SuspItr != SuspicionsList.end(); ++SuspItr) {
							if ((*SuspItr)->IsFullEntitySuspicion()) {
								Interface::Log(" | %ws", (*SuspItr)->GetDescription().c_str());
							}
						}
					}

					Interface::Log("\r\n");

					if (!PeEntity->IsPhantom()) {
						vector<PeVm::Section*> Sections = PeEntity->GetSections();
						for (vector<PeVm::Section*>::const_iterator SectItr = Sections.begin(); SectItr != Sections.end(); ++SectItr) {
							vector<SBlock*> SBlocks = (*SectItr)->GetSBlocks();
							wchar_t AlignedSectName[9] = { 0 };
							char AnsiSectName[9];
							strncpy_s(AnsiSectName, 9, (char*)(*SectItr)->GetHeader()->Name, 8);
							wstring UnicodeSectName = UnicodeConverter.from_bytes(AnsiSectName);
							AlignName((const wchar_t*)UnicodeSectName.c_str(), AlignedSectName, 8);

							for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
								bool bSuspiciousSblock = false;
								wchar_t AlignedAttribDesc[9] = { 0 };

								AlignName(SBlock::AttribDesc((*SbItr)->GetBasic()), AlignedAttribDesc, 8);

								Interface::Log("    0x%p:0x%08x | %ws | %ws | 0x%08x", (*SbItr)->GetBasic()->BaseAddress, (*SbItr)->GetBasic()->RegionSize, AlignedAttribDesc, AlignedSectName,
									Moneta::GetPrivateSize(this->GetHandle(), static_cast<uint8_t*>((*SbItr)->GetBasic()->BaseAddress), (uint32_t)(*SbItr)->GetBasic()->RegionSize));

								if (RefSbMap.count((uint8_t*)(*SbItr)->GetBasic()->BaseAddress)) {
									vector<Suspicion*>& SuspicionsList = AbMapItr->second.at((uint8_t*)(*SbItr)->GetBasic()->BaseAddress);

									for (vector<Suspicion*>::const_iterator SuspItr = SuspicionsList.begin(); SuspItr != SuspicionsList.end(); ++SuspItr) {
										if (!(*SuspItr)->IsFullEntitySuspicion()) {
											Interface::Log(" | %ws", (*SuspItr)->GetDescription().c_str());
										}
									}
								}

								Interface::Log("\r\n");
								EnumerateThreads(L"      ", (*SbItr)->GetThreads());
							}
						}
					}
					else {
						//vector<SBlock*> SBlocks = PeEntity->GetSBlocks();
						//Interface::Log((WORD)FOREGROUND_RED, "  0x%016x:0x%08x | Image | %ws [Phantom]\r\n", PeEntity->GetStartVa(), PeEntity->GetEntitySize(), PeEntity->GetPath().c_str());
						EnumerateSBlocks(RefSbMap, PeEntity->GetSBlocks());
					}

					break;
				}
				case Entity::Type::MAPPED_FILE: {
					vector<SBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.
					Interface::Log("  0x%p:0x%08x | Mapped | %ws\r\n", SBlocks.front()->GetBasic()->BaseAddress, SBlocks.front()->GetBasic()->RegionSize, dynamic_cast<MappedFile*>(Itr->second)->GetPath().c_str());
					EnumerateSBlocks(RefSbMap, SBlocks);
					//Interface::Log("\r\n");
					break;
				}
				case Entity::Type::UNKNOWN: {
					vector<SBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

					if (SBlocks.front()->GetBasic()->Type == MEM_PRIVATE) {
						Interface::Log("  0x%p:0x%08x | Private\r\n", SBlocks.front()->GetBasic()->BaseAddress, (uint32_t)((uint8_t*)SBlocks.back()->GetBasic()->BaseAddress - SBlocks.front()->GetBasic()->BaseAddress) + SBlocks.back()->GetBasic()->RegionSize);
						EnumerateSBlocks(RefSbMap, SBlocks);
						//Interface::Log("\r\n");
					}

					break;
				}
				}
			}
		}
	}

	//
	// Generate memory dump for suspicions
	//

	if ((qwMemdmpOptFlags & MEMDMP_OPT_FLAG_SUSPICIOUS)) {
		bool bDmpFin;
		for (map <uint8_t*, map<uint8_t*, vector<Suspicion*>>>::const_iterator AbMapItr = SuspicionsMap.begin(); AbMapItr != SuspicionsMap.end(); ++AbMapItr) {
			bDmpFin = false;
			//printf("0x%p [%d sblocks]\r\n", AbMapItr->first, AbMapItr->second.size());

			for (map<uint8_t*, vector<Suspicion*>>::const_iterator SbMapItr = AbMapItr->second.begin(); !bDmpFin && SbMapItr != AbMapItr->second.end(); SbMapItr++) {
				//printf("  0x%p [%d list elements]\r\n", SbMapItr->first, SbMapItr->second.size());
				for (vector<Suspicion*>::const_iterator ListItr = SbMapItr->second.begin(); !bDmpFin && ListItr != SbMapItr->second.end(); ++ListItr) {

					if ((qwMemdmpOptFlags & MEMDMP_OPT_FLAG_FROM_BASE) || (*ListItr)->IsFullEntitySuspicion()) {
						if (Entity::Dump(ProcDmp, *(*ListItr)->GetParentObject())) {
							Interface::Log("      ~ Generated full region dump at 0x%p\r\n", (*ListItr)->GetParentObject()->GetStartVa());
						}
						else {
							Interface::Log("      ~ Failed to generate full region dump at 0x%p\r\n", (*ListItr)->GetParentObject()->GetStartVa());
						}

						bDmpFin = true;
					}
					else {
						if (ProcDmp.Create((*ListItr)->GetBlock()->GetBasic(), DumpFilePath, MAX_PATH + 1)) {
							Interface::Log("      ~ Memory dumped to %ws\r\n", DumpFilePath);
						}
						else {
							Interface::Log("      ~ Memory dump failed.\r\n");
						}
					}
					/*
					if (!(*ListItr)->IsFullEntitySuspicion()) {
						printf("    0x%p : %d : %ws\r\n", (*ListItr)->GetBlock()->GetBasic()->BaseAddress, (*ListItr)->GetType(), (*ListItr)->GetDescription().c_str());
					}
					else {
						printf("    0x%p : %d : %ws : Full entity\r\n", (*ListItr)->GetParentObject()->GetStartVa(), (*ListItr)->GetType(), (*ListItr)->GetDescription().c_str());
					}*/
				}
			}
		}
	}

	
	

			/*
			bool bTotalEntitySuspicion = false; // Indicates a full entity dump rather than an individual sblock regardless of "from-base" dump setting. For example for PEB unlinked modules.

			if (!bShownProc) {
				Interface::Log("\r\n%ws [%ws] : %d : %ws\r\n", this->Name.c_str(), this->ImageFilePath.c_str(), this->GetPid(), this->IsWow64() ? L"Wow64" : L"x64");
				bShownProc = true;
			}

			if (Itr->second->GetType() == Entity::Type::PE_FILE) {
				PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>(Itr->second);

				if (!PeEntity->IsSigned()) {
					nSuspiciousObjCount++;
					bTotalEntitySuspicion = true;
				}

				if (PeEntity->GetPe() != nullptr) {
					if (PeEntity->IsNonExecutableImage()) {
						Interface::Log("  0x%016x:0x%08x | Non-executable image | %ws", PeEntity->GetPeBase(), PeEntity->GetPe()->GetImageSize(), PeEntity->GetPath().c_str());
					}
					else {
						Interface::Log("  0x%016x:0x%08x | Executable image | %ws", PeEntity->GetPeBase(), PeEntity->GetPe()->GetImageSize(), PeEntity->GetPath().c_str());
					}

					if (!PeEntity->IsSigned()) {
						Interface::Log((WORD)FOREGROUND_RED, " | Unsigned");
					}
					else {
						Interface::Log(" | Signed");
					}

					//
					// Determine whether this image has a corresponding entry in the PEB, and whether or not this entry accurately reflects the mapped file it is associated with.
					//

					if (!PeEntity->IsNonExecutableImage()) {
						if (!PeEntity->GetPebModule().Exists()) { // The PEB module is queried by base address with GetModuleInfo/GetModuleFileNameExW rather than by name with GetModuleHandleEx
							Interface::Log((WORD)FOREGROUND_RED, " | Missing PEB module");
							nSuspiciousObjCount++;
							bTotalEntitySuspicion = true;
						}
						else {
							if (_wcsicmp(PeEntity->GetPebModule().GetPath().c_str(), PeEntity->GetPath().c_str()) != 0) { // Since the PEB module is queried by base address with GetModuleInfo/GetModuleFileNameExW rather than by name with GetModuleHandleEx, there may be a PEB link with a base address matching this image region but with a misleading name/path
								if (this->IsWow64()) { // This is an edge case in which in Wow64 a module may appear as C:\Windows\System32\kernel32.dll although the true path is C:\Windows\SysWOW64\kernel32.dll due to Wow64 FS redirection.
									wchar_t ReFormattedPath[MAX_PATH + 1] = { 0 };

									if (FileBase::ArchWow64PathExpand(PeEntity->GetPebModule().GetPath().c_str(), ReFormattedPath, MAX_PATH + 1)) {
										//Interface::Log("* Translated %ws to %ws\r\n", PeEntity->GetPebModule().GetPath().c_str(), ReFormattedPath);

										if (_wcsicmp(ReFormattedPath, PeEntity->GetPath().c_str()) != 0) {
											Interface::Log((WORD)FOREGROUND_RED, " | Mismatching PEB module");
											nSuspiciousObjCount++;
											bTotalEntitySuspicion = true;
										}
									}
								}
								else {
									Interface::Log((WORD)FOREGROUND_RED, " | Mismatching PEB module");
									nSuspiciousObjCount++;
									bTotalEntitySuspicion = true;
								}
							}
						}
					}

					Interface::Log("\r\n");

					vector<PeVm::Section*> Sections = PeEntity->GetSections();
					for (vector<PeVm::Section*>::const_iterator SectItr = Sections.begin(); SectItr != Sections.end(); ++SectItr) {
						vector<SBlock*> SBlocks = (*SectItr)->GetSBlocks();
						wchar_t AlignedSectName[9] = { 0 };
						char AnsiSectName[9];
						strncpy_s(AnsiSectName, 9, (char*)(*SectItr)->GetHeader()->Name, 8);
						wstring UnicodeSectName = UnicodeConverter.from_bytes(AnsiSectName);
						AlignName((const wchar_t*)UnicodeSectName.c_str(), AlignedSectName, 8);

						for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
							bool bSuspiciousSblock = false;
							wchar_t AlignedAttribDesc[6] = { 0 };

							AlignName(SBlock::AttribDesc((*SbItr)->GetBasic()), AlignedAttribDesc, 5);

							Interface::Log("    0x%p:0x%08x | %ws | %ws | 0x%08x", (*SbItr)->GetBasic()->BaseAddress, (*SbItr)->GetBasic()->RegionSize, AlignedAttribDesc, AlignedSectName,
								Moneta::GetPrivateSize(this->GetHandle(), static_cast<uint8_t*>((*SbItr)->GetBasic()->BaseAddress), (uint32_t)(*SbItr)->GetBasic()->RegionSize)
							);

							//
							// Headers with private pages
							//

							if (strcmp(reinterpret_cast<const char*>((*SectItr)->GetHeader()->Name), "Header") == 0 && Moneta::GetPrivateSize(this->GetHandle(), (uint8_t*)(*SbItr)->GetBasic()->BaseAddress, (uint32_t)(*SbItr)->GetBasic()->RegionSize)) {
								//Interface::Log("! PE headers have private pages within %ws [%ws:%d]\r\n", PeEntity->GetPath().c_str(), this->Name.c_str(), this->Pid);
								Interface::Log((WORD)FOREGROUND_RED, " | Modified header");
								bSuspiciousSblock = true;
								nSuspiciousObjCount++;
								//system("pause");
							}

							//
							// Executable regions within sections that are not marked as executable on disk. For example: data is +rw on disk but has +x sblock
							//

							if (SBlock::PageExecutable((*SbItr)->GetBasic()->Protect) && !((*SectItr)->GetHeader()->Characteristics & IMAGE_SCN_MEM_EXECUTE)) {
								//Interface::Log("! Sblock in section %s has executable permissions inconsistent with its file on disk at %ws [%ws:%d]\r\n",
								//	(*SectItr)->GetHeader()->Name, PeEntity->GetPath().c_str(),
								//	this->Name.c_str(), this->Pid);
								Interface::Log((WORD)FOREGROUND_RED, " | Inconsistent +x between disk and memory");
								bSuspiciousSblock = true;
								nSuspiciousObjCount++;
								//system("pause");
							}

							//
							// Executable regions in memory with private pages. Whether their +x is consistent with their section on disk is examined as well.
							//

							if (SBlock::PageExecutable((*SbItr)->GetBasic()->Protect) && Moneta::GetPrivateSize(this->GetHandle(), (uint8_t*)(*SbItr)->GetBasic()->BaseAddress, (uint32_t)(*SbItr)->GetBasic()->RegionSize)) {
								//Interface::Log("! Sblock in section %s is executable and has private pages within %ws - %ws PE on disk [%ws:%d]\r\n",
								//	(*SectItr)->GetHeader()->Name, PeEntity->GetPath().c_str(),
								//	((*SectItr)->GetHeader()->Characteristics & IMAGE_SCN_MEM_EXECUTE) ? L"matches" : L"does not match",
								//	this->Name.c_str(), this->Pid);
								Interface::Log((WORD)FOREGROUND_RED, " | Modified code");
								bSuspiciousSblock = true;
								nSuspiciousObjCount++;
								//system("pause");
							}

							Interface::Log("\r\n");
							vector<Thread*> Threads = (*SbItr)->GetThreads();

							for (vector<Thread*>::iterator ThItr = Threads.begin(); ThItr != Threads.end(); ++ThItr) {
								Interface::Log("      Thread 0x%p [TID 0x%08x]\r\n", (*ThItr)->GetEntryPoint(), (*ThItr)->GetTid());
								if (PeEntity->IsNonExecutableImage()) {
									Interface::Log("    !! Thread in non-executable image!\r\n");
									system("pause");
								}
							}

							if (!(qwMemdmpOptFlags & MEMDMP_OPT_FLAG_FROM_BASE) && (qwMemdmpOptFlags & MEMDMP_OPT_FLAG_SUSPICIOUS) && bSuspiciousSblock) {
								if (ProcDmp.Create((*SbItr)->GetBasic(), DumpFilePath, MAX_PATH + 1)) {
									Interface::Log("      ~ Memory dumped to %ws\r\n", DumpFilePath);
								}
								else {
									Interface::Log("      ~ Memory dump failed.\r\n");
								}
							}
						}
					}
				}
				else {
					vector<SBlock*> SBlocks = PeEntity->GetSBlocks();
					Interface::Log((WORD)FOREGROUND_RED, "  0x%016x:0x%08x | Image | %ws [Phantom]\r\n", PeEntity->GetStartVa(), PeEntity->GetEntitySize(), PeEntity->GetPath().c_str());

					for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
						bool bSuspiciousSblock = false;
						wchar_t AlignedAttribDesc[6] = { 0 };

						AlignName(SBlock::AttribDesc((*SbItr)->GetBasic()), AlignedAttribDesc, 5);

						Interface::Log("    0x%p:0x%08x | %ws | 0x%08x", (*SbItr)->GetBasic()->BaseAddress, (*SbItr)->GetBasic()->RegionSize, AlignedAttribDesc,
							Moneta::GetPrivateSize(this->GetHandle(), static_cast<uint8_t*>((*SbItr)->GetBasic()->BaseAddress), (uint32_t)(*SbItr)->GetBasic()->RegionSize));

						if (SBlock::PageExecutable((*SbItr)->GetBasic()->Protect)) {
							//Interface::Log("! Phantom image memory at sblock 0x%p is executable [%ws:%d]\r\n", (*SbItr)->GetBasic()->BaseAddress, this->Name.c_str(), this->Pid);
							Interface::Log((WORD)FOREGROUND_RED, " | Phantom +x image memory");
							bSuspiciousSblock = true;
							nSuspiciousObjCount++;
							//system("pause");
						}

						Interface::Log("\r\n");
						vector<Thread*> Threads = (*SbItr)->GetThreads();

						for (vector<Thread*>::iterator ThItr = Threads.begin(); ThItr != Threads.end(); ++ThItr) {
							Interface::Log("      Thread 0x%p [TID 0x%08x]\r\n", (*ThItr)->GetEntryPoint(), (*ThItr)->GetTid());
							system("pause");
						}

						if (!(qwMemdmpOptFlags & MEMDMP_OPT_FLAG_FROM_BASE) && (qwMemdmpOptFlags & MEMDMP_OPT_FLAG_SUSPICIOUS) && bSuspiciousSblock) {
							if (ProcDmp.Create((*SbItr)->GetBasic(), DumpFilePath, MAX_PATH + 1)) {
								Interface::Log("      ~ Memory dumped to %ws\r\n", DumpFilePath);
							}
							else {
								Interface::Log("      ~ Memory dump failed.\r\n");
							}
						}
					}
				}
			}
			else if (Itr->second->GetType() == Entity::Type::MAPPED_FILE) {
				vector<SBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

				Interface::Log("  0x%016x:0x%08x | Mapped | %ws\r\n", SBlocks.front()->GetBasic()->AllocationBase, SBlocks.front()->GetBasic()->RegionSize, dynamic_cast<MappedFile*>(Itr->second)->GetPath().c_str());
				//Interface::Log("S-Blocks:\r\n");

				for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
					bool bSuspiciousSblock = false;
					wchar_t AlignedAttribDesc[6] = { 0 };

					AlignName(SBlock::AttribDesc((*SbItr)->GetBasic()), AlignedAttribDesc, 5);

					//Interface::Log("  0x%p\r\n", (*SbItr)->GetBasic()->BaseAddress);
					Interface::Log("    0x%p:0x%08x | %ws", (*SbItr)->GetBasic()->BaseAddress, (*SbItr)->GetBasic()->RegionSize, AlignedAttribDesc);
					if (SBlock::PageExecutable((*SbItr)->GetBasic()->Protect)) {
						//Interface::Log("! Mapped memory at sblock 0x%p is executable [%ws:%d]\r\n", (*SbItr)->GetBasic()->BaseAddress, this->Name.c_str(), this->Pid);
						Interface::Log((WORD)FOREGROUND_RED, " | Abnormal executable mapped memory");
						//system("pause");
						bSuspiciousSblock = true;
						nSuspiciousObjCount++;
					}

					Interface::Log("\r\n");
					vector<Thread*> Threads = (*SbItr)->GetThreads();

					for (vector<Thread*>::iterator ThItr = Threads.begin(); ThItr != Threads.end(); ++ThItr) {
						Interface::Log("      Thread 0x%p [TID 0x%08x]\r\n", (*ThItr)->GetEntryPoint(), (*ThItr)->GetTid());
						system("pause");
					}

					if (!(qwMemdmpOptFlags & MEMDMP_OPT_FLAG_FROM_BASE) && (qwMemdmpOptFlags & MEMDMP_OPT_FLAG_SUSPICIOUS) && bSuspiciousSblock) {
						if (ProcDmp.Create((*SbItr)->GetBasic(), DumpFilePath, MAX_PATH + 1)) {
							Interface::Log("      ~ Memory dumped to %ws\r\n", DumpFilePath);
						}
						else {
							Interface::Log("      ~ Memory dump failed.\r\n");
						}
					}
				}
			}
			else {
				//Interface::Log("S-Blocks:\r\n");

				vector<SBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

				if (SBlocks.front()->GetBasic()->Type == MEM_PRIVATE) {
					Interface::Log("  0x%016x:0x%08x | Private\r\n", SBlocks.front()->GetBasic()->AllocationBase, (uint32_t)((uint8_t*)SBlocks.back()->GetBasic()->BaseAddress - SBlocks.back()->GetBasic()->AllocationBase) + SBlocks.back()->GetBasic()->RegionSize);
					for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
						bool bSuspiciousSblock = false;
						wchar_t AlignedAttribDesc[6] = { 0 };

						AlignName(SBlock::AttribDesc((*SbItr)->GetBasic()), AlignedAttribDesc, 5);

						Interface::Log("    0x%p:0x%08x | %ws", (*SbItr)->GetBasic()->BaseAddress, (*SbItr)->GetBasic()->RegionSize, AlignedAttribDesc);
						if (SBlock::PageExecutable((*SbItr)->GetBasic()->Protect)) {
							//Interface::Log("! Private memory at sblock 0x%p is executable [%ws:%d]\r\n", (*SbItr)->GetBasic()->BaseAddress, this->Name.c_str(), this->Pid);
							Interface::Log((WORD)FOREGROUND_RED, " | Abnormal executable private memory");
							//system("pause");
							bSuspiciousSblock = true;
							nSuspiciousObjCount++;
						}

						Interface::Log("\r\n");

						vector<Thread*> Threads = (*SbItr)->GetThreads();

						for (vector<Thread*>::iterator ThItr = Threads.begin(); ThItr != Threads.end(); ++ThItr) {
							Interface::Log("      Thread 0x%p [TID 0x%08x]\r\n", (*ThItr)->GetEntryPoint(), (*ThItr)->GetTid());
							system("pause");
						}

						if (!(qwMemdmpOptFlags & MEMDMP_OPT_FLAG_FROM_BASE) && (qwMemdmpOptFlags & MEMDMP_OPT_FLAG_SUSPICIOUS) && bSuspiciousSblock) {
							//printf("start va: 0x%p, size: 0x%08x\r\n", Itr->second->GetStartVa(), Itr->second->GetEntitySize());
							if (ProcDmp.Create((*SbItr)->GetBasic(), DumpFilePath, MAX_PATH + 1)) {
								Interface::Log("      ~ Memory dumped to %ws\r\n", DumpFilePath);
							}
							else {
								Interface::Log("      ~ Memory dump failed.\r\n");
							}
						}
					}
				}
				else {
					//Interface::Log("! Unknown memory type at 0x%p\r\n", Itr->first);
				}
			}

			if ((qwMemdmpOptFlags & MEMDMP_OPT_FLAG_SUSPICIOUS)) {
				if (nSuspiciousObjCount > 0 && (bTotalEntitySuspicion || (qwMemdmpOptFlags & MEMDMP_OPT_FLAG_FROM_BASE))) { // Suspicious object count must be re-calculated since it cannot be known if this entity enumeration is occuring due to verbosity level or genuine suspicion
					if (Entity::Dump(ProcDmp, *(Itr->second))) {
						Interface::Log("      ~ Generated full region dump\r\n");
					}
					else {
						Interface::Log("      ~ Failed to generate full region dump\r\n");
					}
				}
			}

		}

		//Interface::Log(3, "\r\n");
	}

	Interface::Log(2, "\r\n");
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
}