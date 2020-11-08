CC = riscv64-unknown-elf-gcc
source = tb.s
target = tb.dump
temp = tb.o
elf = tb.elf

$(target) : $(elf)
	riscv64-unknown-elf-objdump  -S -d  $(elf) > $(target)

$(elf) : $(temp)
	riscv64-unknown-elf-ld -Ttext 0x80000000 $(temp) -o $(elf)
$(temp) : $(source)
	$(CC) -c $(source) -o $(temp)

install:
	./filter2 $(target)
	cp ./test1.txt ../../src/test/scala/gcd/fivestage_difftest/obj_dir/test1.txt
	cp ./test1.txt ../../src/test/scala/gcd/utest/obj_dir/test1.txt
	cp ./test1.txt ../../src/test/scala/gcd/toptest/obj_dir/test1.txt


clean:
	rm *.o *.elf *.dump *.txt
