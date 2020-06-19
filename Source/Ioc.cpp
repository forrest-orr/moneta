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
#include "FileIo.hpp"
#include "PeFile.hpp"
#include "Processes.hpp"
#include "Memory.hpp"
#include "Interface.hpp"
#include "MemDump.hpp"
#include "Ioc.hpp"

using namespace std;
using namespace Memory;
using namespace Processes;

Ioc::Ioc(Process* ParentProc, Entity* ParentObj, Subregion* Block, Ioc::Type Type) : ParentProcess(ParentProc), ParentObject(ParentObj), Sbr(Block), IocType(Type) {}

bool Ioc::InspectEntity(Process &ParentProc, Entity &ParentObj, map <uint8_t*, map<uint8_t*, list<Ioc *>>> *IocMap) {
	assert(IocMap != nullptr);

	list<Ioc *> AbSuspList;
	IocMap->insert(make_pair(static_cast<unsigned char*>(const_cast<void*>(ParentObj.GetStartVa())), map<uint8_t*, list<Ioc *>>()));
	map<uint8_t*, list<Ioc *>>& RefSubregionMap = IocMap->at(static_cast<unsigned char *>(const_cast<void*>(ParentObj.GetStartVa())));

	// It is important to ensure that all new IOC are added to the list of the existing map entry even if they share the same base address. This allows the region map entry to also hold subregion IOC such as modified hdr.
	// Create an entry in the primary map with the allocation base as a key and save a reference to the secondary map.
	// Create an IOC list for the region and every subregion, ensuring that subregions with suspicions which share the region address (for example modified headers) are adding their IOC to the same list so there are not 2 map entries for the region address.
	// In the event that no new lists were added to the secondary map, erase the primary map entry. Otherwise, preserve both the primary and secondary map entries.

	switch (ParentObj.GetType()) {
		case Entity::Type::PE_FILE: {
			PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>(&ParentObj);

			if (!PeEntity->IsNonExecutableImage()) {
				if (!PeEntity->GetFileBase()->IsPhantom() && !PeEntity->IsSigned()) {
					AbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, nullptr, UNSIGNED_MODULE));
				}

				if (!PeEntity->GetPebModule().Exists()) {
					AbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, nullptr, MISSING_PEB_ENTRY));
				}
				else {
					if (_wcsicmp(PeEntity->GetPebModule().GetPath().c_str(), PeEntity->GetFileBase()->GetPath().c_str()) != 0) { // Since the PEB module is queried by base address with GetModuleInfo/GetModuleFileNameExW rather than by name with GetModuleHandleEx, there may be a PEB link with a base address matching this image region but with a misleading name/path
						if (ParentProc.IsWow64()) { // This is an edge case in which in Wow64 a module may appear as C:\Windows\System32\kernel32.dll although the true path is C:\Windows\SysWOW64\kernel32.dll due to Wow64 FS redirection.
							wchar_t ReFormattedPath[MAX_PATH + 1] = { 0 };

							if (FileBase::ArchWow64PathExpand(PeEntity->GetPebModule().GetPath().c_str(), ReFormattedPath, MAX_PATH + 1)) {
								if (_wcsicmp(ReFormattedPath, PeEntity->GetFileBase()->GetPath().c_str()) != 0) {
									AbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, nullptr, MISMATCHING_PEB_MODULE));
								}
							}
						}
						else {
							AbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, nullptr, MISMATCHING_PEB_MODULE));
						}
					}
				}

				if (PeEntity->GetPeFile() != nullptr) {
					vector<PeVm::Section*> Sections = PeEntity->GetSections();
					for (vector<PeVm::Section*>::const_iterator SectItr = Sections.begin(); SectItr != Sections.end(); ++SectItr) {
						vector<Subregion*> Subregions = (*SectItr)->GetSubregions();

						for (vector<Subregion*>::iterator SbrItr = Subregions.begin(); SbrItr != Subregions.end(); ++SbrItr) {
							list<Ioc *> SbSuspList;
							list<Ioc *>& TargetSuspList = (*SbrItr)->GetBasic()->BaseAddress == ParentObj.GetStartVa() ? AbSuspList : SbSuspList;

							if (strcmp(reinterpret_cast<const char*>((*SectItr)->GetHeader()->Name), "Header") == 0 && (*SbrItr)->GetPrivateSize()) {
								TargetSuspList.push_back(new Ioc(&ParentProc, &ParentObj, *SbrItr, MODIFIED_HEADER));
							}

							if (Subregion::PageExecutable((*SbrItr)->GetBasic()->Protect) && !((*SectItr)->GetHeader()->Characteristics & IMAGE_SCN_MEM_EXECUTE)) {
								TargetSuspList.push_back(new Ioc(&ParentProc, &ParentObj, *SbrItr, DISK_PERMISSION_MISMATCH));
							}

							if (Subregion::PageExecutable((*SbrItr)->GetBasic()->Protect) && (*SbrItr)->GetPrivateSize()) {
								TargetSuspList.push_back(new Ioc(&ParentProc, &ParentObj, *SbrItr, MODIFIED_CODE));
							}

							if (SbSuspList.size()) { // Do not insert the list to the map if it overlaps with the region.
								RefSubregionMap.insert(make_pair(static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress), SbSuspList));
							}
						}
					}
				}
				else {
					AbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, nullptr, PHANTOM_IMAGE));
				}
			}

			break;
		}
		case Entity::Type::MAPPED_FILE: {
			vector<Subregion*> Subregions = ParentObj.GetSubregions(); // This must be done explicitly, otherwise each time GetSubregions is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.
			for (vector<Subregion*>::iterator SbrItr = Subregions.begin(); SbrItr != Subregions.end(); ++SbrItr) {
				list<Ioc *> SbSuspList;
				vector<Processes::Thread*> Threads = ParentProc.GetThreads();

				for (vector<Processes::Thread*>::const_iterator ThItr = Threads.begin(); ThItr != Threads.end(); ++ThItr) {
					if ((*ThItr)->GetEntryPoint() >= (*SbrItr)->GetBasic()->BaseAddress && (*ThItr)->GetEntryPoint() < (static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress) + (*SbrItr)->GetBasic()->RegionSize)) {
						SbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, *SbrItr, NON_IMAGE_THREAD));
					}
				}
				
				if (Subregion::PageExecutable((*SbrItr)->GetBasic()->Protect)) {
					SbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, *SbrItr, XMAP));
				}

				if (((*SbrItr)->GetFlags() & MEMORY_SUBREGION_FLAG_BASE_IMAGE)) {
					SbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, *SbrItr, NON_IMAGE_IMAGEBASE));
				}

				if (SbSuspList.size()) {
					RefSubregionMap.insert(make_pair(static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress), SbSuspList));
				}
			}

			break;
		}
		case Entity::Type::UNKNOWN: {
			vector<Subregion*> Subregions = ParentObj.GetSubregions(); // This must be done explicitly, otherwise each time GetSubregions is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

			if (Subregions.front()->GetBasic()->Type == MEM_PRIVATE) {
				for (vector<Subregion*>::iterator SbrItr = Subregions.begin(); SbrItr != Subregions.end(); ++SbrItr) {
					list<Ioc *> SbSuspList;
					if (Subregion::PageExecutable((*SbrItr)->GetBasic()->Protect)) {
						SbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, *SbrItr, XPRV));
					}

					if (((*SbrItr)->GetFlags() & MEMORY_SUBREGION_FLAG_BASE_IMAGE)) {
						SbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, *SbrItr, NON_IMAGE_IMAGEBASE));
					}

					vector<Processes::Thread*> Threads = ParentProc.GetThreads();

					for (vector<Processes::Thread*>::const_iterator ThItr = Threads.begin(); ThItr != Threads.end(); ++ThItr) {
						if ((*ThItr)->GetEntryPoint() >= (*SbrItr)->GetBasic()->BaseAddress && (*ThItr)->GetEntryPoint() < (static_cast<uint8_t*>((*SbrItr)->GetBasic()->BaseAddress) + (*SbrItr)->GetBasic()->RegionSize)) {
							SbSuspList.push_back(new Ioc(&ParentProc, &ParentObj, *SbrItr, NON_IMAGE_THREAD));
						}
					}

					if (SbSuspList.size()) {
						RefSubregionMap.insert(make_pair(static_cast<uint8_t *>((*SbrItr)->GetBasic()->BaseAddress), SbSuspList));
					}
				}
			}

			break;
		}
	}

	if (AbSuspList.size()) {
		RefSubregionMap.insert(make_pair(static_cast<unsigned char*>(const_cast<void*>(ParentObj.GetStartVa())), AbSuspList));
	}

	if (!RefSubregionMap.size()) {
		IocMap->erase(static_cast<unsigned char*>(const_cast<void*>(ParentObj.GetStartVa())));
	}

	return true;
}

wstring Ioc::GetDescription(Ioc::Type Type) {
	switch (Type) {
	case MODIFIED_CODE: return L"Modified code";
	case UNSIGNED_MODULE: return L"Unsigned module";
	case MISSING_PEB_ENTRY: return L"Missing PEB module";
	case MISMATCHING_PEB_MODULE: return L"Mismatching PEB module";
	case MODIFIED_HEADER: return L"Modified PE header";
	case DISK_PERMISSION_MISMATCH: return L"Inconsistent +x between disk and memory";
	case XMAP: return L"Abnormal mapped executable memory";
	case PHANTOM_IMAGE: return L"Phantom image";
	case XPRV: return L"Abnormal private executable memory";
	case NON_IMAGE_THREAD: return L"Thread within non-image memory region";
	case NON_IMAGE_IMAGEBASE: return L"Non-image primary image base";
	default: return L"?";
	}
}

void IocMap::EraseIoc(list<Ioc*> *RefIocList, list<Ioc*>::const_iterator IocListItr, map <uint8_t*, list<Ioc*>>* RefSubregionMap, map<uint8_t*, list<Ioc*>>::const_iterator SubregionMapItr, map <uint8_t*, map<uint8_t*, list<Ioc*>>>::const_iterator RegionMapItr) {
	assert(RefIocList != nullptr);
	assert(RefSubregionMap != nullptr);

	RefIocList->erase(IocListItr);

	if (!RefIocList->size()) {
		// Erase the suspicion list from the subregion map and then erase the subregion map from the region map. Finalize by removing the region map from the suspicion map itself.

		RefSubregionMap->erase(SubregionMapItr);

		if (!RefSubregionMap->size()) {
			this->Map->erase(RegionMapItr);
		}
	}
}

IocMap::~IocMap() {
	delete this->Map;
}

IocMap::IocMap() {
	this->Map = new map <uint8_t*, map<uint8_t*, list<Ioc*>>>();
}

int32_t IocMap::Filter(uint64_t qwFilterFlags) {
	bool bReWalkMap = false;

	do {
		if (bReWalkMap) {
			bReWalkMap = false; // The re-walk boolean is  honly set when a suspicion was filtered. Reset it each time this happens.
		}

		// Walk each region, subregion and corresponding IOC list
		// When an IOC is filtered remove it from the IOC list - an empty IOC list will remove the subregion entry and an empty subregion map will remove the region map entry.
		// Re-walk the updated map until there are no new filtered IOC

		for (map <uint8_t*, map<uint8_t*, list<Ioc*>>>::const_iterator RegionMapItr = this->Map->begin(); !bReWalkMap && RegionMapItr != this->Map->end(); ++RegionMapItr) {
			// Region map -> Key [Allocation base]
			//				-> Iocs map -> Key [Subregion address]
			//									   -> Iocs list

			map<uint8_t*, list<Ioc*>>& RefSubregionMap = this->Map->at(RegionMapItr->first);

			for (map<uint8_t*, list<Ioc*>>::const_iterator SubregionMapItr = RegionMapItr->second.begin(); !bReWalkMap && SubregionMapItr != RegionMapItr->second.end(); ++SubregionMapItr) {
				list<Ioc*>& RefSuspList = RefSubregionMap.at(SubregionMapItr->first);
				list<Ioc*>::const_iterator IocListItr = SubregionMapItr->second.begin();

				for (; !bReWalkMap && IocListItr != SubregionMapItr->second.end(); ++IocListItr) {
					switch ((*IocListItr)->GetType()) {
					case Ioc::Type::XPRV: {
						if ((qwFilterFlags & FILTER_FLAG_CLR_HEAP)) {
							if (((*IocListItr)->GetSubregion()->GetFlags() & MEMORY_SUBREGION_FLAG_HEAP)) {
								bReWalkMap = true;
								this->EraseIoc(&RefSuspList, IocListItr, &RefSubregionMap, SubregionMapItr, RegionMapItr);
							}
						}

						if ((qwFilterFlags & FILTER_FLAG_CLR_PRVX)) {
							if ((*IocListItr)->GetProcess()->CheckDotNetAffiliation(static_cast<uint8_t*>(const_cast<void*>((*IocListItr)->GetParentObject()->GetStartVa())), (*IocListItr)->GetParentObject()->GetEntitySize())) {
								bReWalkMap = true;
								this->EraseIoc(&RefSuspList, IocListItr, &RefSubregionMap, SubregionMapItr, RegionMapItr);
							}
							else {
								Interface::Log(Interface::VerbosityLevel::Debug, "... no .NET affiliation found for suspicion of private +x at 0x%p\r\n", (*IocListItr)->GetSubregion()->GetBasic()->BaseAddress);
							}
						}

						break;
					}
					case Ioc::Type::UNSIGNED_MODULE: {
						if ((qwFilterFlags & FILTER_FLAG_UNSIGNED_MODULES)) {
							bReWalkMap = true;
							this->EraseIoc(&RefSuspList, IocListItr, &RefSubregionMap, SubregionMapItr, RegionMapItr);
						}

						break;
					}
					case Ioc::Type::MISSING_PEB_ENTRY: {
						if ((qwFilterFlags & FILTER_FLAG_METADATA_MODULES)) {
							const PeVm::Body* PeEntity = dynamic_cast<const PeVm::Body*>((*IocListItr)->GetParentObject()); // By definition this IOC will always have a PE parent object type so there is no need to check its type prior to dynamic casting

							if (PeEntity->IsSigned()) {
								static const wchar_t* WinmdExt = L".winmd";

								if (_wcsicmp(PeEntity->GetFileBase()->GetPath().c_str() + PeEntity->GetFileBase()->GetPath().length() - wcslen(WinmdExt), WinmdExt) == 0) {
									if (PeEntity->GetPeFile() != nullptr && PeEntity->GetPeFile()->GetEntryPoint() == 0) {
										bReWalkMap = true;
										this->EraseIoc(&RefSuspList, IocListItr, &RefSubregionMap, SubregionMapItr, RegionMapItr);
									}
								}
							}
						}

						break;
					}
					case Ioc::Type::DISK_PERMISSION_MISMATCH: {
						if ((qwFilterFlags & FILTER_FLAG_WOW64_INIT)) {
							static const wchar_t* Wow64CpuDll = L"wow64cpu.dll";
							const PeVm::Body* PeEntity = dynamic_cast<const PeVm::Body*>((*IocListItr)->GetParentObject()); // By definition this IOC will always have a PE parent object type so there is no need to check its type prior to dynamic casting

							if (PeEntity->IsSigned()) {
								if (wcslen(PeEntity->GetFileBase()->GetPath().c_str()) > wcslen(Wow64CpuDll) && _wcsicmp(PeEntity->GetFileBase()->GetPath().c_str() + wcslen(PeEntity->GetFileBase()->GetPath().c_str()) - wcslen(Wow64CpuDll), Wow64CpuDll) == 0) {
									PeVm::Section* W64SvcSection = PeEntity->GetSection("W64SVC");
									if ((*IocListItr)->GetSubregion()->GetBasic()->BaseAddress == W64SvcSection->GetStartVa()) { // There's an edge case where the section preceeding W64SVC is also +x, resulting in the subregion for this IOC starting prior to this section address
										Interface::Log(Interface::VerbosityLevel::Debug, "... found disk permission mismatch suspicion on signed %ws overlapping with W64SVC section at 0x%p\r\n", PeEntity->GetFileBase()->GetPath().c_str(), W64SvcSection->GetStartVa());
										bReWalkMap = true;
										this->EraseIoc(&RefSuspList, IocListItr, &RefSubregionMap, SubregionMapItr, RegionMapItr);
									}
								}
							}
						}

						break;
					}
					case Ioc::Type::MODIFIED_CODE: {
						if ((qwFilterFlags & FILTER_FLAG_WOW64_INIT)) {
							static const wchar_t* User32Dll = L"user32.dll";
							const PeVm::Body* PeEntity = dynamic_cast<const PeVm::Body*>((*IocListItr)->GetParentObject()); // By definition this IOC will always have a PE parent object type so there is no need to check its type prior to dynamic casting

							if ((*IocListItr)->GetProcess()->IsWow64() && PeEntity->IsSigned()) {
								if (wcslen(PeEntity->GetFileBase()->GetPath().c_str()) > wcslen(User32Dll) && _wcsicmp(PeEntity->GetFileBase()->GetPath().c_str() + wcslen(PeEntity->GetFileBase()->GetPath().c_str()) - wcslen(User32Dll), User32Dll) == 0) {
									PeVm::Section* W64SvcSection = PeEntity->GetSection(".text");
									if ((*IocListItr)->GetSubregion()->GetBasic()->BaseAddress == W64SvcSection->GetStartVa()) {
										Interface::Log(Interface::VerbosityLevel::Debug, "... found modified code IOC overlapping with signed %ws .text section at 0x%p\r\n", PeEntity->GetFileBase()->GetPath().c_str(), W64SvcSection->GetStartVa());
										bReWalkMap = true;
										this->EraseIoc(&RefSuspList, IocListItr, &RefSubregionMap, SubregionMapItr, RegionMapItr);
									}
								}
							}
						}

						break;
					}
					}
				}
			}
		}
	} while (bReWalkMap);

	return 0;
}

void IocMap::Enumerate() {
	for (map <uint8_t*, map<uint8_t*, list<Ioc*>>>::const_iterator RegionMapItr = this->Map->begin(); RegionMapItr != this->Map->end(); ++RegionMapItr) {
		Interface::Log(Interface::VerbosityLevel::Surface, "0x%p [%d subregions]\r\n", RegionMapItr->first, RegionMapItr->second.size());
		for (map<uint8_t*, list<Ioc*>>::const_iterator SubregionMapItr = RegionMapItr->second.begin(); SubregionMapItr != RegionMapItr->second.end(); SubregionMapItr++) {
			Interface::Log(Interface::VerbosityLevel::Surface, "  0x%p [%d list elements]\r\n", SubregionMapItr->first, SubregionMapItr->second.size());
			for (list<Ioc*>::const_iterator ListItr = SubregionMapItr->second.begin(); ListItr != SubregionMapItr->second.end(); ++ListItr) {
				if (!(*ListItr)->IsFullEntityIoc()) {
					Interface::Log(Interface::VerbosityLevel::Surface, "    0x%p : %d : %ws\r\n", (*ListItr)->GetSubregion()->GetBasic()->BaseAddress, (*ListItr)->GetType(), (*ListItr)->GetDescription((*ListItr)->GetType()).c_str());
				}
				else {
					Interface::Log(Interface::VerbosityLevel::Surface, "    0x%p : %d : %ws : Full entity\r\n", (*ListItr)->GetParentObject()->GetStartVa(), (*ListItr)->GetType(), (*ListItr)->GetDescription((*ListItr)->GetType()).c_str());
				}
			}
		}
	}
}