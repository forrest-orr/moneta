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
#include "Interface.hpp"

using namespace std;
using namespace PeFile;
using namespace Moneta;

Entity::~Entity() {
	//Interface::Log("Entity destructor\r\n");
	for (vector<MemoryBlock*>::const_iterator Itr = this->SBlocks.begin(); Itr != this->SBlocks.end(); ++Itr) {
		//if(!(*Itr)) Interface::Log("null itr\r\n");
		delete * Itr;
	}
	//Interface::Log("Entity destructor2\r\n");
}

PeVm::Body::~Body() {
	//Interface::Log("PE destructor\r\n");
	for (vector<Section*>::const_iterator Itr = this->Sections.begin(); Itr != this->Sections.end(); ++Itr) {
		delete* Itr;
	}
	delete this->Pe;
}

MappedFile::~MappedFile() {
	//Interface::Log("Mapped file destructor\r\n");
	//delete this->File;
	//Interface::Log("Mapped file destructor2\r\n");
}

uint8_t* PeVm::Component::GetPeBase() {
	return this->PeBase;
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

uint32_t Entity::GetSize() {
	return this->Size;
}

uint8_t* PeVm::Body::GetPeBase() {
	return this->PeBase;
}

/*
void MappedFile::SetFile(const wchar_t* pFilePath, bool bMemStore) {
	try {
		this->File = new FileBase(pFilePath, bMemStore, false);
	}
	catch (...) {
		Interface::Log("- Failed to open %ws\r\n", pFilePath);
		this->File = nullptr;
	}
}

wstring MappedFile::GetFilePath() {
	return this->File == nullptr ? L"?" : this->File->GetPath();
}

bool MappedFile::IsPhantom() {
	return this->File == nullptr ? false : this->File->IsPhantom();
}*/

bool TranslateDevicePath(const wchar_t* pDevicePath, wchar_t *pTranslatedPath) {
	wchar_t DriveLetters[MAX_PATH + 1] = { 0 };
	bool bTranslated = false;

	if (GetLogicalDriveStringsW(MAX_PATH + 1, DriveLetters))
	{
		wchar_t DosPath[MAX_PATH + 1];
		wchar_t szDrive[3] = L" :";
		wchar_t* p = DriveLetters;

		do
		{
			*szDrive = *p;

			if (QueryDosDeviceW(szDrive, DosPath, MAX_PATH + 1)) {
				if (_wcsnicmp(pDevicePath, DosPath, wcslen(DosPath)) == 0) {
					wcscpy_s(pTranslatedPath, MAX_PATH + 1, szDrive);
					wcscat_s(pTranslatedPath, MAX_PATH + 1, L"\\");
					wcscat_s(pTranslatedPath, MAX_PATH + 1, pDevicePath + wcslen(DosPath));
					bTranslated = true;
				}
			}

			p++;
		} while (!bTranslated && *p);
	}

	return bTranslated;
}

PeVm::Component::Component(std::vector<MemoryBlock*> SBlocks, uint8_t* pPeBase) : ABlock(SBlocks), PeBase(pPeBase) {}

void Entity::SetSBlocks(vector<MemoryBlock*> SBlocks) {
	this->SBlocks = SBlocks;
	this->StartVa = (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress;
	this->EndVa = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize);
	this->Size = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize) - (SBlocks.front())->GetBasic()->AllocationBase;
}

ABlock::ABlock(vector<MemoryBlock*> SBlocks) {
	SetSBlocks(SBlocks);
}

PeVm::Section::Section(vector<MemoryBlock*> SBlocks, IMAGE_SECTION_HEADER* pHdr, uint8_t* pPeBase) : ABlock(SBlocks), PeVm::Component(SBlocks, pPeBase) {
	memcpy(&this->Hdr, pHdr, sizeof(IMAGE_SECTION_HEADER));
	this->Size = this->Hdr.SizeOfRawData == 0 ? this->Hdr.Misc.VirtualSize : this->Hdr.SizeOfRawData; // Overwrite default size determined by sblocks. Verified correct order.
}

MappedFile::MappedFile(vector<MemoryBlock*> SBlocks, const wchar_t* pFilePath, bool bMemStore) : ABlock(SBlocks), FileBase(pFilePath, bMemStore, false) {
	Interface::Log(5, "* Setting file for mapped entity object %ws (store memory: %d)\r\n", pFilePath, bMemStore);
	//this->SetFile(pFilePath, bMemStore);
}

PeVm::Body::Body(vector<MemoryBlock*> SBlocks, const wchar_t* pFilePath) : ABlock(SBlocks), PeVm::Component(SBlocks, (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress), MappedFile(SBlocks, pFilePath, true) {
	//Interface::Log("* Runtime image base: 0x%p for %ws\r\n", SBlocks.front()->GetBasic()->AllocationBase, this->File->GetPath().c_str());

	if (!this->IsPhantom()) {
		if ((this->Pe = PeBase::Load(this->FileData(), this->FileSize())) != nullptr) {
			//wstring FilePath(this->GetFilePath());
			//delete this->File; // Don't double-store the file content. 
			//this->SetFile(FilePath.c_str());

			//
			// Identify which sblocks within this parent entity overlap with each section header. Create an entity child object for each section and copy associated sblocks into it.
			//

			for (int32_t nX = -1; nX < this->Pe->GetFileHdr()->NumberOfSections; nX++) {
				IMAGE_SECTION_HEADER ArtificialPeHdr = { 0 }; // This will initialize other relevant fields such as VirtualAddress to 0 for the PE header edge case.

				if (nX == -1) {
					strcpy_s((char*)ArtificialPeHdr.Name, sizeof(ArtificialPeHdr.Name), "Header");
					ArtificialPeHdr.SizeOfRawData = this->Pe->GetSectHdrs()->VirtualAddress; // Consider the size of the PE headers to be all data leading up to the start of the first real section.
				}
				else {
					memcpy(&ArtificialPeHdr, (this->Pe->GetSectHdrs() + nX), sizeof(IMAGE_SECTION_HEADER));
				}

				uint32_t dwSectionSize = (ArtificialPeHdr.SizeOfRawData == 0 ? ArtificialPeHdr.Misc.VirtualSize : ArtificialPeHdr.SizeOfRawData);
				uint8_t* pSectStartVa = this->PeBase + ArtificialPeHdr.VirtualAddress;
				uint8_t* pSectEndVa = this->PeBase + ArtificialPeHdr.VirtualAddress + dwSectionSize;

				//Interface::Log("%s [0x%p:0x%p]\r\n", ArtificialPeHdr.Name, pSectStartVa, pSectEndVa);
				//Interface::Log("%s [0x%p:0x%p]\r\n", ArtificialPeHdr.Name, pSectStartVa - (uint8_t*)SBlocks.front()->GetBasic()->AllocationBase, pSectEndVa - (uint8_t*)SBlocks.front()->GetBasic()->AllocationBase);
				//
				// Calculate the sblocks overlapping between this PE entity and the current section.
				//

				vector<MemoryBlock*> OverlapSBlock;

				for (vector<MemoryBlock*>::const_iterator SBlockItr = SBlocks.begin(); SBlockItr != SBlocks.end(); ++SBlockItr) {
					uint8_t* pSBlockStartVa = (uint8_t*)(*SBlockItr)->GetBasic()->BaseAddress;
					uint8_t* pSBlockEndVa = (uint8_t*)(*SBlockItr)->GetBasic()->BaseAddress + (*SBlockItr)->GetBasic()->RegionSize;

					if ((pSBlockStartVa >= pSectStartVa && pSBlockStartVa < pSectEndVa) || (pSBlockEndVa > pSectStartVa&& pSBlockEndVa <= pSectEndVa) || (pSBlockStartVa < pSectStartVa && pSBlockEndVa > pSectEndVa)) {
						//Interface::Log("* Section %s [0x%p:0x%p] corresponds to sblock [0x%p:0x%p]\r\n", Sect->GetHeader()->Name, pSectStartVa, pSectEndVa, pSBlockStartVa, pSBlockEndVa);
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
			Interface::Log("- Failed to load PE file using factory method in PE body constructor\r\n");
		}
	}
	//Interface::Log("PE body sblocks done\r\n");
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
				Interface::Log("! Failed to translate device path: %ws\r\n", DevFilePath);
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
		pNewEntity = new ABlock(SBlocks);
	}

	return pNewEntity;
}

vector<MemoryBlock*> Entity::GetSBlocks() {
	return this->SBlocks;
}
