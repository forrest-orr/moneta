#define FILTER_FLAG_UNSIGNED_MODULES 0x1
#define FILTER_FLAG_METADATA_MODULES 0x2
#define FILTER_FLAG_CLR_PRVX 0x4
#define FILTER_FLAG_CLR_HEAP 0x8
#define FILTER_FLAG_WOW64_INIT 0x10

namespace Memory {
	typedef class Entity;
	typedef class Subregion;
}

namespace Processes {
	typedef class Process;
}

class Ioc {
public:
	enum Type { MODIFIED_CODE, MODIFIED_HEADER, XMAP, XPRV, UNSIGNED_MODULE, MISSING_PEB_ENTRY, MISMATCHING_PEB_MODULE, DISK_PERMISSION_MISMATCH, PHANTOM_IMAGE, NON_IMAGE_THREAD, NON_IMAGE_IMAGEBASE, ORPHANED_PEB_ENTRY };
protected:
	const Memory::Entity* ParentObject;
	const Memory::Subregion* Sbr;
	const Processes::Process* ParentProcess;
	Ioc::Type IocType;
public:
	Ioc::Type GetType() const { return this->IocType; }
	static std::wstring GetDescription(Ioc::Type Type);
	static bool InspectEntity(Processes::Process& ParentProc, Memory::Entity& ParentObj, std::map <uint8_t*, std::map<uint8_t*, std::list<Ioc *>>> * IocMap);
	static void EnumerateMap(std::map <uint8_t*, std::map<uint8_t*, std::list<Ioc *>>> *IocMap);
	bool IsFullEntityIoc() const { return (this->Sbr == nullptr ? true : false); }
	Ioc(Processes::Process* ParentProc, Memory::Entity* Parent, Memory::Subregion* Block, Ioc::Type Type);
	const Memory::Entity* GetParentObject() const { return this->ParentObject; }
	const Memory::Subregion* GetSubregion() const { return this->Sbr; }
	const Processes::Process* GetProcess() const { return this->ParentProcess; }
};

class IocMap {
protected:
	std::map <uint8_t*, std::map<uint8_t*, std::list<Ioc*>>>* Map;
public:
	std::map <uint8_t*, std::map<uint8_t*, std::list<Ioc*>>>* GetMap() const { return this->Map; }
	int32_t Filter(uint64_t qwFilterFlags);
	void Enumerate();
	void EraseIoc(std::list<Ioc*>* RefIocList, std::list<Ioc*>::const_iterator IocListItr, std::map <uint8_t*, std::list<Ioc*>>* RefSubregionMap, std::map<uint8_t*, std::list<Ioc*>>::const_iterator SubregionMapItr, std::map <uint8_t*, std::map<uint8_t*, std::list<Ioc*>>>::const_iterator RegionMapItr);
	IocMap();
	~IocMap();
};