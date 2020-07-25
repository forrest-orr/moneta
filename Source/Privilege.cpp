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

bool SetPrivilege(HANDLE hToken, const wchar_t *Privilege, bool bEnablePrivilege) {
	assert(Privilege != nullptr);

	TOKEN_PRIVILEGES TokenPrivs = { 0 };
	LUID Luid;
	TOKEN_PRIVILEGES TokenPrivPrev = { 0 };
	uint32_t dwPrevSize = sizeof(TOKEN_PRIVILEGES);

	if (LookupPrivilegeValueW(nullptr, Privilege, &Luid)) {
		TokenPrivs.PrivilegeCount = 1;
		TokenPrivs.Privileges[0].Luid = Luid;
		TokenPrivs.Privileges[0].Attributes = 0;

		AdjustTokenPrivileges(hToken, false, &TokenPrivs, sizeof(TOKEN_PRIVILEGES), &TokenPrivPrev, reinterpret_cast<DWORD *>(&dwPrevSize));

		if (GetLastError() == ERROR_SUCCESS) {
			TokenPrivPrev.PrivilegeCount = 1;
			TokenPrivPrev.Privileges[0].Luid = Luid;

			if (bEnablePrivilege) {
				TokenPrivPrev.Privileges[0].Attributes |= (SE_PRIVILEGE_ENABLED);
			}
			else {
				TokenPrivPrev.Privileges[0].Attributes ^= (SE_PRIVILEGE_ENABLED & TokenPrivPrev.Privileges[0].Attributes);
			}

			AdjustTokenPrivileges(hToken, false, &TokenPrivPrev, dwPrevSize, nullptr, nullptr);
			if (GetLastError() == ERROR_SUCCESS) return true;
		}
	}

	return false;
}

bool GrantSelfSeDebug() {
	HANDLE hToken;

	if (!OpenThreadToken(GetCurrentThread(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, FALSE, &hToken)) {
		if (GetLastError() == ERROR_NO_TOKEN) {
			if (!ImpersonateSelf(SecurityImpersonation)) {
				return false;
			}

			if (!OpenThreadToken(GetCurrentThread(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, FALSE, &hToken)) {
				return false;
			}
		}
		else {
			return false;
		}
	}

	if (!SetPrivilege(hToken, L"SeDebugPrivilege", TRUE)) {
		CloseHandle(hToken);
		return false;
	}

	CloseHandle(hToken);
	return true;
}