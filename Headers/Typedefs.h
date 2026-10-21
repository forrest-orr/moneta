#define ThreadQuerySetWin32StartAddress 9
#define ThreadBasicInformation 0

// Returned by NtQueryVirtualMemory when an information class is not implemented on the running build. Used by
// Enclave::ValidateSupport to decide whether MemoryEnclaveImageInformation (class 9) can be relied upon.
#ifndef STATUS_INVALID_INFO_CLASS
#define STATUS_INVALID_INFO_CLASS ((NTSTATUS)0xC0000003L)
#endif

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

// Output of NtQueryVirtualMemory(MemoryEnclaveImageInformation) for an address within a VBS enclave image. The two IDs are the
// VBS analogues of SGX MRENCLAVE/MRSIGNER: UniqueID is the measurement of the loaded enclave image, AuthorID derives from its signer.
typedef struct _MEMORY_ENCLAVE_IMAGE_INFORMATION {
	MEMORY_IMAGE_INFORMATION ImageInfo;
	UCHAR UniqueID[32];
	UCHAR AuthorID[32];
} MEMORY_ENCLAVE_IMAGE_INFORMATION, * PMEMORY_ENCLAVE_IMAGE_INFORMATION;

// RegionType bitfield returned by MemoryRegionInformation (class 3) / MemoryRegionInformationEx (class 7).
// The SoftwareEnclave bit (bit 6) is the enclave signal; on current builds it is only reliably populated by
// the Ex class (7), so the enclave probe queries class 7.
typedef union _MEMORY_REGION_INFORMATION_TYPE {
	ULONG RegionType;
	struct {
		ULONG Private : 1;
		ULONG MappedDataFile : 1;
		ULONG MappedImage : 1;
		ULONG MappedPageFile : 1;
		ULONG MappedPhysical : 1;
		ULONG DirectMapped : 1;
		ULONG SoftwareEnclave : 1; // since REDSTONE3
		ULONG PageSize64K : 1;
		ULONG PlaceholderReservation : 1; // since REDSTONE4
		ULONG MappedAwe : 1; // since 21H1
		ULONG MappedWriteWatch : 1;
		ULONG PageSizeLarge : 1;
		ULONG PageSizeHuge : 1;
		ULONG Reserved : 19;
	};
} MEMORY_REGION_INFORMATION_TYPE;

// MEMORY_REGION_INFORMATION in its extended (class 7) form. The trailing PartitionId/NodePreference fields are
// what class 7 adds over class 3; the buffer must be this size for the Ex query to succeed. The union is inline
// and anonymous so RegionType / SoftwareEnclave are accessed directly off the struct.
typedef struct _MEMORY_REGION_INFORMATION {
	PVOID AllocationBase;
	ULONG AllocationProtect;
	union {
		ULONG RegionType;
		struct {
			ULONG Private : 1;
			ULONG MappedDataFile : 1;
			ULONG MappedImage : 1;
			ULONG MappedPageFile : 1;
			ULONG MappedPhysical : 1;
			ULONG DirectMapped : 1;
			ULONG SoftwareEnclave : 1; // since REDSTONE3
			ULONG PageSize64K : 1;
			ULONG PlaceholderReservation : 1;
			ULONG MappedAwe : 1;
			ULONG MappedWriteWatch : 1;
			ULONG PageSizeLarge : 1;
			ULONG PageSizeHuge : 1;
			ULONG Reserved : 19;
		};
	};
	SIZE_T RegionSize;
	SIZE_T CommitSize;
	ULONG_PTR PartitionId;            // Ex (class 7)
	ULONG_PTR NodePreference;         // Ex (class 7)
} MEMORY_REGION_INFORMATION, * PMEMORY_REGION_INFORMATION;

// c/o SystemInformer: https://github.com/winsiderss/systeminformer/blob/e01be6536a74464446687e75b0e34c3988d875d8/phnt/include/ntmmapi.h#L168C1-L229C74
typedef struct _MEMORY_WORKING_SET_EX_BLOCK
{
    union
    {
        struct
        {
            ULONG_PTR Valid : 1;
            ULONG_PTR ShareCount : 3;
            ULONG_PTR Win32Protection : 11;
            ULONG_PTR Shared : 1;
            ULONG_PTR Node : 6;
            ULONG_PTR Locked : 1;
            ULONG_PTR LargePage : 1;
            ULONG_PTR Priority : 3;
            ULONG_PTR Reserved : 3;
            ULONG_PTR SharedOriginal : 1;
            ULONG_PTR Bad : 1;
            ULONG_PTR Win32GraphicsProtection : 4; // 19H1
#ifdef _WIN64
            ULONG_PTR ReservedUlong : 28;
#endif
        };
        struct
        {
            ULONG_PTR Valid : 1;
            ULONG_PTR Reserved0 : 14;
            ULONG_PTR Shared : 1;
            ULONG_PTR Reserved1 : 5;
            ULONG_PTR PageTable : 1;
            ULONG_PTR Location : 2;
            ULONG_PTR Priority : 3;
            ULONG_PTR ModifiedList : 1;
            ULONG_PTR Reserved2 : 2;
            ULONG_PTR SharedOriginal : 1;
            ULONG_PTR Bad : 1;
#ifdef _WIN64
            ULONG_PTR ReservedUlong : 32;
#endif
        } Invalid;
    };
} MEMORY_WORKING_SET_EX_BLOCK, * PMEMORY_WORKING_SET_EX_BLOCK;

typedef struct _MEMORY_WORKING_SET_EX_INFORMATION
{
    PVOID VirtualAddress;
    union
    {
        MEMORY_WORKING_SET_EX_BLOCK VirtualAttributes;
        ULONG_PTR Long;
    };
} MEMORY_WORKING_SET_EX_INFORMATION, * PMEMORY_WORKING_SET_EX_INFORMATION;

typedef struct _THREAD_BASIC_INFORMATION {
	NTSTATUS                ExitStatus;
	PVOID                   TebBaseAddress;
	CLIENT_ID               ClientId;
	KAFFINITY               AffinityMask;
	KPRIORITY               Priority;
	KPRIORITY               BasePriority;
} THREAD_BASIC_INFORMATION, * PTHREAD_BASIC_INFORMATION;

typedef NTSTATUS(__stdcall* NtQueryVirtualMemory_t)(HANDLE, void*, MEMORY_INFORMATION_CLASS, void*, SIZE_T, SIZE_T*);
typedef NTSTATUS(NTAPI* NtQueryInformationThread_t) (HANDLE, THREADINFOCLASS, void*, uint32_t, uint32_t*);
typedef BOOL(WINAPI* IsWow64Process_t) (HANDLE, PBOOL);
typedef NTSTATUS(NTAPI *NtQueryInformationProcess_t)(HANDLE ProcessHandle, PROCESSINFOCLASS ProcessInformationClass, PVOID ProcessInformation, ULONG ProcessInformationLength, PULONG ReturnLength);
typedef NTSTATUS(NTAPI* NtOpenSection_t)(HANDLE*, ACCESS_MASK, POBJECT_ATTRIBUTES);
typedef void (NTAPI* RtlInitUnicodeString_t)(UNICODE_STRING*, const wchar_t*);
typedef NTSTATUS (NTAPI * RtlGetVersion_t)(PRTL_OSVERSIONINFOW lpVersionInformation);
