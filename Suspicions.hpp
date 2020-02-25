namespace Moneta {
	typedef class Entity;
	typedef class SBlock;

	class Suspicion {
	public:
		enum Type { MODIFIED_CODE, MODIFIED_HEADER, XMAP, XPRV, UNSIGNED_MODULE, MISSING_PEB_MODULE, MISMATCHING_PEB_MODULE, DISK_PERMISSION_MISMATCH, XPHANTOM_IMAGE };
		virtual Suspicion::Type GetType() = 0;
		static bool Generate(Entity& Parent, std::map<uint8_t*, std::vector<Suspicion>>& Suspicions);
	protected:
		Entity* Parent;
		SBlock* Host;
	};

	class ModifiedCode : public Suspicion {
	public:
		Suspicion::Type GetType() { return Suspicion::Type::MODIFIED_CODE; }
	};
}