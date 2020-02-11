#include "stdafx.h"
#include "FileIo.hpp"

using namespace std;

FileBase::FileBase(wstring DesiredPath, uint8_t* pDataBuf, uint32_t dwSize) : Path(DesiredPath), Data(new uint8_t[dwSize]), Size(dwSize) {
	memcpy(this->Data, pDataBuf, dwSize);
}

uint8_t* FileBase::GetData() {
	return this->Data;
}

uint32_t FileBase::GetSize() {
	return this->Size;
}

wstring FileBase::GetPath() {
	return this->Path;
}

bool FileBase::ToDisk(bool bAppend) {
	assert(this->Data != nullptr);

	HANDLE hFile;
	bool bWritten = false;

	if ((hFile = CreateFileW(this->Path.c_str(), bAppend ? FILE_APPEND_DATA : GENERIC_WRITE, bAppend ? FILE_SHARE_READ : 0, NULL, bAppend ? OPEN_ALWAYS : CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL)) != INVALID_HANDLE_VALUE) {
		uint32_t dwBytesWritten;
		if (WriteFile(hFile, this->GetData(), this->GetSize(), (PDWORD)&dwBytesWritten, 0)) {
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
			this->Size = GetFileSize(hFile, NULL);
			this->Data = new uint8_t[this->Size];
			if (!ReadFile(hFile, this->Data, this->Size, (PDWORD)&dwBytesRead, 0)) throw 2;
		}

		CloseHandle(hFile);
	}
	else {
		this->Phantom = true;

		if (bForceOpen) {
			throw 1;
		}
		else {
			this->Data = nullptr;
			this->Size = 0;
		}
	}
};

FileBase::~FileBase() {
	if (this->Data != nullptr) {
		delete this->Data;
	}
}

bool FileBase::IsPhantom() {
	return this->Phantom;
}