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
#include "PeFile.hpp"

#pragma comment (lib, "Imagehlp.lib")

using namespace std;

PeFile::PeFile(const uint8_t* pPeBuf, uint32_t dwPeFileSize) : Data(new uint8_t[dwPeFileSize]), Size(dwPeFileSize) {
	assert(pPeBuf != nullptr);
	assert(dwPeFileSize);

	memcpy(this->Data, pPeBuf, dwPeFileSize);
	this->DosHdr = reinterpret_cast<IMAGE_DOS_HEADER*>(this->Data);
	this->FileHdr = reinterpret_cast<IMAGE_FILE_HEADER*>((reinterpret_cast<uint8_t *>(this->DosHdr) + this->DosHdr->e_lfanew + sizeof(LONG)));
}

PeFile::~PeFile() {
	delete this->Data;
}

PeFile* PeFile::Load(const uint8_t* pPeBuf, uint32_t dwPeFileSize) {
	assert(pPeBuf != nullptr);
	assert(dwPeFileSize);

	PeFile* NewPe = nullptr;

	if (*(uint16_t*)&pPeBuf[0] == 'ZM') {
		PIMAGE_DOS_HEADER pDosHdr = reinterpret_cast<IMAGE_DOS_HEADER*>(const_cast<uint8_t *>(pPeBuf));
		IMAGE_FILE_HEADER* pFileHdr = reinterpret_cast<IMAGE_FILE_HEADER*>((const_cast<uint8_t *>(pPeBuf) + pDosHdr->e_lfanew + sizeof(LONG)));

		if (pFileHdr->Machine == IMAGE_FILE_MACHINE_I386) {
			NewPe = new PeArch32(pPeBuf, dwPeFileSize);
		}
		else if (pFileHdr->Machine == IMAGE_FILE_MACHINE_AMD64) {
			NewPe = new PeArch64(pPeBuf, dwPeFileSize);
		}

		if (NewPe != nullptr) {
			if (!NewPe->Validate()) { // Validate method is needed to call template-specific derived methods not present in the base class, such as GetNtHdrs (which in turn also cannot be called from the constructor since it relies on virtual methods which will not exist until the class is initialized post-constructor)
				delete NewPe;
				NewPe = nullptr;
			}
		}
	}

	return NewPe;
}

PeFile* PeFile::Load(const wstring PeFilePath) {
	HANDLE hFile;
	PeFile* NewPe = nullptr;

	if ((hFile = CreateFileW(PeFilePath.c_str(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL)) != INVALID_HANDLE_VALUE) {
		uint32_t dwBytesRead;
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
					uint8_t* HdrData = new uint8_t[dwHdrSize];

					SetFilePointer(hFile, 0, nullptr, FILE_BEGIN);

					if (ReadFile(hFile, HdrData, dwHdrSize, reinterpret_cast<PDWORD>(&dwBytesRead), 0)) {
						NewPe = PeFile::Load(HdrData, dwHdrSize);
					}
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
	return GetNtHdrs();
}

template<typename NtHdrType> void* PeArch<NtHdrType>::GetImageBase() {
	return (void*)GetNtHdrs()->OptionalHeader.ImageBase;
}

template<typename NtHdrType> void PeArch<NtHdrType>::SetImageBase(const void* pNewImageBase) {
	GetNtHdrs()->OptionalHeader.ImageBase = (decltype(GetNtHdrs()->OptionalHeader.ImageBase))pNewImageBase;
}

template<typename NtHdrType> bool PeArch<NtHdrType>::GetDataDir(int8_t nIndex, uint32_t* pdwRva, uint32_t* pdwSize) {
	if (GetNtHdrs()->OptionalHeader.DataDirectory[nIndex].VirtualAddress) {
		if (pdwRva != nullptr) *pdwRva = GetNtHdrs()->OptionalHeader.DataDirectory[nIndex].VirtualAddress;
		if (pdwSize != nullptr) *pdwSize = GetNtHdrs()->OptionalHeader.DataDirectory[nIndex].Size;
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

	if (CheckSumMappedFile(this->Data, this->Size, reinterpret_cast<PDWORD>(&dwOriginalCRC32), reinterpret_cast<PDWORD>(&dwNewCRC32))) {
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
	return GetDataDir(IMAGE_DIRECTORY_ENTRY_COM_DESCRIPTOR, nullptr, nullptr);
}

PeArch32::PeArch32(const uint8_t* pPeBuf, uint32_t dwPeFileSize) : PeArch<IMAGE_NT_HEADERS32>(pPeBuf, dwPeFileSize) {}
PeArch64::PeArch64(const uint8_t* pPeBuf, uint32_t dwPeFileSize) : PeArch<IMAGE_NT_HEADERS64>(pPeBuf, dwPeFileSize) {}
