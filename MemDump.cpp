#include "StdAfx.h"
#include "MemDump.hpp"
#include "FileIo.hpp"
#include "PeFile.hpp"
#include "Processes.hpp"
#include "Memory.hpp"

using namespace std;
using namespace Memory;

wstring MemDump::Folder;

MemDump::MemDump(HANDLE hProcess, uint32_t dwPid) : Handle(hProcess), Pid(dwPid) {}

bool MemDump::Create(wstring Folder, const MEMORY_BASIC_INFORMATION *Mbi,  wchar_t* DumFilePath, size_t ccDumFilePathLen) const {
	SIZE_T cbBytesRead = 0;
	uint8_t* Buf = new uint8_t[Mbi->RegionSize];
	wstring TargetDmpFolder;

	if (ReadProcessMemory(this->Handle, Mbi->BaseAddress, Buf, Mbi->RegionSize, static_cast<SIZE_T*>(&cbBytesRead))) {
		if (!Folder.empty()) {
			TargetDmpFolder = MemDump::Folder + L"\\" + Folder;

			if (!CreateDirectoryW(TargetDmpFolder.c_str(), nullptr) && GetLastError() != ERROR_ALREADY_EXISTS) {
				delete [] Buf;
				return false;
			}
		}
		else {
			TargetDmpFolder = MemDump::Folder;
		}

		swprintf_s(DumFilePath, ccDumFilePathLen, L"%ws\\%d_%p_%ws_%ws.dat", TargetDmpFolder.c_str(), this->Pid, Mbi->BaseAddress, Subregion::AttribDesc(Mbi), Subregion::TypeSymbol(Mbi->Type));
		FileBase DumpFile(DumFilePath, Buf, cbBytesRead);
		return DumpFile.ToDisk();
	}
	else {
		delete[] Buf;
		return false;
	}
}

bool MemDump::Create(const MEMORY_BASIC_INFORMATION* Mbi, wchar_t* DumFilePath, size_t ccDumFilePathLen) const {
	return Create(L"", Mbi, DumFilePath, ccDumFilePathLen);
}

bool MemDump::Create(const MEMORY_BASIC_INFORMATION* Mbi, uint8_t** ppDmpBuf, uint32_t* pdwDmpSize) const {
	assert(ppDmpBuf != nullptr);
	assert(pdwDmpSize != nullptr);

	SIZE_T cbBytesRead = 0;
	uint8_t* Buf = new uint8_t[Mbi->RegionSize];

	if (ReadProcessMemory(this->Handle, Mbi->BaseAddress, Buf, Mbi->RegionSize, static_cast<SIZE_T*>(&cbBytesRead))) {
		*pdwDmpSize = cbBytesRead;
		*ppDmpBuf = Buf;
		return true;
	}
	else {
		delete[] Buf;
	}

	return false;
}

bool MemDump::Initialize() {
	SYSTEMTIME SysTime = { 0 };
	wchar_t MemDmpFolder[MAX_PATH + 1] = { 0 };

	GetLocalTime(&SysTime);
	swprintf_s(MemDmpFolder, MAX_PATH + 1, L"memdmp-%d-%d-%d~%d.%d.%d", SysTime.wMonth, SysTime.wDay, SysTime.wYear, SysTime.wHour, SysTime.wMinute, SysTime.wSecond);
	MemDump::Folder = wstring(MemDmpFolder);

	return CreateDirectoryW(MemDump::Folder.c_str(), nullptr);
}
