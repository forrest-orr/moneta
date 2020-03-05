namespace Moneta {
	enum class MemorySelectionType {
		Invalid,
		Block,
		Process,
		Suspicious
	};

	enum class VerbosityLevel {
		Surface,
		Detail
	};

	typedef class Suspicion;

	class Thread {
	public:
		uint32_t GetTid();
		void* GetEntryPoint();
		void SetEntryPoint(void*);
		Thread(uint32_t);
		Thread(uint32_t dwTid, void* pStartAddress);
	protected:
		uint32_t Id;
		void* StartAddress;
	};

	class Process {
	protected:
		uint32_t Pid;
		HANDLE Handle;
		std::wstring Name;
		std::wstring ImageFilePath;
		BOOL Wow64; // bool and BOOL translate to different sizes, IsWow64Process pointed at a bool will corrupt memory.
		std::vector<Thread *> Threads;
		std::map<uint8_t*, Entity*> Entities; // An ablock can only map to one entity by design. If an allocation range has multiple entities in it (such as a PE) then these entities must be encompassed within the parent entity itself by design (such as PE sections)
	public:
		HANDLE GetHandle();
		uint32_t GetPid();
		std::wstring GetName();
		std::wstring GetImageFilePath();
		bool DumpBlock(MemDump &ProcDmp, MEMORY_BASIC_INFORMATION* pMbi, std::wstring Indent);
		BOOL IsWow64();
		Process(uint32_t);
		void Enumerate(uint64_t qwOptFlags, MemorySelectionType MemSelectType, VerbosityLevel VLvl, uint8_t* pSelectSblock = nullptr);
		~Process();
	};
}
