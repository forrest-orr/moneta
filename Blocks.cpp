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

SBlock::SBlock(HANDLE hProcess, MEMORY_BASIC_INFORMATION* pMbi, vector<Thread *> Threads1) : ProcessHandle(hProcess), Basic(pMbi) {
	for (vector<Thread *>::const_iterator ThItr = Threads1.begin(); ThItr != Threads1.end(); ++ThItr) {
		if ((*ThItr)->GetEntryPoint() >= this->Basic->BaseAddress && (*ThItr)->GetEntryPoint() < ((uint8_t *)this->Basic->BaseAddress + this->Basic->RegionSize)) {
			this->Threads.push_back(new Thread((*ThItr)->GetTid(), (*ThItr)->GetEntryPoint()));
		}
	}

	//this->PrivateSize = SBlock::QueryPrivateSize(hProcess, static_cast<uint8_t*>(this->Basic->BaseAddress), (uint32_t)(this->Basic->RegionSize)); // This is the most thorough way to query this data however it is a major performance drain. Working set queries have been moved to only occur on selected subregion blocks.
}

SBlock::~SBlock() {
	if (this->Basic != nullptr) {
		delete Basic;
	}

	for (vector<Thread*>::const_iterator Itr = this->Threads.begin(); Itr != this->Threads.end(); ++Itr) {
		delete* Itr;
	}
}

std::vector<Thread*> SBlock::GetThreads() {
	return this->Threads;
}

void SBlock::SetPrivateSize(uint32_t dwPrivateSize) {
	this->PrivateSize = dwPrivateSize;
}

MEMORY_BASIC_INFORMATION* SBlock::GetBasic() {
	return Basic;
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

const wchar_t* SBlock::StateSymbol(uint32_t dwState) {
	if (dwState == MEM_COMMIT) {
		return L"Commit";
	}
	else if (dwState == MEM_FREE) {
		return L"Free";
	}
	else if (dwState == MEM_RESERVE) {
		return L"Reserve";
	}
	else {
		return L"?";
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

const wchar_t* TranslateRegionType() {
	//
}

uint32_t SBlock::QueryPrivateSize() {
	uint32_t dwPrivateSize = 0;

	if (this->Basic->State == MEM_COMMIT && this->Basic->Protect != PAGE_NOACCESS) {
		PSAPI_WORKING_SET_EX_INFORMATION* pWorkingSets = new PSAPI_WORKING_SET_EX_INFORMATION;
		uint32_t dwWorkingSetsSize = sizeof(PSAPI_WORKING_SET_EX_INFORMATION);

		for (uint32_t dwPageOffset = 0; dwPageOffset < this->Basic->RegionSize; dwPageOffset += 0x1000) {
			pWorkingSets->VirtualAddress = ((uint8_t*)this->Basic->BaseAddress + dwPageOffset);
			if (K32QueryWorkingSetEx(this->ProcessHandle, pWorkingSets, dwWorkingSetsSize)) {
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
	}

	return dwPrivateSize;
}

bool SBlock::PageExecutable(uint32_t dwProtect) {
	return (dwProtect == PAGE_EXECUTE || dwProtect == PAGE_EXECUTE_READ || dwProtect == PAGE_EXECUTE_READWRITE);
}

void MemoryPermissionRecord::UpdateMap(vector<SBlock*> MemBasicRecords) {
	for (vector<SBlock*>::const_iterator RecordItr = MemBasicRecords.begin(); RecordItr != MemBasicRecords.end(); ++RecordItr) {
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

MemoryPermissionRecord::MemoryPermissionRecord(vector<SBlock*> MemBasicRecords) {
	MemPermMap = new map<uint32_t, map<uint32_t, uint32_t>>();
	UpdateMap(MemBasicRecords);
}

/*
  0x00007FFEF6720000:0x001f0000   | Executable image    | C:\Windows\System32\ntdll.dll
	0x00007FFEF6720000:0x00001000 | R        | Header   | 0x00000000
	0x00007FFEF6721000:0x00117000 | RX       | .text    | 0x00000000
	0x00007FFEF6721000:0x00117000 | RX       | RT       | 0x00000000
	  Thread 0x00007FFEF6753D60 [TID 0x0000137c]
	  Thread 0x00007FFEF6753D60 [TID 0x000004bc]
	0x00007FFEF6838000:0x00047000 | R        | .rdata   | 0x00000000
	0x00007FFEF687F000:0x00001000 | RW       | .data    | 0x00001000
	0x00007FFEF6880000:0x00002000 | WC       | .data    | 0x00000000
	0x00007FFEF6882000:0x00009000 | RW       | .data    | 0x00009000
	0x00007FFEF688B000:0x00085000 | R        | .pdata   | 0x00004000
	0x00007FFEF688B000:0x00085000 | R        | .mrdata  | 0x00004000
	0x00007FFEF688B000:0x00085000 | R        | .00cfg   | 0x00004000
	0x00007FFEF688B000:0x00085000 | R        | .rsrc    | 0x00004000
	0x00007FFEF688B000:0x00085000 | R        | .reloc   | 0x00004000
_________________________________________________________________
|                        | MEM_PRIVATE | MEM_MAPPED | MEM_IMAGE |
|------------------------|-------------|------------|-----------|
| PAGE_READONLY          | 11 (42.307693%)
|------------------------|
| PAGE_READWRITE         |
|------------------------|
| PAGE_EXECUTE_READ      |
|------------------------|
| PAGE_EXECUTE_READWRITE |
|------------------------|
| PAGE_EXECUTE_WRITECOPY |
|------------------------|
| PAGE_WRITECOPY         |
|------------------------|
| PAGE_EXECUTE           |
|------------------------|
| PAGE_NOACCESS          |
|________________________|


Memory statistics
  MEM_IMAGE [12007 total]
  |__ PAGE_NOACCESS 481 (4.005997%)
    | PAGE_READONLY: 189 (1.574082%)
	| PAGE_READWRITE: 5467 (45.531774%)
	| PAGE_EXECUTE_READ: 117 (0.974432%)
	| PAGE_EXECUTE_READWRITE: 352 (2.931623%)
  MEM_MAPPED [8052 total]
  |__   PAGE_NOACCESS: 1320 (16.393442%)


~ Private memory:
  Total: 12007
  0x00000000: 4729 (39.385357%)
  PAGE_NOACCESS: 481 (4.005997%)
  PAGE_READONLY: 189 (1.574082%)
  PAGE_READWRITE: 5467 (45.531774%)
  PAGE_EXECUTE_READ: 117 (0.974432%)
  PAGE_EXECUTE_READWRITE: 352 (2.931623%)
  0x00000104: 672 (5.596735%)
~ Mapped memory:
  Total: 8052
  0x00000000: 438 (5.439642%)
  PAGE_NOACCESS: 1320 (16.393442%)
  PAGE_READONLY: 2748 (34.128168%)
  PAGE_READWRITE: 3415 (42.411822%)
  PAGE_WRITECOPY: 131 (1.626925%)
~ Image memory:
  Total: 37319
  0x00000000: 3259 (8.732817%)
  PAGE_READONLY: 14749 (39.521423%)
  PAGE_READWRITE: 8980 (24.062809%)
  PAGE_WRITECOPY: 5988 (16.045447%)
  PAGE_EXECUTE: 1 (0.002680%)
  PAGE_EXECUTE_READ: 4332 (11.608028%)
  PAGE_EXECUTE_READWRITE: 10 (0.026796%)

*/
void MemoryPermissionRecord::ShowRecords() {
	Interface::Log("\r\nMemory statistics\r\n");
	for (map<uint32_t, map<uint32_t, uint32_t>>::const_iterator Itr = MemPermMap->begin(); Itr != MemPermMap->end(); ++Itr) {
		int32_t nTotalRegions = 0, nX = 0;

		for (map<uint32_t, uint32_t>::const_iterator Itr2 = Itr->second.begin(); Itr2 != Itr->second.end(); ++Itr2) {
			nTotalRegions += Itr2->second;
		}

		Interface::Log("  %ws [%d total]\r\n", SBlock::TypeSymbol(Itr->first), nTotalRegions);

		for (map<uint32_t, uint32_t>::const_iterator Itr2 = Itr->second.begin(); Itr2 != Itr->second.end(); ++Itr2, nX++) {
			if (!nX) {
				Interface::Log("  |__ ");
			}
			else {
				Interface::Log("    | ");
			}
			switch (Itr2->first) {
			case PAGE_READONLY:
				Interface::Log("PAGE_READONLY: %d (%f%%)", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_READWRITE:
				Interface::Log("PAGE_READWRITE: %d (%f%%)", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_READ:
				Interface::Log("PAGE_EXECUTE_READ: %d (%f%%)", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_READWRITE:
				Interface::Log("PAGE_EXECUTE_READWRITE: %d (%f%%)", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_WRITECOPY:
				Interface::Log("PAGE_EXECUTE_WRITECOPY: %d (%f%%)", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_WRITECOPY:
				Interface::Log("PAGE_WRITECOPY: %d (%f%%)", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE:
				Interface::Log("PAGE_EXECUTE: %d (%f%%)", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			case PAGE_NOACCESS:
				Interface::Log("PAGE_NOACCESS: %d (%f%%)", Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			default:
				Interface::Log("0x%08x: %d (%f%%)", Itr2->first, Itr2->second, (float)Itr2->second / nTotalRegions * 100.0);
				break;
			}

			Interface::Log("\r\n");
		}
	}
}

/*
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
}*/