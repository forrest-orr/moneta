class MemoryBlock {
protected:
	MEMORY_BASIC_INFORMATION* Basic = nullptr;
	MEMORY_REGION_INFORMATION* Region = nullptr;

public:
	MemoryBlock(MEMORY_BASIC_INFORMATION* pMemBasicInfo, MEMORY_REGION_INFORMATION* pMemRegionInfo);
	~MemoryBlock();
	MEMORY_BASIC_INFORMATION* GetBasic();
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
	enum class EntityType{UNKNOWN, PE_FILE, MAPPED_FILE, PE_SECTION};
	class Entity {
	protected:
		std::vector<MemoryBlock*> SBlocks;
		uint8_t* StartVa, * EndVa;
		uint32_t Size;
	public:
		std::vector<MemoryBlock*> GetSBlocks();
		uint8_t* GetStartVa();
		uint8_t* GetEndVa();
		uint32_t GetSize();
		static Entity* Create(HANDLE hProcess, std::vector<MemoryBlock*> SBlocks); // Factory method for derived PE images, mapped files, unknown memory ranges.
		void SetSBlocks(std::vector<MemoryBlock*>);
		~Entity();
		virtual EntityType Type() = 0;
	};

	class ABlock : public Entity { // This is essential, since a parameterized constructor of the base entity class is impossible (since it is an abstract base class with a deferred method). new Entity() is impossible for this reason: only derived classes can be initialized.
	public:
		ABlock(std::vector<MemoryBlock*> SBlocks);
		EntityType Type() { return EntityType::UNKNOWN; }
	};

	class AddressSpace {
	protected:
		std::map<uint8_t*, Entity *> Entities; // An ablock can only map to one entity by design. If an allocation range has multiple entities in it (such as a PE) then these entities must be encompassed within the parent entity itself by design (such as PE sections)
	public:
		~AddressSpace();
	};

	class Process : public AddressSpace {
	protected:
		uint32_t Pid;
		HANDLE Handle;
		std::wstring Name;
		BOOL Wow64; // bool and BOOL translate to different sizes, IsWow64Process pointed at a bool will corrupt memory.
	public:
		HANDLE GetHandle();
		uint32_t GetPid();
		BOOL IsWow64();
		Process(uint32_t, const wchar_t*);
		void Enumerate();
		~Process();
	};

	class MappedFile : public FileBase, virtual public ABlock { // Virtual inheritance from entity prevents classes derived from multiple classes derived from entity from having ambiguous/conflicting content.
	public:
		MappedFile(std::vector<MemoryBlock*> SBlocks, const wchar_t* pFilePath, bool bMemStore = false);
		~MappedFile();
		//void SetFile(const wchar_t* pFilePath, bool bMemStore = false);
		//std::wstring GetFilePath();
		//bool IsPhantom();
		EntityType Type() { return EntityType::MAPPED_FILE; }
	protected:
		//FileBase *File = nullptr;
	};

	namespace PeVm {
		class Component : virtual public ABlock {
		public:
			uint8_t* GetPeBase();
			Component(std::vector<MemoryBlock*> SBlocks, uint8_t* pPeBase);
		protected:
			uint8_t* PeBase;
		};

		typedef class Section;
		class Body : public MappedFile, public Component {
		public:
			EntityType Type() { return EntityType::PE_FILE; }
			uint8_t* GetPeBase();
			PeFile::PeBase* GetPe();
			std::vector<Section*> GetSections();
			Body(std::vector<MemoryBlock*> SBlocks, const wchar_t* pFilePath);
			~Body();
		protected:
			std::vector<Section*> Sections;
			PeFile::PeBase* Pe;
		};

		class Section : public Component {
		public:
			Section(std::vector<MemoryBlock*> SBlocks, IMAGE_SECTION_HEADER* pHdr, uint8_t* pPeBase);
			IMAGE_SECTION_HEADER* GetHeader();
			EntityType Type() { return EntityType::PE_SECTION; }
		protected:
			IMAGE_SECTION_HEADER Hdr;
		};
	}

	uint32_t GetPrivateSize(HANDLE hProcess, uint8_t* pBaseAddress, uint32_t dwSize);
	const char* PermissionSymbol(uint32_t dwProtection);
}