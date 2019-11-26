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
#include "Moneta.hpp"

using namespace std;

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

int32_t wmain(int32_t nArgc, const wchar_t* pArgv[]) {
	if (nArgc < 5) {
		printf("* Usage: %ws --target (PID) --output-type (see remarks) --base-address (scans only the memory in the region address specified)\r\n\r\n"
			"  Remarks:\r\n"
			"  ~ PID field may be \"self\" to target the current process, an arbitrart PID, or \"*\" to target all accessible processes.\r\n"
			"  ~ Output type field may be \"raw\" to display all queried memory info for each region, or may be \"stats\" to gather statistically common memory characteristics among the target(s)\r\n", pArgv[0]);
	}
	else {
		SelectedProcessType ProcType = SelectedProcessType::InvalidPid;
		SelectedOutputType OutputType = SelectedOutputType::InvalidOutput;
		uint32_t dwSelectedPid = 0;

		for (int32_t nX = 0; nX < nArgc; nX++) {
			if (_wcsicmp(pArgv[nX], L"--target") == 0) {
				if (_wcsicmp(pArgv[nX + 1], L"self") == 0) {
					ProcType = SelectedProcessType::SelfPid;
					dwSelectedPid = GetCurrentProcessId();
				}
				else if (_wcsicmp(pArgv[nX + 1], L"*") == 0) {
					ProcType = SelectedProcessType::AllPids;
				}
				else {
					ProcType = SelectedProcessType::SpecificPid;
					dwSelectedPid = _wtoi(pArgv[nX + 1]);
				}
			}
			else if (_wcsicmp(pArgv[nX], L"--output-type") == 0) {
				if (_wcsicmp(pArgv[nX + 1], L"raw") == 0) {
					OutputType = SelectedOutputType::Raw;
				}
				else if (_wcsicmp(pArgv[nX + 1], L"stats") == 0) {
					OutputType = SelectedOutputType::Statistics;
				}
			}
		}

		if (ProcType == SelectedProcessType::InvalidPid) {
			printf("- Invalid target process type selected\r\n");
			return 0;
		}

		if (OutputType == SelectedOutputType::InvalidOutput) {
			printf("- Invalid scan output type selected\r\n");
			return 0;
		}

		if (ProcType == SelectedProcessType::SpecificPid || ProcType == SelectedProcessType::SelfPid) {
			Moneta ProcAddressSpace(dwSelectedPid);
			//list<MemoryBlock*> ProcessMem = QueryProcessMem(dwSelectedPid);

			if (OutputType == SelectedOutputType::Raw) {
				ProcAddressSpace.Enumerate();
			}
			else if (OutputType == SelectedOutputType::Statistics) {
				MemoryPermissionRecord* MemPermRec = new MemoryPermissionRecord(ProcAddressSpace.GetBlocks());
				MemPermRec->ShowRecords();
			}
		}/*
		else {
			PROCESSENTRY32W ProcEntry = { 0 };
			HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
			MemoryPermissionRecord* MemPermRec = nullptr;

			if (hSnapshot != nullptr) {
				ProcEntry.dwSize = sizeof(PROCESSENTRY32W);

				if (Process32FirstW(hSnapshot, &ProcEntry)) {
					do
					{
						if (OutputType == SelectedOutputType::Raw) {
							EnumProcessMem(ProcEntry.th32ProcessID);
						}
						else if (OutputType == SelectedOutputType::Statistics) {
							list<MemoryBlock*> ProcessMem = QueryProcessMem(ProcEntry.th32ProcessID);
							if (MemPermRec == nullptr) {
								MemPermRec = new MemoryPermissionRecord(ProcessMem);
							}
							else {
								MemPermRec->UpdateMap(ProcessMem);
							}
						}
					} while (Process32NextW(hSnapshot, &ProcEntry));
				}

				CloseHandle(hSnapshot);
			}
			else
			{
				printf("- Failed to create process list snapshot (error %d)\r\n", GetLastError());
			}

			if (MemPermRec != nullptr) {
				MemPermRec->ShowRecords();
			}
		}*/
	}
}