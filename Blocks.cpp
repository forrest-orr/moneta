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

MemoryBlock::MemoryBlock(MEMORY_BASIC_INFORMATION* pMemBasicInfo, MEMORY_REGION_INFORMATION* pMemRegionInfo, vector<Thread *> Threads1) : Basic(pMemBasicInfo), Region(pMemRegionInfo) {
	// Detect overlapping threads
	for (vector<Thread *>::const_iterator ThItr = Threads1.begin(); ThItr != Threads1.end(); ++ThItr) {
		if ((*ThItr)->GetEntryPoint() >= this->Basic->BaseAddress && (*ThItr)->GetEntryPoint() < ((uint8_t *)this->Basic->BaseAddress + this->Basic->RegionSize)) {
			//Thread* SbTh = new Thread((*ThItr)->GetTid());
			this->Threads.push_back(new Thread((*ThItr)->GetTid(), (*ThItr)->GetEntryPoint()));
		}
	}
}

MemoryBlock::~MemoryBlock() {
	//Interface::Log("mem destructor\r\n");
	if (this->Basic != nullptr) {
		delete Basic;
	}

	if (this->Region != nullptr) {
		delete Region;
	}

	for (vector<Thread*>::const_iterator Itr = this->Threads.begin(); Itr != this->Threads.end(); ++Itr) {
		delete* Itr;
	}

	//Interface::Log("mem destructor2\r\n");
}

std::vector<Thread*> MemoryBlock::GetThreads() {
	return this->Threads;
}

MEMORY_BASIC_INFORMATION* MemoryBlock::GetBasic() {
	return Basic;
}

MEMORY_REGION_INFORMATION* MemoryBlock::GetRegion() {
	return Region;
}

const char* Moneta::PermissionSymbol(MEMORY_BASIC_INFORMATION *pMbi) {
	switch (pMbi->Protect) {
	case PAGE_READONLY:
		return "R    ";
	case PAGE_READWRITE:
		return "RW   ";
	case PAGE_EXECUTE_READ:
		return "RX   ";
	case PAGE_EXECUTE_READWRITE:
		return "RWX  ";
	case PAGE_EXECUTE_WRITECOPY:
		return "RWXC ";
	case PAGE_EXECUTE:
		return "X    ";
	case PAGE_WRITECOPY:
		return "WC   ";
	case PAGE_NOACCESS:
		return "NA   ";
	case PAGE_WRITECOMBINE:
		return "WCB  ";
	case PAGE_GUARD:
		return "PG   ";
	case PAGE_NOCACHE:
		return "NC   ";
	default:
		if (pMbi->State == MEM_FREE) {
			return "Free ";
		}
		else if (pMbi->State == MEM_RESERVE) {
			return "Reserved";
		}
		
		return "?    ";
	}
}

uint32_t Moneta::GetPrivateSize(HANDLE hProcess, uint8_t* pBaseAddress, uint32_t dwSize) {
	PSAPI_WORKING_SET_EX_INFORMATION* pWorkingSets = new PSAPI_WORKING_SET_EX_INFORMATION;
	uint32_t dwWorkingSetsSize = sizeof(PSAPI_WORKING_SET_EX_INFORMATION);
	uint32_t dwPrivateSize = 0;

	for (uint32_t dwPageOffset = 0; dwPageOffset < dwSize; dwPageOffset += 0x1000) {
		pWorkingSets->VirtualAddress = (pBaseAddress + dwPageOffset);
		if (K32QueryWorkingSetEx(hProcess, pWorkingSets, dwWorkingSetsSize)) {
			//Interface::Log("+ Successfully queried working set at 0x%p\r\n", pWorkingSets->VirtualAddress);

			if (!pWorkingSets->VirtualAttributes.Shared) {
				//Interface::Log("* Page at 0x%p is shared\r\n", pWorkingSets->VirtualAddress);
				dwPrivateSize += 0x1000;
			}
		}
		else {
			Interface::Log("- Failed to query working set at 0x%p\r\n", pWorkingSets->VirtualAddress);
		}
	}

	return dwPrivateSize;
}


///////

void MemoryPermissionRecord::UpdateMap(list<MemoryBlock*> MemBasicRecords) {
	for (list<MemoryBlock*>::const_iterator RecordItr = MemBasicRecords.begin(); RecordItr != MemBasicRecords.end(); ++RecordItr) {
		if (!MemPermMap->count((*RecordItr)->GetBasic()->Type)) {
			MemPermMap->insert(make_pair((*RecordItr)->GetBasic()->Type, map<uint32_t, uint32_t>()));
		}

		map<uint32_t, uint32_t>& CountMap = MemPermMap->at((*RecordItr)->GetBasic()->Type);

		if (!CountMap.count((*RecordItr)->GetBasic()->Protect)) {
			CountMap.insert(make_pair((*RecordItr)->GetBasic()->Protect, 0));
		}

		CountMap[(*RecordItr)->GetBasic()->Protect]++;
	}
}

MemoryPermissionRecord::MemoryPermissionRecord(list<MemoryBlock*> MemBasicRecords) {
	MemPermMap = new map<uint32_t, map<uint32_t, uint32_t>>();
	UpdateMap(MemBasicRecords);
}

void MemoryPermissionRecord::ShowRecords() {
	for (map<uint32_t, map<uint32_t, uint32_t>>::const_iterator Itr = MemPermMap->begin(); Itr != MemPermMap->end(); ++Itr) {
		switch (Itr->first) {
		case MEM_IMAGE:
			Interface::Log("~ Image memory:\r\n");
			break;
		case MEM_MAPPED:
			Interface::Log("~ Mapped memory:\r\n");
			break;
		case MEM_PRIVATE:
			Interface::Log("~ Private memory:\r\n");
			break;
		default:
			Interface::Log("~ Unknown memory (type 0x%08x):\r\n", Itr->first);
			break;
		}

		int32_t nTotalRegions = 0;

		for (map<uint32_t, uint32_t>::const_iterator Itr2 = Itr->second.begin(); Itr2 != Itr->second.end(); ++Itr2) {
			nTotalRegions += Itr2->second;
		}

		Interface::Log("  Total: %d\r\n", nTotalRegions);

		for (map<uint32_t, uint32_t>::const_iterator Itr2 = Itr->second.begin(); Itr2 != Itr->second.end(); ++Itr2) {
			switch (Itr2->first) {
			case PAGE_READONLY:
				Interface::Log("  PAGE_READONLY: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_READWRITE:
				Interface::Log("  PAGE_READWRITE: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_READ:
				Interface::Log("  PAGE_EXECUTE_READ: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_READWRITE:
				Interface::Log("  PAGE_EXECUTE_READWRITE: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_WRITECOPY:
				Interface::Log("  PAGE_EXECUTE_WRITECOPY: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_WRITECOPY:
				Interface::Log("  PAGE_WRITECOPY: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE:
				Interface::Log("  PAGE_EXECUTE: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_NOACCESS:
				Interface::Log("  PAGE_NOACCESS: %d (%f%%)\r\n", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			default:
				Interface::Log("  0x%08x: %d (%f%%)\r\n", Itr2->first, Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			}
		}
	}
}