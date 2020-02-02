class FileBase {
protected:
	std::wstring Path;
	uint8_t* Data = nullptr;
	uint32_t Size = 0;

public:
	~FileBase();
	FileBase(std::wstring TargetPath, bool bMemStore, bool bForceOpen = true);
	FileBase(std::wstring DesiredPath, uint8_t* pDataBuf, uint32_t dwSize);
	uint8_t* GetData();
	uint32_t GetSize();
	bool ToDisk(bool bAppend = false);
	std::wstring GetPath();
};