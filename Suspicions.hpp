namespace Memory {
	typedef class Entity;
}

class Suspicion {
public:
	enum Type { MODIFIED_CODE, MODIFIED_HEADER, XMAP, XPRV, UNSIGNED_MODULE, MISSING_PEB_MODULE, MISMATCHING_PEB_MODULE, DISK_PERMISSION_MISMATCH, PHANTOM_IMAGE };
	Suspicion::Type GetType() { return this->SuspicionType; }
	std::wstring GetDescription();
	static bool InspectEntity(Process& ParentProc, Memory::Entity& ParentObj, std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion *>>>& SuspicionsMap);
	static void EnumerateMap(std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion *>>>& SuspicionsMap);
	bool IsFullEntitySuspicion() { return (this->Block == nullptr ? true : false); }
	Suspicion(Process* ParentProc, Memory::Entity* Parent, Memory::Subregion* Block, Suspicion::Type Type);
	Memory::Entity* GetParentObject() { return this->ParentObject; }
	Memory::Subregion* GetBlock() { return this->Block; }
	Process* GetProcess() { return this->ParentProcess; }
protected:
	Memory::Entity* ParentObject;
	Memory::Subregion* Block;
	Process* ParentProcess;
	Suspicion::Type SuspicionType;
};