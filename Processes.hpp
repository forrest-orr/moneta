typedef enum class VerbosityLevel;
typedef class Suspicion;
namespace Memory {
	typedef class Subregion;
	typedef class Entity;
}
typedef class MemDump;

namespace Processes {
	enum class MemorySelection_t {
		Invalid,
		Block,
		All,
		Suspicious
	};

	class Thread {
	public:
		uint32_t GetTid() const { return this->Id; }
		const void* GetEntryPoint() const { return this->StartAddress; }
		void SetEntryPoint(const void*);
		Thread(uint32_t);
		Thread(uint32_t dwTid, const void* pStartAddress);
	protected:
		uint32_t Id;
		const void* StartAddress;
	};

	class Process {
	protected:
		uint32_t Pid;
		HANDLE Handle;
		std::wstring Name;
		std::wstring ImageFilePath;
		BOOL Wow64; // bool and BOOL translate to different sizes, IsWow64Process pointed at a bool will corrupt memory.
		std::vector<Thread*> Threads;
		std::vector<void*> Heaps;
		std::map<uint8_t*, Memory::Entity*> Entities; // A region can only map to one entity by design. If an allocation range has multiple entities in it (such as a PE) then these entities must be encompassed within the parent entity itself by design (such as PE sections)
	public:
		HANDLE GetHandle() const { return this->Handle; }
		uint32_t GetPid() const { return this->Pid; }
		std::wstring GetName() const { return this->Name; }
		std::wstring GetImageFilePath() const { return this->ImageFilePath; }
		bool DumpBlock(MemDump& ProcDmp, const MEMORY_BASIC_INFORMATION* Mbi, std::wstring Indent);
		BOOL IsWow64() const { return this->Wow64; }
		Process(uint32_t);
		std::vector<Memory::Subregion*> Enumerate(uint64_t qwOptFlags, MemorySelection_t MemSelectType, const uint8_t* pSelectAddress = nullptr);
		~Process();
	};
}

#define PROCESS_ENUM_FLAG_MEMDUMP 0x1
#define PROCESS_ENUM_FLAG_FROM_BASE 0x2
#define PROCESS_ENUM_FLAG_STATISTICS 0x4