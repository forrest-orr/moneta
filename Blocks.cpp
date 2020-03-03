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

SBlock::SBlock(MEMORY_BASIC_INFORMATION* pMemBasicInfo, MEMORY_REGION_INFORMATION* pMemRegionInfo, vector<Thread *> Threads1) : Basic(pMemBasicInfo), Region(pMemRegionInfo) {
	// Detect overlapping threads
	for (vector<Thread *>::const_iterator ThItr = Threads1.begin(); ThItr != Threads1.end(); ++ThItr) {
		if ((*ThItr)->GetEntryPoint() >= this->Basic->BaseAddress && (*ThItr)->GetEntryPoint() < ((uint8_t *)this->Basic->BaseAddress + this->Basic->RegionSize)) {
			//Thread* SbTh = new Thread((*ThItr)->GetTid());
			this->Threads.push_back(new Thread((*ThItr)->GetTid(), (*ThItr)->GetEntryPoint()));
		}
	}
}

SBlock::~SBlock() {
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

std::vector<Thread*> SBlock::GetThreads() {
	return this->Threads;
}

MEMORY_BASIC_INFORMATION* SBlock::GetBasic() {
	return Basic;
}

MEMORY_REGION_INFORMATION* SBlock::GetRegion() {
	return Region;
}

const wchar_t* SBlock::ProtectSymbol(uint32_t dwProtect) {
	switch (dwProtect) {
	case PAGE_READONLY:
		return L"R";
	case PAGE_READWRITE:
		return L"RW";
	case PAGE_EXECUTE_READ:
		return L"RX";
	case PAGE_EXECUTE_READWRITE:
		return L"RWX";
	case PAGE_EXECUTE_WRITECOPY:
		return L"RWXC";
	case PAGE_EXECUTE:
		return L"X";
	case PAGE_WRITECOPY:
		return L"WC";
	case PAGE_NOACCESS:
		return L"NA";
	case PAGE_WRITECOMBINE:
		return L"WCB";
	case PAGE_GUARD:
		return L"PG";
	case PAGE_NOCACHE:
		return L"NC";
	default: return L"?";
	}
}

const wchar_t* SBlock::AttribDesc(MEMORY_BASIC_INFORMATION *pMbi) {
	if (pMbi->State == MEM_COMMIT) {
		return ProtectSymbol(pMbi->Protect);
	}
	else if (pMbi->State == MEM_FREE) {
		return L"Free";
	}
	else if (pMbi->State == MEM_RESERVE) {
		return L"Reserve";
	}
		
	return L"?";
}

const wchar_t* SBlock::TypeSymbol(uint32_t dwType) {
	if (dwType == MEM_IMAGE) {
		return L"IMG";
	}
	else if (dwType == MEM_MAPPED) {
		return L"MAP";
	}
	else if (dwType == MEM_PRIVATE) {
		return L"PRV";
	}
	else {
		return L"?";
	}
}

uint32_t SBlock::GetPrivateSize(HANDLE hProcess, uint8_t* pBaseAddress, uint32_t dwSize) {
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

bool SBlock::PageExecutable(uint32_t dwProtect) {
	return (dwProtect == PAGE_EXECUTE || dwProtect == PAGE_EXECUTE_READ || dwProtect == PAGE_EXECUTE_READWRITE);
}


///////

void MemoryPermissionRecord::UpdateMap(list<SBlock*> MemBasicRecords) {
	for (list<SBlock*>::const_iterator RecordItr = MemBasicRecords.begin(); RecordItr != MemBasicRecords.end(); ++RecordItr) {
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

MemoryPermissionRecord::MemoryPermissionRecord(list<SBlock*> MemBasicRecords) {
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