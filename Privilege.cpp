#include <Windows.h>

bool SetPrivilege(HANDLE hToken, const wchar_t *Privilege, bool bEnablePrivilege) {
	TOKEN_PRIVILEGES TokenPrivs = { 0 };
	LUID Luid;
	TOKEN_PRIVILEGES TokenPrivPrev = { 0 };
	DWORD dwPrevSize = sizeof(TOKEN_PRIVILEGES);

	if (LookupPrivilegeValueW(nullptr, Privilege, &Luid)) {
		TokenPrivs.PrivilegeCount = 1;
		TokenPrivs.Privileges[0].Luid = Luid;
		TokenPrivs.Privileges[0].Attributes = 0;

		AdjustTokenPrivileges(hToken, false, &TokenPrivs, sizeof(TOKEN_PRIVILEGES), &TokenPrivPrev, &dwPrevSize);

		if (GetLastError() == ERROR_SUCCESS) {
			TokenPrivPrev.PrivilegeCount = 1;
			TokenPrivPrev.Privileges[0].Luid = Luid;

			if (bEnablePrivilege) {
				TokenPrivPrev.Privileges[0].Attributes |= (SE_PRIVILEGE_ENABLED);
			}
			else {
				TokenPrivPrev.Privileges[0].Attributes ^= (SE_PRIVILEGE_ENABLED &
					TokenPrivPrev.Privileges[0].Attributes);
			}

			AdjustTokenPrivileges(
				hToken,
				false,
				&TokenPrivPrev,
				dwPrevSize,
				nullptr,
				nullptr
			);

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