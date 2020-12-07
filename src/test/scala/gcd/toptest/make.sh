#! /bin/bash
verilator -Wall --cc *.v --exe *.cpp -LDFLAGS "-ldl"
make -j -C obj_dir -f Vtop.mk Vtop