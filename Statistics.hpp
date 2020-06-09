typedef class Suspicion;

namespace Memory {
	typedef class Subregion;
}

class PermissionRecord {
protected:
	std::map<uint32_t, std::map<uint32_t, uint32_t>>* PermissionMap; // Primary key is the memory type, secondary map key is the permission attribute (and its pair value is the count).
public:
	void UpdateMap(std::vector<Memory::Subregion*> SubregionRecords);
	PermissionRecord(std::vector<Memory::Subregion*> SubregionRecords);
	void ShowRecords() const;
};

class IocRecord {
protected:
	std::map<uint32_t, uint32_t>* IocMap; // Key is IOC type, value is count
public:
	void UpdateMap(std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion*>>> *Records);
	IocRecord(std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion*>>>* Records);
	void ShowRecords() const;
};
