namespace Moneta {
	typedef class Entity;
	//typedef class SBlock;

	class Suspicion {
	public:
		enum Type { MODIFIED_CODE, MODIFIED_HEADER, XMAP, XPRV, UNSIGNED_MODULE, MISSING_PEB_MODULE, MISMATCHING_PEB_MODULE, DISK_PERMISSION_MISMATCH, PHANTOM_IMAGE };
		virtual Suspicion::Type GetType() = 0;
		virtual std::wstring GetDescription() = 0;
		static bool InspectEntity(Process& ParentProc, Entity& ParentObj, std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion *>>>& SuspicionsMap);
		static void EnumerateMap(std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion *>>>& SuspicionsMap);
		bool IsFullEntitySuspicion();
		Suspicion(Process* ParentProc, Entity* Parent, SBlock* Block);
		Entity* GetParentObject();
		SBlock* GetBlock();
		Process* GetProcess();
	protected:
		Entity* ParentObject;
		SBlock* Block;
		Process* ParentProcess;
	};

	class ModifiedCode : public Suspicion {
	public:
		Suspicion::Type GetType() { return Suspicion::Type::MODIFIED_CODE; }
		ModifiedCode(Process* ParentProc, Entity* Parent, SBlock* Block);
		std::wstring GetDescription();
	};

	class UnsignedModule : public Suspicion {
	public:
		Suspicion::Type GetType() { return Suspicion::Type::UNSIGNED_MODULE; }
		UnsignedModule(Process* ParentProc, Entity* Parent);
		std::wstring GetDescription();
	};

	class MissingPebModule : public Suspicion {
	public:
		Suspicion::Type GetType() { return Suspicion::Type::MISSING_PEB_MODULE; }
		MissingPebModule(Process* ParentProc, Entity* Parent);
		std::wstring GetDescription();
	};

	class MismatchingPebModule : public Suspicion {
	public:
		Suspicion::Type GetType() { return Suspicion::Type::MISMATCHING_PEB_MODULE; }
		MismatchingPebModule(Process* ParentProc, Entity* Parent);
		std::wstring GetDescription();
	};

	class ModifiedPeHeader : public Suspicion {
	public:
		Suspicion::Type GetType() { return Suspicion::Type::MODIFIED_HEADER; }
		ModifiedPeHeader(Process* ParentProc, Entity* Parent, SBlock* Block);
		std::wstring GetDescription();
	};

	class DiskPermissionMismatch : public Suspicion {
	public:
		Suspicion::Type GetType() { return Suspicion::Type::DISK_PERMISSION_MISMATCH; }
		DiskPermissionMismatch(Process* ParentProc, Entity* Parent, SBlock* Block);
		std::wstring GetDescription();
	};

	class PhantomImage : public Suspicion {
	public:
		Suspicion::Type GetType() { return Suspicion::Type::PHANTOM_IMAGE; }
		PhantomImage(Process* ParentProc, Entity* Parent);
		std::wstring GetDescription();
	};

	class MappedExecPermission : public Suspicion {
	public:
		Suspicion::Type GetType() { return Suspicion::Type::XMAP; }
		MappedExecPermission(Process* ParentProc, Entity* Parent, SBlock* Block);
		std::wstring GetDescription();
	};

	class PrivateExecPermission : public Suspicion {
	public:
		Suspicion::Type GetType() { return Suspicion::Type::XPRV; }
		PrivateExecPermission(Process* ParentProc, Entity* Parent, SBlock* Block);
		std::wstring GetDescription();
	};
}