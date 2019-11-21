class MemoryRegionDetail {
protected:
	MEMORY_BASIC_INFORMATION* Basic;
	MEMORY_REGION_INFORMATION* Region;

public:
	MemoryRegionDetail(MEMORY_BASIC_INFORMATION* pMemBasicInfo, MEMORY_REGION_INFORMATION* pMemRegionInfo);
	~MemoryRegionDetail();
	MEMORY_BASIC_INFORMATION* GetBasic();
	MEMORY_REGION_INFORMATION* GetRegion();
};