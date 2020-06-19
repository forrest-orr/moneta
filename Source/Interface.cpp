/*
__________________________________________________________________________________________
| _______  _____  __   _ _______ _______ _______                                         |
| |  |  | |     | | \  | |______    |    |_____|                                         |
| |  |  | |_____| |  \_| |______    |    |     |                                         |
|________________________________________________________________________________________|
| Moneta ~ Usermode memory scanner & malware hunter                                      |
|----------------------------------------------------------------------------------------|
| https://www.forrest-orr.net/post/malicious-memory-artifacts-part-ii-bypassing-scanners |
|----------------------------------------------------------------------------------------|
| Author: Forrest Orr - 2020                                                             |
|----------------------------------------------------------------------------------------|
| Contact: forrest.orr@protonmail.com                                                    |
|----------------------------------------------------------------------------------------|
| Licensed under GNU GPLv3                                                               |
|________________________________________________________________________________________|
| ## Features                                                                            |
|                                                                                        |
| ~ Query the memory attributes of any accessible process(es).                           |
| ~ Identify private, mapped and image memory.                                           |
| ~ Correlate regions of memory to their underlying file on disks.                       |
| ~ Identify PE headers and sections corresponding to image memory.                      |
| ~ Identify modified regions of mapped image memory.                                    |
| ~ Identify abnormal memory attributes indicative of malware.                           |
| ~ Create memory dumps of user-specified memory ranges                                  |
| ~ Calculate memory permission/type statistics                                          |
|________________________________________________________________________________________|

*/

#include "stdafx.h"
#include "Interface.hpp"

using namespace std;

wstring Interface::LogFilePath;
Interface::VerbosityLevel Interface::VerbosityLvl;
HANDLE Interface::Handle;
bool Interface::IsStdout;

void Interface::Initialize(wstring LogFilePath, VerbosityLevel VLvl) {
	if (LogFilePath.empty()) {
		Interface::IsStdout = true;
		Interface::Handle = GetStdHandle(STD_OUTPUT_HANDLE);
	}
	else {
		if ((Interface::Handle = CreateFileW(LogFilePath.c_str(), FILE_APPEND_DATA, FILE_SHARE_READ, NULL, OPEN_ALWAYS, 0, NULL)) == INVALID_HANDLE_VALUE) {
			throw;
		}
	}

	Interface::LogFilePath = LogFilePath;
	Interface::VerbosityLvl = VLvl;
}

void Interface::Initialize(VerbosityLevel Vlvl) {
	Initialize(L"", Vlvl);
}

void Interface::Initialize(vector<wstring> &Args) {
	wstring LogFilePath;
	VerbosityLevel VLvl = Interface::VerbosityLevel::Surface;

	for (vector<wstring>::const_iterator i = Args.begin(); i != Args.end(); ++i) {
		if (*i == L"-v") {
			if (*(i + 1) == L"surface") {
				VLvl = Interface::VerbosityLevel::Surface;
			}
			else if (*(i + 1) == L"detail") {
				VLvl = Interface::VerbosityLevel::Detail;
			}
			else if (*(i + 1) == L"debug") {
				VLvl = Interface::VerbosityLevel::Debug;
			}
			else if (*(i + 1) == L"silent") {
				VLvl = Interface::VerbosityLevel::Silent;
			}
		}
		else if (*i == L"--log-file") {
			LogFilePath = *(i + 1);
		}
	}

	Initialize(LogFilePath, VLvl);
}

bool Interface::Log(VerbosityLevel MsgVlvl, const char *LogFormat, ...) {
	if (MsgVlvl <= Interface::VerbosityLvl) {
		char LogBuffer[4000] = { 0 };
		char *pVarList;
		uint32_t dwBytesWritten = 0;

		va_start(pVarList, LogFormat);

		if (_vsnprintf_s(LogBuffer, sizeof(LogBuffer), _TRUNCATE, LogFormat, pVarList) == -1) {
			LogBuffer[sizeof(LogBuffer) - 1] = '\0';
		}

		va_end(pVarList);
		return WriteFile(Interface::Handle, LogBuffer, strlen(LogBuffer), reinterpret_cast<PDWORD>(&dwBytesWritten), NULL);
	}

	return false;
}

bool Interface::Log(VerbosityLevel MsgVlvl, ConsoleColor Color, const char* LogFormat, ...) {
	char LogBuffer[4000] = { 0 };
	char* pVarList;
	uint32_t dwBytesWritten = 0;
	CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
	WORD wOldAttrib;
	bool bWriteSuccess = false;

	if (MsgVlvl <= Interface::VerbosityLvl) {
		if (Interface::IsStdout) {
			GetConsoleScreenBufferInfo(Interface::Handle, &ConsoleInfo);
			wOldAttrib = ConsoleInfo.wAttributes;
			SetConsoleTextAttribute(Interface::Handle, (WORD)Color);
		}

		va_start(pVarList, LogFormat);

		if (_vsnprintf_s(LogBuffer, sizeof(LogBuffer), _TRUNCATE, LogFormat, pVarList) == -1) {
			LogBuffer[sizeof(LogBuffer) - 1] = '\0';
		}

		va_end(pVarList);
		bWriteSuccess = WriteFile(Interface::Handle, LogBuffer, strlen(LogBuffer), reinterpret_cast<PDWORD>(&dwBytesWritten), NULL);

		if (Interface::IsStdout) {
			SetConsoleTextAttribute(Interface::Handle, wOldAttrib);
		}
	}

	return bWriteSuccess;
}

void Interface::EnumColors() {
	for (uint32_t dwX = 0; dwX < 100; dwX++) Interface::Log(Interface::VerbosityLevel::Surface, (ConsoleColor)dwX, "%d ", dwX);
    Interface::Log(Interface::VerbosityLevel::Surface, "\r\n");
    system("pause");
}

void Interface::AlignStr(const wchar_t* pOriginalStr, wchar_t* pAlignedStr, int32_t nAlignTo) {
	assert(nAlignTo >= 1);
	assert(wcslen(pOriginalStr) <= nAlignTo);

	if (wcslen(pOriginalStr)) {
		wcsncpy_s(pAlignedStr, (nAlignTo + 1), pOriginalStr, nAlignTo);
		for (int32_t nX = wcslen(pAlignedStr); nX < nAlignTo; nX++) {
			wcscat_s(pAlignedStr, (nAlignTo + 1), L" ");
		}
	}
	else {
		wcscpy_s(pAlignedStr, (nAlignTo + 1), L" ");

		for (int32_t nX = 1; nX < nAlignTo; nX++) {
			wcscat_s(pAlignedStr, (nAlignTo + 1), L" ");
		}
	}
}