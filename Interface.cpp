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
			VLvl = (VerbosityLevel)stoi(*(i + 1));
		}
		else if (*i == L"--log-file") {
			LogFilePath = *(i + 1);
		}
	}

	Initialize(LogFilePath, VLvl);
}

bool Interface::Log(VerbosityLevel MsgVlvl, const char *pLogFormat, ...) {
	if (MsgVlvl <= Interface::VerbosityLvl) {
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

bool Interface::Log(VerbosityLevel MsgVlvl, WORD wColorAttribute, const char* pLogFormat, ...) {
	char LogBuffer[4000] = { 0 };
	char* pVarList;
	uint32_t dwBytesWritten = 0;
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	bool bWriteSuccess;
	
	if (Interface::IsStdout) {
		GetConsoleScreenBufferInfo(Interface::Handle, &consoleInfo);
		saved_attributes = consoleInfo.wAttributes;

		SetConsoleTextAttribute(Interface::Handle, wColorAttribute);
	}

	va_start(pVarList, pLogFormat);

	if (_vsnprintf_s(LogBuffer, sizeof(LogBuffer), _TRUNCATE, pLogFormat, pVarList) == -1) {
		LogBuffer[sizeof(LogBuffer) - 1] = '\0';
	}

	va_end(pVarList);

	bWriteSuccess = WriteFile(Interface::Handle, LogBuffer, strlen(LogBuffer), (PDWORD)&dwBytesWritten, NULL);

	if (Interface::IsStdout) {
		SetConsoleTextAttribute(Interface::Handle, saved_attributes);
	}

	return bWriteSuccess;
}
