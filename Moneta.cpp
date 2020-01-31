/*
____________________________________________________________________________________
| _______  _____  __   _ _______ _______ _______                                   |
| |  |  | |     | | \  | |______    |    |_____|                                   |
| |  |  | |_____| |  \_| |______    |    |     |                                   |                                                               |
|__________________________________________________________________________________|
| Moneta ~ Usermode memory scanner & malware hunter                                |
|----------------------------------------------------------------------------------|
| https://www.forrest-orr.net/post/malicious-memory-artifacts-part-i-dll-hollowing |
|----------------------------------------------------------------------------------|
| Author: Forrest Orr - 2019                                                       |
|----------------------------------------------------------------------------------|
| Contact: forrest.orr@protonmail.com                                              |
|----------------------------------------------------------------------------------|
| Licensed under GNU GPLv3                                                         |
|__________________________________________________________________________________|
| ## Features                                                                      |
|                                                                                  |
| ~ Query the memory attributes of any accessible process(es).                     |
| ~ Identify private, mapped and image memory.                                     |
| ~ Correlate regions of memory to their underlying file on disks.                 |
| ~ Identify PE headers and sections corresponding to image memory.                |
| ~ Identify modified regions of mapped image memory.                              |
| ~ Identify abnormal memory attributes indicative of malware.                     |
|__________________________________________________________________________________|

*/

#include "StdAfx.h"
#include "FileIo.hpp"
#include "Moneta.hpp"
#include "PE.hpp"

using namespace std;
using namespace Moneta;
using namespace PE;

MemoryBlock::MemoryBlock(MEMORY_BASIC_INFORMATION64* pMemBasicInfo, MEMORY_REGION_INFORMATION* pMemRegionInfo) : Basic(pMemBasicInfo), Region(pMemRegionInfo) {}

MemoryBlock::~MemoryBlock() {
	printf("! Memory block destructor\r\n");
	if (Basic != nullptr) {
		delete Basic;
	}

	if (Region != nullptr) {
		delete Basic;
	}
}

MEMORY_BASIC_INFORMATION64* MemoryBlock::GetBasic() {
	return Basic;
}

MEMORY_REGION_INFORMATION* MemoryBlock::GetRegion() {
	return Region;
}

void MappedFile::SetSBlocks(list<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
}

Moneta::PE::PE() {}
MappedFile::MappedFile() {}

void Moneta::PE::SetSBlocks(list<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
	//list<MemoryBlock*> test = SBlocks;
	//printf("x\r\n");
	this->StartVa = (uint8_t *)(SBlocks.front())->GetBasic()->BaseAddress;
	//printf("x.1: %d\r\n", test.size());
	//this->EndVa = (uint8_t*)(test.back())->GetBasic()->BaseAddress;
	this->EndVa = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize);
	//printf("y\r\n");
	//PeBase* TargetPe = PeBase::Load(this->File->GetData(), this->File->GetSize());
}

void Unknown::SetSBlocks(list<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
}

//Unknown::Unknown() {}

/*
Unknown::Unknown(list<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
}

PE::PE(list<MemoryBlock*> SBlocks, const wchar_t *pFilePath) : FilePath(pFilePath) {
	this->SBlocks = SBlocks; // This must be done since it is inheritted from the abstract base class (it can't be auto-set like FilePath was)
}*/

void MappedFile::SetFile(const wchar_t* pFilePath) {
	try {
		this->File = new FileBase(pFilePath, false);
	}
	catch (...) {
		printf("- Failed to open %ws\r\n", pFilePath);
		this->File = nullptr;
	}
}

wstring MappedFile::GetFilePath() {
	return this->File == nullptr ? L"?" : this->File->GetPath();
}

/*
AddressSpace::~AddressSpace() {
	//
}

AddressSpace::AddressSpace() {
	//
}*/

Process::Process(uint32_t dwPid) : Pid(dwPid) {
	//
	// Initialize a new entity for each allocation base and add it to this process address space map
	//
	this->Entities = new map<uint8_t*, Entity*>();
	HANDLE hProcess = OpenProcess(PROCESS_VM_READ | PROCESS_QUERY_INFORMATION, false, dwPid);
	
	if (hProcess != nullptr) {
		uint64_t qwRegionSize = 0;
		list<MemoryBlock *> SBlocks;
		list<MemoryBlock*>::iterator ABlock;
		Entity* CurrentEntity = nullptr;

		//Loop memory, building list of SBlocks. Once a block is found which does not match the "current" allocation base, create a new entity containing the corresponding sblock list, and insert it into the address space entities map using the ablock as the key.

		for (uint8_t* pBaseAddr = nullptr;; pBaseAddr += qwRegionSize) {
			MEMORY_BASIC_INFORMATION64* pBasicInfo = new MEMORY_BASIC_INFORMATION64;

			if (VirtualQueryEx(hProcess, pBaseAddr, (MEMORY_BASIC_INFORMATION*)pBasicInfo, sizeof(MEMORY_BASIC_INFORMATION64)) == sizeof(MEMORY_BASIC_INFORMATION64)) {
				qwRegionSize = pBasicInfo->RegionSize;

				if (!SBlocks.empty()) { // If the sblock list is empty then there is no ablock for comparison
					//
					// In the event that this is a new ablock, create a map pair and insert it into the entities map
					//
					//printf("Sblock list not empty\r\n");
					if (pBasicInfo->AllocationBase != (*ABlock)->GetBasic()->AllocationBase) {
						//printf("Found a new ablock. Saving sblock list to new entity entry.");
						CurrentEntity->SetSBlocks(SBlocks);
						this->Entities->insert(make_pair((uint8_t*)(*ABlock)->GetBasic()->AllocationBase, CurrentEntity));
						SBlocks.clear();
					}
				}
				//printf("Addomg mew sblock to list\r\n");
				SBlocks.push_back(new MemoryBlock((MEMORY_BASIC_INFORMATION64*)pBasicInfo, nullptr));

				//
				// Potentially initialize a new polymorphic entity class based upon the memory characteristics
				//

				if (SBlocks.size() == 1) {
					ABlock = SBlocks.begin();
					if (pBasicInfo->Type == MEM_IMAGE) {
						//printf("img\r\n");
						wchar_t ModFileName[MAX_PATH + 1] = { 0 };
						if (GetModuleFileNameExW(hProcess, (HMODULE)pBasicInfo->AllocationBase, ModFileName, MAX_PATH)) {
							printf("%ws\r\n", ModFileName);
						}

						CurrentEntity = new Moneta::PE();
						((Moneta::PE*)CurrentEntity)->SetFile(ModFileName);
						//printf("1\r\n");
					}
					else if (pBasicInfo->Type == MEM_MAPPED) {
						//printf("map\r\n");
						wchar_t ModFileName[MAX_PATH + 1] = { 0 };
						CurrentEntity = new MappedFile();

						if (GetMappedFileNameW(hProcess, (HMODULE)pBasicInfo->AllocationBase, ModFileName, MAX_PATH)) {
							printf("%ws\r\n", ModFileName);
						}
						else {
							wcscpy_s(ModFileName, MAX_PATH + 1, L"Page File");
						}

						((MappedFile*)CurrentEntity)->SetFile(ModFileName);
					}
					else {
						CurrentEntity = new Unknown();
					}
					//printf("Set current ABlock to 0x%p due to sblock list size of 1 after insert\n", (*ABlock)->GetBasic()->AllocationBase);
				}
			}
			else {
				if (!SBlocks.empty()) { // Edge case: new ablock not yet found but finished enumerating sblocks.
					CurrentEntity->SetSBlocks(SBlocks);
					this->Entities->insert(make_pair((uint8_t*)(*ABlock)->GetBasic()->AllocationBase, CurrentEntity));
				}

				break;
			}
		}

		//this->PermissionRecords = new MemoryPermissionRecord(this->Blocks); // Initialize 
		CloseHandle(hProcess);
	}
}

list<MemoryBlock*> Entity::GetSBlocks() {
	return this->SBlocks;
}

void AddressSpace::Enumerate() {
	//
	// Walk ablocks (entities) and list the corresponding sblocks of each.
	//

	for (map<uint8_t *, Entity *>::iterator Itr = this->Entities->begin(); Itr != this->Entities->end(); ++Itr) {
		printf("A-Block 0x%p\r\n", Itr->first);
		
		if (Itr->second->Type() == EntityType::PE) {
			printf("Entity type: PE\r\n");
			printf("File path: %ws\r\n", ((Moneta::PE *)Itr->second)->GetFilePath().c_str());
		}
		else if (Itr->second->Type() == EntityType::MAPPED_FILE) {
			printf("Entity type: Mapped file\r\n");
			printf("File path: %ws\r\n", ((MappedFile*)Itr->second)->GetFilePath().c_str());
		}
		else {
			printf("Entity type: Unknown\r\n");
		}

		printf("S-Blocks:\r\n");

		list<MemoryBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.
		if (SBlocks.empty()) {
			printf("Empty SBlock list");
		}

		for (list<MemoryBlock*>::iterator SBlockItr = SBlocks.begin(); SBlockItr != SBlocks.end(); ++SBlockItr) {
			printf("  0x%p\r\n", (*SBlockItr)->GetBasic()->BaseAddress);
		}
	}
	/*
	bool bFileRange = false, bImageRange = false;

	for (list<MemoryBlock*>::const_iterator RecordItr = this->SBlocks.begin(); RecordItr != this->SBlocks.end(); ++RecordItr) {
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
							//printf("%ws\r\n", MappedFileName);
						}
						else {
							wcscpy_s(FileName, MAX_PATH, L"Page file");
						}
					}
					else {
						bImageRange = true;
						if (GetModuleFileNameExW(hProcess, (HMODULE)(*RecordItr)->GetBasic()->AllocationBase, FileName, MAX_PATH)) {
							//printf("%ws\r\n", ModuleFileName);
						}
						else {
							wcscpy_s(FileName, MAX_PATH, L"?");
							printf("!!!! FAILED to get module name\r\n");
						}
					}

					CloseHandle(hProcess);
				}
				else {
					wcscpy_s(FileName, MAX_PATH, L"Access denied");
				}

				printf("======[ 0x%p : %ws\r\n", (*RecordItr)->GetBasic()->BaseAddress, FileName);
			}
		}
		else {
			bFileRange = false;
			bImageRange = false;
			printf("======[ 0x%p\r\n", (*RecordItr)->GetBasic()->BaseAddress);
		}

		wchar_t Indent[40] = { 0 };

		wcscpy_s(Indent, 40, L"  ");

		if (bImageRange) {
			wcscat_s(Indent, 40, L"  ");
		}

		printf(
			"%wsAllocated base 0x%p\r\n"
			"%wsBase: 0x%p\r\n"
			"%wsSize: %zu\r\n",
			Indent,
			(*RecordItr)->GetBasic()->AllocationBase,
			Indent,
			(*RecordItr)->GetBasic()->BaseAddress,
			Indent,
			(*RecordItr)->GetBasic()->RegionSize);

		printf("%wsState: ", Indent);
		switch ((*RecordItr)->GetBasic()->State)
		{
		case MEM_COMMIT:
			printf("MEM_COMMIT\r\n");
			break;
		case MEM_RESERVE:
			printf("MEM_RESERVE\r\n");
			break;
		case MEM_FREE:
			printf("MEM_FREE\r\n");
			break;
		default:
			printf("?\r\n");
		}

		printf("%wsType: ", Indent);
		switch ((*RecordItr)->GetBasic()->Type)
		{
		case MEM_IMAGE:
			printf("MEM_IMAGE\r\n");
			break;
		case MEM_MAPPED:
			printf("MEM_MAPPED\r\n");
			break;
		case MEM_PRIVATE:
			printf("MEM_PRIVATE\r\n");
			break;
		default:
			printf("N/A\r\n");
		}

		printf("%wsPrivate size: %d\r\n", Indent, dwPrivateSize);
		printf("%wsCurrent permissions: 0x%08x\r\n", Indent, (*RecordItr)->GetBasic()->Protect);
		printf("%wsOriginal permissions: 0x%08x\r\n", Indent, (*RecordItr)->GetBasic()->AllocationProtect);

		if ((*RecordItr)->GetRegion() != nullptr) {
			printf("%wsRegion allocation base: 0x%p\r\n", Indent, (*RecordItr)->GetRegion()->AllocationBase);
			printf("%wsRegion size: %d\r\n", Indent, (*RecordItr)->GetRegion()->RegionSize);
			printf("%wsCommit size: %d\r\n", Indent, (*RecordItr)->GetRegion()->CommitSize);
			printf("%wsRegion type literal: 0x%08x\r\n", Indent, (*RecordItr)->GetRegion()->RegionType); // These fields do not match struct declaration, likely different across Windows versions. Ignore them for now.
		}

		printf("\r\n");
	}*/
}

uint32_t GetPrivateSize(uint8_t* pBaseAddress, uint32_t dwSize) {
	PSAPI_WORKING_SET_EX_INFORMATION* pWorkingSets = new PSAPI_WORKING_SET_EX_INFORMATION;
	uint32_t dwWorkingSetsSize = sizeof(PSAPI_WORKING_SET_EX_INFORMATION);
	uint32_t dwPrivateSize = 0;

	for (uint32_t dwPageOffset = 0; dwPageOffset < dwSize; dwPageOffset += 0x1000) {
		pWorkingSets->VirtualAddress = (pBaseAddress + dwPageOffset);
		if (K32QueryWorkingSetEx(GetCurrentProcess(), pWorkingSets, dwWorkingSetsSize)) {
			//printf("+ Successfully queried working set at 0x%p\r\n", pWorkingSets->VirtualAddress);

			if (!pWorkingSets->VirtualAttributes.Shared) {
				//printf("* Page at 0x%p is shared\r\n", pWorkingSets->VirtualAddress);
				dwPrivateSize += 0x1000;
			}
		}
		else {
			printf("- Failed to query working set at 0x%p\r\n", pWorkingSets->VirtualAddress);
		}
	}

	return dwPrivateSize;
}


///////

void MemoryPermissionRecord::UpdateMap(list<MemoryBlock*> MemBasicRecords) {
	for (list<MemoryBlock*>::const_iterator RecordItr = MemBasicRecords.begin(); RecordItr != MemBasicRecords.end(); ++RecordItr) {
		if (!MemPermMap->count((*RecordItr)->GetBasic()->Type)) {
			MemPermMap->insert(make_pair((*RecordItr)->GetBasic()->Type, map<uint32_t, uint32_t>()));
		}

		map<uint32_t, uint32_t>& CountMap = MemPermMap->at((*RecordItr)->GetBasic()->Type);

		if (!CountMap.count((*RecordItr)->GetBasic()->Protect)) {
			CountMap.insert(make_pair((*RecordItr)->GetBasic()->Protect, 0));
		}

		CountMap[(*RecordItr)->GetBasic()->Protect]++;
	}
}

MemoryPermissionRecord::MemoryPermissionRecord(list<MemoryBlock*> MemBasicRecords) {
	MemPermMap = new map<uint32_t, map<uint32_t, uint32_t>>();
	UpdateMap(MemBasicRecords);
}

void MemoryPermissionRecord::ShowRecords() {
	for (map<uint32_t, map<uint32_t, uint32_t>>::const_iterator Itr = MemPermMap->begin(); Itr != MemPermMap->end(); ++Itr) {
		switch (Itr->first) {
		case MEM_IMAGE:
			printf("~ Image memory:\r\n");
			break;
		case MEM_MAPPED:
			printf("~ Mapped memory:\r\n");
			break;
		case MEM_PRIVATE:
			printf("~ Private memory:\r\n");
			break;
		default:
			printf("~ Unknown memory (type 0x%08x):\r\n", Itr->first);
			break;
		}

		int32_t nTotalRegions = 0;

		for (map<uint32_t, uint32_t>::const_iterator Itr2 = Itr->second.begin(); Itr2 != Itr->second.end(); ++Itr2) {
			nTotalRegions += Itr2->second;
		}

		printf("  Total: %d\r\n", nTotalRegions);

		for (map<uint32_t, uint32_t>::const_iterator Itr2 = Itr->second.begin(); Itr2 != Itr->second.end(); ++Itr2) {
			switch (Itr2->first) {
			case PAGE_READONLY:
				printf("  PAGE_READONLY: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_READWRITE:
				printf("  PAGE_READWRITE: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_READ:
				printf("  PAGE_EXECUTE_READ: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_READWRITE:
				printf("  PAGE_EXECUTE_READWRITE: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_WRITECOPY:
				printf("  PAGE_EXECUTE_WRITECOPY: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_WRITECOPY:
				printf("  PAGE_WRITECOPY: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE:
				printf("  PAGE_EXECUTE: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_NOACCESS:
				printf("  PAGE_NOACCESS: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			default:
				printf("  0x%08x: %d (%f%%)\r\n", Itr2->first, Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			}
		}
	}
}