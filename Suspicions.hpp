namespace Memory {
	typedef class Entity;
}

namespace Processes {
	typedef class Process;
}

class Suspicion {
public:
	enum Type { MODIFIED_CODE, MODIFIED_HEADER, XMAP, XPRV, UNSIGNED_MODULE, MISSING_PEB_ENTRY, MISMATCHING_PEB_MODULE, DISK_PERMISSION_MISMATCH, PHANTOM_IMAGE, NON_IMAGE_THREAD, NON_IMAGE_IMAGEBASE, ORPHANED_PEB_ENTRY };
protected:
	const Memory::Entity* ParentObject;
	const Memory::Subregion* Sbr;
	const Processes::Process* ParentProcess;
	Suspicion::Type SuspicionType;
public:
	Suspicion::Type GetType() const { return this->SuspicionType; }
	static std::wstring GetDescription(Suspicion::Type Type);
	static bool InspectEntity(Processes::Process& ParentProc, Memory::Entity& ParentObj, std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion *>>> * IocMap);
	static void EnumerateMap(std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion *>>> *IocMap);
	bool IsFullEntitySuspicion() const { return (this->Sbr == nullptr ? true : false); }
	Suspicion(Processes::Process* ParentProc, Memory::Entity* Parent, Memory::Subregion* Block, Suspicion::Type Type);
	const Memory::Entity* GetParentObject() const { return this->ParentObject; }
	const Memory::Subregion* GetSubregion() const { return this->Sbr; }
	const Processes::Process* GetProcess() const { return this->ParentProcess; }
};