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