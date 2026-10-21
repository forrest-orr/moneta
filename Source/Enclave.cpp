/*
____________________________________________________________________________________________________
| Moneta ~ Usermode memory scanner & malware hunter : VBS enclave support                          |
|--------------------------------------------------------------------------------------------------|
| From VTL0 a VBS enclave is the CreateEnclave reservation: a MEM_PRIVATE allocation whose          |
| subregions mirror the enclave module's PE sections, with state alternating MEM_COMMIT/MEM_RESERVE |
| and protection alternating PAGE_READWRITE/PAGE_NOACCESS. It is NOT reported as image memory and   |
| its State cannot be used as a detection filter. The reliable signal is the SoftwareEnclave flag   |
| of MemoryRegionInformationEx (class 7). MemoryEnclaveImageInformation (class 9) is preferred when  |
| available, but returns STATUS_INVALID_INFO_CLASS on current builds, so ValidateSupport() gates it. |
| The enclave is one entity: only the entity raises an IOC; its subregions are benign.              |
|__________________________________________________________________________________________________|
*/

#include "StdAfx.h"
#include "FileIo.hpp"
#include "PeFile.hpp"
#include "Processes.hpp"
#include "Memory.hpp"
#include "Interface.hpp"

using namespace std;
using namespace Memory;

bool Enclave::EnclaveImageInfoSupported = false;

static NtQueryVirtualMemory_t GetNtQvm() {
	static NtQueryVirtualMemory_t NtQueryVirtualMemory = reinterpret_cast<NtQueryVirtualMemory_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtQueryVirtualMemory"));
	return NtQueryVirtualMemory;
}

bool Enclave::ValidateSupport() {
	NtQueryVirtualMemory_t NtQueryVirtualMemory = GetNtQvm();
	Enclave::EnclaveImageInfoSupported = false;

	if (NtQueryVirtualMemory != nullptr) {
		// Probe class 9 against this process's own image base (a valid committed address). STATUS_INVALID_INFO_CLASS means the
		// class is not implemented on this build. Any other result (success, or an address-specific error) means it is usable.
		MEMORY_ENCLAVE_IMAGE_INFORMATION Meii = { 0 };
		NTSTATUS NtStatus = NtQueryVirtualMemory(GetCurrentProcess(), GetModuleHandleW(nullptr), MemoryEnclaveImageInformation, &Meii, sizeof(Meii), nullptr);
		Enclave::EnclaveImageInfoSupported = (NtStatus != STATUS_INVALID_INFO_CLASS);

		Interface::Log(Interface::VerbosityLevel::Debug, "... MemoryEnclaveImageInformation support probe: status 0x%08x -> %ws\r\n",
			NtStatus, Enclave::EnclaveImageInfoSupported ? L"supported" : L"NOT implemented (will use MemoryRegionInformationEx SoftwareEnclave)");
	}

	return Enclave::EnclaveImageInfoSupported;
}

bool Enclave::IsEnclaveRegion(HANDLE hProcess, const MEMORY_BASIC_INFORMATION* Mbi) {
	// No State filter: enclave subregions appear as both MEM_COMMIT and MEM_RESERVE. Only MEM_FREE is excluded.
	if (Mbi->State == MEM_FREE) {
		return false;
	}

	NtQueryVirtualMemory_t NtQueryVirtualMemory = GetNtQvm();
	if (NtQueryVirtualMemory == nullptr) {
		return false;
	}

	// Preferred signal when implemented: class 9 succeeds for addresses within an enclave image.
	if (Enclave::EnclaveImageInfoSupported) {
		MEMORY_ENCLAVE_IMAGE_INFORMATION Meii = { 0 };
		NTSTATUS NtStatus = NtQueryVirtualMemory(hProcess, Mbi->BaseAddress, MemoryEnclaveImageInformation, &Meii, sizeof(Meii), nullptr);
		if (NT_SUCCESS(NtStatus)) {
			return true;
		}
	}

	// General signal: SoftwareEnclave flag from MemoryRegionInformationEx (class 7).
	MEMORY_REGION_INFORMATION Mri = { 0 };
	NTSTATUS NtStatus = NtQueryVirtualMemory(hProcess, Mbi->BaseAddress, MemoryRegionInformationEx, &Mri, sizeof(Mri), nullptr);

	if (NT_SUCCESS(NtStatus) && Mri.SoftwareEnclave) {
		Interface::Log(Interface::VerbosityLevel::Debug, "... enclave region at 0x%p (allocbase 0x%p, RegionType 0x%08x)\r\n", Mbi->BaseAddress, Mri.AllocationBase, Mri.RegionType);
		return true;
	}

	return false;
}

std::wstring EnclaveImageInfoIdToString(const UCHAR *pBuf) {
	const uint8_t* pTempBuf = reinterpret_cast<const uint8_t*>(pBuf);
	std::wstring IdString;
	wchar_t b[3];
	for (size_t i = 0; i < 32; i++) { swprintf_s(b, 3, L"%02x", pTempBuf[i]); IdString += b; }
	return IdString;
}

Enclave::Enclave(Processes::Process& OwnerProc, vector<Subregion*> Subregions, ::PeFile* Pe, const wchar_t* ModPath)
	: Region(OwnerProc.GetHandle(), Subregions), ConfigValid(false), PolicyFlags(0), EnclaveFlags(0), NumberOfImports(0),
	  ImageVersion(0), SecurityVersion(0), NumberOfThreads(0), EnclaveSize(0) {
	ZeroMemory(this->FamilyId, sizeof(this->FamilyId));
	ZeroMemory(this->ImageId, sizeof(this->ImageId));
	ZeroMemory(&this->ImageInfo, sizeof(this->ImageInfo));

	Subregion* pMainEnclaveSubregion = Subregions.front();
	Subregion* pFirstSubregion = (Subregions.size() > 1 ? Subregions[1] : nullptr);

	if (ModPath != nullptr) {
		this->ModulePath = ModPath;
	}

	Interface::Log(Interface::VerbosityLevel::Debug, "... creating enclave entity at alloc base 0x%p/base 0x%p within %ws (PID %d)\r\n", Subregions.front()->GetBasic()->AllocationBase, pMainEnclaveSubregion->GetBasic()->BaseAddress, OwnerProc.GetName().c_str(), OwnerProc.GetPid());

	////////////////////////////////////////////////////////////
	// Query the underlying enclave image information.

	NtQueryVirtualMemory_t NtQueryVirtualMemory = GetNtQvm();
	NTSTATUS NtStatus = NtQueryVirtualMemory(OwnerProc.GetHandle(), pMainEnclaveSubregion->GetBasic()->AllocationBase, MemoryEnclaveImageInformation, &this->ImageInfo, sizeof(this->ImageInfo), nullptr);
	Interface::Log(Interface::VerbosityLevel::Surface, "... NtQueryVirtualMemory MemoryEnclaveImageInformation returned 0x%08x\r\n", NtStatus);

	if (NtStatus != STATUS_INVALID_INFO_CLASS) {
		Interface::Log(Interface::VerbosityLevel::Surface, "... Enclave information for PID %d | Address 0x%p\r\n", OwnerProc.GetPid(), pMainEnclaveSubregion->GetBasic()->BaseAddress);
		wstring AuthorID = EnclaveImageInfoIdToString(this->ImageInfo.AuthorID);
		wstring UniqueID = EnclaveImageInfoIdToString(this->ImageInfo.UniqueID);
		Interface::Log(Interface::VerbosityLevel::Surface, "    AuthorID %ws | UniqueID %ws | SizeOfImage 0x%zx | ImageBase: 0x%p | Flags 0x%x | ImagePartialMap %d | ImageNotExecutable %d | ImageSigningLevel %u\r\n",
			AuthorID.c_str(), UniqueID.c_str(), this->ImageInfo.ImageInfo.SizeOfImage, this->ImageInfo.ImageInfo.ImageBase, this->ImageInfo.ImageInfo.ImageFlags, this->ImageInfo.ImageInfo.ImagePartialMap, this->ImageInfo.ImageInfo.ImageNotExecutable, this->ImageInfo.ImageInfo.ImageSigningLevel);
	}
}
