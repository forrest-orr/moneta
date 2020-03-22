#include "StdAfx.h"
#include "FileIo.hpp"
#include "PeFile.hpp"
#include "Process.hpp"
#include "Memory.hpp"
#include "Interface.hpp"
#include "MemDump.hpp"
#include "Signing.hpp"

using namespace std;
using namespace Memory;

typedef enum _MEMORY_INFORMATION_CLASS {
	MemoryBasicInformation, // MEMORY_BASIC_INFORMATION
	MemoryWorkingSetInformation, // MEMORY_WORKING_SET_INFORMATION
	MemoryMappedFilenameInformation, // UNICODE_STRING
	MemoryRegionInformation, // MEMORY_REGION_INFORMATION
	MemoryWorkingSetExInformation, // MEMORY_WORKING_SET_EX_INFORMATION
	MemorySharedCommitInformation, // MEMORY_SHARED_COMMIT_INFORMATION
	MemoryImageInformation, // MEMORY_IMAGE_INFORMATION
	MemoryRegionInformationEx,
	MemoryPrivilegedBasicInformation,
	MemoryEnclaveImageInformation, // MEMORY_ENCLAVE_IMAGE_INFORMATION // since REDSTONE3
	MemoryBasicInformationCapped
} MEMORY_INFORMATION_CLASS;

typedef struct _MEMORY_IMAGE_INFORMATION {
	PVOID ImageBase;
	SIZE_T SizeOfImage;
	union {
		ULONG ImageFlags;
		struct {
			ULONG ImagePartialMap : 1;
			ULONG ImageNotExecutable : 1;
			ULONG ImageSigningLevel : 4; // REDSTONE3
			ULONG Reserved : 26;
		};
	};
} MEMORY_IMAGE_INFORMATION, * PMEMORY_IMAGE_INFORMATION;

typedef NTSTATUS(__stdcall* NtQueryVirtualMemory_t)(HANDLE, void*, MEMORY_INFORMATION_CLASS, void*, SIZE_T, SIZE_T*);

PeVm::Body::Body(HANDLE hProcess, vector<Subregion*> Subregions, const wchar_t* FilePath) : Region(hProcess, Subregions), PeVm::Component(hProcess, Subregions, (uint8_t*)(Subregions.front())->GetBasic()->BaseAddress), MappedFile(hProcess, Subregions, FilePath, false), PebMod(hProcess, this->PeFile) {
	static NtQueryVirtualMemory_t NtQueryVirtualMemory = (NtQueryVirtualMemory_t)GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtQueryVirtualMemory");
	MEMORY_IMAGE_INFORMATION Mii = { 0 };
	NTSTATUS NtStatus = NtQueryVirtualMemory(hProcess, this->PeFile, MemoryImageInformation, &Mii, sizeof(MEMORY_IMAGE_INFORMATION), nullptr);

	if (NT_SUCCESS(NtStatus)) {
		this->NonExecutableImage = Mii.ImageNotExecutable;
		this->PartiallyMapped = Mii.ImagePartialMap;
		this->ImageSize = Mii.SizeOfImage;
		this->SigningLevel = Mii.ImageSigningLevel;
	}
	else {
		Interface::Log("- NtQueryVirtualMemory failed for image information (0x%08x)\r\n", NtStatus);
	}

	if (!this->GetFileBase()->IsPhantom()) {
		this->Signed = CheckSigning(FilePath);

		if ((this->Pe = PeFile::Load(FilePath)) != nullptr) {
			//if ((this->Pe = PeFile::Load(this->GetData(), this->GetSize())) != nullptr) {
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
				uint8_t* pSectStartVa = this->PeFile + ArtificialPeHdr.VirtualAddress;
				uint8_t* pSectEndVa = this->PeFile + ArtificialPeHdr.VirtualAddress + dwSectionSize;

				//
				// Calculate the sblocks overlapping between this PE entity and the current section.
				//

				vector<Subregion*> OverlapSubregion;

				for (vector<Subregion*>::const_iterator SbItr = Subregions.begin(); SbItr != Subregions.end(); ++SbItr) {
					uint8_t* pSubregionStartVa = (uint8_t*)(*SbItr)->GetBasic()->BaseAddress;
					uint8_t* pSubregionEndVa = (uint8_t*)(*SbItr)->GetBasic()->BaseAddress + (*SbItr)->GetBasic()->RegionSize;

					if ((pSubregionStartVa >= pSectStartVa && pSubregionStartVa < pSectEndVa) || (pSubregionEndVa > pSectStartVa&& pSubregionEndVa <= pSectEndVa) || (pSubregionStartVa < pSectStartVa && pSubregionEndVa > pSectEndVa)) {
						//Interface::Log("* Section %s [0x%p:0x%p] corresponds to sblock [0x%p:0x%p]\r\n", Sect->GetHeader()->Name, pSectStartVa, pSectEndVa, pSubregionStartVa, pSubregionEndVa);
						MEMORY_BASIC_INFORMATION* Mbi = new MEMORY_BASIC_INFORMATION; // When duplicating sblocks, all heap allocated memory must be cloned so that no addresses are double referenced/double freed
						memcpy(Mbi, (*SbItr)->GetBasic(), sizeof(MEMORY_BASIC_INFORMATION));
						OverlapSubregion.push_back(new Subregion(hProcess, Mbi, (*SbItr)->GetThreads()));
					}
				}

				this->Sections.push_back(new Section(hProcess, OverlapSubregion, &ArtificialPeHdr, this->PeFile));
			}
		}
		else {
			Interface::Log("- Failed to load PE file using factory method in PE body constructor\r\n");
		}
	}
}

PeVm::Body::~Body() {
	for (vector<Section*>::const_iterator Itr = this->Sections.begin(); Itr != this->Sections.end(); ++Itr) {
		delete* Itr;
	}

	delete this->Pe;
}

vector<PeVm::Section*> PeVm::Body::FindOverlapSect(Subregion& Address) {
	vector<PeVm::Section*> OverlappingSections;

	for (vector<Section*>::const_iterator SectItr = this->Sections.begin(); SectItr != this->Sections.end(); ++SectItr) {
		vector<Subregion*> SbList = (*SectItr)->GetSubregions();
		for (vector<Subregion*>::const_iterator SbItr = SbList.begin(); SbItr != SbList.end(); ++SbItr) {
			if (Address.GetBasic()->BaseAddress == (*SbItr)->GetBasic()->BaseAddress) {
				OverlappingSections.push_back(*SectItr);
			}
		}
	}

	return OverlappingSections;
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

PeVm::Component::Component(HANDLE hProcess, std::vector<Subregion*> Subregions, uint8_t* pPeBuf) : Region(hProcess, Subregions), PeFile(pPeBuf) {}

PeVm::Section::Section(HANDLE hProcess, vector<Subregion*> Subregions, IMAGE_SECTION_HEADER* SectHdr, uint8_t* pPeBuf) : Region(hProcess, Subregions), PeVm::Component(hProcess, Subregions, pPeBuf) {
	memcpy(&this->Hdr, SectHdr, sizeof(IMAGE_SECTION_HEADER));
	this->EntitySize = this->Hdr.SizeOfRawData == 0 ? this->Hdr.Misc.VirtualSize : this->Hdr.SizeOfRawData; // Overwrite default size determined by sblocks. Verified correct order.
}

MappedFile::MappedFile(HANDLE hProcess, vector<Subregion*> Subregions, const wchar_t* FilePath, bool bMemStore) : Region(hProcess, Subregions), MapFileBase(new FileBase(FilePath, bMemStore, false)) {}

MappedFile::~MappedFile() {
	delete this->MapFileBase;
}

Region::Region(HANDLE hProcess, vector<Subregion*> Subregions) { // Removed as a temporary performance optimization since the region info is not being used during detailed enumeration
	/*
	if (Subregions.front()->GetBasic()->State == MEM_COMMIT) {
		static NtQueryVirtualMemory_t NtQueryVirtualMemory = (NtQueryVirtualMemory_t)GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtQueryVirtualMemory");
		this->RegionInfo = new MEMORY_REGION_INFORMATION;
		NTSTATUS NtStatus = NtQueryVirtualMemory(hProcess, Subregions.front()->GetBasic()->AllocationBase, MemoryRegionInformation, this->RegionInfo, sizeof(MEMORY_REGION_INFORMATION), nullptr);

		if (!NT_SUCCESS(NtStatus)) {
			delete this->RegionInfo;
			this->RegionInfo = nullptr;
			printf("- Failed to query region information at 0x%p (0x%08x)\r\n", Subregions.front()->GetBasic()->AllocationBase, NtStatus);
			system("pause");
		}
	}
	*/

	SetSubregions(Subregions);
}

Entity* Entity::Create(HANDLE hProcess, std::vector<Subregion*> Subregions) {
	Entity* pNewEntity = nullptr;

	if (Subregions.front()->GetBasic()->Type == MEM_MAPPED || Subregions.front()->GetBasic()->Type == MEM_IMAGE) {
		wchar_t DevFilePath[MAX_PATH + 1] = { 0 };
		wchar_t MaFilePath[MAX_PATH + 1] = { 0 };

		if (GetMappedFileNameW(hProcess, (HMODULE)Subregions.front()->GetBasic()->BaseAddress, DevFilePath, MAX_PATH)) {
			if (!FileBase::TranslateDevicePath(DevFilePath, MaFilePath)) {
				Interface::Log(VerbosityLevel::Debug, "! Failed to translate device path: %ws\r\n", DevFilePath);
				wcscpy_s(MaFilePath, MAX_PATH + 1, L"?");
			}
		}
		else {
			if (Subregions.front()->GetBasic()->Type == MEM_MAPPED) {
				wcscpy_s(MaFilePath, MAX_PATH + 1, L"Page File");
			}
			else {
				//Interface::Log("! Phantom image section detected.\r\n");
				wcscpy_s(MaFilePath, MAX_PATH + 1, L"?");
			}
		}

		if (Subregions.front()->GetBasic()->Type == MEM_MAPPED) {
			pNewEntity = new MappedFile(hProcess, Subregions, MaFilePath);
		}
		else if (Subregions.front()->GetBasic()->Type == MEM_IMAGE) {
			pNewEntity = new PeVm::Body(hProcess, Subregions, MaFilePath);
		}
	}
	else {
		pNewEntity = new Region(hProcess, Subregions);
	}

	return pNewEntity;
}

bool Entity::Dump(MemDump& ProcDmp, Entity& Target) {
	vector<Subregion*> Subregions = Target.GetSubregions(); // This must be done explicitly, otherwise each time GetSubregions is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.
	wchar_t DumpFolder[MAX_PATH + 1] = { 0 };
	int32_t nDumpCount = 0;

	swprintf_s(DumpFolder, MAX_PATH + 1, L"%d_%p_%ws", ProcDmp.GetPid(), Target.GetStartVa(), Subregion::TypeSymbol(Subregions.front()->GetBasic()->Type));

	for (vector<Subregion*>::iterator SbItr = Subregions.begin(); SbItr != Subregions.end(); ++SbItr) {
		if ((*SbItr)->GetBasic()->State == MEM_COMMIT) {
			wchar_t DumFilePath[MAX_PATH + 1] = { 0 };
			if (ProcDmp.Create(DumpFolder, (*SbItr)->GetBasic(), DumFilePath, MAX_PATH + 1)) {
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
	/*
	if (RegionInfo != nullptr) {
		delete this->RegionInfo;
	}
	*/
}

void Entity::SetSubregions(vector<Subregion*> Subregions) {
	this->Subregions = Subregions;
	this->StartVa = (uint8_t*)(Subregions.front())->GetBasic()->BaseAddress;
	this->EndVa = ((uint8_t*)(Subregions.back())->GetBasic()->BaseAddress + (Subregions.back())->GetBasic()->RegionSize);
	this->EntitySize = ((uint8_t*)(Subregions.back())->GetBasic()->BaseAddress + (Subregions.back())->GetBasic()->RegionSize) - (Subregions.front())->GetBasic()->BaseAddress;
}