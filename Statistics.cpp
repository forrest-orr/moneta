/*
____________________________________________________________________________________
| _______  _____  __   _ _______ _______ _______                                   |
| |  |  | |     | | \  | |______    |    |_____|                                   |
| |  |  | |_____| |  \_| |______    |    |     |                                   |
|__________________________________________________________________________________|
| Moneta ~ Usermode memory scanner & malware hunter                                |
|----------------------------------------------------------------------------------|
| https://www.forrest-orr.net/post/malicious-memory-artifacts-part-i-dll-hollowing |
|----------------------------------------------------------------------------------|
| Author: Forrest Orr - 2020                                                       |
|----------------------------------------------------------------------------------|
| Contact: forrest.orr@protonmail.com                                              |
|----------------------------------------------------------------------------------|
| Licensed under GNU GPLv3                                                         |
|__________________________________________________________________________________|
| ## Features                                                                      |
|                                                                                  |
| ~ Query the memory attributes of any accessible process(es).                     |
| ~ Identify private, mapped and image memory.                                     |
| ~ Correlate regions of memory to their underlying file on disks.                 |
| ~ Identify PE headers and sections corresponding to image memory.                |
| ~ Identify modified regions of mapped image memory.                              |
| ~ Identify abnormal memory attributes indicative of malware.                     |
| ~ Create memory dumps of user-specified memory ranges                            |
| ~ Calculate memory permission/type statistics                                    |
|__________________________________________________________________________________|

*/

#include "StdAfx.h"
#include "Memory.hpp"
#include "Interface.hpp"

using namespace std;
using namespace Memory;

void PermissionRecord::UpdateMap(vector<Subregion*> SubregionRecords) {
	for (vector<Subregion*>::const_iterator RecordItr = SubregionRecords.begin(); RecordItr != SubregionRecords.end(); ++RecordItr) {
		if (!PermissionMap->count((*RecordItr)->GetBasic()->Type)) {
			PermissionMap->insert(make_pair((*RecordItr)->GetBasic()->Type, map<uint32_t, uint32_t>()));
		}

		map<uint32_t, uint32_t>& CountMap = PermissionMap->at((*RecordItr)->GetBasic()->Type);

		if (!CountMap.count((*RecordItr)->GetBasic()->Protect)) {
			CountMap.insert(make_pair((*RecordItr)->GetBasic()->Protect, 0));
		}

		CountMap[(*RecordItr)->GetBasic()->Protect]++;
	}
}

PermissionRecord::PermissionRecord(vector<Subregion*> SubregionRecords) {
	PermissionMap = new map<uint32_t, map<uint32_t, uint32_t>>();
	UpdateMap(SubregionRecords);
}

void PermissionRecord::ShowRecords() {
	Interface::Log("\r\nMemory statistics\r\n");
	for (map<uint32_t, map<uint32_t, uint32_t>>::const_iterator Itr = PermissionMap->begin(); Itr != PermissionMap->end(); ++Itr) {
		int32_t nTotalRegions = 0, nX = 0;

		for (map<uint32_t, uint32_t>::const_iterator Itr2 = Itr->second.begin(); Itr2 != Itr->second.end(); ++Itr2) {
			nTotalRegions += Itr2->second;
		}

		Interface::Log("  %ws [%d total]\r\n", Subregion::TypeSymbol(Itr->first), nTotalRegions);

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
