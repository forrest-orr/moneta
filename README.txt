   _____                        __          
  /     \   ____   ____   _____/  |______   
 /  \ /  \ /  _ \ /    \_/ __ \   __\__  \  
/    Y    (  <_> )   |  \  ___/|  |  / __ \_
\____|__  /\____/|___|  /\___  >__| (____  /
        \/            \/     \/          \/ 

Moneta v1.0 | Forrest Orr | 2020

VBS ENCLAVE SUPPORT

From VTL0 a VBS enclave is the CreateEnclave reservation: a MEM_PRIVATE allocation whose subregions
mirror the enclave module's PE sections, with state alternating MEM_COMMIT/MEM_RESERVE and protection
alternating PAGE_READWRITE/PAGE_NOACCESS. State is therefore not a usable detection filter.

Detection: at startup Enclave::ValidateSupport() probes whether NtQueryVirtualMemory supports
MemoryEnclaveImageInformation (class 9); it returns STATUS_INVALID_INFO_CLASS on current builds. Each
non-free subregion is then tested with the SoftwareEnclave flag of MemoryRegionInformationEx (class 7)
- and with class 9 where it is supported. A hit on any subregion promotes the whole allocation to a
single "Enclave" entity, which is excluded from the private +x / non-image heuristics.

Only the enclave entity raises an IOC (presence, filterable with --filter enclaves); its subregions
remain benign. When the enclave module's backing image file is available (e.g. a debuggable enclave,
whose module is also a readable MEM_IMAGE), the entity is enriched from the PE's IMAGE_ENCLAVE_CONFIG
and -v detail additionally reports policy flags, debuggable/primary-image flags, enclave size, thread
and import counts, image/security versions and the Family/Image IDs; a debuggable enclave raises a
second IOC, since it exposes its VTL1 memory to VTL0 and has no place outside development.

REQUIRED

-m {*|region|referenced|ioc|enclave}
-p {*|PID}

OPTIONAL

-v {detail|debug|surface}
-d
--option {from-base|statistics}
--filter {unsigned-module|clr-prvx|clr-heap|metadata-modules|wow64-init|enclaves}
--address <memory address>
--region-size <memory region size>


-m                  The memory to select and apply scanner settings to. "enclave" selects every VBS
                    enclave entity (and all of its subregions) on the OS or in the given PID, and
                    nothing else; it ignores the IOC map and filters.

                    *                   Select all regions of committed memory.
                    ioc                 Select only regions which have suspicions associated with them.
                    region              Select only the region(s) which overlap with the region provided
                                        through the --address and --region-size arguments.
                    referenced          Select only regions which are referenced within the region(s)
                                        associated with the provided --address and --region-size arguments
-p                  The process(es) to scan. In the event that * is used, all accessible processes will
                    be enumerated and scanned.
--option            Additional actions to optionally apply to the memory selected from the scan.

                    from-base           All subregions associated with the allocation bases of all
                                        selected memory will also be selected.
                    statistics          Calculate permission statistics on the selected memory after a
                                        scan has completed.
-d                  Dump all selected memory to the local file system after each process scan is complete.
--address           A memory address in 0x* format to be used in conjunction with either the "region" or
                    "referenced" selection types.
--region-size       Optionally specify the size of the region of the provided "--address." The default is
                    a region size of 0.
-v                  The verbosity level with which to print information related to the selected memory.
                    The default is "surface"
--filter            The filters to apply when eliminating suspicions associated with selected memory.
                    
                    *                   Apply all filters. Only malware and unknown false positives shown.
                    unsigned-module     Regions of image memory associated with unsigned PE files.
                    metadata-modules    Regions of image memory stemming from signed Windows metadata PE
                                        files on disk.
                    clr-heap            Native executable heaps created during CLR initialization.
                    clr-prvx            Managed heaps associated with active CLR heaps and JIT code.
                    wow64-init          IOCs resulting from Wow64 process initialization such as certain
                                        modified system library code sections
                    enclaves            The presence IOC raised for every VBS enclave. Useful once a
                                        baseline of legitimate enclave hosts (Edge, Recall, etc.) is
                                        established. Unchecked enclave image signing levels are never
                                        filtered.
										
EXAMPLES

Enumerate every VBS enclave on the OS with per-image detail:

    Moneta64.exe -m enclave -p * -v detail

Enumerate a detailed log of all committed memory in all processes on the OS:

    Moneta64.exe -m * -p * -v detail

Enumerate surface level information related to suspicious memory in a specific process:

    Moneta64.exe -m ioc -p 1234
	
Enumerate surface level information related to suspicious memory in a specific process from its allocation
base:

    Moneta64.exe -m ioc -p 1234 --option from-base

Dump a specific memory region by address within a specific process from its allocation base:

    Moneta64.exe -m region -p 1234 --option from-base --address 0x0000000077DD0000 -d
    
Enumerate surface level information related to suspicious memory in all processes and show memory
statistics on IOCs and region types when the scan is complete:

    Moneta64.exe -m ioc -p * --option statistics
	
Enumerate surface level information related to suspicious memory in all processes but exclude IOCs
stemming from unsigned modules and metadata modules:

    Moneta64.exe -m ioc -p * --filter unsigned-modules metadata-modules
