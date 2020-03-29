#include "stdafx.h"
#include "FileIo.hpp"

using namespace std;

FileBase::FileBase(wstring DesiredPath, const uint8_t* DataBuf, uint32_t dwSize) : Path(DesiredPath), FileData(new uint8_t[dwSize]), FileSize(dwSize) {
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
			uint32_t dwBytesRead;
			this->FileSize = GetFileSize(hFile, NULL);
			this->FileData = new uint8_t[this->FileSize];
			if (!ReadFile(hFile, this->FileData, this->FileSize, reinterpret_cast<PDWORD>(&dwBytesRead), 0)) throw 2;
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

			p++;
		} while (!bTranslated && *p);
	}

	return bTranslated;
}

/* ArchWow64PathExpand

The purpose of this function is to receive an unformatted file path (which may
contain architecture folders or environment variables) and convert the two
ambiguous architecture directories to Wow64 if applicable.

1. Expand all environment variables.
2. Check whether the path begins with either of the ambiguous architecture
folders: C:\Windows\system32, C:\Program Files
3. If the path does not begin with an ambiguous arch folder return it as is.
4. If the path does begin with an ambiguous arch folder then convert it to
the Wow64 equivalent and return it.

Examples:

%programfiles%\example1\example.exe -> C:\Program Files (x86)\example1\example.exe
C:\Program Files (x86)\example2\example.exe -> C:\Program Files (x86)\example2\example.exe
C:\Program Files\example3\example.exe -> C:\Program Files (x86)\example3\example.exe
C:\Windows\system32\notepad.exe -> C:\Windows\syswow64\notepad.exe

*/

#define MAX_ENV_VAR_SIZE 32767

bool FileBase::ArchWow64PathExpand(const wchar_t* TargetFilePath, wchar_t* OutputPath, size_t ccOutputPathLength) {
	bool bExpandedPath = false;
	uint64_t qwPathLength;
	wchar_t* ProgFilePath64, * ProgFilePathWow64;
	wchar_t SystemDirectory[MAX_PATH + 1] = { 0 }, SysWow64Directory[MAX_PATH + 1] = { 0 }, ExpandedTargetPath[MAX_PATH + 1] = { 0 };
	SYSTEM_INFO SystemInfo = { 0 };

	if (ExpandEnvironmentStringsW(TargetFilePath, ExpandedTargetPath, MAX_PATH + 1)) {
		bExpandedPath = true;
		wcscpy_s(OutputPath, ccOutputPathLength, ExpandedTargetPath);

		GetNativeSystemInfo(&SystemInfo); // Native version of this call works on both Wow64 and x64 as opposed to just x64 for GetSystemInfo. Works on XP+

		if (SystemInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64) {
			//
			// Resolve the 32 and 64-bit versions of the most problematic paths (Program Files, System32)
			//

			if ((qwPathLength = GetSystemWow64DirectoryW(SysWow64Directory, MAX_PATH + 1))) {
				if ((qwPathLength = GetSystemDirectoryW(SystemDirectory, MAX_PATH + 1))) {
					ProgFilePath64 = reinterpret_cast<wchar_t *>(new uint8_t[MAX_ENV_VAR_SIZE]); // 32,767 is the maximum number of bytes an environment var can be, including the null terminator.

					if ((qwPathLength = GetEnvironmentVariableW(L"ProgramW6432", ProgFilePath64, MAX_ENV_VAR_SIZE))) {
						ProgFilePathWow64 = reinterpret_cast<wchar_t *>(new uint8_t[MAX_ENV_VAR_SIZE]); // 32,767 is the maximum number of bytes an environment var can be, including the null terminator.

						if ((qwPathLength = GetEnvironmentVariableW(L"ProgramFiles(x86)", ProgFilePathWow64, MAX_ENV_VAR_SIZE))) {
							//
							// Is the target path within one of the two ambiguous architecture directories?
							//

							if (_wcsnicmp(ProgFilePathWow64, ExpandedTargetPath, wcslen(ProgFilePathWow64)) == 0) {
								// The target path is already within the Wow64 program files path. Do nothing.
							}
							else if (_wcsnicmp(SysWow64Directory, ExpandedTargetPath, wcslen(SysWow64Directory)) == 0) {
								// The target path is already within the Wow64 system path. Do nothing.
							}
							else if (_wcsnicmp(SystemDirectory, ExpandedTargetPath, wcslen(SystemDirectory)) == 0) {
								wcscpy_s(OutputPath, ccOutputPathLength, SysWow64Directory);
								wcscat_s(OutputPath, ccOutputPathLength, ExpandedTargetPath + wcslen(SystemDirectory));
							}
							else if (_wcsnicmp(ProgFilePath64, ExpandedTargetPath, wcslen(ProgFilePath64)) == 0) {
								wcscpy_s(OutputPath, ccOutputPathLength, ProgFilePathWow64);
								wcscat_s(OutputPath, ccOutputPathLength, ExpandedTargetPath + wcslen(ProgFilePath64));
							}
						}

						delete[] ProgFilePathWow64;
					}

					delete[] ProgFilePath64;
				}
			}
		}
	}

	return bExpandedPath;
}