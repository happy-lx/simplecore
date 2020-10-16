
/home/lx/work/nutshell/nexus-am/apps/printf/build/printf-riscv64-nutshell.elf：     文件格式 elf64-littleriscv


Disassembly of section .text:

0000000080000000 <_start>:
    80000000:	00000413          	li	s0,0
    80000004:	00009117          	auipc	sp,0x9
    80000008:	ffc10113          	addi	sp,sp,-4 # 80009000 <_end>
    8000000c:	050000ef          	jal	ra,8000005c <_trm_init>

Disassembly of section .text.startup:

0000000080000010 <main>:
    80000010:	ff010113          	addi	sp,sp,-16
    80000014:	00001517          	auipc	a0,0x1
    80000018:	b5c50513          	addi	a0,a0,-1188 # 80000b70 <strlen+0x30>
    8000001c:	00113423          	sd	ra,8(sp)
    80000020:	00004033            nop
    80000024:	00813083          	ld	ra,8(sp)
    80000028:	00000513          	li	a0,0
    8000002c:	01010113          	addi	sp,sp,16
    80000030:	00008067          	ret

Disassembly of section .text._putc:

0000000080000034 <_putc>:
    80000034:	0540006f          	j	80000088 <__am_uartlite_putchar>

Disassembly of section .text._halt:

0000000080000038 <_halt>:
    80000038:	ff010113          	addi	sp,sp,-16
    8000003c:	00113423          	sd	ra,8(sp)
    80000040:	00050593          	mv	a1,a0
    80000044:	00050513          	mv	a0,a0
    80000048:	0005006b          	0x5006b
    8000004c:	00001517          	auipc	a0,0x1
    80000050:	b3450513          	addi	a0,a0,-1228 # 80000b80 <strlen+0x40>
    80000054:	2a1000ef          	jal	ra,80000af4 <printf>
    80000058:	0000006f          	j	80000058 <_halt+0x20>

Disassembly of section .text._trm_init:

000000008000005c <_trm_init>:
    8000005c:	ff010113          	addi	sp,sp,-16
    80000060:	00113423          	sd	ra,8(sp)
    80000064:	00004033            nop
    80000068:	00001517          	auipc	a0,0x1
    8000006c:	b2d50513          	addi	a0,a0,-1235 # 80000b95 <__am_mainargs>
    80000070:	fa1ff0ef          	jal	ra,80000010 <main>
    80000074:	fc5ff0ef          	jal	ra,80000038 <_halt>

Disassembly of section .text.__am_init_uartlite:

0000000080000078 <__am_init_uartlite>:
    80000078:	406007b7          	lui	a5,0x40600
    8000007c:	00300713          	li	a4,3
    80000080:	00e78623          	sb	a4,12(a5) # 4060000c <_start-0x3f9ffff4>
    80000084:	00008067          	ret

Disassembly of section .text.__am_uartlite_putchar:

0000000080000088 <__am_uartlite_putchar>:
    80000088:	ff010113          	addi	sp,sp,-16
    8000008c:	00813023          	sd	s0,0(sp)
    80000090:	00113423          	sd	ra,8(sp)
    80000094:	00a00793          	li	a5,10
    80000098:	00050413          	mv	s0,a0
    8000009c:	02f50463          	beq	a0,a5,800000c4 <__am_uartlite_putchar+0x3c>
    800000a0:	40600737          	lui	a4,0x40600
    800000a4:	00874783          	lbu	a5,8(a4) # 40600008 <_start-0x3f9ffff8>
    800000a8:	0087f793          	andi	a5,a5,8
    800000ac:	fe079ce3          	bnez	a5,800000a4 <__am_uartlite_putchar+0x1c>
    800000b0:	00870223          	sb	s0,4(a4)
    800000b4:	00813083          	ld	ra,8(sp)
    800000b8:	00013403          	ld	s0,0(sp)
    800000bc:	01010113          	addi	sp,sp,16
    800000c0:	00008067          	ret
    800000c4:	00d00513          	li	a0,13
    800000c8:	fc1ff0ef          	jal	ra,80000088 <__am_uartlite_putchar>
    800000cc:	fd5ff06f          	j	800000a0 <__am_uartlite_putchar+0x18>

Disassembly of section .text.__putch:

00000000800000d0 <__putch>:
    800000d0:	08058c63          	beqz	a1,80000168 <__putch+0x98>
    800000d4:	fd010113          	addi	sp,sp,-48
    800000d8:	02813023          	sd	s0,32(sp)
    800000dc:	00913c23          	sd	s1,24(sp)
    800000e0:	01213823          	sd	s2,16(sp)
    800000e4:	01313423          	sd	s3,8(sp)
    800000e8:	02113423          	sd	ra,40(sp)
    800000ec:	fff5849b          	addiw	s1,a1,-1
    800000f0:	00060413          	mv	s0,a2
    800000f4:	00050993          	mv	s3,a0
    800000f8:	fff00913          	li	s2,-1
    800000fc:	0280006f          	j	80000124 <__putch+0x54>
    80000100:	01843703          	ld	a4,24(s0)
    80000104:	00e78663          	beq	a5,a4,80000110 <__putch+0x40>
    80000108:	00d43823          	sd	a3,16(s0)
    8000010c:	01378023          	sb	s3,0(a5)
    80000110:	02043783          	ld	a5,32(s0)
    80000114:	fff4849b          	addiw	s1,s1,-1
    80000118:	00178793          	addi	a5,a5,1
    8000011c:	02f43023          	sd	a5,32(s0)
    80000120:	03248663          	beq	s1,s2,8000014c <__putch+0x7c>
    80000124:	01043783          	ld	a5,16(s0)
    80000128:	00178693          	addi	a3,a5,1
    8000012c:	fc079ae3          	bnez	a5,80000100 <__putch+0x30>
    80000130:	00098513          	mv	a0,s3
    80000134:	f01ff0ef          	jal	ra,80000034 <_putc>
    80000138:	02043783          	ld	a5,32(s0)
    8000013c:	fff4849b          	addiw	s1,s1,-1
    80000140:	00178793          	addi	a5,a5,1
    80000144:	02f43023          	sd	a5,32(s0)
    80000148:	fd249ee3          	bne	s1,s2,80000124 <__putch+0x54>
    8000014c:	02813083          	ld	ra,40(sp)
    80000150:	02013403          	ld	s0,32(sp)
    80000154:	01813483          	ld	s1,24(sp)
    80000158:	01013903          	ld	s2,16(sp)
    8000015c:	00813983          	ld	s3,8(sp)
    80000160:	03010113          	addi	sp,sp,48
    80000164:	00008067          	ret
    80000168:	00008067          	ret

Disassembly of section .text.vsnprintf_internal:

000000008000016c <vsnprintf_internal>:
    8000016c:	f1010113          	addi	sp,sp,-240
    80000170:	0e813023          	sd	s0,224(sp)
    80000174:	0d413023          	sd	s4,192(sp)
    80000178:	0e113423          	sd	ra,232(sp)
    8000017c:	0c913c23          	sd	s1,216(sp)
    80000180:	0d213823          	sd	s2,208(sp)
    80000184:	0d313423          	sd	s3,200(sp)
    80000188:	0b513c23          	sd	s5,184(sp)
    8000018c:	0b613823          	sd	s6,176(sp)
    80000190:	0b713423          	sd	s7,168(sp)
    80000194:	0b813023          	sd	s8,160(sp)
    80000198:	09913c23          	sd	s9,152(sp)
    8000019c:	09a13823          	sd	s10,144(sp)
    800001a0:	09b13423          	sd	s11,136(sp)
    800001a4:	00013c23          	sd	zero,24(sp)
    800001a8:	02013023          	sd	zero,32(sp)
    800001ac:	02013c23          	sd	zero,56(sp)
    800001b0:	02a13423          	sd	a0,40(sp)
    800001b4:	00060413          	mv	s0,a2
    800001b8:	00068a13          	mv	s4,a3
    800001bc:	00050663          	beqz	a0,800001c8 <vsnprintf_internal+0x5c>
    800001c0:	00b50533          	add	a0,a0,a1
    800001c4:	58058863          	beqz	a1,80000754 <vsnprintf_internal+0x5e8>
    800001c8:	02a13823          	sd	a0,48(sp)
    800001cc:	00001917          	auipc	s2,0x1
    800001d0:	9cc90913          	addi	s2,s2,-1588 # 80000b98 <__am_mainargs+0x3>
    800001d4:	03900a93          	li	s5,57
    800001d8:	00001997          	auipc	s3,0x1
    800001dc:	b3098993          	addi	s3,s3,-1232 # 80000d08 <__am_mainargs+0x173>
    800001e0:	00044503          	lbu	a0,0(s0)
    800001e4:	02050263          	beqz	a0,80000208 <vsnprintf_internal+0x9c>
    800001e8:	02500793          	li	a5,37
    800001ec:	00140413          	addi	s0,s0,1
    800001f0:	06f50263          	beq	a0,a5,80000254 <vsnprintf_internal+0xe8>
    800001f4:	01810613          	addi	a2,sp,24
    800001f8:	00100593          	li	a1,1
    800001fc:	ed5ff0ef          	jal	ra,800000d0 <__putch>
    80000200:	00044503          	lbu	a0,0(s0)
    80000204:	fe0512e3          	bnez	a0,800001e8 <vsnprintf_internal+0x7c>
    80000208:	02813783          	ld	a5,40(sp)
    8000020c:	00078463          	beqz	a5,80000214 <vsnprintf_internal+0xa8>
    80000210:	00078023          	sb	zero,0(a5)
    80000214:	0e813083          	ld	ra,232(sp)
    80000218:	0e013403          	ld	s0,224(sp)
    8000021c:	03812503          	lw	a0,56(sp)
    80000220:	0d813483          	ld	s1,216(sp)
    80000224:	0d013903          	ld	s2,208(sp)
    80000228:	0c813983          	ld	s3,200(sp)
    8000022c:	0c013a03          	ld	s4,192(sp)
    80000230:	0b813a83          	ld	s5,184(sp)
    80000234:	0b013b03          	ld	s6,176(sp)
    80000238:	0a813b83          	ld	s7,168(sp)
    8000023c:	0a013c03          	ld	s8,160(sp)
    80000240:	09813c83          	ld	s9,152(sp)
    80000244:	09013d03          	ld	s10,144(sp)
    80000248:	08813d83          	ld	s11,136(sp)
    8000024c:	0f010113          	addi	sp,sp,240
    80000250:	00008067          	ret
    80000254:	02000793          	li	a5,32
    80000258:	00f10e23          	sb	a5,28(sp)
    8000025c:	00012c23          	sw	zero,24(sp)
    80000260:	02012023          	sw	zero,32(sp)
    80000264:	00040793          	mv	a5,s0
    80000268:	00000b93          	li	s7,0
    8000026c:	00000b13          	li	s6,0
    80000270:	00000c13          	li	s8,0
    80000274:	05800693          	li	a3,88
    80000278:	06c00e13          	li	t3,108
    8000027c:	06800313          	li	t1,104
    80000280:	02f00593          	li	a1,47
    80000284:	02d00e93          	li	t4,45
    80000288:	00900613          	li	a2,9
    8000028c:	02000813          	li	a6,32
    80000290:	00100513          	li	a0,1
    80000294:	02b00893          	li	a7,43
    80000298:	02b00f13          	li	t5,43
    8000029c:	0007c703          	lbu	a4,0(a5)
    800002a0:	00140413          	addi	s0,s0,1
    800002a4:	fe07079b          	addiw	a5,a4,-32
    800002a8:	0ff7f793          	andi	a5,a5,255
    800002ac:	f2f6eae3          	bltu	a3,a5,800001e0 <vsnprintf_internal+0x74>
    800002b0:	00279793          	slli	a5,a5,0x2
    800002b4:	012787b3          	add	a5,a5,s2
    800002b8:	0007a783          	lw	a5,0(a5)
    800002bc:	012787b3          	add	a5,a5,s2
    800002c0:	00078067          	jr	a5
    800002c4:	fd070c1b          	addiw	s8,a4,-48
    800002c8:	00044703          	lbu	a4,0(s0)
    800002cc:	00140413          	addi	s0,s0,1
    800002d0:	02e5f463          	bgeu	a1,a4,800002f8 <vsnprintf_internal+0x18c>
    800002d4:	fceae8e3          	bltu	s5,a4,800002a4 <vsnprintf_internal+0x138>
    800002d8:	002c179b          	slliw	a5,s8,0x2
    800002dc:	01878c3b          	addw	s8,a5,s8
    800002e0:	001c1c1b          	slliw	s8,s8,0x1
    800002e4:	00140413          	addi	s0,s0,1
    800002e8:	00ec0c3b          	addw	s8,s8,a4
    800002ec:	fff44703          	lbu	a4,-1(s0)
    800002f0:	fd0c0c1b          	addiw	s8,s8,-48
    800002f4:	fee5e0e3          	bltu	a1,a4,800002d4 <vsnprintf_internal+0x168>
    800002f8:	fbd716e3          	bne	a4,t4,800002a4 <vsnprintf_internal+0x138>
    800002fc:	41800c3b          	negw	s8,s8
    80000300:	00040793          	mv	a5,s0
    80000304:	f99ff06f          	j	8000029c <vsnprintf_internal+0x130>
    80000308:	00200793          	li	a5,2
    8000030c:	008a0513          	addi	a0,s4,8
    80000310:	74fb8063          	beq	s7,a5,80000a50 <vsnprintf_internal+0x8e4>
    80000314:	4b77da63          	bge	a5,s7,800007c8 <vsnprintf_internal+0x65c>
    80000318:	00300793          	li	a5,3
    8000031c:	00fb8663          	beq	s7,a5,80000328 <vsnprintf_internal+0x1bc>
    80000320:	00400793          	li	a5,4
    80000324:	72fb9a63          	bne	s7,a5,80000a58 <vsnprintf_internal+0x8ec>
    80000328:	000a3483          	ld	s1,0(s4)
    8000032c:	01810c93          	addi	s9,sp,24
    80000330:	00050a13          	mv	s4,a0
    80000334:	06010fa3          	sb	zero,127(sp)
    80000338:	07f10713          	addi	a4,sp,127
    8000033c:	00f00613          	li	a2,15
    80000340:	0080006f          	j	80000348 <vsnprintf_internal+0x1dc>
    80000344:	00068493          	mv	s1,a3
    80000348:	00f4f793          	andi	a5,s1,15
    8000034c:	00f987b3          	add	a5,s3,a5
    80000350:	0007c783          	lbu	a5,0(a5)
    80000354:	fff70713          	addi	a4,a4,-1
    80000358:	0044d693          	srli	a3,s1,0x4
    8000035c:	00f70023          	sb	a5,0(a4)
    80000360:	fe9662e3          	bltu	a2,s1,80000344 <vsnprintf_internal+0x1d8>
    80000364:	08010793          	addi	a5,sp,128
    80000368:	40e7873b          	subw	a4,a5,a4
    8000036c:	fff70d1b          	addiw	s10,a4,-1
    80000370:	ffe7079b          	addiw	a5,a4,-2
    80000374:	fffd4493          	not	s1,s10
    80000378:	00f13023          	sd	a5,0(sp)
    8000037c:	08010793          	addi	a5,sp,128
    80000380:	009784b3          	add	s1,a5,s1
    80000384:	00000b93          	li	s7,0
    80000388:	136d5a63          	bge	s10,s6,800004bc <vsnprintf_internal+0x350>
    8000038c:	41ab083b          	subw	a6,s6,s10
    80000390:	01780b3b          	addw	s6,a6,s7
    80000394:	01ab073b          	addw	a4,s6,s10
    80000398:	00000d93          	li	s11,0
    8000039c:	01875463          	bge	a4,s8,800003a4 <vsnprintf_internal+0x238>
    800003a0:	40ec0dbb          	subw	s11,s8,a4
    800003a4:	01813683          	ld	a3,24(sp)
    800003a8:	fff00713          	li	a4,-1
    800003ac:	01875713          	srli	a4,a4,0x18
    800003b0:	00e6f6b3          	and	a3,a3,a4
    800003b4:	00100713          	li	a4,1
    800003b8:	02571713          	slli	a4,a4,0x25
    800003bc:	3ae68063          	beq	a3,a4,8000075c <vsnprintf_internal+0x5f0>
    800003c0:	3a0b9c63          	bnez	s7,80000778 <vsnprintf_internal+0x60c>
    800003c4:	01813683          	ld	a3,24(sp)
    800003c8:	fff00713          	li	a4,-1
    800003cc:	01875713          	srli	a4,a4,0x18
    800003d0:	00e6f6b3          	and	a3,a3,a4
    800003d4:	00300713          	li	a4,3
    800003d8:	02471713          	slli	a4,a4,0x24
    800003dc:	3ce68863          	beq	a3,a4,800007ac <vsnprintf_internal+0x640>
    800003e0:	000c8613          	mv	a2,s9
    800003e4:	00080593          	mv	a1,a6
    800003e8:	03000513          	li	a0,48
    800003ec:	ce5ff0ef          	jal	ra,800000d0 <__putch>
    800003f0:	020d0463          	beqz	s10,80000418 <vsnprintf_internal+0x2ac>
    800003f4:	00016b03          	lwu	s6,0(sp)
    800003f8:	001b0b13          	addi	s6,s6,1
    800003fc:	01648b33          	add	s6,s1,s6
    80000400:	00148493          	addi	s1,s1,1
    80000404:	fff4c503          	lbu	a0,-1(s1)
    80000408:	000c8613          	mv	a2,s9
    8000040c:	00100593          	li	a1,1
    80000410:	cc1ff0ef          	jal	ra,800000d0 <__putch>
    80000414:	ff6496e3          	bne	s1,s6,80000400 <vsnprintf_internal+0x294>
    80000418:	01812783          	lw	a5,24(sp)
    8000041c:	dc0782e3          	beqz	a5,800001e0 <vsnprintf_internal+0x74>
    80000420:	01c14503          	lbu	a0,28(sp)
    80000424:	000c8613          	mv	a2,s9
    80000428:	000d8593          	mv	a1,s11
    8000042c:	ca5ff0ef          	jal	ra,800000d0 <__putch>
    80000430:	db1ff06f          	j	800001e0 <vsnprintf_internal+0x74>
    80000434:	01812783          	lw	a5,24(sp)
    80000438:	ec0794e3          	bnez	a5,80000300 <vsnprintf_internal+0x194>
    8000043c:	03000793          	li	a5,48
    80000440:	00f10e23          	sb	a5,28(sp)
    80000444:	00040793          	mv	a5,s0
    80000448:	e55ff06f          	j	8000029c <vsnprintf_internal+0x130>
    8000044c:	00200793          	li	a5,2
    80000450:	60fb8e63          	beq	s7,a5,80000a6c <vsnprintf_internal+0x900>
    80000454:	4377d663          	bge	a5,s7,80000880 <vsnprintf_internal+0x714>
    80000458:	00300793          	li	a5,3
    8000045c:	64fb8063          	beq	s7,a5,80000a9c <vsnprintf_internal+0x930>
    80000460:	00400793          	li	a5,4
    80000464:	00a00713          	li	a4,10
    80000468:	60fb9a63          	bne	s7,a5,80000a7c <vsnprintf_internal+0x910>
    8000046c:	00800693          	li	a3,8
    80000470:	008a0513          	addi	a0,s4,8
    80000474:	000a3783          	ld	a5,0(s4)
    80000478:	44d70263          	beq	a4,a3,800008bc <vsnprintf_internal+0x750>
    8000047c:	00a00693          	li	a3,10
    80000480:	00050a13          	mv	s4,a0
    80000484:	66d70463          	beq	a4,a3,80000aec <vsnprintf_internal+0x980>
    80000488:	fff00793          	li	a5,-1
    8000048c:	00f13023          	sd	a5,0(sp)
    80000490:	fff00493          	li	s1,-1
    80000494:	00000b93          	li	s7,0
    80000498:	00000d13          	li	s10,0
    8000049c:	08010793          	addi	a5,sp,128
    800004a0:	009784b3          	add	s1,a5,s1
    800004a4:	01810c93          	addi	s9,sp,24
    800004a8:	ee0b80e3          	beqz	s7,80000388 <vsnprintf_internal+0x21c>
    800004ac:	02012b83          	lw	s7,32(sp)
    800004b0:	01810c93          	addi	s9,sp,24
    800004b4:	01703bb3          	snez	s7,s7
    800004b8:	ed6d4ae3          	blt	s10,s6,8000038c <vsnprintf_internal+0x220>
    800004bc:	000b8b13          	mv	s6,s7
    800004c0:	00000813          	li	a6,0
    800004c4:	ed1ff06f          	j	80000394 <vsnprintf_internal+0x228>
    800004c8:	008a0c93          	addi	s9,s4,8
    800004cc:	000a3483          	ld	s1,0(s4)
    800004d0:	500b0a63          	beqz	s6,800009e4 <vsnprintf_internal+0x878>
    800004d4:	fffb0b9b          	addiw	s7,s6,-1
    800004d8:	000c8a13          	mv	s4,s9
    800004dc:	00000d13          	li	s10,0
    800004e0:	018b5463          	bge	s6,s8,800004e8 <vsnprintf_internal+0x37c>
    800004e4:	416c0d3b          	subw	s10,s8,s6
    800004e8:	01812783          	lw	a5,24(sp)
    800004ec:	3a078663          	beqz	a5,80000898 <vsnprintf_internal+0x72c>
    800004f0:	01810c93          	addi	s9,sp,24
    800004f4:	020b0a63          	beqz	s6,80000528 <vsnprintf_internal+0x3bc>
    800004f8:	020b9b13          	slli	s6,s7,0x20
    800004fc:	020b5b13          	srli	s6,s6,0x20
    80000500:	001b0b13          	addi	s6,s6,1
    80000504:	01648b33          	add	s6,s1,s6
    80000508:	00148493          	addi	s1,s1,1
    8000050c:	fff4c503          	lbu	a0,-1(s1)
    80000510:	000c8613          	mv	a2,s9
    80000514:	00100593          	li	a1,1
    80000518:	bb9ff0ef          	jal	ra,800000d0 <__putch>
    8000051c:	fe9b16e3          	bne	s6,s1,80000508 <vsnprintf_internal+0x39c>
    80000520:	01812783          	lw	a5,24(sp)
    80000524:	ca078ee3          	beqz	a5,800001e0 <vsnprintf_internal+0x74>
    80000528:	01c14503          	lbu	a0,28(sp)
    8000052c:	000c8613          	mv	a2,s9
    80000530:	000d0593          	mv	a1,s10
    80000534:	b9dff0ef          	jal	ra,800000d0 <__putch>
    80000538:	ca9ff06f          	j	800001e0 <vsnprintf_internal+0x74>
    8000053c:	000a3483          	ld	s1,0(s4)
    80000540:	008a0a13          	addi	s4,s4,8
    80000544:	46049c63          	bnez	s1,800009bc <vsnprintf_internal+0x850>
    80000548:	02800513          	li	a0,40
    8000054c:	00000497          	auipc	s1,0x0
    80000550:	7b448493          	addi	s1,s1,1972 # 80000d00 <__am_mainargs+0x16b>
    80000554:	01810c93          	addi	s9,sp,24
    80000558:	00000b17          	auipc	s6,0x0
    8000055c:	7adb0b13          	addi	s6,s6,1965 # 80000d05 <__am_mainargs+0x170>
    80000560:	0080006f          	j	80000568 <vsnprintf_internal+0x3fc>
    80000564:	0004c503          	lbu	a0,0(s1)
    80000568:	00148493          	addi	s1,s1,1
    8000056c:	000c8613          	mv	a2,s9
    80000570:	00100593          	li	a1,1
    80000574:	b5dff0ef          	jal	ra,800000d0 <__putch>
    80000578:	ff6496e3          	bne	s1,s6,80000564 <vsnprintf_internal+0x3f8>
    8000057c:	c65ff06f          	j	800001e0 <vsnprintf_internal+0x74>
    80000580:	00200793          	li	a5,2
    80000584:	4cfb8e63          	beq	s7,a5,80000a60 <vsnprintf_internal+0x8f4>
    80000588:	2d77dc63          	bge	a5,s7,80000860 <vsnprintf_internal+0x6f4>
    8000058c:	00300793          	li	a5,3
    80000590:	32fb8263          	beq	s7,a5,800008b4 <vsnprintf_internal+0x748>
    80000594:	00400793          	li	a5,4
    80000598:	00800713          	li	a4,8
    8000059c:	ecfb88e3          	beq	s7,a5,8000046c <vsnprintf_internal+0x300>
    800005a0:	000a2783          	lw	a5,0(s4)
    800005a4:	008a0a13          	addi	s4,s4,8
    800005a8:	0077f713          	andi	a4,a5,7
    800005ac:	00e98733          	add	a4,s3,a4
    800005b0:	00074603          	lbu	a2,0(a4)
    800005b4:	06010fa3          	sb	zero,127(sp)
    800005b8:	07f10713          	addi	a4,sp,127
    800005bc:	00700593          	li	a1,7
    800005c0:	0140006f          	j	800005d4 <vsnprintf_internal+0x468>
    800005c4:	0076f793          	andi	a5,a3,7
    800005c8:	00f987b3          	add	a5,s3,a5
    800005cc:	0007c603          	lbu	a2,0(a5)
    800005d0:	0006879b          	sext.w	a5,a3
    800005d4:	fff70713          	addi	a4,a4,-1
    800005d8:	00c70023          	sb	a2,0(a4)
    800005dc:	0037d69b          	srliw	a3,a5,0x3
    800005e0:	fef5e2e3          	bltu	a1,a5,800005c4 <vsnprintf_internal+0x458>
    800005e4:	08010793          	addi	a5,sp,128
    800005e8:	40e7873b          	subw	a4,a5,a4
    800005ec:	fff70d1b          	addiw	s10,a4,-1
    800005f0:	ffe7079b          	addiw	a5,a4,-2
    800005f4:	fffd4493          	not	s1,s10
    800005f8:	00f13023          	sd	a5,0(sp)
    800005fc:	01810c93          	addi	s9,sp,24
    80000600:	d7dff06f          	j	8000037c <vsnprintf_internal+0x210>
    80000604:	00044703          	lbu	a4,0(s0)
    80000608:	00140413          	addi	s0,s0,1
    8000060c:	4dc70463          	beq	a4,t3,80000ad4 <vsnprintf_internal+0x968>
    80000610:	00300b93          	li	s7,3
    80000614:	c91ff06f          	j	800002a4 <vsnprintf_internal+0x138>
    80000618:	02a12023          	sw	a0,32(sp)
    8000061c:	03110223          	sb	a7,36(sp)
    80000620:	00040793          	mv	a5,s0
    80000624:	c79ff06f          	j	8000029c <vsnprintf_internal+0x130>
    80000628:	01810613          	addi	a2,sp,24
    8000062c:	00100593          	li	a1,1
    80000630:	02500513          	li	a0,37
    80000634:	a9dff0ef          	jal	ra,800000d0 <__putch>
    80000638:	ba9ff06f          	j	800001e0 <vsnprintf_internal+0x74>
    8000063c:	02012783          	lw	a5,32(sp)
    80000640:	2c079863          	bnez	a5,80000910 <vsnprintf_internal+0x7a4>
    80000644:	02a12023          	sw	a0,32(sp)
    80000648:	03010223          	sb	a6,36(sp)
    8000064c:	00040793          	mv	a5,s0
    80000650:	c4dff06f          	j	8000029c <vsnprintf_internal+0x130>
    80000654:	00044703          	lbu	a4,0(s0)
    80000658:	00140413          	addi	s0,s0,1
    8000065c:	fd07079b          	addiw	a5,a4,-48
    80000660:	0ff7f793          	andi	a5,a5,255
    80000664:	02f66663          	bltu	a2,a5,80000690 <vsnprintf_internal+0x524>
    80000668:	002b179b          	slliw	a5,s6,0x2
    8000066c:	01678b3b          	addw	s6,a5,s6
    80000670:	001b1b1b          	slliw	s6,s6,0x1
    80000674:	00140413          	addi	s0,s0,1
    80000678:	00eb0b3b          	addw	s6,s6,a4
    8000067c:	fff44703          	lbu	a4,-1(s0)
    80000680:	fd0b0b1b          	addiw	s6,s6,-48
    80000684:	fd07079b          	addiw	a5,a4,-48
    80000688:	0ff7f793          	andi	a5,a5,255
    8000068c:	fcf67ee3          	bgeu	a2,a5,80000668 <vsnprintf_internal+0x4fc>
    80000690:	01010e23          	sb	a6,28(sp)
    80000694:	c11ff06f          	j	800002a4 <vsnprintf_internal+0x138>
    80000698:	00200793          	li	a5,2
    8000069c:	38fb8a63          	beq	s7,a5,80000a30 <vsnprintf_internal+0x8c4>
    800006a0:	1977d463          	bge	a5,s7,80000828 <vsnprintf_internal+0x6bc>
    800006a4:	00300793          	li	a5,3
    800006a8:	00fb8663          	beq	s7,a5,800006b4 <vsnprintf_internal+0x548>
    800006ac:	00400793          	li	a5,4
    800006b0:	34fb9263          	bne	s7,a5,800009f4 <vsnprintf_internal+0x888>
    800006b4:	000a3783          	ld	a5,0(s4)
    800006b8:	008a0a13          	addi	s4,s4,8
    800006bc:	2607c463          	bltz	a5,80000924 <vsnprintf_internal+0x7b8>
    800006c0:	00100b93          	li	s7,1
    800006c4:	06010fa3          	sb	zero,127(sp)
    800006c8:	07f10693          	addi	a3,sp,127
    800006cc:	00a00613          	li	a2,10
    800006d0:	00900513          	li	a0,9
    800006d4:	0080006f          	j	800006dc <vsnprintf_internal+0x570>
    800006d8:	00058793          	mv	a5,a1
    800006dc:	02c7f733          	remu	a4,a5,a2
    800006e0:	fff68693          	addi	a3,a3,-1
    800006e4:	00e98733          	add	a4,s3,a4
    800006e8:	00074703          	lbu	a4,0(a4)
    800006ec:	02c7d5b3          	divu	a1,a5,a2
    800006f0:	00e68023          	sb	a4,0(a3)
    800006f4:	fef562e3          	bltu	a0,a5,800006d8 <vsnprintf_internal+0x56c>
    800006f8:	08010793          	addi	a5,sp,128
    800006fc:	40d786bb          	subw	a3,a5,a3
    80000700:	fff68d1b          	addiw	s10,a3,-1
    80000704:	ffe6879b          	addiw	a5,a3,-2
    80000708:	fffd4493          	not	s1,s10
    8000070c:	00f13023          	sd	a5,0(sp)
    80000710:	d8dff06f          	j	8000049c <vsnprintf_internal+0x330>
    80000714:	00a12c23          	sw	a0,24(sp)
    80000718:	01010e23          	sb	a6,28(sp)
    8000071c:	00040793          	mv	a5,s0
    80000720:	b7dff06f          	j	8000029c <vsnprintf_internal+0x130>
    80000724:	00044703          	lbu	a4,0(s0)
    80000728:	00140413          	addi	s0,s0,1
    8000072c:	3a670a63          	beq	a4,t1,80000ae0 <vsnprintf_internal+0x974>
    80000730:	00200b93          	li	s7,2
    80000734:	b71ff06f          	j	800002a4 <vsnprintf_internal+0x138>
    80000738:	000a2783          	lw	a5,0(s4)
    8000073c:	00000b93          	li	s7,0
    80000740:	008a0a13          	addi	s4,s4,8
    80000744:	04f10023          	sb	a5,64(sp)
    80000748:	04010493          	addi	s1,sp,64
    8000074c:	00100b13          	li	s6,1
    80000750:	d8dff06f          	j	800004dc <vsnprintf_internal+0x370>
    80000754:	00000513          	li	a0,0
    80000758:	a71ff06f          	j	800001c8 <vsnprintf_internal+0x5c>
    8000075c:	01c14503          	lbu	a0,28(sp)
    80000760:	000c8613          	mv	a2,s9
    80000764:	000d8593          	mv	a1,s11
    80000768:	01013423          	sd	a6,8(sp)
    8000076c:	965ff0ef          	jal	ra,800000d0 <__putch>
    80000770:	00813803          	ld	a6,8(sp)
    80000774:	c40b88e3          	beqz	s7,800003c4 <vsnprintf_internal+0x258>
    80000778:	02414503          	lbu	a0,36(sp)
    8000077c:	000c8613          	mv	a2,s9
    80000780:	00100593          	li	a1,1
    80000784:	01013423          	sd	a6,8(sp)
    80000788:	949ff0ef          	jal	ra,800000d0 <__putch>
    8000078c:	01813683          	ld	a3,24(sp)
    80000790:	fff00713          	li	a4,-1
    80000794:	01875713          	srli	a4,a4,0x18
    80000798:	00e6f6b3          	and	a3,a3,a4
    8000079c:	00300713          	li	a4,3
    800007a0:	02471713          	slli	a4,a4,0x24
    800007a4:	00813803          	ld	a6,8(sp)
    800007a8:	c2e69ce3          	bne	a3,a4,800003e0 <vsnprintf_internal+0x274>
    800007ac:	01c14503          	lbu	a0,28(sp)
    800007b0:	000c8613          	mv	a2,s9
    800007b4:	000d8593          	mv	a1,s11
    800007b8:	01013423          	sd	a6,8(sp)
    800007bc:	915ff0ef          	jal	ra,800000d0 <__putch>
    800007c0:	00813803          	ld	a6,8(sp)
    800007c4:	c1dff06f          	j	800003e0 <vsnprintf_internal+0x274>
    800007c8:	00100793          	li	a5,1
    800007cc:	28fb9663          	bne	s7,a5,80000a58 <vsnprintf_internal+0x8ec>
    800007d0:	000a4703          	lbu	a4,0(s4)
    800007d4:	06010fa3          	sb	zero,127(sp)
    800007d8:	07f10693          	addi	a3,sp,127
    800007dc:	00f00593          	li	a1,15
    800007e0:	0080006f          	j	800007e8 <vsnprintf_internal+0x67c>
    800007e4:	00060713          	mv	a4,a2
    800007e8:	00f77793          	andi	a5,a4,15
    800007ec:	00f987b3          	add	a5,s3,a5
    800007f0:	0007c783          	lbu	a5,0(a5)
    800007f4:	fff68693          	addi	a3,a3,-1
    800007f8:	0047561b          	srliw	a2,a4,0x4
    800007fc:	00f68023          	sb	a5,0(a3)
    80000800:	fee5e2e3          	bltu	a1,a4,800007e4 <vsnprintf_internal+0x678>
    80000804:	08010793          	addi	a5,sp,128
    80000808:	40d786bb          	subw	a3,a5,a3
    8000080c:	fff68d1b          	addiw	s10,a3,-1
    80000810:	ffe6879b          	addiw	a5,a3,-2
    80000814:	fffd4493          	not	s1,s10
    80000818:	00f13023          	sd	a5,0(sp)
    8000081c:	00050a13          	mv	s4,a0
    80000820:	01810c93          	addi	s9,sp,24
    80000824:	b59ff06f          	j	8000037c <vsnprintf_internal+0x210>
    80000828:	00100793          	li	a5,1
    8000082c:	1cfb9463          	bne	s7,a5,800009f4 <vsnprintf_internal+0x888>
    80000830:	000a2703          	lw	a4,0(s4)
    80000834:	008a0793          	addi	a5,s4,8
    80000838:	0187169b          	slliw	a3,a4,0x18
    8000083c:	4186d69b          	sraiw	a3,a3,0x18
    80000840:	0e06ce63          	bltz	a3,8000093c <vsnprintf_internal+0x7d0>
    80000844:	0ff77713          	andi	a4,a4,255
    80000848:	00a00693          	li	a3,10
    8000084c:	02d776bb          	remuw	a3,a4,a3
    80000850:	00078a13          	mv	s4,a5
    80000854:	00d987b3          	add	a5,s3,a3
    80000858:	0007c783          	lbu	a5,0(a5)
    8000085c:	1100006f          	j	8000096c <vsnprintf_internal+0x800>
    80000860:	00100793          	li	a5,1
    80000864:	d2fb9ee3          	bne	s7,a5,800005a0 <vsnprintf_internal+0x434>
    80000868:	000a4783          	lbu	a5,0(s4)
    8000086c:	008a0a13          	addi	s4,s4,8
    80000870:	0077f713          	andi	a4,a5,7
    80000874:	00e98733          	add	a4,s3,a4
    80000878:	00074603          	lbu	a2,0(a4)
    8000087c:	d39ff06f          	j	800005b4 <vsnprintf_internal+0x448>
    80000880:	00100793          	li	a5,1
    80000884:	1efb9c63          	bne	s7,a5,80000a7c <vsnprintf_internal+0x910>
    80000888:	008a0793          	addi	a5,s4,8
    8000088c:	000a4703          	lbu	a4,0(s4)
    80000890:	00000b93          	li	s7,0
    80000894:	fb5ff06f          	j	80000848 <vsnprintf_internal+0x6dc>
    80000898:	01c14503          	lbu	a0,28(sp)
    8000089c:	01810c93          	addi	s9,sp,24
    800008a0:	000c8613          	mv	a2,s9
    800008a4:	000d0593          	mv	a1,s10
    800008a8:	829ff0ef          	jal	ra,800000d0 <__putch>
    800008ac:	c40b16e3          	bnez	s6,800004f8 <vsnprintf_internal+0x38c>
    800008b0:	c71ff06f          	j	80000520 <vsnprintf_internal+0x3b4>
    800008b4:	000a3783          	ld	a5,0(s4)
    800008b8:	008a0513          	addi	a0,s4,8
    800008bc:	06010fa3          	sb	zero,127(sp)
    800008c0:	07f10693          	addi	a3,sp,127
    800008c4:	00700593          	li	a1,7
    800008c8:	0080006f          	j	800008d0 <vsnprintf_internal+0x764>
    800008cc:	00060793          	mv	a5,a2
    800008d0:	0077f713          	andi	a4,a5,7
    800008d4:	00e98733          	add	a4,s3,a4
    800008d8:	00074703          	lbu	a4,0(a4)
    800008dc:	fff68693          	addi	a3,a3,-1
    800008e0:	0037d613          	srli	a2,a5,0x3
    800008e4:	00e68023          	sb	a4,0(a3)
    800008e8:	fef5e2e3          	bltu	a1,a5,800008cc <vsnprintf_internal+0x760>
    800008ec:	08010793          	addi	a5,sp,128
    800008f0:	40d786bb          	subw	a3,a5,a3
    800008f4:	fff68d1b          	addiw	s10,a3,-1
    800008f8:	ffe6879b          	addiw	a5,a3,-2
    800008fc:	fffd4493          	not	s1,s10
    80000900:	00f13023          	sd	a5,0(sp)
    80000904:	00050a13          	mv	s4,a0
    80000908:	01810c93          	addi	s9,sp,24
    8000090c:	a71ff06f          	j	8000037c <vsnprintf_internal+0x210>
    80000910:	02414783          	lbu	a5,36(sp)
    80000914:	9fe786e3          	beq	a5,t5,80000300 <vsnprintf_internal+0x194>
    80000918:	02a12023          	sw	a0,32(sp)
    8000091c:	03010223          	sb	a6,36(sp)
    80000920:	d2dff06f          	j	8000064c <vsnprintf_internal+0x4e0>
    80000924:	02d00713          	li	a4,45
    80000928:	02e10223          	sb	a4,36(sp)
    8000092c:	00100713          	li	a4,1
    80000930:	02e12023          	sw	a4,32(sp)
    80000934:	40f007b3          	neg	a5,a5
    80000938:	d89ff06f          	j	800006c0 <vsnprintf_internal+0x554>
    8000093c:	fff74713          	not	a4,a4
    80000940:	0ff77713          	andi	a4,a4,255
    80000944:	02d00693          	li	a3,45
    80000948:	02d10223          	sb	a3,36(sp)
    8000094c:	03712023          	sw	s7,32(sp)
    80000950:	00170713          	addi	a4,a4,1
    80000954:	00078a13          	mv	s4,a5
    80000958:	00a00793          	li	a5,10
    8000095c:	02f777bb          	remuw	a5,a4,a5
    80000960:	00100b93          	li	s7,1
    80000964:	00f987b3          	add	a5,s3,a5
    80000968:	0007c783          	lbu	a5,0(a5)
    8000096c:	06010fa3          	sb	zero,127(sp)
    80000970:	07f10693          	addi	a3,sp,127
    80000974:	00a00613          	li	a2,10
    80000978:	00900593          	li	a1,9
    8000097c:	0140006f          	j	80000990 <vsnprintf_internal+0x824>
    80000980:	0007871b          	sext.w	a4,a5
    80000984:	02c7f7bb          	remuw	a5,a5,a2
    80000988:	00f987b3          	add	a5,s3,a5
    8000098c:	0007c783          	lbu	a5,0(a5)
    80000990:	fff68693          	addi	a3,a3,-1
    80000994:	00f68023          	sb	a5,0(a3)
    80000998:	02c757bb          	divuw	a5,a4,a2
    8000099c:	fee5e2e3          	bltu	a1,a4,80000980 <vsnprintf_internal+0x814>
    800009a0:	08010793          	addi	a5,sp,128
    800009a4:	40d786bb          	subw	a3,a5,a3
    800009a8:	fff68d1b          	addiw	s10,a3,-1
    800009ac:	ffe6879b          	addiw	a5,a3,-2
    800009b0:	fffd4493          	not	s1,s10
    800009b4:	00f13023          	sd	a5,0(sp)
    800009b8:	ae5ff06f          	j	8000049c <vsnprintf_internal+0x330>
    800009bc:	01810c93          	addi	s9,sp,24
    800009c0:	000c8613          	mv	a2,s9
    800009c4:	00100593          	li	a1,1
    800009c8:	03000513          	li	a0,48
    800009cc:	f04ff0ef          	jal	ra,800000d0 <__putch>
    800009d0:	000c8613          	mv	a2,s9
    800009d4:	00100593          	li	a1,1
    800009d8:	07800513          	li	a0,120
    800009dc:	ef4ff0ef          	jal	ra,800000d0 <__putch>
    800009e0:	955ff06f          	j	80000334 <vsnprintf_internal+0x1c8>
    800009e4:	00048513          	mv	a0,s1
    800009e8:	158000ef          	jal	ra,80000b40 <strlen>
    800009ec:	00050b1b          	sext.w	s6,a0
    800009f0:	ae5ff06f          	j	800004d4 <vsnprintf_internal+0x368>
    800009f4:	000a2783          	lw	a5,0(s4)
    800009f8:	008a0a13          	addi	s4,s4,8
    800009fc:	0007871b          	sext.w	a4,a5
    80000a00:	f407dce3          	bgez	a5,80000958 <vsnprintf_internal+0x7ec>
    80000a04:	40e0073b          	negw	a4,a4
    80000a08:	00a00793          	li	a5,10
    80000a0c:	02f777bb          	remuw	a5,a4,a5
    80000a10:	02d00693          	li	a3,45
    80000a14:	02d10223          	sb	a3,36(sp)
    80000a18:	00100693          	li	a3,1
    80000a1c:	02d12023          	sw	a3,32(sp)
    80000a20:	00100b93          	li	s7,1
    80000a24:	00f987b3          	add	a5,s3,a5
    80000a28:	0007c783          	lbu	a5,0(a5)
    80000a2c:	f41ff06f          	j	8000096c <vsnprintf_internal+0x800>
    80000a30:	000a2703          	lw	a4,0(s4)
    80000a34:	008a0793          	addi	a5,s4,8
    80000a38:	03071693          	slli	a3,a4,0x30
    80000a3c:	0606c863          	bltz	a3,80000aac <vsnprintf_internal+0x940>
    80000a40:	03071713          	slli	a4,a4,0x30
    80000a44:	03075713          	srli	a4,a4,0x30
    80000a48:	00100b93          	li	s7,1
    80000a4c:	dfdff06f          	j	80000848 <vsnprintf_internal+0x6dc>
    80000a50:	000a5703          	lhu	a4,0(s4)
    80000a54:	d81ff06f          	j	800007d4 <vsnprintf_internal+0x668>
    80000a58:	000a2703          	lw	a4,0(s4)
    80000a5c:	d79ff06f          	j	800007d4 <vsnprintf_internal+0x668>
    80000a60:	000a5783          	lhu	a5,0(s4)
    80000a64:	008a0a13          	addi	s4,s4,8
    80000a68:	e09ff06f          	j	80000870 <vsnprintf_internal+0x704>
    80000a6c:	008a0793          	addi	a5,s4,8
    80000a70:	000a5703          	lhu	a4,0(s4)
    80000a74:	00000b93          	li	s7,0
    80000a78:	dd1ff06f          	j	80000848 <vsnprintf_internal+0x6dc>
    80000a7c:	000a2703          	lw	a4,0(s4)
    80000a80:	00a00793          	li	a5,10
    80000a84:	008a0a13          	addi	s4,s4,8
    80000a88:	02f777bb          	remuw	a5,a4,a5
    80000a8c:	00000b93          	li	s7,0
    80000a90:	00f987b3          	add	a5,s3,a5
    80000a94:	0007c783          	lbu	a5,0(a5)
    80000a98:	ed5ff06f          	j	8000096c <vsnprintf_internal+0x800>
    80000a9c:	000a3783          	ld	a5,0(s4)
    80000aa0:	00000b93          	li	s7,0
    80000aa4:	008a0a13          	addi	s4,s4,8
    80000aa8:	c1dff06f          	j	800006c4 <vsnprintf_internal+0x558>
    80000aac:	fff74713          	not	a4,a4
    80000ab0:	02d00693          	li	a3,45
    80000ab4:	0107171b          	slliw	a4,a4,0x10
    80000ab8:	0107571b          	srliw	a4,a4,0x10
    80000abc:	02d10223          	sb	a3,36(sp)
    80000ac0:	00100693          	li	a3,1
    80000ac4:	02d12023          	sw	a3,32(sp)
    80000ac8:	00170713          	addi	a4,a4,1
    80000acc:	00078a13          	mv	s4,a5
    80000ad0:	e89ff06f          	j	80000958 <vsnprintf_internal+0x7ec>
    80000ad4:	00400b93          	li	s7,4
    80000ad8:	00040793          	mv	a5,s0
    80000adc:	fc0ff06f          	j	8000029c <vsnprintf_internal+0x130>
    80000ae0:	00100b93          	li	s7,1
    80000ae4:	00040793          	mv	a5,s0
    80000ae8:	fb4ff06f          	j	8000029c <vsnprintf_internal+0x130>
    80000aec:	00000b93          	li	s7,0
    80000af0:	bd5ff06f          	j	800006c4 <vsnprintf_internal+0x558>

Disassembly of section .text.printf:

0000000080000af4 <printf>:
    80000af4:	fa010113          	addi	sp,sp,-96
    80000af8:	02810313          	addi	t1,sp,40
    80000afc:	02b13423          	sd	a1,40(sp)
    80000b00:	02c13823          	sd	a2,48(sp)
    80000b04:	02d13c23          	sd	a3,56(sp)
    80000b08:	00050613          	mv	a2,a0
    80000b0c:	00030693          	mv	a3,t1
    80000b10:	00100593          	li	a1,1
    80000b14:	00100513          	li	a0,1
    80000b18:	00113c23          	sd	ra,24(sp)
    80000b1c:	04e13023          	sd	a4,64(sp)
    80000b20:	04f13423          	sd	a5,72(sp)
    80000b24:	05013823          	sd	a6,80(sp)
    80000b28:	05113c23          	sd	a7,88(sp)
    80000b2c:	00613423          	sd	t1,8(sp)
    80000b30:	e3cff0ef          	jal	ra,8000016c <vsnprintf_internal>
    80000b34:	01813083          	ld	ra,24(sp)
    80000b38:	06010113          	addi	sp,sp,96
    80000b3c:	00008067          	ret

Disassembly of section .text.strlen:

0000000080000b40 <strlen>:
    80000b40:	00054783          	lbu	a5,0(a0)
    80000b44:	02078063          	beqz	a5,80000b64 <strlen+0x24>
    80000b48:	00000793          	li	a5,0
    80000b4c:	00178793          	addi	a5,a5,1
    80000b50:	00f50733          	add	a4,a0,a5
    80000b54:	00074703          	lbu	a4,0(a4)
    80000b58:	fe071ae3          	bnez	a4,80000b4c <strlen+0xc>
    80000b5c:	00078513          	mv	a0,a5
    80000b60:	00008067          	ret
    80000b64:	00000793          	li	a5,0
    80000b68:	00078513          	mv	a0,a5
    80000b6c:	00008067          	ret
