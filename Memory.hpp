typedef class Thread;
typedef class MemDump;

class SBlock {
protected:
	MEMORY_BASIC_INFORMATION* Basic;
	std::vector<Thread*> Threads;
	uint32_t PrivateSize;
	HANDLE ProcessHandle;
public:
	SBlock(HANDLE hProcess, MEMORY_BASIC_INFORMATION* pMbi, std::vector<Thread*> Threads1);
	~SBlock();
	MEMORY_BASIC_INFORMATION* GetBasic() { return this->Basic; }
	std::vector<Thread*> GetThreads() { return this->Threads; }
	void SetPrivateSize(uint32_t dwPrivateSize);
	uint32_t GetPrivateSize() { return this->PrivateSize;  }
	uint32_t QueryPrivateSize();
	static const wchar_t* ProtectSymbol(uint32_t dwProtect);
	static const wchar_t* AttribDesc(MEMORY_BASIC_INFORMATION* pMbi);
	static const wchar_t* TypeSymbol(uint32_t dwType);
	static const wchar_t* StateSymbol(uint32_t dwState);
	static bool PageExecutable(uint32_t dwProtect);
};

class MemoryPermissionRecord { // Record takes basic/region memory structures, and sorts them into a map. Class can be used to show the map.
protected:
	std::map<uint32_t, std::map<uint32_t, uint32_t>>* MemPermMap; // Primary key is the memory type, secondary map key is the permission attribute (and its pair value is the count).
public:
	void UpdateMap(std::vector<SBlock*> MemBasicRecords);
	MemoryPermissionRecord(std::vector<SBlock*> MemBasicRecords);
	void ShowRecords();
};

class Entity {
protected:
	std::vector<SBlock*> SBlocks;
	uint8_t* StartVa, * EndVa;
	uint32_t EntitySize;
	MEMORY_REGION_INFORMATION* RegionInfo;
public:
	enum Type { UNKNOWN, PE_FILE, MAPPED_FILE, PE_SECTION };
	std::vector<SBlock*> GetSBlocks() { return this->SBlocks; }
	MEMORY_REGION_INFORMATION* GetRegionInfo() { return RegionInfo; }
	uint8_t* GetStartVa() { return this->StartVa; }
	uint8_t* GetEndVa() { return this->EndVa; }
	uint32_t GetEntitySize() { return this->EntitySize; }
	static Entity* Create(HANDLE hProcess, std::vector<SBlock*> SBlocks); // Factory method for derived PE images, mapped files, unknown memory ranges.
	static bool Dump(MemDump& ProcDmp, Entity& Target);
	void SetSBlocks(std::vector<SBlock*>);
	~Entity();
	virtual Entity::Type GetType() = 0;
};

class ABlock : public Entity { // This is essential, since a parameterized constructor of the base entity class is impossible (since it is an abstract base class with a deferred method). new Entity() is impossible for this reason: only derived classes can be initialized.
public:
	ABlock(HANDLE hProcess, std::vector<SBlock*> SBlocks);
	Entity::Type GetType() { return Entity::Type::UNKNOWN; }
};

class MappedFile : public FileBase, virtual public ABlock { // Virtual inheritance from entity prevents classes derived from multiple classes derived from entity from having ambiguous/conflicting content.
public:
	MappedFile(HANDLE hProcess, std::vector<SBlock*> SBlocks, const wchar_t* pFilePath, bool bMemStore = false);
	Entity::Type GetType() { return Entity::Type::MAPPED_FILE; }
};

namespace PeVm {
	class Component : virtual public ABlock {
	public:
		uint8_t* GetPeBase() { return this->PeBase; }
		Component(HANDLE hProcess, std::vector<SBlock*> SBlocks, uint8_t* pPeBase);
	protected:
		uint8_t* PeBase;
	};

	typedef class Section;
	class Body : public MappedFile, public Component {
	protected:
		std::vector<Section*> Sections;
		PeFile::PeBase* Pe;
		bool Signed;
		bool NonExecutableImage;
		bool PartiallyMapped;
		uint32_t ImageSize;
		uint32_t SigningLevel;
		class PebModule {
		public:
			uint8_t* GetBase() { return (uint8_t*)this->Info.lpBaseOfDll; }
			uint8_t* GetEntryPoint() { return (uint8_t*)this->Info.EntryPoint; }
			std::wstring GetPath() { return this->Path; }
			std::wstring GetName() { return this->Name; }
			uint32_t GetSize() { return this->Info.SizeOfImage; }
			PebModule(HANDLE hProcess, uint8_t* pModBase);
			bool Exists() { return (this->Missing ? false : true); }
		protected:
			MODULEINFO Info;
			std::wstring Name;
			std::wstring Path;
			bool Missing;
		} PebMod;
	public:
		Entity::Type GetType() { return Entity::Type::PE_FILE; }
		PeFile::PeBase* GetPe() { return this->Pe; }
		bool IsSigned() { return this->Signed; }
		bool IsNonExecutableImage() { return this->NonExecutableImage; }
		bool IsPartiallyMapped() { return this->PartiallyMapped; }
		std::vector<Section*> GetSections() { return Sections; }
		PebModule& GetPebModule() { return PebMod; }
		std::vector<Section*> FindOverlapSect(SBlock& Address);
		uint32_t GetImageSize() { return this->ImageSize; }
		uint32_t GetSigningLevel() { return this->SigningLevel; }
		Body(HANDLE hProcess, std::vector<SBlock*> SBlocks, const wchar_t* pFilePath);
		~Body();
	};

	class Section : public Component {
	public:
		Section(HANDLE hProcess, std::vector<SBlock*> SBlocks, IMAGE_SECTION_HEADER* pHdr, uint8_t* pPeBase);
		IMAGE_SECTION_HEADER* GetHeader() { return &this->Hdr; }
		Entity::Type GetType() { return Entity::Type::PE_SECTION; }
	protected:
		IMAGE_SECTION_HEADER Hdr;
	};
}