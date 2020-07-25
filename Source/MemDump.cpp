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

bool MemDump::Create(wstring Folder, const MEMORY_BASIC_INFORMATION *Mbi,  wchar_t* DumpFilePath, size_t ccDumpFilePathLen) const {
	assert(Mbi != nullptr);
	assert(DumpFilePath != nullptr);

	SIZE_T cbBytesRead = 0;
	unique_ptr<uint8_t[]> Buf = make_unique<uint8_t[]>(Mbi->RegionSize);
	wstring TargetDmpFolder;

	if (ReadProcessMemory(this->Handle, Mbi->BaseAddress, Buf.get(), Mbi->RegionSize, static_cast<SIZE_T*>(&cbBytesRead))) {
		if (!Folder.empty()) {
			TargetDmpFolder = MemDump::Folder + L"\\" + Folder;

			if (!CreateDirectoryW(TargetDmpFolder.c_str(), nullptr) && GetLastError() != ERROR_ALREADY_EXISTS) {
				return false;
			}
		}
		else {
			TargetDmpFolder = MemDump::Folder;
		}

		swprintf_s(DumpFilePath, ccDumpFilePathLen, L"%ws\\%d_%p_%ws_%ws.dat", TargetDmpFolder.c_str(), this->Pid, Mbi->BaseAddress, Subregion::AttribDesc(Mbi), Subregion::TypeSymbol(Mbi->Type));
		FileBase DumpFile(DumpFilePath, Buf.get(), cbBytesRead);
		return DumpFile.ToDisk();
	}

	return false;
}

bool MemDump::Create(const MEMORY_BASIC_INFORMATION* Mbi, wchar_t* DumpFilePath, size_t ccDumpFilePathLen) const {
	return Create(L"", Mbi, DumpFilePath, ccDumpFilePathLen);
}

bool MemDump::Create(const MEMORY_BASIC_INFORMATION* Mbi, uint8_t** ppDmpBuf, uint32_t* pdwDmpSize) const {
	assert(ppDmpBuf != nullptr);
	assert(pdwDmpSize != nullptr);

	SIZE_T cbBytesRead = 0;
	unique_ptr<uint8_t[]> Buf = make_unique<uint8_t[]>(Mbi->RegionSize);

	if (ReadProcessMemory(this->Handle, Mbi->BaseAddress, Buf.get(), Mbi->RegionSize, static_cast<SIZE_T*>(&cbBytesRead))) {
		*pdwDmpSize = cbBytesRead;
		*ppDmpBuf = Buf.get();
		Buf.release();
		return true;
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
