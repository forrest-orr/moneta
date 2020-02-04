#include "StdAfx.h"
#include "FileIo.hpp"
#include "PE.hpp"
#include "Moneta.hpp"

using namespace std;
using namespace PeFile;
using namespace Moneta;

AddressSpace::~AddressSpace() {
	//printf("AddressSpace destructor\r\n");
	for (map<uint8_t*, Entity*>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		if (Itr->second->Type() == EntityType::PE_FILE) {
			delete dynamic_cast<PeVm::Body*>(Itr->second); // This will call the destructors for PE, mapped file and entity all to be called in inheritted order.
		}
		else if (Itr->second->Type() == EntityType::MAPPED_FILE) {
			delete dynamic_cast<MappedFile*>(Itr->second);
		}
		else {
			delete dynamic_cast<Base*>(Itr->second);;
		}
	}
	//printf("AddressSpace destructor2\r\n");
}

Process::~Process() {
	CloseHandle(this->Handle);
}

HANDLE Process::GetHandle() {
	return this->Handle;
}

bool Process::IsWow64() {
	return this->Wow64;
}

typedef BOOL(WINAPI* ISWOW64PROCESS) (HANDLE, PBOOL);

Process::Process(uint32_t dwPid, const wchar_t* pProcessName) : Pid(dwPid), Name(pProcessName) {
	//
	// Initialize a new entity for each allocation base and add it to this process address space map
	//

	printf("* Mapping address space of PID %d\r\n", this->Pid);
	this->Handle = OpenProcess(PROCESS_VM_READ | PROCESS_QUERY_INFORMATION, false, dwPid);

	if (this->Handle != nullptr) {
		static ISWOW64PROCESS IsWow64Process = (ISWOW64PROCESS)GetProcAddress(GetModuleHandleW(L"Kernel32.dll"), "IsWow64Process");

		if (IsWow64Process != nullptr) {
			if (IsWow64Process(this->Handle, (PBOOL)&this->Wow64)) {
				if (this->IsWow64()) {
					//CloseHandle(this->Handle);
					printf("* PID %d is Wow64\r\n", this->Pid);
					//system("pause");
					//throw 2;
				}
				else {
					//throw 2;
				}
			}
		}

		//system("pause");
		uint64_t qwRegionSize = 0;
		vector<MemoryBlock*> SBlocks;
		vector<MemoryBlock*>::iterator ABlock;
		//Entity* CurrentEntity = nullptr;

		//Loop memory, building list of SBlocks. Once a block is found which does not match the "current" allocation base, create a new entity containing the corresponding sblock list, and insert it into the address space entities map using the ablock as the key.

		//if (this->Pid == 3272) system("pause");

		for (uint8_t* pBaseAddr = nullptr;; pBaseAddr += qwRegionSize) {
			MEMORY_BASIC_INFORMATION* pBasicInfo = new MEMORY_BASIC_INFORMATION;

			if (VirtualQueryEx(this->Handle, pBaseAddr, (MEMORY_BASIC_INFORMATION*)pBasicInfo, sizeof(MEMORY_BASIC_INFORMATION)) == sizeof(MEMORY_BASIC_INFORMATION)) {
				qwRegionSize = pBasicInfo->RegionSize;

				if (!SBlocks.empty()) { // If the sblock list is empty then there is no ablock for comparison
					//
					// In the event that this is a new ablock, create a map pair and insert it into the entities map
					//
					//printf("Sblock list not empty\r\n");
					if (pBasicInfo->AllocationBase != (*ABlock)->GetBasic()->AllocationBase) {
						//printf("Found a new ablock. Saving sblock list to new entity entry.");
						//CurrentEntity->SetSBlocks(SBlocks);
						this->Entities.insert(make_pair((uint8_t*)(*ABlock)->GetBasic()->AllocationBase, Entity::Create(this->Handle, SBlocks)));
						SBlocks.clear();
					}
					//printf("done2\r\n");
				}
				//printf("Addomg mew sblock to list\r\n");
				SBlocks.push_back(new MemoryBlock((MEMORY_BASIC_INFORMATION*)pBasicInfo, nullptr));
				ABlock = SBlocks.begin(); // This DOES fix a bug.
				//
				// Potentially initialize a new polymorphic entity class based upon the memory characteristics
				//

				if (SBlocks.size() == 1) {
					ABlock = SBlocks.begin();
					//printf("Set current ABlock to 0x%p due to sblock list size of 1 after insert\n", (*ABlock)->GetBasic()->AllocationBase);
				}
			}
			else {
				//printf("VirtualQuery failed\r\n");
				//system("pause");
				delete pBasicInfo;
				if (!SBlocks.empty()) { // Edge case: new ablock not yet found but finished enumerating sblocks.
					this->Entities.insert(make_pair((uint8_t*)(*ABlock)->GetBasic()->AllocationBase, Entity::Create(this->Handle, SBlocks)));
					//SBlocks.clear();
				}
				//printf("done\r\n");
				break;
			}
		}

		//this->PermissionRecords = new MemoryPermissionRecord(this->Blocks); // Initialize 
		//CloseHandle(hProcess);
	}
	else {
		printf("- Failed to open handle to process\r\n");
		throw 1; // Not throwing a specific value crashes it
	}
}


uint32_t Process::GetPid() {
	return this->Pid;
}

void Process::Enumerate() {
	printf("\r\n[ %ws : %d : %ws\r\n", this->Name.c_str(), this->GetPid(), this->IsWow64() ? L"Wow64" : L"x64");
	//
	// Walk ablocks (entities) and list the corresponding sblocks of each.
	//

	for (map<uint8_t*, Entity*>::const_iterator Itr = this->Entities.begin(); Itr != this->Entities.end(); ++Itr) {
		//printf("A-Block 0x%p\r\n", Itr->first);

		if (Itr->second == nullptr) printf("blank entity ptr\r\n");
		if (Itr->second->Type() == EntityType::PE_FILE) {
			//printf("Entity type: PE\r\n");
			//printf("[ Image\r\n");
			printf("[ 0x%016x:0x%08x | Image | %ws\r\n", dynamic_cast<PeVm::Body*>(Itr->second)->GetPeBase(), dynamic_cast<PeVm::Body*>(Itr->second)->GetPe()->GetImageSize(), dynamic_cast<PeVm::Body*>(Itr->second)->GetFilePath().c_str());
			//printf("File path: %ws (%ws)\r\n", ((Moneta::PE *)Itr->second)->GetFilePath().c_str(), dynamic_cast<PeVm::Body *>(Itr->second)->GetPe()->GetPeMagic() == IMAGE_NT_OPTIONAL_HDR64_MAGIC ? L"64-bit" : L"32-bit");

			vector<PeVm::Section*> Sections = dynamic_cast<PeVm::Body*>(Itr->second)->GetSections();
			for (vector<PeVm::Section*>::const_iterator SectItr = Sections.begin(); SectItr != Sections.end(); ++SectItr) {
				//printf("  %s\r\n", (*SectItr)->GetHeader()->Name);
				//printf("  S-Blocks:\r\n");
				vector<MemoryBlock*> SBlocks = (*SectItr)->GetSBlocks();

				for (vector<MemoryBlock*>::iterator SBlockItr = SBlocks.begin(); SBlockItr != SBlocks.end(); ++SBlockItr) {
					//printf("  0x%p\r\n", (*SBlockItr)->GetBasic()->BaseAddress);
					printf("  0x%p:0x%08x | %s | %s | 0x%08x\r\n", (*SBlockItr)->GetBasic()->BaseAddress, (*SBlockItr)->GetBasic()->RegionSize, Moneta::PermissionSymbol((*SBlockItr)->GetBasic()->Protect), (*SectItr)->GetHeader()->Name,
						Moneta::GetPrivateSize(this->GetHandle(), static_cast<uint8_t*>((*SBlockItr)->GetBasic()->BaseAddress), (uint32_t)(*SBlockItr)->GetBasic()->RegionSize)
					);

					if (((*SectItr)->GetHeader()->Characteristics & IMAGE_SCN_MEM_EXECUTE) && Moneta::GetPrivateSize(this->GetHandle(), (uint8_t*)(*SBlockItr)->GetBasic()->BaseAddress, (uint32_t)(*SBlockItr)->GetBasic()->RegionSize)) {
						printf("! Section %s is executable and has private pages within %ws [%ws:%d]\r\n", (*SectItr)->GetHeader()->Name, dynamic_cast<PeVm::Body*>(Itr->second)->GetFilePath().c_str(), this->Name.c_str(), this->Pid);
						system("pause");
					}
				}
			}
		}
		else if (Itr->second->Type() == EntityType::MAPPED_FILE) {
			//printf("Entity type: Mapped file\r\n");
			//printf("File path: %ws\r\n", dynamic_cast<MappedFile *>(Itr->second)->GetFilePath().c_str());
			vector<MemoryBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

			//printf("[ Mapped\r\n");
			printf("[ 0x%016x:0x%08x | Mapped | %ws\r\n", SBlocks.front()->GetBasic()->AllocationBase, SBlocks.front()->GetBasic()->RegionSize, dynamic_cast<MappedFile*>(Itr->second)->GetFilePath().c_str());
			//printf("S-Blocks:\r\n");

			for (vector<MemoryBlock*>::iterator SBlockItr = SBlocks.begin(); SBlockItr != SBlocks.end(); ++SBlockItr) {
				//printf("  0x%p\r\n", (*SBlockItr)->GetBasic()->BaseAddress);
				printf("  0x%p:0x%08x | %s\r\n", (*SBlockItr)->GetBasic()->BaseAddress, (*SBlockItr)->GetBasic()->RegionSize, Moneta::PermissionSymbol((*SBlockItr)->GetBasic()->Protect));
			}
		}
		else {
			//printf("Entity type: Unknown\r\n");
			//printf("S-Blocks:\r\n");

			vector<MemoryBlock*> SBlocks = Itr->second->GetSBlocks(); // This must be done explicitly, otherwise each time GetSBlocks is called a temporary copy of the list is created and the begin/end iterators will become useless in identifying the end of the list, causing an exception as it loops out of bounds.

			if (SBlocks.front()->GetBasic()->Type == MEM_PRIVATE) {
				printf("[ 0x%016x:0x%08x | Private\r\n", SBlocks.front()->GetBasic()->AllocationBase, SBlocks.front()->GetBasic()->RegionSize);
				for (vector<MemoryBlock*>::iterator SBlockItr = SBlocks.begin(); SBlockItr != SBlocks.end(); ++SBlockItr) {
					printf("  0x%p:0x%08x | %s\r\n", (*SBlockItr)->GetBasic()->BaseAddress, (*SBlockItr)->GetBasic()->RegionSize, Moneta::PermissionSymbol((*SBlockItr)->GetBasic()->Protect));
				}
			}
			else {
				printf("! Unknown memory type at 0x%p\r\n", Itr->first);
			}
		}

		printf("\r\n");
	}

	printf("\r\n");
	/*
	bool bFileRange = false, bImageRange = false;

	for (list<MemoryBlock*>::const_iterator RecordItr = this->SBlocks.begin(); RecordItr != this->SBlocks.end(); ++RecordItr) {
		uint32_t dwPrivateSize = 0;

		if ((*RecordItr)->GetBasic()->Type == MEM_MAPPED || (*RecordItr)->GetBasic()->Type == MEM_IMAGE) {
			dwPrivateSize = VmProcess::GetPrivateSize((uint8_t*)(*RecordItr)->GetBasic()->BaseAddress, (*RecordItr)->GetBasic()->RegionSize);
			if ((*RecordItr)->GetBasic()->AllocationBase == (*RecordItr)->GetBasic()->BaseAddress) {
				bFileRange = true;
				wchar_t FileName[MAX_PATH] = { 0 };
				HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, false, this->Pid);

				if (hProcess != nullptr) {
					if ((*RecordItr)->GetBasic()->Type == MEM_MAPPED) {
						if (GetMappedFileNameW(hProcess, (*RecordItr)->GetBasic()->AllocationBase, FileName, MAX_PATH)) {
							//printf("%ws\r\n", MappedFileName);
						}
						else {
							wcscpy_s(FileName, MAX_PATH, L"Page file");
						}
					}
					else {
						bImageRange = true;
						if (GetModuleFileNameExW(hProcess, (HMODULE)(*RecordItr)->GetBasic()->AllocationBase, FileName, MAX_PATH)) {
							//printf("%ws\r\n", ModuleFileName);
						}
						else {
							wcscpy_s(FileName, MAX_PATH, L"?");
							printf("!!!! FAILED to get module name\r\n");
						}
					}

					CloseHandle(hProcess);
				}
				else {
					wcscpy_s(FileName, MAX_PATH, L"Access denied");
				}

				printf("======[ 0x%p : %ws\r\n", (*RecordItr)->GetBasic()->BaseAddress, FileName);
			}
		}
		else {
			bFileRange = false;
			bImageRange = false;
			printf("======[ 0x%p\r\n", (*RecordItr)->GetBasic()->BaseAddress);
		}

		wchar_t Indent[40] = { 0 };

		wcscpy_s(Indent, 40, L"  ");

		if (bImageRange) {
			wcscat_s(Indent, 40, L"  ");
		}

		printf(
			"%wsAllocated base 0x%p\r\n"
			"%wsBase: 0x%p\r\n"
			"%wsSize: %zu\r\n",
			Indent,
			(*RecordItr)->GetBasic()->AllocationBase,
			Indent,
			(*RecordItr)->GetBasic()->BaseAddress,
			Indent,
			(*RecordItr)->GetBasic()->RegionSize);

		printf("%wsState: ", Indent);
		switch ((*RecordItr)->GetBasic()->State)
		{
		case MEM_COMMIT:
			printf("MEM_COMMIT\r\n");
			break;
		case MEM_RESERVE:
			printf("MEM_RESERVE\r\n");
			break;
		case MEM_FREE:
			printf("MEM_FREE\r\n");
			break;
		default:
			printf("?\r\n");
		}

		printf("%wsType: ", Indent);
		switch ((*RecordItr)->GetBasic()->Type)
		{
		case MEM_IMAGE:
			printf("MEM_IMAGE\r\n");
			break;
		case MEM_MAPPED:
			printf("MEM_MAPPED\r\n");
			break;
		case MEM_PRIVATE:
			printf("MEM_PRIVATE\r\n");
			break;
		default:
			printf("N/A\r\n");
		}

		printf("%wsPrivate size: %d\r\n", Indent, dwPrivateSize);
		printf("%wsCurrent permissions: 0x%08x\r\n", Indent, (*RecordItr)->GetBasic()->Protect);
		printf("%wsOriginal permissions: 0x%08x\r\n", Indent, (*RecordItr)->GetBasic()->AllocationProtect);

		if ((*RecordItr)->GetRegion() != nullptr) {
			printf("%wsRegion allocation base: 0x%p\r\n", Indent, (*RecordItr)->GetRegion()->AllocationBase);
			printf("%wsRegion size: %d\r\n", Indent, (*RecordItr)->GetRegion()->RegionSize);
			printf("%wsCommit size: %d\r\n", Indent, (*RecordItr)->GetRegion()->CommitSize);
			printf("%wsRegion type literal: 0x%08x\r\n", Indent, (*RecordItr)->GetRegion()->RegionType); // These fields do not match struct declaration, likely different across Windows versions. Ignore them for now.
		}

		printf("\r\n");
	}*/
}