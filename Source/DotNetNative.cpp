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

int32_t QueryDotNetVersion(uint32_t dwPid) {
	int32_t nDotNetVersion = -1;
	wchar_t SectionName[500] = { 0 };
	static NtOpenSection_t NtOpenSection = reinterpret_cast<NtOpenSection_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtOpenSection"));
	static RtlInitUnicodeString_t RtlInitUnicodeString = reinterpret_cast<RtlInitUnicodeString_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "RtlInitUnicodeString"));
	UNICODE_STRING usSectionName = { 0 };
	HANDLE hSection = nullptr;
	OBJECT_ATTRIBUTES ObjAttr = { sizeof(OBJECT_ATTRIBUTES) };
	NTSTATUS NtStatus;

	// The existence of a global section object whose name contains the PID of the queried process is sufficient to determine whether or not it has the CLR loaded, and if so which major version

	_snwprintf_s(SectionName, 500, L"\\BaseNamedObjects\\Cor_Private_IPCBlock_v4_%d", dwPid);
	RtlInitUnicodeString(&usSectionName, SectionName); // RtlInitUnicodeString is only needed for RtlAnsiStringToUnicodeString or RtlAnsiStringToUnicodeString 
	InitializeObjectAttributes(&ObjAttr, &usSectionName, OBJ_CASE_INSENSITIVE, nullptr, nullptr);
	NtStatus = NtOpenSection(&hSection, SECTION_QUERY, &ObjAttr);

	if (NT_SUCCESS(NtStatus)) {
		nDotNetVersion = 4;
		CloseHandle(hSection);
	}
	else if (NtStatus == 0xc0000022) { // Access denied also implies the object exists, which is all I care about.
		nDotNetVersion = 4;
	}

	if (nDotNetVersion == -1) {
		ZeroMemory(&usSectionName, sizeof(usSectionName));
		ZeroMemory(&ObjAttr, sizeof(ObjAttr));
		hSection = nullptr;

		_snwprintf_s(SectionName, 500, L"\\BaseNamedObjects\\Cor_Private_IPCBlock_%d", dwPid);
		RtlInitUnicodeString(&usSectionName, SectionName);
		InitializeObjectAttributes(&ObjAttr, &usSectionName, OBJ_CASE_INSENSITIVE, nullptr, nullptr);
		NtStatus = NtOpenSection(&hSection, SECTION_QUERY, &ObjAttr);

		if (NT_SUCCESS(NtStatus)) {
			nDotNetVersion = 2;
			CloseHandle(hSection);
		}
		else if (NtStatus == 0xc0000022) { // Access denied also implies the object exists, which is all I care about.
			nDotNetVersion = 2;
		}
	}

	return nDotNetVersion;
}
