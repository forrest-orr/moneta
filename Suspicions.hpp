typedef class Entity;
//typedef class SBlock;

class Suspicion {
public:
	enum Type { MODIFIED_CODE, MODIFIED_HEADER, XMAP, XPRV, UNSIGNED_MODULE, MISSING_PEB_MODULE, MISMATCHING_PEB_MODULE, DISK_PERMISSION_MISMATCH, PHANTOM_IMAGE };
	Suspicion::Type GetType() { return this->SspType; }
	std::wstring GetDescription();
	static bool InspectEntity(Process& ParentProc, Entity& ParentObj, std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion *>>>& SuspicionsMap);
	static void EnumerateMap(std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion *>>>& SuspicionsMap);
	bool IsFullEntitySuspicion();
	Suspicion(Process* ParentProc, Entity* Parent, SBlock* Block, Suspicion::Type Type);
	Entity* GetParentObject() { return this->ParentObject; }
	SBlock* GetBlock() { return this->Block; }
	Process* GetProcess() { return this->ParentProcess; }
protected:
	Entity* ParentObject;
	SBlock* Block;
	Process* ParentProcess;
	Suspicion::Type SspType;
};