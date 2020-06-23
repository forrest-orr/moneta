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
#include "Signing.h"

using namespace std;
using namespace Memory;

PeVm::Body::Body(Processes::Process& OwnerProc, vector<Subregion*> Subregions, const wchar_t* FilePath) : Region(OwnerProc.GetHandle(), Subregions), PeVm::Component(OwnerProc.GetHandle(), Subregions, static_cast<uint8_t *>((Subregions.front())->GetBasic()->BaseAddress)), MappedFile(OwnerProc.GetHandle(), Subregions, FilePath, false), PebMod(OwnerProc.GetHandle(), this->PeData) {
	static NtQueryVirtualMemory_t NtQueryVirtualMemory = reinterpret_cast<NtQueryVirtualMemory_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtQueryVirtualMemory"));
	MEMORY_IMAGE_INFORMATION Mii = { 0 };
	NTSTATUS NtStatus = NtQueryVirtualMemory(OwnerProc.GetHandle(), this->PeData, MemoryImageInformation, &Mii, sizeof(MEMORY_IMAGE_INFORMATION), nullptr);

	Interface::Log(Interface::VerbosityLevel::Debug, "... creating PE entity for %ws within %ws (PID %d)\r\n", FilePath, OwnerProc.GetName().c_str(), OwnerProc.GetPid());

	if (NT_SUCCESS(NtStatus)) {
		this->NonExecutableImage = Mii.ImageNotExecutable;
		this->PartiallyMapped = Mii.ImagePartialMap;
		this->ImageSize = Mii.SizeOfImage;
		this->SigningLevel = Mii.ImageSigningLevel;
	}
	else {
		Interface::Log(Interface::VerbosityLevel::Debug, "... NtQueryVirtualMemory failed for image information (0x%08x)\r\n", NtStatus);
	}

	if (!this->GetFileBase()->IsPhantom()) {
		this->Signed = CheckSigning(FilePath);

		if ((this->FilePe = PeFile::Load(FilePath)) != nullptr) {
			// Identify which subregions within this parent entity overlap with each section header. Create an entity child object for each section and copy associated subregions into it.

			for (int32_t nX = -1; nX < this->FilePe->GetFileHdr()->NumberOfSections; nX++) {
				IMAGE_SECTION_HEADER ArtificialPeHdr = { 0 }; // This will initialize other relevant fields such as VirtualAddress to 0 for the PE header edge case.

				if (nX == -1) {
					strcpy_s(reinterpret_cast<char*>(ArtificialPeHdr.Name), sizeof(ArtificialPeHdr.Name), "Header");
					ArtificialPeHdr.SizeOfRawData = this->FilePe->GetSectHdrs()->VirtualAddress; // Consider the size of the PE headers to be all data leading up to the start of the first real section.
				}
				else {
					memcpy(&ArtificialPeHdr, (this->FilePe->GetSectHdrs() + nX), sizeof(IMAGE_SECTION_HEADER));
				}

				//uint32_t dwSectionSize = (ArtificialPeHdr.SizeOfRawData == 0 ? ArtificialPeHdr.Misc.VirtualSize : ArtificialPeHdr.SizeOfRawData);
				uint32_t dwSectionSize = (ArtificialPeHdr.SizeOfRawData < ArtificialPeHdr.Misc.VirtualSize ? ArtificialPeHdr.Misc.VirtualSize : ArtificialPeHdr.SizeOfRawData); // .data sections will sometimes have a non-zero raw data where the virtual size is still larger than the raw size (copy-on-write)
				uint8_t* pSectStartVa = this->PeData + ArtificialPeHdr.VirtualAddress;
				uint8_t* pSectEndVa = this->PeData + ArtificialPeHdr.VirtualAddress + dwSectionSize;

				// Calculate the subregions overlapping between this PE entity and the current section.

				vector<Subregion*> OverlapSubregion;

				for (vector<Subregion*>::const_iterator SbrItr = Subregions.begin(); SbrItr != Subregions.end(); ++SbrItr) {
					uint8_t* pSubregionStartVa = static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress);
					uint8_t* pSubregionEndVa = static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress) + (*SbrItr)->GetBasic()->RegionSize;

					if ((pSubregionStartVa >= pSectStartVa && pSubregionStartVa < pSectEndVa) || (pSubregionEndVa > pSectStartVa&& pSubregionEndVa <= pSectEndVa) || (pSubregionStartVa < pSectStartVa && pSubregionEndVa > pSectEndVa)) {
						Interface::Log(Interface::VerbosityLevel::Debug, "... section %s [0x%p:0x%p] corresponds to subregion [0x%p:0x%p]\r\n", ArtificialPeHdr.Name, pSectStartVa, pSectEndVa, pSubregionStartVa, pSubregionEndVa);
						MEMORY_BASIC_INFORMATION* Mbi = new MEMORY_BASIC_INFORMATION; // When duplicating subregions, all heap allocated memory must be cloned so that no addresses are double referenced/double freed
						memcpy(Mbi, (*SbrItr)->GetBasic(), sizeof(MEMORY_BASIC_INFORMATION));
						OverlapSubregion.push_back(new Subregion(OwnerProc, Mbi));
					}
				}

				this->Sections.push_back(new Section(OwnerProc.GetHandle(), OverlapSubregion, &ArtificialPeHdr, this->PeData));
			}
		}
		else {
			Interface::Log(Interface::VerbosityLevel::Debug, "... failed to load PE file using factory method in PE body constructor\r\n");
		}
	}
}

PeVm::Body::~Body() {
	for (vector<Section*>::const_iterator Itr = this->Sections.begin(); Itr != this->Sections.end(); ++Itr) {
		delete* Itr;
	}

	if (this->FilePe != nullptr) {
		delete this->FilePe;
	}
}

PeVm::Section* PeVm::Body::GetSection(string Name) const {
	for (vector<Section*>::const_iterator SectItr = this->Sections.begin(); SectItr != this->Sections.end(); ++SectItr) {
		if (_stricmp(reinterpret_cast<const char *>((*SectItr)->GetHeader()->Name), Name.c_str()) == 0) {
			return *SectItr;
		}
	}

	return nullptr;
}

vector<PeVm::Section*> PeVm::Body::FindOverlapSect(Subregion& Address) {
	vector<PeVm::Section*> OverlappingSections;

	for (vector<Section*>::const_iterator SectItr = this->Sections.begin(); SectItr != this->Sections.end(); ++SectItr) {
		vector<Subregion*> SbrVec = (*SectItr)->GetSubregions();
		for (vector<Subregion*>::const_iterator SbrItr = SbrVec.begin(); SbrItr != SbrVec.end(); ++SbrItr) {
			if (Address.GetBasic()->BaseAddress == (*SbrItr)->GetBasic()->BaseAddress) {
				OverlappingSections.push_back(*SectItr);
			}
		}
	}

	return OverlappingSections;
}

bool PeVm::Body::IsSigned() const {
	return (this->Signed == Signing_t::Unsigned ? false : true);
}

Signing_t PeVm::Body::GetSisningType() const {
	return this->Signed;
}

PeVm::Body::PebModule::PebModule(HANDLE hProcess, const uint8_t* pModBase) {
	if (hProcess != nullptr) {
		if (GetModuleInformation(hProcess, reinterpret_cast<HMODULE>(const_cast<uint8_t *>(pModBase)), &this->Info, sizeof(this->Info))) {
			wchar_t ModuleName[MAX_PATH + 1] = { 0 }, ModulePath[MAX_PATH + 1] = { 0 };

			if (GetModuleBaseNameW(hProcess, reinterpret_cast<HMODULE>(const_cast<uint8_t*>(pModBase)), ModuleName, MAX_PATH + 1)) {
				this->Name = ModuleName;
			}

			if (GetModuleFileNameExW(hProcess, reinterpret_cast<HMODULE>(const_cast<uint8_t*>(pModBase)), ModulePath, MAX_PATH + 1)) {
				this->Path = ModulePath;
			}

			this->Missing = false;
		}
		else {
			this->Missing = true;
		}
	}
}

PeVm::Component::Component(HANDLE hProcess, std::vector<Subregion*> Subregions, uint8_t* pPeBuf) : Region(hProcess, Subregions), PeData(pPeBuf) {}

PeVm::Section::Section(HANDLE hProcess, vector<Subregion*> Subregions, IMAGE_SECTION_HEADER* SectHdr, uint8_t* pPeBuf) : Region(hProcess, Subregions), PeVm::Component(hProcess, Subregions, pPeBuf) {
	memcpy(&this->Hdr, SectHdr, sizeof(IMAGE_SECTION_HEADER));
	this->EntitySize = this->Hdr.SizeOfRawData < this->Hdr.Misc.VirtualSize ? this->Hdr.Misc.VirtualSize : this->Hdr.SizeOfRawData; // Overwrite default size determined by subregions. Verified correct order.
}

MappedFile::MappedFile(HANDLE hProcess, vector<Subregion*> Subregions, const wchar_t* FilePath, bool bMemStore) : Region(hProcess, Subregions), MapFileBase(new FileBase(FilePath, bMemStore, false)) {}

MappedFile::~MappedFile() {
	delete this->MapFileBase;
}

Region::Region(HANDLE hProcess, vector<Subregion*> Subregions) {
	SetSubregions(Subregions);
}

Entity* Entity::Create(Processes::Process& OwnerProc, std::vector<Subregion*> Subregions) {
	Entity* NewEntity = nullptr;

	if (Subregions.front()->GetBasic()->Type == MEM_MAPPED || Subregions.front()->GetBasic()->Type == MEM_IMAGE) {
		wchar_t DevFilePath[MAX_PATH + 1] = { 0 };
		wchar_t MapFilePath[MAX_PATH + 1] = { 0 };

		if (GetMappedFileNameW(OwnerProc.GetHandle(), static_cast<HMODULE>(Subregions.front()->GetBasic()->BaseAddress), DevFilePath, MAX_PATH)) {
			if (!FileBase::TranslateDevicePath(DevFilePath, MapFilePath)) {
				Interface::Log(Interface::VerbosityLevel::Debug, "! Failed to translate device path: %ws\r\n", DevFilePath);
				wcscpy_s(MapFilePath, MAX_PATH + 1, L"?");
			}
		}
		else {
			if (Subregions.front()->GetBasic()->Type == MEM_MAPPED) {
				wcscpy_s(MapFilePath, MAX_PATH + 1, L"Page File");
			}
			else {
				wcscpy_s(MapFilePath, MAX_PATH + 1, L"?");
			}
		}

		if (Subregions.front()->GetBasic()->Type == MEM_MAPPED) {
			NewEntity = new MappedFile(OwnerProc.GetHandle(), Subregions, MapFilePath);
		}
		else if (Subregions.front()->GetBasic()->Type == MEM_IMAGE) {
			NewEntity = new PeVm::Body(OwnerProc, Subregions, MapFilePath);
		}
	}
	else {
		NewEntity = new Region(OwnerProc.GetHandle(), Subregions);
	}

	return NewEntity;
}

bool Entity::IsPartiallyExecutable() const {
	vector<Subregion*> Subregions = this->GetSubregions(); // This must be done explicitly, otherwise each time GetSubregions is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

	for (vector<Subregion*>::iterator SbrItr = Subregions.begin(); SbrItr != Subregions.end(); ++SbrItr) {
		if ((*SbrItr)->GetBasic()->Protect == PAGE_EXECUTE_READ || (*SbrItr)->GetBasic()->Protect == PAGE_EXECUTE_READWRITE) {
			return true;
		}
	}

	return false;
}

bool Entity::ContainsFlag(uint64_t qwFlag) const {
	vector<Subregion*> Subregions = this->GetSubregions();

	for (vector<Subregion*>::iterator SbrItr = Subregions.begin(); SbrItr != Subregions.end(); ++SbrItr) {
		if (((*SbrItr)->GetFlags() & qwFlag)) {
			return true;
		}
	}

	return false;
}

bool Entity::Dump(MemDump& DmpCtx) const {
	vector<Subregion*> Subregions = this->GetSubregions(); // This must be done explicitly, otherwise each time GetSubregions is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.
	wchar_t DumpFolder[MAX_PATH + 1] = { 0 };
	int32_t nDumpCount = 0;

	swprintf_s(DumpFolder, MAX_PATH + 1, L"%d_%p_%ws", DmpCtx.GetPid(), this->GetStartVa(), Subregion::TypeSymbol(Subregions.front()->GetBasic()->Type));

	for (vector<Subregion*>::iterator SbrItr = Subregions.begin(); SbrItr != Subregions.end(); ++SbrItr) {
		if ((*SbrItr)->GetBasic()->State == MEM_COMMIT) {
			wchar_t DumpFilePath[MAX_PATH + 1] = { 0 };
			if (DmpCtx.Create(DumpFolder, (*SbrItr)->GetBasic(), DumpFilePath, MAX_PATH + 1)) {
				nDumpCount++;
			}
		}
	}

	return nDumpCount ? true : false;
}

Entity::~Entity() {
	for (vector<Subregion*>::const_iterator Itr = this->Subregions.begin(); Itr != this->Subregions.end(); ++Itr) {
		delete* Itr;
	}
}

void Entity::SetSubregions(vector<Subregion*> Subregions) {
	this->Subregions = Subregions;
	this->StartVa = static_cast<uint8_t *>((Subregions.front())->GetBasic()->BaseAddress);
	this->EndVa = (static_cast<uint8_t *>((Subregions.back())->GetBasic()->BaseAddress) + (Subregions.back())->GetBasic()->RegionSize);
	this->EntitySize = (static_cast<uint8_t *>((Subregions.back())->GetBasic()->BaseAddress) + (Subregions.back())->GetBasic()->RegionSize) - (Subregions.front())->GetBasic()->BaseAddress;
}