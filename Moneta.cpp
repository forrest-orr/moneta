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
#include "PE.hpp"
#include "Moneta.hpp"

using namespace std;
using namespace PeFile;
using namespace Moneta;

MemoryBlock::MemoryBlock(MEMORY_BASIC_INFORMATION* pMemBasicInfo, MEMORY_REGION_INFORMATION* pMemRegionInfo) : Basic(pMemBasicInfo), Region(pMemRegionInfo) {}

MemoryBlock::~MemoryBlock() {
	//printf("mem destructor\r\n");
	if (this->Basic != nullptr) {
		delete Basic;
	}

	if (this->Region != nullptr) {
		delete Region;
	}
	//printf("mem destructor2\r\n");
}

Entity::~Entity() {
	//printf("Entity destructor\r\n");
	//if (SBlocks.empty()) printf("empty\r\n");
	for (vector<MemoryBlock*>::const_iterator Itr = this->SBlocks.begin(); Itr != this->SBlocks.end(); ++Itr) {
		//if(!(*Itr)) printf("null itr\r\n");
		delete * Itr;
	}
	//printf("Entity destructor2\r\n");
}

PeVm::Body::~Body() {
	//printf("PE destructor\r\n");
	for (vector<Section*>::const_iterator Itr = this->Sections.begin(); Itr != this->Sections.end(); ++Itr) {
		delete* Itr;
	}
	delete this->Pe;
}

MappedFile::~MappedFile() {
	//printf("Mapped file destructor\r\n");
	delete this->File;
	//printf("Mapped file destructor2\r\n");
}

AddressSpace::~AddressSpace() {
	//printf("AddressSpace destructor\r\n");
	for (map<uint8_t*, Entity*>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		if (Itr->second->Type() == EntityType::PE_FILE) {
			delete dynamic_cast<PeVm::Body*>(Itr->second); // This will call the destructors for PE, mapped file and entity all to be called in inheritted order.
		}
		else if (Itr->second->Type() == EntityType::MAPPED_FILE) {
			delete dynamic_cast<MappedFile*>(Itr->second);
		}
		else {
			delete dynamic_cast<Base*>(Itr->second);;
		}
	}
	//printf("AddressSpace destructor2\r\n");
}

Process::~Process() {
	CloseHandle(this->Handle);
	//printf("Process destructor\r\n");
}

MEMORY_BASIC_INFORMATION* MemoryBlock::GetBasic() {
	return Basic;
}

MEMORY_REGION_INFORMATION* MemoryBlock::GetRegion() {
	return Region;
}
/*
void MappedFile::SetSBlocks(vector<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
	this->StartVa = (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress;
	this->EndVa = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize);
}

void PeVm::Section::SetSBlocks(vector<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
}*/

//Moneta::PE::PE() {}

uint8_t* PeVm::Component::GetPeBase() {
	this->PeBase;
}
PeBase* PeVm::Body::GetPe() {
	return this->Pe;
}

std::vector<PeVm::Section*> PeVm::Body::GetSections() {
	return this->Sections;
}

IMAGE_SECTION_HEADER * PeVm::Section::GetHeader() {
	return &this->Hdr;
}

uint8_t* Entity::GetStartVa() {
	return this->StartVa;
}

uint8_t* Entity::GetEndVa() {
	return this->EndVa;
}

uint8_t* PeVm::Body::GetPeBase() {
	return this->PeBase;
}
/*
void Unknown::SetSBlocks(vector<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
	this->StartVa = (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress;
	this->EndVa = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize);
}

void Entity::SetSBlocks(vector<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
	this->StartVa = (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress;
	this->EndVa = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize);
}*/

//Unknown::Unknown() {}

/*
Unknown::Unknown(list<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
}

PE::PE(list<MemoryBlock*> SBlocks, const wchar_t *pFilePath) : FilePath(pFilePath) {
	this->SBlocks = SBlocks; // This must be done since it is inheritted from the abstract base class (it can't be auto-set like FilePath was)
}*/

void MappedFile::SetFile(const wchar_t* pFilePath, bool bMemStore) {
	try {
		this->File = new FileBase(pFilePath, bMemStore, false);
	}
	catch (...) {
		printf("- Failed to open %ws\r\n", pFilePath);
		this->File = nullptr;
	}
}

wstring MappedFile::GetFilePath() {
	return this->File == nullptr ? L"?" : this->File->GetPath();
}

bool TranslateDevicePath(const wchar_t* pDevicePath, wchar_t *pTranslatedPath) {
	//wchar_t pszFilename[MAX_PATH + 1];
	wchar_t szTemp[MAX_PATH + 1];
	bool bTranslated = false;
	szTemp[0] = '\0';

	if (GetLogicalDriveStringsW(MAX_PATH, szTemp))
	{
		wchar_t szName[MAX_PATH];
		wchar_t szDrive[3] = L" :";
		BOOL bFound = FALSE;
		wchar_t* p = szTemp;

		do
		{
			// Copy the drive letter to the template string
			*szDrive = *p;

			// Look up each device name
			if (QueryDosDeviceW(szDrive, szName, MAX_PATH))
			{
				//printf("QueryDosDeviceW device name: %ws, target path: %ws\r\n", szDrive, szName);
				if (_wcsnicmp(pDevicePath, szName, wcslen(szName)) == 0) {
					//printf("Match device name: %ws, target path: %ws\r\n", szDrive, szName);
					wcscpy_s(pTranslatedPath, MAX_PATH + 1, szDrive);
					wcscat_s(pTranslatedPath, MAX_PATH + 1, L"\\");
					wcscat_s(pTranslatedPath, MAX_PATH + 1, pDevicePath + wcslen(szName));
					bTranslated = true;
				}
			}

			p++;

			// Go to the next NULL character.
			//while (*p++);
		} while (!bTranslated && *p); // end of string
	}

	//printf("* Converted %ws to %ws\r\n", pDevicePath, pTranslatedPath);
	return bTranslated;
}

HANDLE Process::GetHandle() {
	return this->Handle;
}

bool Process::IsWow64() {
	return this->Wow64;
}

PeVm::Component::Component(std::vector<MemoryBlock*> SBlocks, uint8_t* pPeBase) : Base(SBlocks), PeBase(pPeBase) {}

Base::Base(vector<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
	this->StartVa = (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress;
	this->EndVa = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize);
	this->Size = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize) - (SBlocks.front())->GetBasic()->AllocationBase;
}

PeVm::Section::Section(vector<MemoryBlock*> SBlocks, IMAGE_SECTION_HEADER* pHdr, uint8_t* pPeBase) : Base(SBlocks), PeVm::Component(SBlocks, pPeBase) {
	memcpy(&this->Hdr, pHdr, sizeof(IMAGE_SECTION_HEADER));
	//this->PeBase = pPeBase;
	this->Size = this->Hdr.SizeOfRawData == 0 ? this->Hdr.Misc.VirtualSize : this->Hdr.SizeOfRawData; // Overwrite default size determined by sblocks
	//this->StartVa = this->PeBase + this->Hdr.VirtualAddress;
	//this->EndVa = this->PeBase + this->Hdr.VirtualAddress + this->Size;
}

MappedFile::MappedFile(vector<MemoryBlock*> SBlocks, const wchar_t* pFilePath, bool bMemStore) : Base(SBlocks) {
	this->SetFile(pFilePath, bMemStore);
}

PeVm::Body::Body(vector<MemoryBlock*> SBlocks, const wchar_t* pFilePath) : Base(SBlocks), PeVm::Component(SBlocks, (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress), MappedFile(SBlocks, pFilePath, true) {
	//this->SBlocks = SBlocks;
	//this->PeBase = (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress;
	//this->StartVa = this->PeBase;
	//this->EndVa = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize);
	//printf("* Runtime image base: 0x%p for %ws\r\n", SBlocks.front()->GetBasic()->AllocationBase, this->File->GetPath().c_str());
	if ((this->Pe = PeBase::Load(this->File->GetData(), this->File->GetSize())) != nullptr) {
		wstring FilePath(this->GetFilePath());
		delete this->File; // Don't double-store the file content. 
		this->SetFile(FilePath.c_str());

		//
		// Identify which sblocks within this parent entity overlap with each section header. Create an entity child object for each section and copy associated sblocks into it.
		//

		for (int32_t nX = -1; nX < this->Pe->GetFileHdr()->NumberOfSections; nX++) {
			IMAGE_SECTION_HEADER ArtificialPeHdr = { 0 }; // This will initialize other relevant fields such as VirtualAddress to 0 for the PE header edge case.

			if (nX == -1) {
				strcpy_s((char*)ArtificialPeHdr.Name, sizeof(ArtificialPeHdr.Name), "Headers");
				ArtificialPeHdr.SizeOfRawData = this->Pe->GetSectHdrs()->VirtualAddress; // Consider the size of the PE headers to be all data leading up to the start of the first real section.
			}
			else {
				memcpy(&ArtificialPeHdr, (this->Pe->GetSectHdrs() + nX), sizeof(IMAGE_SECTION_HEADER));
			}

			uint32_t dwSectionSize = (ArtificialPeHdr.SizeOfRawData == 0 ? ArtificialPeHdr.Misc.VirtualSize : ArtificialPeHdr.SizeOfRawData);
			uint8_t* pSectStartVa = this->PeBase + ArtificialPeHdr.VirtualAddress;
			uint8_t* pSectEndVa = this->PeBase + ArtificialPeHdr.VirtualAddress + dwSectionSize;

			//printf("%s [0x%p:0x%p]\r\n", ArtificialPeHdr.Name, pSectStartVa, pSectEndVa);
			//printf("%s [0x%p:0x%p]\r\n", ArtificialPeHdr.Name, pSectStartVa - (uint8_t*)SBlocks.front()->GetBasic()->AllocationBase, pSectEndVa - (uint8_t*)SBlocks.front()->GetBasic()->AllocationBase);
			//
			// Calculate the sblocks overlapping between this PE entity and the current section.
			//

			vector<MemoryBlock*> OverlapSBlock;

			for (vector<MemoryBlock*>::const_iterator SBlockItr = SBlocks.begin(); SBlockItr != SBlocks.end(); ++SBlockItr) {
				uint8_t* pSBlockStartVa = (uint8_t*)(*SBlockItr)->GetBasic()->BaseAddress;
				uint8_t* pSBlockEndVa = (uint8_t*)(*SBlockItr)->GetBasic()->BaseAddress + (*SBlockItr)->GetBasic()->RegionSize;

				if ((pSBlockStartVa >= pSectStartVa && pSBlockStartVa < pSectEndVa) || (pSBlockEndVa > pSectStartVa&& pSBlockEndVa <= pSectEndVa) || (pSBlockStartVa < pSectStartVa && pSBlockEndVa > pSectEndVa)) {
					//printf("* Section %s [0x%p:0x%p] corresponds to sblock [0x%p:0x%p]\r\n", Sect->GetHeader()->Name, pSectStartVa, pSectEndVa, pSBlockStartVa, pSBlockEndVa);
					MEMORY_BASIC_INFORMATION* pBasicInfo = new MEMORY_BASIC_INFORMATION; // When duplicating sblocks, all heap allocated memory must be cloned so that no addresses are double referenced/double freed
					memcpy(pBasicInfo, (*SBlockItr)->GetBasic(), sizeof(MEMORY_BASIC_INFORMATION));
					OverlapSBlock.push_back(new MemoryBlock(pBasicInfo, nullptr));
				}

				//Sect->SetSBlocks(OverlapSBlock);
			}

			this->Sections.push_back(new Section(OverlapSBlock, &ArtificialPeHdr, this->PeBase));
		}
	}
	else {
		printf("- Failed to load PE file using factory method in PE body constructor\r\n");
	}
	//printf("PE body sblocks done\r\n");
}

/*
Entity factory

Given a set of sblocks with a common allocation base, determine what type of entity they represent in memory

*/

Entity* Entity::Create(HANDLE hProcess, std::vector<MemoryBlock*> SBlocks) {
	Entity* pNewEntity = nullptr;

	if (SBlocks.front()->GetBasic()->Type == MEM_MAPPED || SBlocks.front()->GetBasic()->Type == MEM_IMAGE) {
		wchar_t DevFilePath[MAX_PATH + 1] = { 0 };
		wchar_t MapFilePath[MAX_PATH + 1] = { 0 };

		if (GetMappedFileNameW(hProcess, (HMODULE)SBlocks.front()->GetBasic()->AllocationBase, DevFilePath, MAX_PATH)) {
			if (!TranslateDevicePath(DevFilePath, MapFilePath)) {
				printf("! Failed to translate device path: %ws\r\n", DevFilePath);
				wcscpy_s(MapFilePath, MAX_PATH + 1, L"?");
			}
		}
		else {
			if (SBlocks.front()->GetBasic()->Type == MEM_MAPPED) {
				wcscpy_s(MapFilePath, MAX_PATH + 1, L"Page File");
			}
			else {
				wcscpy_s(MapFilePath, MAX_PATH + 1, L"?");
			}
		}

		if (SBlocks.front()->GetBasic()->Type == MEM_MAPPED) {
			pNewEntity = new MappedFile(SBlocks, MapFilePath);
		}
		else if (SBlocks.front()->GetBasic()->Type == MEM_IMAGE) {
			pNewEntity = new PeVm::Body(SBlocks, MapFilePath);
		}
	}
	else {
		pNewEntity = new Base(SBlocks);
	}

	return pNewEntity;
}

typedef BOOL(WINAPI* ISWOW64PROCESS) (HANDLE, PBOOL);

Process::Process(uint32_t dwPid, const wchar_t* pProcessName) : Pid(dwPid), Name(pProcessName) {
	//
	// Initialize a new entity for each allocation base and add it to this process address space map
	//
	
	printf("* Mapping address space of PID %d\r\n", this->Pid);
	this->Handle = OpenProcess(PROCESS_VM_READ | PROCESS_QUERY_INFORMATION, false, dwPid);
	
	if (this->Handle != nullptr) {
		static ISWOW64PROCESS IsWow64Process = (ISWOW64PROCESS)GetProcAddress(GetModuleHandleW(L"Kernel32.dll"), "IsWow64Process");

		if (IsWow64Process != nullptr) {
			if (IsWow64Process(this->Handle, (PBOOL)&this->Wow64)) {
				if (this->IsWow64()) {
					//CloseHandle(this->Handle);
					printf("* PID %d is Wow64\r\n", this->Pid);
					//system("pause");
					//throw 2;
				}
				else {
					//throw 2;
				}
			}
		}

		//system("pause");
		uint64_t qwRegionSize = 0;
		vector<MemoryBlock *> SBlocks;
		vector<MemoryBlock*>::iterator ABlock;
		//Entity* CurrentEntity = nullptr;

		//Loop memory, building list of SBlocks. Once a block is found which does not match the "current" allocation base, create a new entity containing the corresponding sblock list, and insert it into the address space entities map using the ablock as the key.

		//if (this->Pid == 3272) system("pause");
		
		for (uint8_t* pBaseAddr = nullptr;; pBaseAddr += qwRegionSize) {
			MEMORY_BASIC_INFORMATION* pBasicInfo = new MEMORY_BASIC_INFORMATION;

			if (VirtualQueryEx(this->Handle, pBaseAddr, (MEMORY_BASIC_INFORMATION*)pBasicInfo, sizeof(MEMORY_BASIC_INFORMATION)) == sizeof(MEMORY_BASIC_INFORMATION)) {
				qwRegionSize = pBasicInfo->RegionSize;

				if (!SBlocks.empty()) { // If the sblock list is empty then there is no ablock for comparison
					//
					// In the event that this is a new ablock, create a map pair and insert it into the entities map
					//
					//printf("Sblock list not empty\r\n");
					if (pBasicInfo->AllocationBase != (*ABlock)->GetBasic()->AllocationBase) {
						//printf("Found a new ablock. Saving sblock list to new entity entry.");
						//CurrentEntity->SetSBlocks(SBlocks);
						this->Entities.insert(make_pair((uint8_t*)(*ABlock)->GetBasic()->AllocationBase, Entity::Create(this->Handle, SBlocks)));
						SBlocks.clear();
					}
					//printf("done2\r\n");
				}
				//printf("Addomg mew sblock to list\r\n");
				SBlocks.push_back(new MemoryBlock((MEMORY_BASIC_INFORMATION*)pBasicInfo, nullptr));
				ABlock = SBlocks.begin(); // This DOES fix a bug.
				//
				// Potentially initialize a new polymorphic entity class based upon the memory characteristics
				//

				if (SBlocks.size() == 1) {
					ABlock = SBlocks.begin();
					//printf("Set current ABlock to 0x%p due to sblock list size of 1 after insert\n", (*ABlock)->GetBasic()->AllocationBase);
				}
			}
			else {
				//printf("VirtualQuery failed\r\n");
				//system("pause");
				delete pBasicInfo;
				if (!SBlocks.empty()) { // Edge case: new ablock not yet found but finished enumerating sblocks.
					this->Entities.insert(make_pair((uint8_t*)(*ABlock)->GetBasic()->AllocationBase, Entity::Create(this->Handle, SBlocks)));
					//SBlocks.clear();
				}
				//printf("done\r\n");
				break;
			}
		}

		//this->PermissionRecords = new MemoryPermissionRecord(this->Blocks); // Initialize 
		//CloseHandle(hProcess);
	}
	else {
		printf("- Failed to open handle to process\r\n");
		throw 1; // Not throwing a specific value crashes it
	}
}

vector<MemoryBlock*> Entity::GetSBlocks() {
	return this->SBlocks;
}

/*
[ Image
[ 0x00007FFAFF290000:761383 | program.exe <- Size here does not correspond to sblock, it corresponds to entire total size in region sharing ablock
  0x00040000:4096   | R   | PE headers
  0xb2345678:4096   | RX  | .test
  0xc2345678:4096   | RWX |
  0xd2345678:8192   | RX  |
  0xe2345678 | RW  | .data
  0xf2345678 | R   | .rdata
  0xf2345678 | R   | .rsrc

[ Image
[ 0x00040000 | kernel32.dll
  0xa2345678 | R   | PE headers
  0xb2345678 | RX  | .test
  0xc2345678 | RWX |
  0xd2345678 | RX  |
  0xe2345678 | RW  | .data
  0xf2345678 | R   | .rdata
  0xf2345678 | R   | .rsrc

[ Mapped
[ 0x71627:4096 | c:\abc.nls
  0x71627:4096 | R

*/

const char* PermissionSymbol(uint32_t dwProtection) {
	switch (dwProtection) {
	case PAGE_READONLY:
		return "R   ";
	case PAGE_READWRITE:
		return "RW  ";
	case PAGE_EXECUTE_READ:
		return "RX  ";
	case PAGE_EXECUTE_READWRITE:
		return "RWX ";
	case PAGE_EXECUTE_WRITECOPY:
		return "RWXC";
	case PAGE_EXECUTE:
		return "X   ";
	case PAGE_WRITECOPY:
		return "WC  ";
	case PAGE_NOACCESS:
		return "NA  ";
	case PAGE_WRITECOMBINE:
		return "WCB ";
	case PAGE_GUARD:
		return "PG  ";
	case PAGE_NOCACHE:
		return "NC  ";
	default:
		return "?   ";
	}
}

uint32_t Process::GetPid() {
	return this->Pid;
}

void Process::Enumerate() {
	printf("\r\n[ %ws : %d : %ws\r\n", this->Name.c_str(), this->GetPid(), this->IsWow64() ? L"Wow64" : L"x64");
	//
	// Walk ablocks (entities) and list the corresponding sblocks of each.
	//

	for (map<uint8_t *, Entity *>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		//printf("A-Block 0x%p\r\n", Itr->first);
		
		if (Itr->second == nullptr) printf("blank entity ptr\r\n");
		if (Itr->second->Type() == EntityType::PE_FILE) {
			//printf("Entity type: PE\r\n");
			//printf("[ Image\r\n");
			printf("[ 0x%016x:0x%08x | Image | %ws\r\n", dynamic_cast<PeVm::Body *>(Itr->second)->GetPeBase(), dynamic_cast<PeVm::Body *>(Itr->second)->GetPe()->GetImageSize(), dynamic_cast<PeVm::Body *>(Itr->second)->GetFilePath().c_str());
			//printf("File path: %ws (%ws)\r\n", ((Moneta::PE *)Itr->second)->GetFilePath().c_str(), dynamic_cast<PeVm::Body *>(Itr->second)->GetPe()->GetPeMagic() == IMAGE_NT_OPTIONAL_HDR64_MAGIC ? L"64-bit" : L"32-bit");

			vector<PeVm::Section*> Sections = dynamic_cast<PeVm::Body *>(Itr->second)->GetSections();
			for (vector<PeVm::Section*>::const_iterator SectItr = Sections.begin(); SectItr != Sections.end(); ++SectItr) {
				//printf("  %s\r\n", (*SectItr)->GetHeader()->Name);
				//printf("  S-Blocks:\r\n");
				vector<MemoryBlock*> SBlocks = (*SectItr)->GetSBlocks();

				for (vector<MemoryBlock*>::iterator SBlockItr = SBlocks.begin(); SBlockItr != SBlocks.end(); ++SBlockItr) {
					//printf("  0x%p\r\n", (*SBlockItr)->GetBasic()->BaseAddress);
					printf("  0x%p:0x%08x | %s | %s | 0x%08x\r\n", (*SBlockItr)->GetBasic()->BaseAddress, (*SBlockItr)->GetBasic()->RegionSize, PermissionSymbol((*SBlockItr)->GetBasic()->Protect), (*SectItr)->GetHeader()->Name, 
						Moneta::GetPrivateSize(this->GetHandle(), (uint8_t *)(*SBlockItr)->GetBasic()->BaseAddress, (uint32_t)(*SBlockItr)->GetBasic()->RegionSize)
					);

					if (((*SectItr)->GetHeader()->Characteristics & IMAGE_SCN_MEM_EXECUTE) && Moneta::GetPrivateSize(this->GetHandle(), (uint8_t*)(*SBlockItr)->GetBasic()->BaseAddress, (uint32_t)(*SBlockItr)->GetBasic()->RegionSize)) {
						printf("! Section %s is executable and has private pages within %ws [%ws:%d]\r\n", (*SectItr)->GetHeader()->Name, dynamic_cast<PeVm::Body *>(Itr->second)->GetFilePath().c_str(), this->Name.c_str(), this->Pid);
						system("pause");
					}
				}
			}
		}
		else if (Itr->second->Type() == EntityType::MAPPED_FILE) {
			//printf("Entity type: Mapped file\r\n");
			//printf("File path: %ws\r\n", dynamic_cast<MappedFile *>(Itr->second)->GetFilePath().c_str());
			vector<MemoryBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

			//printf("[ Mapped\r\n");
			printf("[ 0x%016x:0x%08x | Mapped | %ws\r\n", SBlocks.front()->GetBasic()->AllocationBase, SBlocks.front()->GetBasic()->RegionSize, dynamic_cast<MappedFile *>(Itr->second)->GetFilePath().c_str());
			//printf("S-Blocks:\r\n");

			for (vector<MemoryBlock*>::iterator SBlockItr = SBlocks.begin(); SBlockItr != SBlocks.end(); ++SBlockItr) {
				//printf("  0x%p\r\n", (*SBlockItr)->GetBasic()->BaseAddress);
				printf("  0x%p:0x%08x | %s\r\n", (*SBlockItr)->GetBasic()->BaseAddress, (*SBlockItr)->GetBasic()->RegionSize, PermissionSymbol((*SBlockItr)->GetBasic()->Protect));
			}
		}
		else {
			//printf("Entity type: Unknown\r\n");
			//printf("S-Blocks:\r\n");

			vector<MemoryBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

			if (SBlocks.front()->GetBasic()->Type == MEM_PRIVATE) {
				printf("[ 0x%016x:0x%08x | Private\r\n", SBlocks.front()->GetBasic()->AllocationBase, SBlocks.front()->GetBasic()->RegionSize);
				for (vector<MemoryBlock*>::iterator SBlockItr = SBlocks.begin(); SBlockItr != SBlocks.end(); ++SBlockItr) {
					printf("  0x%p:0x%08x | %s\r\n", (*SBlockItr)->GetBasic()->BaseAddress, (*SBlockItr)->GetBasic()->RegionSize, PermissionSymbol((*SBlockItr)->GetBasic()->Protect));
				}
			}
			else {
				printf("! Unknown memory type at 0x%p\r\n", Itr->first);
			}
		}

		printf("\r\n");
	}

	printf("\r\n");
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

uint32_t Moneta::GetPrivateSize(HANDLE hProcess, uint8_t* pBaseAddress, uint32_t dwSize) {
	PSAPI_WORKING_SET_EX_INFORMATION* pWorkingSets = new PSAPI_WORKING_SET_EX_INFORMATION;
	uint32_t dwWorkingSetsSize = sizeof(PSAPI_WORKING_SET_EX_INFORMATION);
	uint32_t dwPrivateSize = 0;

	for (uint32_t dwPageOffset = 0; dwPageOffset < dwSize; dwPageOffset += 0x1000) {
		pWorkingSets->VirtualAddress = (pBaseAddress + dwPageOffset);
		if (K32QueryWorkingSetEx(hProcess, pWorkingSets, dwWorkingSetsSize)) {
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