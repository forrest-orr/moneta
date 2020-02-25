#include "stdafx.h"
#include "FileIo.hpp"

using namespace std;

FileBase::FileBase(wstring DesiredPath, uint8_t* pDataBuf, uint32_t dwSize) : Path(DesiredPath), FileData(new uint8_t[dwSize]), FileSize(dwSize) {
	memcpy(this->FileData, pDataBuf, dwSize);
}

uint8_t* FileBase::GetFileBaseData() {
	return this->FileData;
}

uint32_t FileBase::GetFileBaseSize() {
	return this->FileSize;
}

wstring FileBase::GetPath() {
	return this->Path;
}

bool FileBase::ToDisk(bool bAppend) {
	assert(this->FileData != nullptr);

	HANDLE hFile;
	bool bWritten = false;

	if ((hFile = CreateFileW(this->Path.c_str(), bAppend ? FILE_APPEND_DATA : GENERIC_WRITE, bAppend ? FILE_SHARE_READ : 0, NULL, bAppend ? OPEN_ALWAYS : CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL)) != INVALID_HANDLE_VALUE) {
		uint32_t dwBytesWritten;
		if (WriteFile(hFile, this->GetFileBaseData(), this->GetFileBaseSize(), (PDWORD)&dwBytesWritten, 0)) {
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
			if (!ReadFile(hFile, this->FileData, this->FileSize, (PDWORD)&dwBytesRead, 0)) throw 2;
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

bool FileBase::IsPhantom() {
	return this->Phantom;
}

bool FileBase::TranslateDevicePath(const wchar_t* pDevicePath, wchar_t* pTranslatedPath) {
	wchar_t DriveLetters[MAX_PATH + 1] = { 0 };
	bool bTranslated = false;

	if (GetLogicalDriveStringsW(MAX_PATH + 1, DriveLetters))
	{
		wchar_t DosPath[MAX_PATH + 1];
		wchar_t szDrive[3] = L" :";
		wchar_t* p = DriveLetters;

		do
		{
			*szDrive = *p;

			if (QueryDosDeviceW(szDrive, DosPath, MAX_PATH + 1)) {
				if (_wcsnicmp(pDevicePath, DosPath, wcslen(DosPath)) == 0) {
					wcscpy_s(pTranslatedPath, MAX_PATH + 1, szDrive);
					//wcscat_s(pTranslatedPath, MAX_PATH + 1, L"\\");
					wcscat_s(pTranslatedPath, MAX_PATH + 1, pDevicePath + wcslen(DosPath));
					bTranslated = true;
				}
			}

			p++;
		} while (!bTranslated && *p);
	}

	return bTranslated;
}

#define MAX_ENV_VAR_SIZE 32767

bool FileBase::ArchWow64PathExpand(const wchar_t* pTargetFilePath, wchar_t* pOutputPath, size_t OutputPathLength) {
	bool bExpandedPath = false;
	uint64_t qwPathLength;
	wchar_t* pProgFilePath64, * pProgFilePathWow64;
	wchar_t SystemDirectory[MAX_PATH + 1] = { 0 }, SysWow64Directory[MAX_PATH + 1] = { 0 }, ExpandedTargetPath[MAX_PATH + 1] = { 0 };
	SYSTEM_INFO SystemInfo = { 0 };

	if (ExpandEnvironmentStringsW(pTargetFilePath, ExpandedTargetPath, MAX_PATH + 1)) {
		bExpandedPath = true;
		wcscpy_s(pOutputPath, OutputPathLength, ExpandedTargetPath);

		GetNativeSystemInfo(&SystemInfo); // Native version of this call works on both Wow64 and x64 as opposed to just x64 for GetSystemInfo. Works on XP+

		if (SystemInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64) {
			//
			// Resolve the 32 and 64-bit versions of the most problematic paths (Program Files, System32)
			//

			if ((qwPathLength = GetSystemWow64DirectoryW(SysWow64Directory, MAX_PATH + 1))) {
				if ((qwPathLength = GetSystemDirectoryW(SystemDirectory, MAX_PATH + 1))) {
					pProgFilePath64 = (wchar_t*)new uint8_t[MAX_ENV_VAR_SIZE]; // 32,767 is the maximum number of bytes an environment var can be, including the null terminator.

					if ((qwPathLength = GetEnvironmentVariableW(L"ProgramW6432", pProgFilePath64, MAX_ENV_VAR_SIZE))) {
						pProgFilePathWow64 = (wchar_t*)new uint8_t[MAX_ENV_VAR_SIZE]; // 32,767 is the maximum number of bytes an environment var can be, including the null terminator.

						if ((qwPathLength = GetEnvironmentVariableW(L"ProgramFiles(x86)", pProgFilePathWow64, MAX_ENV_VAR_SIZE))) {
							//
							// Is the target path within one of the two ambiguous architecture directories?
							//

							if (_wcsnicmp(pProgFilePathWow64, ExpandedTargetPath, wcslen(pProgFilePathWow64)) == 0) {
								// The target path is already within the Wow64 program files path. Do nothing.
							}
							else if (_wcsnicmp(SysWow64Directory, ExpandedTargetPath, wcslen(SysWow64Directory)) == 0) {
								// The target path is already within the Wow64 system path. Do nothing.
							}
							else if (_wcsnicmp(SystemDirectory, ExpandedTargetPath, wcslen(SystemDirectory)) == 0) {
								wcscpy_s(pOutputPath, OutputPathLength, SysWow64Directory);
								wcscat_s(pOutputPath, OutputPathLength, ExpandedTargetPath + wcslen(SystemDirectory));
							}
							else if (_wcsnicmp(pProgFilePath64, ExpandedTargetPath, wcslen(pProgFilePath64)) == 0) {
								wcscpy_s(pOutputPath, OutputPathLength, pProgFilePathWow64);
								wcscat_s(pOutputPath, OutputPathLength, ExpandedTargetPath + wcslen(pProgFilePath64));
							}
						}

						delete[] pProgFilePathWow64;
					}

					delete[] pProgFilePath64;
				}
			}
		}
	}

	return bExpandedPath;
}