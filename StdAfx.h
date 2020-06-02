#pragma once

#include <Windows.h>
#include <stdio.h>
#include <stdint.h>
#ifdef _WIN64
#pragma pack(push, 8) // Bug fix for strange x64 bug, sizeof PROCESSENTRY struct in 64-bit is unaligned and will break Process32First, with error code ERROR_BAD_LENGTH
#include <Tlhelp32.h>
#pragma pack(pop)
#else
#include <Tlhelp32.h>
#endif
#include <Psapi.h>
#include <winternl.h>
#include <assert.h>
#include <ImageHlp.h>
#include <strsafe.h>
#include <Softpub.h>
#include <mscat.h>
#include <wincrypt.h>
#include <wintrust.h>
#include <list>
#include <map>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <codecvt>
#include <cor.h>
#include <clrdata.h>
#include "xclrdata\xclrdata.h"
#include "Typedefs.h"