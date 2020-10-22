cc = g++

object = elfloader.o htif_hexwriter.o memif.o elf2hex.o


all:split tool


split: 
	$(cc) split.cpp -o split

tool : $(object)
	$(cc) -o tool $(object)

elfloader.o: elf.h memif.h 
htif_hexwriter.o: memif.h 
memif.o: 
elf2hex.o:

install:
	./tool 8 $(depth) $(file) > result.hex
	./split result.hex result.byte
	cp ./result.byte ../../src/test/scala/gcd/utest/obj_dir/test1.txt
	cp ./result.byte ../../src/test/scala/gcd/fivestage_difftest/obj_dir/test1.txt

clean:
	rm $(object) tool split result.*