_______  _____  __   _ _______ _______ _______
|  |  | |     | | \  | |______    |    |_____|
|  |  | |_____| |  \_| |______    |    |     |
 
~ Moneta v1.0 | Usage
  Memory selection type: -m ["block", "process", or "suspicious"]
    + Block selection type:
	~ Description:
	  The block containing the specified memory address will be
	  selected for enumeration and/or dumping.
	~ Required additional parameters:
	  --address [The hex format memory address within the target
	            process to select and enumerate/dump]
	~ Example:
	  Moneta64.exe -p 312 -m block --address 0x00007FF662470000 -v detail
	+ Process selection type:
	~ Description