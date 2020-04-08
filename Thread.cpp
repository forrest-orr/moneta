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
#include "Interface.hpp"
#include "Processes.hpp"
#include "PEB.h"

using namespace std;
using namespace Processes;

Thread::Thread(uint32_t dwTid, Processes::Process &OwnerProc) : Id(dwTid) {
	HANDLE hThread = OpenThread(THREAD_QUERY_INFORMATION, false, this->Id); // OpenThreadToken consistently failed even with impersonation (ERROR_NO_TOKEN). The idea was abandoned due to lack of relevance. Get-InjectedThread returns the user as SYSTEM even when it was a regular user which launched the remote thread.

	if (hThread != nullptr) {
		static NtQueryInformationThread_t NtQueryInformationThread = reinterpret_cast<NtQueryInformationThread_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtQueryInformationThread"));
		void* pStartAddress = nullptr;
		HANDLE hDupThread = nullptr;

		if (DuplicateHandle(GetCurrentProcess(), hThread, GetCurrentProcess(), &hDupThread, THREAD_QUERY_INFORMATION, FALSE, 0)) { // Without duplicating this handle NtQueryInformationThread will consistently fail to query the start address.
			NTSTATUS NtStatus = NtQueryInformationThread(hDupThread, static_cast<THREADINFOCLASS>(ThreadQuerySetWin32StartAddress), &pStartAddress, sizeof(pStartAddress), nullptr);
			THREAD_BASIC_INFORMATION Tbi = { 0 };

			if (NT_SUCCESS(NtStatus)) {
				this->StartAddress = pStartAddress;
			}

			NtStatus = NtQueryInformationThread(hDupThread, static_cast<THREADINFOCLASS>(ThreadBasicInformation), &Tbi, sizeof(THREAD_BASIC_INFORMATION), nullptr);

			if (NT_SUCCESS(NtStatus)) {
				Interface::Log(VerbosityLevel::Debug, "... TEB of 0x%p\r\n", Tbi.TebBaseAddress);
				this->TebAddress = Tbi.TebBaseAddress;

				if (OwnerProc.IsWow64()) {
					TEB32* LocalTeb = new TEB32;
					uint32_t dwTebSize = sizeof(TEB32);

					if (ReadProcessMemory(OwnerProc.GetHandle(), Tbi.TebBaseAddress, LocalTeb, dwTebSize, nullptr)) {
						//Interface::Log(VerbosityLevel::Debug, "... successfully read remote TEB to local memory.\r\n");
						Interface::Log(VerbosityLevel::Debug, "... stack base: 0x%08x\r\n", LocalTeb->StackBase);
						this->StackAddress = reinterpret_cast<void*>(LocalTeb->StackBase);
					}
					else {
						throw 4;
					}

					delete LocalTeb;
				}
				else {
					TEB64* LocalTeb = new TEB64;
					uint32_t dwTebSize = sizeof(TEB64);

					if (ReadProcessMemory(OwnerProc.GetHandle(), Tbi.TebBaseAddress, LocalTeb, dwTebSize, nullptr)) {
						//Interface::Log(VerbosityLevel::Debug, "... successfully read remote TEB to local memory.\r\n");
						Interface::Log(VerbosityLevel::Debug, "... stack base: 0x%p\r\n", LocalTeb->StackBase);
						this->StackAddress = LocalTeb->StackBase;
					}
					else {
						throw 4;
					}

					delete LocalTeb;
				}
			}
			else {
				throw 3;
			}

			CloseHandle(hDupThread);
		}
		else {
			throw 2;
		}

		CloseHandle(hThread);
	}
	else {
		throw 1;
	}
}
