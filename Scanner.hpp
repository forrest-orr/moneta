#define FILTER_FLAG_UNSIGNED_MODULES 0x1
#define FILTER_FLAG_METADATA_MODULES 0x2
#define FILTER_FLAG_CLR_PRVX 0x4
#define FILTER_FLAG_CLR_HEAP 0x8
#define FILTER_FLAG_WOW64_INIT 0x10

enum class MemorySelection_t {
	Invalid,
	Block,
	All,
	Suspicious,
	Referenced
};

class ScannerContext {
public:
	uint64_t GetFlags() const { return this->Flags; }
	MemorySelection_t GetMemorySelectionType() const { return this->MemorySelectionType; }
	const uint8_t* GetAddress() const { return this->Address; }
	const uint32_t GetRegionSize() const { return this->RegionSize; }
	const uint64_t GetFilters() const { return this->Filters; }
	ScannerContext(uint64_t qwFlags, MemorySelection_t MemorySelectionType, uint8_t* pAddress, uint32_t dwRegionSize, uint64_t qwFilters) : Flags(qwFlags), MemorySelectionType(MemorySelectionType), Address(pAddress), RegionSize(dwRegionSize), Filters(qwFilters) {}
protected:
	const uint64_t Flags;
	const MemorySelection_t MemorySelectionType;
	const uint8_t* Address;
	const uint32_t RegionSize;
	const uint64_t Filters;
};