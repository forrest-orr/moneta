#include "StdAfx.h"
#include "Thread.hpp"

using namespace std;

void Thread::SetEntryPoint(void* pStartAddress) {
	this->StartAddress = pStartAddress;
}
Thread::Thread(uint32_t dwTid) : Id(dwTid) {}
Thread::Thread(uint32_t dwTid, void* pStartAddress) : Id(dwTid), StartAddress(pStartAddress) {}