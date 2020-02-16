#include "StdAfx.h"
#include "FileIo.hpp"
#include "PE.hpp"
#include "Moneta.hpp"
#include "Process.hpp"
#include "Blocks.hpp"
#include "Interface.hpp"

using namespace std;
using namespace PeFile;
using namespace Moneta;

uint32_t Thread::GetTid() {
	return this->Id;
}

void* Thread::GetEntryPoint() {
	return this->StartAddress;
}

void Thread::SetEntryPoint(void* pStartAddress) {
	this->StartAddress = pStartAddress;
}
Thread::Thread(uint32_t dwTid) : Id(dwTid) {}
Thread::Thread(uint32_t dwTid, void *pStartAddress) : Id(dwTid), StartAddress(pStartAddress) {}

Process::~Process() {
	if (this->Handle != nullptr) {
		CloseHandle(this->Handle);
	}
}

HANDLE Process::GetHandle() {
	return this->Handle;
}

BOOL Process::IsWow64() {
	return this->Wow64;
}