/*

.___        __                 _____
|   | _____/  |_  ____________/ ____\____    ____  ____
|   |/    \   __\/ __ \_  __ \   __\\__  \ _/ ___\/ __ \
|   |   |  \  | \  ___/|  | \/|  |   / __ \\  \__\  ___/
|___|___|  /__|  \___  >__|   |__|  (____  /\___  >___  >
		 \/          \/                  \/     \/    \/

User I/O interface class for dynamic output to stdio, logs, pipes, or any other
accessible Windows file object.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Interface can be initialized in the following ways:
	Interface(L"log.txt");
	Interface(L"log.txt", 1);
	Interface(1);
	Interface();
	Interface(Args);

*/

#include "stdafx.h"
#include "Interface.hpp"

using namespace std;

wstring Interface::LogFilePath;
int32_t Interface::VerbosityLvl;
HANDLE Interface::Handle;
bool Interface::IsStdout;

void Interface::Initialize(wstring LogFilePath, int32_t nVerbosityLvl) {
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
	Interface::VerbosityLvl = nVerbosityLvl;
	Interface::Handle = Handle;
	Interface::IsStdout = bIsStdout;
}

void Interface::Initialize(int32_t nVerbosityLvl) {
	Initialize(L"", nVerbosityLvl);
}

void Interface::Initialize(vector<wstring> &Args) {
	wstring LogFilePath;
	int32_t nVerbosityLvl = 1;

	for (vector<wstring>::const_iterator i = Args.begin(); i != Args.end(); ++i) {
		if (*i == L"-v") {
			nVerbosityLvl = stoi(*(i + 1));
		}
		else if (*i == L"--log-file") {
			LogFilePath = *(i + 1);
		}
	}

	Initialize(LogFilePath, nVerbosityLvl);
}

bool Interface::Log(int32_t nMsgVerbosity, const char *pLogFormat, ...) {
	if (nMsgVerbosity <= Interface::VerbosityLvl) {
		char LogBuffer[4000] = { 0 };
		char *pVarList;
		uint32_t dwBytesWritten = 0;

		va_start(pVarList, pLogFormat);

		if (_vsnprintf_s(LogBuffer, sizeof(LogBuffer), _TRUNCATE, pLogFormat, pVarList) == -1) {
			LogBuffer[sizeof(LogBuffer) - 1] = '\0';
		}

		va_end(pVarList);

		return WriteFile(Interface::Handle, LogBuffer, strlen(LogBuffer), (PDWORD)&dwBytesWritten, NULL);
	}

	return FALSE;
}

bool Interface::Log(const char *pLogFormat, ...) {
	char LogBuffer[4000] = { 0 };
	char *pVarList;
	uint32_t dwBytesWritten = 0;

	va_start(pVarList, pLogFormat);

	if (_vsnprintf_s(LogBuffer, sizeof(LogBuffer), _TRUNCATE, pLogFormat, pVarList) == -1) {
		LogBuffer[sizeof(LogBuffer) - 1] = '\0';
	}

	va_end(pVarList);

	return WriteFile(Interface::Handle, LogBuffer, strlen(LogBuffer), (PDWORD)&dwBytesWritten, NULL);
}

bool Interface::Log(WORD wColorAttribute, const char* pLogFormat, ...) {
	char LogBuffer[4000] = { 0 };
	char* pVarList;
	uint32_t dwBytesWritten = 0;
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	if (Interface::IsStdout) {
		GetConsoleScreenBufferInfo(Interface::Handle, &consoleInfo);
		saved_attributes = consoleInfo.wAttributes;

		SetConsoleTextAttribute(Interface::Handle, FOREGROUND_BLUE);
	}

	va_start(pVarList, pLogFormat);

	if (_vsnprintf_s(LogBuffer, sizeof(LogBuffer), _TRUNCATE, pLogFormat, pVarList) == -1) {
		LogBuffer[sizeof(LogBuffer) - 1] = '\0';
	}

	va_end(pVarList);

	if (Interface::IsStdout) {
		SetConsoleTextAttribute(Interface::Handle, saved_attributes);
	}

	return WriteFile(Interface::Handle, LogBuffer, strlen(LogBuffer), (PDWORD)&dwBytesWritten, NULL);
}

HANDLE Interface::GetOutputHandle() { return Interface::Handle; }

int32_t Interface::GetVerbosity() {
	return Interface::VerbosityLvl;
}
