typedef class MemoryBlock;
typedef class MemDump;

namespace Moneta {
	enum class EntityType{UNKNOWN, PE_FILE, MAPPED_FILE, PE_SECTION};
	class Entity {
	protected:
		std::vector<MemoryBlock*> SBlocks;
		uint8_t* StartVa, * EndVa;
		uint32_t EntitySize;
	public:
		std::vector<MemoryBlock*> GetSBlocks();
		uint8_t* GetStartVa();
		uint8_t* GetEndVa();
		uint32_t GetEntitySize();
		static Entity* Create(HANDLE hProcess, std::vector<MemoryBlock*> SBlocks); // Factory method for derived PE images, mapped files, unknown memory ranges.
		static bool Dump(MemDump& ProcDmp, Entity& Target);
		void SetSBlocks(std::vector<MemoryBlock*>);
		~Entity();
		virtual EntityType Type() = 0;
	};

	class ABlock : public Entity { // This is essential, since a parameterized constructor of the base entity class is impossible (since it is an abstract base class with a deferred method). new Entity() is impossible for this reason: only derived classes can be initialized.
	public:
		ABlock(std::vector<MemoryBlock*> SBlocks);
		EntityType Type() { return EntityType::UNKNOWN; }
	};

	class MappedFile : public FileBase, virtual public ABlock { // Virtual inheritance from entity prevents classes derived from multiple classes derived from entity from having ambiguous/conflicting content.
	public:
		MappedFile(std::vector<MemoryBlock*> SBlocks, const wchar_t* pFilePath, bool bMemStore = false);
		EntityType Type() { return EntityType::MAPPED_FILE; }
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
		protected:
			std::vector<Section*> Sections;
			PeFile::PeBase* Pe;

			class PebModule {
			public:
				uint8_t* GetBase();
				std::wstring GetPath();
				PebModule(HANDLE hProcess, uint8_t* pModBase);
				bool Exists();
			protected:
				MODULEINFO Info;
				std::wstring Name;
				std::wstring Path;
				bool Missing;
			} PebMod;
		public:
			EntityType Type() { return EntityType::PE_FILE; }
			uint8_t* GetPeBase();
			PeFile::PeBase* GetPe();
			std::vector<Section*> GetSections();
			PebModule &GetPebModule();
			Body(HANDLE hProcess, std::vector<MemoryBlock*> SBlocks, const wchar_t* pFilePath);
			~Body();
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
}