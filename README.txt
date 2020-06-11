   _____                        __          
  /     \   ____   ____   _____/  |______   
 /  \ /  \ /  _ \ /    \_/ __ \   __\__  \  
/    Y    (  <_> )   |  \  ___/|  |  / __ \_
\____|__  /\____/|___|  /\___  >__| (____  /
        \/            \/     \/          \/ 

Moneta v1.0 | Forrest Orr | 2020

REQUIRED

-m {*|region|referenced|ioc}
-p {*|PID}

OPTIONAL

-v {detail|debug|surface}
-d
--option {from-base|statistics}
--filter {unsigned-module|clr-prvx|clr-heap|metadata-modules}
--address <memory address>
--region-size <memory region size>


-m                  The memory to select and apply scanner settings to.

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
                    
                    unsigned-module     Regions of image memory associated with unsigned PE files.
                    metadata-modules    Regions of image memory stemming from signed Windows metadata PE
                                        files on disk.
                    clr-heap            Native executable heaps created during CLR initialization.
                    clr-prvx            Managed heaps associated with active CLR heaps and JIT code.
