namespace Moneta {
	class Thread {
	public:
		uint32_t GetTid();
		void* GetEntryPoint();
		void SetEntryPoint(void*);
		Thread(uint32_t);
		Thread(uint32_t dwTid, void* pStartAddress);
	protected:
		uint32_t Id;
		void* StartAddress;
	};

	class Process : public AddressSpace {
	protected:
		uint32_t Pid;
		HANDLE Handle;
		std::wstring Name;
		BOOL Wow64; // bool and BOOL translate to different sizes, IsWow64Process pointed at a bool will corrupt memory.
		std::vector<Thread *> Threads;
	public:
		HANDLE GetHandle();
		uint32_t GetPid();
		BOOL IsWow64();
		Process(uint32_t);
		void Enumerate();
		~Process();
	};
}
