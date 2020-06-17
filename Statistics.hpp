typedef class Ioc;

namespace Memory {
	typedef class Subregion;
}

class PermissionRecord {
protected:
	std::map<uint32_t, std::map<uint32_t, uint32_t>>* PermissionMap; // Primary key is the memory type, secondary map key is the permission attribute (and its pair value is the count).
	int32_t TotalRegions;
public:
	void UpdateMap(std::vector<Memory::Subregion*> SubregionRecords);
	PermissionRecord(std::vector<Memory::Subregion*> SubregionRecords);
	void ShowRecords() const;
};

class IocRecord {
protected:
	std::map<uint32_t, uint32_t>* RecordMap; // Key is IOC type, value is count
	int32_t TotalIoc;
public:
	void UpdateMap(std::vector<Ioc*> *Records);
	IocRecord(std::vector<Ioc*>* Records);
	void ShowRecords() const;
};
