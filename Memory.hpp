typedef class Thread;
typedef class MemDump;
typedef class FileBase;
typedef class PeFile;

namespace Memory {
	class Subregion {
	protected:
		MEMORY_BASIC_INFORMATION* Basic;
		std::vector<Thread*> Threads;
		uint32_t PrivateSize;
		HANDLE ProcessHandle;
	public:
		Subregion(HANDLE hProcess, MEMORY_BASIC_INFORMATION* Mbi, std::vector<Thread*> Threads);
		~Subregion();
		MEMORY_BASIC_INFORMATION* GetBasic() { return this->Basic; }
		std::vector<Thread*> GetThreads() { return this->Threads; }
		void SetPrivateSize(uint32_t dwPrivateSize);
		uint32_t GetPrivateSize() { return this->PrivateSize; }
		uint32_t QueryPrivateSize();
		static const wchar_t* ProtectSymbol(uint32_t dwProtect);
		static const wchar_t* AttribDesc(MEMORY_BASIC_INFORMATION* Mbi);
		static const wchar_t* TypeSymbol(uint32_t dwType);
		static const wchar_t* StateSymbol(uint32_t dwState);
		static bool PageExecutable(uint32_t dwProtect);
	};

	class PermissionRecord {
	protected:
		std::map<uint32_t, std::map<uint32_t, uint32_t>>* PermissionMap; // Primary key is the memory type, secondary map key is the permission attribute (and its pair value is the count).
	public:
		void UpdateMap(std::vector<Subregion*> SubregionRecords);
		PermissionRecord(std::vector<Subregion*> SubregionRecords);
		void ShowRecords();
	};

	class Entity {
	protected:
		std::vector<Subregion*> Subregions;
		uint8_t* StartVa, * EndVa;
		uint32_t EntitySize;
		//MEMORY_REGION_INFORMATION* RegionInfo;
	public:
		enum Type { UNKNOWN, PE_FILE, MAPPED_FILE, PE_SECTION };
		std::vector<Subregion*> GetSubregions() { return this->Subregions; }
		//MEMORY_REGION_INFORMATION* GetRegionInfo() { return RegionInfo; }
		uint8_t* GetStartVa() { return this->StartVa; }
		uint8_t* GetEndVa() { return this->EndVa; }
		uint32_t GetEntitySize() { return this->EntitySize; }
		static Entity* Create(HANDLE hProcess, std::vector<Subregion*> Subregions); // Factory method for derived PE images, mapped files, unknown memory ranges.
		static bool Dump(MemDump& ProcDmp, Entity& Target);
		void SetSubregions(std::vector<Subregion*>);
		~Entity();
		virtual Entity::Type GetType() = 0;
	};

	class Region : public Entity { // This is essential, since a parameterized constructor of the base entity class is impossible (since it is an abstract base class with a deferred method). new Entity() is impossible for this reason: only derived classes can be initialized.
	public:
		Region(HANDLE hProcess, std::vector<Subregion*> Subregions);
		Entity::Type GetType() { return Entity::Type::UNKNOWN; }
	};

	class MappedFile : virtual public Region { // Virtual inheritance from entity prevents classes derived from entity from having ambiguous/conflicting content.
	protected:
		FileBase* MapFileBase;
	public:
		MappedFile(HANDLE hProcess, std::vector<Subregion*> Subregions, const wchar_t* FilePath, bool bMemStore = false);
		Entity::Type GetType() { return Entity::Type::MAPPED_FILE; }
		FileBase* GetFileBase() { return this->MapFileBase; }
		~MappedFile();
	};

	namespace PeVm {
		class Component : virtual public Region {
		public:
			uint8_t* GetPeFile() { return this->PeFile; }
			Component(HANDLE hProcess, std::vector<Subregion*> Subregions, uint8_t* pPeBuf);
		protected:
			uint8_t* PeFile;
		};

		typedef class Section;
		class Body : public MappedFile, public Component {
		protected:
			std::vector<Section*> Sections;
			::PeFile* Pe;
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
			::PeFile* GetPe() { return this->Pe; }
			bool IsSigned() { return this->Signed; }
			bool IsNonExecutableImage() { return this->NonExecutableImage; }
			bool IsPartiallyMapped() { return this->PartiallyMapped; }
			std::vector<Section*> GetSections() { return Sections; }
			PebModule& GetPebModule() { return PebMod; }
			std::vector<Section*> FindOverlapSect(Subregion& Address);
			uint32_t GetImageSize() { return this->ImageSize; }
			uint32_t GetSigningLevel() { return this->SigningLevel; }
			Body(HANDLE hProcess, std::vector<Subregion*> Subregions, const wchar_t* FilePath);
			~Body();
		};

		class Section : public Component {
		public:
			Section(HANDLE hProcess, std::vector<Subregion*> Subregions, IMAGE_SECTION_HEADER* SectHdr, uint8_t* pPeBuf);
			IMAGE_SECTION_HEADER* GetHeader() { return &this->Hdr; }
			Entity::Type GetType() { return Entity::Type::PE_SECTION; }
		protected:
			IMAGE_SECTION_HEADER Hdr;
		};
	}
}