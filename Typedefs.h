typedef enum _MEMORY_INFORMATION_CLASS {
	MemoryBasicInformation, // MEMORY_BASIC_INFORMATION
	MemoryWorkingSetInformation, // MEMORY_WORKING_SET_INFORMATION
	MemoryMappedFilenameInformation, // UNICODE_STRING
	MemoryRegionInformation, // MEMORY_REGION_INFORMATION
	MemoryWorkingSetExInformation, // MEMORY_WORKING_SET_EX_INFORMATION
	MemorySharedCommitInformation, // MEMORY_SHARED_COMMIT_INFORMATION
	MemoryImageInformation, // MEMORY_IMAGE_INFORMATION
	MemoryRegionInformationEx,
	MemoryPrivilegedBasicInformation,
	MemoryEnclaveImageInformation, // MEMORY_ENCLAVE_IMAGE_INFORMATION // since REDSTONE3
	MemoryBasicInformationCapped
} MEMORY_INFORMATION_CLASS;

typedef struct _MEMORY_IMAGE_INFORMATION {
	PVOID ImageBase;
	SIZE_T SizeOfImage;
	union {
		ULONG ImageFlags;
		struct {
			ULONG ImagePartialMap : 1;
			ULONG ImageNotExecutable : 1;
			ULONG ImageSigningLevel : 4; // REDSTONE3
			ULONG Reserved : 26;
		};
	};
} MEMORY_IMAGE_INFORMATION, * PMEMORY_IMAGE_INFORMATION;

typedef NTSTATUS(__stdcall* NtQueryVirtualMemory_t)(HANDLE, void*, MEMORY_INFORMATION_CLASS, void*, SIZE_T, SIZE_T*);
typedef NTSTATUS(NTAPI* NtQueryInformationThread_t) (HANDLE, THREADINFOCLASS, void*, uint32_t, uint32_t*);
typedef BOOL(WINAPI* ISWOW64PROCESS) (HANDLE, PBOOL);