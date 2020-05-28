namespace Processes {
	typedef class Thread;
	typedef class Process;
}

int32_t QueryDotNetVersion(uint32_t dwPid);
void* LoadMscordacwksDll(int32_t nDotNetVersion, bool bIsWow64);
bool EnumerateClrMemoryRegions(Processes::Process *ProcessObj, HMODULE hMscordacwksDll);