class MemDump {
public:
	MemDump(HANDLE hProcess, uint32_t dwPid);
	bool Create(uint8_t* pAddress, SIZE_T cbSize, wchar_t* pDumpFilePath, size_t ccDumpFilePathLen);
	static bool Initialize();
protected:
	static std::wstring Folder;
	HANDLE Handle;
	uint32_t Pid;
};