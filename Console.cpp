/*
____________________________________________________________________________________
| _______  _____  __   _ _______ _______ _______                                   |
| |  |  | |     | | \  | |______    |    |_____|                                   |
| |  |  | |_____| |  \_| |______    |    |     |                                   |                                                               |
|__________________________________________________________________________________|
| Moneta ~ Usermode memory scanner & malware hunter                                |
|----------------------------------------------------------------------------------|
| https://www.forrest-orr.net/post/malicious-memory-artifacts-part-i-dll-hollowing |
|----------------------------------------------------------------------------------|
| Author: Forrest Orr - 2019                                                       |
|----------------------------------------------------------------------------------|
| Contact: forrest.orr@protonmail.com                                              |
|----------------------------------------------------------------------------------|
| Licensed under GNU GPLv3                                                         |
|__________________________________________________________________________________|
| ## Features                                                                      |
|                                                                                  |
| ~ Query the memory attributes of any accessible process(es).                     |
| ~ Identify private, mapped and image memory.                                     |
| ~ Correlate regions of memory to their underlying file on disks.                 |
| ~ Identify PE headers and sections corresponding to image memory.                |
| ~ Identify modified regions of mapped image memory.                              |
| ~ Identify abnormal memory attributes indicative of malware.                     |
|__________________________________________________________________________________|

*/

#include "StdAfx.h"
#include "FileIo.hpp"
#include "PE.hpp"
#include "Moneta.hpp"
#include "Process.hpp"
#include "Blocks.hpp"
#include "Interface.hpp"
#include "MemDump.hpp"
#include "Environment.hpp"

using namespace std;
using namespace Moneta;

enum class SelectedProcessType {
	InvalidPid = 0,
	SpecificPid,
	AllPids,
	SelfPid
};

enum class SelectedOutputType {
	InvalidOutput = 0,
	Raw,
	Statistics
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
	SYSTEM_INFO SystemInfo = { 0 };
	typedef BOOL(WINAPI* ISWOW64PROCESS) (HANDLE, PBOOL);
	static ISWOW64PROCESS IsWow64Process = (ISWOW64PROCESS)GetProcAddress(GetModuleHandleW(L"Kernel32.dll"), "IsWow64Process");
	uint64_t qwMemdmpOptFlags = 0;
	
	if (IsWow64Process != nullptr) {
		BOOL bSelfWow64 = FALSE;

		if (IsWow64Process(GetCurrentProcess(), (PBOOL)&bSelfWow64)) {
			GetNativeSystemInfo(&SystemInfo); // Native version of this call works on both Wow64 and x64 as opposed to just x64 for GetSystemInfo. Works on XP+

			if (SystemInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64 && bSelfWow64) {
				Interface::Log("- Moneta 32-bit should not be used on a 64-bit OS. Use the x64 version of this tool.\r\n");
				return 0;
			}
		}
	}

	if (nArgc < 5) {
		Interface::Log("* Usage: %ws --target (PID) --output-type (see remarks) --dump-options (ree remarks)\r\n\r\n"
			"  Remarks:\r\n"
			"  ~ Dump options:\r\n"
			"    suspicious - dump sblocks with suspicious attributes\r\n"
			"    from-base - dump the entire allocated region associated with a suspicious sblock\r\n"
			"  ~ PID field may be \"self\" to target the current process, an arbitrart PID, or \"*\" to target all accessible processes.\r\n"
			"  ~ Output type field may be \"raw\" to display all queried memory info for each region, or may be \"stats\" to gather statistically common memory characteristics among the target(s)\r\n", pArgv[0]);
	}
	else {
		SelectedProcessType ProcType = SelectedProcessType::InvalidPid;
		SelectedOutputType OutputType = SelectedOutputType::InvalidOutput;
		uint32_t dwSelectedPid = 0;

		for (vector<wstring>::const_iterator i = Args.begin(); i != Args.end(); ++i) {
			wstring Arg = *i;
			transform(Arg.begin(), Arg.end(), Arg.begin(), ::tolower);

			if (Arg == L"--target") {
				if (*(i + 1) == L"self") {
					ProcType = SelectedProcessType::SelfPid;
					dwSelectedPid = GetCurrentProcessId();
				}
				else if (*(i + 1) == L"*") {
					ProcType = SelectedProcessType::AllPids;
				}
				else {
					ProcType = SelectedProcessType::SpecificPid;
					dwSelectedPid = _wtoi((*(i + 1)).c_str());
				}
			}
			else if (Arg == L"--output-type") {
				if (*(i + 1) == L"raw") {
					OutputType = SelectedOutputType::Raw;
				}
				else if (*(i + 1) == L"stats") {
					OutputType = SelectedOutputType::Statistics;
				}
			}
			else if (Arg == L"--dump-options") {
				for (vector<wstring>::const_iterator DmpOptItr = i; DmpOptItr != Args.end(); ++DmpOptItr) {
					wstring DmpOpt = *DmpOptItr;
					transform(DmpOpt.begin(), DmpOpt.end(), DmpOpt.begin(), ::tolower);

					if (DmpOpt == L"from-base") {
						qwMemdmpOptFlags |= MEMDMP_OPT_FLAG_FROM_BASE;
					}
					else if (DmpOpt == L"suspicious") {
						qwMemdmpOptFlags |= MEMDMP_OPT_FLAG_SUSPICIOUS;
					}
				}
			}
		}

		//
		// Validate user input
		//

		if (ProcType == SelectedProcessType::InvalidPid) {
			Interface::Log("- Invalid target process type selected\r\n");
			return 0;
		}

		if (OutputType == SelectedOutputType::InvalidOutput) {
			Interface::Log("- Invalid scan output type selected\r\n");
			return 0;
		}

		//
		// Initialization
		//

		if (GrantSelfSeDebug()) {
			Interface::Log("+ Successfully granted SeDebug privilege to self\r\n");
		}
		else {
			Interface::Log("- Failed to grant SeDebug privilege to self.\r\n");
		}

		Environment::Initialize();

		if ((qwMemdmpOptFlags & MEMDMP_OPT_FLAG_SUSPICIOUS)) {
			MemDump::Initialize();
		}

		//
		// Analyze processes and generate memory maps/suspicions
		//

		if (ProcType == SelectedProcessType::SelfPid || ProcType == SelectedProcessType::SpecificPid) {
			try {
				Process TargetProc(dwSelectedPid);
				//list<SBlock*> ProcessMem = QueryProcessMem(dwSelectedPid);

				if (OutputType == SelectedOutputType::Raw) {
					TargetProc.Enumerate(qwMemdmpOptFlags);
				}
				else if (OutputType == SelectedOutputType::Statistics) {
					//MemoryPermissionRecord* MemPermRec = new MemoryPermissionRecord(TargetProc.GetBlocks());
					//MemPermRec->ShowRecords();
				}
			}
			catch (int32_t nError) {
				Interface::Log("- Failed to map address space of %d (error %d)\r\n", dwSelectedPid, nError);
			}
		}
		else {
			PROCESSENTRY32W ProcEntry = { 0 };
			HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
			MemoryPermissionRecord* MemPermRec = nullptr;

			if (hSnapshot != nullptr) {
				ProcEntry.dwSize = sizeof(PROCESSENTRY32W);

				if (Process32FirstW(hSnapshot, &ProcEntry)) {
					do
					{
						//Process* TargetProc;
#ifdef DEBUG
						if (ProcEntry.th32ProcessID == GetCurrentProcessId()) {
							continue;
						}
#endif
						try {
							//TargetProc = new Process(ProcEntry.th32ProcessID);
							Process TargetProc(ProcEntry.th32ProcessID);
							if (OutputType == SelectedOutputType::Raw) {
								TargetProc.Enumerate(qwMemdmpOptFlags);
							}

						}
						catch (int32_t nError) {
							Interface::Log(3, "- Failed to map address space of %d:%ws (error %d)\r\n", ProcEntry.th32ProcessID, ProcEntry.szExeFile, nError);
							continue;
						}
						/*
						else if (OutputType == SelectedOutputType::Statistics) {
							list<SBlock*> ProcessMem = QueryProcessMem(ProcEntry.th32ProcessID);
							if (MemPermRec == nullptr) {
								MemPermRec = new MemoryPermissionRecord(ProcessMem);
							}
							else {
								MemPermRec->UpdateMap(ProcessMem);
							}
						}*/
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

		Interface::Log("* Scan completed.\r\n");
	}
}