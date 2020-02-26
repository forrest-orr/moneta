#include "StdAfx.h"
#include "FileIo.hpp"
#include "PE.hpp"
#include "Moneta.hpp"
#include "Process.hpp"
#include "Blocks.hpp"
#include "Interface.hpp"
#include "MemDump.hpp"
#include "Suspicions.hpp"

using namespace std;
using namespace Moneta;

void Suspicion::Enumerate() {
	//
}

wstring UnsignedModule::GetDescription() {
	return L"Unsigned module";
}

wstring MissingPebModule::GetDescription() {
	return L"Missing PEB module";
}

wstring MismatchingPebModule::GetDescription() {
	return L"Mismatching PEB module";
}

wstring ModifiedPeHeader::GetDescription() {
	return L"Modified PE header";
}

wstring DiskPermissionMismatch::GetDescription() {
	return L"Inconsistent +x between disk and memory";
}

wstring ModifiedCode::GetDescription() {
	return L"Modified code";
}

wstring MappedExecPermission::GetDescription() {
	return L"Abnormal executable memory type";
}

wstring PhantomImage::GetDescription() {
	return L"Phantom image";
}

wstring PrivateExecPermission::GetDescription() {
	return L"Abnormal executable memory type";
}

Entity* Suspicion::GetParentObject() {
	return this->ParentObject;
}

SBlock* Suspicion::GetBlock() {
	return this->Block;
}

Process* Suspicion::GetProcess() {
	return this->ParentProcess;
}

void EnumerateAll(vector<Suspicion *> &SuspicionsList) {
	for (vector<Suspicion *>::const_iterator SuspItr = SuspicionsList.begin(); SuspItr != SuspicionsList.end(); ++SuspItr) {
		Interface::Log("~ ");
		Interface::Log("%ws", (*SuspItr)->GetDescription().c_str());

		/*
		switch ((*SuspItr)->GetType()) {
		case Suspicion::Type::UNSIGNED_MODULE:
			Interface::Log("%ws", (*SuspItr)->GetDescription().c_str());
			break;
		default: 
			Interface::Log("unknown");
			break;
		}*/

		Interface::Log(" within ");

		if ((*SuspItr)->GetBlock() == nullptr) {
			Interface::Log("entity at 0x%p", (*SuspItr)->GetParentObject()->GetStartVa());
		}
		else {
			Interface::Log("block at 0x%p within entity at 0x%p", (*SuspItr)->GetBlock()->GetBasic()->BaseAddress, (*SuspItr)->GetParentObject()->GetStartVa());
		}

		//Interface::Log(" within %ws:%d [%ws]\r\n", (*SuspItr)->GetProcess()->GetName().c_str(), (*SuspItr)->GetProcess()->GetPid(), (*SuspItr)->GetProcess()->GetImageFilePath().c_str());
		Interface::Log(" within %ws:%d\r\n", (*SuspItr)->GetProcess()->GetName().c_str(), (*SuspItr)->GetProcess()->GetPid());
	}

	//Interface::Log("\r\n");
}

Suspicion::Suspicion(Process* ParentProc, Entity* ParentObj, SBlock* Block) : ParentProcess(ParentProc), ParentObject(ParentObj), Block(Block) {}
UnsignedModule::UnsignedModule(Process* ParentProc, Entity* ParentObj, SBlock* Block) : Suspicion(ParentProc, ParentObj, Block) {}
MissingPebModule::MissingPebModule(Process* ParentProc, Entity* ParentObj, SBlock* Block) : Suspicion(ParentProc, ParentObj, Block) {}
MismatchingPebModule::MismatchingPebModule(Process* ParentProc, Entity* ParentObj, SBlock* Block) : Suspicion(ParentProc, ParentObj, Block) {}
ModifiedPeHeader::ModifiedPeHeader(Process* ParentProc, Entity* ParentObj, SBlock* Block) : Suspicion(ParentProc, ParentObj, Block) {}
DiskPermissionMismatch::DiskPermissionMismatch(Process* ParentProc, Entity* ParentObj, SBlock* Block) : Suspicion(ParentProc, ParentObj, Block) {}
ModifiedCode::ModifiedCode(Process* ParentProc, Entity* ParentObj, SBlock* Block) : Suspicion(ParentProc, ParentObj, Block) {}
PhantomImage::PhantomImage(Process* ParentProc, Entity* ParentObj, SBlock* Block) : Suspicion(ParentProc, ParentObj, Block) {}
MappedExecPermission::MappedExecPermission(Process* ParentProc, Entity* ParentObj, SBlock* Block) : Suspicion(ParentProc, ParentObj, Block) {}
PrivateExecPermission::PrivateExecPermission(Process* ParentProc, Entity* ParentObj, SBlock* Block) : Suspicion(ParentProc, ParentObj, Block) {}

bool Suspicion::InspectEntity(Process &ParentProc, Entity &ParentObj, map<uint8_t*, vector<Suspicion *>> &SuspicionsMap) { // Generate suspicions for an entity
	vector<Suspicion *> SuspicionsList;

	switch (ParentObj.GetType()) {
		case Entity::Type::PE_FILE: {
			PeVm::Body* PeEntity = dynamic_cast<PeVm::Body*>(&ParentObj);

			if (!PeEntity->IsNonExecutableImage()) {
				if (!PeEntity->IsSigned()) {
					SuspicionsList.push_back(new UnsignedModule(&ParentProc, &ParentObj, nullptr));
				}

				if (PeEntity->GetPe() != nullptr) {
					if (!PeEntity->GetPebModule().Exists()) {
						SuspicionsList.push_back(new MissingPebModule(&ParentProc, &ParentObj, nullptr));
					}
					else {
						if (_wcsicmp(PeEntity->GetPebModule().GetPath().c_str(), PeEntity->GetPath().c_str()) != 0) { // Since the PEB module is queried by base address with GetModuleInfo/GetModuleFileNameExW rather than by name with GetModuleHandleEx, there may be a PEB link with a base address matching this image region but with a misleading name/path
							if (ParentProc.IsWow64()) { // This is an edge case in which in Wow64 a module may appear as C:\Windows\System32\kernel32.dll although the true path is C:\Windows\SysWOW64\kernel32.dll due to Wow64 FS redirection.
								wchar_t ReFormattedPath[MAX_PATH + 1] = { 0 };

								if (FileBase::ArchWow64PathExpand(PeEntity->GetPebModule().GetPath().c_str(), ReFormattedPath, MAX_PATH + 1)) {
									if (_wcsicmp(ReFormattedPath, PeEntity->GetPath().c_str()) != 0) {
										SuspicionsList.push_back(new MismatchingPebModule(&ParentProc, &ParentObj, nullptr));
									}
								}
							}
							else {
								SuspicionsList.push_back(new MismatchingPebModule(&ParentProc, &ParentObj, nullptr));
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

							if (strcmp(reinterpret_cast<const char*>((*SectItr)->GetHeader()->Name), "Header") == 0 && Moneta::GetPrivateSize(ParentProc.GetHandle(), (uint8_t*)(*SbItr)->GetBasic()->BaseAddress, (uint32_t)(*SbItr)->GetBasic()->RegionSize)) {
								SuspicionsList.push_back(new ModifiedPeHeader(&ParentProc, &ParentObj, *SbItr));
							}

							//
							// Executable regions within sections that are not marked as executable on disk. For example: data is +rw on disk but has +x sblock
							//

							if (SBlock::PageExecutable((*SbItr)->GetBasic()->Protect) && !((*SectItr)->GetHeader()->Characteristics & IMAGE_SCN_MEM_EXECUTE)) {
								SuspicionsList.push_back(new DiskPermissionMismatch(&ParentProc, &ParentObj, *SbItr));
							}

							//
							// Executable regions in memory with private pages. Whether their +x is consistent with their section on disk is examined as well.
							//

							if (SBlock::PageExecutable((*SbItr)->GetBasic()->Protect) && Moneta::GetPrivateSize(ParentProc.GetHandle(), (uint8_t*)(*SbItr)->GetBasic()->BaseAddress, (uint32_t)(*SbItr)->GetBasic()->RegionSize)) {
								SuspicionsList.push_back(new ModifiedCode(&ParentProc, &ParentObj, *SbItr));
							}
						}
					}
				}
				else {
					SuspicionsList.push_back(new PhantomImage(&ParentProc, &ParentObj, nullptr));
				}
			}

			break;
		}
		case Entity::Type::MAPPED_FILE: {
			vector<SBlock*> SBlocks = ParentObj.GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.
			for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
				if (SBlock::PageExecutable((*SbItr)->GetBasic()->Protect)) {
					SuspicionsList.push_back(new MappedExecPermission(&ParentProc, &ParentObj, *SbItr));
				}
			}

			break;
		}
		case Entity::Type::UNKNOWN: {
			vector<SBlock*> SBlocks = ParentObj.GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

			if (SBlocks.front()->GetBasic()->Type == MEM_PRIVATE) {
				for (vector<SBlock*>::iterator SbItr = SBlocks.begin(); SbItr != SBlocks.end(); ++SbItr) {
					if (SBlock::PageExecutable((*SbItr)->GetBasic()->Protect)) {
						SuspicionsList.push_back(new PrivateExecPermission(&ParentProc, &ParentObj, *SbItr));
					}
				}
			}

			break;
		}
	}

	EnumerateAll(SuspicionsList);
}