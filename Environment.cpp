#include <Windows.h>
#include <stdio.h>
#include <string>

#include "Environment.hpp"

using namespace std;
using namespace Moneta;

wstring Environment::MetadataPath;

void Environment::Initialize() {
	wchar_t SysDir[MAX_PATH + 1] = { 0 };

	GetSystemDirectoryW(SysDir, MAX_PATH + 1);
	wcscat_s(SysDir, L"\\WinMetadata");
	MetadataPath = SysDir;
}