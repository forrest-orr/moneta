namespace PeFile
{
	class PeBase
	{
	protected: // Allows inheritance from any derived class but no direct access from outside of base or derived classes.
		IMAGE_DOS_HEADER* DosHdr;
		IMAGE_FILE_HEADER* FileHdr;
		IMAGE_SECTION_HEADER* SectHdrs;
		uint8_t* Base;
		uint32_t Size;
		uint16_t PeMagic;
		uint16_t PeArch;
		PeBase(
			uint8_t* pPeFileBuf,
			uint32_t dwPeFileSize);

	public:
		virtual uint16_t GetPeArch() = 0;
		virtual uint16_t GetPeMagic() = 0;
		virtual bool Validate() = 0;
		virtual bool GetDataDir(int8_t nIndex, uint32_t* pdwRva, uint32_t* pdwSize) = 0;
		virtual uint32_t RefreshCrc32() = 0;
		virtual void SetCrc32(uint32_t dwCrc32) = 0;
		virtual void SetDataDir(int8_t nIndex, uint32_t dwRva, uint32_t dwSize) = 0;
		virtual uint32_t GetSubsystem() = 0;
		virtual uint8_t* GetEntryPoint() = 0;
		virtual void SetSubsystem(uint32_t dwSubSystem) = 0;
		virtual void* GetImageBase() = 0;
		virtual void SetImageBase(void* pNewImageBase) = 0;
		virtual uint16_t GetDllCharacteristics() = 0;
		virtual void SetDllCharacteristics(uint16_t wDllCharacteristics) = 0;
		virtual uint32_t GetImageSize() = 0;
		uint8_t* GetBase();
		uint32_t GetSize();
		PIMAGE_DOS_HEADER GetDosHdr();
		IMAGE_FILE_HEADER* GetFileHdr();
		IMAGE_SECTION_HEADER* GetSectHdrs();
		~PeBase();

		static PeBase* Load(uint8_t* pPeFileBuf, uint32_t dwPeFileSize); // Factory method for derived 32/64-bit classes
	};

	//
	// This derived class is appropriate for holding methods which are type-specific but can be handled with a simple difference in template, not something so fundamental that it must be placed in an architecture-specific sub class.
	//

	// Note that a template function CANNOT be declared within a class unless its template matches that of its containing class.

	template<typename NtHdrType> class PeArch : public PeBase { // Every method within this class must have the same template prototype as the class itself. Types used to initialize the template are inheritted by all methods as well.

	protected:
		NtHdrType* NtHdr;

		PeArch(
			uint8_t* pPeFileBuf,
			uint32_t dwPeFileSize);

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
		void SetImageBase(void* pNewImageBase);
		uint8_t* GetEntryPoint();
		uint16_t GetDllCharacteristics();
		void SetDllCharacteristics(uint16_t wDllCharacteristics);
		uint32_t GetImageSize();
	};

	class PeArch32 : public PeArch<IMAGE_NT_HEADERS32>
	{
	public:
		uint16_t GetPeMagic();
		uint16_t GetPeArch();
		PeArch32(uint8_t* pPeFileBuf, uint32_t dwPeFileSize);
	};

	class PeArch64 : public PeArch<IMAGE_NT_HEADERS64>
	{
	public:
		uint16_t GetPeMagic();
		uint16_t GetPeArch();
		PeArch64(uint8_t* pPeFileBuf, uint32_t dwPeFileSize);
	};
}
