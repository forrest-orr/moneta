#include <Windows.h>

bool SetPrivilege(HANDLE hToken,  const wchar_t *Privilege, bool bEnablePrivilege) {
	TOKEN_PRIVILEGES tp;
	LUID luid;
	TOKEN_PRIVILEGES tpPrevious;
	DWORD cbPrevious = sizeof(TOKEN_PRIVILEGES);

	if (LookupPrivilegeValueW(NULL, Privilege, &luid)) {
		tp.PrivilegeCount = 1;
		tp.Privileges[0].Luid = luid;
		tp.Privileges[0].Attributes = 0;

		AdjustTokenPrivileges(hToken, false, &tp, sizeof(TOKEN_PRIVILEGES), &tpPrevious, &cbPrevious);

		if (GetLastError() == ERROR_SUCCESS) {
			tpPrevious.PrivilegeCount = 1;
			tpPrevious.Privileges[0].Luid = luid;

			if (bEnablePrivilege) {
				tpPrevious.Privileges[0].Attributes |= (SE_PRIVILEGE_ENABLED);
			}
			else {
				tpPrevious.Privileges[0].Attributes ^= (SE_PRIVILEGE_ENABLED &
					tpPrevious.Privileges[0].Attributes);
			}

			AdjustTokenPrivileges(
				hToken,
				FALSE,
				&tpPrevious,
				cbPrevious,
				NULL,
				NULL
			);

			if (GetLastError() != ERROR_SUCCESS) return FALSE;
		}
	}

	return true;
}

bool GrantSelfSeDebug() {
	HANDLE hToken;
	if (!OpenThreadToken(GetCurrentThread(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, FALSE, &hToken))
	{
		if (GetLastError() == ERROR_NO_TOKEN)
		{
			if (!ImpersonateSelf(SecurityImpersonation))
				return false;

			if (!OpenThreadToken(GetCurrentThread(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, FALSE, &hToken)) {
				return false;
			}
		}
		else
			return false;
	}

	// enable SeDebugPrivilege
	if (!SetPrivilege(hToken, L"SeDebugPrivilege", TRUE))
	{
		CloseHandle(hToken);

		// indicate failure
		return false;
	}

	// close handles
	CloseHandle(hToken);

	return true;
}