#include "stdafx.h"
#include "Interface.hpp"

using namespace std;

wstring Interface::LogFilePath;
VerbosityLevel Interface::VerbosityLvl;
HANDLE Interface::Handle;
bool Interface::IsStdout;

void Interface::Initialize(wstring LogFilePath, VerbosityLevel VLvl) {
	HANDLE Handle;
	bool bIsStdout = false;

	if (LogFilePath.empty()) {
		bIsStdout = true;
		Handle = GetStdHandle(STD_OUTPUT_HANDLE);
	}
	else {
		if ((Handle = CreateFileW(LogFilePath.c_str(), FILE_APPEND_DATA, FILE_SHARE_READ, NULL, OPEN_ALWAYS, 0, NULL)) == INVALID_HANDLE_VALUE) {
			throw;
		}
	}

	Interface::LogFilePath = LogFilePath;
	Interface::VerbosityLvl = VLvl;
	Interface::Handle = Handle;
	Interface::IsStdout = bIsStdout;
}

void Interface::Initialize(VerbosityLevel Vlvl) {
	Initialize(L"", Vlvl);
}

void Interface::Initialize(vector<wstring> &Args) {
	wstring LogFilePath;
	VerbosityLevel VLvl = VerbosityLevel::Surface;

	for (vector<wstring>::const_iterator i = Args.begin(); i != Args.end(); ++i) {
		if (*i == L"-v") {
			if (*(i + 1) == L"surface") {
				VLvl = VerbosityLevel::Surface;
			}
			else if (*(i + 1) == L"detail") {
				VLvl = VerbosityLevel::Detail;
			}
			else if (*(i + 1) == L"debug") {
				VLvl = VerbosityLevel::Debug;
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

	return FALSE;
}

bool Interface::Log(const char *LogFormat, ...) {
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

bool Interface::Log(ConsoleColor Color, const char* LogFormat, ...) {
	char LogBuffer[4000] = { 0 };
	char* pVarList;
	uint32_t dwBytesWritten = 0;
	CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
	WORD wOldAttrib;
	bool bWriteSuccess;
	
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

	return bWriteSuccess;
}

void Interface::EnumColors() {
	for (uint32_t dwX = 0; dwX < 100; dwX++) Interface::Log((ConsoleColor)dwX, "%d ", dwX);
    Interface::Log("\r\n");
    system("pause");
}