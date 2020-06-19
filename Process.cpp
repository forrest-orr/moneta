/*
__________________________________________________________________________________________
| _______  _____  __   _ _______ _______ _______                                         |
| |  |  | |     | | \  | |______    |    |_____|                                         |
| |  |  | |_____| |  \_| |______    |    |     |                                         |
|________________________________________________________________________________________|
| Moneta ~ Usermode memory scanner & malware hunter                                      |
|----------------------------------------------------------------------------------------|
| https://www.forrest-orr.net/post/malicious-memory-artifacts-part-ii-bypassing-scanners |
|----------------------------------------------------------------------------------------|
| Author: Forrest Orr - 2020                                                             |
|----------------------------------------------------------------------------------------|
| Contact: forrest.orr@protonmail.com                                                    |
|----------------------------------------------------------------------------------------|
| Licensed under GNU GPLv3                                                               |
|________________________________________________________________________________________|
| ## Features                                                                            |
|                                                                                        |
| ~ Query the memory attributes of any accessible process(es).                           |
| ~ Identify private, mapped and image memory.                                           |
| ~ Correlate regions of memory to their underlying file on disks.                       |
| ~ Identify PE headers and sections corresponding to image memory.                      |
| ~ Identify modified regions of mapped image memory.                                    |
| ~ Identify abnormal memory attributes indicative of malware.                           |
| ~ Create memory dumps of user-specified memory ranges                                  |
| ~ Calculate memory permission/type statistics                                          |
|________________________________________________________________________________________|

*/

#include "StdAfx.h"
#include "FileIo.hpp"
#include "PeFile.hpp"
#include "Processes.hpp"
#include "Memory.hpp"
#include "Interface.hpp"
#include "MemDump.hpp"
#include "Ioc.hpp"
#include "Scanner.hpp"
#include "Signing.h"
#include "PEB.h"
#include "DotNetNative.h"

using namespace std;
using namespace Memory;
using namespace Processes;

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
			delete dynamic_cast<Region*>(Itr->second);;
		}
	}
}

Process::Process(uint32_t dwPid) : Pid(dwPid) {
	this->Handle = OpenProcess(PROCESS_VM_READ | PROCESS_QUERY_INFORMATION, false, dwPid);

	if (this->Handle != nullptr) {
		wchar_t ImageName[MAX_PATH + 1] = { 0 }, DevFilePath[MAX_PATH + 1] = { 0 };

		if (GetModuleBaseNameW(this->Handle, nullptr, ImageName, MAX_PATH + 1) && GetProcessImageFileNameW(this->Handle, DevFilePath, sizeof(DevFilePath))) { // This API uses the image base from the PEB - if it has been moved to a non-image region this call will fail.
			wchar_t ImageFilePath[MAX_PATH + 1] = { 0 };

			if (FileBase::TranslateDevicePath(DevFilePath, ImageFilePath)) {
				this->Name = wstring(ImageName);
				this->ImageFilePath = wstring(ImageFilePath);
			}
		}

		if (this->Name.empty()) {
			this->Name = L"Unknown";
			this->ImageFilePath = L"?";
		}

		Interface::Log(Interface::VerbosityLevel::Debug, "... mapping address space of PID %d [%ws]\r\n", this->Pid, this->Name.c_str());
		static IsWow64Process_t IsWow64Process = reinterpret_cast<IsWow64Process_t>(GetProcAddress(GetModuleHandleW(L"Kernel32.dll"), "IsWow64Process"));

		if (IsWow64Process != nullptr) {
			BOOL bSelfWow64 = FALSE;

			if (IsWow64Process(GetCurrentProcess(), static_cast<PBOOL>(&bSelfWow64))) {
				if (IsWow64Process(this->Handle, static_cast<PBOOL>(&this->Wow64))) {
					if (this->IsWow64()) {
						Interface::Log(Interface::VerbosityLevel::Debug, "... PID %d is Wow64\r\n", this->Pid);
					}
					else {
						if (bSelfWow64) {
							Interface::Log(Interface::VerbosityLevel::Debug, "... cannot scan non-Wow64 process from Wow64 Moneta instance\r\n");
							throw 3;
						}
					}
				}
			}
		}

		int32_t nClrVersion = QueryDotNetVersion(this->Pid);

		if (nClrVersion != -1) {
			this->ClrVersion = nClrVersion;
		}
		else {
			this->ClrVersion = 0;
		}

		this->DmpCtx = new MemDump(this->Handle, this->Pid);

		// CreateToolhelp32Snapshot doesn't work work cross-arhitecture heap enumeration - use the PEB to walk the heaps. Note that it was confirmed private +RWX entries in .NET process (other than executable primary heaps) are not sub-heaps which can be enumerated with Heap32First/Next

		static NtQueryInformationProcess_t NtQueryInformationProcess = reinterpret_cast<NtQueryInformationProcess_t>(GetProcAddress(GetModuleHandleW(L"Ntdll.dll"), "NtQueryInformationProcess"));
		NTSTATUS NtStatus;
		void* RemotePeb = nullptr;
		uint32_t dwPebSize = 0;
		PROCESS_BASIC_INFORMATION Pbi = { 0 };

		if (this->IsWow64()) {
			NtStatus = NtQueryInformationProcess(this->Handle, ProcessWow64Information, &RemotePeb, sizeof(RemotePeb), nullptr);
		}
		else {
			NtStatus = NtQueryInformationProcess(this->Handle, ProcessBasicInformation, &Pbi, sizeof(Pbi), nullptr);

			if (NT_SUCCESS(NtStatus)) {
				RemotePeb = Pbi.PebBaseAddress;
			}
		}

		if (RemotePeb != nullptr) {
			Interface::Log(Interface::VerbosityLevel::Debug, "... PEB of 0x%p\r\n", RemotePeb);

			if (this->IsWow64()) {
				PEB32* LocalPeb = new PEB32;
				dwPebSize = sizeof(PEB32);

				if (ReadProcessMemory(this->Handle, RemotePeb, LocalPeb, dwPebSize, nullptr)) {
					uint32_t dwNumberOfHeaps = LocalPeb->NumberOfHeaps;
					uint32_t dwHeapsSize = dwNumberOfHeaps * sizeof(uint32_t);
					uint32_t* Heaps = new uint32_t[dwNumberOfHeaps];

					this->ImageBase = reinterpret_cast<void*>(LocalPeb->ImageBaseAddress);
					Interface::Log(Interface::VerbosityLevel::Debug, "... successfully read remote PEB to local memory (%d heaps) - image base 0x%p\r\n", dwNumberOfHeaps, this->ImageBase);

					if (ReadProcessMemory(this->Handle, reinterpret_cast<void*>(LocalPeb->ProcessHeaps), Heaps, dwHeapsSize, nullptr)) {
						Interface::Log(Interface::VerbosityLevel::Debug, "... successfully read remote heaps to local memory.\r\n");

						for (uint32_t dwX = 0; dwX < dwNumberOfHeaps; dwX++) {
							Interface::Log(Interface::VerbosityLevel::Debug, "... 0x%08x\r\n", Heaps[dwX]);
							this->Heaps.push_back(reinterpret_cast<void*>(Heaps[dwX]));
						}
					}
				}

				delete LocalPeb;
			}
			else {
				PEB64* LocalPeb = new PEB64;
				dwPebSize = sizeof(PEB64);

				if (ReadProcessMemory(this->Handle, RemotePeb, LocalPeb, dwPebSize, nullptr)) {
					uint32_t dwNumberOfHeaps = LocalPeb->NumberOfHeaps;
					uint32_t dwHeapsSize = dwNumberOfHeaps * sizeof(void*);
					void** Heaps = new void* [dwNumberOfHeaps];

					this->ImageBase = reinterpret_cast<void*>(LocalPeb->ImageBaseAddress);
					Interface::Log(Interface::VerbosityLevel::Debug, "... successfully read remote PEB to local memory (%d heaps) - image base 0x%p\r\n", dwNumberOfHeaps, this->ImageBase);

					if (ReadProcessMemory(this->Handle, reinterpret_cast<void*>(LocalPeb->ProcessHeaps), Heaps, dwHeapsSize, nullptr)) {
						Interface::Log(Interface::VerbosityLevel::Debug, "... successfully read remote heaps to local memory.\r\n");

						for (uint32_t dwX = 0; dwX < dwNumberOfHeaps; dwX++) {
							Interface::Log(Interface::VerbosityLevel::Debug, "... 0x%p\r\n", Heaps[dwX]);
							this->Heaps.push_back(Heaps[dwX]);
						}
					}
				}

				delete LocalPeb;
			}
		}

		HANDLE hThreadSnap = INVALID_HANDLE_VALUE;
		THREADENTRY32 ThreadEntry;

		if ((hThreadSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0)) != INVALID_HANDLE_VALUE) {
			ThreadEntry.dwSize = sizeof(THREADENTRY32);

			if (Thread32First(hThreadSnap, &ThreadEntry)) {
				do {
					if (ThreadEntry.th32OwnerProcessID == this->Pid) {
						try {
							this->Threads.push_back(new Thread(ThreadEntry.th32ThreadID, *this));
						}
						catch (int32_t nError) {
							Interface::Log(Interface::VerbosityLevel::Surface, "... failed to query thread information for TID %d in PID %d: cancelling scan of process.\r\n", ThreadEntry.th32ThreadID, this->Pid);
							throw 2;
						}
					}
				} while (Thread32Next(hThreadSnap, &ThreadEntry));
			}

			CloseHandle(hThreadSnap);
			Interface::Log(Interface::VerbosityLevel::Debug, "... associated a total of %d threads with the current process.\r\n", this->Threads.size());
		}

		SIZE_T cbRegionSize = 0;
		vector<Subregion*> Subregions;
		vector<Subregion*>::iterator Region;

		for (uint8_t* pBaseAddr = nullptr;; pBaseAddr += cbRegionSize) {
			MEMORY_BASIC_INFORMATION* Mbi = new MEMORY_BASIC_INFORMATION;

			if (VirtualQueryEx(this->Handle, pBaseAddr, Mbi, sizeof(MEMORY_BASIC_INFORMATION)) == sizeof(MEMORY_BASIC_INFORMATION)) {
				cbRegionSize = Mbi->RegionSize;

				if (!Subregions.empty()) { // If the subregion list is empty then there is no region base for comparison
					if (Mbi->AllocationBase != (*Region)->GetBasic()->AllocationBase) {
						this->Entities.insert(make_pair(static_cast<uint8_t*>((*Region)->GetBasic()->AllocationBase), Entity::Create(*this, Subregions)));
						Subregions.clear();
					}
				}

				Subregions.push_back(new Subregion(*this, Mbi));
				Region = Subregions.begin();
			}
			else {
				if (!Subregions.empty()) { // Edge case: new region not yet found but finished enumerating subregions.
					this->Entities.insert(make_pair(static_cast<uint8_t*>((*Region)->GetBasic()->AllocationBase), Entity::Create(*this, Subregions)));
				}

				delete Mbi;
				break;
			}
		}
	}
	else {
		Interface::Log(Interface::VerbosityLevel::Debug, "... failed to open handle to PID %d\r\n", this->Pid);
		throw 1;
	}
}

void Process::EnumerateThreads(const wstring Indent) {
	for (vector<Processes::Thread*>::iterator ThItr = this->Threads.begin(); ThItr != Threads.end(); ++ThItr) {
		Interface::Log(Interface::VerbosityLevel::Surface, "%wsThread 0x%p [TID 0x%08x]\r\n", Indent.c_str(), (*ThItr)->GetEntryPoint(), (*ThItr)->GetTid());
	}
}

PeVm::Body* Process::GetLoadedModule(wstring Name) const {
	wstring SanitizedName = Name;
	transform(SanitizedName.begin(), SanitizedName.end(), SanitizedName.begin(), ::toupper);

	for (map<uint8_t*, Entity*>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		if (Itr->second->GetType() == Entity::Type::PE_FILE) {
			PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>(Itr->second);
			wstring CurrentName = PeEntity->GetPebModule().GetName();

			transform(CurrentName.begin(), CurrentName.end(), CurrentName.begin(), ::toupper);

			if (CurrentName == SanitizedName) {
				return PeEntity;
			}
		}
	}

	return nullptr;
}

int32_t Process::AppendOverlapIoc(map<uint8_t*, list<Ioc *>>* Iocs, uint8_t *pSubregionAddress, bool bEntityTop, vector<Ioc*>* SelectedIocs) {
	assert(pSubregionAddress != nullptr);
	assert(SelectedIocs != nullptr);

	int32_t nCount = 0;

	if (Iocs != nullptr && Iocs->count(pSubregionAddress)) {
		list<Ioc *>& IocsList = Iocs->at(pSubregionAddress);

		for (list<Ioc *>::const_iterator SuspItr = IocsList.begin(); SuspItr != IocsList.end(); ++SuspItr) {
			if (bEntityTop == (*SuspItr)->IsFullEntityIoc()) {
				Interface::Log(Interface::VerbosityLevel::Surface, " | ");
				Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Red, "%ws", (*SuspItr)->GetDescription((*SuspItr)->GetType()).c_str());
				nCount++;

				if (SelectedIocs != nullptr) {
					SelectedIocs->push_back(*SuspItr);
				}
			}
		}
	}

	return nCount;
}

int32_t Process::AppendSubregionAttributes(Subregion *Sbr) {
	int32_t nCount = 0;
	
	if ((Sbr->GetFlags() & MEMORY_SUBREGION_FLAG_HEAP)) {
		Interface::Log(Interface::VerbosityLevel::Surface, " | ");
		Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Yellow, "Heap");
		nCount++;
	}

	if ((Sbr->GetFlags() & MEMORY_SUBREGION_FLAG_TEB)) {
		Interface::Log(Interface::VerbosityLevel::Surface, " | ");
		Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Yellow, "TEB");
		nCount++;
	}

	if ((Sbr->GetFlags() & MEMORY_SUBREGION_FLAG_STACK)) {
		Interface::Log(Interface::VerbosityLevel::Surface, " | ");
		Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Yellow, "Stack");
		nCount++;
	}

	if ((Sbr->GetFlags() & MEMORY_SUBREGION_FLAG_DOTNET)) {
		Interface::Log(Interface::VerbosityLevel::Surface, " | ");
		Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Yellow, ".NET");
		nCount++;
	}

	if ((Sbr->GetFlags() & MEMORY_SUBREGION_FLAG_BASE_IMAGE)) {
		Interface::Log(Interface::VerbosityLevel::Surface, " | ");
		Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Yellow, "Primary image base");
		nCount++;
	}

	return nCount;
}

int32_t Process::SubEntityIocCount(map<uint8_t*, list<Ioc*>>* Iocs, uint8_t* pSubregionAddress) {
	assert(pSubregionAddress != nullptr);
	int32_t nCount = 0;

	if (Iocs != nullptr && Iocs->count(pSubregionAddress)) {
		list<Ioc*>& IocsList = Iocs->at(pSubregionAddress);

		for (list<Ioc*>::const_iterator SuspItr = IocsList.begin(); SuspItr != IocsList.end(); ++SuspItr) {
			if (!(*SuspItr)->IsFullEntityIoc()) {
				nCount++;
			}
		}
	}

	return nCount;
}

bool Process::DumpBlock(MemDump &DmpCtx, const MEMORY_BASIC_INFORMATION *Mbi, wstring Indent) {
	assert(Mbi != nullptr);
	wchar_t DmpFilePath[MAX_PATH + 1] = { 0 };

	if (Mbi->State == MEM_COMMIT) {
		if (DmpCtx.Create(Mbi, DmpFilePath, MAX_PATH + 1)) {
			Interface::Log(Interface::VerbosityLevel::Surface, "%ws~ Memory dumped to %ws\r\n", Indent.c_str(), DmpFilePath);
			return true;
		}
		else {
			Interface::Log(Interface::VerbosityLevel::Surface, "%ws~ Memory dump failed.\r\n", Indent.c_str());
		}
	}

	return false;
}
/*
void EnumReferencesMap(map <uint8_t*, vector<uint8_t*>> ReferencesMap) {
	for (map <uint8_t*, vector<uint8_t*>>::const_iterator AbMapItr = ReferencesMap.begin(); AbMapItr != ReferencesMap.end(); ++AbMapItr) {
		Interface::Log(Interface::VerbosityLevel::Surface, "0x%p [%d subregions]\r\n", AbMapItr->first, AbMapItr->second.size());
		for (vector<uint8_t*>::const_iterator RefAddrItr = AbMapItr->second.begin(); RefAddrItr != AbMapItr->second.end(); RefAddrItr++) {
			Interface::Log(Interface::VerbosityLevel::Surface, "  0x%p\r\n", (*RefAddrItr));
		}
	}
}*/

template<typename Address_t> int32_t ScanChunkForAddress(uint8_t *pBuf, uint32_t dwSize, const uint8_t* pReferencedAddress, const uint32_t dwRegionSize) {
	assert(pBuf != nullptr);
	assert(pReferencedAddress != nullptr);

	for (int32_t nOffset = 0; nOffset < dwSize; nOffset++) {
		Address_t PotentialAddress = *(Address_t*)&pBuf[nOffset];

		if (!dwRegionSize && PotentialAddress == reinterpret_cast<Address_t>(pReferencedAddress)) {
			return nOffset;
		}

		if (PotentialAddress >= reinterpret_cast<Address_t>(pReferencedAddress) && PotentialAddress < reinterpret_cast<Address_t>(pReferencedAddress + dwRegionSize)) {
			return nOffset;
		}
	}

	return -1;
}


int32_t Process::SearchReferences(MemDump &DmpCtx, map <uint8_t*, vector<uint8_t*>> &ReferencesMap, const uint8_t* pReferencedAddress, const uint32_t dwRegionSize) const {
	int32_t nRefTotal = 0;

	for (map<uint8_t*, Entity*>::const_iterator EntItr = this->Entities.begin(); EntItr != this->Entities.end(); ++EntItr) {
		vector<Subregion*> Subregions = EntItr->second->GetSubregions();

		for (vector<Subregion*>::const_iterator SbrItr = Subregions.begin(); SbrItr != Subregions.end(); ++SbrItr) {
			uint8_t* pDmpBuf = nullptr;
			uint32_t dwDmpSize = 0;

			if ((*SbrItr)->GetBasic()->Protect == PAGE_READONLY) continue;
			if ((*SbrItr)->GetBasic()->State != MEM_COMMIT) continue;

			if (DmpCtx.Create((*SbrItr)->GetBasic(), &pDmpBuf, &dwDmpSize)) {
				int32_t nOffset;
				//Interface::Log(Interface::VerbosityLevel::Surface, "... successfully dumped memory at 0x%p (%d bytes)\r\n", (*SbrItr)->GetBasic()->BaseAddress, (*SbrItr)->GetBasic()->RegionSize);

				if((nOffset = ScanChunkForAddress<uint64_t>(pDmpBuf, dwDmpSize, pReferencedAddress, dwRegionSize)) != -1) {
					//
					// In the event that an entry does not already exist in the reference map for this entity, create one with an empty vector. Otherwise, point the vector reference at the existing vector
					//

					auto AbMapItr = ReferencesMap.find(static_cast<unsigned char*>(const_cast<void*>(EntItr->second->GetStartVa()))); // An iterator into the main region map which points to the entry for the sub-region vector.
					vector<uint8_t*>* SbrMap = nullptr;

					if (AbMapItr == ReferencesMap.end()) {
						ReferencesMap.insert(make_pair(static_cast<unsigned char*>(const_cast<void*>(EntItr->second->GetStartVa())), vector<uint8_t*>()));
					}

					SbrMap = &ReferencesMap.at(static_cast<unsigned char*>(const_cast<void*>(EntItr->second->GetStartVa()))); // This will always be successful
					SbrMap->push_back(static_cast<uint8_t*>(const_cast<void*>((*SbrItr)->GetBasic()->BaseAddress)));
					Interface::Log(Interface::VerbosityLevel::Debug, "... found referenced address 0x%p at 0x%p (offset 0x%08x within 0x%p)\r\n", pReferencedAddress, static_cast<uint8_t*>(const_cast<void*>((*SbrItr)->GetBasic()->BaseAddress)) + nOffset, nOffset, (*SbrItr)->GetBasic()->BaseAddress);
					nRefTotal++;
				}

				delete [] pDmpBuf;
			}
		}
	}
	
	return nRefTotal;
}

int32_t Process::SearchDllDataReferences(const uint8_t* pReferencedAddress, const uint32_t dwRegionSize) const {
	int32_t nRefTotal = 0;

	for (map<uint8_t*, Entity*>::const_iterator EntItr = this->Entities.begin(); EntItr != this->Entities.end(); ++EntItr) {
		if (EntItr->second->GetType() == Entity::Type::PE_FILE) {
			PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>(EntItr->second);

			if (PeEntity != nullptr && (_wcsicmp(PeEntity->GetPebModule().GetName().c_str(), L"clr.dll") == 0 || _wcsicmp(PeEntity->GetPebModule().GetName().c_str(), L"mscorwks.dll") == 0)) { // https://docs.microsoft.com/en-us/windows-hardware/drivers/debugger/debugging-managed-code provides chart of CLR versions of their DLL: only mscorwks.dll and clr.dll are used.
				PeVm::Section* DataSect = PeEntity->GetSection(".data");

				if (DataSect != nullptr) {
					uint8_t* Buf = new uint8_t[DataSect->GetEntitySize()];

					if (ReadProcessMemory(this->GetHandle(), DataSect->GetStartVa(), Buf, DataSect->GetEntitySize(), nullptr)) {
						int32_t nOffset;

						if ((nOffset = ScanChunkForAddress<uint64_t>(Buf, DataSect->GetEntitySize(), pReferencedAddress, dwRegionSize)) != -1) {
							Interface::Log(Interface::VerbosityLevel::Debug, "... found private executable region address 0x%p at 0x%p (offset 0x%08x) in %ws .data section\r\n",
								pReferencedAddress, (uint8_t *)DataSect->GetStartVa() + nOffset, nOffset, PeEntity->GetPebModule().GetName().c_str());
							nRefTotal++;
						}
					}

					delete[] Buf;
				}
			}
		}
	}

	return nRefTotal;
}

bool Process::CheckDotNetAffiliation(const uint8_t* pReferencedAddress, const uint32_t dwRegionSize) const {
	int32_t nRefTotal = 0;
	map <uint8_t*, vector<uint8_t*>> PrvXRefMap;

	if (this->SearchReferences(*this->DmpCtx, PrvXRefMap, pReferencedAddress, dwRegionSize) > 0) {
		if(!(nRefTotal = SearchDllDataReferences(pReferencedAddress, dwRegionSize))) {
			for (map <uint8_t*, vector<uint8_t*>>::const_iterator RefItr = PrvXRefMap.begin(); RefItr != PrvXRefMap.end(); ++RefItr) {
				map <uint8_t*, vector<uint8_t*>> RefMap;

				if(SearchDllDataReferences(RefItr->first, 0)){
					nRefTotal++;
				}
			}
		}
	}

	return nRefTotal > 0 ? true : false;
}

/*  vector<Subregion*> Process::Enumerate(ScannerContext& ScannerCtx)
	1. Loop entities to build suspicions list
	2. Filter suspicions
	3. Loop entities for enumeration if:
	   mselect == process
	   mselect == subregion and this eneity contains the subregion
	   mselect == suspicious and there is 1 or more suspicions
	   mselect == referenced and this entity contains 1 or more
	4. Show the process if it has not been shown before
	5. Display entity info (exe image, private, mapped + total size) ALWAYS (criteria already applied going into loop) along with suspicions (if any)
	5. For PEs, loop subregions/sections. Enum if:
		mselect == process
		mselect == subregion && subregion == current, or the  "from base" option is set
		or mselect == suspicious and the current subregion has a suspicion or the  "from base" option is set
		mselect == referenced and this subregion contains one or more reference or the "from base" option is set
	6. Dump the current subregion based on the same criteria as above but ONLY if the "from base" option is not set.
	7. Dump the entire PE entity if it met the initial enum criteria and "from base" option is set
	8. For private/mapped loop subregions and enum if:
		mselect == process
		mselect == subregion && subregion == current, or the  "from base" option is set
		mselect == suspicious and the current subregion has a suspicion or the  "from base" option is set
		mselect == referenced and this subregion contains one or more reference
	9. Dump the current subregion based on the same criteria as above but ONLY if the "from base" option is not set.
	10. Dump the entire entity if it met the initial enum criteria and "from base" option is set
*/

void Process::Enumerate(ScannerContext& ScannerCtx, vector<Ioc*> *SelectedIocs, vector<Subregion*> *SelectedSbrs) {
	bool bShownProc = false;
	wstring_convert<codecvt_utf8_utf16<wchar_t>> UnicodeConverter;
	//map <uint8_t*, map<uint8_t*, list<Ioc*>>>* IocMap = new map <uint8_t*, map<uint8_t*, list<Ioc*>>>();
	IocMap Iocs;
	map <uint8_t*, vector<uint8_t *>> ReferencesMap;

	//
	// Build suspicions list for following memory selection and apply filters to it.
	//

	for (map<uint8_t*, Entity*>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		Ioc::InspectEntity(*this, *Itr->second, Iocs.GetMap());
	}

	if (Iocs.GetMap()->size()) {
		Iocs.Filter(ScannerCtx.GetFilters());
	}

	//
	// Build map of references to user-specified address if applicable for scanner context
	//

	if (ScannerCtx.GetMst() == ScannerContext::MemorySelection_t::Referenced) {
		//this->SearchReferences(DmpCtx, ReferencesMap, ScannerCtx.GetAddress(), ScannerCtx.GetRegionSize());

		for (map<uint8_t*, Entity*>::const_iterator EntItr = Entities.begin(); EntItr != Entities.end(); ++EntItr) {
			if (EntItr->second->GetSubregions().front()->GetBasic()->Type == MEM_PRIVATE) {
				if (EntItr->second->IsPartiallyExecutable()) {
					//this->SearchReferences(DmpCtx, ReferencesMap, static_cast<const uint8_t*>(EntItr->second->GetStartVa()), EntItr->second->GetEntitySize());
				}
			}
		}
	}

	//
	// Display information on each selected subregion and/or entity within the process address space
	//

	for (map<uint8_t*, Entity*>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		auto SuspMapAbItr = Iocs.GetMap()->find(static_cast<unsigned char *>(const_cast<void*>(Itr->second->GetStartVa()))); // An iterator into the main region map which points to the entry for the sb map.
		auto RefMapAbItr = ReferencesMap.find(static_cast<unsigned char*>(const_cast<void*>(Itr->second->GetStartVa()))); // An iterator into the main region map which points to the entry for the sb map.
		map<uint8_t*, list<Ioc *>>* SuspSbrMap = nullptr;
		vector<uint8_t*>* RefSbrVec = nullptr;

		if (SuspMapAbItr != Iocs.GetMap()->end()) {
			SuspSbrMap = &Iocs.GetMap()->at(static_cast<unsigned char*>(const_cast<void*>(Itr->second->GetStartVa())));
		}

		if (RefMapAbItr != ReferencesMap.end()) {
			RefSbrVec = &ReferencesMap.at(static_cast<unsigned char*>(const_cast<void*>(Itr->second->GetStartVa())));
		}

		if (ScannerCtx.GetMst() == ScannerContext::MemorySelection_t::All ||
			(ScannerCtx.GetMst() == ScannerContext::MemorySelection_t::Block && ((ScannerCtx.GetAddress() >= Itr->second->GetStartVa()) && (ScannerCtx.GetAddress() < Itr->second->GetEndVa()))) ||
			(ScannerCtx.GetMst() == ScannerContext::MemorySelection_t::Suspicious && SuspMapAbItr != Iocs.GetMap()->end()) ||
			(ScannerCtx.GetMst() == ScannerContext::MemorySelection_t::Referenced && RefMapAbItr != ReferencesMap.end())) {

			//
			// Display process and/or entity information: the criteria has already been met for this to be done without further checks
			//

			if (!bShownProc) {
				Interface::Log(Interface::VerbosityLevel::Surface, "\r\n");
				Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Turquoise, "%ws", this->Name.c_str());
				Interface::Log(Interface::VerbosityLevel::Surface, " : ");
				Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Turquoise, "%d", this->GetPid());
				Interface::Log(Interface::VerbosityLevel::Surface, " : ");
				Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Turquoise, "%ws", this->IsWow64() ? L"Wow64" : L"x64");
				Interface::Log(Interface::VerbosityLevel::Surface, " : ");
				Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Turquoise, "%ws", this->ImageFilePath.c_str());

				if (this->GetClrVersion()) {
					Interface::Log(Interface::VerbosityLevel::Surface, " : ");
					Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Turquoise, "CLR v%d", this->GetClrVersion());
				}

				Interface::Log(Interface::VerbosityLevel::Surface, "\r\n");
				bShownProc = true;
			}

			if (Itr->second->GetSubregions().front()->GetBasic()->State != MEM_FREE) {
				Interface::Log(Interface::VerbosityLevel::Surface, "  0x%p:0x%08x   ", Itr->second->GetStartVa(), Itr->second->GetEntitySize());
			}

			if (Itr->second->GetType() == Entity::Type::PE_FILE) {
				PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>(Itr->second);
				wchar_t ImgType[22], AlignedImgType[22]; // Length of 20, + 1 for prefix, +1 for null
				Interface::Log(Interface::VerbosityLevel::Surface, "|");

				wcscpy_s(ImgType, 22, L" ");

				if (PeEntity->GetPeFile() != nullptr) {
					if (PeEntity->GetPeFile()->IsDotNet()) {
						wcscat_s(ImgType, 22, L".NET ");
					}

					if (PeEntity->GetPeFile()->IsExe()) {
						wcscat_s(ImgType, 22, L"EXE ");
					}
					else if (PeEntity->GetPeFile()->IsDll()) {
						wcscat_s(ImgType, 22, L"DLL ");
					}
				}
				else {
					wcscat_s(ImgType, 22, L"Phantom ");
				}

				if (PeEntity->IsNonExecutableImage()) {
					wcscat_s(ImgType, 22, L"NX-Image");
				}
				else {
					wcscat_s(ImgType, 22, L"Image");
				}


				Interface::AlignStr(ImgType, AlignedImgType, 21);
				Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Gold, "%ws", AlignedImgType);

				if (!PeEntity->GetFileBase()->IsPhantom()) {
					Interface::Log(Interface::VerbosityLevel::Surface, "| %ws", PeEntity->GetFileBase()->GetPath().c_str());
				}
			}
			else if (Itr->second->GetType() == Entity::Type::MAPPED_FILE) {
				Interface::Log(Interface::VerbosityLevel::Surface, "| ");
				Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Gold, "Mapped");
				Interface::Log(Interface::VerbosityLevel::Surface, "   | %ws", dynamic_cast<MappedFile*>(Itr->second)->GetFileBase()->GetPath().c_str());
			}
			else {
				if (Itr->second->GetSubregions().front()->GetBasic()->Type == MEM_PRIVATE) {
					Interface::Log(Interface::VerbosityLevel::Surface, "| ");
					Interface::Log(Interface::VerbosityLevel::Surface, Interface::ConsoleColor::Gold, "Private");
				}
				else {
					continue;
				}
			}

			//
			// Display suspicions associated with the entity, if the current entity has any suspicions associated with it
			//

			//AppendSubregionAttributes(Itr->second->GetSubregions().front());
			AppendOverlapIoc(SuspSbrMap, static_cast<uint8_t*>(const_cast<void *>(Itr->second->GetStartVa())), true, SelectedIocs);
			Interface::Log(Interface::VerbosityLevel::Surface, "\r\n");

			if (Interface::GetVerbosity() == Interface::VerbosityLevel::Detail) {
				if (Itr->second->GetType() == Entity::Type::PE_FILE) {
					PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>(Itr->second);

					Interface::Log(Interface::VerbosityLevel::Surface, "  |__ Mapped file base: 0x%p\r\n", PeEntity->GetStartVa());
					Interface::Log(Interface::VerbosityLevel::Surface, "    | Mapped file size: %d\r\n", PeEntity->GetEntitySize());
					Interface::Log(Interface::VerbosityLevel::Surface, "    | Mapped file path: %ws\r\n", PeEntity->GetFileBase()->GetPath().c_str());

					if (PeEntity->GetPeFile() != nullptr) {
						Interface::Log(Interface::VerbosityLevel::Surface, "    | Architecture: %ws\r\n", PeEntity->GetPeFile()->IsPe32() ? L"32-bit" : L"64-bit");
						Interface::Log(Interface::VerbosityLevel::Surface, "    | Size of image: %d\r\n", PeEntity->GetImageSize());
						Interface::Log(Interface::VerbosityLevel::Surface, "    | PE type: %ws%ws\r\n", PeEntity->GetPeFile()->IsDotNet() ? L".NET " : L"", PeEntity->GetPeFile()->IsDll() ? L"DLL" : L"EXE");
						Interface::Log(Interface::VerbosityLevel::Surface, "    | Non-executable: %ws\r\n", PeEntity->IsNonExecutableImage() ? L"yes" : L"no");
						Interface::Log(Interface::VerbosityLevel::Surface, "    | Partially mapped: %ws\r\n", PeEntity->IsPartiallyMapped() ? L"yes" : L"no");
						Interface::Log(Interface::VerbosityLevel::Surface, "    | Signed: %ws [%ws]\r\n", PeEntity->IsSigned() ? L"yes" : L"no", TranslateSigningType(PeEntity->GetSisningType()));
						Interface::Log(Interface::VerbosityLevel::Surface, "    | Signing level: %ws\r\n", TranslateSigningLevel(PeEntity->GetSigningLevel()));
					}

					Interface::Log(Interface::VerbosityLevel::Surface, "    |__ PEB module");

					if (PeEntity->GetPebModule().Exists()) {
						Interface::Log(Interface::VerbosityLevel::Surface, "\r\n");
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Name: %ws\r\n", PeEntity->GetPebModule().GetName().c_str());
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Image base: 0x%p\r\n", PeEntity->GetPebModule().GetBase());
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Image size: %d\r\n", PeEntity->GetPebModule().GetSize());
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Entry point: 0x%p\r\n", PeEntity->GetPebModule().GetEntryPoint());
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Image file path: %ws\r\n", PeEntity->GetPebModule().GetPath().c_str());
					}
					else {
						Interface::Log(Interface::VerbosityLevel::Surface, " (missing)\r\n");
					}
				}
				else if (Itr->second->GetType() == Entity::Type::MAPPED_FILE) {
					Interface::Log(Interface::VerbosityLevel::Surface, "  |__ Mapped file base: 0x%p\r\n", Itr->second->GetStartVa());
					Interface::Log(Interface::VerbosityLevel::Surface, "    | Mapped file size: %d\r\n", Itr->second->GetEntitySize());
					Interface::Log(Interface::VerbosityLevel::Surface, "    | Mapped file path: %ws\r\n", dynamic_cast<MappedFile*>(Itr->second)->GetFileBase()->GetPath().c_str());
				}
			}

			//
			// Display the section/subregion information associated with this entity provided it meets the selection criteria
			//

			vector<Subregion*> Subregions = Itr->second->GetSubregions();
		
			for (vector<Subregion*>::iterator SbrItr = Subregions.begin(); SbrItr != Subregions.end(); ++SbrItr) {
				if (ScannerCtx.GetMst() == ScannerContext::MemorySelection_t::All ||
					(ScannerCtx.GetMst() == ScannerContext::MemorySelection_t::Block && (ScannerCtx.GetAddress() == (*SbrItr)->GetBasic()->BaseAddress || (ScannerCtx.GetFlags() & PROCESS_ENUM_FLAG_FROM_BASE))) ||
					(ScannerCtx.GetMst() == ScannerContext::MemorySelection_t::Suspicious && ((ScannerCtx.GetFlags() & PROCESS_ENUM_FLAG_FROM_BASE) || 
																		  (SuspSbrMap != nullptr &&
																		   SuspSbrMap->count(static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress))) &&
																		   SubEntityIocCount(SuspSbrMap, static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress)) > 0)) || 
					(ScannerCtx.GetMst() == ScannerContext::MemorySelection_t::Referenced && (ScannerCtx.GetFlags() & PROCESS_ENUM_FLAG_FROM_BASE) ||
																		  (RefSbrVec != nullptr &&
																		  find(RefSbrVec->begin(), RefSbrVec->end(), static_cast<uint8_t*>((*SbrItr)->GetBasic()->BaseAddress)) != RefSbrVec->end()))) { // mselect == referenced and this subregion contains one or more reference or the "from base" option is set
					wchar_t AlignedAttribDesc[9] = { 0 };

					Interface::AlignStr(Subregion::AttribDesc((*SbrItr)->GetBasic()), AlignedAttribDesc, 8);

					if (Itr->second->GetType() == Entity::Type::PE_FILE && !dynamic_cast<PeVm::Body*>(Itr->second)->GetFileBase()->IsPhantom()) {
						//
						// Generate a list of all sections overlapping with this subregion and display them all. A typical example is a +r subregion at the end of the PE which encompasses all consecutive readonly sections ie. .rdata, .rsrc, .reloc
						//

						vector<PeVm::Section*> OverlapSections = dynamic_cast<PeVm::Body*>(Itr->second)->FindOverlapSect(*(*SbrItr));

						if (OverlapSections.empty()) {
							Interface::Log(Interface::VerbosityLevel::Surface, "    0x%p:0x%08x | %ws | ?        | 0x%08x", (*SbrItr)->GetBasic()->BaseAddress, (*SbrItr)->GetBasic()->RegionSize, AlignedAttribDesc, (*SbrItr)->GetPrivateSize());
							AppendSubregionAttributes(*SbrItr);
							AppendOverlapIoc(SuspSbrMap, static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress), false, SelectedIocs);
							Interface::Log(Interface::VerbosityLevel::Surface, "\r\n");
						}
						else{
							for (vector<PeVm::Section*>::const_iterator SectItr = OverlapSections.begin(); SectItr != OverlapSections.end(); ++SectItr) {
								wchar_t AlignedSectName[9] = { 0 };
								char AnsiSectName[9];

								strncpy_s(AnsiSectName, 9, (char*)(*SectItr)->GetHeader()->Name, 8);
								wstring UnicodeSectName = UnicodeConverter.from_bytes(AnsiSectName);
								Interface::AlignStr(static_cast<const wchar_t*>(UnicodeSectName.c_str()), AlignedSectName, 8);

								Interface::Log(Interface::VerbosityLevel::Surface, "    0x%p:0x%08x | %ws | %ws | 0x%08x", (*SbrItr)->GetBasic()->BaseAddress, (*SbrItr)->GetBasic()->RegionSize, AlignedAttribDesc, AlignedSectName, (*SbrItr)->GetPrivateSize());
								AppendSubregionAttributes(*SbrItr);
								AppendOverlapIoc(SuspSbrMap, static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress), false, SelectedIocs);
								Interface::Log(Interface::VerbosityLevel::Surface, "\r\n");

							}
						}
					}
					else {
						Interface::Log(Interface::VerbosityLevel::Surface, "    0x%p:0x%08x | %ws | 0x%08x", (*SbrItr)->GetBasic()->BaseAddress, (*SbrItr)->GetBasic()->RegionSize, AlignedAttribDesc, (*SbrItr)->GetPrivateSize());
						AppendSubregionAttributes(*SbrItr);
						AppendOverlapIoc(SuspSbrMap, static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress), false, SelectedIocs);
						Interface::Log(Interface::VerbosityLevel::Surface, "\r\n");
					}

					if (Interface::GetVerbosity() == Interface::VerbosityLevel::Detail) {
						Interface::Log(Interface::VerbosityLevel::Surface, "    |__ Base address: 0x%p\r\n", (*SbrItr)->GetBasic()->BaseAddress);
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Size: %d\r\n", (*SbrItr)->GetBasic()->RegionSize);
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Permissions: %ws\r\n", Subregion::ProtectSymbol((*SbrItr)->GetBasic()->Protect));
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Type: %ws\r\n", Subregion::TypeSymbol((*SbrItr)->GetBasic()->Type));
						Interface::Log(Interface::VerbosityLevel::Surface, "      | State: %ws\r\n", Subregion::StateSymbol((*SbrItr)->GetBasic()->State));
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Allocation base: 0x%p\r\n", (*SbrItr)->GetBasic()->AllocationBase);
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Allocation permissions: %ws\r\n", Subregion::ProtectSymbol((*SbrItr)->GetBasic()->AllocationProtect));
						Interface::Log(Interface::VerbosityLevel::Surface, "      | Private size: %d [%d pages]\r\n", (*SbrItr)->GetPrivateSize(), (*SbrItr)->GetPrivateSize() / 0x1000);
					}

					this->EnumerateThreads(L"      ");

					if ((ScannerCtx.GetFlags() & PROCESS_ENUM_FLAG_MEMDUMP)) {
						if (!(ScannerCtx.GetFlags() & PROCESS_ENUM_FLAG_FROM_BASE)) {
							this->DumpBlock(*DmpCtx, (*SbrItr)->GetBasic(), L"      ");
						}
					}

					SelectedSbrs->push_back(*SbrItr);
				}
			}

			if ((ScannerCtx.GetFlags() & PROCESS_ENUM_FLAG_MEMDUMP)) {
				if ((ScannerCtx.GetFlags() & PROCESS_ENUM_FLAG_FROM_BASE)) {
					if (Itr->second->Dump(*DmpCtx)) {
						Interface::Log(Interface::VerbosityLevel::Surface, "      ~ Generated full region dump at 0x%p\r\n", Itr->second->GetStartVa());
					}
					else {
						Interface::Log(Interface::VerbosityLevel::Surface, "      ~ Failed to generate full region dump at 0x%p\r\n", Itr->second->GetStartVa());
					}
				}
			}
		}
	}

	return;
}