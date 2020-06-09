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
	ClrPrvRwxHeap
};

class ScannerContext {
public:
	uint64_t GetFlags() const { return this->Flags; }
	MemorySelection_t GetMemorySelectionType() const { return this->MemorySelectionType; }
	const uint8_t* GetAddress() const { return this->Address; }
	const uint32_t GetRegionSize() const { return this->RegionSize; }
	const std::vector<Filter_t> GetFilters() const { return this->Filters; }
	uint32_t GetIocCount() const { return this->TotalIoc; }
	void SetIocCount(uint32_t dwTotalIoc) { this->TotalIoc = dwTotalIoc; }
	std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion*>>>* GetIocMap() const { return this->IocMap; }
	void SetIocMap(std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion*>>>*  IocMap) { this->IocMap = IocMap; }
	ScannerContext(uint64_t qwFlags, MemorySelection_t MemorySelectionType, uint8_t* pAddress, uint32_t dwRegionSize, std::vector<Filter_t> Filters) : Flags(qwFlags), MemorySelectionType(MemorySelectionType), Address(pAddress), RegionSize(dwRegionSize), Filters(Filters), TotalIoc(0), IocMap(nullptr) {}
protected:
	const uint64_t Flags;
	const MemorySelection_t MemorySelectionType;
	const uint8_t* Address;
	const uint32_t RegionSize;
	const std::vector<Filter_t> Filters;
	uint32_t TotalIoc;
	std::map <uint8_t*, std::map<uint8_t*, std::list<Suspicion*>>> *IocMap;
};