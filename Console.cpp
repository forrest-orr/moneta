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

#include "StdAfx.h"
#include "FileIo.hpp"
#include "PeFile.hpp"
#include "Process.hpp"
#include "Memory.hpp"
#include "Interface.hpp"
#include "MemDump.hpp"

using namespace std;
using namespace Memory;

enum class SelectedProcess_t {
	InvalidPid = 0,
	SpecificPid,
	AllPids,
	SelfPid
};

BOOL SetPrivilege(
	HANDLE hToken,          // token handle
	LPCTSTR Privilege,      // Privilege to enable/disable
	BOOL bEnablePrivilege   // TRUE to enable.  FALSE to disable
)
{
	TOKEN_PRIVILEGES tp;
	LUID luid;
	TOKEN_PRIVILEGES tpPrevious;
	DWORD cbPrevious = sizeof(TOKEN_PRIVILEGES);

	if (!LookupPrivilegeValue(NULL, Privilege, &luid)) return FALSE;

	// 
	// first pass.  get current privilege setting
	// 
	tp.PrivilegeCount = 1;
	tp.Privileges[0].Luid = luid;
	tp.Privileges[0].Attributes = 0;

	AdjustTokenPrivileges(
		hToken,
		FALSE,
		&tp,
		sizeof(TOKEN_PRIVILEGES),
		&tpPrevious,
		&cbPrevious
	);

	if (GetLastError() != ERROR_SUCCESS) return FALSE;

	// 
	// second pass.  set privilege based on previous setting
	// 
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

	return TRUE;
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
	if (!SetPrivilege(hToken, SE_DEBUG_NAME, TRUE))
	{
		CloseHandle(hToken);

		// indicate failure
		return false;
	}

	// close handles
	CloseHandle(hToken);

	return true;
}

#define DEBUG

int32_t wmain(int32_t nArgc, const wchar_t* pArgv[]) {
	vector<wstring> Args(&pArgv[0], &pArgv[0 + nArgc]);
	Interface::Initialize(Args);

	for (WORD wX = 0; wX < 200; wX++) {
		//Interface::Log(wX, "%d ", wX);
	}

	//Interface::Log("\r\n");
	Interface::Log(
		"   _____                        __          \r\n"
		"  /     \\   ____   ____   _____/  |______   \r\n"
		" /  \\ /  \\ /  _ \\ /    \\_/ __ \\   __\\__  \\  \r\n"
		"/    Y    (  <_> )   |  \\  ___/|  |  / __ \\_\r\n"
		"\\____|__  /\\____/|___|  /\\___  >__| (____  /\r\n"
		"        \\/            \\/     \\/          \\/ \r\n"
		"\r\n"
		"Moneta v1.0 | Forrest Orr | 2020\r\n\r\n"
	);
	SYSTEM_INFO SystemInfo = { 0 };
	typedef BOOL(WINAPI* ISWOW64PROCESS) (HANDLE, PBOOL);
	static ISWOW64PROCESS IsWow64Process = (ISWOW64PROCESS)GetProcAddress(GetModuleHandleW(L"Kernel32.dll"), "IsWow64Process");
	uint64_t qwOptFlags = 0;
	
	if (IsWow64Process != nullptr) {
		BOOL bSelfWow64 = FALSE;

		if (IsWow64Process(GetCurrentProcess(), (PBOOL)&bSelfWow64)) {
			GetNativeSystemInfo(&SystemInfo); // Native version of this call works on both Wow64 and x64 as opposed to just x64 for GetSystemInfo. Works on XP+

			if (SystemInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64 && bSelfWow64) {
				Interface::Log("... Moneta 32-bit should not be used on a 64-bit OS. Use the x64 version of this tool.\r\n");
				return 0;
			}
		}
	}

	if (nArgc < 5) {
		Interface::Log("... usage: %ws see README.md\r\n", pArgv[0]);
	}
	else {
		SelectedProcess_t ProcType = SelectedProcess_t::InvalidPid;
		MemorySelection_t MemSelectType = MemorySelection_t::Invalid;
		uint32_t dwSelectedPid = 0;
		uint8_t* pAddress = nullptr;

		for (vector<wstring>::const_iterator i = Args.begin(); i != Args.end(); ++i) {
			wstring Arg = *i;
			transform(Arg.begin(), Arg.end(), Arg.begin(), ::tolower);

			if (Arg == L"-p") {
				if (*(i + 1) == L"self") {
					ProcType = SelectedProcess_t::SelfPid;
					dwSelectedPid = GetCurrentProcessId();
				}
				else if (*(i + 1) == L"*") {
					ProcType = SelectedProcess_t::AllPids;
				}
				else {
					ProcType = SelectedProcess_t::SpecificPid;
					dwSelectedPid = _wtoi((*(i + 1)).c_str());
				}
			}
			else if (Arg == L"-m") {
				if (*(i + 1) == L"block") {
					MemSelectType = MemorySelection_t::Block;
				}
				else if (*(i + 1) == L"*") {
					MemSelectType = MemorySelection_t::All;
				}
				else if (*(i + 1) == L"suspicious") {
					MemSelectType = MemorySelection_t::Suspicious;
				}
			}
			else if (Arg == L"--address") {
				pAddress = (uint8_t*)wcstoull((*(i + 1)).c_str(), NULL, 0);
			}
			else if (Arg == L"-d") {
				qwOptFlags |= PROCESS_ENUM_FLAG_MEMDUMP;
			}
			else if (Arg == L"--option") {
				for (vector<wstring>::const_iterator OptZtr = i; OptZtr != Args.end(); ++OptZtr) {
					wstring OptArg = *OptZtr;
					transform(OptArg.begin(), OptArg.end(), OptArg.begin(), ::tolower);

					if (OptArg == L"from-base") {
						qwOptFlags |= PROCESS_ENUM_FLAG_FROM_BASE;
					}
					else if (OptArg == L"statistics") {
						qwOptFlags |= PROCESS_ENUM_FLAG_STATISTICS;
					}
				}
			}
		}

		//
		// Validate user input
		//

		if (ProcType == SelectedProcess_t::InvalidPid) {
			Interface::Log("- Invalid target process type selected\r\n");
			return 0;
		}

		if (MemSelectType == MemorySelection_t::Invalid) {
			Interface::Log("- Invalid memory selection type\r\n");
			return 0;
		}

		//
		// Initialization
		//

		if (GrantSelfSeDebug()) {
			Interface::Log(VerbosityLevel::Debug, "+ Successfully granted SeDebug privilege to self\r\n");
		}
		else {
			Interface::Log("... Failed to grant SeDebug privilege to self. Certain processes will be inaccessible.\r\n");
		}

		if ((qwOptFlags & PROCESS_ENUM_FLAG_MEMDUMP)) {
			MemDump::Initialize();
		}

		//
		// Analyze processes and generate memory maps/suspicions
		//

		uint64_t qwStartTick = GetTickCount64();

		if (ProcType == SelectedProcess_t::SelfPid || ProcType == SelectedProcess_t::SpecificPid) {
			try {
				Process TargetProc(dwSelectedPid);
				vector<Subregion*> SelectedSbrs = TargetProc.Enumerate(qwOptFlags, MemSelectType, pAddress);
				if ((qwOptFlags & PROCESS_ENUM_FLAG_STATISTICS)) {
					PermissionRecord* MemPermRec = new PermissionRecord(SelectedSbrs);
					MemPermRec->ShowRecords();
				}
			}
			catch (int32_t nError) {
				Interface::Log("- Failed to map address space of %d (error %d)\r\n", dwSelectedPid, nError);
			}
		}
		else {
			PROCESSENTRY32W ProcEntry = { 0 };
			HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
			PermissionRecord* MemPermRec = nullptr;

			if (hSnapshot != nullptr) {
				ProcEntry.dwSize = sizeof(PROCESSENTRY32W);

				if (Process32FirstW(hSnapshot, &ProcEntry)) {
					do
					{
#ifdef DEBUG
						if (ProcEntry.th32ProcessID == GetCurrentProcessId()) {
							continue;
						}
#endif
						try {
							//TargetProc = new Process(ProcEntry.th32ProcessID);
							Process TargetProc(ProcEntry.th32ProcessID);
							vector<Subregion*> SelectedSbrs = TargetProc.Enumerate(qwOptFlags, MemSelectType, pAddress);

							if ((qwOptFlags & PROCESS_ENUM_FLAG_STATISTICS)) {
								if (MemPermRec == nullptr) {
									MemPermRec = new PermissionRecord(SelectedSbrs);
								}
								else {
									MemPermRec->UpdateMap(SelectedSbrs);
								}
							}
						}
						catch (int32_t nError) {
							Interface::Log(VerbosityLevel::Debug, "- Failed to map address space of %d:%ws (error %d)\r\n", ProcEntry.th32ProcessID, ProcEntry.szExeFile, nError);
							continue;
						}
					} while (Process32NextW(hSnapshot, &ProcEntry));
				}

				CloseHandle(hSnapshot);
			}
			else
			{
				Interface::Log("- Failed to create process list snapshot (error %d)\r\n", GetLastError());
			}

			if (MemPermRec != nullptr) {
				MemPermRec->ShowRecords();
			}
		}

		float fElapsedTime = GetTickCount64() - qwStartTick;
		Interface::Log("\r\n... scan completed (%f second duration)\r\n", fElapsedTime / 1000.0);
	}
}