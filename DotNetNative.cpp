#include "StdAfx.h"

typedef NTSTATUS(NTAPI* NtOpenSection_t)(HANDLE*, ACCESS_MASK, POBJECT_ATTRIBUTES);
typedef void (NTAPI* RtlInitUnicodeString_t)(UNICODE_STRING*, const wchar_t*);

int32_t QueryDotNetVersion(uint32_t dwPid) {
	int32_t nDotNetVersion = -1;
	wchar_t SectionName[500] = { 0 };
	static NtOpenSection_t NtOpenSection = reinterpret_cast<NtOpenSection_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtOpenSection"));
	static RtlInitUnicodeString_t RtlInitUnicodeString = reinterpret_cast<RtlInitUnicodeString_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "RtlInitUnicodeString"));
	UNICODE_STRING usSectionName = { 0 };
	HANDLE hSection = nullptr;
	OBJECT_ATTRIBUTES ObjAttr = { sizeof(OBJECT_ATTRIBUTES) };
	NTSTATUS NtStatus;

	//
	// The existence of a global section object whose name contains the PID of the queried process is sufficient to determine whether or not it has the CLR loaded, and if so which major version
	//

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
	else {
		//printf("... section object does not exist: %wZ\r\n", &usSectionName);
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
		else {
			//printf("... section object does not exist: %wZ\r\n", &usSectionName);
		}
	}

	return nDotNetVersion;
}
