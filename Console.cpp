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
#include "Interface.hpp"

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

//#define DEBUG

int32_t wmain(int32_t nArgc, const wchar_t* pArgv[]) {
	vector<wstring> Args(&pArgv[0], &pArgv[0 + nArgc]);
	Interface::Initialize(Args);
	SYSTEM_INFO SystemInfo = { 0 };
	typedef BOOL(WINAPI* ISWOW64PROCESS) (HANDLE, PBOOL);
	static ISWOW64PROCESS IsWow64Process = (ISWOW64PROCESS)GetProcAddress(GetModuleHandleW(L"Kernel32.dll"), "IsWow64Process");

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
		Interface::Log("* Usage: %ws --target (PID) --output-type (see remarks)\r\n\r\n"
			"  Remarks:\r\n"
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
		}

		if (ProcType == SelectedProcessType::InvalidPid) {
			Interface::Log("- Invalid target process type selected\r\n");
			return 0;
		}

		if (OutputType == SelectedOutputType::InvalidOutput) {
			Interface::Log("- Invalid scan output type selected\r\n");
			return 0;
		}

		if (ProcType == SelectedProcessType::SelfPid) {
			wchar_t SelfPath[MAX_PATH + 1] = { 0 };
			GetModuleFileNameW(NULL, SelfPath, MAX_PATH + 1);
			Process TargetProc(dwSelectedPid);
			//list<MemoryBlock*> ProcessMem = QueryProcessMem(dwSelectedPid);

			if (OutputType == SelectedOutputType::Raw) {
				TargetProc.Enumerate();
			}
			else if (OutputType == SelectedOutputType::Statistics) {
				//MemoryPermissionRecord* MemPermRec = new MemoryPermissionRecord(TargetProc.GetBlocks());
				//MemPermRec->ShowRecords();
			}
		}
		if (ProcType == SelectedProcessType::SpecificPid) {
			//wchar_t SelfPath[MAX_PATH + 1] = { 0 };
			//GetProcessImageFileNameW();
			Process TargetProc(dwSelectedPid);
			//list<MemoryBlock*> ProcessMem = QueryProcessMem(dwSelectedPid);

			if (OutputType == SelectedOutputType::Raw) {
				TargetProc.Enumerate();
			}
			else if (OutputType == SelectedOutputType::Statistics) {
				//MemoryPermissionRecord* MemPermRec = new MemoryPermissionRecord(TargetProc.GetBlocks());
				//MemPermRec->ShowRecords();
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
								TargetProc.Enumerate();
							}

						}
						catch (int32_t nError) {
							Interface::Log(3, "- Failed to map address space of %d:%ws (error %d)\r\n", ProcEntry.th32ProcessID, ProcEntry.szExeFile, nError);
							continue;
						}
						/*
						else if (OutputType == SelectedOutputType::Statistics) {
							list<MemoryBlock*> ProcessMem = QueryProcessMem(ProcEntry.th32ProcessID);
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
	}
}