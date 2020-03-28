class MemDump {
public:
	MemDump(HANDLE hProcess, uint32_t dwPid);
	bool Create(const MEMORY_BASIC_INFORMATION *, wchar_t* DumFilePath, size_t ccDumFilePathLen) const;
	bool Create(std::wstring Folder, const MEMORY_BASIC_INFORMATION *, wchar_t* DumFilePath, size_t ccDumFilePathLen) const;
	uint32_t GetPid() const { return this->Pid; }
	static bool Initialize();
protected:
	static std::wstring Folder;
	HANDLE Handle;
	uint32_t Pid;
};

#define MEMDMP_OPT_FLAG_FROM_BASE 0x1
#define MEMDMP_OPT_FLAG_SUSPICIOUS 0x2
