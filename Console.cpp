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
#include "DotNetNative.h"

using namespace std;
using namespace Memory;
using namespace Processes;

enum class SelectedProcess_t {
	InvalidPid = 0,
	SpecificPid,
	AllPids,
	SelfPid
};

void ScanPrvRwx(Processes::Process * ProcessObj) {
	//
// For each entity which is private and partially executable, print whether or not it is partially .NET - then run hunt scan on its base address via command line
//
	map<uint8_t*, Entity*> Entities = ProcessObj->GetEntities();

	for (map<uint8_t*, Entity*>::const_iterator EntItr = Entities.begin(); EntItr != Entities.end(); ++EntItr) {
		if (EntItr->second->GetSubregions().front()->GetBasic()->Type == MEM_PRIVATE) {
			if (EntItr->second->IsPartiallyExecutable()) {

				Interface::Log("... private +x region at 0x%p(+%d)\r\n", EntItr->second->GetStartVa(), EntItr->second->GetEntitySize());
				Interface::Log("    native .NET: %ws\r\n", EntItr->second->ContainsFlag(MEMORY_SUBREGION_FLAG_DOTNET) ? L"yes" : L"no");
				char Command[1000] = { 0 };  // FOUND IT https://github.com/HarmJ0y/KeeThief/blob/53d4b81c8efe19bbf1163ed257a17bc7b09f6fe6/KeeTheft/ClrMD/src/Microsoft.Diagnostics.Runtime/Desktop/runtimebase.cs this is the source code of C# EnumerateMemoryRegions. It is NOT the same as native
				sprintf_s(Command, sizeof(Command), "C:\\Users\\Forrest\\Documents\\GitHub\\HuntManagedAddress\\HuntManagedAddress\\bin\\x64\\Release\\HuntManagedAddress.exe --mode scan --pid %d --address 0x%p --size %d", ProcessObj->GetPid(), EntItr->second->GetStartVa(), EntItr->second->GetEntitySize());
				Interface::Log(VerbosityLevel::Surface, "... executing command: %s\r\n", Command);
				system(Command);

				//if (ProcessObj->SearchDataRefAllocBases(static_cast<const uint8_t*>(EntItr->second->GetStartVa()), 0) > 0) {
				if (ProcessObj->SearchDataRefAllocBases(static_cast<const uint8_t*>(EntItr->second->GetStartVa()), EntItr->second->GetEntitySize()) > 0) {
					Interface::Log(VerbosityLevel::Surface, "... private executable region at 0x%p has references within .data section\r\n", EntItr->second->GetStartVa());
				}
				else {
					//Interface::Log(VerbosityLevel::Surface, "... private executable region at 0x%p does NOT have references within clr.dll .data section\r\n", EntItr->second->GetStartVa());
					Interface::Log(VerbosityLevel::Surface, "... private executable region at 0x%p does NOT have references within a .NET .data section\r\n", EntItr->second->GetStartVa());
				}
				Interface::Log("\r\n\r\n");
			}
		}
	}
	system("pause");
}

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
		uint32_t dwSelectedPid = 0, dwRegionSize = 0;
		uint8_t* pAddress = nullptr;
		vector<Filter_t> Filters;

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
			else if (Arg == L"--region-size") {
				dwRegionSize = _wtoi((*(i + 1)).c_str());
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
			else if (Arg == L"--filter") {
				for (vector<wstring>::const_iterator FilterItr = i; FilterItr != Args.end(); ++FilterItr) {
					wstring FilterArg = *FilterItr;
					transform(FilterArg.begin(), FilterArg.end(), FilterArg.begin(), ::tolower);

					if (FilterArg == L"unsigned-modules") {
						Filters.push_back(Filter_t::UnsignedModules);
					}
					else if (FilterArg == L"metadata-modules") {
						Filters.push_back(Filter_t::MetadataModules);
					}
					else if (FilterArg == L"clr-prv-rwx") {
						Filters.push_back(Filter_t::ClrPrvRwxRegion);
					}
					else if (FilterArg == L"clr-heap") {
						Filters.push_back(Filter_t::ClrPrvRwxHeap);
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

		ScannerContext ScannerCtx(qwOptFlags, MemorySelectionType, pAddress, dwRegionSize, Filters);
		uint64_t qwStartTick = GetTickCount64();

		if (ProcType == SelectedProcess_t::SelfPid || ProcType == SelectedProcess_t::SpecificPid) {
			try {
				Process TargetProc(dwSelectedPid);
				int32_t nDotNetVersion = QueryDotNetVersion(dwSelectedPid);
				void* pMscordacwksDllBase = LoadMscordacwksDll(nDotNetVersion, false); // Wow64 for the current process, not the target process since it is this tool itself which must load the DAC DLL
				EnumerateClrMemoryRegions(&TargetProc, (HMODULE)pMscordacwksDllBase);
				ScanPrvRwx(&TargetProc);
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