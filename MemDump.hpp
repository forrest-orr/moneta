#define MEMDMP_OPT_FLAG_FROM_BASE 0x1
#define MEMDMP_OPT_FLAG_SUSPICIOUS 0x2

class MemDump {
public:
	MemDump(HANDLE hProcess, uint32_t dwPid);
	bool Create(MEMORY_BASIC_INFORMATION *, wchar_t* DumFilePath, size_t ccDumFilePathLen);
	bool Create(std::wstring Folder, MEMORY_BASIC_INFORMATION *, wchar_t* DumFilePath, size_t ccDumFilePathLen);
	uint32_t GetPid();
	static bool Initialize();
protected:
	static std::wstring Folder;
	HANDLE Handle;
	uint32_t Pid;
};