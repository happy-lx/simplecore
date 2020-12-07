#!/bin/bash

# 1.get all the test file(name)


test_file=`ls -l | grep ".*\.elf" | grep -v "rtthread.elf" | \
grep -v "microbench-riscv64-nutshell.elf" | \
grep -v "coremark-riscv64-nutshell.elf" | \
grep -v "dhrystone-riscv64-nutshell.elf" | \
grep -v "add-longlong-riscv64-nutshell.elf" | \
grep -v "printf-riscv64-nutshell.elf" | \
awk '{printf $9 "\n"}'`

for file in $test_file
do 
    make install depth=16384 file=$file > /dev/null;
    cd ~/work/ChiselProjects/simpleshell3_master/src/test/scala/gcd/fivestage_difftest/obj_dir;
    echo "$file : "
    ./Vtop | grep -E "(correct|error).*rate"  ;
    # if [ correct_rate -eq 100.00 ];then
    #     echo "$file : ok"
    # else
    #     echo "$file : no"
    # fi
    cd ~/work/ChiselProjects/simpleshell3_master/tools/elf;
done