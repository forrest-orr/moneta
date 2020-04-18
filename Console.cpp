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
#include "Processes.hpp"
#include "Memory.hpp"
#include "Interface.hpp"
#include "MemDump.hpp"
#include "Scanner.hpp"
#include "Privileges.h"

using namespace std;
using namespace Memory;
using namespace Processes;

enum class SelectedProcess_t {
	InvalidPid = 0,
	SpecificPid,
	AllPids,
	SelfPid
};

int32_t wmain(int32_t nArgc, const wchar_t* pArgv[]) {
	vector<wstring> Args(&pArgv[0], &pArgv[0 + nArgc]);
	Interface::Initialize(Args);
	//for (uint32_t dwX = 0; dwX < 100; dwX++)Interface::Log((ConsoleColor)dwX, "%d ", dwX);
	//Interface::Log("\r\n");
	//system("pause");
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
	static IsWow64Process_t IsWow64Process = reinterpret_cast<IsWow64Process_t>(GetProcAddress(GetModuleHandleW(L"Kernel32.dll"), "IsWow64Process"));
	uint64_t qwOptFlags = 0;
	
	if (IsWow64Process != nullptr) {
		BOOL bSelfWow64 = FALSE;

		if (IsWow64Process(GetCurrentProcess(), static_cast<PBOOL>(&bSelfWow64))) {
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
		MemorySelection_t MemorySelectionType = MemorySelection_t::Invalid;
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
					MemorySelectionType = MemorySelection_t::Block;
				}
				else if (*(i + 1) == L"*") {
					MemorySelectionType = MemorySelection_t::All;
				}
				else if (*(i + 1) == L"suspicious") {
					MemorySelectionType = MemorySelection_t::Suspicious;
				}
				else if (*(i + 1) == L"referenced") {
					MemorySelectionType = MemorySelection_t::Referenced;
				}
			}
			else if (Arg == L"--address") {
				pAddress = reinterpret_cast<uint8_t *>(wcstoull((*(i + 1)).c_str(), NULL, 0));
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
			Interface::Log("... invalid target process type selected\r\n");
			return 0;
		}

		if (MemorySelectionType == MemorySelection_t::Invalid) {
			Interface::Log("... invalid memory selection type\r\n");
			return 0;
		}

		if ((MemorySelectionType == MemorySelection_t::Referenced || MemorySelectionType == MemorySelection_t::Block) && pAddress == nullptr) {
			Interface::Log("... address must be specified for the provided memory selection type.\r\n");
			return 0;
		}

		//
		// Initialization
		//

		if (GrantSelfSeDebug()) {
			Interface::Log(VerbosityLevel::Debug, "... successfully granted SeDebug privilege to self\r\n");
		}
		else {
			Interface::Log("... failed to grant SeDebug privilege to self. Certain processes will be inaccessible.\r\n");
		}

		if ((qwOptFlags & PROCESS_ENUM_FLAG_MEMDUMP)) {
			MemDump::Initialize();
		}

		//
		// Analyze processes and generate memory maps/suspicions
		//

		ScannerContext ScannerCtx(qwOptFlags, MemorySelectionType, pAddress);
		uint64_t qwStartTick = GetTickCount64();

		if (ProcType == SelectedProcess_t::SelfPid || ProcType == SelectedProcess_t::SpecificPid) {
			try {
				Process TargetProc(dwSelectedPid);
				vector<Subregion*> SelectedSbrs = TargetProc.Enumerate(ScannerCtx);

				if ((qwOptFlags & PROCESS_ENUM_FLAG_STATISTICS)) {
					PermissionRecord* MemPermRec = new PermissionRecord(SelectedSbrs);
					MemPermRec->ShowRecords();
				}
			}
			catch (int32_t nError) {
				Interface::Log("... failed to map address space of %d (error %d)\r\n", dwSelectedPid, nError);
			}
		}
		else {
			PROCESSENTRY32W ProcEntry = { 0 };
			HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
			PermissionRecord* MemPermRec = nullptr;

			if (hSnapshot != nullptr) {
				ProcEntry.dwSize = sizeof(PROCESSENTRY32W);

				if (Process32FirstW(hSnapshot, &ProcEntry)) {
					do {
						try {
							Process TargetProc(ProcEntry.th32ProcessID);
							vector<Subregion*> SelectedSbrs = TargetProc.Enumerate(ScannerCtx);

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
							Interface::Log(VerbosityLevel::Debug, "... failed to map address space of %d:%ws (error %d)\r\n", ProcEntry.th32ProcessID, ProcEntry.szExeFile, nError);
							continue;
						}
					} while (Process32NextW(hSnapshot, &ProcEntry));
				}

				CloseHandle(hSnapshot);
			}
			else
			{
				Interface::Log("... failed to create process list snapshot (error %d)\r\n", GetLastError());
			}

			if (MemPermRec != nullptr) {
				MemPermRec->ShowRecords();
			}
		}

		float fElapsedTime = GetTickCount64() - qwStartTick;
		Interface::Log("\r\n... scan completed (%f second duration)\r\n", fElapsedTime / 1000.0);
		return 1;
	}
}