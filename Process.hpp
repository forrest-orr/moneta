enum class MemorySelectionType {
	Invalid,
	Block,
	All,
	Suspicious
};

enum class VerbosityLevel {
	Surface,
	Detail
};

typedef class Suspicion;
namespace Memory {
	typedef class Subregion;
	typedef class Entity;
}
typedef class MemDump;
typedef class Thread;

class Process {
protected:
	uint32_t Pid;
	HANDLE Handle;
	std::wstring Name;
	std::wstring ImageFilePath;
	BOOL Wow64; // bool and BOOL translate to different sizes, IsWow64Process pointed at a bool will corrupt memory.
	std::vector<Thread *> Threads;
	std::map<uint8_t*, Memory::Entity*> Entities; // An ablock can only map to one entity by design. If an allocation range has multiple entities in it (such as a PE) then these entities must be encompassed within the parent entity itself by design (such as PE sections)
public:
	HANDLE GetHandle() { return this->Handle; }
	uint32_t GetPid() { return this->Pid; }
	std::wstring GetName() { return this->Name; }
	std::wstring GetImageFilePath() { return this->ImageFilePath; }
	bool DumpBlock(MemDump &ProcDmp, MEMORY_BASIC_INFORMATION* pMbi, std::wstring Indent);
	BOOL IsWow64() { return this->Wow64; }
	Process(uint32_t);
	std::vector<Memory::Subregion*> Enumerate(uint64_t qwOptFlags, MemorySelectionType MemSelectType, VerbosityLevel VLvl, uint8_t* pSelectSblock = nullptr);
	~Process();
};

#define MONETA_FLAG_MEMDUMP 0x1
#define MONETA_FLAG_FROM_BASE 0x2
#define MONETA_FLAG_STATISTICS 0x4