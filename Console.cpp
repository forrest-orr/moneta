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
	/*
	printf(
		"| YourPhone.exe : 4760 : x64\r\n"
		" \\ 0x0000000090bb0000:0x00001000 | Mapped | Page File\r\n"
		"  \\  0x0000019390BB0000:0x00001000 | RW\r\n"
		" _|\r\n"
		" \\ 0x0000000090bc0000:0x00004000 | Mapped | C:\\Users\\Developer\\AppData\\Local\\Microsoft\\Windows\\Caches\\cversions.3.db\r\n"
		"  \\  0x0000019390BC0000:0x00004000 | R\r\n"
		" _|\r\n"
		" \\ 0x0000000090bd0000:0x0000d000 | Non-executable image | C:\\Windows\\System32\\Windows.UI.Xaml.Resources.Common.dll | Signed\r\n"
		"  \\  0x0000019390BD0000:0x0000d000 | R     | Header   | 0x00000000\r\n"
		"  |  0x0000019390BD0000:0x0000d000 | R     | .rdata   | 0x00000000\r\n"
		"  |  0x0000019390BD0000:0x0000d000 | R     | .rsrc    | 0x00000000\r\n"
		" _|  \r\n"
		" \\ 0x0000000061a20000:0x0023a000 | Executable image | C:\\Windows\\SysWOW64\\msmpeg2vdec.dll | Signed\r\n"
		"  \\  0x0000000061A20000:0x00001000 | R     | Header   | 0x00000000\r\n"
		"  |  0x0000000061A21000:0x00215000 | RX    | .text    | 0x00003000 | Modified code\r\n"
		"  |  0x0000000061C36000:0x00001000 | RW    | .data    | 0x00001000\r\n"
		"  |  0x0000000061C37000:0x00002000 | WC    | .data    | 0x00000000\r\n"
		"  |  0x0000000061C39000:0x00004000 | RW    | .data    | 0x00004000\r\n"
		"  |  0x0000000061C43000:0x00017000 | R     | .idata   | 0x00002000\r\n"
		"  |  0x0000000061C43000:0x00017000 | R     | .didat   | 0x00002000\r\n"
		"  |  0x0000000061C43000:0x00017000 | R     | .rsrc    | 0x00002000\r\n"
		"  |  0x0000000061C43000:0x00017000 | R     | .reloc   | 0x00002000\r\n"
	);*/
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

		if (ProcType == SelectedProcessType::InvalidPid) {
			Interface::Log("- Invalid target process type selected\r\n");
			return 0;
		}

		if (OutputType == SelectedOutputType::InvalidOutput) {
			Interface::Log("- Invalid scan output type selected\r\n");
			return 0;
		}

		if ((qwMemdmpOptFlags & MEMDMP_OPT_FLAG_SUSPICIOUS)) {
			MemDump::Initialize();
		}

		if (ProcType == SelectedProcessType::SelfPid || ProcType == SelectedProcessType::SpecificPid) {
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