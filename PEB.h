#ifdef _WIN64
#define InLoadOrderModuleListDelta 0
#define InMemoryOrderModuleListDelta 16
#define InInitializationOrderModuleListDelta 32
#else
#define InLoadOrderModuleListDelta 0
#define InMemoryOrderModuleListDelta 8
#define InInitializationOrderModuleListDelta 16
#endif

#pragma pack(push)
#pragma pack(8)

typedef struct _LDR_MODULE
{
	LIST_ENTRY              InLoadOrderModuleList;
	LIST_ENTRY              InMemoryOrderModuleList;
	LIST_ENTRY              InInitializationOrderModuleList;
	void* BaseAddress;
	void* EntryPoint;
	ULONG                   SizeOfImage;
	//uint32_t dwPadding1;
	UNICODE_STRING          FullDllName;
	UNICODE_STRING          BaseDllName;
	ULONG                   Flags;
	SHORT                   LoadCount;
	SHORT                   TlsIndex;
	LIST_ENTRY              HashTableEntry;
	ULONG                   TimeDateStamp;
} LDR_MODULE, * PLDR_MODULE;

#pragma pack(pop)

typedef struct _PROCESS_ENV_BLOCK_LDR_DATA
{
	ULONG                   Length;
	ULONG                   Initialized;
	void* SsHandle;
	LIST_ENTRY              InLoadOrderModuleList;
	LIST_ENTRY              InMemoryOrderModuleList;
	LIST_ENTRY              InInitializationOrderModuleList;
} PROCESS_ENV_BLOCK_LDR_DATA, * PPROCESS_ENV_BLOCK_LDR_DATA;

typedef struct _PROCESS_ENV_BLOCK
{
	BOOLEAN                 InheritedAddressSpace; // 0x0
	BOOLEAN                 ReadImageFileExecOptions; // 0x1
	BOOLEAN                 BeingDebugged; // 0x2
	BOOLEAN                 Spare; // 0x3
#ifdef _WIN64
	uint8_t                    Padding1[4];
#endif
	HANDLE                  Mutant; // 0x4 / 0x8
	void* ImageBase; // 0x8 / 0x10
	PPROCESS_ENV_BLOCK_LDR_DATA           LoaderData; // 0xC / 0x18
	void* ProcessParameters; // 0x10 / 0x20
	void* SubSystemData; // 0x14 / 0x28
	void* ProcessHeap; // 0x18 / 0x30
	void* FastPebLock; // 0x1C / 0x38
	void* FastPebLockRoutine; // 0x20 / 0x40
	void* FastPebUnlockRoutine; // 0x24 / 0x48
	ULONG                   EnvironmentUpdateCount; // 0x28 / 0x50
#ifdef _WIN64
	uint8_t                    Padding2[4]; // 0x54
#endif
	void** KernelCallbackTable; // 0x2C / 0x58
	ULONG                   SystemReserved[2]; // 0x30 / 0x60
	void* pPad; // Adding this fixes API set resolution on Wow64/x64 Win10.
	//void *                  EventLogSection; // 0x30 / 0x60 <- using EventLogSection and EventLog worked on 32-bit because (in newer versions of Windows) there are 2 ULONG here. These values should not exist (they will break 64-bit, off by a qword).
	//void *                  EventLog; // 0x34 / 0x68
	void* ApiSetMap; // 0x68
	ULONG                   TlsExpansionCounter;
	void* TlsBitmap;
	ULONG                   TlsBitmapBits[0x2];
	void* ReadOnlySharedMemoryBase;
	void* ReadOnlySharedMemoryHeap;
	void** ReadOnlyStaticServerData;
	void* AnsiCodePageData;
	void* OemCodePageData;
	void* UnicodeCaseTableData;
	ULONG                   NumberOfProcessors;
	ULONG                   NtGlobalFlag;
	uint8_t                    Spare2[0x4];
	LARGE_INTEGER           CriticalSectionTimeout;
	ULONG                   HeapSegmentReserve;
	ULONG                   HeapSegmentCommit;
	ULONG                   HeapDeCommitTotalFreeThreshold;
	ULONG                   HeapDeCommitFreeBlockThreshold;
	ULONG                   NumberOfHeaps;
	ULONG                   MaximumNumberOfHeaps;
	void*** ProcessHeaps;
	void* GdiSharedHandleTable;
	void* ProcessStarterHelper;
	void* GdiDCAttributeList;
	void* LoaderLock;
	ULONG                   OSMajorVersion;
	ULONG                   OSMinorVersion;
	ULONG                   OSBuildNumber;
	ULONG                   OSPlatformId;
	ULONG                   ImageSubSystem;
	ULONG                   ImageSubSystemMajorVersion;
	ULONG                   ImageSubSystemMinorVersion;
	ULONG                   GdiHandleBuffer[0x22];
	ULONG                   PostProcessInitRoutine;
	ULONG                   TlsExpansionBitmap;
	uint8_t                    TlsExpansionBitmapBits[0x80];
	ULONG                   SessionId;
} PROCESS_ENV_BLOCK, * PPROCESS_ENV_BLOCK;