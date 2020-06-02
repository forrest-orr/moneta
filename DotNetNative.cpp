#include "StdAfx.h"

#include "Interface.hpp"
#include "Processes.hpp"
#include "Memory.hpp"

using namespace std;
using namespace Memory;
using namespace Processes;

#pragma comment(lib, "CorGuids.lib")

typedef NTSTATUS(NTAPI* NtOpenSection_t)(HANDLE*, ACCESS_MASK, POBJECT_ATTRIBUTES);
typedef void (NTAPI* RtlInitUnicodeString_t)(UNICODE_STRING*, const wchar_t*);
typedef void (NTAPI* RtlFreeUnicodeString_t)(UNICODE_STRING*);

int32_t QueryDotNetVersion(uint32_t dwPid) {
	int32_t nDotNetVersion = -1;
	wchar_t SectionName[500] = { 0 };
	static NtOpenSection_t NtOpenSection = reinterpret_cast<NtOpenSection_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "NtOpenSection"));
	static RtlInitUnicodeString_t RtlInitUnicodeString = reinterpret_cast<RtlInitUnicodeString_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "RtlInitUnicodeString"));
	//static RtlFreeUnicodeString_t RtlFreeUnicodeString = reinterpret_cast<RtlFreeUnicodeString_t>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "RtlFreeUnicodeString")); // Only needed for RtlAnsiStringToUnicodeString or RtlAnsiStringToUnicodeString 
	UNICODE_STRING usSectionName = { 0 };
	HANDLE hSection = nullptr;
	OBJECT_ATTRIBUTES ObjAttr = { sizeof(OBJECT_ATTRIBUTES) };
	NTSTATUS NtStatus;

	//
	// The existence of a global section object whose name contains the PID of the queried process is sufficient to determine whether or not it has the CLR loaded, and if so which major version
	//

	_snwprintf_s(SectionName, 500, L"\\BaseNamedObjects\\Cor_Private_IPCBlock_v4_%d", dwPid);
	RtlInitUnicodeString(&usSectionName, SectionName);
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
		printf("... section object does not exist: %wZ\r\n", &usSectionName);
	}

	//RtlFreeUnicodeString(&usSectionName);

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
			printf("... section object does not exist: %wZ\r\n", &usSectionName);
		}

		//RtlFreeUnicodeString(&usSectionName);
	}

	return nDotNetVersion;
}

void* LoadMscordacwksDll(int32_t nDotNetVersion, bool bIsWow64) {
	void* pModuleBase;
	wchar_t MscordacwksPath[MAX_PATH + 1] = { 0 };

	LoadLibraryW(L"mscoree.dll"); // Needed for initialization prior to loading mscordacwks.dll
	GetWindowsDirectoryW(MscordacwksPath, MAX_PATH + 1);

	if (nDotNetVersion == 4) {
		if (bIsWow64) {
			wcscat_s(MscordacwksPath, MAX_PATH + 1, L"\\Microsoft.NET\\Framework\\v4.0.30319\\mscordacwks.dll");
		}
		else {
			wcscat_s(MscordacwksPath, MAX_PATH + 1, L"\\Microsoft.NET\\Framework64\\v4.0.30319\\mscordacwks.dll");
		}
	}
	else if (nDotNetVersion == 2) {
		if (bIsWow64) {
			wcscat_s(MscordacwksPath, MAX_PATH + 1, L"\\Microsoft.NET\\Framework\\v2.0.50727\\mscordacwks.dll");
		}
		else {
			wcscat_s(MscordacwksPath, MAX_PATH + 1, L"\\Microsoft.NET\\Framework64\\v2.0.50727\\mscordacwks.dll");
		}
	}
	else {
		printf("... unhandled .NET framework version for target process\r\n");
		return nullptr;
	}

	pModuleBase = LoadLibraryW(MscordacwksPath);

	if (pModuleBase != nullptr) {
		printf("... successfully loaded %ws to 0x%p\r\n", MscordacwksPath, pModuleBase);
	}
	else {
		printf("... failed to load %ws to 0x%p\r\n", MscordacwksPath, pModuleBase);
	}

	return pModuleBase;
}

class CustomCLRDataTarget : public ICLRDataTarget
{
private:


public:
	CustomCLRDataTarget(Process* ProcessObj) : ProcessObj(ProcessObj) {}

public:

	HRESULT STDMETHODCALLTYPE QueryInterface(
		/* [in] */ REFIID riid,
		/* [iid_is][out] */ PVOID* ppvObject)
	{
		if (
			IsEqualIID(riid, IID_IUnknown) ||
			IsEqualIID(riid, IID_ICLRDataTarget)
			)
		{
			printf("... known ICLRDataTarget QueryInterface called\r\n");
			this->AddRef();
			*ppvObject = this;
			return S_OK;
		}
		else
		{
			printf("... unknown ICLRDataTarget QueryInterface called\r\n");
			GUID guid;
			CoCreateGuid(&guid);

			OLECHAR* guidString;
			StringFromCLSID(guid, &guidString);
			printf("%ws\r\n", guidString);

			// use guidString...

			// ensure memory is freed
			::CoTaskMemFree(guidString);
			*ppvObject = NULL;
			return E_NOINTERFACE;
		}
	}

	ULONG STDMETHODCALLTYPE AddRef(void)
	{
		return 1;
	}

	ULONG STDMETHODCALLTYPE Release(void)
	{
		return 0;
	}

public:
	virtual HRESULT STDMETHODCALLTYPE GetMachineType(
		/* [out] */ ULONG32* machineType)
	{
		if (this->ProcessObj->IsWow64()) {
			printf("... IClrDataTarget!GetMachineType Wow64 machine type\r\n");
			*machineType = IMAGE_FILE_MACHINE_AMD64;// IMAGE_FILE_MACHINE_I386;
		}
		else {
			*machineType = IMAGE_FILE_MACHINE_AMD64;
		}

		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE GetPointerSize(
		/* [out] */ ULONG32* pointerSize)
	{
		if (this->ProcessObj->IsWow64()) {
			printf("... IClrDataTarget!GetPointerSize Wow64 type\r\n");
			*pointerSize = 8;
		}
		else {
			*pointerSize = 8;
		}

		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE GetImageBase(
		/* [string][in] */ LPCWSTR imagePath,
		/* [out] */ CLRDATA_ADDRESS* baseAddress)
	{
		PeVm::Body* Module;
		printf("... custom GetImageBase called with image path of %ws\r\n", imagePath);

		if ((Module = this->ProcessObj->GetLoadedModule(imagePath)) != nullptr) {
			printf("... successfully resolved a base address of 0x%p for module %ws\r\n", Module->GetPebModule().GetBase(), Module->GetPebModule().GetName().c_str());
			*baseAddress = reinterpret_cast<CLRDATA_ADDRESS>(const_cast<uint8_t*>(Module->GetPebModule().GetBase()));
		}

		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE ReadVirtual(
		/* [in] */ CLRDATA_ADDRESS address,
		/* [length_is][size_is][out] */ BYTE* buffer,
		/* [in] */ ULONG32 bytesRequested,
		/* [out] */ ULONG32* pdwBytesRead)
	{
		//printf("... custom ReadVirtual called\r\n");
		SIZE_T cbBytesRead = 0;
		if (ReadProcessMemory(this->ProcessObj->GetHandle(), (void*)address, buffer, bytesRequested, &cbBytesRead)) {
			printf("... ICLRDataTarget!ReadVirtual ReadProcessMemory success (%d bytes)\r\n", cbBytesRead);
			*pdwBytesRead = cbBytesRead;
			return S_OK;
		}
		else {
			printf("... ICLRDataTarget!ReadVirtual ReadProcessMemory failed\r\n");
		}

		return S_FALSE;
	}

	virtual HRESULT STDMETHODCALLTYPE WriteVirtual(
		/* [in] */ CLRDATA_ADDRESS address,
		/* [size_is][in] */ BYTE* buffer,
		/* [in] */ ULONG32 bytesRequested,
		/* [out] */ ULONG32* bytesWritten)
	{
		printf("WriteVirtual\r\n");
		throw;
	}

	virtual HRESULT STDMETHODCALLTYPE GetTLSValue(
		/* [in] */ ULONG32 threadID,
		/* [in] */ ULONG32 index,
		/* [out] */ CLRDATA_ADDRESS* value)
	{
		printf("GetTLSValue\r\n");
		throw;
	}

	virtual HRESULT STDMETHODCALLTYPE SetTLSValue(
		/* [in] */ ULONG32 threadID,
		/* [in] */ ULONG32 index,
		/* [in] */ CLRDATA_ADDRESS value)
	{
		printf("SetTLSValue\r\n");
		throw;
	}

	virtual HRESULT STDMETHODCALLTYPE GetCurrentThreadID(
		/* [out] */ ULONG32* threadID)
	{
		printf("GetCurrentThreadID\r\n");
		throw;
	}

	virtual HRESULT STDMETHODCALLTYPE GetThreadContext(
		/* [in] */ ULONG32 dwTid,
		/* [in] */ ULONG32 contextFlags,
		/* [in] */ ULONG32 contextSize,
		/* [size_is][out] */ BYTE* context)
	{
		printf("... GetThreadContext\r\n");
		vector<Processes::Thread*> Threads = this->ProcessObj->GetThreads();
		HANDLE hThread = nullptr;

		for (vector<Processes::Thread*>::const_iterator Itr = Threads.begin(); Itr != Threads.end(); ++Itr) {
			if ((*Itr)->GetTid() == dwTid) {
				hThread = (*Itr)->GetHandle();
			}
		}

		if (hThread != nullptr) {
			if (::GetThreadContext(hThread, (LPCONTEXT)context)) {
				printf("... GetThreadContext successful\r\n");
				return S_OK;
			}
			else {
				printf("... GetThreadContext failed\r\n");
			}
		}

		return S_FALSE;
	}

	virtual HRESULT STDMETHODCALLTYPE SetThreadContext(
		/* [in] */ ULONG32 threadID,
		/* [in] */ ULONG32 contextSize,
		/* [size_is][in] */ BYTE* context)
	{
		printf("SetThreadContext\r\n");
		throw;
	}

	virtual HRESULT STDMETHODCALLTYPE Request(
		/* [in] */ ULONG32 reqCode,
		/* [in] */ ULONG32 inBufferSize,
		/* [size_is][in] */ BYTE* inBuffer,
		/* [in] */ ULONG32 outBufferSize,
		/* [size_is][out] */ BYTE* outBuffer)
	{
		printf("Request\r\n");
		throw;
	}

	Process* ProcessObj;
};

bool EnumerateClrMemoryRegions(Process* ProcessObj, HMODULE hMscordacwksDll) {
	ICLRDataTarget* ClrDataTarget = new CustomCLRDataTarget(ProcessObj);

	if (ClrDataTarget != nullptr) {
		//printf("... successfully initialized ICLRDataTarget interface\r\n");
		PFN_CLRDataCreateInstance ClrDataCreateInstance = reinterpret_cast<PFN_CLRDataCreateInstance>(GetProcAddress(hMscordacwksDll, "CLRDataCreateInstance"));
		IXCLRDataProcess* DacInterface = nullptr;
		HRESULT hRes = ClrDataCreateInstance(IID_IXCLRDataProcess, ClrDataTarget, reinterpret_cast<void**>(&DacInterface));

		if (SUCCEEDED(hRes)) {
			printf("... successfully resolved IXCLRDataProcess interface to 0x%p\r\n", DacInterface);
			//hRes = DacInterface->Request();

			if (SUCCEEDED(hRes)) {
				//
			}
			else {
				//
			}
		}
		else {
			printf("... failed to resolve IXCLRDataProcess interface (error 0x%08x)\r\n", hRes);
		}
	}
	else {
		printf("... failed to initialize ICLRDataTarget interface\r\n");
	}

	return true;
}