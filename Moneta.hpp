typedef class SBlock;
typedef class MemDump;

namespace Moneta {
	class Entity {
	protected:
		std::vector<SBlock*> SBlocks;
		uint8_t* StartVa, * EndVa;
		uint32_t EntitySize;
		MEMORY_REGION_INFORMATION *RegionInfo;
	public:
		enum Type { UNKNOWN, PE_FILE, MAPPED_FILE, PE_SECTION };
		std::vector<SBlock*> GetSBlocks();
		MEMORY_REGION_INFORMATION* GetRegionInfo() { return RegionInfo; }
		uint8_t* GetStartVa();
		uint8_t* GetEndVa();
		uint32_t GetEntitySize();
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
			uint8_t* GetPeBase();
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
				uint8_t* GetBase();
				uint8_t* GetEntryPoint();
				std::wstring GetPath();
				std::wstring GetName();
				uint32_t GetSize();
				PebModule(HANDLE hProcess, uint8_t* pModBase);
				bool Exists();
			protected:
				MODULEINFO Info;
				std::wstring Name;
				std::wstring Path;
				bool Missing;
			} PebMod;
		public:
			Entity::Type GetType() { return Entity::Type::PE_FILE; }
			uint8_t* GetPeBase();
			PeFile::PeBase* GetPe();
			bool IsSigned();
			bool IsNonExecutableImage();
			bool IsPartiallyMapped();
			std::vector<Section*> GetSections();
			PebModule &GetPebModule();
			std::vector<Section*> FindOverlapSect(SBlock& Address);
			uint32_t GetImageSize();
			uint32_t GetSigningLevel() { return this->SigningLevel; }
			Body(HANDLE hProcess, std::vector<SBlock*> SBlocks, const wchar_t* pFilePath);
			~Body();
		};

		class Section : public Component {
		public:
			Section(HANDLE hProcess, std::vector<SBlock*> SBlocks, IMAGE_SECTION_HEADER* pHdr, uint8_t* pPeBase);
			IMAGE_SECTION_HEADER* GetHeader();
			Entity::Type GetType() { return Entity::Type::PE_SECTION; }
		protected:
			IMAGE_SECTION_HEADER Hdr;
		};
	}

	//uint32_t GetPrivateSize(HANDLE hProcess, uint8_t* pBaseAddress, uint32_t dwSize);
}

#define MONETA_FLAG_MEMDUMP 0x1
#define MONETA_FLAG_FROM_BASE 0x2