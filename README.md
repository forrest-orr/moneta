_______  _____  __   _ _______ _______ _______
|  |  | |     | | \  | |______    |    |_____|
|  |  | |_____| |  \_| |______    |    |     |

Moneta v1.0 | Usage
Target process: -p [PID, "*" or "self"]
  Select a specific PID, the current process or all accessible
  processes to search for selected memory. This operation requires
  read/query access to the specified process.
  
Memory selection type: -m ["block", "process", or "suspicious"]
  + Block selection type:
    The block containing the specified memory address will be
    selected for enumeration and/or dumping.
	
	Required additional parameters:
      --address [The hex format memory address within the target
                process to select and enumerate/dump]
    Example:
      Moneta64.exe -p 312 -m block --address 0x00007FF662470000 -v detail
	  
  + Process selection type:
    Selects all regions and the blocks that they contain from
    the entire selected process address space.
	
  + Suspicious selection type
	Selects only the blocks of memory which show suspicious
	attributes, potential malware artifacts.
	
Verbosity level: -v ["detail" or "surface"]
  The verbosity level determines how much information about
  selected memory blocks/regions will be displayed.
  
Dump selected memory: -d
  All memory blocks/regions selected via the "-m" parameter will
  be dumped to a physical file on disk.

Memory selection options: --m-opt ["from-base"]
  + Optionally select memory "from base"
	All selected blocks will implicitly also select all other
	blocks which share their allocation base. For example, a
	block within a PE image will implicitly select all blocks
	within the PE image region.
	
Examples:

Moneta64.exe -p self -m block --address 0x00007FF662470000 -v detail --m-opt from-base
Moneta64.exe 
