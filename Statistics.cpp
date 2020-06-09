/*
__________________________________________________________________________________________
| _______  _____  __   _ _______ _______ _______                                         |
| |  |  | |     | | \  | |______    |    |_____|                                         |
| |  |  | |_____| |  \_| |______    |    |     |                                         |
|________________________________________________________________________________________|
| Moneta ~ Usermode memory scanner & malware hunter                                      |
|----------------------------------------------------------------------------------------|
| https://www.forrest-orr.net/post/malicious-memory-artifacts-part-ii-bypassing-scanners |
|----------------------------------------------------------------------------------------|
| Author: Forrest Orr - 2020                                                             |
|----------------------------------------------------------------------------------------|
| Contact: forrest.orr@protonmail.com                                                    |
|----------------------------------------------------------------------------------------|
| Licensed under GNU GPLv3                                                               |
|________________________________________________________________________________________|
| ## Features                                                                            |
|                                                                                        |
| ~ Query the memory attributes of any accessible process(es).                           |
| ~ Identify private, mapped and image memory.                                           |
| ~ Correlate regions of memory to their underlying file on disks.                       |
| ~ Identify PE headers and sections corresponding to image memory.                      |
| ~ Identify modified regions of mapped image memory.                                    |
| ~ Identify abnormal memory attributes indicative of malware.                           |
| ~ Create memory dumps of user-specified memory ranges                                  |
| ~ Calculate memory permission/type statistics                                          |
|________________________________________________________________________________________|

*/

#include "StdAfx.h"
#include "Memory.hpp"
#include "Interface.hpp"
#include "Suspicions.hpp"
#include "Statistics.hpp"

using namespace std;
using namespace Memory;

void PermissionRecord::UpdateMap(vector<Subregion*> SubregionRecords) {
	for (vector<Subregion*>::const_iterator RecordItr = SubregionRecords.begin(); RecordItr != SubregionRecords.end(); ++RecordItr) {
		if (!PermissionMap->count((*RecordItr)->GetBasic()->Type)) {
			PermissionMap->insert(make_pair((*RecordItr)->GetBasic()->Type, map<uint32_t, uint32_t>()));
		}

		map<uint32_t, uint32_t>& CountMap = PermissionMap->at((*RecordItr)->GetBasic()->Type);
		uint32_t PagePermissions[] = {
			PAGE_READONLY,
			PAGE_READWRITE,
			PAGE_EXECUTE_READ,
			PAGE_EXECUTE_READWRITE,
			PAGE_EXECUTE_WRITECOPY,
			PAGE_WRITECOPY,
			PAGE_EXECUTE,
			PAGE_NOACCESS
		};

		for (uint32_t dwX = 0; dwX < (sizeof(PagePermissions) / sizeof(uint32_t)); dwX++) {
			if (!CountMap.count(PagePermissions[dwX])) {
				CountMap.insert(make_pair(PagePermissions[dwX], 0));
			}

			if (((*RecordItr)->GetBasic()->Protect & PagePermissions[dwX])) {
				CountMap[PagePermissions[dwX]]++;
				this->TotalRegions++;
			}
		}

		//CountMap[(*RecordItr)->GetBasic()->Protect]++;
	}
}

PermissionRecord::PermissionRecord(vector<Subregion*> SubregionRecords) : PermissionMap(new map<uint32_t, map<uint32_t, uint32_t>>()) {
	UpdateMap(SubregionRecords);
}

void PermissionRecord::ShowRecords() const {
	Interface::Log("\r\nMemory statistics\r\n");
	for (map<uint32_t, map<uint32_t, uint32_t>>::const_iterator Itr = PermissionMap->begin(); Itr != PermissionMap->end(); ++Itr) {
		int32_t nTotalRegions = 0, nX = 0;

		for (map<uint32_t, uint32_t>::const_iterator Itr2 = Itr->second.begin(); Itr2 != Itr->second.end(); ++Itr2) {
			nTotalRegions += Itr2->second;
		}

		Interface::Log("  %ws [%d total]\r\n", Subregion::TypeSymbol(Itr->first), nTotalRegions); // Total regions for the current memory type only

		for (map<uint32_t, uint32_t>::const_iterator Itr2 = Itr->second.begin(); Itr2 != Itr->second.end(); ++Itr2, nX++) {
			if (!nX) {
				Interface::Log("  |__ ");
			}
			else {
				Interface::Log("    | ");
			}

			switch (Itr2->first) {
			case PAGE_READONLY:
				Interface::Log("PAGE_READONLY: %d (%f%%)", Itr2->second, static_cast<float>(Itr2->second) / nTotalRegions * 100.0);
				break;
			case PAGE_READWRITE:
				Interface::Log("PAGE_READWRITE: %d (%f%%)", Itr2->second, static_cast<float>(Itr2->second) / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_READ:
				Interface::Log("PAGE_EXECUTE_READ: %d (%f%%)", Itr2->second, static_cast<float>(Itr2->second) / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_READWRITE:
				Interface::Log("PAGE_EXECUTE_READWRITE: %d (%f%%)", Itr2->second, static_cast<float>(Itr2->second) / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE_WRITECOPY:
				Interface::Log("PAGE_EXECUTE_WRITECOPY: %d (%f%%)", Itr2->second, static_cast<float>(Itr2->second) / nTotalRegions * 100.0);
				break;
			case PAGE_WRITECOPY:
				Interface::Log("PAGE_WRITECOPY: %d (%f%%)", Itr2->second, static_cast<float>(Itr2->second) / nTotalRegions * 100.0);
				break;
			case PAGE_EXECUTE:
				Interface::Log("PAGE_EXECUTE: %d (%f%%)", Itr2->second, static_cast<float>(Itr2->second) / nTotalRegions * 100.0);
				break;
			case PAGE_NOACCESS:
				Interface::Log("PAGE_NOACCESS: %d (%f%%)", Itr2->second, static_cast<float>(Itr2->second) / nTotalRegions * 100.0);
				break;
			default:
				Interface::Log("0x%08x: %d (%f%%)", Itr2->first, Itr2->second, static_cast<float>(Itr2->second) / nTotalRegions * 100.0);
				break;
			}

			Interface::Log("\r\n");
		}
	}
}

void IocRecord::ShowRecords() const {
	int32_t nX = 0;

	if (this->TotalIoc) {
		Interface::Log("\r\IOC statistics [%d total]\r\n", this->TotalIoc);

		for (map<uint32_t, uint32_t>::const_iterator Itr = this->RecordMap->begin(); Itr != this->RecordMap->end(); ++Itr, nX++) {
			if (!nX) {
				Interface::Log("|__ ");
			}
			else {
				Interface::Log("  | ");
			}

			Interface::Log("%ws: %d (%f%%)\r\n", Suspicion::GetDescription((Suspicion::Type)Itr->first).c_str(), Itr->second, static_cast<float>(Itr->second) / this->TotalIoc * 100.0);
		}
	}
}

void IocRecord::UpdateMap(vector<Suspicion*>* Records) {
	for (vector<Suspicion*>::const_iterator ListItr = Records->begin(); ListItr != Records->end(); ++ListItr) {
		if (!this->RecordMap->count((*ListItr)->GetType())) {
			this->RecordMap->insert(make_pair((*ListItr)->GetType(), 1));
		}
		else {
			(*this->RecordMap)[(*ListItr)->GetType()]++;
		}

		this->TotalIoc++;
	}
}
IocRecord::IocRecord(vector<Suspicion*>* Records) : RecordMap(new map<uint32_t, uint32_t>()) {
	this->UpdateMap(Records);
}