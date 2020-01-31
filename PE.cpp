#include "StdAfx.h"
#include "PE.hpp"

#pragma comment (lib, "Imagehlp.lib")

using namespace PeFile;

// PeBase

PeBase::PeBase(
	uint8_t* pPeFileBuf,
	uint32_t dwPeFileSize) :
	Base(new uint8_t[dwPeFileSize]),
	Size(dwPeFileSize)
{
	this->DosHdr = (IMAGE_DOS_HEADER*)this->Base;
	memcpy(this->Base, pPeFileBuf, dwPeFileSize);
}

PeBase* PeBase::Load(uint8_t* pPeFileBuf, uint32_t dwPeFileSize) // Factory method for derived 32/64-bit classes
{
	assert(pPeFileBuf != nullptr);
	assert(dwPeFileSize);

	PeBase* NewPe = nullptr;

	if (*(uint16_t*)&pPeFileBuf[0] == 'ZM')
	{
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
				//printf("[+] Successfully initialized/validated %s PE derived class.\r\n", NewPe->GetPeArch() == IMAGE_FILE_MACHINE_I386 ? "32-bit" : "64-bit");
			}
			else {
				//printf("[-] Failed to initialize/validate %s derived PE class.\r\n", NewPe->GetPeArch() == IMAGE_FILE_MACHINE_I386 ? "32-bit" : "64-bit");
				delete NewPe;
				NewPe = nullptr;
			}
		}
	}

	return NewPe;
}

uint8_t* PeBase::GetBase() {
	return this->Base;
}

uint32_t PeBase::GetSize() {
	return this->Size;
}

PIMAGE_DOS_HEADER PeBase::GetDosHdr() {
	return this->DosHdr;
}

//
// Primary derived architecture class
//

template<typename NtHdrType> PeArch<NtHdrType>::PeArch(
	uint8_t* pPeFileBuf,
	uint32_t dwPeFileSize) :
	PeBase(pPeFileBuf, dwPeFileSize)
{
}

template<typename NtHdrType> NtHdrType* PeArch<NtHdrType>::GetNtHdrs() {
	assert(this->DosHdr != nullptr);
	NtHdrType* pNtHdr = (NtHdrType*)((uint8_t*)this->DosHdr + this->DosHdr->e_lfanew);

	if (pNtHdr->Signature == 'EP') {
		if (pNtHdr->FileHeader.Machine == GetPeArch()) {
			if (pNtHdr->OptionalHeader.Magic == GetPeMagic()) {
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

	if (CheckSumMappedFile(this->Base, this->Size, (PDWORD)&dwOriginalCRC32, (PDWORD)&dwNewCRC32)) {
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

//
// Derived 32-bit
//

PeArch32::PeArch32(uint8_t* pPeFileBuf, uint32_t dwPeFileSize) :
	PeArch<IMAGE_NT_HEADERS32>(pPeFileBuf, dwPeFileSize)
{}

uint16_t PeArch32::GetPeMagic() {
	return IMAGE_NT_OPTIONAL_HDR32_MAGIC;
}

uint16_t PeArch32::GetPeArch() {
	return IMAGE_FILE_MACHINE_I386;
}

//
// Derived 64-bit
//

PeArch64::PeArch64(uint8_t* pPeFileBuf, uint32_t dwPeFileSize) :
	PeArch<IMAGE_NT_HEADERS64>(pPeFileBuf, dwPeFileSize)
{}

uint16_t PeArch64::GetPeMagic() {
	return IMAGE_NT_OPTIONAL_HDR64_MAGIC;
}

uint16_t PeArch64::GetPeArch() {
	return IMAGE_FILE_MACHINE_AMD64;
}