enum class MemorySelection_t {
	Invalid,
	Block,
	All,
	Suspicious,
	Referenced
};

enum class Filter_t {
	UnsignedModules = 0,
	MetadataModules,
	ClrPrvRwxRegion,
	ClrPrvRwxHeap,
	Wow64Init
};

class ScannerContext {
public:
	uint64_t GetFlags() const { return this->Flags; }
	MemorySelection_t GetMemorySelectionType() const { return this->MemorySelectionType; }
	const uint8_t* GetAddress() const { return this->Address; }
	const uint32_t GetRegionSize() const { return this->RegionSize; }
	const std::vector<Filter_t> GetFilters() const { return this->Filters; }
	ScannerContext(uint64_t qwFlags, MemorySelection_t MemorySelectionType, uint8_t* pAddress, uint32_t dwRegionSize, std::vector<Filter_t> Filters) : Flags(qwFlags), MemorySelectionType(MemorySelectionType), Address(pAddress), RegionSize(dwRegionSize), Filters(Filters) {}
protected:
	const uint64_t Flags;
	const MemorySelection_t MemorySelectionType;
	const uint8_t* Address;
	const uint32_t RegionSize;
	const std::vector<Filter_t> Filters;
};