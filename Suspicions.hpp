namespace Memory {
	typedef class Entity;
}

namespace Processes {
	typedef class Process;
}

class Suspicion {
public:
	enum Type { MODIFIED_CODE, MODIFIED_HEADER, XMAP, XPRV, UNSIGNED_MODULE, MISSING_PEB_MODULE, MISMATCHING_PEB_MODULE, DISK_PERMISSION_MISMATCH, PHANTOM_IMAGE };
protected:
	const Memory::Entity* ParentObject;
	const Memory::Subregion* Block;
	const Processes::Process* ParentProcess;
	Suspicion::Type SuspicionType;
public:
	Suspicion::Type GetType() const { return this->SuspicionType; }
	std::wstring GetDescription() const;
	static bool InspectEntity(Processes::Process& ParentProc, Memory::Entity& ParentObj, std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion *>>>& SuspicionsMap);
	static void EnumerateMap(std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion *>>>& SuspicionsMap);
	bool IsFullEntitySuspicion() const { return (this->Block == nullptr ? true : false); }
	Suspicion(Processes::Process* ParentProc, Memory::Entity* Parent, Memory::Subregion* Block, Suspicion::Type Type);
	const Memory::Entity* GetParentObject() const { return this->ParentObject; }
	const Memory::Subregion* GetBlock() const { return this->Block; }
	const Processes::Process* GetProcess() const { return this->ParentProcess; }
};