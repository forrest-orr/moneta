_______  _____  __   _ _______ _______ _______
|  |  | |     | | \  | |______    |    |_____|
|  |  | |_____| |  \_| |______    |    |     |

Moneta v1.0 | Usage
Target process: -p [PID, "*" or "self"]
  Select a specific PID, the current process or all accessible
  processes to search for selected memory. This operation requires
  read/query access to the specified process.
  
Memory selection type: -m ["block", "*", "referenced" or "suspicious"]
  + Block selection type:
    The block containing the specified memory address will be
    selected for enumeration and/or dumping.
	
	Required additional parameters:
      --address [The hex format memory address within the target
                process to select and enumerate/dump]
    Example:
      Moneta64.exe -p 312 -m block --address 0x00007FF662470000 -v detail
	  
  + Referenced selection type:
    The blocks containing references to the specified memory address
	will be selected.
	
	Required additional parameters:
      --address [The hex format memory address within the target
                process to find referenced to]
    Example:
      Moneta64.exe -p 312 -m referenced --address 0x0000A0E662480000
	  
  + * selection type:
    Selects all regions and the blocks that they contain from
    the entire selected process address space.
	
  + Suspicious selection type
	Selects only the blocks of memory which show suspicious
	attributes, potential malware artifacts.
	
Verbosity level: -v ["detail", "debug" or "surface"]
  The verbosity level determines how much information about
  selected memory blocks/regions will be displayed.
  
Dump selected memory: -d
  All memory blocks/regions selected via the "-m" parameter will
  be dumped to a physical file on disk.

Memory selection options: --option ["from-base", "statistics"]
  + "from-base"
	All selected blocks will implicitly also select all other
	blocks which share their allocation base. For example, a
	block within a PE image will implicitly select all blocks
	within the PE image region.
  + "statistics"
    Optionally calculate the attribute statistics for all selected
    memory regions/subregions. These are based upon the memory
	permissions and types.
	
Filter options: --filter ["unsigned-modules", "clr-prv-rwx", "metadata-modules", "clr-heap"]
  + "unsigned-module"
    All loaded modules will have the "unsigned module" suspicion
	filtered off of them.
  + "metadata-modules"
    All signed modules with the ".winmd" file extension and a blank
	entry point in their PE header will have the "missing PEB entry"
	suspicion filtered off of them.
  + "clr-prv-rwx"
    All private memory allocated with an initial permission of
	PAGE_NOACCESS which contain subregions that are +RWX within a
	process in which the CLR has been initialized will have their
	"abnormal executable memory type" suspicion filtered off.
  + "clr-heap"
    Private RWX regions corresponding to a known process heap
	from the PEB will be filtered if the containing process has had
	a CLR initialization.
	
Examples:

Moneta64.exe -p self -m block --address 0x00007FF662470000 -v detail --option from-base
Moneta64.exe -p * -m * -v surface
Moneta64.exe -p 400 -m suspicious -v surface --option from-base
