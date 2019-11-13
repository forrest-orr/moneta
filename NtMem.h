#pragma once
typedef enum _MEMORY_INFORMATION_CLASS
{
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

#pragma pack(push, 8)

typedef struct _MEMORY_REGION_INFORMATION
{
	PVOID AllocationBase;
	ULONG AllocationProtect;
	union
	{
		ULONG RegionType;
		struct
		{
			ULONG Reserved : 17; // Not in original declaration but seems accurate, Win10 x64
			ULONG Private : 1;
			ULONG MappedDataFile : 1;
			ULONG MappedImage : 1;
			ULONG MappedPageFile : 1;
			ULONG MappedPhysical : 1;
			ULONG DirectMapped : 1;
			ULONG SoftwareEnclave : 1; // REDSTONE3
			ULONG PageSize64K : 1;
			ULONG PlaceholderReservation : 1; // REDSTONE4
			ULONG Reserved2 : 6;// 23;
		};
	};
	SIZE_T RegionSize;
	SIZE_T CommitSize;
	ULONG_PTR PartitionId; // 19H1
} MEMORY_REGION_INFORMATION, * PMEMORY_REGION_INFORMATION;

#pragma pack(pop)

typedef NTSTATUS(__stdcall* NtQueryVirtualMemory_t)(HANDLE, void *, MEMORY_INFORMATION_CLASS, void *, SIZE_T, SIZE_T *);