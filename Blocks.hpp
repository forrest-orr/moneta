//typedef class Thread;

class SBlock {
protected:
	MEMORY_BASIC_INFORMATION* Basic;
	MEMORY_REGION_INFORMATION* Region;
	std::vector<Moneta::Thread*> Threads;
public:
	SBlock(MEMORY_BASIC_INFORMATION* pMemBasicInfo, MEMORY_REGION_INFORMATION* pMemRegionInfo, std::vector<Moneta::Thread*> Threads1);
	~SBlock();
	MEMORY_BASIC_INFORMATION* GetBasic();
	MEMORY_REGION_INFORMATION* GetRegion();
	std::vector<Moneta::Thread*> GetThreads();
	static const wchar_t* ProtectSymbol(uint32_t dwProtect);
	static const wchar_t* AttribDesc(MEMORY_BASIC_INFORMATION* pMbi);
	static const wchar_t* TypeSymbol(uint32_t dwType);
	static bool PageExecutable(uint32_t dwProtect);
};

class MemoryPermissionRecord { // Record takes basic/region memory structures, and sorts them into a map. Class can be used to show the map.
protected:
	std::map<uint32_t, std::map<uint32_t, uint32_t>>* MemPermMap; // Primary key is the memory type, secondary map key is the permission attribute (and its pair value is the count).
public:
	void UpdateMap(std::list<SBlock*> MemBasicRecords);
	MemoryPermissionRecord(std::list<SBlock*> MemBasicRecords);
	void ShowRecords();
};