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
#include "Process.hpp"
#include "Blocks.hpp"
#include "Interface.hpp"
#include "MemDump.hpp"
#include "Signing.hpp"

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
	for (vector<Section*>::const_iterator Itr = this->Sections.begin(); Itr != this->Sections.end(); ++Itr) {
		delete* Itr;
	}

	delete this->Pe;
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

uint32_t Entity::GetEntitySize() {
	return this->EntitySize;
}

uint8_t* PeVm::Body::GetPeBase() {
	return this->PeBase;
}

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
					//wcscat_s(pTranslatedPath, MAX_PATH + 1, L"\\");
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
	this->EntitySize = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize) - (SBlocks.front())->GetBasic()->AllocationBase;
}

ABlock::ABlock(vector<MemoryBlock*> SBlocks) {
	SetSBlocks(SBlocks);
}

PeVm::Section::Section(vector<MemoryBlock*> SBlocks, IMAGE_SECTION_HEADER* pHdr, uint8_t* pPeBase) : ABlock(SBlocks), PeVm::Component(SBlocks, pPeBase) {
	memcpy(&this->Hdr, pHdr, sizeof(IMAGE_SECTION_HEADER));
	this->EntitySize = this->Hdr.SizeOfRawData == 0 ? this->Hdr.Misc.VirtualSize : this->Hdr.SizeOfRawData; // Overwrite default size determined by sblocks. Verified correct order.
}

MappedFile::MappedFile(vector<MemoryBlock*> SBlocks, const wchar_t* pFilePath, bool bMemStore) : ABlock(SBlocks), FileBase(pFilePath, bMemStore, false) {}

bool PeVm::Body::PebModule::Exists() {
	return (this->Missing ? false : true);
}

PeVm::Body::PebModule::PebModule(HANDLE hProcess, uint8_t* pModBase) {
	if (hProcess != nullptr) {
		if (GetModuleInformation(hProcess, (HMODULE)pModBase, &this->Info, sizeof(this->Info))) {
			wchar_t ModuleName[MAX_PATH + 1] = { 0 }, ModulePath[MAX_PATH + 1] = { 0 };

			if (GetModuleBaseNameW(hProcess, (HMODULE)pModBase, ModuleName, MAX_PATH + 1)) {
				this->Name = ModuleName;
			}

			if (GetModuleFileNameExW(hProcess, (HMODULE)pModBase, ModulePath, MAX_PATH + 1)) {
				this->Path = ModulePath;
			}

			this->Missing = false;
		}
		else {
			this->Missing = true;
		}
	}
}

wstring PeVm::Body::PebModule::GetPath() {
	return this->Path;
}

uint8_t *PeVm::Body::PebModule::GetBase() {
	return (uint8_t *)this->Info.lpBaseOfDll;
}

PeVm::Body::PebModule &PeVm::Body::GetPebModule() {
	return this->PebMod;
}

bool PeVm::Body::IsSigned() {
	return this->Signed;
}

bool PeVm::Body::IsNonExecutableImage() {
	return this->NonExecutableImage;
}

PeVm::Body::Body(HANDLE hProcess, vector<MemoryBlock*> SBlocks, const wchar_t* pFilePath) : ABlock(SBlocks), PeVm::Component(SBlocks, (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress), MappedFile(SBlocks, pFilePath, true), PebMod(hProcess, this->PeBase) {
	static NtQueryVirtualMemory_t NtQueryVirtualMemory = (NtQueryVirtualMemory_t)GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtQueryVirtualMemory");
	MEMORY_IMAGE_INFORMATION Mii = { 0 };
	NTSTATUS NtStatus = NtQueryVirtualMemory(hProcess, this->PeBase, MemoryImageInformation, &Mii, sizeof(MEMORY_IMAGE_INFORMATION), nullptr);

	if (NT_SUCCESS(NtStatus)) {
		//Interface::Log("ImageNotExecutable: %d\r\n", Mii.ImageNotExecutable);
		this->NonExecutableImage = Mii.ImageNotExecutable;
	}
	else {
		Interface::Log("- NtQueryVirtualMemory failed for image information (0x%08x)\r\n", NtStatus);
	}

	if (!this->IsPhantom()) {
		this->Signed = VerifyEmbeddedSignature(pFilePath);

		if ((this->Pe = PeBase::Load(this->GetFileBaseData(), this->GetFileBaseSize())) != nullptr) {
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

				for (vector<MemoryBlock*>::const_iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
					uint8_t* pSBlockStartVa = (uint8_t*)(*SbItr)->GetBasic()->BaseAddress;
					uint8_t* pSBlockEndVa = (uint8_t*)(*SbItr)->GetBasic()->BaseAddress + (*SbItr)->GetBasic()->RegionSize;

					if ((pSBlockStartVa >= pSectStartVa && pSBlockStartVa < pSectEndVa) || (pSBlockEndVa > pSectStartVa&& pSBlockEndVa <= pSectEndVa) || (pSBlockStartVa < pSectStartVa && pSBlockEndVa > pSectEndVa)) {
						//Interface::Log("* Section %s [0x%p:0x%p] corresponds to sblock [0x%p:0x%p]\r\n", Sect->GetHeader()->Name, pSectStartVa, pSectEndVa, pSBlockStartVa, pSBlockEndVa);
						MEMORY_BASIC_INFORMATION* pMbi = new MEMORY_BASIC_INFORMATION; // When duplicating sblocks, all heap allocated memory must be cloned so that no addresses are double referenced/double freed
						memcpy(pMbi, (*SbItr)->GetBasic(), sizeof(MEMORY_BASIC_INFORMATION));
						OverlapSBlock.push_back(new MemoryBlock(pMbi, nullptr, (*SbItr)->GetThreads()));
					}
				}

				this->Sections.push_back(new Section(OverlapSBlock, &ArtificialPeHdr, this->PeBase));
			}
		}
		else {
			Interface::Log("- Failed to load PE file using factory method in PE body constructor\r\n");
		}
	}
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
				//Interface::Log("! Phantom image section detected.\r\n");
				wcscpy_s(MapFilePath, MAX_PATH + 1, L"?");
			}
		}

		if (SBlocks.front()->GetBasic()->Type == MEM_MAPPED) {
			pNewEntity = new MappedFile(SBlocks, MapFilePath);
		}
		else if (SBlocks.front()->GetBasic()->Type == MEM_IMAGE) {
			pNewEntity = new PeVm::Body(hProcess, SBlocks, MapFilePath);
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

bool Entity::Dump(MemDump & ProcDmp, Entity& Target) {
	vector<MemoryBlock*> SBlocks = Target.GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.
	wchar_t DumpFolder[MAX_PATH + 1] = { 0 };
	int32_t nDumpCount = 0;

	swprintf_s(DumpFolder, MAX_PATH + 1, L"%d_%p_%ws", ProcDmp.GetPid(), Target.GetStartVa(), MemoryBlock::TypeSymbol(SBlocks.front()->GetBasic()->Type));

	for (vector<MemoryBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
		if ((*SbItr)->GetBasic()->State == MEM_COMMIT) {
			wchar_t DumpFilePath[MAX_PATH + 1] = { 0 };
			if (ProcDmp.Create(DumpFolder, (*SbItr)->GetBasic(), DumpFilePath, MAX_PATH + 1)) {
				nDumpCount++;
			}
		}
	}

	return nDumpCount ? true : false;
}