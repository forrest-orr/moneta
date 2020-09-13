class PeFile {
protected:
	IMAGE_DOS_HEADER* DosHdr;
	IMAGE_FILE_HEADER* FileHdr;
	IMAGE_SECTION_HEADER* SectHdrs;
	std::unique_ptr<uint8_t[]> Data;
	uint32_t Size;
	uint16_t PeMagic;
	uint16_t PeArch;
	bool FullPeLoaded;
	PeFile(const uint8_t* pPeBuf, uint32_t dwPeFileSize);
public:
	virtual std::wstring GetPeFileArchStr() const = 0;
	virtual bool IsPe32() = 0;
	virtual bool IsPe64() = 0;
	virtual uint16_t GetPeFileMagic() = 0;
	virtual uint16_t GetPeFileArch() = 0;
	virtual bool Validate() = 0;
	virtual bool GetDataDir(int8_t nIndex, uint32_t& rdwRva, uint32_t& rdwSize) = 0;
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
	virtual void* GetPAFromRVA(uint64_t qwRVA) = 0;
	virtual IMAGE_SECTION_HEADER* GetContainerSectHdr(uint64_t qwRVA) = 0;
	uint8_t* GetData() const { return this->Data.get(); }
	uint32_t GetSize() const { return this->Size; }
	PIMAGE_DOS_HEADER GetDosHdr() const { return this->DosHdr; }
	IMAGE_FILE_HEADER* GetFileHdr() const { return this->FileHdr; }
	IMAGE_SECTION_HEADER* GetSectHdrs() const { return this->SectHdrs; }
	bool IsExe();
	bool IsDll();
	static std::unique_ptr<PeFile> Load(const uint8_t* pPeBuf, uint32_t dwPeFileSize); // Factory
	static std::unique_ptr<PeFile> Load(const std::wstring &PeFilePath, bool bHdrOnly); // Factory
};

template<typename NtHdrType> class PeArch : public PeFile {
	// Every method within this class must have the same template prototype as the class itself. Types used to initialize the template are inheritted by all methods as well. Note that a template function CANNOT be declared within a class unless its template matches that of its containing class.
	// This derived class is appropriate for holding methods which are type-specific but can be handled with a simple difference in template, not something so fundamental that it must be placed in an architecture-specific sub class.
protected:
	NtHdrType* NtHdr;
	PeArch(const uint8_t* pPeBuf, uint32_t dwPeFileSize);
public:
	bool Validate();
	NtHdrType* GetNtHdrs();
	uint32_t RefreshCrc32();
	void SetCrc32(uint32_t dwCrc32);
	bool GetDataDir(int8_t nIndex, uint32_t& rdwRva, uint32_t& rdwSize);
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
	void* GetPAFromRVA(uint64_t qwRVA);
	IMAGE_SECTION_HEADER* GetContainerSectHdr(uint64_t qwRVA);
};

class PeArch32 : public PeArch<IMAGE_NT_HEADERS32> {
public:
	bool IsPe32() { return true; }
	bool IsPe64() { return false; }
	uint16_t GetPeFileMagic() { return IMAGE_NT_OPTIONAL_HDR32_MAGIC; }
	uint16_t GetPeFileArch() { return IMAGE_FILE_MACHINE_I386; }
	std::wstring GetPeFileArchStr() const { return L"32-bit"; }
	PeArch32(const uint8_t* pPeBuf, uint32_t dwPeFileSize);
};

class PeArch64 : public PeArch<IMAGE_NT_HEADERS64> {
public:
	bool IsPe32() { return false; }
	bool IsPe64() { return true; }
	uint16_t GetPeFileMagic() { return IMAGE_NT_OPTIONAL_HDR64_MAGIC; }
	uint16_t GetPeFileArch() { return IMAGE_FILE_MACHINE_AMD64; }
	std::wstring GetPeFileArchStr() const { return L"64-bit"; }
	PeArch64(const uint8_t* pPeBuf, uint32_t dwPeFileSize);
};