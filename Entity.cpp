/*
____________________________________________________________________________________
| _______  _____  __   _ _______ _______ _______                                   |
| |  |  | |     | | \  | |______    |    |_____|                                   |
| |  |  | |_____| |  \_| |______    |    |     |                                   |
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
	for (vector<SBlock*>::const_iterator Itr = this->SBlocks.begin(); Itr != this->SBlocks.end(); ++Itr) {
		//if(!(*Itr)) Interface::Log("null itr\r\n");
		delete * Itr;
	}

	if (RegionInfo != nullptr) {
		delete this->RegionInfo;
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

PeVm::Component::Component(HANDLE hProcess, std::vector<SBlock*> SBlocks, uint8_t* pPeBase) : ABlock(hProcess, SBlocks), PeBase(pPeBase) {}

void Entity::SetSBlocks(vector<SBlock*> SBlocks) {
	this->SBlocks = SBlocks;
	this->StartVa = (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress;
	this->EndVa = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize);
	this->EntitySize = ((uint8_t*)(SBlocks.back())->GetBasic()->BaseAddress + (SBlocks.back())->GetBasic()->RegionSize) - (SBlocks.front())->GetBasic()->BaseAddress;
}

ABlock::ABlock(HANDLE hProcess, vector<SBlock*> SBlocks) {
	/* Removed as a temporary performance optimization since the region info is not being used during detailed enumeration
	if (SBlocks.front()->GetBasic()->State == MEM_COMMIT) {
		static NtQueryVirtualMemory_t NtQueryVirtualMemory = (NtQueryVirtualMemory_t)GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtQueryVirtualMemory");
		this->RegionInfo = new MEMORY_REGION_INFORMATION;
		NTSTATUS NtStatus = NtQueryVirtualMemory(hProcess, SBlocks.front()->GetBasic()->AllocationBase, MemoryRegionInformation, this->RegionInfo, sizeof(MEMORY_REGION_INFORMATION), nullptr);

		if (!NT_SUCCESS(NtStatus)) {
			delete this->RegionInfo;
			this->RegionInfo = nullptr;
			printf("- Failed to query region information at 0x%p (0x%08x)\r\n", SBlocks.front()->GetBasic()->AllocationBase, NtStatus);
			system("pause");
		}
	}
	*/

	SetSBlocks(SBlocks);
}

PeVm::Section::Section(HANDLE hProcess, vector<SBlock*> SBlocks, IMAGE_SECTION_HEADER* pHdr, uint8_t* pPeBase) : ABlock(hProcess, SBlocks), PeVm::Component(hProcess, SBlocks, pPeBase) {
	memcpy(&this->Hdr, pHdr, sizeof(IMAGE_SECTION_HEADER));
	this->EntitySize = this->Hdr.SizeOfRawData == 0 ? this->Hdr.Misc.VirtualSize : this->Hdr.SizeOfRawData; // Overwrite default size determined by sblocks. Verified correct order.
}

MappedFile::MappedFile(HANDLE hProcess, vector<SBlock*> SBlocks, const wchar_t* pFilePath, bool bMemStore) : ABlock(hProcess, SBlocks), FileBase(pFilePath, bMemStore, false) {}

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

wstring PeVm::Body::PebModule::GetName() {
	return this->Name;
}

uint8_t *PeVm::Body::PebModule::GetBase() {
	return (uint8_t *)this->Info.lpBaseOfDll;
}

uint8_t* PeVm::Body::PebModule::GetEntryPoint() {
	return (uint8_t*)this->Info.EntryPoint;
}

uint32_t PeVm::Body::PebModule::GetSize() {
	return this->Info.SizeOfImage;
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

bool PeVm::Body::IsPartiallyMapped() {
	return this->PartiallyMapped;
}

uint32_t PeVm::Body::GetImageSize() {
	return this->ImageSize;
}

PeVm::Body::Body(HANDLE hProcess, vector<SBlock*> SBlocks, const wchar_t* pFilePath) : ABlock(hProcess, SBlocks), PeVm::Component(hProcess, SBlocks, (uint8_t*)(SBlocks.front())->GetBasic()->BaseAddress), MappedFile(hProcess, SBlocks, pFilePath, false), PebMod(hProcess, this->PeBase) {
	static NtQueryVirtualMemory_t NtQueryVirtualMemory = (NtQueryVirtualMemory_t)GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtQueryVirtualMemory");
	MEMORY_IMAGE_INFORMATION Mii = { 0 };
	NTSTATUS NtStatus = NtQueryVirtualMemory(hProcess, this->PeBase, MemoryImageInformation, &Mii, sizeof(MEMORY_IMAGE_INFORMATION), nullptr);

	if (NT_SUCCESS(NtStatus)) {
		this->NonExecutableImage = Mii.ImageNotExecutable;
		this->PartiallyMapped = Mii.ImagePartialMap;
		this->ImageSize = Mii.SizeOfImage;
		this->SigningLevel = Mii.ImageSigningLevel;
	}
	else {
		Interface::Log("- NtQueryVirtualMemory failed for image information (0x%08x)\r\n", NtStatus);
	}

	if (!this->IsPhantom()) {
		this->Signed = CheckSigning(pFilePath);

		if ((this->Pe = PeBase::Load(pFilePath)) != nullptr) {
		//if ((this->Pe = PeBase::Load(this->GetFileBaseData(), this->GetFileBaseSize())) != nullptr) {
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

				vector<SBlock*> OverlapSBlock;

				for (vector<SBlock*>::const_iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
					uint8_t* pSBlockStartVa = (uint8_t*)(*SbItr)->GetBasic()->BaseAddress;
					uint8_t* pSBlockEndVa = (uint8_t*)(*SbItr)->GetBasic()->BaseAddress + (*SbItr)->GetBasic()->RegionSize;

					if ((pSBlockStartVa >= pSectStartVa && pSBlockStartVa < pSectEndVa) || (pSBlockEndVa > pSectStartVa&& pSBlockEndVa <= pSectEndVa) || (pSBlockStartVa < pSectStartVa && pSBlockEndVa > pSectEndVa)) {
						//Interface::Log("* Section %s [0x%p:0x%p] corresponds to sblock [0x%p:0x%p]\r\n", Sect->GetHeader()->Name, pSectStartVa, pSectEndVa, pSBlockStartVa, pSBlockEndVa);
						MEMORY_BASIC_INFORMATION* pMbi = new MEMORY_BASIC_INFORMATION; // When duplicating sblocks, all heap allocated memory must be cloned so that no addresses are double referenced/double freed
						memcpy(pMbi, (*SbItr)->GetBasic(), sizeof(MEMORY_BASIC_INFORMATION));
						OverlapSBlock.push_back(new SBlock(hProcess, pMbi, (*SbItr)->GetThreads()));
					}
				}

				this->Sections.push_back(new Section(hProcess, OverlapSBlock, &ArtificialPeHdr, this->PeBase));
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

Entity* Entity::Create(HANDLE hProcess, std::vector<SBlock*> SBlocks) {
	Entity* pNewEntity = nullptr;

	if (SBlocks.front()->GetBasic()->Type == MEM_MAPPED || SBlocks.front()->GetBasic()->Type == MEM_IMAGE) {
		wchar_t DevFilePath[MAX_PATH + 1] = { 0 };
		wchar_t MapFilePath[MAX_PATH + 1] = { 0 };

		if (GetMappedFileNameW(hProcess, (HMODULE)SBlocks.front()->GetBasic()->BaseAddress, DevFilePath, MAX_PATH)) {
			if (!FileBase::TranslateDevicePath(DevFilePath, MapFilePath)) {
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
			pNewEntity = new MappedFile(hProcess, SBlocks, MapFilePath);
		}
		else if (SBlocks.front()->GetBasic()->Type == MEM_IMAGE) {
			pNewEntity = new PeVm::Body(hProcess, SBlocks, MapFilePath);
		}
	}
	else {
		pNewEntity = new ABlock(hProcess, SBlocks);
	}

	return pNewEntity;
}

vector<SBlock*> Entity::GetSBlocks() {
	return this->SBlocks;
}

bool Entity::Dump(MemDump & ProcDmp, Entity& Target) {
	vector<SBlock*> SBlocks = Target.GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.
	wchar_t DumpFolder[MAX_PATH + 1] = { 0 };
	int32_t nDumpCount = 0;

	swprintf_s(DumpFolder, MAX_PATH + 1, L"%d_%p_%ws", ProcDmp.GetPid(), Target.GetStartVa(), SBlock::TypeSymbol(SBlocks.front()->GetBasic()->Type));

	for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
		if ((*SbItr)->GetBasic()->State == MEM_COMMIT) {
			wchar_t DumpFilePath[MAX_PATH + 1] = { 0 };
			if (ProcDmp.Create(DumpFolder, (*SbItr)->GetBasic(), DumpFilePath, MAX_PATH + 1)) {
				nDumpCount++;
			}
		}
	}

	return nDumpCount ? true : false;
}

vector<PeVm::Section*> PeVm::Body::FindOverlapSect(SBlock& Address) {
	vector<PeVm::Section*> OverlappingSections;

	for (vector<Section*>::const_iterator SectItr = this->Sections.begin(); SectItr != this->Sections.end(); ++SectItr) {
		vector<SBlock*> SbList = (*SectItr)->GetSBlocks();
		for (vector<SBlock*>::const_iterator SbItr = SbList.begin(); SbItr != SbList.end(); ++SbItr) {
			//if (Address.GetBasic()->BaseAddress >= (*SbItr)->GetBasic()->BaseAddress && reinterpret_cast<uint8_t *>(Address.GetBasic()->BaseAddress) < (reinterpret_cast<uint8_t*>((*SbItr)->GetBasic()->BaseAddress) + (*SbItr)->GetBasic()->RegionSize)) {
			if (Address.GetBasic()->BaseAddress == (*SbItr)->GetBasic()->BaseAddress) {
				OverlappingSections.push_back(*SectItr);
			}
		}
	}

	return OverlappingSections;
}