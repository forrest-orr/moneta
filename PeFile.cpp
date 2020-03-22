#include "StdAfx.h"
#include "PeFile.hpp"

#pragma comment (lib, "Imagehlp.lib")

using namespace std;

PeFile::PeFile(
	uint8_t* pPeFileBuf,
	uint32_t dwPeFileSize) :
	Data(new uint8_t[dwPeFileSize]),
	Size(dwPeFileSize)
{
	memcpy(this->Data, pPeFileBuf, dwPeFileSize);
	this->DosHdr = (IMAGE_DOS_HEADER*)this->Data;
	this->FileHdr = (IMAGE_FILE_HEADER*)((uint8_t*)this->DosHdr + this->DosHdr->e_lfanew + sizeof(LONG));
}

PeFile::~PeFile() {
	delete this->Data;
}

PeFile* PeFile::Load(uint8_t* pPeFileBuf, uint32_t dwPeFileSize) { // Factory method for derived 32/64-bit classes
	assert(pPeFileBuf != nullptr);
	assert(dwPeFileSize);

	PeFile* NewPe = nullptr;

	if (*(uint16_t*)&pPeFileBuf[0] == 'ZM') {
		PIMAGE_DOS_HEADER pDosHdr = (PIMAGE_DOS_HEADER)pPeFileBuf;
		IMAGE_FILE_HEADER* pFileHdr = (IMAGE_FILE_HEADER*)(pPeFileBuf + pDosHdr->e_lfanew + sizeof(LONG));

		if (pFileHdr->Machine == IMAGE_FILE_MACHINE_I386) {
			NewPe = new PeArch32(pPeFileBuf, dwPeFileSize);
		}
		else if (pFileHdr->Machine == IMAGE_FILE_MACHINE_AMD64) {
			NewPe = new PeArch64(pPeFileBuf, dwPeFileSize);
		}

		if (NewPe != nullptr) {
			if (NewPe->Validate()) { // Validate method is needed to call template-specific derived methods not present in the base class, such as GetNtHdrs (which in turn also cannot be called from the constructor since it relies on virtual methods which will not exist until the class is initialized post-constructor)
				//Interface::Log("[+] Successfully initialized/validated %s PE derived class.\r\n", NewPe->GetPeArch() == IMAGE_FILE_MACHINE_I386 ? "32-bit" : "64-bit");
			}
			else {
				//Interface::Log("[-] Failed to initialize/validate %s derived PE class.\r\n", NewPe->GetPeArch() == IMAGE_FILE_MACHINE_I386 ? "32-bit" : "64-bit");
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

	// Obtain the size of the region from where the DOS header begins and where the optional/section headers end

	if ((hFile = CreateFileW(PeFilePath.c_str(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL)) != INVALID_HANDLE_VALUE) {
		uint32_t dwBytesRead;
		IMAGE_DOS_HEADER DosHdr = { 0 };
		if (ReadFile(hFile, &DosHdr, sizeof(DosHdr), (PDWORD)&dwBytesRead, 0)) {
			SetFilePointer(hFile, DosHdr.e_lfanew + 4, nullptr, FILE_BEGIN);
			IMAGE_FILE_HEADER FileHdr;
			if (ReadFile(hFile, &FileHdr, sizeof(FileHdr), (PDWORD)&dwBytesRead, 0)) {
				uint32_t dwHdrSize = 0;
				if (FileHdr.Machine == IMAGE_FILE_MACHINE_I386) {
					IMAGE_OPTIONAL_HEADER32 OptHdr;
					if (ReadFile(hFile, &OptHdr, sizeof(OptHdr), (PDWORD)&dwBytesRead, 0)) {
						dwHdrSize = OptHdr.SizeOfHeaders;
					}
				}
				else if (FileHdr.Machine == IMAGE_FILE_MACHINE_AMD64) {
					IMAGE_OPTIONAL_HEADER64 OptHdr;
					if (ReadFile(hFile, &OptHdr, sizeof(OptHdr), (PDWORD)&dwBytesRead, 0)) {
						dwHdrSize = OptHdr.SizeOfHeaders;
					}
				}

				if (dwHdrSize) {
					uint8_t* HdrData = new uint8_t[dwHdrSize];
					SetFilePointer(hFile, 0, nullptr, FILE_BEGIN);

					if (ReadFile(hFile, HdrData, dwHdrSize, (PDWORD)&dwBytesRead, 0)) {
						NewPe = PeFile::Load(HdrData, dwHdrSize);
					}
				}
			}
		}

		CloseHandle(hFile);
	}

	return NewPe;
}

//
// Primary derived architecture class
//

template<typename NtHdrType> PeArch<NtHdrType>::PeArch(uint8_t* pPeFileBuf, uint32_t dwPeFileSize) : PeFile(pPeFileBuf, dwPeFileSize) {}

template<typename NtHdrType> NtHdrType* PeArch<NtHdrType>::GetNtHdrs() {
	assert(this->DosHdr != nullptr);
	NtHdrType* pNtHdr = (NtHdrType*)((uint8_t*)this->DosHdr + this->DosHdr->e_lfanew);

	if (pNtHdr->Signature == 'EP') {
		if (pNtHdr->FileHeader.Machine == GetPeArch()) {
			if (pNtHdr->OptionalHeader.Magic == GetPeMagic()) {
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

template<typename NtHdrType> void* PeArch<NtHdrType>::GetImageBase() {// Had to add the entire Address_T type to the entire class and have it inherotted ny othet set of class methods
	return (void*)GetNtHdrs()->OptionalHeader.ImageBase;
}

template<typename NtHdrType> void PeArch<NtHdrType>::SetImageBase(void* pNewImageBase) {
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

	if (CheckSumMappedFile(this->Data, this->Size, (PDWORD)&dwOriginalCRC32, (PDWORD)&dwNewCRC32)) {
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

//
// Derived 32-bit
//

PeArch32::PeArch32(uint8_t* pPeFileBuf, uint32_t dwPeFileSize) :
	PeArch<IMAGE_NT_HEADERS32>(pPeFileBuf, dwPeFileSize)
{}

//
// Derived 64-bit
//

PeArch64::PeArch64(uint8_t* pPeFileBuf, uint32_t dwPeFileSize) :
	PeArch<IMAGE_NT_HEADERS64>(pPeFileBuf, dwPeFileSize) {}
