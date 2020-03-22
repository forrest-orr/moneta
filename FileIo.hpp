class FileBase {
protected:
	std::wstring Path;
	uint8_t* FileData;
	uint32_t FileSize;
	bool Phantom;
public:
	~FileBase();
	FileBase(std::wstring TargetPath, bool bMemStore, bool bForceOpen = true);
	FileBase(std::wstring DesiredPath, uint8_t* DataBuf, uint32_t dwSize);
	uint8_t* GetData() { return this->FileData; }
	uint32_t GetSize() { return this->FileSize; }
	bool ToDisk(bool bAppend = false);
	std::wstring GetPath() { return this->Path; }
	bool IsPhantom() { return this->Phantom; }
	static bool TranslateDevicePath(const wchar_t* DevicePath, wchar_t* TranslatedPath);
	static bool ArchWow64PathExpand(const wchar_t* TargetFilePath, wchar_t* OutputPath, size_t ccOutputPathLength);
};