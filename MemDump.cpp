#include "StdAfx.h"
#include "MemDump.hpp"
#include "FileIo.hpp"
#include "PE.hpp"
#include "Moneta.hpp"
#include "Process.hpp"
#include "Blocks.hpp"

using namespace std;

wstring MemDump::Folder;

MemDump::MemDump(HANDLE hProcess, uint32_t dwPid) : Handle(hProcess), Pid(dwPid) {}

bool MemDump::Create(wstring Folder, MEMORY_BASIC_INFORMATION *pMbi, wchar_t* pDumpFilePath, size_t ccDumpFilePathLen) {
	SIZE_T cbBytesRead = 0;
	uint8_t* pBuf = new uint8_t[pMbi->RegionSize];
	wstring TargetDmpFolder;

	if (ReadProcessMemory(this->Handle, pMbi->BaseAddress, pBuf, pMbi->RegionSize, (SIZE_T*)&cbBytesRead)) {
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

		swprintf_s(pDumpFilePath, ccDumpFilePathLen, L"%ws\\%d_%p_%ws.dat", TargetDmpFolder.c_str(), this->Pid, pMbi->BaseAddress, MemoryBlock::AttribDesc(pMbi));
		FileBase DumpFile(pDumpFilePath, pBuf, cbBytesRead);
		return DumpFile.ToDisk();
	}
	else {
		return false;
	}
}

bool MemDump::Create(MEMORY_BASIC_INFORMATION* pMbi, wchar_t* pDumpFilePath, size_t ccDumpFilePathLen) {
	return Create(L"", pMbi, pDumpFilePath, ccDumpFilePathLen);
}

bool MemDump::Initialize() {
	SYSTEMTIME SysTime = { 0 };
	wchar_t MemDmpFolder[MAX_PATH + 1] = { 0 };

	GetLocalTime(&SysTime);
	swprintf_s(MemDmpFolder, MAX_PATH + 1, L"memdmp-%d-%d-%d~%d.%d.%d", SysTime.wMonth, SysTime.wDay, SysTime.wYear, SysTime.wHour, SysTime.wMinute, SysTime.wSecond);
	MemDump::Folder = wstring(MemDmpFolder);

	return CreateDirectoryW(MemDump::Folder.c_str(), nullptr);
}

uint32_t MemDump::GetPid() {
	return this->Pid;
}