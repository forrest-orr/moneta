class FileBase {
protected:
	std::wstring Path;
	uint8_t* Data = nullptr;
	uint32_t Size = 0;
	bool Phantom;

public:
	~FileBase();
	FileBase(std::wstring TargetPath, bool bMemStore, bool bForceOpen = true);
	FileBase(std::wstring DesiredPath, uint8_t* pDataBuf, uint32_t dwSize);
	uint8_t* FileData();
	uint32_t FileSize();
	bool ToDisk(bool bAppend = false);
	std::wstring GetPath();
	bool IsPhantom();
};