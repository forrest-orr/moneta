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
	enum class EntityType{UNKNOWN, PE, MAPPED_FILE};
	class Entity {
	protected:
		std::list<MemoryBlock*> SBlocks;
		uint8_t* StartVa, * EndVa;
	public:
		std::list<MemoryBlock*> GetSBlocks();
		virtual void SetSBlocks(std::list<MemoryBlock*>) = 0; // In addition to initializing the sblocks list, derivations of this class are expected to implement this method so as to process the sblocks as input, analyze them and generate additional child entities (if applicable)
		virtual EntityType Type() = 0;
	};

	class AddressSpace {
	protected:
		std::map<uint8_t*, Entity *> *Entities; // An ablock can only map to one entity by design. If an allocation range has multiple entities in it (such as a PE) then these entities must be encompassed within the parent entity itself by design (such as PE sections)
	public:
		//AddressSpace();
		//~AddressSpace();
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
	protected:
		IMAGE_SECTION_HEADER Hdr;
		std::list<MemoryBlock*> SBlocks; // These sblocks will be duplicates within the derived parent PE entity
	};

	class MappedFile : public Entity {
	public:
		MappedFile();
		void SetSBlocks(std::list<MemoryBlock*>);
		void SetFile(const wchar_t* pFilePath);
		std::wstring GetFilePath();
		EntityType Type() { return EntityType::MAPPED_FILE; }
	protected:
		FileBase *File = nullptr;
		//std::wstring FilePath;
	};

	class PE : public MappedFile {
	public:
		EntityType Type() { return EntityType::PE; }
		void SetSBlocks(std::list<MemoryBlock*>);
		PE();
	protected:
		//
	};

	class Unknown : public Entity {
	public:
		//Unknown(std::list<MemoryBlock*> SBlocks);
		void SetSBlocks(std::list<MemoryBlock*>);
		//Unknown();
		EntityType Type() { return EntityType::UNKNOWN; }
	};

	uint32_t GetPrivateSize(uint8_t* pBaseAddress, uint32_t dwSize);
}