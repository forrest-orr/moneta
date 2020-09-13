#include <Windows.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <ImageHlp.h>
#include <string>
#include <memory>

#include "PeFile.hpp"

#pragma comment (lib, "Imagehlp.lib")

using namespace std;

PeFile::PeFile(const uint8_t* pPeBuf, uint32_t dwPeFileSize) : Size(dwPeFileSize) {
	assert(pPeBuf != nullptr);
	assert(dwPeFileSize);

	this->Data = make_unique<uint8_t[]>(dwPeFileSize);
	memcpy(this->Data.get(), pPeBuf, dwPeFileSize);
	this->DosHdr = reinterpret_cast<IMAGE_DOS_HEADER*>(this->Data.get());
	this->FileHdr = reinterpret_cast<IMAGE_FILE_HEADER*>((reinterpret_cast<uint8_t *>(this->DosHdr) + this->DosHdr->e_lfanew + sizeof(LONG)));
}

unique_ptr<PeFile> PeFile::Load(const uint8_t* pPeBuf, uint32_t dwPeFileSize) {
	assert(pPeBuf != nullptr);
	assert(dwPeFileSize);

	unique_ptr<PeFile> NewPe;

	if (*(uint16_t*)&pPeBuf[0] == 'ZM') {
		PIMAGE_DOS_HEADER pDosHdr = reinterpret_cast<IMAGE_DOS_HEADER*>(const_cast<uint8_t*>(pPeBuf));
		IMAGE_FILE_HEADER* pFileHdr = reinterpret_cast<IMAGE_FILE_HEADER*>((const_cast<uint8_t*>(pPeBuf) + pDosHdr->e_lfanew + sizeof(LONG)));

		if (pFileHdr->Machine == IMAGE_FILE_MACHINE_I386) {
			NewPe = make_unique<PeArch32>(pPeBuf, dwPeFileSize);
		}
		else if (pFileHdr->Machine == IMAGE_FILE_MACHINE_AMD64) {
			NewPe = make_unique<PeArch64>(pPeBuf, dwPeFileSize);
		}

		if (NewPe) {
			if (!NewPe->Validate()) {
				NewPe.reset();
			}
		}
	}

	return NewPe;
}

unique_ptr<PeFile> PeFile::Load(const wstring &PeFilePath, bool bHdrOnly) {
	HANDLE hFile;
	unique_ptr<PeFile> NewPe;

	if ((hFile = CreateFileW(PeFilePath.c_str(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL)) != INVALID_HANDLE_VALUE) {
		uint32_t dwBytesRead;

		if (bHdrOnly) { // Performance optimization when only header data is needed
			IMAGE_DOS_HEADER DosHdr = { 0 };

			if (ReadFile(hFile, &DosHdr, sizeof(DosHdr), reinterpret_cast<PDWORD>(&dwBytesRead), 0)) {
				IMAGE_FILE_HEADER FileHdr;

				SetFilePointer(hFile, DosHdr.e_lfanew + 4, nullptr, FILE_BEGIN);

				if (ReadFile(hFile, &FileHdr, sizeof(FileHdr), reinterpret_cast<PDWORD>(&dwBytesRead), 0)) {
					uint32_t dwHdrSize = 0; // Obtain the size of the region from where the DOS header begins and where the optional/section headers end

					if (FileHdr.Machine == IMAGE_FILE_MACHINE_I386) {
						IMAGE_OPTIONAL_HEADER32 OptHdr;

						if (ReadFile(hFile, &OptHdr, sizeof(OptHdr), reinterpret_cast<PDWORD>(&dwBytesRead), 0)) {
							dwHdrSize = OptHdr.SizeOfHeaders;
						}
					}
					else if (FileHdr.Machine == IMAGE_FILE_MACHINE_AMD64) {
						IMAGE_OPTIONAL_HEADER64 OptHdr;

						if (ReadFile(hFile, &OptHdr, sizeof(OptHdr), reinterpret_cast<PDWORD>(&dwBytesRead), 0)) {
							dwHdrSize = OptHdr.SizeOfHeaders;
						}
					}

					if (dwHdrSize) {
						unique_ptr<uint8_t[]> HdrData = make_unique<uint8_t[]>(dwHdrSize);

						SetFilePointer(hFile, 0, nullptr, FILE_BEGIN);

						if (ReadFile(hFile, HdrData.get(), dwHdrSize, reinterpret_cast<PDWORD>(&dwBytesRead), 0)) {
							NewPe = PeFile::Load(HdrData.get(), dwHdrSize);

							if (NewPe) {
								NewPe->FullPeLoaded = false;
							}
						}
					}
				}
			}
		}
		else {
			uint32_t dwFileSize = GetFileSize(hFile, nullptr);
			unique_ptr<uint8_t[]> PeBuf = make_unique<uint8_t[]>(dwFileSize);

			if (ReadFile(hFile, PeBuf.get(), dwFileSize, reinterpret_cast<PDWORD>(&dwBytesRead), 0)) {
				NewPe = PeFile::Load(PeBuf.get(), dwFileSize);

				if (NewPe) {
					NewPe->FullPeLoaded = true;
				}
			}
		}

		CloseHandle(hFile);
	}

	return NewPe;
}

bool PeFile::IsExe() {
	return !(this->GetFileHdr()->Characteristics & IMAGE_FILE_DLL); // IMAGE_FILE_EXECUTABLE_IMAGE appears on DLLs as well
}

bool PeFile::IsDll() {
	return (this->GetFileHdr()->Characteristics & IMAGE_FILE_DLL);
}

template<typename NtHdrType> PeArch<NtHdrType>::PeArch(const uint8_t* pPeBuf, uint32_t dwPeFileSize) : PeFile(pPeBuf, dwPeFileSize) {}

template<typename NtHdrType> NtHdrType* PeArch<NtHdrType>::GetNtHdrs() {
	assert(this->DosHdr != nullptr);
	NtHdrType* pNtHdr = (NtHdrType*)(reinterpret_cast<uint8_t *>(this->DosHdr) + this->DosHdr->e_lfanew);

	if (pNtHdr->Signature == 'EP') {
		if (pNtHdr->FileHeader.Machine == GetPeFileArch()) {
			if (pNtHdr->OptionalHeader.Magic == GetPeFileMagic()) {
				this->SectHdrs = reinterpret_cast<IMAGE_SECTION_HEADER *>(
					reinterpret_cast<uint8_t *>(pNtHdr) + sizeof(NtHdrType)
					);
				return pNtHdr;
			}
		}
	}

	return nullptr;
}

template<typename NtHdrType> bool PeArch<NtHdrType>::Validate() {
	return (this->NtHdr = GetNtHdrs());
}

template<typename NtHdrType> void* PeArch<NtHdrType>::GetImageBase() {
	return (void*)GetNtHdrs()->OptionalHeader.ImageBase;
}

template<typename NtHdrType> void PeArch<NtHdrType>::SetImageBase(const void* pNewImageBase) {
	GetNtHdrs()->OptionalHeader.ImageBase = (decltype(GetNtHdrs()->OptionalHeader.ImageBase))pNewImageBase;
}

template<typename NtHdrType> bool PeArch<NtHdrType>::GetDataDir(int8_t nIndex, uint32_t& rdwRva, uint32_t& rdwSize) {
	if (GetNtHdrs()->OptionalHeader.DataDirectory[nIndex].VirtualAddress) {
		rdwRva = GetNtHdrs()->OptionalHeader.DataDirectory[nIndex].VirtualAddress;
		rdwSize = GetNtHdrs()->OptionalHeader.DataDirectory[nIndex].Size;
		return true;
	}
	return false;
}

template<typename NtHdrType> void PeArch<NtHdrType>::SetDataDir(int8_t nIndex, uint32_t dwRva, uint32_t dwSize) {
	GetNtHdrs()->OptionalHeader.DataDirectory[nIndex].VirtualAddress = dwRva;
	GetNtHdrs()->OptionalHeader.DataDirectory[nIndex].Size = dwSize;
}

template<typename NtHdrType> void  PeArch<NtHdrType>::SetCrc32(uint32_t dwCrc32) {
	GetNtHdrs()->OptionalHeader.CheckSum = dwCrc32;
}

template<typename NtHdrType> uint32_t PeArch<NtHdrType>::RefreshCrc32() {
	uint32_t dwOriginalCRC32 = 0, dwNewCRC32 = 0;

	if (CheckSumMappedFile(this->Data.get(), this->Size, reinterpret_cast<PDWORD>(&dwOriginalCRC32), reinterpret_cast<PDWORD>(&dwNewCRC32))) {
		GetNtHdrs()->OptionalHeader.CheckSum = dwNewCRC32;
	}
	else {
		GetNtHdrs()->OptionalHeader.CheckSum = 0;
	}

	return dwNewCRC32;
}

template<typename NtHdrType> uint32_t PeArch<NtHdrType>::GetSubsystem() {
	return GetNtHdrs()->OptionalHeader.Subsystem;
}

template<typename NtHdrType> void PeArch<NtHdrType>::SetSubsystem(uint32_t dwSubsystem) {
	GetNtHdrs()->OptionalHeader.Subsystem = dwSubsystem;
}

template<typename NtHdrType> uint16_t PeArch<NtHdrType>::GetDllCharacteristics() {
	return GetNtHdrs()->OptionalHeader.DllCharacteristics;
}

template<typename NtHdrType> void PeArch<NtHdrType>::SetDllCharacteristics(uint16_t wDllCharacteristics) {
	GetNtHdrs()->OptionalHeader.DllCharacteristics = wDllCharacteristics;
}

template<typename NtHdrType> uint32_t PeArch<NtHdrType>::GetImageSize() {
	return GetNtHdrs()->OptionalHeader.SizeOfImage;
}

template<typename NtHdrType> uint8_t* PeArch<NtHdrType>::GetEntryPoint() {
	return reinterpret_cast<uint8_t *>(GetNtHdrs()->OptionalHeader.AddressOfEntryPoint);
}

template<typename NtHdrType> bool PeArch<NtHdrType>::IsDotNet() {
	uint32_t dwRva, dwSize;
	return GetDataDir(IMAGE_DIRECTORY_ENTRY_COM_DESCRIPTOR, dwRva, dwSize);
}

PeArch32::PeArch32(const uint8_t* pPeBuf, uint32_t dwPeFileSize) : PeArch<IMAGE_NT_HEADERS32>(pPeBuf, dwPeFileSize) {}
PeArch64::PeArch64(const uint8_t* pPeBuf, uint32_t dwPeFileSize) : PeArch<IMAGE_NT_HEADERS64>(pPeBuf, dwPeFileSize) {}

template<typename NtHdrType> IMAGE_SECTION_HEADER* PeArch<NtHdrType>::GetContainerSectHdr(uint64_t qwRVA) {
	for (uint32_t dwX = 0; dwX < this->GetNtHdrs()->FileHeader.NumberOfSections; dwX++) {
		IMAGE_SECTION_HEADER* pCurrentSectHdr = (this->SectHdrs + dwX);
		uint32_t dwCurrentSectSize;

		if (pCurrentSectHdr->Misc.VirtualSize > pCurrentSectHdr->SizeOfRawData) {
			dwCurrentSectSize = pCurrentSectHdr->Misc.VirtualSize;
		}
		else {
			dwCurrentSectSize = pCurrentSectHdr->SizeOfRawData;
		}

		if ((qwRVA >= pCurrentSectHdr->VirtualAddress) && (qwRVA <= (pCurrentSectHdr->VirtualAddress + dwCurrentSectSize))) {
			return pCurrentSectHdr;
		}
	}

	return nullptr;
}

template<typename NtHdrType> void* PeArch<NtHdrType>::GetPAFromRVA(uint64_t qwRVA) {
	assert(this->FullPeLoaded);
	IMAGE_SECTION_HEADER* pContainSectHdr;

	if ((pContainSectHdr = GetContainerSectHdr(qwRVA)) != nullptr) {
		uint32_t dwOffset = (qwRVA - pContainSectHdr->VirtualAddress);

		if (dwOffset < pContainSectHdr->SizeOfRawData) { // Sections can be partially or fully virtual. Avoid creating physical pointers that reference regions outside of the raw data in sections with a greater virtual size than physical.
			return (this->Data.get() + pContainSectHdr->PointerToRawData + dwOffset);
		}
	}

	return nullptr;
}

/*
bool CheckRelocRange(uint8_t* pRelocBuf, uint32_t dwRelocBufSize, uint32_t dwStartRVA, uint32_t dwEndRVA) {
	IMAGE_BASE_RELOCATION* pCurrentRelocBlock;
	uint32_t dwRelocBufOffset, dwX;
	bool bWithinRange = false;

	for (pCurrentRelocBlock = (IMAGE_BASE_RELOCATION*)pRelocBuf, dwX = 0, dwRelocBufOffset = 0; pCurrentRelocBlock->SizeOfBlock; dwX++) {
		uint32_t dwNumBlocks = ((pCurrentRelocBlock->SizeOfBlock - sizeof(IMAGE_BASE_RELOCATION)) / sizeof(uint16_t));
		uint16_t* pwCurrentRelocEntry = (uint16_t*)((uint8_t*)pCurrentRelocBlock + sizeof(IMAGE_BASE_RELOCATION));

		for (uint32_t dwY = 0; dwY < dwNumBlocks; dwY++, pwCurrentRelocEntry++) {
#ifdef _WIN64
#define RELOC_FLAG_ARCH_AGNOSTIC IMAGE_REL_BASED_DIR64
#else
#define RELOC_FLAG_ARCH_AGNOSTIC IMAGE_REL_BASED_HIGHLOW
#endif
			if (((*pwCurrentRelocEntry >> 12) & RELOC_FLAG_ARCH_AGNOSTIC) == RELOC_FLAG_ARCH_AGNOSTIC) {
				uint32_t dwRelocEntryRefLocRva = (pCurrentRelocBlock->VirtualAddress + (*pwCurrentRelocEntry & 0x0FFF));

				if (dwRelocEntryRefLocRva >= dwStartRVA && dwRelocEntryRefLocRva < dwEndRVA) {
					bWithinRange = true;
				}
			}
		}

		dwRelocBufOffset += pCurrentRelocBlock->SizeOfBlock;
		pCurrentRelocBlock = (IMAGE_BASE_RELOCATION*)((uint8_t*)pCurrentRelocBlock + pCurrentRelocBlock->SizeOfBlock);
	}

	return bWithinRange;
}

int32_t GetCodeSection(IMAGE_NT_HEADERS* pNtHdrs, IMAGE_SECTION_HEADER* pSectHdrs, uint32_t dwMinSize) {
	for (int32_t nX = 0; nX < pNtHdrs->FileHeader.NumberOfSections; nX++) {
		if (((pSectHdrs + nX)->Characteristics & IMAGE_SCN_MEM_EXECUTE)) {
			if (dwMinSize) {
				uint32_t dwSectionSize = (pSectHdrs + nX)->SizeOfRawData == 0 ? (pSectHdrs + nX)->Misc.VirtualSize : (pSectHdrs + nX)->SizeOfRawData;

				if (dwSectionSize >= dwMinSize) {
					return nX;
				}
			}
			else {
				return nX;
			}
		}
	}

	return -1;
}*/