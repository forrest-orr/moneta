#define MEMORY_SUBREGION_FLAG_HEAP 0x1

typedef class Thread;
typedef class MemDump;
typedef class FileBase;
typedef class PeFile;
typedef enum class Signing_t;

namespace Processes {
	typedef class Thread;
	typedef class Process;
}

namespace Memory {
	class Subregion {
	protected:
		const MEMORY_BASIC_INFORMATION* Basic;
		std::vector<Processes::Thread*> Threads;
		uint32_t PrivateSize;
		HANDLE ProcessHandle;
		uint64_t Flags;
	public:
		Subregion(Processes::Process& OwnerProc, const MEMORY_BASIC_INFORMATION* Mbi);
		~Subregion();
		const MEMORY_BASIC_INFORMATION* GetBasic() const { return this->Basic; }
		std::vector<Processes::Thread*> GetThreads() const { return this->Threads; }
		void SetPrivateSize(uint32_t dwPrivateSize) { this->PrivateSize = dwPrivateSize; }
		uint32_t GetPrivateSize() const { return this->PrivateSize; }
		uint32_t QueryPrivateSize() const;
		uint64_t GetFlags() const { return this->Flags; }
		static const wchar_t* ProtectSymbol(uint32_t dwProtect);
		static const wchar_t* AttribDesc(const MEMORY_BASIC_INFORMATION* Mbi);
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
		void ShowRecords() const;
	};

	class Entity {
	protected:
		std::vector<Subregion*> Subregions;
		const void* StartVa, * EndVa;
		uint32_t EntitySize;
		//MEMORY_REGION_INFORMATION* RegionInfo;
	public:
		enum Type { UNKNOWN, PE_FILE, MAPPED_FILE, PE_SECTION };
		std::vector<Subregion*> GetSubregions() const { return this->Subregions; }
		//MEMORY_REGION_INFORMATION* GetRegionInfo() { return RegionInfo; }
		const void* GetStartVa() const { return this->StartVa; }
		const void* GetEndVa() const { return this->EndVa; }
		uint32_t GetEntitySize() const { return this->EntitySize; }
		static Entity* Create(Processes::Process& OwnerProc, std::vector<Subregion*> Subregions); // Factory method for derived PE images, mapped files, unknown memory ranges.
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
		FileBase* GetFileBase() const { return this->MapFileBase; }
		~MappedFile();
	};

	namespace PeVm {
		class Component : virtual public Region {
		public:
			uint8_t* GetPeFile() const { return this->PeFile; }
			Component(HANDLE hProcess, std::vector<Subregion*> Subregions, uint8_t* pPeBuf);
		protected:
			 uint8_t* PeFile;
		};

		typedef class Section;
		class Body : public MappedFile, public Component {
		protected:
			std::vector<Section*> Sections;
			::PeFile* Pe;
			Signing_t Signed;
			bool NonExecutableImage;
			bool PartiallyMapped;
			uint32_t ImageSize;
			uint32_t SigningLevel;
			class PebModule {
			public:
				const uint8_t* GetBase() const { return (const uint8_t*)this->Info.lpBaseOfDll; }
				const uint8_t* GetEntryPoint() const { return (const uint8_t*)this->Info.EntryPoint; }
				std::wstring GetPath() const { return this->Path; }
				std::wstring GetName() const { return this->Name; }
				uint32_t GetSize() const { return this->Info.SizeOfImage; }
				PebModule(HANDLE hProcess, const uint8_t* pModBase);
				bool Exists() const { return (this->Missing ? false : true); }
			protected:
				MODULEINFO Info;
				std::wstring Name;
				std::wstring Path;
				bool Missing;
			} PebMod;
		public:
			Entity::Type GetType() { return Entity::Type::PE_FILE; }
			::PeFile* GetPe() const { return this->Pe; }
			bool IsSigned() const;
			Signing_t GetSisningType() const;
			bool IsNonExecutableImage() const { return this->NonExecutableImage; }
			bool IsPartiallyMapped() const { return this->PartiallyMapped; }
			std::vector<Section*> GetSections() const { return Sections; }
			PebModule& GetPebModule() { return PebMod; }
			std::vector<Section*> FindOverlapSect(Subregion& Address);
			uint32_t GetImageSize() const { return this->ImageSize; }
			uint32_t GetSigningLevel() const { return this->SigningLevel; }
			Body(Processes::Process& OwnerProc, std::vector<Subregion*> Subregions, const wchar_t* FilePath);
			~Body();
		};

		class Section : public Component {
		public:
			Section(HANDLE hProcess, std::vector<Subregion*> Subregions, IMAGE_SECTION_HEADER* SectHdr, uint8_t* pPeBuf);
			const IMAGE_SECTION_HEADER* GetHeader() { return &this->Hdr; }
			Entity::Type GetType() { return Entity::Type::PE_SECTION; }
		protected:
			IMAGE_SECTION_HEADER Hdr;
		};
	}
}