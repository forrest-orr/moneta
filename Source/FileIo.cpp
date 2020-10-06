/*
____________________________________________________________________________________________________
| _______  _____  __   _ _______ _______ _______                                                   |
| |  |  | |     | | \  | |______    |    |_____|                                                   |
| |  |  | |_____| |  \_| |______    |    |     |                                                   |
|__________________________________________________________________________________________________|
| Moneta ~ Usermode memory scanner & malware hunter                                                |
|--------------------------------------------------------------------------------------------------|
| https://www.forrest-orr.net/post/masking-malicious-memory-artifacts-part-ii-insights-from-moneta |
|--------------------------------------------------------------------------------------------------|
| Author: Forrest Orr - 2020                                                                       |
|--------------------------------------------------------------------------------------------------|
| Contact: forrest.orr@protonmail.com                                                              |
|--------------------------------------------------------------------------------------------------|
| Licensed under GNU GPLv3                                                                         |
|__________________________________________________________________________________________________|
| ## Features                                                                                      |
|                                                                                                  |
| ~ Query the memory attributes of any accessible process(es).                                     |
| ~ Identify private, mapped and image memory.                                                     |
| ~ Correlate regions of memory to their underlying file on disks.                                 |
| ~ Identify PE headers and sections corresponding to image memory.                                |
| ~ Identify modified regions of mapped image memory.                                              |
| ~ Identify abnormal memory attributes indicative of malware.                                     |
| ~ Create memory dumps of user-specified memory ranges                                            |
| ~ Calculate memory permission/type statistics                                                    |
|__________________________________________________________________________________________________|

*/

#include "stdafx.h"
#include "FileIo.hpp"

using namespace std;

FileBase::FileBase(wstring DesiredPath, const uint8_t* DataBuf, uint32_t dwSize) : Path(DesiredPath), FileData(new uint8_t[dwSize]), FileSize(dwSize) {
	assert(DataBuf != nullptr);
	memcpy(this->FileData, DataBuf, dwSize);
}

bool FileBase::ToDisk (bool bAppend) const {
	assert(this->FileData != nullptr);

	HANDLE hFile;
	bool bWritten = false;

	if ((hFile = CreateFileW(this->Path.c_str(), bAppend ? FILE_APPEND_DATA : GENERIC_WRITE, bAppend ? FILE_SHARE_READ : 0, NULL, bAppend ? OPEN_ALWAYS : CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL)) != INVALID_HANDLE_VALUE) {
		uint32_t dwBytesWritten;
		if (WriteFile(hFile, this->GetData(), this->GetSize(), reinterpret_cast<PDWORD>(&dwBytesWritten), 0)) {
			bWritten = true;
		}

		CloseHandle(hFile);
	}

	return bWritten;
}

FileBase::FileBase(wstring TargetPath, bool bMemStore, bool bForceOpen) : Path(TargetPath), Phantom(false) {
	HANDLE hFile;

	if ((hFile = CreateFileW(this->Path.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL)) != INVALID_HANDLE_VALUE) {
		if (bMemStore) {
			this->FileSize = GetFileSize(hFile, NULL);
			unique_ptr<uint8_t[]> FileData = make_unique<uint8_t[]>(this->FileSize);
			uint32_t dwBytesRead;
			if (!ReadFile(hFile, this->FileData, this->FileSize, reinterpret_cast<PDWORD>(&dwBytesRead), 0)) throw 2;
			this->FileData = FileData.get();
			FileData.release();
		}

		CloseHandle(hFile);
	}
	else {
		this->Phantom = true;

		if (bForceOpen) {
			throw 1;
		}
		else {
			this->FileData = nullptr;
			this->FileSize = 0;
		}
	}
};

FileBase::~FileBase() {
	if (this->FileData != nullptr) {
		delete this->FileData;
	}
}

bool FileBase::TranslateDevicePath(const wchar_t* DevicePath, wchar_t* TranslatedPath) {
	wchar_t DriveLetters[MAX_PATH + 1] = { 0 };
	bool bTranslated = false;

	if (GetLogicalDriveStringsW(MAX_PATH + 1, DriveLetters)) {
		wchar_t DosPath[MAX_PATH + 1];
		wchar_t DrivePrefix[3] = L" :";
		wchar_t* p = DriveLetters;

		do {
			*DrivePrefix = *p;

			if (QueryDosDeviceW(DrivePrefix, DosPath, MAX_PATH + 1)) {
				if (_wcsnicmp(DevicePath, DosPath, wcslen(DosPath)) == 0) {
					wcscpy_s(TranslatedPath, MAX_PATH + 1, DrivePrefix);
					//wcscat_s(TranslatedPath, MAX_PATH + 1, L"\\");
					wcscat_s(TranslatedPath, MAX_PATH + 1, DevicePath + wcslen(DosPath));
					bTranslated = true;
				}
			}

			p += (wcslen(p) + 1);
		} while (!bTranslated && *p);
	}

	return bTranslated;
}

bool FileBase::ArchWow64PathExpand(const wchar_t* TargetFilePath, wchar_t* OutputPath, size_t ccOutputPathLength) {
	assert(TargetFilePath != nullptr);
	assert(OutputPath != nullptr);

	bool bExpandedPath = false;
	uint64_t qwPathLength, qwMaxEnvVarSize = 32767;
	unique_ptr<wchar_t[]> ProgFilePath64;
	unique_ptr<wchar_t[]> ProgFilePathWow64;
	wchar_t SystemDirectory[MAX_PATH + 1] = { 0 }, SysWow64Directory[MAX_PATH + 1] = { 0 }, ExpandedTargetPath[MAX_PATH + 1] = { 0 };
	SYSTEM_INFO SystemInfo = { 0 };

	// %programfiles%\example1\example.exe -> C:\Program Files (x86)\example1\example.exe
	// C:\Program Files (x86)\example2\example.exe -> C:\Program Files (x86)\example2\example.exe
	// C:\Program Files\example3\example.exe -> C:\Program Files (x86)\example3\example.exe
	// C:\Windows\system32\notepad.exe -> C:\Windows\syswow64\notepad.exe
	// C:\ProgramData\something.exe -> C:\ProgramData\something.exe

	if (ExpandEnvironmentStringsW(TargetFilePath, ExpandedTargetPath, MAX_PATH + 1)) {
		bExpandedPath = true;
		wcscpy_s(OutputPath, ccOutputPathLength, ExpandedTargetPath);

		GetNativeSystemInfo(&SystemInfo); // Native version of this call works on both Wow64 and x64 as opposed to just x64 for GetSystemInfo. Works on XP+

		if (SystemInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64) {
			// Resolve the 32 and 64-bit versions of the most problematic paths (Program Files, System32)

			if ((qwPathLength = GetSystemWow64DirectoryW(SysWow64Directory, MAX_PATH + 1))) {
				if ((qwPathLength = GetSystemDirectoryW(SystemDirectory, MAX_PATH + 1))) {
					ProgFilePath64 = make_unique<wchar_t[]>(qwMaxEnvVarSize / sizeof(wchar_t)); // 32,767 is the maximum number of bytes an environment var can be, including the null terminator.

					if ((qwPathLength = GetEnvironmentVariableW(L"ProgramW6432", ProgFilePath64.get(), qwMaxEnvVarSize))) {
						ProgFilePathWow64 = make_unique<wchar_t[]>(qwMaxEnvVarSize / sizeof(wchar_t)); // 32,767 is the maximum number of bytes an environment var can be, including the null terminator.

						if ((qwPathLength = GetEnvironmentVariableW(L"ProgramFiles(x86)", ProgFilePathWow64.get(), qwMaxEnvVarSize))) {
							//
							// Is the target path within one of the two ambiguous architecture directories?
							//

							if (_wcsnicmp(ProgFilePathWow64.get(), ExpandedTargetPath, wcslen(ProgFilePathWow64.get())) == 0) {
								// The target path is already within the Wow64 program files path. Do nothing.
							}
							else if (_wcsnicmp(SysWow64Directory, ExpandedTargetPath, wcslen(SysWow64Directory)) == 0) {
								// The target path is already within the Wow64 system path. Do nothing.
							}
							else if (_wcsnicmp(SystemDirectory, ExpandedTargetPath, wcslen(SystemDirectory)) == 0) {
								wcscpy_s(OutputPath, ccOutputPathLength, SysWow64Directory);
								wcscat_s(OutputPath, ccOutputPathLength, ExpandedTargetPath + wcslen(SystemDirectory));
							}
							else if (_wcsnicmp(ProgFilePath64.get(), ExpandedTargetPath, wcslen(ProgFilePath64.get())) == 0) {
								wcscpy_s(OutputPath, ccOutputPathLength, ProgFilePathWow64.get());
								wcscat_s(OutputPath, ccOutputPathLength, ExpandedTargetPath + wcslen(ProgFilePath64.get()));
							}
						}
					}
				}
			}
		}
	}

	return bExpandedPath;
}