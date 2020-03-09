//typedef class Thread;

class SBlock {
protected:
	MEMORY_BASIC_INFORMATION* Basic;
	std::vector<Moneta::Thread*> Threads;
	uint32_t PrivateSize;
public:
	SBlock(HANDLE hProcess, MEMORY_BASIC_INFORMATION* pMbi, std::vector<Moneta::Thread*> Threads1);
	~SBlock();
	MEMORY_BASIC_INFORMATION* GetBasic();
	std::vector<Moneta::Thread*> GetThreads();
	uint32_t GetPrivateSize() { return this->PrivateSize;  }
	static uint32_t QueryPrivateSize(HANDLE hProcess, uint8_t* pBaseAddress, uint32_t dwSize);
	static const wchar_t* ProtectSymbol(uint32_t dwProtect);
	static const wchar_t* AttribDesc(MEMORY_BASIC_INFORMATION* pMbi);
	static const wchar_t* TypeSymbol(uint32_t dwType);
	static const wchar_t* StateSymbol(uint32_t dwState);
	static bool PageExecutable(uint32_t dwProtect);
};

class MemoryPermissionRecord { // Record takes basic/region memory structures, and sorts them into a map. Class can be used to show the map.
protected:
	std::map<uint32_t, std::map<uint32_t, uint32_t>>* MemPermMap; // Primary key is the memory type, secondary map key is the permission attribute (and its pair value is the count).
public:
	void UpdateMap(std::vector<SBlock*> MemBasicRecords);
	MemoryPermissionRecord(std::vector<SBlock*> MemBasicRecords);
	void ShowRecords();
};