#define MEMDMP_OPT_FLAG_FROM_BASE 0x1
#define MEMDMP_OPT_FLAG_SUSPICIOUS 0x2

class MemDump {
public:
	MemDump(HANDLE hProcess, uint32_t dwPid);
	bool Create(uint8_t* pAddress, SIZE_T cbSize, wchar_t* pDumpFilePath, size_t ccDumpFilePathLen);
	bool Create(std::wstring Folder, uint8_t* pAddress, SIZE_T cbSize, wchar_t* pDumpFilePath, size_t ccDumpFilePathLen);
	uint32_t GetPid();
	static bool Initialize();
protected:
	static std::wstring Folder;
	HANDLE Handle;
	uint32_t Pid;
};