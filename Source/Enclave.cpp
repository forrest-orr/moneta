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

// ---- PE IMAGE_ENCLAVE_CONFIG enrichment (used when a backing image file is available) ----

static uint32_t RvaToFileOffset(::PeFile* Pe, uint32_t dwRva) {
	IMAGE_SECTION_HEADER* Sect = Pe->GetSectHdrs();
	uint16_t wSectCount = Pe->GetFileHdr()->NumberOfSections;

	if (wSectCount == 0 || Sect == nullptr) {
		return 0;
	}

	if (dwRva < Sect[0].VirtualAddress) {
		return dwRva; // headers: RVA == offset
	}

	for (uint16_t wX = 0; wX < wSectCount; wX++) {
		uint32_t dwSectVa = Sect[wX].VirtualAddress;
		uint32_t dwSectSize = (Sect[wX].Misc.VirtualSize ? Sect[wX].Misc.VirtualSize : Sect[wX].SizeOfRawData);
		if (dwRva >= dwSectVa && dwRva < dwSectVa + dwSectSize) {
			return Sect[wX].PointerToRawData + (dwRva - dwSectVa);
		}
	}

	return 0;
}

static uint32_t GetEnclaveConfigRva(::PeFile* Pe) {
	uint32_t dwCfgRva = 0, dwCfgSize = 0;

	if (!Pe->GetDataDir(IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG, &dwCfgRva, &dwCfgSize) || dwCfgRva == 0 || dwCfgSize == 0) {
		return 0;
	}

	uint32_t dwCfgOffset = RvaToFileOffset(Pe, dwCfgRva);
	uint8_t* pData = Pe->GetData();
	uint32_t dwFileSize = Pe->GetSize();

	if (dwCfgOffset == 0 || pData == nullptr || dwCfgOffset + sizeof(uint32_t) > dwFileSize) {
		return 0;
	}

	uint32_t dwLoadCfgSize = *reinterpret_cast<uint32_t*>(pData + dwCfgOffset);
	if (dwCfgSize < dwLoadCfgSize) {
		dwLoadCfgSize = dwCfgSize;
	}

	uint64_t qwEnclaveCfgVa = 0;
	uint64_t qwBase = reinterpret_cast<uint64_t>(Pe->GetImageBase());

	if (Pe->IsPe64()) {
		size_t cbFieldOff = offsetof(IMAGE_LOAD_CONFIG_DIRECTORY64, EnclaveConfigurationPointer);
		if (dwLoadCfgSize <= cbFieldOff || dwCfgOffset + cbFieldOff + sizeof(uint64_t) > dwFileSize) {
			return 0;
		}
		qwEnclaveCfgVa = *reinterpret_cast<uint64_t*>(pData + dwCfgOffset + cbFieldOff);
	}
	else {
		size_t cbFieldOff = offsetof(IMAGE_LOAD_CONFIG_DIRECTORY32, EnclaveConfigurationPointer);
		if (dwLoadCfgSize <= cbFieldOff || dwCfgOffset + cbFieldOff + sizeof(uint32_t) > dwFileSize) {
			return 0;
		}
		qwEnclaveCfgVa = *reinterpret_cast<uint32_t*>(pData + dwCfgOffset + cbFieldOff);
	}

	if (qwEnclaveCfgVa == 0 || qwEnclaveCfgVa < qwBase) {
		return 0;
	}

	return static_cast<uint32_t>(qwEnclaveCfgVa - qwBase);
}

bool Enclave::ImageHasEnclaveConfig(::PeFile* Pe) {
	return (Pe != nullptr && GetEnclaveConfigRva(Pe) != 0);
}

std::wstring EnclaveImageInfoIdToString(const UCHAR *pBuf) {
	const uint8_t* pTempBuf = reinterpret_cast<const uint8_t*>(pBuf);
	std::wstring IdString;
	wchar_t b[3];
	for (size_t i = 0; i < 32; i++) { swprintf_s(b, 3, L"%02x", pTempBuf[i]); IdString += b; }
	return IdString;
}

// Probe how accessible an enclave region is from VTL0: resolve its backing file, try to escalate
// protection over the whole image, and read it - whole-region if protection relaxes, else per
// readable subregion. hProcess needs PROCESS_VM_OPERATION | PROCESS_VM_READ | PROCESS_QUERY_INFORMATION.
void TestEnclave(HANDLE hProcess, void* pEnclave, uint32_t dwSizeOfImage) {
	static NtQueryVirtualMemory_t NtQueryVirtualMemory =
		reinterpret_cast<NtQueryVirtualMemory_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtQueryVirtualMemory"));

	// 1. Backing file name. Reads section metadata, not page contents, so it can succeed even when the pages are unreadable.
	wchar_t FilePath[MAX_PATH + 1] = { 0 };
	if (GetMappedFileNameW(hProcess, pEnclave, FilePath, MAX_PATH)) {
		wprintf(L"[TestEnclave] mapped file: %ws\n", FilePath);
	}
	else {
		wprintf(L"[TestEnclave] no mapped file (err %u) - MEM_PRIVATE enclave region\n", GetLastError());
	}

	// 2. Whole-image extent via MEMORY_IMAGE_INFORMATION; fall back to VirtualQueryEx for the MEM_PRIVATE case.
	SIZE_T RegionSize = 0;
	MEMORY_IMAGE_INFORMATION Mii = { 0 };
	if (NtQueryVirtualMemory &&
		NT_SUCCESS(NtQueryVirtualMemory(hProcess, pEnclave, MemoryImageInformation, &Mii, sizeof(Mii), nullptr)) &&
		Mii.SizeOfImage != 0) {
		RegionSize = Mii.SizeOfImage;
		wprintf(L"[TestEnclave] image size 0x%zx (partialMap=%u notExec=%u signingLevel=%u)\n",
			static_cast<size_t>(Mii.SizeOfImage), Mii.ImagePartialMap, Mii.ImageNotExecutable, Mii.ImageSigningLevel);
	}
	else {
		MEMORY_BASIC_INFORMATION Mbi = { 0 };
		if (VirtualQueryEx(hProcess, pEnclave, &Mbi, sizeof(Mbi)) == sizeof(Mbi)) {
			RegionSize = Mbi.RegionSize;
		}
		wprintf(L"[TestEnclave] MemoryImageInformation unavailable; VirtualQueryEx size 0x%zx\n", static_cast<size_t>(RegionSize));
	}

	RegionSize = dwSizeOfImage;

	// 3. Try to escalate protection over the WHOLE region: +R, then +RW, then +RWX.
	const struct { DWORD Prot; const wchar_t* Name; } Steps[] = {
		{ PAGE_READONLY, L"+R" },{ PAGE_READWRITE, L"+RW" },{ PAGE_EXECUTE_READWRITE, L"+RWX" }
	};

	DWORD FirstOldProt = 0;
	bool bHaveFirstOld = false;
	bool bWholeAccessible = false;

	for (int32_t i = 0; i < 3; i++) {
		DWORD OldProt = 0;
		if (VirtualProtectEx(hProcess, pEnclave, RegionSize, Steps[i].Prot, &OldProt)) {
			wprintf(L"[TestEnclave] VirtualProtectEx whole region %ws SUCCEEDED (old 0x%x)\n", Steps[i].Name, OldProt);
			if (!bHaveFirstOld) { FirstOldProt = OldProt; bHaveFirstOld = true; }
			bWholeAccessible = true;
		}
		else {
			wprintf(L"[TestEnclave] VirtualProtectEx whole region %ws FAILED (err %u)\n", Steps[i].Name, GetLastError());
		}
	}

	// 4. If the whole region was made accessible, read it all at once.
	if (bWholeAccessible) {
		std::vector<uint8_t> Buf(RegionSize);
		SIZE_T cbRead = 0;
		if (ReadProcessMemory(hProcess, pEnclave, Buf.data(), RegionSize, &cbRead)) {
			wprintf(L"[TestEnclave] ReadProcessMemory whole region OK: 0x%zx bytes\n", static_cast<size_t>(cbRead));
		}
		else {
			wprintf(L"[TestEnclave] ReadProcessMemory whole region FAILED (err %u, got 0x%zx)\n", GetLastError(), static_cast<size_t>(cbRead));
			bWholeAccessible = false; // fall through to per-subregion
		}
		// Best-effort restore so we don't leave the target's enclave VAD RWX.
		if (bHaveFirstOld) {
			DWORD Tmp = 0;
			VirtualProtectEx(hProcess, pEnclave, RegionSize, FirstOldProt, &Tmp);
		}
	}

	// 5. Otherwise walk the subregions and read only the committed, non-NOACCESS ones (the COMMIT/+RW pages),
	//    skipping the RESERVE / NOACCESS holes. Try a per-subregion +RW escalation first.
	if (!bWholeAccessible) {
		wprintf(L"[TestEnclave] per-subregion fallback\n");
		uint8_t* p = static_cast<uint8_t*>(pEnclave);
		uint8_t* pEnd = p + RegionSize;

		while (p < pEnd) {
			MEMORY_BASIC_INFORMATION Mbi = { 0 };
			if (VirtualQueryEx(hProcess, p, &Mbi, sizeof(Mbi)) != sizeof(Mbi)) {
				break;
			}

			bool bCommitted = (Mbi.State == MEM_COMMIT);
			bool bNoAccess = (Mbi.Protect == 0 || Mbi.Protect == PAGE_NOACCESS);

			if (bCommitted && !bNoAccess) {
				DWORD OldProt = 0;
				VirtualProtectEx(hProcess, Mbi.BaseAddress, Mbi.RegionSize, PAGE_READWRITE, &OldProt); // best effort
				std::vector<uint8_t> Buf(Mbi.RegionSize);
				SIZE_T cbRead = 0;
				if (ReadProcessMemory(hProcess, Mbi.BaseAddress, Buf.data(), Mbi.RegionSize, &cbRead)) {
					wprintf(L"[TestEnclave]   read 0x%zx @ 0x%p (prot 0x%x)\n", static_cast<size_t>(cbRead), Mbi.BaseAddress, Mbi.Protect);
				}
				else {
					wprintf(L"[TestEnclave]   read FAILED @ 0x%p (err %u)\n", Mbi.BaseAddress, GetLastError());
				}
				if (OldProt) {
					DWORD Tmp = 0;
					VirtualProtectEx(hProcess, Mbi.BaseAddress, Mbi.RegionSize, OldProt, &Tmp);
				}
			}
			else {
				wprintf(L"[TestEnclave]   skip @ 0x%p size 0x%zx (state 0x%x prot 0x%x)\n",
					Mbi.BaseAddress, static_cast<size_t>(Mbi.RegionSize), Mbi.State, Mbi.Protect);
			}

			p = static_cast<uint8_t*>(Mbi.BaseAddress) + Mbi.RegionSize;
		}
	}
}

Enclave::Enclave(Processes::Process& OwnerProc, vector<Subregion*> Subregions, ::PeFile* Pe, const wchar_t* ModPath)
	: Region(OwnerProc.GetHandle(), Subregions), ConfigValid(false), PolicyFlags(0), EnclaveFlags(0), NumberOfImports(0),
	  ImageVersion(0), SecurityVersion(0), NumberOfThreads(0), EnclaveSize(0) {
	memset(this->FamilyId, 0, sizeof(this->FamilyId));
	memset(this->ImageId, 0, sizeof(this->ImageId));
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
	NTSTATUS NtStatus = NtQueryVirtualMemory(OwnerProc.GetHandle(), (void*)0x0000021B8A000000, MemoryEnclaveImageInformation, &this->ImageInfo, sizeof(this->ImageInfo), nullptr);
	Interface::Log(Interface::VerbosityLevel::Surface, "... NtQueryVirtualMemory MemoryEnclaveImageInformation returned 0x%08x\r\n", NtStatus);
	//if (NtStatus != STATUS_INVALID_INFO_CLASS) {
		Interface::Log(Interface::VerbosityLevel::Surface, "... Enclave information for PID %d | Address 0x%p\r\n", OwnerProc.GetPid(), pMainEnclaveSubregion->GetBasic()->BaseAddress);
		wstring AuthorID = EnclaveImageInfoIdToString(this->ImageInfo.AuthorID);
		wstring UniqueID = EnclaveImageInfoIdToString(this->ImageInfo.UniqueID);
		Interface::Log(Interface::VerbosityLevel::Surface, "    AuthorID %ws | UniqueID %ws | SizeOfImage 0x%zx | ImageBase: 0x%p | Flags 0x%x | ImagePartialMap %d | ImageNotExecutable %d | ImageSigningLevel %u\r\n",
			AuthorID.c_str(), UniqueID.c_str(), this->ImageInfo.ImageInfo.SizeOfImage, this->ImageInfo.ImageInfo.ImageBase, this->ImageInfo.ImageInfo.ImageFlags, this->ImageInfo.ImageInfo.ImagePartialMap, this->ImageInfo.ImageInfo.ImageNotExecutable, this->ImageInfo.ImageInfo.ImageSigningLevel);
		//this->ImageInfo.ImageInfo.ImageFlags = this->ImageInfo.ImageInfo.ImageFlags & ~IMAGE_ENCLAVE_FLAG_PRIMARY_IMAGE; // Clear the primary image flag, which is not relevant to the IOC.	
	//}
	
	//TestEnclave(OwnerProc.GetHandle(), pMainEnclaveSubregion->GetBasic()->AllocationBase, this->ImageInfo.ImageInfo.SizeOfImage);
	TestEnclave(OwnerProc.GetHandle(), pFirstSubregion->GetBasic()->BaseAddress, pFirstSubregion->GetBasic()->RegionSize);
	system("pause");
	// Optional enrichment from the enclave module's PE (debuggable case / backing file available).
	uint32_t dwEncRva = (Pe ? GetEnclaveConfigRva(Pe) : 0);

	if (dwEncRva != 0) {
		uint32_t dwEncOffset = RvaToFileOffset(Pe, dwEncRva);
		uint8_t* pData = Pe->GetData();
		uint32_t dwFileSize = Pe->GetSize();

		if (dwEncOffset != 0 && pData != nullptr && dwEncOffset + sizeof(IMAGE_ENCLAVE_CONFIG64) <= dwFileSize) {
			if (Pe->IsPe64()) {
				IMAGE_ENCLAVE_CONFIG64* Cfg = reinterpret_cast<IMAGE_ENCLAVE_CONFIG64*>(pData + dwEncOffset);
				this->PolicyFlags = Cfg->PolicyFlags;
				this->NumberOfImports = Cfg->NumberOfImports;
				this->ImageVersion = Cfg->ImageVersion;
				this->SecurityVersion = Cfg->SecurityVersion;
				this->EnclaveSize = Cfg->EnclaveSize;
				this->NumberOfThreads = Cfg->NumberOfThreads;
				this->EnclaveFlags = Cfg->EnclaveFlags;
				memcpy(this->FamilyId, Cfg->FamilyID, sizeof(this->FamilyId));
				memcpy(this->ImageId, Cfg->ImageID, sizeof(this->ImageId));
				this->ConfigValid = true;
			}
			else {
				IMAGE_ENCLAVE_CONFIG32* Cfg = reinterpret_cast<IMAGE_ENCLAVE_CONFIG32*>(pData + dwEncOffset);
				this->PolicyFlags = Cfg->PolicyFlags;
				this->NumberOfImports = Cfg->NumberOfImports;
				this->ImageVersion = Cfg->ImageVersion;
				this->SecurityVersion = Cfg->SecurityVersion;
				this->EnclaveSize = Cfg->EnclaveSize;
				this->NumberOfThreads = Cfg->NumberOfThreads;
				this->EnclaveFlags = Cfg->EnclaveFlags;
				memcpy(this->FamilyId, Cfg->FamilyID, sizeof(this->FamilyId));
				memcpy(this->ImageId, Cfg->ImageID, sizeof(this->ImageId));
				this->ConfigValid = true;
			}
		}
	}
}
