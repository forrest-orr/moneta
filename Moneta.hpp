class MemoryBlock {
protected:
	MEMORY_BASIC_INFORMATION* Basic;
	MEMORY_REGION_INFORMATION* Region;

public:
	MemoryBlock(MEMORY_BASIC_INFORMATION* pMemBasicInfo, MEMORY_REGION_INFORMATION* pMemRegionInfo);
	~MemoryBlock();
	MEMORY_BASIC_INFORMATION* GetBasic();
	MEMORY_REGION_INFORMATION* GetRegion();
};

class MemoryPermissionRecord { // Record takes basic/region memory structures, and sorts them into a map. Class can be used to show the map.
protected:
	map<uint32_t, map<uint32_t, uint32_t>>* MemPermMap; // Primary key is the memory type, secondary map key is the permission attribute (and its pair value is the count).

public:
	void UpdateMap(list<MemoryBlock*> MemBasicRecords);
	MemoryPermissionRecord(list<MemoryBlock*> MemBasicRecords);
	void ShowRecords();
};

class ProcessMemory {
protected:
	uint32_t Pid;
	MemoryPermissionRecord PermissionRecords;
	list<MemoryBlock*> Blocks;
public:
	ProcessMemory(uint32_t dwPid);
	void Enumerate();
	uint32_t GetPrivateSize(uint8_t* pBaseAddress, uint32_t dwSize); // Should this be static?
};