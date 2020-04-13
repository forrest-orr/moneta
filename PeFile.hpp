class PeFile {
protected:
	IMAGE_DOS_HEADER* DosHdr;
	IMAGE_FILE_HEADER* FileHdr;
	IMAGE_SECTION_HEADER* SectHdrs;
	uint8_t* Data;
	uint32_t Size;
	uint16_t PeMagic;
	uint16_t PeArch;
	PeFile(const uint8_t* pPeBuf, uint32_t dwPeFileSize);
public:
	virtual bool IsPe32() = 0;
	virtual bool IsPe64() = 0;
	virtual uint16_t GetPeFileMagic() = 0;
	virtual uint16_t GetPeFileArch() = 0;
	virtual bool Validate() = 0;
	virtual bool GetDataDir(int8_t nIndex, uint32_t* pdwRva, uint32_t* pdwSize) = 0;
	virtual uint32_t RefreshCrc32() = 0;
	virtual void SetCrc32(uint32_t dwCrc32) = 0;
	virtual void SetDataDir(int8_t nIndex, uint32_t dwRva, uint32_t dwSize) = 0;
	virtual uint32_t GetSubsystem() = 0;
	virtual uint8_t* GetEntryPoint() = 0;
	virtual void SetSubsystem(uint32_t dwSubSystem) = 0;
	virtual void* GetImageBase() = 0;
	virtual void SetImageBase(const void* pNewImageBase) = 0;
	virtual uint16_t GetDllCharacteristics() = 0;
	virtual void SetDllCharacteristics(uint16_t wDllCharacteristics) = 0;
	virtual uint32_t GetImageSize() = 0;
	virtual bool IsDotNet() = 0;
	uint8_t* GetData() const { return this->Data; }
	uint32_t GetSize() const { return this->Size; }
	PIMAGE_DOS_HEADER GetDosHdr() const { return this->DosHdr; }
	IMAGE_FILE_HEADER* GetFileHdr() const { return this->FileHdr; }
	IMAGE_SECTION_HEADER* GetSectHdrs() const { return this->SectHdrs; }
	bool IsExe();
	bool IsDll();
	~PeFile();
	static PeFile* Load(const uint8_t* pPeBuf, uint32_t dwPeFileSize); // Factory
	static PeFile* Load(const std::wstring PeFilePath); // Factory
};

//
// This derived class is appropriate for holding methods which are type-specific but can be handled with a simple difference in template, not something so fundamental that it must be placed in an architecture-specific sub class.
//

template<typename NtHdrType> class PeArch : public PeFile { // Every method within this class must have the same template prototype as the class itself. Types used to initialize the template are inheritted by all methods as well. Note that a template function CANNOT be declared within a class unless its template matches that of its containing class.
protected:
	NtHdrType* NtHdr;
	PeArch(const uint8_t* pPeBuf, uint32_t dwPeFileSize);
public:
	bool Validate();
	NtHdrType* GetNtHdrs();
	uint32_t RefreshCrc32();
	void SetCrc32(uint32_t dwCrc32);
	bool GetDataDir(int8_t nIndex, uint32_t* pdwRva, uint32_t* pdwSize);
	void SetDataDir(int8_t nIndex, uint32_t dwRva, uint32_t dwSize);
	uint32_t GetSubsystem();
	void SetSubsystem(uint32_t dwSubSystem);
	void* GetImageBase();
	void SetImageBase(const void* pNewImageBase);
	uint8_t* GetEntryPoint();
	uint16_t GetDllCharacteristics();
	void SetDllCharacteristics(uint16_t wDllCharacteristics);
	uint32_t GetImageSize();
	bool IsDotNet();
};

class PeArch32 : public PeArch<IMAGE_NT_HEADERS32> {
public:
	bool IsPe32() { return true; }
	bool IsPe64() { return false; }
	uint16_t GetPeFileMagic() { return IMAGE_NT_OPTIONAL_HDR32_MAGIC; }
	uint16_t GetPeFileArch() { return IMAGE_FILE_MACHINE_I386; }
	PeArch32(const uint8_t* pPeBuf, uint32_t dwPeFileSize);
};

class PeArch64 : public PeArch<IMAGE_NT_HEADERS64> {
public:
	bool IsPe32() { return false; }
	bool IsPe64() { return true; }
	uint16_t GetPeFileMagic() { return IMAGE_NT_OPTIONAL_HDR64_MAGIC; }
	uint16_t GetPeFileArch() { return IMAGE_FILE_MACHINE_AMD64; }
	PeArch64(const uint8_t* pPeBuf, uint32_t dwPeFileSize);
};