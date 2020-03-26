#include "StdAfx.h"
#include "MemDump.hpp"
#include "FileIo.hpp"
#include "PeFile.hpp"
#include "Process.hpp"
#include "Memory.hpp"

using namespace std;
using namespace Memory;

wstring MemDump::Folder;

MemDump::MemDump(HANDLE hProcess, uint32_t dwPid) : Handle(hProcess), Pid(dwPid) {}

bool MemDump::Create(wstring Folder, MEMORY_BASIC_INFORMATION *Mbi, wchar_t* DumFilePath, size_t ccDumFilePathLen) {
	SIZE_T cbBytesRead = 0;
	uint8_t* pBuf = new uint8_t[Mbi->RegionSize];
	wstring TargetDmpFolder;

	if (ReadProcessMemory(this->Handle, Mbi->BaseAddress, pBuf, Mbi->RegionSize, (SIZE_T*)&cbBytesRead)) {
		if (!Folder.empty()) {
			TargetDmpFolder = MemDump::Folder + L"\\" + Folder;

			if (!CreateDirectoryW(TargetDmpFolder.c_str(), nullptr) && GetLastError() != ERROR_ALREADY_EXISTS) {
				delete [] pBuf;
				return false;
			}
		}
		else {
			TargetDmpFolder = MemDump::Folder;
		}

		swprintf_s(DumFilePath, ccDumFilePathLen, L"%ws\\%d_%p_%ws_%ws.dat", TargetDmpFolder.c_str(), this->Pid, Mbi->BaseAddress, Subregion::AttribDesc(Mbi), Subregion::TypeSymbol(Mbi->Type));
		FileBase DumpFile(DumFilePath, pBuf, cbBytesRead);
		return DumpFile.ToDisk();
	}
	else {
		return false;
	}
}

bool MemDump::Create(MEMORY_BASIC_INFORMATION* Mbi, wchar_t* DumFilePath, size_t ccDumFilePathLen) {
	return Create(L"", Mbi, DumFilePath, ccDumFilePathLen);
}

bool MemDump::Initialize() {
	SYSTEMTIME SysTime = { 0 };
	wchar_t MemDmpFolder[MAX_PATH + 1] = { 0 };

	GetLocalTime(&SysTime);
	swprintf_s(MemDmpFolder, MAX_PATH + 1, L"memdmp-%d-%d-%d~%d.%d.%d", SysTime.wMonth, SysTime.wDay, SysTime.wYear, SysTime.wHour, SysTime.wMinute, SysTime.wSecond);
	MemDump::Folder = wstring(MemDmpFolder);

	return CreateDirectoryW(MemDump::Folder.c_str(), nullptr);
}
