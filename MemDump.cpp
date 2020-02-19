#include "StdAfx.h"
#include "MemDump.hpp"
#include "FileIo.hpp"

using namespace std;

wstring MemDump::Folder;

MemDump::MemDump(HANDLE hProcess, uint32_t dwPid) : Handle(hProcess), Pid(dwPid) {}

bool MemDump::Create(uint8_t* pAddress, SIZE_T cbSize, wchar_t* pDumpFilePath, size_t ccDumpFilePathLen) {
	SIZE_T cbBytesRead = 0;
	uint8_t* pBuf = (uint8_t*)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, cbSize);

	if (ReadProcessMemory(this->Handle, pAddress, pBuf, cbSize, (SIZE_T*)&cbBytesRead)) {
		swprintf_s(pDumpFilePath, ccDumpFilePathLen, L"%ws\\%d_%p.dat", MemDump::Folder.c_str(), this->Pid, pAddress);
		FileBase DumpFile(pDumpFilePath, pBuf, cbBytesRead);
		return DumpFile.ToDisk();
	}
	else {
		return false;
	}
}

bool MemDump::Initialize() {
	SYSTEMTIME SysTime = { 0 };
	wchar_t MemDmpFolder[MAX_PATH + 1] = { 0 };

	GetLocalTime(&SysTime);
	swprintf_s(MemDmpFolder, MAX_PATH + 1, L"memdmp-%d-%d-%d~%d.%d.%d", SysTime.wMonth, SysTime.wDay, SysTime.wYear, SysTime.wHour, SysTime.wMinute, SysTime.wSecond);
	MemDump::Folder = wstring(MemDmpFolder);

	return CreateDirectoryW(MemDump::Folder.c_str(), nullptr);
}