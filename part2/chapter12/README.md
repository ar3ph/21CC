# Parallel Threads

* get cores: `grep cores /proc/cpuinfo`
* do not put openmp pragma on every for loop, there is overhead for starting a thread.