class MemoryBlock {
protected:
	MEMORY_BASIC_INFORMATION64* Basic;
	MEMORY_REGION_INFORMATION* Region;

public:
	MemoryBlock(MEMORY_BASIC_INFORMATION64* pMemBasicInfo, MEMORY_REGION_INFORMATION* pMemRegionInfo);
	~MemoryBlock();
	MEMORY_BASIC_INFORMATION64* GetBasic();
	MEMORY_REGION_INFORMATION* GetRegion();
};

class MemoryPermissionRecord { // Record takes basic/region memory structures, and sorts them into a map. Class can be used to show the map.
protected:
	std::map<uint32_t, std::map<uint32_t, uint32_t>>* MemPermMap; // Primary key is the memory type, secondary map key is the permission attribute (and its pair value is the count).

public:
	void UpdateMap(std::list<MemoryBlock*> MemBasicRecords);
	MemoryPermissionRecord(std::list<MemoryBlock*> MemBasicRecords);
	void ShowRecords();
};

namespace Moneta {
	enum class EntityType{UNKNOWN, PE};
	class Entity {
	protected:
		std::list<MemoryBlock*> SBlocks;
	public:
		std::list<MemoryBlock*> GetSBlocks();
		void SetSBlocks(std::list<MemoryBlock*>);
		virtual EntityType Type() = 0;
	};

	class AddressSpace {
	protected:
		std::map<uint8_t*, Entity *> *Entities; // An ablock can only map to one entity by design. If an allocation range has multiple entities in it (such as a PE) then these entities must be encompassed within the parent entity itself by design (such as PE sections)
	public:
		AddressSpace();
		~AddressSpace();
		void Enumerate();
	};

	class Process : public AddressSpace {
	protected:
		uint32_t Pid;
	public:
		uint32_t GetPid();
		Process(uint32_t);
	};

	class Section : public Entity {
		IMAGE_SECTION_HEADER Hdr;
		std::list<MemoryBlock*> SBlocks; // These sblocks will be duplicates within the derived parent PE entity
	};

	class PE : public Entity {
	public:
		//PE(std::list<MemoryBlock*> SBlocks, const wchar_t *pFilePath);
		PE(const wchar_t* pFilePath);
		std::wstring GetFilePath();
		EntityType Type() { return EntityType::PE; }
	protected:
		std::wstring FilePath;
	};

	class Unknown : public Entity {
	public:
		//Unknown(std::list<MemoryBlock*> SBlocks);
		Unknown();
		EntityType Type() { return EntityType::UNKNOWN; }
	};

	uint32_t GetPrivateSize(uint8_t* pBaseAddress, uint32_t dwSize);
}