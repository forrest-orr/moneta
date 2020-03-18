class Thread {
public:
	uint32_t GetTid() { return this->Id; }
	void* GetEntryPoint() { return this->StartAddress; }
	void SetEntryPoint(void*);
	Thread(uint32_t);
	Thread(uint32_t dwTid, void* pStartAddress);
protected:
	uint32_t Id;
	void* StartAddress;
};