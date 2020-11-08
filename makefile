all:
	sbt 'test:runMain mycore.start -td generated/$(file)'

	cp generated/$(file)/top.v src/test/scala/gcd/utest/top.v
	cp generated/$(file)/UARTHelper.v src/test/scala/gcd/utest/UARTHelper.v
	cp generated/$(file)/top.AXI4_Ram.mem.v src/test/scala/gcd/utest/top.AXI4_Ram.mem.v

	cp generated/$(file)/top.v src/test/scala/gcd/fivestage_difftest/top.v
	cp generated/$(file)/UARTHelper.v src/test/scala/gcd/fivestage_difftest/UARTHelper.v
	cp generated/$(file)/top.AXI4_Ram.mem.v src/test/scala/gcd/fivestage_difftest/top.AXI4_Ram.mem.v

	cp generated/$(file)/top.v src/test/scala/gcd/toptest/top.v
	cp generated/$(file)/UARTHelper.v src/test/scala/gcd/toptest/UARTHelper.v
	cp generated/$(file)/top.AXI4_Ram.mem.v src/test/scala/gcd/toptest/top.AXI4_Ram.mem.v

	