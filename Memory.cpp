#include "StdAfx.h"
#include "Memory.hpp"

using namespace std;

MemoryRegionDetail::MemoryRegionDetail(MEMORY_BASIC_INFORMATION* pMemBasicInfo, MEMORY_REGION_INFORMATION* pMemRegionInfo) {
	this->Basic = pMemBasicInfo;
	this->Region = pMemRegionInfo;
}

MemoryRegionDetail::~MemoryRegionDetail() {
	if (Basic != nullptr) {
		delete Basic;
	}

	if (Region != nullptr) {
		delete Basic;
	}
}

MEMORY_BASIC_INFORMATION* MemoryRegionDetail::GetBasic() {
	return Basic;
}

MEMORY_REGION_INFORMATION* MemoryRegionDetail::GetRegion() {
	return Region;
}