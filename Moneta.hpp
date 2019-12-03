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
	std::map<uint32_t, std::map<uint32_t, uint32_t>>* MemPermMap; // Primary key is the memory type, secondary map key is the permission attribute (and its pair value is the count).

public:
	void UpdateMap(std::list<MemoryBlock*> MemBasicRecords);
	MemoryPermissionRecord(std::list<MemoryBlock*> MemBasicRecords);
	void ShowRecords();
};

/*
- New class initialized from PID, all basic info and region structs are stored in a list.
- Analyze method in class can be called which will create a map, the key of which is the alloc base and the value will indicate:
1) All blocks which share this alloc base
2) An extended info class, the base of which will contain a file name (for non-image map) which could also be "Page file"
and there will be an image class which inherits from it which will also indicate which blocks associated with alloc base
correspond to which sections in the PE by name (also shown will be their initial permissions in the section header).

*/
class Moneta { // This should be named something else. It is PID-specific, and multiple instances of it are needed to gather data on multiple processes
protected:
	uint32_t Pid;
	//MemoryPermissionRecord *PermissionRecords;
	std::list<MemoryBlock*> Blocks;
public:
	Moneta(uint32_t dwPid);
	void Enumerate();
	static uint32_t GetPrivateSize(uint8_t* pBaseAddress, uint32_t dwSize); // GetPrivateSize does not utilize any of the other members of this class and therefore can be declared independent of them as a static method
	std::list<MemoryBlock*> GetBlocks();
};