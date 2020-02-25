#include "StdAfx.h"
#include "Moneta.hpp"
#include "Process.hpp"
#include "Blocks.hpp"
#include "Interface.hpp"
#include "MemDump.hpp"
#include "Suspicions.hpp"

using namespace std;
using namespace Moneta;

bool Generate(Entity &Parent, map<uint8_t*, vector<Suspicion>> &Suspicions) { // Generate suspicions for an entity
	if (Itr->second->GetType() == Entity::Type::PE_FILE) {
		PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>(Itr->second);

		if (!PeEntity->IsNonExecutableImage()) {
			if (!PeEntity->IsSigned()) {
				nSuspiciousObjCount++;
			}

			if (PeEntity->GetPe() != nullptr) {
				if (!PeEntity->GetPebModule().Exists()) {
					nSuspiciousObjCount++;
				}
				else {
					if (_wcsicmp(PeEntity->GetPebModule().GetPath().c_str(), PeEntity->GetPath().c_str()) != 0) { // Since the PEB module is queried by base address with GetModuleInfo/GetModuleFileNameExW rather than by name with GetModuleHandleEx, there may be a PEB link with a base address matching this image region but with a misleading name/path
						if (this->IsWow64()) { // This is an edge case in which in Wow64 a module may appear as C:\Windows\System32\kernel32.dll although the true path is C:\Windows\SysWOW64\kernel32.dll due to Wow64 FS redirection.
							wchar_t ReFormattedPath[MAX_PATH + 1] = { 0 };

							if (ArchWow64PathExpand(PeEntity->GetPebModule().GetPath().c_str(), ReFormattedPath, MAX_PATH + 1)) {
								if (_wcsicmp(ReFormattedPath, PeEntity->GetPath().c_str()) != 0) {
									nSuspiciousObjCount++;
								}
							}
						}
						else {
							nSuspiciousObjCount++;
						}
					}
				}

				vector<PeVm::Section*> Sections = PeEntity->GetSections();
				for (vector<PeVm::Section*>::const_iterator SectItr = Sections.begin(); SectItr != Sections.end(); ++SectItr) {
					vector<SBlock*> SBlocks = (*SectItr)->GetSBlocks();

					for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
						//
						// Headers with private pages
						//

						if (strcmp(reinterpret_cast<const char*>((*SectItr)->GetHeader()->Name), "Header") == 0 && Moneta::GetPrivateSize(this->GetHandle(), (uint8_t*)(*SbItr)->GetBasic()->BaseAddress, (uint32_t)(*SbItr)->GetBasic()->RegionSize)) {
							//Interface::Log("! PE headers have private pages within %ws [%ws:%d]\r\n", PeEntity->GetFilePath().c_str(), this->Name.c_str(), this->Pid);
							//system("pause");
							nSuspiciousObjCount++;
						}

						//
						// Executable regions within sections that are not marked as executable on disk. For example: data is +rw on disk but has +x sblock
						//

						if (PageExecutable((*SbItr)->GetBasic()->Protect) && !((*SectItr)->GetHeader()->Characteristics & IMAGE_SCN_MEM_EXECUTE)) {
							//Interface::Log("! Sblock in section %s has executable permissions inconsistent with its file on disk at %ws [%ws:%d]\r\n", (*SectItr)->GetHeader()->Name, PeEntity->GetFilePath().c_str(), this->Name.c_str(), this->Pid);
							//system("pause");
							nSuspiciousObjCount++;
						}

						//
						// Executable regions in memory with private pages. Whether their +x is consistent with their section on disk is examined as well.
						//

						if (PageExecutable((*SbItr)->GetBasic()->Protect) && Moneta::GetPrivateSize(this->GetHandle(), (uint8_t*)(*SbItr)->GetBasic()->BaseAddress, (uint32_t)(*SbItr)->GetBasic()->RegionSize)) {
							//Interface::Log("! Sblock in section %s is executable and has private pages within %ws - %ws PE on disk [%ws:%d]\r\n", (*SectItr)->GetHeader()->Name, PeEntity->GetFilePath().c_str(), ((*SectItr)->GetHeader()->Characteristics & IMAGE_SCN_MEM_EXECUTE) ? L"matches" : L"does not match", this->Name.c_str(), this->Pid);
							//system("pause");
							nSuspiciousObjCount++;
						}
					}
				}
			}
			else {
				vector<SBlock*> SBlocks = PeEntity->GetSBlocks();

				for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
					if (PageExecutable((*SbItr)->GetBasic()->Protect)) {
						//Interface::Log("! Phantom image memory at sblock 0x%p is executable [%ws:%d]\r\n", (*SbItr)->GetBasic()->BaseAddress, this->Name.c_str(), this->Pid);
						//system("pause");
						nSuspiciousObjCount++;
					}
				}
			}
		}
	}
	else if (Itr->second->GetType() == Entity::Type::MAPPED_FILE) {
		vector<SBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.
		for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
			if (PageExecutable((*SbItr)->GetBasic()->Protect)) {
				//Interface::Log("! Mapped memory at sblock 0x%p is executable [%ws:%d]\r\n", (*SbItr)->GetBasic()->BaseAddress, this->Name.c_str(), this->Pid);
				//system("pause");
				nSuspiciousObjCount++;
			}
		}
	}
	else {
		//Interface::Log("S-Blocks:\r\n");

		vector<SBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

		if (SBlocks.front()->GetBasic()->Type == MEM_PRIVATE) {
			for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
				if (PageExecutable((*SbItr)->GetBasic()->Protect)) {
					//Interface::Log("! Private memory at sblock 0x%p is executable [%ws:%d]\r\n", (*SbItr)->GetBasic()->BaseAddress, this->Name.c_str(), this->Pid);
					//system("pause");
					nSuspiciousObjCount++;
				}
			}
		}
	}
}