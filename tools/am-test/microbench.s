
/home/lx/work/nutshell/nexus-am/apps/microbench/build/microbench-riscv64-nutshell.elf：     文件格式 elf64-littleriscv


Disassembly of section .text:

0000000080000000 <_start>:
    80000000:	00000413          	li	s0,0
    80000004:	0000f117          	auipc	sp,0xf
    80000008:	ffc10113          	addi	sp,sp,-4 # 8000f000 <_end>
    8000000c:	7a0040ef          	jal	ra,800047ac <_trm_init>

0000000080000010 <bench_sieve_prepare>:
    80000010:	00006797          	auipc	a5,0x6
    80000014:	6a87b783          	ld	a5,1704(a5) # 800066b8 <setting>
    80000018:	0007a783          	lw	a5,0(a5)
    8000001c:	ff010113          	addi	sp,sp,-16
    80000020:	00813023          	sd	s0,0(sp)
    80000024:	41f7d51b          	sraiw	a0,a5,0x1f
    80000028:	01d5551b          	srliw	a0,a0,0x1d
    8000002c:	00f5053b          	addw	a0,a0,a5
    80000030:	4035551b          	sraiw	a0,a0,0x3
    80000034:	00006417          	auipc	s0,0x6
    80000038:	57040413          	addi	s0,s0,1392 # 800065a4 <N>
    8000003c:	0805051b          	addiw	a0,a0,128
    80000040:	00f42023          	sw	a5,0(s0)
    80000044:	00113423          	sd	ra,8(sp)
    80000048:	16c020ef          	jal	ra,800021b4 <bench_alloc>
    8000004c:	00042783          	lw	a5,0(s0)
    80000050:	00006717          	auipc	a4,0x6
    80000054:	54a73423          	sd	a0,1352(a4) # 80006598 <primes>
    80000058:	fe100693          	li	a3,-31
    8000005c:	41f7d71b          	sraiw	a4,a5,0x1f
    80000060:	01b7571b          	srliw	a4,a4,0x1b
    80000064:	00f7073b          	addw	a4,a4,a5
    80000068:	02d7c063          	blt	a5,a3,80000088 <bench_sieve_prepare+0x78>
    8000006c:	4057571b          	sraiw	a4,a4,0x5
    80000070:	00000793          	li	a5,0
    80000074:	fff00693          	li	a3,-1
    80000078:	00d52023          	sw	a3,0(a0)
    8000007c:	0017879b          	addiw	a5,a5,1
    80000080:	00450513          	addi	a0,a0,4
    80000084:	fef75ae3          	bge	a4,a5,80000078 <bench_sieve_prepare+0x68>
    80000088:	00813083          	ld	ra,8(sp)
    8000008c:	00013403          	ld	s0,0(sp)
    80000090:	01010113          	addi	sp,sp,16
    80000094:	00008067          	ret

0000000080000098 <bench_sieve_run>:
    80000098:	00006597          	auipc	a1,0x6
    8000009c:	50c5a583          	lw	a1,1292(a1) # 800065a4 <N>
    800000a0:	10b05c63          	blez	a1,800001b8 <bench_sieve_run+0x120>
    800000a4:	00006617          	auipc	a2,0x6
    800000a8:	4f460613          	addi	a2,a2,1268 # 80006598 <primes>
    800000ac:	00063683          	ld	a3,0(a2)
    800000b0:	0006a783          	lw	a5,0(a3)
    800000b4:	0017d79b          	srliw	a5,a5,0x1
    800000b8:	0017f793          	andi	a5,a5,1
    800000bc:	00079c63          	bnez	a5,800000d4 <bench_sieve_run+0x3c>
    800000c0:	10c0006f          	j	800001cc <bench_sieve_run+0x134>
    800000c4:	00072703          	lw	a4,0(a4)
    800000c8:	00f7573b          	srlw	a4,a4,a5
    800000cc:	00177713          	andi	a4,a4,1
    800000d0:	0e070c63          	beqz	a4,800001c8 <bench_sieve_run+0x130>
    800000d4:	0017879b          	addiw	a5,a5,1
    800000d8:	4057d71b          	sraiw	a4,a5,0x5
    800000dc:	00271713          	slli	a4,a4,0x2
    800000e0:	00e68733          	add	a4,a3,a4
    800000e4:	fef5d0e3          	bge	a1,a5,800000c4 <bench_sieve_run+0x2c>
    800000e8:	00300793          	li	a5,3
    800000ec:	0cb7d663          	bge	a5,a1,800001b8 <bench_sieve_run+0x120>
    800000f0:	00063803          	ld	a6,0(a2)
    800000f4:	00100893          	li	a7,1
    800000f8:	00200613          	li	a2,2
    800000fc:	0100006f          	j	8000010c <bench_sieve_run+0x74>
    80000100:	0016061b          	addiw	a2,a2,1
    80000104:	02c607bb          	mulw	a5,a2,a2
    80000108:	06f5c063          	blt	a1,a5,80000168 <bench_sieve_run+0xd0>
    8000010c:	40565793          	srai	a5,a2,0x5
    80000110:	00279793          	slli	a5,a5,0x2
    80000114:	00f807b3          	add	a5,a6,a5
    80000118:	0007a783          	lw	a5,0(a5)
    8000011c:	00c7d7bb          	srlw	a5,a5,a2
    80000120:	0017f793          	andi	a5,a5,1
    80000124:	fc078ee3          	beqz	a5,80000100 <bench_sieve_run+0x68>
    80000128:	0016169b          	slliw	a3,a2,0x1
    8000012c:	fcd5cae3          	blt	a1,a3,80000100 <bench_sieve_run+0x68>
    80000130:	4056d713          	srai	a4,a3,0x5
    80000134:	00271713          	slli	a4,a4,0x2
    80000138:	00e80733          	add	a4,a6,a4
    8000013c:	00072503          	lw	a0,0(a4)
    80000140:	01f6f793          	andi	a5,a3,31
    80000144:	00f897b3          	sll	a5,a7,a5
    80000148:	fff7c793          	not	a5,a5
    8000014c:	00a7f7b3          	and	a5,a5,a0
    80000150:	00f72023          	sw	a5,0(a4)
    80000154:	00d606bb          	addw	a3,a2,a3
    80000158:	fcd5dce3          	bge	a1,a3,80000130 <bench_sieve_run+0x98>
    8000015c:	0016061b          	addiw	a2,a2,1
    80000160:	02c607bb          	mulw	a5,a2,a2
    80000164:	faf5d4e3          	bge	a1,a5,8000010c <bench_sieve_run+0x74>
    80000168:	00006797          	auipc	a5,0x6
    8000016c:	4207ac23          	sw	zero,1080(a5) # 800065a0 <ans>
    80000170:	00000613          	li	a2,0
    80000174:	00000693          	li	a3,0
    80000178:	00200713          	li	a4,2
    8000017c:	40575793          	srai	a5,a4,0x5
    80000180:	00279793          	slli	a5,a5,0x2
    80000184:	00f807b3          	add	a5,a6,a5
    80000188:	0007a783          	lw	a5,0(a5)
    8000018c:	00e7d7bb          	srlw	a5,a5,a4
    80000190:	0017f793          	andi	a5,a5,1
    80000194:	0017071b          	addiw	a4,a4,1
    80000198:	00078663          	beqz	a5,800001a4 <bench_sieve_run+0x10c>
    8000019c:	0016869b          	addiw	a3,a3,1
    800001a0:	00100613          	li	a2,1
    800001a4:	fce5dce3          	bge	a1,a4,8000017c <bench_sieve_run+0xe4>
    800001a8:	02060063          	beqz	a2,800001c8 <bench_sieve_run+0x130>
    800001ac:	00006797          	auipc	a5,0x6
    800001b0:	3ed7aa23          	sw	a3,1012(a5) # 800065a0 <ans>
    800001b4:	00008067          	ret
    800001b8:	00006797          	auipc	a5,0x6
    800001bc:	3e07a423          	sw	zero,1000(a5) # 800065a0 <ans>
    800001c0:	00100793          	li	a5,1
    800001c4:	00b7c663          	blt	a5,a1,800001d0 <bench_sieve_run+0x138>
    800001c8:	00008067          	ret
    800001cc:	00008067          	ret
    800001d0:	00006817          	auipc	a6,0x6
    800001d4:	3c883803          	ld	a6,968(a6) # 80006598 <primes>
    800001d8:	f99ff06f          	j	80000170 <bench_sieve_run+0xd8>

00000000800001dc <bench_sieve_validate>:
    800001dc:	00006797          	auipc	a5,0x6
    800001e0:	4dc7b783          	ld	a5,1244(a5) # 800066b8 <setting>
    800001e4:	0187a503          	lw	a0,24(a5)
    800001e8:	00006797          	auipc	a5,0x6
    800001ec:	3b87a783          	lw	a5,952(a5) # 800065a0 <ans>
    800001f0:	40f50533          	sub	a0,a0,a5
    800001f4:	00153513          	seqz	a0,a0
    800001f8:	00008067          	ret

00000000800001fc <myqsort>:
    800001fc:	fd010113          	addi	sp,sp,-48
    80000200:	01213823          	sd	s2,16(sp)
    80000204:	01313423          	sd	s3,8(sp)
    80000208:	01413023          	sd	s4,0(sp)
    8000020c:	02113423          	sd	ra,40(sp)
    80000210:	02813023          	sd	s0,32(sp)
    80000214:	00913c23          	sd	s1,24(sp)
    80000218:	00060a13          	mv	s4,a2
    8000021c:	00050993          	mv	s3,a0
    80000220:	00850913          	addi	s2,a0,8
    80000224:	0b45dc63          	bge	a1,s4,800002dc <myqsort+0xe0>
    80000228:	00259793          	slli	a5,a1,0x2
    8000022c:	00f98e33          	add	t3,s3,a5
    80000230:	0015871b          	addiw	a4,a1,1
    80000234:	000e2303          	lw	t1,0(t3)
    80000238:	ffea049b          	addiw	s1,s4,-2
    8000023c:	09475c63          	bge	a4,s4,800002d4 <myqsort+0xd8>
    80000240:	40b4883b          	subw	a6,s1,a1
    80000244:	02081813          	slli	a6,a6,0x20
    80000248:	02085813          	srli	a6,a6,0x20
    8000024c:	00b80833          	add	a6,a6,a1
    80000250:	00478793          	addi	a5,a5,4
    80000254:	00281813          	slli	a6,a6,0x2
    80000258:	00f987b3          	add	a5,s3,a5
    8000025c:	01280833          	add	a6,a6,s2
    80000260:	00058613          	mv	a2,a1
    80000264:	0007a683          	lw	a3,0(a5)
    80000268:	0016041b          	addiw	s0,a2,1
    8000026c:	00241713          	slli	a4,s0,0x2
    80000270:	0026051b          	addiw	a0,a2,2
    80000274:	00e98733          	add	a4,s3,a4
    80000278:	0066dc63          	bge	a3,t1,80000290 <myqsort+0x94>
    8000027c:	00072883          	lw	a7,0(a4)
    80000280:	00d72023          	sw	a3,0(a4)
    80000284:	00040613          	mv	a2,s0
    80000288:	0117a023          	sw	a7,0(a5)
    8000028c:	00050413          	mv	s0,a0
    80000290:	00478793          	addi	a5,a5,4
    80000294:	fcf818e3          	bne	a6,a5,80000264 <myqsort+0x68>
    80000298:	00261793          	slli	a5,a2,0x2
    8000029c:	000e2683          	lw	a3,0(t3)
    800002a0:	00f987b3          	add	a5,s3,a5
    800002a4:	0007a703          	lw	a4,0(a5)
    800002a8:	00d7a023          	sw	a3,0(a5)
    800002ac:	00098513          	mv	a0,s3
    800002b0:	00ee2023          	sw	a4,0(t3)
    800002b4:	f49ff0ef          	jal	ra,800001fc <myqsort>
    800002b8:	03445263          	bge	s0,s4,800002dc <myqsort+0xe0>
    800002bc:	00040593          	mv	a1,s0
    800002c0:	00259793          	slli	a5,a1,0x2
    800002c4:	00f98e33          	add	t3,s3,a5
    800002c8:	0015871b          	addiw	a4,a1,1
    800002cc:	000e2303          	lw	t1,0(t3)
    800002d0:	f74748e3          	blt	a4,s4,80000240 <myqsort+0x44>
    800002d4:	00058a13          	mv	s4,a1
    800002d8:	f545c8e3          	blt	a1,s4,80000228 <myqsort+0x2c>
    800002dc:	02813083          	ld	ra,40(sp)
    800002e0:	02013403          	ld	s0,32(sp)
    800002e4:	01813483          	ld	s1,24(sp)
    800002e8:	01013903          	ld	s2,16(sp)
    800002ec:	00813983          	ld	s3,8(sp)
    800002f0:	00013a03          	ld	s4,0(sp)
    800002f4:	03010113          	addi	sp,sp,48
    800002f8:	00008067          	ret

00000000800002fc <bench_qsort_prepare>:
    800002fc:	fd010113          	addi	sp,sp,-48
    80000300:	00100513          	li	a0,1
    80000304:	02113423          	sd	ra,40(sp)
    80000308:	01213823          	sd	s2,16(sp)
    8000030c:	01313423          	sd	s3,8(sp)
    80000310:	02813023          	sd	s0,32(sp)
    80000314:	00913c23          	sd	s1,24(sp)
    80000318:	73d010ef          	jal	ra,80002254 <bench_srand>
    8000031c:	00006797          	auipc	a5,0x6
    80000320:	39c7b783          	ld	a5,924(a5) # 800066b8 <setting>
    80000324:	0007a783          	lw	a5,0(a5)
    80000328:	00006917          	auipc	s2,0x6
    8000032c:	28890913          	addi	s2,s2,648 # 800065b0 <N>
    80000330:	00006997          	auipc	s3,0x6
    80000334:	27898993          	addi	s3,s3,632 # 800065a8 <data>
    80000338:	00279513          	slli	a0,a5,0x2
    8000033c:	00f92023          	sw	a5,0(s2)
    80000340:	675010ef          	jal	ra,800021b4 <bench_alloc>
    80000344:	00092783          	lw	a5,0(s2)
    80000348:	00a9b023          	sd	a0,0(s3)
    8000034c:	02f05e63          	blez	a5,80000388 <bench_qsort_prepare+0x8c>
    80000350:	00000493          	li	s1,0
    80000354:	715010ef          	jal	ra,80002268 <bench_rand>
    80000358:	0005041b          	sext.w	s0,a0
    8000035c:	70d010ef          	jal	ra,80002268 <bench_rand>
    80000360:	0009b783          	ld	a5,0(s3)
    80000364:	00249693          	slli	a3,s1,0x2
    80000368:	0104141b          	slliw	s0,s0,0x10
    8000036c:	00092703          	lw	a4,0(s2)
    80000370:	00d787b3          	add	a5,a5,a3
    80000374:	00856433          	or	s0,a0,s0
    80000378:	00148493          	addi	s1,s1,1
    8000037c:	0087a023          	sw	s0,0(a5)
    80000380:	0004879b          	sext.w	a5,s1
    80000384:	fce7c8e3          	blt	a5,a4,80000354 <bench_qsort_prepare+0x58>
    80000388:	02813083          	ld	ra,40(sp)
    8000038c:	02013403          	ld	s0,32(sp)
    80000390:	01813483          	ld	s1,24(sp)
    80000394:	01013903          	ld	s2,16(sp)
    80000398:	00813983          	ld	s3,8(sp)
    8000039c:	03010113          	addi	sp,sp,48
    800003a0:	00008067          	ret

00000000800003a4 <bench_qsort_run>:
    800003a4:	00006617          	auipc	a2,0x6
    800003a8:	20c62603          	lw	a2,524(a2) # 800065b0 <N>
    800003ac:	00000593          	li	a1,0
    800003b0:	00006517          	auipc	a0,0x6
    800003b4:	1f853503          	ld	a0,504(a0) # 800065a8 <data>
    800003b8:	e45ff06f          	j	800001fc <myqsort>

00000000800003bc <bench_qsort_validate>:
    800003bc:	00006597          	auipc	a1,0x6
    800003c0:	1f45a583          	lw	a1,500(a1) # 800065b0 <N>
    800003c4:	00006517          	auipc	a0,0x6
    800003c8:	1e453503          	ld	a0,484(a0) # 800065a8 <data>
    800003cc:	00259593          	slli	a1,a1,0x2
    800003d0:	ff010113          	addi	sp,sp,-16
    800003d4:	00b505b3          	add	a1,a0,a1
    800003d8:	00113423          	sd	ra,8(sp)
    800003dc:	6c1010ef          	jal	ra,8000229c <checksum>
    800003e0:	00006797          	auipc	a5,0x6
    800003e4:	2d87b783          	ld	a5,728(a5) # 800066b8 <setting>
    800003e8:	0187a783          	lw	a5,24(a5)
    800003ec:	00813083          	ld	ra,8(sp)
    800003f0:	0005051b          	sext.w	a0,a0
    800003f4:	40a78533          	sub	a0,a5,a0
    800003f8:	00153513          	seqz	a0,a0
    800003fc:	01010113          	addi	sp,sp,16
    80000400:	00008067          	ret

0000000080000404 <bench_md5_prepare>:
    80000404:	00006797          	auipc	a5,0x6
    80000408:	2b47b783          	ld	a5,692(a5) # 800066b8 <setting>
    8000040c:	0007a783          	lw	a5,0(a5)
    80000410:	fe010113          	addi	sp,sp,-32
    80000414:	00913423          	sd	s1,8(sp)
    80000418:	00100513          	li	a0,1
    8000041c:	00006497          	auipc	s1,0x6
    80000420:	1ac48493          	addi	s1,s1,428 # 800065c8 <N>
    80000424:	00f4a023          	sw	a5,0(s1)
    80000428:	00113c23          	sd	ra,24(sp)
    8000042c:	01213023          	sd	s2,0(sp)
    80000430:	00813823          	sd	s0,16(sp)
    80000434:	621010ef          	jal	ra,80002254 <bench_srand>
    80000438:	0004a503          	lw	a0,0(s1)
    8000043c:	00006917          	auipc	s2,0x6
    80000440:	18490913          	addi	s2,s2,388 # 800065c0 <str>
    80000444:	571010ef          	jal	ra,800021b4 <bench_alloc>
    80000448:	0004a783          	lw	a5,0(s1)
    8000044c:	00a93023          	sd	a0,0(s2)
    80000450:	02f05463          	blez	a5,80000478 <bench_md5_prepare+0x74>
    80000454:	00000413          	li	s0,0
    80000458:	611010ef          	jal	ra,80002268 <bench_rand>
    8000045c:	00093783          	ld	a5,0(s2)
    80000460:	0004a703          	lw	a4,0(s1)
    80000464:	008787b3          	add	a5,a5,s0
    80000468:	00140413          	addi	s0,s0,1
    8000046c:	00a78023          	sb	a0,0(a5)
    80000470:	0004079b          	sext.w	a5,s0
    80000474:	fee7c2e3          	blt	a5,a4,80000458 <bench_md5_prepare+0x54>
    80000478:	01000513          	li	a0,16
    8000047c:	539010ef          	jal	ra,800021b4 <bench_alloc>
    80000480:	01813083          	ld	ra,24(sp)
    80000484:	01013403          	ld	s0,16(sp)
    80000488:	00006797          	auipc	a5,0x6
    8000048c:	12a7b823          	sd	a0,304(a5) # 800065b8 <digest>
    80000490:	00813483          	ld	s1,8(sp)
    80000494:	00013903          	ld	s2,0(sp)
    80000498:	02010113          	addi	sp,sp,32
    8000049c:	00008067          	ret

00000000800004a0 <bench_md5_run>:
    800004a0:	00006697          	auipc	a3,0x6
    800004a4:	1286a683          	lw	a3,296(a3) # 800065c8 <N>
    800004a8:	f6010113          	addi	sp,sp,-160
    800004ac:	00168793          	addi	a5,a3,1
    800004b0:	00006f97          	auipc	t6,0x6
    800004b4:	110fbf83          	ld	t6,272(t6) # 800065c0 <str>
    800004b8:	08813c23          	sd	s0,152(sp)
    800004bc:	08913823          	sd	s1,144(sp)
    800004c0:	09213423          	sd	s2,136(sp)
    800004c4:	09313023          	sd	s3,128(sp)
    800004c8:	07413c23          	sd	s4,120(sp)
    800004cc:	07513823          	sd	s5,112(sp)
    800004d0:	07613423          	sd	s6,104(sp)
    800004d4:	07713023          	sd	s7,96(sp)
    800004d8:	05813c23          	sd	s8,88(sp)
    800004dc:	05913823          	sd	s9,80(sp)
    800004e0:	05a13423          	sd	s10,72(sp)
    800004e4:	05b13023          	sd	s11,64(sp)
    800004e8:	03f7f513          	andi	a0,a5,63
    800004ec:	03800593          	li	a1,56
    800004f0:	00006717          	auipc	a4,0x6
    800004f4:	0c873703          	ld	a4,200(a4) # 800065b8 <digest>
    800004f8:	00df8633          	add	a2,t6,a3
    800004fc:	00078f13          	mv	t5,a5
    80000500:	2eb50863          	beq	a0,a1,800007f0 <bench_md5_run+0x350>
    80000504:	03800513          	li	a0,56
    80000508:	001f0f13          	addi	t5,t5,1
    8000050c:	03ff7593          	andi	a1,t5,63
    80000510:	fea59ce3          	bne	a1,a0,80000508 <bench_md5_run+0x68>
    80000514:	f8000593          	li	a1,-128
    80000518:	00b60023          	sb	a1,0(a2)
    8000051c:	2de7fe63          	bgeu	a5,t5,800007f8 <bench_md5_run+0x358>
    80000520:	00ff87b3          	add	a5,t6,a5
    80000524:	01ef8633          	add	a2,t6,t5
    80000528:	00078023          	sb	zero,0(a5)
    8000052c:	00178793          	addi	a5,a5,1
    80000530:	fef61ce3          	bne	a2,a5,80000528 <bench_md5_run+0x88>
    80000534:	0036951b          	slliw	a0,a3,0x3
    80000538:	41d6d593          	srai	a1,a3,0x1d
    8000053c:	0185581b          	srliw	a6,a0,0x18
    80000540:	0085531b          	srliw	t1,a0,0x8
    80000544:	0105589b          	srliw	a7,a0,0x10
    80000548:	004f0793          	addi	a5,t5,4
    8000054c:	00a60023          	sb	a0,0(a2)
    80000550:	010601a3          	sb	a6,3(a2)
    80000554:	006600a3          	sb	t1,1(a2)
    80000558:	01160123          	sb	a7,2(a2)
    8000055c:	00ff87b3          	add	a5,t6,a5
    80000560:	0085d51b          	srliw	a0,a1,0x8
    80000564:	0105d61b          	srliw	a2,a1,0x10
    80000568:	0185d59b          	srliw	a1,a1,0x18
    8000056c:	01d6d693          	srli	a3,a3,0x1d
    80000570:	00a780a3          	sb	a0,1(a5)
    80000574:	00c78123          	sb	a2,2(a5)
    80000578:	00b781a3          	sb	a1,3(a5)
    8000057c:	10325637          	lui	a2,0x10325
    80000580:	98bae5b7          	lui	a1,0x98bae
    80000584:	efcdb537          	lui	a0,0xefcdb
    80000588:	67452837          	lui	a6,0x67452
    8000058c:	d76aa3b7          	lui	t2,0xd76aa
    80000590:	00d78023          	sb	a3,0(a5)
    80000594:	47660613          	addi	a2,a2,1142 # 10325476 <_start-0x6fcdab8a>
    80000598:	cfe58593          	addi	a1,a1,-770 # ffffffff98badcfe <_pmem_end+0xffffffff10badcfe>
    8000059c:	b8950513          	addi	a0,a0,-1143 # ffffffffefcdab89 <_pmem_end+0xffffffff67cdab89>
    800005a0:	30180813          	addi	a6,a6,769 # 67452301 <_start-0x18badcff>
    800005a4:	00000293          	li	t0,0
    800005a8:	47838393          	addi	t2,t2,1144 # ffffffffd76aa478 <_pmem_end+0xffffffff4f6aa478>
    800005ac:	00f00c13          	li	s8,15
    800005b0:	01f00b93          	li	s7,31
    800005b4:	02f00b13          	li	s6,47
    800005b8:	03f00a93          	li	s5,63
    800005bc:	005f87b3          	add	a5,t6,t0
    800005c0:	00010e13          	mv	t3,sp
    800005c4:	0017c303          	lbu	t1,1(a5)
    800005c8:	0007ce83          	lbu	t4,0(a5)
    800005cc:	0027c883          	lbu	a7,2(a5)
    800005d0:	0037c683          	lbu	a3,3(a5)
    800005d4:	00831313          	slli	t1,t1,0x8
    800005d8:	01d36333          	or	t1,t1,t4
    800005dc:	01089893          	slli	a7,a7,0x10
    800005e0:	0068e8b3          	or	a7,a7,t1
    800005e4:	01869693          	slli	a3,a3,0x18
    800005e8:	0116e6b3          	or	a3,a3,a7
    800005ec:	00de2023          	sw	a3,0(t3)
    800005f0:	004e0e13          	addi	t3,t3,4
    800005f4:	04010693          	addi	a3,sp,64
    800005f8:	00478793          	addi	a5,a5,4
    800005fc:	fdc694e3          	bne	a3,t3,800005c4 <bench_md5_run+0x124>
    80000600:	00080793          	mv	a5,a6
    80000604:	00038d13          	mv	s10,t2
    80000608:	00000e93          	li	t4,0
    8000060c:	00005a17          	auipc	s4,0x5
    80000610:	f20a0a13          	addi	s4,s4,-224 # 8000552c <k+0x4>
    80000614:	00005997          	auipc	s3,0x5
    80000618:	01898993          	addi	s3,s3,24 # 8000562c <r+0x4>
    8000061c:	00050893          	mv	a7,a0
    80000620:	00060e13          	mv	t3,a2
    80000624:	00058313          	mv	t1,a1
    80000628:	00100913          	li	s2,1
    8000062c:	00500493          	li	s1,5
    80000630:	00000413          	li	s0,0
    80000634:	00700c93          	li	s9,7
    80000638:	01a78d3b          	addw	s10,a5,s10
    8000063c:	09dc7263          	bgeu	s8,t4,800006c0 <bench_md5_run+0x220>
    80000640:	011347b3          	xor	a5,t1,a7
    80000644:	01c7f7b3          	and	a5,a5,t3
    80000648:	00f347b3          	xor	a5,t1,a5
    8000064c:	09dbe663          	bltu	s7,t4,800006d8 <bench_md5_run+0x238>
    80000650:	0007879b          	sext.w	a5,a5
    80000654:	00f97693          	andi	a3,s2,15
    80000658:	02069693          	slli	a3,a3,0x20
    8000065c:	01e6d693          	srli	a3,a3,0x1e
    80000660:	04010d93          	addi	s11,sp,64
    80000664:	00dd86b3          	add	a3,s11,a3
    80000668:	fc06a683          	lw	a3,-64(a3)
    8000066c:	01a787bb          	addw	a5,a5,s10
    80000670:	41900d3b          	negw	s10,s9
    80000674:	00d787bb          	addw	a5,a5,a3
    80000678:	019796bb          	sllw	a3,a5,s9
    8000067c:	01a7d7bb          	srlw	a5,a5,s10
    80000680:	00f6e6b3          	or	a3,a3,a5
    80000684:	011686bb          	addw	a3,a3,a7
    80000688:	000a2d03          	lw	s10,0(s4)
    8000068c:	000e0793          	mv	a5,t3
    80000690:	001e8e9b          	addiw	t4,t4,1
    80000694:	0009ac83          	lw	s9,0(s3)
    80000698:	00030e13          	mv	t3,t1
    8000069c:	004a0a13          	addi	s4,s4,4
    800006a0:	00088313          	mv	t1,a7
    800006a4:	00498993          	addi	s3,s3,4
    800006a8:	0074041b          	addiw	s0,s0,7
    800006ac:	0034849b          	addiw	s1,s1,3
    800006b0:	0059091b          	addiw	s2,s2,5
    800006b4:	00068893          	mv	a7,a3
    800006b8:	01a78d3b          	addw	s10,a5,s10
    800006bc:	f9dc62e3          	bltu	s8,t4,80000640 <bench_md5_run+0x1a0>
    800006c0:	01c347b3          	xor	a5,t1,t3
    800006c4:	0117f7b3          	and	a5,a5,a7
    800006c8:	00fe47b3          	xor	a5,t3,a5
    800006cc:	0007879b          	sext.w	a5,a5
    800006d0:	000e8693          	mv	a3,t4
    800006d4:	f85ff06f          	j	80000658 <bench_md5_run+0x1b8>
    800006d8:	01c347b3          	xor	a5,t1,t3
    800006dc:	0117c7b3          	xor	a5,a5,a7
    800006e0:	01db6863          	bltu	s6,t4,800006f0 <bench_md5_run+0x250>
    800006e4:	0007879b          	sext.w	a5,a5
    800006e8:	00f4f693          	andi	a3,s1,15
    800006ec:	f6dff06f          	j	80000658 <bench_md5_run+0x1b8>
    800006f0:	00f47793          	andi	a5,s0,15
    800006f4:	04010693          	addi	a3,sp,64
    800006f8:	00279793          	slli	a5,a5,0x2
    800006fc:	00f687b3          	add	a5,a3,a5
    80000700:	fc07a783          	lw	a5,-64(a5)
    80000704:	fffe4693          	not	a3,t3
    80000708:	0116e6b3          	or	a3,a3,a7
    8000070c:	0066c6b3          	xor	a3,a3,t1
    80000710:	00d787bb          	addw	a5,a5,a3
    80000714:	01a787bb          	addw	a5,a5,s10
    80000718:	41900d3b          	negw	s10,s9
    8000071c:	019796bb          	sllw	a3,a5,s9
    80000720:	01a7d7bb          	srlw	a5,a5,s10
    80000724:	00f6e6b3          	or	a3,a3,a5
    80000728:	011686bb          	addw	a3,a3,a7
    8000072c:	f55e9ee3          	bne	t4,s5,80000688 <bench_md5_run+0x1e8>
    80000730:	04028293          	addi	t0,t0,64
    80000734:	010e083b          	addw	a6,t3,a6
    80000738:	00a6853b          	addw	a0,a3,a0
    8000073c:	00b885bb          	addw	a1,a7,a1
    80000740:	00c3063b          	addw	a2,t1,a2
    80000744:	e7e2ece3          	bltu	t0,t5,800005bc <bench_md5_run+0x11c>
    80000748:	0088549b          	srliw	s1,a6,0x8
    8000074c:	0108541b          	srliw	s0,a6,0x10
    80000750:	0188539b          	srliw	t2,a6,0x18
    80000754:	0085529b          	srliw	t0,a0,0x8
    80000758:	01055f9b          	srliw	t6,a0,0x10
    8000075c:	01855f1b          	srliw	t5,a0,0x18
    80000760:	0085de9b          	srliw	t4,a1,0x8
    80000764:	0105de1b          	srliw	t3,a1,0x10
    80000768:	0185d31b          	srliw	t1,a1,0x18
    8000076c:	0086589b          	srliw	a7,a2,0x8
    80000770:	0106569b          	srliw	a3,a2,0x10
    80000774:	0186579b          	srliw	a5,a2,0x18
    80000778:	01070023          	sb	a6,0(a4)
    8000077c:	009700a3          	sb	s1,1(a4)
    80000780:	00870123          	sb	s0,2(a4)
    80000784:	007701a3          	sb	t2,3(a4)
    80000788:	00a70223          	sb	a0,4(a4)
    8000078c:	005702a3          	sb	t0,5(a4)
    80000790:	01f70323          	sb	t6,6(a4)
    80000794:	01e703a3          	sb	t5,7(a4)
    80000798:	00b70423          	sb	a1,8(a4)
    8000079c:	01d704a3          	sb	t4,9(a4)
    800007a0:	01c70523          	sb	t3,10(a4)
    800007a4:	006705a3          	sb	t1,11(a4)
    800007a8:	00c70623          	sb	a2,12(a4)
    800007ac:	011706a3          	sb	a7,13(a4)
    800007b0:	00d70723          	sb	a3,14(a4)
    800007b4:	00f707a3          	sb	a5,15(a4)
    800007b8:	09813403          	ld	s0,152(sp)
    800007bc:	09013483          	ld	s1,144(sp)
    800007c0:	08813903          	ld	s2,136(sp)
    800007c4:	08013983          	ld	s3,128(sp)
    800007c8:	07813a03          	ld	s4,120(sp)
    800007cc:	07013a83          	ld	s5,112(sp)
    800007d0:	06813b03          	ld	s6,104(sp)
    800007d4:	06013b83          	ld	s7,96(sp)
    800007d8:	05813c03          	ld	s8,88(sp)
    800007dc:	05013c83          	ld	s9,80(sp)
    800007e0:	04813d03          	ld	s10,72(sp)
    800007e4:	04013d83          	ld	s11,64(sp)
    800007e8:	0a010113          	addi	sp,sp,160
    800007ec:	00008067          	ret
    800007f0:	f8000793          	li	a5,-128
    800007f4:	00f60023          	sb	a5,0(a2)
    800007f8:	01ef8633          	add	a2,t6,t5
    800007fc:	d39ff06f          	j	80000534 <bench_md5_run+0x94>

0000000080000800 <bench_md5_validate>:
    80000800:	00006517          	auipc	a0,0x6
    80000804:	db853503          	ld	a0,-584(a0) # 800065b8 <digest>
    80000808:	ff010113          	addi	sp,sp,-16
    8000080c:	01050593          	addi	a1,a0,16
    80000810:	00113423          	sd	ra,8(sp)
    80000814:	289010ef          	jal	ra,8000229c <checksum>
    80000818:	00006797          	auipc	a5,0x6
    8000081c:	ea07b783          	ld	a5,-352(a5) # 800066b8 <setting>
    80000820:	0187a783          	lw	a5,24(a5)
    80000824:	00813083          	ld	ra,8(sp)
    80000828:	0005051b          	sext.w	a0,a0
    8000082c:	40a78533          	sub	a0,a5,a0
    80000830:	00153513          	seqz	a0,a0
    80000834:	01010113          	addi	sp,sp,16
    80000838:	00008067          	ret

000000008000083c <bench_fib_prepare>:
    8000083c:	00006797          	auipc	a5,0x6
    80000840:	e7c7b783          	ld	a5,-388(a5) # 800066b8 <setting>
    80000844:	0007a783          	lw	a5,0(a5)
    80000848:	ff010113          	addi	sp,sp,-16
    8000084c:	00813023          	sd	s0,0(sp)
    80000850:	02f7843b          	mulw	s0,a5,a5
    80000854:	00113423          	sd	ra,8(sp)
    80000858:	00006717          	auipc	a4,0x6
    8000085c:	d8f72c23          	sw	a5,-616(a4) # 800065f0 <M>
    80000860:	0024141b          	slliw	s0,s0,0x2
    80000864:	00040513          	mv	a0,s0
    80000868:	14d010ef          	jal	ra,800021b4 <bench_alloc>
    8000086c:	00050793          	mv	a5,a0
    80000870:	00040513          	mv	a0,s0
    80000874:	00006717          	auipc	a4,0x6
    80000878:	d6f73a23          	sd	a5,-652(a4) # 800065e8 <A>
    8000087c:	139010ef          	jal	ra,800021b4 <bench_alloc>
    80000880:	00050793          	mv	a5,a0
    80000884:	00040513          	mv	a0,s0
    80000888:	00006717          	auipc	a4,0x6
    8000088c:	d4f73823          	sd	a5,-688(a4) # 800065d8 <T>
    80000890:	125010ef          	jal	ra,800021b4 <bench_alloc>
    80000894:	00050793          	mv	a5,a0
    80000898:	00040513          	mv	a0,s0
    8000089c:	00006717          	auipc	a4,0x6
    800008a0:	d4f73223          	sd	a5,-700(a4) # 800065e0 <ans>
    800008a4:	111010ef          	jal	ra,800021b4 <bench_alloc>
    800008a8:	00813083          	ld	ra,8(sp)
    800008ac:	00013403          	ld	s0,0(sp)
    800008b0:	00006797          	auipc	a5,0x6
    800008b4:	d2a7b023          	sd	a0,-736(a5) # 800065d0 <tmp>
    800008b8:	01010113          	addi	sp,sp,16
    800008bc:	00008067          	ret

00000000800008c0 <bench_fib_run>:
    800008c0:	fc010113          	addi	sp,sp,-64
    800008c4:	02813c23          	sd	s0,56(sp)
    800008c8:	02913823          	sd	s1,48(sp)
    800008cc:	03213423          	sd	s2,40(sp)
    800008d0:	03313023          	sd	s3,32(sp)
    800008d4:	01413c23          	sd	s4,24(sp)
    800008d8:	01513823          	sd	s5,16(sp)
    800008dc:	01613423          	sd	s6,8(sp)
    800008e0:	00006817          	auipc	a6,0x6
    800008e4:	d1082803          	lw	a6,-752(a6) # 800065f0 <M>
    800008e8:	00006e17          	auipc	t3,0x6
    800008ec:	cf0e3e03          	ld	t3,-784(t3) # 800065d8 <T>
    800008f0:	00006f97          	auipc	t6,0x6
    800008f4:	cf0fbf83          	ld	t6,-784(t6) # 800065e0 <ans>
    800008f8:	25005863          	blez	a6,80000b48 <bench_fib_run+0x288>
    800008fc:	fff8099b          	addiw	s3,a6,-1
    80000900:	00006417          	auipc	s0,0x6
    80000904:	ce843403          	ld	s0,-792(s0) # 800065e8 <A>
    80000908:	0009839b          	sext.w	t2,s3
    8000090c:	00281313          	slli	t1,a6,0x2
    80000910:	00000913          	li	s2,0
    80000914:	00000493          	li	s1,0
    80000918:	00000293          	li	t0,0
    8000091c:	0012829b          	addiw	t0,t0,1
    80000920:	00090713          	mv	a4,s2
    80000924:	00000793          	li	a5,0
    80000928:	0004859b          	sext.w	a1,s1
    8000092c:	40b786b3          	sub	a3,a5,a1
    80000930:	40578f33          	sub	t5,a5,t0
    80000934:	00e40eb3          	add	t4,s0,a4
    80000938:	00ee08b3          	add	a7,t3,a4
    8000093c:	00ef8533          	add	a0,t6,a4
    80000940:	0016b693          	seqz	a3,a3
    80000944:	0017879b          	addiw	a5,a5,1
    80000948:	00100613          	li	a2,1
    8000094c:	00b38463          	beq	t2,a1,80000954 <bench_fib_run+0x94>
    80000950:	001f3613          	seqz	a2,t5
    80000954:	00cea023          	sw	a2,0(t4)
    80000958:	00c8a023          	sw	a2,0(a7)
    8000095c:	00d52023          	sw	a3,0(a0)
    80000960:	00470713          	addi	a4,a4,4
    80000964:	fd0794e3          	bne	a5,a6,8000092c <bench_fib_run+0x6c>
    80000968:	0014849b          	addiw	s1,s1,1
    8000096c:	00690933          	add	s2,s2,t1
    80000970:	fa5816e3          	bne	a6,t0,8000091c <bench_fib_run+0x5c>
    80000974:	02099793          	slli	a5,s3,0x20
    80000978:	0207d793          	srli	a5,a5,0x20
    8000097c:	00006297          	auipc	t0,0x6
    80000980:	c542b283          	ld	t0,-940(t0) # 800065d0 <tmp>
    80000984:	00279793          	slli	a5,a5,0x2
    80000988:	004f8393          	addi	t2,t6,4
    8000098c:	00428413          	addi	s0,t0,4
    80000990:	80000eb7          	lui	t4,0x80000
    80000994:	00f383b3          	add	t2,t2,a5
    80000998:	00f40433          	add	s0,s0,a5
    8000099c:	01f00f13          	li	t5,31
    800009a0:	fd3ece93          	xori	t4,t4,-45
    800009a4:	001ef793          	andi	a5,t4,1
    800009a8:	0e079463          	bnez	a5,80000a90 <bench_fib_run+0x1d0>
    800009ac:	0b005a63          	blez	a6,80000a60 <bench_fib_run+0x1a0>
    800009b0:	000e0993          	mv	s3,t3
    800009b4:	00028a93          	mv	s5,t0
    800009b8:	000e0913          	mv	s2,t3
    800009bc:	00000a13          	li	s4,0
    800009c0:	000e0493          	mv	s1,t3
    800009c4:	000a8513          	mv	a0,s5
    800009c8:	00000893          	li	a7,0
    800009cc:	00052023          	sw	zero,0(a0)
    800009d0:	00048593          	mv	a1,s1
    800009d4:	00090613          	mv	a2,s2
    800009d8:	00000793          	li	a5,0
    800009dc:	00000693          	li	a3,0
    800009e0:	00062703          	lw	a4,0(a2)
    800009e4:	0005ab03          	lw	s6,0(a1)
    800009e8:	0016869b          	addiw	a3,a3,1
    800009ec:	00460613          	addi	a2,a2,4
    800009f0:	0367073b          	mulw	a4,a4,s6
    800009f4:	006585b3          	add	a1,a1,t1
    800009f8:	00f707bb          	addw	a5,a4,a5
    800009fc:	00f52023          	sw	a5,0(a0)
    80000a00:	ff06c0e3          	blt	a3,a6,800009e0 <bench_fib_run+0x120>
    80000a04:	0018889b          	addiw	a7,a7,1
    80000a08:	00450513          	addi	a0,a0,4
    80000a0c:	00448493          	addi	s1,s1,4
    80000a10:	fb08cee3          	blt	a7,a6,800009cc <bench_fib_run+0x10c>
    80000a14:	001a0a1b          	addiw	s4,s4,1
    80000a18:	00690933          	add	s2,s2,t1
    80000a1c:	006a8ab3          	add	s5,s5,t1
    80000a20:	fb0a40e3          	blt	s4,a6,800009c0 <bench_fib_run+0x100>
    80000a24:	00028513          	mv	a0,t0
    80000a28:	00000593          	li	a1,0
    80000a2c:	00098693          	mv	a3,s3
    80000a30:	00050713          	mv	a4,a0
    80000a34:	00000793          	li	a5,0
    80000a38:	00072603          	lw	a2,0(a4)
    80000a3c:	0017879b          	addiw	a5,a5,1
    80000a40:	00470713          	addi	a4,a4,4
    80000a44:	00c6a023          	sw	a2,0(a3)
    80000a48:	00468693          	addi	a3,a3,4
    80000a4c:	ff07c6e3          	blt	a5,a6,80000a38 <bench_fib_run+0x178>
    80000a50:	0015859b          	addiw	a1,a1,1
    80000a54:	00650533          	add	a0,a0,t1
    80000a58:	006989b3          	add	s3,s3,t1
    80000a5c:	fd05c8e3          	blt	a1,a6,80000a2c <bench_fib_run+0x16c>
    80000a60:	ffff0f1b          	addiw	t5,t5,-1
    80000a64:	401ede93          	srai	t4,t4,0x1
    80000a68:	f20f1ee3          	bnez	t5,800009a4 <bench_fib_run+0xe4>
    80000a6c:	03813403          	ld	s0,56(sp)
    80000a70:	03013483          	ld	s1,48(sp)
    80000a74:	02813903          	ld	s2,40(sp)
    80000a78:	02013983          	ld	s3,32(sp)
    80000a7c:	01813a03          	ld	s4,24(sp)
    80000a80:	01013a83          	ld	s5,16(sp)
    80000a84:	00813b03          	ld	s6,8(sp)
    80000a88:	04010113          	addi	sp,sp,64
    80000a8c:	00008067          	ret
    80000a90:	fd0058e3          	blez	a6,80000a60 <bench_fib_run+0x1a0>
    80000a94:	00028a93          	mv	s5,t0
    80000a98:	00038893          	mv	a7,t2
    80000a9c:	000f8993          	mv	s3,t6
    80000aa0:	00000a13          	li	s4,0
    80000aa4:	000e0913          	mv	s2,t3
    80000aa8:	000a8513          	mv	a0,s5
    80000aac:	00000493          	li	s1,0
    80000ab0:	00052023          	sw	zero,0(a0)
    80000ab4:	00090613          	mv	a2,s2
    80000ab8:	00098713          	mv	a4,s3
    80000abc:	00000793          	li	a5,0
    80000ac0:	00072683          	lw	a3,0(a4)
    80000ac4:	00062583          	lw	a1,0(a2)
    80000ac8:	00470713          	addi	a4,a4,4
    80000acc:	00660633          	add	a2,a2,t1
    80000ad0:	02b686bb          	mulw	a3,a3,a1
    80000ad4:	00f687bb          	addw	a5,a3,a5
    80000ad8:	00f52023          	sw	a5,0(a0)
    80000adc:	fee892e3          	bne	a7,a4,80000ac0 <bench_fib_run+0x200>
    80000ae0:	0014849b          	addiw	s1,s1,1
    80000ae4:	00450513          	addi	a0,a0,4
    80000ae8:	00490913          	addi	s2,s2,4
    80000aec:	fd0492e3          	bne	s1,a6,80000ab0 <bench_fib_run+0x1f0>
    80000af0:	001a0a1b          	addiw	s4,s4,1
    80000af4:	006989b3          	add	s3,s3,t1
    80000af8:	006888b3          	add	a7,a7,t1
    80000afc:	006a8ab3          	add	s5,s5,t1
    80000b00:	fb0a12e3          	bne	s4,a6,80000aa4 <bench_fib_run+0x1e4>
    80000b04:	00040613          	mv	a2,s0
    80000b08:	000f8893          	mv	a7,t6
    80000b0c:	00028513          	mv	a0,t0
    80000b10:	00000593          	li	a1,0
    80000b14:	00088713          	mv	a4,a7
    80000b18:	00050793          	mv	a5,a0
    80000b1c:	0007a683          	lw	a3,0(a5)
    80000b20:	00478793          	addi	a5,a5,4
    80000b24:	00470713          	addi	a4,a4,4
    80000b28:	fed72e23          	sw	a3,-4(a4)
    80000b2c:	fec798e3          	bne	a5,a2,80000b1c <bench_fib_run+0x25c>
    80000b30:	0015859b          	addiw	a1,a1,1
    80000b34:	00650533          	add	a0,a0,t1
    80000b38:	006888b3          	add	a7,a7,t1
    80000b3c:	00660633          	add	a2,a2,t1
    80000b40:	fd059ae3          	bne	a1,a6,80000b14 <bench_fib_run+0x254>
    80000b44:	e6dff06f          	j	800009b0 <bench_fib_run+0xf0>
    80000b48:	00281313          	slli	t1,a6,0x2
    80000b4c:	fff8099b          	addiw	s3,a6,-1
    80000b50:	e25ff06f          	j	80000974 <bench_fib_run+0xb4>

0000000080000b54 <bench_fib_validate>:
    80000b54:	00006797          	auipc	a5,0x6
    80000b58:	a9c7a783          	lw	a5,-1380(a5) # 800065f0 <M>
    80000b5c:	fff7871b          	addiw	a4,a5,-1
    80000b60:	02e787bb          	mulw	a5,a5,a4
    80000b64:	00006697          	auipc	a3,0x6
    80000b68:	b546b683          	ld	a3,-1196(a3) # 800066b8 <setting>
    80000b6c:	0186a683          	lw	a3,24(a3)
    80000b70:	00e787bb          	addw	a5,a5,a4
    80000b74:	00279793          	slli	a5,a5,0x2
    80000b78:	00006717          	auipc	a4,0x6
    80000b7c:	a6873703          	ld	a4,-1432(a4) # 800065e0 <ans>
    80000b80:	00f707b3          	add	a5,a4,a5
    80000b84:	0007a503          	lw	a0,0(a5)
    80000b88:	40d50533          	sub	a0,a0,a3
    80000b8c:	00153513          	seqz	a0,a0
    80000b90:	00008067          	ret

0000000080000b94 <bench_dinic_prepare>:
    80000b94:	00006797          	auipc	a5,0x6
    80000b98:	b247b783          	ld	a5,-1244(a5) # 800066b8 <setting>
    80000b9c:	0007a783          	lw	a5,0(a5)
    80000ba0:	f9010113          	addi	sp,sp,-112
    80000ba4:	05213823          	sd	s2,80(sp)
    80000ba8:	00100513          	li	a0,1
    80000bac:	00006917          	auipc	s2,0x6
    80000bb0:	a5c90913          	addi	s2,s2,-1444 # 80006608 <_ZL1N>
    80000bb4:	06113423          	sd	ra,104(sp)
    80000bb8:	00f92023          	sw	a5,0(s2)
    80000bbc:	04913c23          	sd	s1,88(sp)
    80000bc0:	05313423          	sd	s3,72(sp)
    80000bc4:	05413023          	sd	s4,64(sp)
    80000bc8:	03513c23          	sd	s5,56(sp)
    80000bcc:	03613823          	sd	s6,48(sp)
    80000bd0:	03713423          	sd	s7,40(sp)
    80000bd4:	03813023          	sd	s8,32(sp)
    80000bd8:	06813023          	sd	s0,96(sp)
    80000bdc:	01913c23          	sd	s9,24(sp)
    80000be0:	01a13823          	sd	s10,16(sp)
    80000be4:	01b13423          	sd	s11,8(sp)
    80000be8:	66c010ef          	jal	ra,80002254 <bench_srand>
    80000bec:	04800513          	li	a0,72
    80000bf0:	00092b83          	lw	s7,0(s2)
    80000bf4:	5c0010ef          	jal	ra,800021b4 <bench_alloc>
    80000bf8:	00092783          	lw	a5,0(s2)
    80000bfc:	00006997          	auipc	s3,0x6
    80000c00:	a0498993          	addi	s3,s3,-1532 # 80006600 <_ZL1G>
    80000c04:	00050493          	mv	s1,a0
    80000c08:	0017879b          	addiw	a5,a5,1
    80000c0c:	00179b1b          	slliw	s6,a5,0x1
    80000c10:	ffeb079b          	addiw	a5,s6,-2
    80000c14:	4017d79b          	sraiw	a5,a5,0x1
    80000c18:	02f78a3b          	mulw	s4,a5,a5
    80000c1c:	0017979b          	slliw	a5,a5,0x1
    80000c20:	00a9b023          	sd	a0,0(s3)
    80000c24:	002b1a93          	slli	s5,s6,0x2
    80000c28:	001b9c1b          	slliw	s8,s7,0x1
    80000c2c:	001c0b9b          	addiw	s7,s8,1
    80000c30:	00fa07bb          	addw	a5,s4,a5
    80000c34:	00179a1b          	slliw	s4,a5,0x1
    80000c38:	004a1513          	slli	a0,s4,0x4
    80000c3c:	578010ef          	jal	ra,800021b4 <bench_alloc>
    80000c40:	00a4b823          	sd	a0,16(s1)
    80000c44:	000a8513          	mv	a0,s5
    80000c48:	56c010ef          	jal	ra,800021b4 <bench_alloc>
    80000c4c:	00a4bc23          	sd	a0,24(s1)
    80000c50:	002a1513          	slli	a0,s4,0x2
    80000c54:	560010ef          	jal	ra,800021b4 <bench_alloc>
    80000c58:	02a4b023          	sd	a0,32(s1)
    80000c5c:	000b0513          	mv	a0,s6
    80000c60:	554010ef          	jal	ra,800021b4 <bench_alloc>
    80000c64:	04a4b023          	sd	a0,64(s1)
    80000c68:	000a8513          	mv	a0,s5
    80000c6c:	548010ef          	jal	ra,800021b4 <bench_alloc>
    80000c70:	02a4b423          	sd	a0,40(s1)
    80000c74:	000a8513          	mv	a0,s5
    80000c78:	53c010ef          	jal	ra,800021b4 <bench_alloc>
    80000c7c:	02a4b823          	sd	a0,48(s1)
    80000c80:	000a8513          	mv	a0,s5
    80000c84:	530010ef          	jal	ra,800021b4 <bench_alloc>
    80000c88:	02a4bc23          	sd	a0,56(s1)
    80000c8c:	0164a023          	sw	s6,0(s1)
    80000c90:	03605863          	blez	s6,80000cc0 <bench_dinic_prepare+0x12c>
    80000c94:	fffb071b          	addiw	a4,s6,-1
    80000c98:	02071713          	slli	a4,a4,0x20
    80000c9c:	0184b783          	ld	a5,24(s1)
    80000ca0:	02075713          	srli	a4,a4,0x20
    80000ca4:	00170713          	addi	a4,a4,1
    80000ca8:	00271713          	slli	a4,a4,0x2
    80000cac:	00f70733          	add	a4,a4,a5
    80000cb0:	fff00693          	li	a3,-1
    80000cb4:	00d7a023          	sw	a3,0(a5)
    80000cb8:	00478793          	addi	a5,a5,4
    80000cbc:	fee79ce3          	bne	a5,a4,80000cb4 <bench_dinic_prepare+0x120>
    80000cc0:	00092d03          	lw	s10,0(s2)
    80000cc4:	0004a223          	sw	zero,4(s1)
    80000cc8:	25a05e63          	blez	s10,80000f24 <bench_dinic_prepare+0x390>
    80000ccc:	00000b13          	li	s6,0
    80000cd0:	00000493          	li	s1,0
    80000cd4:	00a00a13          	li	s4,10
    80000cd8:	002b1a93          	slli	s5,s6,0x2
    80000cdc:	00000c93          	li	s9,0
    80000ce0:	0ba05e63          	blez	s10,80000d9c <bench_dinic_prepare+0x208>
    80000ce4:	0009b403          	ld	s0,0(s3)
    80000ce8:	580010ef          	jal	ra,80002268 <bench_rand>
    80000cec:	034577bb          	remuw	a5,a0,s4
    80000cf0:	019d073b          	addw	a4,s10,s9
    80000cf4:	00070813          	mv	a6,a4
    80000cf8:	00092d03          	lw	s10,0(s2)
    80000cfc:	00271593          	slli	a1,a4,0x2
    80000d00:	001c8c9b          	addiw	s9,s9,1
    80000d04:	00078513          	mv	a0,a5
    80000d08:	08078863          	beqz	a5,80000d98 <bench_dinic_prepare+0x204>
    80000d0c:	00442703          	lw	a4,4(s0)
    80000d10:	01043783          	ld	a5,16(s0)
    80000d14:	01843603          	ld	a2,24(s0)
    80000d18:	00471693          	slli	a3,a4,0x4
    80000d1c:	00d786b3          	add	a3,a5,a3
    80000d20:	0096a023          	sw	s1,0(a3)
    80000d24:	00a6a423          	sw	a0,8(a3)
    80000d28:	0106a223          	sw	a6,4(a3)
    80000d2c:	0006a623          	sw	zero,12(a3)
    80000d30:	01560533          	add	a0,a2,s5
    80000d34:	02043683          	ld	a3,32(s0)
    80000d38:	00052883          	lw	a7,0(a0)
    80000d3c:	00271713          	slli	a4,a4,0x2
    80000d40:	00e68733          	add	a4,a3,a4
    80000d44:	01172023          	sw	a7,0(a4)
    80000d48:	00442883          	lw	a7,4(s0)
    80000d4c:	00b60733          	add	a4,a2,a1
    80000d50:	0018861b          	addiw	a2,a7,1
    80000d54:	00c42223          	sw	a2,4(s0)
    80000d58:	01152023          	sw	a7,0(a0)
    80000d5c:	00442603          	lw	a2,4(s0)
    80000d60:	00461593          	slli	a1,a2,0x4
    80000d64:	00b787b3          	add	a5,a5,a1
    80000d68:	0107a023          	sw	a6,0(a5)
    80000d6c:	0097a223          	sw	s1,4(a5)
    80000d70:	0007a423          	sw	zero,8(a5)
    80000d74:	0007a623          	sw	zero,12(a5)
    80000d78:	00072783          	lw	a5,0(a4)
    80000d7c:	00261613          	slli	a2,a2,0x2
    80000d80:	00c686b3          	add	a3,a3,a2
    80000d84:	00f6a023          	sw	a5,0(a3)
    80000d88:	00442783          	lw	a5,4(s0)
    80000d8c:	0017869b          	addiw	a3,a5,1
    80000d90:	00d42223          	sw	a3,4(s0)
    80000d94:	00f72023          	sw	a5,0(a4)
    80000d98:	f5acc6e3          	blt	s9,s10,80000ce4 <bench_dinic_prepare+0x150>
    80000d9c:	001b0b13          	addi	s6,s6,1
    80000da0:	000b049b          	sext.w	s1,s6
    80000da4:	f3a4cae3          	blt	s1,s10,80000cd8 <bench_dinic_prepare+0x144>
    80000da8:	17a05e63          	blez	s10,80000f24 <bench_dinic_prepare+0x390>
    80000dac:	002c1b13          	slli	s6,s8,0x2
    80000db0:	002b9a93          	slli	s5,s7,0x2
    80000db4:	00000c93          	li	s9,0
    80000db8:	00000d13          	li	s10,0
    80000dbc:	3e800a13          	li	s4,1000
    80000dc0:	0009b483          	ld	s1,0(s3)
    80000dc4:	4a4010ef          	jal	ra,80002268 <bench_rand>
    80000dc8:	034577bb          	remuw	a5,a0,s4
    80000dcc:	002c9813          	slli	a6,s9,0x2
    80000dd0:	0009b403          	ld	s0,0(s3)
    80000dd4:	00092d83          	lw	s11,0(s2)
    80000dd8:	001c8c93          	addi	s9,s9,1
    80000ddc:	00078513          	mv	a0,a5
    80000de0:	08078863          	beqz	a5,80000e70 <bench_dinic_prepare+0x2dc>
    80000de4:	0044a703          	lw	a4,4(s1)
    80000de8:	0104b783          	ld	a5,16(s1)
    80000dec:	0184b603          	ld	a2,24(s1)
    80000df0:	00471693          	slli	a3,a4,0x4
    80000df4:	00d786b3          	add	a3,a5,a3
    80000df8:	0186a023          	sw	s8,0(a3)
    80000dfc:	01a6a223          	sw	s10,4(a3)
    80000e00:	00a6a423          	sw	a0,8(a3)
    80000e04:	0006a623          	sw	zero,12(a3)
    80000e08:	016605b3          	add	a1,a2,s6
    80000e0c:	0204b683          	ld	a3,32(s1)
    80000e10:	0005a503          	lw	a0,0(a1)
    80000e14:	00271713          	slli	a4,a4,0x2
    80000e18:	00e68733          	add	a4,a3,a4
    80000e1c:	00a72023          	sw	a0,0(a4)
    80000e20:	0044a503          	lw	a0,4(s1)
    80000e24:	01060733          	add	a4,a2,a6
    80000e28:	0015061b          	addiw	a2,a0,1
    80000e2c:	00c4a223          	sw	a2,4(s1)
    80000e30:	00a5a023          	sw	a0,0(a1)
    80000e34:	0044a603          	lw	a2,4(s1)
    80000e38:	00461593          	slli	a1,a2,0x4
    80000e3c:	00b787b3          	add	a5,a5,a1
    80000e40:	01a7a023          	sw	s10,0(a5)
    80000e44:	0187a223          	sw	s8,4(a5)
    80000e48:	0007a423          	sw	zero,8(a5)
    80000e4c:	0007a623          	sw	zero,12(a5)
    80000e50:	00072783          	lw	a5,0(a4)
    80000e54:	00261613          	slli	a2,a2,0x2
    80000e58:	00c686b3          	add	a3,a3,a2
    80000e5c:	00f6a023          	sw	a5,0(a3)
    80000e60:	0044a783          	lw	a5,4(s1)
    80000e64:	0017869b          	addiw	a3,a5,1
    80000e68:	00d4a223          	sw	a3,4(s1)
    80000e6c:	00f72023          	sw	a5,0(a4)
    80000e70:	3f8010ef          	jal	ra,80002268 <bench_rand>
    80000e74:	0345773b          	remuw	a4,a0,s4
    80000e78:	01ad87bb          	addw	a5,s11,s10
    80000e7c:	00078813          	mv	a6,a5
    80000e80:	00092883          	lw	a7,0(s2)
    80000e84:	00279793          	slli	a5,a5,0x2
    80000e88:	000c8d1b          	sext.w	s10,s9
    80000e8c:	00070513          	mv	a0,a4
    80000e90:	08070863          	beqz	a4,80000f20 <bench_dinic_prepare+0x38c>
    80000e94:	00442683          	lw	a3,4(s0)
    80000e98:	01043703          	ld	a4,16(s0)
    80000e9c:	01843583          	ld	a1,24(s0)
    80000ea0:	00469613          	slli	a2,a3,0x4
    80000ea4:	00c70633          	add	a2,a4,a2
    80000ea8:	01062023          	sw	a6,0(a2)
    80000eac:	01762223          	sw	s7,4(a2)
    80000eb0:	00a62423          	sw	a0,8(a2)
    80000eb4:	00062623          	sw	zero,12(a2)
    80000eb8:	00f587b3          	add	a5,a1,a5
    80000ebc:	02043603          	ld	a2,32(s0)
    80000ec0:	0007a503          	lw	a0,0(a5)
    80000ec4:	00269693          	slli	a3,a3,0x2
    80000ec8:	00d606b3          	add	a3,a2,a3
    80000ecc:	00a6a023          	sw	a0,0(a3)
    80000ed0:	00442503          	lw	a0,4(s0)
    80000ed4:	015586b3          	add	a3,a1,s5
    80000ed8:	0015059b          	addiw	a1,a0,1
    80000edc:	00b42223          	sw	a1,4(s0)
    80000ee0:	00a7a023          	sw	a0,0(a5)
    80000ee4:	00442583          	lw	a1,4(s0)
    80000ee8:	00459793          	slli	a5,a1,0x4
    80000eec:	00f707b3          	add	a5,a4,a5
    80000ef0:	0177a023          	sw	s7,0(a5)
    80000ef4:	0107a223          	sw	a6,4(a5)
    80000ef8:	0007a423          	sw	zero,8(a5)
    80000efc:	0007a623          	sw	zero,12(a5)
    80000f00:	0006a783          	lw	a5,0(a3)
    80000f04:	00259593          	slli	a1,a1,0x2
    80000f08:	00b60633          	add	a2,a2,a1
    80000f0c:	00f62023          	sw	a5,0(a2)
    80000f10:	00442783          	lw	a5,4(s0)
    80000f14:	0017871b          	addiw	a4,a5,1
    80000f18:	00e42223          	sw	a4,4(s0)
    80000f1c:	00f6a023          	sw	a5,0(a3)
    80000f20:	eb1d40e3          	blt	s10,a7,80000dc0 <bench_dinic_prepare+0x22c>
    80000f24:	06813083          	ld	ra,104(sp)
    80000f28:	06013403          	ld	s0,96(sp)
    80000f2c:	05813483          	ld	s1,88(sp)
    80000f30:	05013903          	ld	s2,80(sp)
    80000f34:	04813983          	ld	s3,72(sp)
    80000f38:	04013a03          	ld	s4,64(sp)
    80000f3c:	03813a83          	ld	s5,56(sp)
    80000f40:	03013b03          	ld	s6,48(sp)
    80000f44:	02813b83          	ld	s7,40(sp)
    80000f48:	02013c03          	ld	s8,32(sp)
    80000f4c:	01813c83          	ld	s9,24(sp)
    80000f50:	01013d03          	ld	s10,16(sp)
    80000f54:	00813d83          	ld	s11,8(sp)
    80000f58:	07010113          	addi	sp,sp,112
    80000f5c:	00008067          	ret

0000000080000f60 <bench_dinic_run>:
    80000f60:	f3010113          	addi	sp,sp,-208
    80000f64:	0c813023          	sd	s0,192(sp)
    80000f68:	00005717          	auipc	a4,0x5
    80000f6c:	6a072703          	lw	a4,1696(a4) # 80006608 <_ZL1N>
    80000f70:	00005417          	auipc	s0,0x5
    80000f74:	69043403          	ld	s0,1680(s0) # 80006600 <_ZL1G>
    80000f78:	00171f1b          	slliw	t5,a4,0x1
    80000f7c:	04043683          	ld	a3,64(s0)
    80000f80:	03843583          	ld	a1,56(s0)
    80000f84:	02843783          	ld	a5,40(s0)
    80000f88:	01843503          	ld	a0,24(s0)
    80000f8c:	09513c23          	sd	s5,152(sp)
    80000f90:	0c113423          	sd	ra,200(sp)
    80000f94:	0a913c23          	sd	s1,184(sp)
    80000f98:	0b213823          	sd	s2,176(sp)
    80000f9c:	0b313423          	sd	s3,168(sp)
    80000fa0:	0b413023          	sd	s4,160(sp)
    80000fa4:	09613823          	sd	s6,144(sp)
    80000fa8:	09713423          	sd	s7,136(sp)
    80000fac:	09813023          	sd	s8,128(sp)
    80000fb0:	07913c23          	sd	s9,120(sp)
    80000fb4:	07a13823          	sd	s10,112(sp)
    80000fb8:	07b13423          	sd	s11,104(sp)
    80000fbc:	001f061b          	addiw	a2,t5,1
    80000fc0:	002f1713          	slli	a4,t5,0x2
    80000fc4:	01e42423          	sw	t5,8(s0)
    80000fc8:	00c42623          	sw	a2,12(s0)
    80000fcc:	00e13023          	sd	a4,0(sp)
    80000fd0:	000f0893          	mv	a7,t5
    80000fd4:	00000813          	li	a6,0
    80000fd8:	fff00a93          	li	s5,-1
    80000fdc:	00042703          	lw	a4,0(s0)
    80000fe0:	02e05463          	blez	a4,80001008 <bench_dinic_run+0xa8>
    80000fe4:	fff7071b          	addiw	a4,a4,-1
    80000fe8:	02071713          	slli	a4,a4,0x20
    80000fec:	02075713          	srli	a4,a4,0x20
    80000ff0:	00170713          	addi	a4,a4,1
    80000ff4:	00068613          	mv	a2,a3
    80000ff8:	00d70733          	add	a4,a4,a3
    80000ffc:	00060023          	sb	zero,0(a2)
    80001000:	00160613          	addi	a2,a2,1
    80001004:	fec71ce3          	bne	a4,a2,80000ffc <bench_dinic_run+0x9c>
    80001008:	0115a023          	sw	a7,0(a1)
    8000100c:	00842703          	lw	a4,8(s0)
    80001010:	00100613          	li	a2,1
    80001014:	00058e93          	mv	t4,a1
    80001018:	00271713          	slli	a4,a4,0x2
    8000101c:	00e78733          	add	a4,a5,a4
    80001020:	00072023          	sw	zero,0(a4)
    80001024:	00842703          	lw	a4,8(s0)
    80001028:	00100e13          	li	t3,1
    8000102c:	00000f93          	li	t6,0
    80001030:	00e68733          	add	a4,a3,a4
    80001034:	00c70023          	sb	a2,0(a4)
    80001038:	000ea603          	lw	a2,0(t4) # ffffffff80000000 <_pmem_end+0xfffffffef8000000>
    8000103c:	001f8f9b          	addiw	t6,t6,1
    80001040:	00261613          	slli	a2,a2,0x2
    80001044:	00c50733          	add	a4,a0,a2
    80001048:	00072703          	lw	a4,0(a4)
    8000104c:	07570a63          	beq	a4,s5,800010c0 <bench_dinic_run+0x160>
    80001050:	01043903          	ld	s2,16(s0)
    80001054:	02043483          	ld	s1,32(s0)
    80001058:	00c788b3          	add	a7,a5,a2
    8000105c:	00471313          	slli	t1,a4,0x4
    80001060:	00690333          	add	t1,s2,t1
    80001064:	00432603          	lw	a2,4(t1)
    80001068:	00271713          	slli	a4,a4,0x2
    8000106c:	00e48733          	add	a4,s1,a4
    80001070:	00c689b3          	add	s3,a3,a2
    80001074:	0009c283          	lbu	t0,0(s3)
    80001078:	04029063          	bnez	t0,800010b8 <bench_dinic_run+0x158>
    8000107c:	00832a03          	lw	s4,8(t1)
    80001080:	00c32383          	lw	t2,12(t1)
    80001084:	00261613          	slli	a2,a2,0x2
    80001088:	002e1293          	slli	t0,t3,0x2
    8000108c:	00c78633          	add	a2,a5,a2
    80001090:	005582b3          	add	t0,a1,t0
    80001094:	0343d263          	bge	t2,s4,800010b8 <bench_dinic_run+0x158>
    80001098:	0008a383          	lw	t2,0(a7)
    8000109c:	00100a13          	li	s4,1
    800010a0:	01498023          	sb	s4,0(s3)
    800010a4:	0013839b          	addiw	t2,t2,1
    800010a8:	00762023          	sw	t2,0(a2)
    800010ac:	00432603          	lw	a2,4(t1)
    800010b0:	001e0e1b          	addiw	t3,t3,1
    800010b4:	00c2a023          	sw	a2,0(t0)
    800010b8:	00072703          	lw	a4,0(a4)
    800010bc:	fb5710e3          	bne	a4,s5,8000105c <bench_dinic_run+0xfc>
    800010c0:	004e8e93          	addi	t4,t4,4
    800010c4:	f7cf9ae3          	bne	t6,t3,80001038 <bench_dinic_run+0xd8>
    800010c8:	00c42703          	lw	a4,12(s0)
    800010cc:	00e68633          	add	a2,a3,a4
    800010d0:	00064603          	lbu	a2,0(a2)
    800010d4:	38060063          	beqz	a2,80001454 <bench_dinic_run+0x4f4>
    800010d8:	00042603          	lw	a2,0(s0)
    800010dc:	02c05863          	blez	a2,8000110c <bench_dinic_run+0x1ac>
    800010e0:	03043883          	ld	a7,48(s0)
    800010e4:	00050613          	mv	a2,a0
    800010e8:	00000713          	li	a4,0
    800010ec:	00062303          	lw	t1,0(a2)
    800010f0:	0017071b          	addiw	a4,a4,1
    800010f4:	00460613          	addi	a2,a2,4
    800010f8:	0068a023          	sw	t1,0(a7)
    800010fc:	00042303          	lw	t1,0(s0)
    80001100:	00488893          	addi	a7,a7,4
    80001104:	fe6744e3          	blt	a4,t1,800010ec <bench_dinic_run+0x18c>
    80001108:	00c42703          	lw	a4,12(s0)
    8000110c:	38ef0663          	beq	t5,a4,80001498 <bench_dinic_run+0x538>
    80001110:	03043703          	ld	a4,48(s0)
    80001114:	00013603          	ld	a2,0(sp)
    80001118:	00c70733          	add	a4,a4,a2
    8000111c:	00072b83          	lw	s7,0(a4)
    80001120:	335b8663          	beq	s7,s5,8000144c <bench_dinic_run+0x4ec>
    80001124:	003f4db7          	lui	s11,0x3f4
    80001128:	00000e93          	li	t4,0
    8000112c:	f3fd8d93          	addi	s11,s11,-193 # 3f3f3f <_start-0x7fc0c0c1>
    80001130:	0180006f          	j	80001148 <bench_dinic_run+0x1e8>
    80001134:	02043703          	ld	a4,32(s0)
    80001138:	002b9b93          	slli	s7,s7,0x2
    8000113c:	01770bb3          	add	s7,a4,s7
    80001140:	000bab83          	lw	s7,0(s7)
    80001144:	2f5b8c63          	beq	s7,s5,8000143c <bench_dinic_run+0x4dc>
    80001148:	01043a03          	ld	s4,16(s0)
    8000114c:	004b9b13          	slli	s6,s7,0x4
    80001150:	00013703          	ld	a4,0(sp)
    80001154:	016a0b33          	add	s6,s4,s6
    80001158:	004b2603          	lw	a2,4(s6)
    8000115c:	00e78733          	add	a4,a5,a4
    80001160:	00072703          	lw	a4,0(a4)
    80001164:	00261f93          	slli	t6,a2,0x2
    80001168:	01f786b3          	add	a3,a5,t6
    8000116c:	0006a683          	lw	a3,0(a3)
    80001170:	0017071b          	addiw	a4,a4,1
    80001174:	fcd710e3          	bne	a4,a3,80001134 <bench_dinic_run+0x1d4>
    80001178:	008b2483          	lw	s1,8(s6)
    8000117c:	00cb2703          	lw	a4,12(s6)
    80001180:	40e4873b          	subw	a4,s1,a4
    80001184:	00070493          	mv	s1,a4
    80001188:	00edd463          	bge	s11,a4,80001190 <bench_dinic_run+0x230>
    8000118c:	000d849b          	sext.w	s1,s11
    80001190:	00c42703          	lw	a4,12(s0)
    80001194:	34c70663          	beq	a4,a2,800014e0 <bench_dinic_run+0x580>
    80001198:	f8048ee3          	beqz	s1,80001134 <bench_dinic_run+0x1d4>
    8000119c:	03043703          	ld	a4,48(s0)
    800011a0:	01f70733          	add	a4,a4,t6
    800011a4:	00072c03          	lw	s8,0(a4)
    800011a8:	f95c06e3          	beq	s8,s5,80001134 <bench_dinic_run+0x1d4>
    800011ac:	00048893          	mv	a7,s1
    800011b0:	00000493          	li	s1,0
    800011b4:	0240006f          	j	800011d8 <bench_dinic_run+0x278>
    800011b8:	02043703          	ld	a4,32(s0)
    800011bc:	002c1c13          	slli	s8,s8,0x2
    800011c0:	01870c33          	add	s8,a4,s8
    800011c4:	000c2c03          	lw	s8,0(s8)
    800011c8:	315c0c63          	beq	s8,s5,800014e0 <bench_dinic_run+0x580>
    800011cc:	01f78733          	add	a4,a5,t6
    800011d0:	01043a03          	ld	s4,16(s0)
    800011d4:	00072683          	lw	a3,0(a4)
    800011d8:	004c1713          	slli	a4,s8,0x4
    800011dc:	00ea0733          	add	a4,s4,a4
    800011e0:	00472583          	lw	a1,4(a4)
    800011e4:	0016869b          	addiw	a3,a3,1
    800011e8:	00259293          	slli	t0,a1,0x2
    800011ec:	00578633          	add	a2,a5,t0
    800011f0:	00062603          	lw	a2,0(a2)
    800011f4:	fcc692e3          	bne	a3,a2,800011b8 <bench_dinic_run+0x258>
    800011f8:	00872903          	lw	s2,8(a4)
    800011fc:	00c72683          	lw	a3,12(a4)
    80001200:	40d906bb          	subw	a3,s2,a3
    80001204:	00068913          	mv	s2,a3
    80001208:	00d8d463          	bge	a7,a3,80001210 <bench_dinic_run+0x2b0>
    8000120c:	0008891b          	sext.w	s2,a7
    80001210:	00c42683          	lw	a3,12(s0)
    80001214:	2cb68063          	beq	a3,a1,800014d4 <bench_dinic_run+0x574>
    80001218:	fa0900e3          	beqz	s2,800011b8 <bench_dinic_run+0x258>
    8000121c:	03043683          	ld	a3,48(s0)
    80001220:	005686b3          	add	a3,a3,t0
    80001224:	0006ac83          	lw	s9,0(a3)
    80001228:	f95c88e3          	beq	s9,s5,800011b8 <bench_dinic_run+0x258>
    8000122c:	00090313          	mv	t1,s2
    80001230:	00000913          	li	s2,0
    80001234:	0240006f          	j	80001258 <bench_dinic_run+0x2f8>
    80001238:	02043683          	ld	a3,32(s0)
    8000123c:	002c9c93          	slli	s9,s9,0x2
    80001240:	01968cb3          	add	s9,a3,s9
    80001244:	000cac83          	lw	s9,0(s9)
    80001248:	295c8663          	beq	s9,s5,800014d4 <bench_dinic_run+0x574>
    8000124c:	005786b3          	add	a3,a5,t0
    80001250:	01043a03          	ld	s4,16(s0)
    80001254:	0006a603          	lw	a2,0(a3)
    80001258:	004c9693          	slli	a3,s9,0x4
    8000125c:	00da06b3          	add	a3,s4,a3
    80001260:	0046a583          	lw	a1,4(a3)
    80001264:	0016051b          	addiw	a0,a2,1
    80001268:	00259393          	slli	t2,a1,0x2
    8000126c:	00778633          	add	a2,a5,t2
    80001270:	00062603          	lw	a2,0(a2)
    80001274:	fcc512e3          	bne	a0,a2,80001238 <bench_dinic_run+0x2d8>
    80001278:	0086a983          	lw	s3,8(a3)
    8000127c:	00c6a503          	lw	a0,12(a3)
    80001280:	40a9853b          	subw	a0,s3,a0
    80001284:	00050993          	mv	s3,a0
    80001288:	00a35463          	bge	t1,a0,80001290 <bench_dinic_run+0x330>
    8000128c:	0003099b          	sext.w	s3,t1
    80001290:	00c42503          	lw	a0,12(s0)
    80001294:	22b50a63          	beq	a0,a1,800014c8 <bench_dinic_run+0x568>
    80001298:	fa0980e3          	beqz	s3,80001238 <bench_dinic_run+0x2d8>
    8000129c:	03043583          	ld	a1,48(s0)
    800012a0:	007585b3          	add	a1,a1,t2
    800012a4:	0005ad03          	lw	s10,0(a1)
    800012a8:	f95d08e3          	beq	s10,s5,80001238 <bench_dinic_run+0x2d8>
    800012ac:	00098e13          	mv	t3,s3
    800012b0:	00000993          	li	s3,0
    800012b4:	0240006f          	j	800012d8 <bench_dinic_run+0x378>
    800012b8:	02043583          	ld	a1,32(s0)
    800012bc:	002d1d13          	slli	s10,s10,0x2
    800012c0:	00778633          	add	a2,a5,t2
    800012c4:	01a58d33          	add	s10,a1,s10
    800012c8:	000d2d03          	lw	s10,0(s10)
    800012cc:	1f5d0e63          	beq	s10,s5,800014c8 <bench_dinic_run+0x568>
    800012d0:	01043a03          	ld	s4,16(s0)
    800012d4:	00062603          	lw	a2,0(a2)
    800012d8:	004d1593          	slli	a1,s10,0x4
    800012dc:	00ba0a33          	add	s4,s4,a1
    800012e0:	004a2583          	lw	a1,4(s4)
    800012e4:	0016051b          	addiw	a0,a2,1
    800012e8:	00259613          	slli	a2,a1,0x2
    800012ec:	00c78633          	add	a2,a5,a2
    800012f0:	00062603          	lw	a2,0(a2)
    800012f4:	fcc512e3          	bne	a0,a2,800012b8 <bench_dinic_run+0x358>
    800012f8:	008a2603          	lw	a2,8(s4)
    800012fc:	00ca2783          	lw	a5,12(s4)
    80001300:	00040513          	mv	a0,s0
    80001304:	40f607bb          	subw	a5,a2,a5
    80001308:	00078613          	mv	a2,a5
    8000130c:	00fe5463          	bge	t3,a5,80001314 <bench_dinic_run+0x3b4>
    80001310:	000e061b          	sext.w	a2,t3
    80001314:	05c13c23          	sd	t3,88(sp)
    80001318:	04613823          	sd	t1,80(sp)
    8000131c:	04713423          	sd	t2,72(sp)
    80001320:	04d13023          	sd	a3,64(sp)
    80001324:	03113c23          	sd	a7,56(sp)
    80001328:	02513823          	sd	t0,48(sp)
    8000132c:	02e13423          	sd	a4,40(sp)
    80001330:	03d13023          	sd	t4,32(sp)
    80001334:	01f13c23          	sd	t6,24(sp)
    80001338:	01013823          	sd	a6,16(sp)
    8000133c:	01e13423          	sd	t5,8(sp)
    80001340:	08d020ef          	jal	ra,80003bcc <_etext>
    80001344:	001d4593          	xori	a1,s10,1
    80001348:	00813f03          	ld	t5,8(sp)
    8000134c:	01013803          	ld	a6,16(sp)
    80001350:	01813f83          	ld	t6,24(sp)
    80001354:	02013e83          	ld	t4,32(sp)
    80001358:	02813703          	ld	a4,40(sp)
    8000135c:	03013283          	ld	t0,48(sp)
    80001360:	03813883          	ld	a7,56(sp)
    80001364:	04013683          	ld	a3,64(sp)
    80001368:	04813383          	ld	t2,72(sp)
    8000136c:	05013303          	ld	t1,80(sp)
    80001370:	05813e03          	ld	t3,88(sp)
    80001374:	00459593          	slli	a1,a1,0x4
    80001378:	12a05a63          	blez	a0,800014ac <bench_dinic_run+0x54c>
    8000137c:	00ca2783          	lw	a5,12(s4)
    80001380:	01043603          	ld	a2,16(s0)
    80001384:	40ae0e3b          	subw	t3,t3,a0
    80001388:	00a787bb          	addw	a5,a5,a0
    8000138c:	00fa2623          	sw	a5,12(s4)
    80001390:	00b605b3          	add	a1,a2,a1
    80001394:	00c5aa03          	lw	s4,12(a1)
    80001398:	00a989bb          	addw	s3,s3,a0
    8000139c:	02843783          	ld	a5,40(s0)
    800013a0:	40aa053b          	subw	a0,s4,a0
    800013a4:	00a5a623          	sw	a0,12(a1)
    800013a8:	f00e18e3          	bnez	t3,800012b8 <bench_dinic_run+0x358>
    800013ac:	00c6a503          	lw	a0,12(a3)
    800013b0:	001cc593          	xori	a1,s9,1
    800013b4:	00459593          	slli	a1,a1,0x4
    800013b8:	0135053b          	addw	a0,a0,s3
    800013bc:	00a6a623          	sw	a0,12(a3)
    800013c0:	00b606b3          	add	a3,a2,a1
    800013c4:	00c6a583          	lw	a1,12(a3)
    800013c8:	4133033b          	subw	t1,t1,s3
    800013cc:	0139093b          	addw	s2,s2,s3
    800013d0:	413589bb          	subw	s3,a1,s3
    800013d4:	0136a623          	sw	s3,12(a3)
    800013d8:	e60310e3          	bnez	t1,80001238 <bench_dinic_run+0x2d8>
    800013dc:	00c72583          	lw	a1,12(a4)
    800013e0:	001c4693          	xori	a3,s8,1
    800013e4:	00469693          	slli	a3,a3,0x4
    800013e8:	012585bb          	addw	a1,a1,s2
    800013ec:	00b72623          	sw	a1,12(a4)
    800013f0:	00d60733          	add	a4,a2,a3
    800013f4:	00c72683          	lw	a3,12(a4)
    800013f8:	412888bb          	subw	a7,a7,s2
    800013fc:	012484bb          	addw	s1,s1,s2
    80001400:	4126893b          	subw	s2,a3,s2
    80001404:	01272623          	sw	s2,12(a4)
    80001408:	da0898e3          	bnez	a7,800011b8 <bench_dinic_run+0x258>
    8000140c:	00cb2683          	lw	a3,12(s6)
    80001410:	001bc713          	xori	a4,s7,1
    80001414:	00471713          	slli	a4,a4,0x4
    80001418:	009686bb          	addw	a3,a3,s1
    8000141c:	00db2623          	sw	a3,12(s6)
    80001420:	00e60633          	add	a2,a2,a4
    80001424:	00c62703          	lw	a4,12(a2)
    80001428:	409d8dbb          	subw	s11,s11,s1
    8000142c:	009e8ebb          	addw	t4,t4,s1
    80001430:	409704bb          	subw	s1,a4,s1
    80001434:	00962623          	sw	s1,12(a2)
    80001438:	ce0d9ee3          	bnez	s11,80001134 <bench_dinic_run+0x1d4>
    8000143c:	04043683          	ld	a3,64(s0)
    80001440:	03843583          	ld	a1,56(s0)
    80001444:	01843503          	ld	a0,24(s0)
    80001448:	01d8083b          	addw	a6,a6,t4
    8000144c:	00842883          	lw	a7,8(s0)
    80001450:	b8dff06f          	j	80000fdc <bench_dinic_run+0x7c>
    80001454:	0c813083          	ld	ra,200(sp)
    80001458:	0c013403          	ld	s0,192(sp)
    8000145c:	00005797          	auipc	a5,0x5
    80001460:	1907ae23          	sw	a6,412(a5) # 800065f8 <_ZL3ans>
    80001464:	0b813483          	ld	s1,184(sp)
    80001468:	0b013903          	ld	s2,176(sp)
    8000146c:	0a813983          	ld	s3,168(sp)
    80001470:	0a013a03          	ld	s4,160(sp)
    80001474:	09813a83          	ld	s5,152(sp)
    80001478:	09013b03          	ld	s6,144(sp)
    8000147c:	08813b83          	ld	s7,136(sp)
    80001480:	08013c03          	ld	s8,128(sp)
    80001484:	07813c83          	ld	s9,120(sp)
    80001488:	07013d03          	ld	s10,112(sp)
    8000148c:	06813d83          	ld	s11,104(sp)
    80001490:	0d010113          	addi	sp,sp,208
    80001494:	00008067          	ret
    80001498:	003f4737          	lui	a4,0x3f4
    8000149c:	f3f7071b          	addiw	a4,a4,-193
    800014a0:	00842883          	lw	a7,8(s0)
    800014a4:	0107083b          	addw	a6,a4,a6
    800014a8:	b35ff06f          	j	80000fdc <bench_dinic_run+0x7c>
    800014ac:	02043583          	ld	a1,32(s0)
    800014b0:	002d1d13          	slli	s10,s10,0x2
    800014b4:	02843783          	ld	a5,40(s0)
    800014b8:	01a58d33          	add	s10,a1,s10
    800014bc:	000d2d03          	lw	s10,0(s10)
    800014c0:	00778633          	add	a2,a5,t2
    800014c4:	e15d16e3          	bne	s10,s5,800012d0 <bench_dinic_run+0x370>
    800014c8:	d73058e3          	blez	s3,80001238 <bench_dinic_run+0x2d8>
    800014cc:	01043603          	ld	a2,16(s0)
    800014d0:	eddff06f          	j	800013ac <bench_dinic_run+0x44c>
    800014d4:	cf2052e3          	blez	s2,800011b8 <bench_dinic_run+0x258>
    800014d8:	01043603          	ld	a2,16(s0)
    800014dc:	f01ff06f          	j	800013dc <bench_dinic_run+0x47c>
    800014e0:	c4905ae3          	blez	s1,80001134 <bench_dinic_run+0x1d4>
    800014e4:	01043603          	ld	a2,16(s0)
    800014e8:	f25ff06f          	j	8000140c <bench_dinic_run+0x4ac>

00000000800014ec <bench_dinic_validate>:
    800014ec:	00005797          	auipc	a5,0x5
    800014f0:	1cc7b783          	ld	a5,460(a5) # 800066b8 <setting>
    800014f4:	0187a503          	lw	a0,24(a5)
    800014f8:	00005797          	auipc	a5,0x5
    800014fc:	1007a783          	lw	a5,256(a5) # 800065f8 <_ZL3ans>
    80001500:	40f50533          	sub	a0,a0,a5
    80001504:	00153513          	seqz	a0,a0
    80001508:	00008067          	ret

000000008000150c <dfs>:
    8000150c:	fd010113          	addi	sp,sp,-48
    80001510:	01413023          	sd	s4,0(sp)
    80001514:	02113423          	sd	ra,40(sp)
    80001518:	02813023          	sd	s0,32(sp)
    8000151c:	00913c23          	sd	s1,24(sp)
    80001520:	01213823          	sd	s2,16(sp)
    80001524:	01313423          	sd	s3,8(sp)
    80001528:	00005797          	auipc	a5,0x5
    8000152c:	0e87a783          	lw	a5,232(a5) # 80006610 <FULL>
    80001530:	00100a13          	li	s4,1
    80001534:	04a78c63          	beq	a5,a0,8000158c <dfs+0x80>
    80001538:	00c5e433          	or	s0,a1,a2
    8000153c:	00a46433          	or	s0,s0,a0
    80001540:	fff44413          	not	s0,s0
    80001544:	00f47433          	and	s0,s0,a5
    80001548:	00050493          	mv	s1,a0
    8000154c:	00058993          	mv	s3,a1
    80001550:	00060913          	mv	s2,a2
    80001554:	00000a13          	li	s4,0
    80001558:	02040a63          	beqz	s0,8000158c <dfs+0x80>
    8000155c:	408007bb          	negw	a5,s0
    80001560:	00f477b3          	and	a5,s0,a5
    80001564:	0007851b          	sext.w	a0,a5
    80001568:	013565b3          	or	a1,a0,s3
    8000156c:	00a96633          	or	a2,s2,a0
    80001570:	0015959b          	slliw	a1,a1,0x1
    80001574:	0016561b          	srliw	a2,a2,0x1
    80001578:	00956533          	or	a0,a0,s1
    8000157c:	40f4043b          	subw	s0,s0,a5
    80001580:	f8dff0ef          	jal	ra,8000150c <dfs>
    80001584:	01450a3b          	addw	s4,a0,s4
    80001588:	fc041ae3          	bnez	s0,8000155c <dfs+0x50>
    8000158c:	02813083          	ld	ra,40(sp)
    80001590:	02013403          	ld	s0,32(sp)
    80001594:	01813483          	ld	s1,24(sp)
    80001598:	01013903          	ld	s2,16(sp)
    8000159c:	00813983          	ld	s3,8(sp)
    800015a0:	000a0513          	mv	a0,s4
    800015a4:	00013a03          	ld	s4,0(sp)
    800015a8:	03010113          	addi	sp,sp,48
    800015ac:	00008067          	ret

00000000800015b0 <bench_queen_prepare>:
    800015b0:	00005797          	auipc	a5,0x5
    800015b4:	1087b783          	ld	a5,264(a5) # 800066b8 <setting>
    800015b8:	0007a703          	lw	a4,0(a5)
    800015bc:	00005797          	auipc	a5,0x5
    800015c0:	0407a823          	sw	zero,80(a5) # 8000660c <ans>
    800015c4:	00100793          	li	a5,1
    800015c8:	00e797bb          	sllw	a5,a5,a4
    800015cc:	fff7879b          	addiw	a5,a5,-1
    800015d0:	00005717          	auipc	a4,0x5
    800015d4:	04f72023          	sw	a5,64(a4) # 80006610 <FULL>
    800015d8:	00008067          	ret

00000000800015dc <bench_queen_run>:
    800015dc:	ff010113          	addi	sp,sp,-16
    800015e0:	00000613          	li	a2,0
    800015e4:	00000593          	li	a1,0
    800015e8:	00000513          	li	a0,0
    800015ec:	00113423          	sd	ra,8(sp)
    800015f0:	f1dff0ef          	jal	ra,8000150c <dfs>
    800015f4:	00813083          	ld	ra,8(sp)
    800015f8:	00005797          	auipc	a5,0x5
    800015fc:	00a7aa23          	sw	a0,20(a5) # 8000660c <ans>
    80001600:	01010113          	addi	sp,sp,16
    80001604:	00008067          	ret

0000000080001608 <bench_queen_validate>:
    80001608:	00005797          	auipc	a5,0x5
    8000160c:	0b07b783          	ld	a5,176(a5) # 800066b8 <setting>
    80001610:	0187a503          	lw	a0,24(a5)
    80001614:	00005797          	auipc	a5,0x5
    80001618:	ff87a783          	lw	a5,-8(a5) # 8000660c <ans>
    8000161c:	40f50533          	sub	a0,a0,a5
    80001620:	00153513          	seqz	a0,a0
    80001624:	00008067          	ret

0000000080001628 <bench_15pz_prepare>:
    80001628:	00008067          	ret

000000008000162c <bench_15pz_validate>:
    8000162c:	00005797          	auipc	a5,0x5
    80001630:	08c7b783          	ld	a5,140(a5) # 800066b8 <setting>
    80001634:	0187a503          	lw	a0,24(a5)
    80001638:	00005797          	auipc	a5,0x5
    8000163c:	fdc7a783          	lw	a5,-36(a5) # 80006614 <_ZL3ans>
    80001640:	40f50533          	sub	a0,a0,a5
    80001644:	00153513          	seqz	a0,a0
    80001648:	00008067          	ret

000000008000164c <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0>:
    8000164c:	00064783          	lbu	a5,0(a2)
    80001650:	fe010113          	addi	sp,sp,-32
    80001654:	00913423          	sd	s1,8(sp)
    80001658:	00113c23          	sd	ra,24(sp)
    8000165c:	00813823          	sd	s0,16(sp)
    80001660:	00060493          	mv	s1,a2
    80001664:	00078e63          	beqz	a5,80001680 <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0+0x34>
    80001668:	01462783          	lw	a5,20(a2)
    8000166c:	fff5051b          	addiw	a0,a0,-1
    80001670:	00a7f533          	and	a0,a5,a0
    80001674:	02051793          	slli	a5,a0,0x20
    80001678:	01d7d793          	srli	a5,a5,0x1d
    8000167c:	00f585b3          	add	a1,a1,a5
    80001680:	0005b403          	ld	s0,0(a1)
    80001684:	00041863          	bnez	s0,80001694 <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0+0x48>
    80001688:	01c0006f          	j	800016a4 <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0+0x58>
    8000168c:	01843403          	ld	s0,24(s0)
    80001690:	00040a63          	beqz	s0,800016a4 <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0+0x58>
    80001694:	00040513          	mv	a0,s0
    80001698:	00048593          	mv	a1,s1
    8000169c:	135020ef          	jal	ra,80003fd0 <_ZNK8N_puzzleILi4EEeqERKS0_>
    800016a0:	fe0506e3          	beqz	a0,8000168c <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0+0x40>
    800016a4:	01813083          	ld	ra,24(sp)
    800016a8:	00040513          	mv	a0,s0
    800016ac:	01013403          	ld	s0,16(sp)
    800016b0:	00813483          	ld	s1,8(sp)
    800016b4:	02010113          	addi	sp,sp,32
    800016b8:	00008067          	ret

00000000800016bc <bench_15pz_run>:
    800016bc:	ed010113          	addi	sp,sp,-304
    800016c0:	03810513          	addi	a0,sp,56
    800016c4:	12113423          	sd	ra,296(sp)
    800016c8:	12813023          	sd	s0,288(sp)
    800016cc:	10913c23          	sd	s1,280(sp)
    800016d0:	11213823          	sd	s2,272(sp)
    800016d4:	11313423          	sd	s3,264(sp)
    800016d8:	11413023          	sd	s4,256(sp)
    800016dc:	0f513c23          	sd	s5,248(sp)
    800016e0:	0f613823          	sd	s6,240(sp)
    800016e4:	0f713423          	sd	s7,232(sp)
    800016e8:	0f813023          	sd	s8,224(sp)
    800016ec:	0d913c23          	sd	s9,216(sp)
    800016f0:	0da13823          	sd	s10,208(sp)
    800016f4:	0db13423          	sd	s11,200(sp)
    800016f8:	5fc020ef          	jal	ra,80003cf4 <_ZN8N_puzzleILi4EEC1Ev>
    800016fc:	00005797          	auipc	a5,0x5
    80001700:	fbc7b783          	ld	a5,-68(a5) # 800066b8 <setting>
    80001704:	0007a783          	lw	a5,0(a5)
    80001708:	00100713          	li	a4,1
    8000170c:	02e78863          	beq	a5,a4,8000173c <bench_15pz_run+0x80>
    80001710:	00200713          	li	a4,2
    80001714:	1ce786e3          	beq	a5,a4,800020e0 <bench_15pz_run+0xa24>
    80001718:	02b00613          	li	a2,43
    8000171c:	14078ce3          	beqz	a5,80002074 <bench_15pz_run+0x9b8>
    80001720:	00004597          	auipc	a1,0x4
    80001724:	06858593          	addi	a1,a1,104 # 80005788 <r+0x160>
    80001728:	00004517          	auipc	a0,0x4
    8000172c:	04050513          	addi	a0,a0,64 # 80005768 <r+0x140>
    80001730:	53d030ef          	jal	ra,8000546c <printf>
    80001734:	00100513          	li	a0,1
    80001738:	050030ef          	jal	ra,80004788 <_halt>
    8000173c:	08010493          	addi	s1,sp,128
    80001740:	00005597          	auipc	a1,0x5
    80001744:	87058593          	addi	a1,a1,-1936 # 80005fb0 <_ZL8PUZZLE_M>
    80001748:	00048513          	mv	a0,s1
    8000174c:	748020ef          	jal	ra,80003e94 <_ZN8N_puzzleILi4EEC1EPi>
    80001750:	08012783          	lw	a5,128(sp)
    80001754:	08014803          	lbu	a6,128(sp)
    80001758:	03810713          	addi	a4,sp,56
    8000175c:	02f12c23          	sw	a5,56(sp)
    80001760:	09412783          	lw	a5,148(sp)
    80001764:	09010413          	addi	s0,sp,144
    80001768:	04f12623          	sw	a5,76(sp)
    8000176c:	00048793          	mv	a5,s1
    80001770:	0047c503          	lbu	a0,4(a5)
    80001774:	0057c583          	lbu	a1,5(a5)
    80001778:	0067c603          	lbu	a2,6(a5)
    8000177c:	0077c683          	lbu	a3,7(a5)
    80001780:	00a70223          	sb	a0,4(a4)
    80001784:	00b702a3          	sb	a1,5(a4)
    80001788:	00c70323          	sb	a2,6(a4)
    8000178c:	00d703a3          	sb	a3,7(a4)
    80001790:	00478793          	addi	a5,a5,4
    80001794:	00470713          	addi	a4,a4,4
    80001798:	fc879ce3          	bne	a5,s0,80001770 <bench_15pz_run+0xb4>
    8000179c:	00001d37          	lui	s10,0x1
    800017a0:	800d0793          	addi	a5,s10,-2048 # 800 <_start-0x7ffff800>
    800017a4:	00f13823          	sd	a5,16(sp)
    800017a8:	0c0802e3          	beqz	a6,8000206c <bench_15pz_run+0x9b0>
    800017ac:	00040613          	mv	a2,s0
    800017b0:	03810513          	addi	a0,sp,56
    800017b4:	00000593          	li	a1,0
    800017b8:	01000813          	li	a6,16
    800017bc:	01000893          	li	a7,16
    800017c0:	ff060793          	addi	a5,a2,-16
    800017c4:	00050713          	mv	a4,a0
    800017c8:	00470683          	lb	a3,4(a4)
    800017cc:	06069e63          	bnez	a3,80001848 <bench_15pz_run+0x18c>
    800017d0:	0107a023          	sw	a6,0(a5)
    800017d4:	00478793          	addi	a5,a5,4
    800017d8:	00170713          	addi	a4,a4,1
    800017dc:	fef616e3          	bne	a2,a5,800017c8 <bench_15pz_run+0x10c>
    800017e0:	0045859b          	addiw	a1,a1,4
    800017e4:	01060613          	addi	a2,a2,16
    800017e8:	00450513          	addi	a0,a0,4
    800017ec:	fd159ae3          	bne	a1,a7,800017c0 <bench_15pz_run+0x104>
    800017f0:	08012683          	lw	a3,128(sp)
    800017f4:	00100513          	li	a0,1
    800017f8:	00000613          	li	a2,0
    800017fc:	00100793          	li	a5,1
    80001800:	01000593          	li	a1,16
    80001804:	00279713          	slli	a4,a5,0x2
    80001808:	0c010813          	addi	a6,sp,192
    8000180c:	00e80733          	add	a4,a6,a4
    80001810:	fc072703          	lw	a4,-64(a4)
    80001814:	00d75463          	bge	a4,a3,8000181c <bench_15pz_run+0x160>
    80001818:	0016061b          	addiw	a2,a2,1
    8000181c:	0017879b          	addiw	a5,a5,1
    80001820:	00078713          	mv	a4,a5
    80001824:	feb790e3          	bne	a5,a1,80001804 <bench_15pz_run+0x148>
    80001828:	0015079b          	addiw	a5,a0,1
    8000182c:	02e78263          	beq	a5,a4,80001850 <bench_15pz_run+0x194>
    80001830:	00251513          	slli	a0,a0,0x2
    80001834:	0c010713          	addi	a4,sp,192
    80001838:	00a70533          	add	a0,a4,a0
    8000183c:	fc052683          	lw	a3,-64(a0)
    80001840:	00078513          	mv	a0,a5
    80001844:	fc1ff06f          	j	80001804 <bench_15pz_run+0x148>
    80001848:	00d7a023          	sw	a3,0(a5)
    8000184c:	f89ff06f          	j	800017d4 <bench_15pz_run+0x118>
    80001850:	03914683          	lbu	a3,57(sp)
    80001854:	03a14703          	lbu	a4,58(sp)
    80001858:	00600793          	li	a5,6
    8000185c:	40d787bb          	subw	a5,a5,a3
    80001860:	40e787bb          	subw	a5,a5,a4
    80001864:	00c787bb          	addw	a5,a5,a2
    80001868:	0017f793          	andi	a5,a5,1
    8000186c:	000790e3          	bnez	a5,8000206c <bench_15pz_run+0x9b0>
    80001870:	02000513          	li	a0,32
    80001874:	141000ef          	jal	ra,800021b4 <bench_alloc>
    80001878:	01013783          	ld	a5,16(sp)
    8000187c:	00050d93          	mv	s11,a0
    80001880:	00f52023          	sw	a5,0(a0)
    80001884:	00379513          	slli	a0,a5,0x3
    80001888:	12d000ef          	jal	ra,800021b4 <bench_alloc>
    8000188c:	000da783          	lw	a5,0(s11)
    80001890:	00adb823          	sd	a0,16(s11)
    80001894:	0017879b          	addiw	a5,a5,1
    80001898:	00379513          	slli	a0,a5,0x3
    8000189c:	119000ef          	jal	ra,800021b4 <bench_alloc>
    800018a0:	000da703          	lw	a4,0(s11)
    800018a4:	00adb423          	sd	a0,8(s11)
    800018a8:	000dbc23          	sd	zero,24(s11)
    800018ac:	00050793          	mv	a5,a0
    800018b0:	02e05263          	blez	a4,800018d4 <bench_15pz_run+0x218>
    800018b4:	fff7071b          	addiw	a4,a4,-1
    800018b8:	02071713          	slli	a4,a4,0x20
    800018bc:	01d75713          	srli	a4,a4,0x1d
    800018c0:	00850693          	addi	a3,a0,8
    800018c4:	00d70733          	add	a4,a4,a3
    800018c8:	0007b023          	sd	zero,0(a5)
    800018cc:	00878793          	addi	a5,a5,8
    800018d0:	fee79ce3          	bne	a5,a4,800018c8 <bench_15pz_run+0x20c>
    800018d4:	00000613          	li	a2,0
    800018d8:	03810593          	addi	a1,sp,56
    800018dc:	000d8513          	mv	a0,s11
    800018e0:	7bc020ef          	jal	ra,8000409c <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i>
    800018e4:	018da603          	lw	a2,24(s11)
    800018e8:	fff00793          	li	a5,-1
    800018ec:	00005717          	auipc	a4,0x5
    800018f0:	d2870713          	addi	a4,a4,-728 # 80006614 <_ZL3ans>
    800018f4:	00f72023          	sw	a5,0(a4)
    800018f8:	00000913          	li	s2,0
    800018fc:	44060063          	beqz	a2,80001d3c <bench_15pz_run+0x680>
    80001900:	01048793          	addi	a5,s1,16
    80001904:	00100b13          	li	s6,1
    80001908:	00f00d13          	li	s10,15
    8000190c:	01448c93          	addi	s9,s1,20
    80001910:	00f13423          	sd	a5,8(sp)
    80001914:	06010993          	addi	s3,sp,96
    80001918:	010dbf03          	ld	t5,16(s11)
    8000191c:	00048713          	mv	a4,s1
    80001920:	00048693          	mv	a3,s1
    80001924:	008f3783          	ld	a5,8(t5)
    80001928:	00378583          	lb	a1,3(a5)
    8000192c:	0007cb83          	lbu	s7,0(a5)
    80001930:	0017ca03          	lbu	s4,1(a5)
    80001934:	0027ca83          	lbu	s5,2(a5)
    80001938:	0007ae83          	lw	t4,0(a5)
    8000193c:	0147ac03          	lw	s8,20(a5)
    80001940:	00b13c23          	sd	a1,24(sp)
    80001944:	00478793          	addi	a5,a5,4
    80001948:	0007cf83          	lbu	t6,0(a5)
    8000194c:	0017c303          	lbu	t1,1(a5)
    80001950:	0027c503          	lbu	a0,2(a5)
    80001954:	0037c583          	lbu	a1,3(a5)
    80001958:	01f68223          	sb	t6,4(a3)
    8000195c:	006682a3          	sb	t1,5(a3)
    80001960:	00a68323          	sb	a0,6(a3)
    80001964:	00b683a3          	sb	a1,7(a3)
    80001968:	00468693          	addi	a3,a3,4
    8000196c:	00478793          	addi	a5,a5,4
    80001970:	fcd41ce3          	bne	s0,a3,80001948 <bench_15pz_run+0x28c>
    80001974:	57660663          	beq	a2,s6,80001ee0 <bench_15pz_run+0x824>
    80001978:	00cb5ee3          	bge	s6,a2,80002194 <bench_15pz_run+0xad8>
    8000197c:	00361613          	slli	a2,a2,0x3
    80001980:	00cf0633          	add	a2,t5,a2
    80001984:	00063783          	ld	a5,0(a2)
    80001988:	000d8513          	mv	a0,s11
    8000198c:	02e13423          	sd	a4,40(sp)
    80001990:	00ff3423          	sd	a5,8(t5)
    80001994:	0367a023          	sw	s6,32(a5)
    80001998:	018da783          	lw	a5,24(s11)
    8000199c:	03d13023          	sd	t4,32(sp)
    800019a0:	fff7879b          	addiw	a5,a5,-1
    800019a4:	00fdac23          	sw	a5,24(s11)
    800019a8:	139020ef          	jal	ra,800042e0 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv>
    800019ac:	02813703          	ld	a4,40(sp)
    800019b0:	02013e83          	ld	t4,32(sp)
    800019b4:	07812223          	sw	s8,100(sp)
    800019b8:	05010c13          	addi	s8,sp,80
    800019bc:	05d12823          	sw	t4,80(sp)
    800019c0:	000c0793          	mv	a5,s8
    800019c4:	00474303          	lbu	t1,4(a4)
    800019c8:	00574503          	lbu	a0,5(a4)
    800019cc:	00674583          	lbu	a1,6(a4)
    800019d0:	00774603          	lbu	a2,7(a4)
    800019d4:	00678223          	sb	t1,4(a5)
    800019d8:	00a782a3          	sb	a0,5(a5)
    800019dc:	00b78323          	sb	a1,6(a5)
    800019e0:	00c783a3          	sb	a2,7(a5)
    800019e4:	00470713          	addi	a4,a4,4
    800019e8:	00478793          	addi	a5,a5,4
    800019ec:	fce41ce3          	bne	s0,a4,800019c4 <bench_15pz_run+0x308>
    800019f0:	0019091b          	addiw	s2,s2,1
    800019f4:	00048713          	mv	a4,s1
    800019f8:	00000793          	li	a5,0
    800019fc:	0017879b          	addiw	a5,a5,1
    80001a00:	00f72023          	sw	a5,0(a4)
    80001a04:	00470713          	addi	a4,a4,4
    80001a08:	ffa79ae3          	bne	a5,s10,800019fc <bench_15pz_run+0x340>
    80001a0c:	00048593          	mv	a1,s1
    80001a10:	06810513          	addi	a0,sp,104
    80001a14:	0a012e23          	sw	zero,188(sp)
    80001a18:	47c020ef          	jal	ra,80003e94 <_ZN8N_puzzleILi4EEC1EPi>
    80001a1c:	06810593          	addi	a1,sp,104
    80001a20:	05010513          	addi	a0,sp,80
    80001a24:	5ac020ef          	jal	ra,80003fd0 <_ZNK8N_puzzleILi4EEeqERKS0_>
    80001a28:	72051a63          	bnez	a0,8000215c <bench_15pz_run+0xaa0>
    80001a2c:	300b8063          	beqz	s7,80001d2c <bench_15pz_run+0x670>
    80001a30:	00300793          	li	a5,3
    80001a34:	4afa8a63          	beq	s5,a5,80001ee8 <bench_15pz_run+0x82c>
    80001a38:	00048513          	mv	a0,s1
    80001a3c:	00048713          	mv	a4,s1
    80001a40:	05010793          	addi	a5,sp,80
    80001a44:	0047ce03          	lbu	t3,4(a5)
    80001a48:	0057c303          	lbu	t1,5(a5)
    80001a4c:	0067c583          	lbu	a1,6(a5)
    80001a50:	0077c603          	lbu	a2,7(a5)
    80001a54:	01c70223          	sb	t3,4(a4)
    80001a58:	006702a3          	sb	t1,5(a4)
    80001a5c:	00b70323          	sb	a1,6(a4)
    80001a60:	00c703a3          	sb	a2,7(a4)
    80001a64:	00478793          	addi	a5,a5,4
    80001a68:	00470713          	addi	a4,a4,4
    80001a6c:	fcf99ce3          	bne	s3,a5,80001a44 <bench_15pz_run+0x388>
    80001a70:	0c010793          	addi	a5,sp,192
    80001a74:	002a1593          	slli	a1,s4,0x2
    80001a78:	00b785b3          	add	a1,a5,a1
    80001a7c:	001a8f13          	addi	t5,s5,1
    80001a80:	01e587b3          	add	a5,a1,t5
    80001a84:	f9478303          	lb	t1,-108(a5)
    80001a88:	001a879b          	addiw	a5,s5,1
    80001a8c:	01558eb3          	add	t4,a1,s5
    80001a90:	fff3071b          	addiw	a4,t1,-1
    80001a94:	41f7561b          	sraiw	a2,a4,0x1f
    80001a98:	01e6561b          	srliw	a2,a2,0x1e
    80001a9c:	00c7073b          	addw	a4,a4,a2
    80001aa0:	00377713          	andi	a4,a4,3
    80001aa4:	40c7073b          	subw	a4,a4,a2
    80001aa8:	4157063b          	subw	a2,a4,s5
    80001aac:	40f707bb          	subw	a5,a4,a5
    80001ab0:	41f65f9b          	sraiw	t6,a2,0x1f
    80001ab4:	41f7d71b          	sraiw	a4,a5,0x1f
    80001ab8:	00cfce33          	xor	t3,t6,a2
    80001abc:	00f747b3          	xor	a5,a4,a5
    80001ac0:	40e787bb          	subw	a5,a5,a4
    80001ac4:	41fe0e3b          	subw	t3,t3,t6
    80001ac8:	40fe0e3b          	subw	t3,t3,a5
    80001acc:	01813783          	ld	a5,24(sp)
    80001ad0:	0fff7f13          	andi	t5,t5,255
    80001ad4:	fc6e8223          	sb	t1,-60(t4)
    80001ad8:	00fe0e3b          	addw	t3,t3,a5
    80001adc:	001a8e9b          	addiw	t4,s5,1
    80001ae0:	01e585b3          	add	a1,a1,t5
    80001ae4:	000a879b          	sext.w	a5,s5
    80001ae8:	018e1e1b          	slliw	t3,t3,0x18
    80001aec:	000a0b9b          	sext.w	s7,s4
    80001af0:	02f13023          	sd	a5,32(sp)
    80001af4:	418e5e1b          	sraiw	t3,t3,0x18
    80001af8:	0ffefe93          	andi	t4,t4,255
    80001afc:	fc058223          	sb	zero,-60(a1)
    80001b00:	00448613          	addi	a2,s1,4
    80001b04:	00000713          	li	a4,0
    80001b08:	7b500313          	li	t1,1973
    80001b0c:	ffc60793          	addi	a5,a2,-4
    80001b10:	02e3073b          	mulw	a4,t1,a4
    80001b14:	00478583          	lb	a1,4(a5)
    80001b18:	00178793          	addi	a5,a5,1
    80001b1c:	00b7073b          	addw	a4,a4,a1
    80001b20:	fef618e3          	bne	a2,a5,80001b10 <bench_15pz_run+0x454>
    80001b24:	00460613          	addi	a2,a2,4
    80001b28:	fecc92e3          	bne	s9,a2,80001b0c <bench_15pz_run+0x450>
    80001b2c:	00100793          	li	a5,1
    80001b30:	06f10423          	sb	a5,104(sp)
    80001b34:	074104a3          	sb	s4,105(sp)
    80001b38:	07d10523          	sb	t4,106(sp)
    80001b3c:	07c105a3          	sb	t3,107(sp)
    80001b40:	06e12e23          	sw	a4,124(sp)
    80001b44:	06810793          	addi	a5,sp,104
    80001b48:	00754703          	lbu	a4,7(a0)
    80001b4c:	00454303          	lbu	t1,4(a0)
    80001b50:	00554583          	lbu	a1,5(a0)
    80001b54:	00654603          	lbu	a2,6(a0)
    80001b58:	00e783a3          	sb	a4,7(a5)
    80001b5c:	00813703          	ld	a4,8(sp)
    80001b60:	00678223          	sb	t1,4(a5)
    80001b64:	00b782a3          	sb	a1,5(a5)
    80001b68:	00c78323          	sb	a2,6(a5)
    80001b6c:	00450513          	addi	a0,a0,4
    80001b70:	00478793          	addi	a5,a5,4
    80001b74:	fce51ae3          	bne	a0,a4,80001b48 <bench_15pz_run+0x48c>
    80001b78:	008db583          	ld	a1,8(s11)
    80001b7c:	000da503          	lw	a0,0(s11)
    80001b80:	05010613          	addi	a2,sp,80
    80001b84:	ac9ff0ef          	jal	ra,8000164c <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0>
    80001b88:	4c050a63          	beqz	a0,8000205c <bench_15pz_run+0x9a0>
    80001b8c:	02452603          	lw	a2,36(a0)
    80001b90:	0016061b          	addiw	a2,a2,1
    80001b94:	06810593          	addi	a1,sp,104
    80001b98:	000d8513          	mv	a0,s11
    80001b9c:	500020ef          	jal	ra,8000409c <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i>
    80001ba0:	340a9863          	bnez	s5,80001ef0 <bench_15pz_run+0x834>
    80001ba4:	00300793          	li	a5,3
    80001ba8:	1efa0e63          	beq	s4,a5,80001da4 <bench_15pz_run+0x6e8>
    80001bac:	00048513          	mv	a0,s1
    80001bb0:	00048713          	mv	a4,s1
    80001bb4:	05010793          	addi	a5,sp,80
    80001bb8:	0047ce03          	lbu	t3,4(a5)
    80001bbc:	0057c303          	lbu	t1,5(a5)
    80001bc0:	0067c583          	lbu	a1,6(a5)
    80001bc4:	0077c603          	lbu	a2,7(a5)
    80001bc8:	01c70223          	sb	t3,4(a4)
    80001bcc:	006702a3          	sb	t1,5(a4)
    80001bd0:	00b70323          	sb	a1,6(a4)
    80001bd4:	00c703a3          	sb	a2,7(a4)
    80001bd8:	00478793          	addi	a5,a5,4
    80001bdc:	00470713          	addi	a4,a4,4
    80001be0:	fd379ce3          	bne	a5,s3,80001bb8 <bench_15pz_run+0x4fc>
    80001be4:	02013683          	ld	a3,32(sp)
    80001be8:	001b8e13          	addi	t3,s7,1
    80001bec:	002e1793          	slli	a5,t3,0x2
    80001bf0:	0c010713          	addi	a4,sp,192
    80001bf4:	00f707b3          	add	a5,a4,a5
    80001bf8:	00d787b3          	add	a5,a5,a3
    80001bfc:	f9478583          	lb	a1,-108(a5)
    80001c00:	001b879b          	addiw	a5,s7,1
    80001c04:	002b9313          	slli	t1,s7,0x2
    80001c08:	fff5861b          	addiw	a2,a1,-1
    80001c0c:	41f6571b          	sraiw	a4,a2,0x1f
    80001c10:	01e7571b          	srliw	a4,a4,0x1e
    80001c14:	00c7073b          	addw	a4,a4,a2
    80001c18:	4027571b          	sraiw	a4,a4,0x2
    80001c1c:	4177063b          	subw	a2,a4,s7
    80001c20:	40f707bb          	subw	a5,a4,a5
    80001c24:	41f65f9b          	sraiw	t6,a2,0x1f
    80001c28:	41f7df1b          	sraiw	t5,a5,0x1f
    80001c2c:	00cfceb3          	xor	t4,t6,a2
    80001c30:	00ff47b3          	xor	a5,t5,a5
    80001c34:	41e787bb          	subw	a5,a5,t5
    80001c38:	0ffe7713          	andi	a4,t3,255
    80001c3c:	41fe8ebb          	subw	t4,t4,t6
    80001c40:	00271713          	slli	a4,a4,0x2
    80001c44:	40fe8ebb          	subw	t4,t4,a5
    80001c48:	0c010793          	addi	a5,sp,192
    80001c4c:	00e787b3          	add	a5,a5,a4
    80001c50:	01813703          	ld	a4,24(sp)
    80001c54:	0c010613          	addi	a2,sp,192
    80001c58:	00660633          	add	a2,a2,t1
    80001c5c:	00ee8ebb          	addw	t4,t4,a4
    80001c60:	00d60633          	add	a2,a2,a3
    80001c64:	fcb60223          	sb	a1,-60(a2)
    80001c68:	001a0f1b          	addiw	t5,s4,1
    80001c6c:	00d787b3          	add	a5,a5,a3
    80001c70:	00448e13          	addi	t3,s1,4
    80001c74:	018e9e9b          	slliw	t4,t4,0x18
    80001c78:	418ede9b          	sraiw	t4,t4,0x18
    80001c7c:	0fff7f13          	andi	t5,t5,255
    80001c80:	fc078223          	sb	zero,-60(a5)
    80001c84:	000e0593          	mv	a1,t3
    80001c88:	00000713          	li	a4,0
    80001c8c:	7b500313          	li	t1,1973
    80001c90:	ffc58793          	addi	a5,a1,-4
    80001c94:	02e3073b          	mulw	a4,t1,a4
    80001c98:	00478603          	lb	a2,4(a5)
    80001c9c:	00178793          	addi	a5,a5,1
    80001ca0:	00c7073b          	addw	a4,a4,a2
    80001ca4:	feb798e3          	bne	a5,a1,80001c94 <bench_15pz_run+0x5d8>
    80001ca8:	00478593          	addi	a1,a5,4
    80001cac:	ff9592e3          	bne	a1,s9,80001c90 <bench_15pz_run+0x5d4>
    80001cb0:	00100793          	li	a5,1
    80001cb4:	06f10423          	sb	a5,104(sp)
    80001cb8:	07e104a3          	sb	t5,105(sp)
    80001cbc:	07510523          	sb	s5,106(sp)
    80001cc0:	07d105a3          	sb	t4,107(sp)
    80001cc4:	06e12e23          	sw	a4,124(sp)
    80001cc8:	06810793          	addi	a5,sp,104
    80001ccc:	00754703          	lbu	a4,7(a0)
    80001cd0:	00454303          	lbu	t1,4(a0)
    80001cd4:	00554583          	lbu	a1,5(a0)
    80001cd8:	00654603          	lbu	a2,6(a0)
    80001cdc:	00e783a3          	sb	a4,7(a5)
    80001ce0:	00813703          	ld	a4,8(sp)
    80001ce4:	00678223          	sb	t1,4(a5)
    80001ce8:	00b782a3          	sb	a1,5(a5)
    80001cec:	00c78323          	sb	a2,6(a5)
    80001cf0:	000e0513          	mv	a0,t3
    80001cf4:	00478793          	addi	a5,a5,4
    80001cf8:	09c70063          	beq	a4,t3,80001d78 <bench_15pz_run+0x6bc>
    80001cfc:	004e0e13          	addi	t3,t3,4
    80001d00:	fcdff06f          	j	80001ccc <bench_15pz_run+0x610>
    80001d04:	008db583          	ld	a1,8(s11)
    80001d08:	000da503          	lw	a0,0(s11)
    80001d0c:	05010613          	addi	a2,sp,80
    80001d10:	93dff0ef          	jal	ra,8000164c <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0>
    80001d14:	44050063          	beqz	a0,80002154 <bench_15pz_run+0xa98>
    80001d18:	02452603          	lw	a2,36(a0)
    80001d1c:	0016061b          	addiw	a2,a2,1
    80001d20:	06810593          	addi	a1,sp,104
    80001d24:	000d8513          	mv	a0,s11
    80001d28:	374020ef          	jal	ra,8000409c <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i>
    80001d2c:	018da603          	lw	a2,24(s11)
    80001d30:	00060663          	beqz	a2,80001d3c <bench_15pz_run+0x680>
    80001d34:	01013783          	ld	a5,16(sp)
    80001d38:	bf2790e3          	bne	a5,s2,80001918 <bench_15pz_run+0x25c>
    80001d3c:	12813083          	ld	ra,296(sp)
    80001d40:	12013403          	ld	s0,288(sp)
    80001d44:	11813483          	ld	s1,280(sp)
    80001d48:	11013903          	ld	s2,272(sp)
    80001d4c:	10813983          	ld	s3,264(sp)
    80001d50:	10013a03          	ld	s4,256(sp)
    80001d54:	0f813a83          	ld	s5,248(sp)
    80001d58:	0f013b03          	ld	s6,240(sp)
    80001d5c:	0e813b83          	ld	s7,232(sp)
    80001d60:	0e013c03          	ld	s8,224(sp)
    80001d64:	0d813c83          	ld	s9,216(sp)
    80001d68:	0d013d03          	ld	s10,208(sp)
    80001d6c:	0c813d83          	ld	s11,200(sp)
    80001d70:	13010113          	addi	sp,sp,304
    80001d74:	00008067          	ret
    80001d78:	008db583          	ld	a1,8(s11)
    80001d7c:	000da503          	lw	a0,0(s11)
    80001d80:	05010613          	addi	a2,sp,80
    80001d84:	8c9ff0ef          	jal	ra,8000164c <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0>
    80001d88:	2c050e63          	beqz	a0,80002064 <bench_15pz_run+0x9a8>
    80001d8c:	02452603          	lw	a2,36(a0)
    80001d90:	0016061b          	addiw	a2,a2,1
    80001d94:	06810593          	addi	a1,sp,104
    80001d98:	000d8513          	mv	a0,s11
    80001d9c:	300020ef          	jal	ra,8000409c <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i>
    80001da0:	f80a06e3          	beqz	s4,80001d2c <bench_15pz_run+0x670>
    80001da4:	00048313          	mv	t1,s1
    80001da8:	00048793          	mv	a5,s1
    80001dac:	004c4503          	lbu	a0,4(s8)
    80001db0:	005c4583          	lbu	a1,5(s8)
    80001db4:	006c4603          	lbu	a2,6(s8)
    80001db8:	007c4703          	lbu	a4,7(s8)
    80001dbc:	00a78223          	sb	a0,4(a5)
    80001dc0:	00b782a3          	sb	a1,5(a5)
    80001dc4:	00c78323          	sb	a2,6(a5)
    80001dc8:	00e783a3          	sb	a4,7(a5)
    80001dcc:	004c0c13          	addi	s8,s8,4
    80001dd0:	00478793          	addi	a5,a5,4
    80001dd4:	fd899ce3          	bne	s3,s8,80001dac <bench_15pz_run+0x6f0>
    80001dd8:	fffb871b          	addiw	a4,s7,-1
    80001ddc:	02013803          	ld	a6,32(sp)
    80001de0:	00070593          	mv	a1,a4
    80001de4:	0c010793          	addi	a5,sp,192
    80001de8:	00271713          	slli	a4,a4,0x2
    80001dec:	00e78733          	add	a4,a5,a4
    80001df0:	01070733          	add	a4,a4,a6
    80001df4:	f9470683          	lb	a3,-108(a4)
    80001df8:	002b9613          	slli	a2,s7,0x2
    80001dfc:	00c78633          	add	a2,a5,a2
    80001e00:	fff6851b          	addiw	a0,a3,-1
    80001e04:	41f5579b          	sraiw	a5,a0,0x1f
    80001e08:	01e7d79b          	srliw	a5,a5,0x1e
    80001e0c:	00a787bb          	addw	a5,a5,a0
    80001e10:	4027d79b          	sraiw	a5,a5,0x2
    80001e14:	41778bbb          	subw	s7,a5,s7
    80001e18:	40b787bb          	subw	a5,a5,a1
    80001e1c:	41fbde1b          	sraiw	t3,s7,0x1f
    80001e20:	41f7d59b          	sraiw	a1,a5,0x1f
    80001e24:	017e4533          	xor	a0,t3,s7
    80001e28:	00f5c7b3          	xor	a5,a1,a5
    80001e2c:	41c5053b          	subw	a0,a0,t3
    80001e30:	40b787bb          	subw	a5,a5,a1
    80001e34:	40f5053b          	subw	a0,a0,a5
    80001e38:	01813783          	ld	a5,24(sp)
    80001e3c:	01060633          	add	a2,a2,a6
    80001e40:	fcd60223          	sb	a3,-60(a2)
    80001e44:	00f5053b          	addw	a0,a0,a5
    80001e48:	fffa069b          	addiw	a3,s4,-1
    80001e4c:	00448e93          	addi	t4,s1,4
    80001e50:	0185151b          	slliw	a0,a0,0x18
    80001e54:	fc070223          	sb	zero,-60(a4)
    80001e58:	4185551b          	sraiw	a0,a0,0x18
    80001e5c:	0ff6f693          	andi	a3,a3,255
    80001e60:	000e8613          	mv	a2,t4
    80001e64:	00000713          	li	a4,0
    80001e68:	7b500e13          	li	t3,1973
    80001e6c:	ffc60793          	addi	a5,a2,-4
    80001e70:	02ee073b          	mulw	a4,t3,a4
    80001e74:	00478583          	lb	a1,4(a5)
    80001e78:	00178793          	addi	a5,a5,1
    80001e7c:	00b7073b          	addw	a4,a4,a1
    80001e80:	fef618e3          	bne	a2,a5,80001e70 <bench_15pz_run+0x7b4>
    80001e84:	00460613          	addi	a2,a2,4
    80001e88:	fecc92e3          	bne	s9,a2,80001e6c <bench_15pz_run+0x7b0>
    80001e8c:	00100793          	li	a5,1
    80001e90:	06f10423          	sb	a5,104(sp)
    80001e94:	06d104a3          	sb	a3,105(sp)
    80001e98:	07510523          	sb	s5,106(sp)
    80001e9c:	06a105a3          	sb	a0,107(sp)
    80001ea0:	06e12e23          	sw	a4,124(sp)
    80001ea4:	06810793          	addi	a5,sp,104
    80001ea8:	00734703          	lbu	a4,7(t1)
    80001eac:	00434583          	lbu	a1,4(t1)
    80001eb0:	00534603          	lbu	a2,5(t1)
    80001eb4:	00634683          	lbu	a3,6(t1)
    80001eb8:	00e783a3          	sb	a4,7(a5)
    80001ebc:	00813703          	ld	a4,8(sp)
    80001ec0:	00b78223          	sb	a1,4(a5)
    80001ec4:	00c782a3          	sb	a2,5(a5)
    80001ec8:	00d78323          	sb	a3,6(a5)
    80001ecc:	000e8313          	mv	t1,t4
    80001ed0:	00478793          	addi	a5,a5,4
    80001ed4:	e2ee88e3          	beq	t4,a4,80001d04 <bench_15pz_run+0x648>
    80001ed8:	004e8e93          	addi	t4,t4,4
    80001edc:	fcdff06f          	j	80001ea8 <bench_15pz_run+0x7ec>
    80001ee0:	000dac23          	sw	zero,24(s11)
    80001ee4:	ad1ff06f          	j	800019b4 <bench_15pz_run+0x2f8>
    80001ee8:	000a0b9b          	sext.w	s7,s4
    80001eec:	02f13023          	sd	a5,32(sp)
    80001ef0:	00048513          	mv	a0,s1
    80001ef4:	00048713          	mv	a4,s1
    80001ef8:	05010793          	addi	a5,sp,80
    80001efc:	0047ce03          	lbu	t3,4(a5)
    80001f00:	0057c303          	lbu	t1,5(a5)
    80001f04:	0067c583          	lbu	a1,6(a5)
    80001f08:	0077c603          	lbu	a2,7(a5)
    80001f0c:	01c70223          	sb	t3,4(a4)
    80001f10:	006702a3          	sb	t1,5(a4)
    80001f14:	00b70323          	sb	a1,6(a4)
    80001f18:	00c703a3          	sb	a2,7(a4)
    80001f1c:	00478793          	addi	a5,a5,4
    80001f20:	00470713          	addi	a4,a4,4
    80001f24:	fd379ce3          	bne	a5,s3,80001efc <bench_15pz_run+0x840>
    80001f28:	02013683          	ld	a3,32(sp)
    80001f2c:	0c010713          	addi	a4,sp,192
    80001f30:	002b9313          	slli	t1,s7,0x2
    80001f34:	fff6879b          	addiw	a5,a3,-1
    80001f38:	00670333          	add	t1,a4,t1
    80001f3c:	0007859b          	sext.w	a1,a5
    80001f40:	00058e93          	mv	t4,a1
    80001f44:	00b305b3          	add	a1,t1,a1
    80001f48:	f9458e03          	lb	t3,-108(a1)
    80001f4c:	00d30333          	add	t1,t1,a3
    80001f50:	fffa861b          	addiw	a2,s5,-1
    80001f54:	fffe079b          	addiw	a5,t3,-1
    80001f58:	41f7d71b          	sraiw	a4,a5,0x1f
    80001f5c:	01e7571b          	srliw	a4,a4,0x1e
    80001f60:	00e787bb          	addw	a5,a5,a4
    80001f64:	0037f793          	andi	a5,a5,3
    80001f68:	40e787bb          	subw	a5,a5,a4
    80001f6c:	40d7873b          	subw	a4,a5,a3
    80001f70:	41d787bb          	subw	a5,a5,t4
    80001f74:	41f75f9b          	sraiw	t6,a4,0x1f
    80001f78:	41f7df1b          	sraiw	t5,a5,0x1f
    80001f7c:	00efceb3          	xor	t4,t6,a4
    80001f80:	00ff47b3          	xor	a5,t5,a5
    80001f84:	41e787bb          	subw	a5,a5,t5
    80001f88:	41fe8ebb          	subw	t4,t4,t6
    80001f8c:	40fe8ebb          	subw	t4,t4,a5
    80001f90:	01813783          	ld	a5,24(sp)
    80001f94:	fdc30223          	sb	t3,-60(t1)
    80001f98:	00448e13          	addi	t3,s1,4
    80001f9c:	00fe8ebb          	addw	t4,t4,a5
    80001fa0:	018e9e9b          	slliw	t4,t4,0x18
    80001fa4:	fc058223          	sb	zero,-60(a1)
    80001fa8:	418ede9b          	sraiw	t4,t4,0x18
    80001fac:	0ff67f13          	andi	t5,a2,255
    80001fb0:	000e0593          	mv	a1,t3
    80001fb4:	00000713          	li	a4,0
    80001fb8:	7b500313          	li	t1,1973
    80001fbc:	ffc58793          	addi	a5,a1,-4
    80001fc0:	02e3073b          	mulw	a4,t1,a4
    80001fc4:	00478603          	lb	a2,4(a5)
    80001fc8:	00178793          	addi	a5,a5,1
    80001fcc:	00c7073b          	addw	a4,a4,a2
    80001fd0:	feb798e3          	bne	a5,a1,80001fc0 <bench_15pz_run+0x904>
    80001fd4:	00478593          	addi	a1,a5,4
    80001fd8:	ff9592e3          	bne	a1,s9,80001fbc <bench_15pz_run+0x900>
    80001fdc:	00100793          	li	a5,1
    80001fe0:	06f10423          	sb	a5,104(sp)
    80001fe4:	074104a3          	sb	s4,105(sp)
    80001fe8:	07e10523          	sb	t5,106(sp)
    80001fec:	07d105a3          	sb	t4,107(sp)
    80001ff0:	06e12e23          	sw	a4,124(sp)
    80001ff4:	06810793          	addi	a5,sp,104
    80001ff8:	00754703          	lbu	a4,7(a0)
    80001ffc:	00454303          	lbu	t1,4(a0)
    80002000:	00554583          	lbu	a1,5(a0)
    80002004:	00654603          	lbu	a2,6(a0)
    80002008:	00e783a3          	sb	a4,7(a5)
    8000200c:	00813703          	ld	a4,8(sp)
    80002010:	00678223          	sb	t1,4(a5)
    80002014:	00b782a3          	sb	a1,5(a5)
    80002018:	00c78323          	sb	a2,6(a5)
    8000201c:	000e0513          	mv	a0,t3
    80002020:	00478793          	addi	a5,a5,4
    80002024:	01c70663          	beq	a4,t3,80002030 <bench_15pz_run+0x974>
    80002028:	004e0e13          	addi	t3,t3,4
    8000202c:	fcdff06f          	j	80001ff8 <bench_15pz_run+0x93c>
    80002030:	008db583          	ld	a1,8(s11)
    80002034:	000da503          	lw	a0,0(s11)
    80002038:	05010613          	addi	a2,sp,80
    8000203c:	e10ff0ef          	jal	ra,8000164c <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0>
    80002040:	10050663          	beqz	a0,8000214c <bench_15pz_run+0xa90>
    80002044:	02452603          	lw	a2,36(a0)
    80002048:	0016061b          	addiw	a2,a2,1
    8000204c:	06810593          	addi	a1,sp,104
    80002050:	000d8513          	mv	a0,s11
    80002054:	048020ef          	jal	ra,8000409c <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i>
    80002058:	b4dff06f          	j	80001ba4 <bench_15pz_run+0x4e8>
    8000205c:	80000637          	lui	a2,0x80000
    80002060:	b35ff06f          	j	80001b94 <bench_15pz_run+0x4d8>
    80002064:	80000637          	lui	a2,0x80000
    80002068:	d2dff06f          	j	80001d94 <bench_15pz_run+0x6d8>
    8000206c:	02d00613          	li	a2,45
    80002070:	eb0ff06f          	j	80001720 <bench_15pz_run+0x64>
    80002074:	08010493          	addi	s1,sp,128
    80002078:	00004597          	auipc	a1,0x4
    8000207c:	ef858593          	addi	a1,a1,-264 # 80005f70 <_ZL8PUZZLE_S>
    80002080:	00048513          	mv	a0,s1
    80002084:	611010ef          	jal	ra,80003e94 <_ZN8N_puzzleILi4EEC1EPi>
    80002088:	08012783          	lw	a5,128(sp)
    8000208c:	08014803          	lbu	a6,128(sp)
    80002090:	03810713          	addi	a4,sp,56
    80002094:	02f12c23          	sw	a5,56(sp)
    80002098:	09412783          	lw	a5,148(sp)
    8000209c:	09010413          	addi	s0,sp,144
    800020a0:	04f12623          	sw	a5,76(sp)
    800020a4:	00048793          	mv	a5,s1
    800020a8:	0047c503          	lbu	a0,4(a5)
    800020ac:	0057c583          	lbu	a1,5(a5)
    800020b0:	0067c603          	lbu	a2,6(a5)
    800020b4:	0077c683          	lbu	a3,7(a5)
    800020b8:	00a70223          	sb	a0,4(a4)
    800020bc:	00b702a3          	sb	a1,5(a4)
    800020c0:	00c70323          	sb	a2,6(a4)
    800020c4:	00d703a3          	sb	a3,7(a4)
    800020c8:	00478793          	addi	a5,a5,4
    800020cc:	00470713          	addi	a4,a4,4
    800020d0:	fcf41ce3          	bne	s0,a5,800020a8 <bench_15pz_run+0x9ec>
    800020d4:	00a00793          	li	a5,10
    800020d8:	00f13823          	sd	a5,16(sp)
    800020dc:	eccff06f          	j	800017a8 <bench_15pz_run+0xec>
    800020e0:	08010493          	addi	s1,sp,128
    800020e4:	00004597          	auipc	a1,0x4
    800020e8:	f0c58593          	addi	a1,a1,-244 # 80005ff0 <_ZL8PUZZLE_L>
    800020ec:	00048513          	mv	a0,s1
    800020f0:	5a5010ef          	jal	ra,80003e94 <_ZN8N_puzzleILi4EEC1EPi>
    800020f4:	08012783          	lw	a5,128(sp)
    800020f8:	08014803          	lbu	a6,128(sp)
    800020fc:	03810713          	addi	a4,sp,56
    80002100:	02f12c23          	sw	a5,56(sp)
    80002104:	09412783          	lw	a5,148(sp)
    80002108:	09010413          	addi	s0,sp,144
    8000210c:	04f12623          	sw	a5,76(sp)
    80002110:	00048793          	mv	a5,s1
    80002114:	0047c503          	lbu	a0,4(a5)
    80002118:	0057c583          	lbu	a1,5(a5)
    8000211c:	0067c603          	lbu	a2,6(a5)
    80002120:	0077c683          	lbu	a3,7(a5)
    80002124:	00a70223          	sb	a0,4(a4)
    80002128:	00b702a3          	sb	a1,5(a4)
    8000212c:	00c70323          	sb	a2,6(a4)
    80002130:	00d703a3          	sb	a3,7(a4)
    80002134:	00478793          	addi	a5,a5,4
    80002138:	00470713          	addi	a4,a4,4
    8000213c:	fcf41ce3          	bne	s0,a5,80002114 <bench_15pz_run+0xa58>
    80002140:	000047b7          	lui	a5,0x4
    80002144:	00f13823          	sd	a5,16(sp)
    80002148:	e60ff06f          	j	800017a8 <bench_15pz_run+0xec>
    8000214c:	80000637          	lui	a2,0x80000
    80002150:	efdff06f          	j	8000204c <bench_15pz_run+0x990>
    80002154:	80000637          	lui	a2,0x80000
    80002158:	bc9ff06f          	j	80001d20 <bench_15pz_run+0x664>
    8000215c:	008db583          	ld	a1,8(s11)
    80002160:	000da503          	lw	a0,0(s11)
    80002164:	05010613          	addi	a2,sp,80
    80002168:	ce4ff0ef          	jal	ra,8000164c <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0>
    8000216c:	00050e63          	beqz	a0,80002188 <bench_15pz_run+0xacc>
    80002170:	02452783          	lw	a5,36(a0)
    80002174:	02f9093b          	mulw	s2,s2,a5
    80002178:	00004797          	auipc	a5,0x4
    8000217c:	49c78793          	addi	a5,a5,1180 # 80006614 <_ZL3ans>
    80002180:	0127a023          	sw	s2,0(a5)
    80002184:	bb9ff06f          	j	80001d3c <bench_15pz_run+0x680>
    80002188:	800007b7          	lui	a5,0x80000
    8000218c:	fff7c793          	not	a5,a5
    80002190:	fe5ff06f          	j	80002174 <bench_15pz_run+0xab8>
    80002194:	05600613          	li	a2,86
    80002198:	00003597          	auipc	a1,0x3
    8000219c:	59058593          	addi	a1,a1,1424 # 80005728 <r+0x100>
    800021a0:	00003517          	auipc	a0,0x3
    800021a4:	5c850513          	addi	a0,a0,1480 # 80005768 <r+0x140>
    800021a8:	2c4030ef          	jal	ra,8000546c <printf>
    800021ac:	00100513          	li	a0,1
    800021b0:	5d8020ef          	jal	ra,80004788 <_halt>

00000000800021b4 <bench_alloc>:
    800021b4:	00004597          	auipc	a1,0x4
    800021b8:	46458593          	addi	a1,a1,1124 # 80006618 <hbrk>
    800021bc:	0005b683          	ld	a3,0(a1)
    800021c0:	00750713          	addi	a4,a0,7
    800021c4:	00004797          	auipc	a5,0x4
    800021c8:	3c478793          	addi	a5,a5,964 # 80006588 <_heap>
    800021cc:	ff010113          	addi	sp,sp,-16
    800021d0:	ff877713          	andi	a4,a4,-8
    800021d4:	0007b603          	ld	a2,0(a5)
    800021d8:	00113423          	sd	ra,8(sp)
    800021dc:	00e68733          	add	a4,a3,a4
    800021e0:	00e5b023          	sd	a4,0(a1)
    800021e4:	04c76263          	bltu	a4,a2,80002228 <bench_alloc+0x74>
    800021e8:	0087b783          	ld	a5,8(a5)
    800021ec:	02f77e63          	bgeu	a4,a5,80002228 <bench_alloc+0x74>
    800021f0:	00068793          	mv	a5,a3
    800021f4:	00d70863          	beq	a4,a3,80002204 <bench_alloc+0x50>
    800021f8:	0007b023          	sd	zero,0(a5)
    800021fc:	00878793          	addi	a5,a5,8
    80002200:	fef71ce3          	bne	a4,a5,800021f8 <bench_alloc+0x44>
    80002204:	00004797          	auipc	a5,0x4
    80002208:	4b47b783          	ld	a5,1204(a5) # 800066b8 <setting>
    8000220c:	0087b783          	ld	a5,8(a5)
    80002210:	40c70733          	sub	a4,a4,a2
    80002214:	02e7ea63          	bltu	a5,a4,80002248 <bench_alloc+0x94>
    80002218:	00813083          	ld	ra,8(sp)
    8000221c:	00068513          	mv	a0,a3
    80002220:	01010113          	addi	sp,sp,16
    80002224:	00008067          	ret
    80002228:	08d00613          	li	a2,141
    8000222c:	00003597          	auipc	a1,0x3
    80002230:	79c58593          	addi	a1,a1,1948 # 800059c8 <r+0x3a0>
    80002234:	00003517          	auipc	a0,0x3
    80002238:	53450513          	addi	a0,a0,1332 # 80005768 <r+0x140>
    8000223c:	230030ef          	jal	ra,8000546c <printf>
    80002240:	00100513          	li	a0,1
    80002244:	544020ef          	jal	ra,80004788 <_halt>
    80002248:	09100613          	li	a2,145
    8000224c:	fe1ff06f          	j	8000222c <bench_alloc+0x78>

0000000080002250 <bench_free>:
    80002250:	00008067          	ret

0000000080002254 <bench_srand>:
    80002254:	03151513          	slli	a0,a0,0x31
    80002258:	03155513          	srli	a0,a0,0x31
    8000225c:	00004797          	auipc	a5,0x4
    80002260:	32a7a223          	sw	a0,804(a5) # 80006580 <seed>
    80002264:	00008067          	ret

0000000080002268 <bench_rand>:
    80002268:	00004697          	auipc	a3,0x4
    8000226c:	31868693          	addi	a3,a3,792 # 80006580 <seed>
    80002270:	0006a783          	lw	a5,0(a3)
    80002274:	00034737          	lui	a4,0x34
    80002278:	3fd7071b          	addiw	a4,a4,1021
    8000227c:	02e787bb          	mulw	a5,a5,a4
    80002280:	0026a737          	lui	a4,0x26a
    80002284:	ec37071b          	addiw	a4,a4,-317
    80002288:	00e787bb          	addw	a5,a5,a4
    8000228c:	02179513          	slli	a0,a5,0x21
    80002290:	00f6a023          	sw	a5,0(a3)
    80002294:	03155513          	srli	a0,a0,0x31
    80002298:	00008067          	ret

000000008000229c <checksum>:
    8000229c:	00450613          	addi	a2,a0,4
    800022a0:	00050813          	mv	a6,a0
    800022a4:	06b67263          	bgeu	a2,a1,80002308 <checksum+0x6c>
    800022a8:	811ca737          	lui	a4,0x811ca
    800022ac:	01000537          	lui	a0,0x1000
    800022b0:	dc570713          	addi	a4,a4,-571 # ffffffff811c9dc5 <_pmem_end+0xfffffffef91c9dc5>
    800022b4:	1935051b          	addiw	a0,a0,403
    800022b8:	00080793          	mv	a5,a6
    800022bc:	0007c683          	lbu	a3,0(a5)
    800022c0:	00178793          	addi	a5,a5,1
    800022c4:	00d74733          	xor	a4,a4,a3
    800022c8:	02e5073b          	mulw	a4,a0,a4
    800022cc:	fef618e3          	bne	a2,a5,800022bc <checksum+0x20>
    800022d0:	00460613          	addi	a2,a2,4 # ffffffff80000004 <_pmem_end+0xfffffffef8000004>
    800022d4:	00480813          	addi	a6,a6,4
    800022d8:	feb660e3          	bltu	a2,a1,800022b8 <checksum+0x1c>
    800022dc:	00d7151b          	slliw	a0,a4,0xd
    800022e0:	00e5073b          	addw	a4,a0,a4
    800022e4:	4077551b          	sraiw	a0,a4,0x7
    800022e8:	00a74733          	xor	a4,a4,a0
    800022ec:	0037151b          	slliw	a0,a4,0x3
    800022f0:	00e5053b          	addw	a0,a0,a4
    800022f4:	4115579b          	sraiw	a5,a0,0x11
    800022f8:	00f54533          	xor	a0,a0,a5
    800022fc:	0055179b          	slliw	a5,a0,0x5
    80002300:	00a7853b          	addw	a0,a5,a0
    80002304:	00008067          	ret
    80002308:	a6f00537          	lui	a0,0xa6f00
    8000230c:	79e50513          	addi	a0,a0,1950 # ffffffffa6f0079e <_pmem_end+0xffffffff1ef0079e>
    80002310:	00008067          	ret

0000000080002314 <bench_lzip_prepare>:
    80002314:	00004797          	auipc	a5,0x4
    80002318:	3a47b783          	ld	a5,932(a5) # 800066b8 <setting>
    8000231c:	0007a783          	lw	a5,0(a5)
    80002320:	fd010113          	addi	sp,sp,-48
    80002324:	00913c23          	sd	s1,24(sp)
    80002328:	00100513          	li	a0,1
    8000232c:	00004497          	auipc	s1,0x4
    80002330:	31448493          	addi	s1,s1,788 # 80006640 <SIZE>
    80002334:	02113423          	sd	ra,40(sp)
    80002338:	00f4a023          	sw	a5,0(s1)
    8000233c:	01213823          	sd	s2,16(sp)
    80002340:	02813023          	sd	s0,32(sp)
    80002344:	01313423          	sd	s3,8(sp)
    80002348:	f0dff0ef          	jal	ra,80002254 <bench_srand>
    8000234c:	00011537          	lui	a0,0x11
    80002350:	80850513          	addi	a0,a0,-2040 # 10808 <_start-0x7ffef7f8>
    80002354:	e61ff0ef          	jal	ra,800021b4 <bench_alloc>
    80002358:	00050793          	mv	a5,a0
    8000235c:	0004a503          	lw	a0,0(s1)
    80002360:	00004717          	auipc	a4,0x4
    80002364:	2cf73c23          	sd	a5,728(a4) # 80006638 <state>
    80002368:	00004917          	auipc	s2,0x4
    8000236c:	2c890913          	addi	s2,s2,712 # 80006630 <blk>
    80002370:	e45ff0ef          	jal	ra,800021b4 <bench_alloc>
    80002374:	0004a783          	lw	a5,0(s1)
    80002378:	00a93023          	sd	a0,0(s2)
    8000237c:	1907851b          	addiw	a0,a5,400
    80002380:	e35ff0ef          	jal	ra,800021b4 <bench_alloc>
    80002384:	0004a783          	lw	a5,0(s1)
    80002388:	00004717          	auipc	a4,0x4
    8000238c:	2aa73023          	sd	a0,672(a4) # 80006628 <compress>
    80002390:	02f05a63          	blez	a5,800023c4 <bench_lzip_prepare+0xb0>
    80002394:	00000413          	li	s0,0
    80002398:	01a00993          	li	s3,26
    8000239c:	ecdff0ef          	jal	ra,80002268 <bench_rand>
    800023a0:	0335753b          	remuw	a0,a0,s3
    800023a4:	00093783          	ld	a5,0(s2)
    800023a8:	0004a683          	lw	a3,0(s1)
    800023ac:	008787b3          	add	a5,a5,s0
    800023b0:	00140413          	addi	s0,s0,1
    800023b4:	0004071b          	sext.w	a4,s0
    800023b8:	0615051b          	addiw	a0,a0,97
    800023bc:	00a78023          	sb	a0,0(a5)
    800023c0:	fcd74ee3          	blt	a4,a3,8000239c <bench_lzip_prepare+0x88>
    800023c4:	02813083          	ld	ra,40(sp)
    800023c8:	02013403          	ld	s0,32(sp)
    800023cc:	01813483          	ld	s1,24(sp)
    800023d0:	01013903          	ld	s2,16(sp)
    800023d4:	00813983          	ld	s3,8(sp)
    800023d8:	03010113          	addi	sp,sp,48
    800023dc:	00008067          	ret

00000000800023e0 <bench_lzip_run>:
    800023e0:	ff010113          	addi	sp,sp,-16
    800023e4:	00004697          	auipc	a3,0x4
    800023e8:	2546b683          	ld	a3,596(a3) # 80006638 <state>
    800023ec:	00004617          	auipc	a2,0x4
    800023f0:	25462603          	lw	a2,596(a2) # 80006640 <SIZE>
    800023f4:	00004597          	auipc	a1,0x4
    800023f8:	2345b583          	ld	a1,564(a1) # 80006628 <compress>
    800023fc:	00004517          	auipc	a0,0x4
    80002400:	23453503          	ld	a0,564(a0) # 80006630 <blk>
    80002404:	00113423          	sd	ra,8(sp)
    80002408:	1a4000ef          	jal	ra,800025ac <qlz_compress>
    8000240c:	00813083          	ld	ra,8(sp)
    80002410:	00004797          	auipc	a5,0x4
    80002414:	20a7a823          	sw	a0,528(a5) # 80006620 <len>
    80002418:	01010113          	addi	sp,sp,16
    8000241c:	00008067          	ret

0000000080002420 <bench_lzip_validate>:
    80002420:	00004517          	auipc	a0,0x4
    80002424:	20853503          	ld	a0,520(a0) # 80006628 <compress>
    80002428:	00004597          	auipc	a1,0x4
    8000242c:	1f85a583          	lw	a1,504(a1) # 80006620 <len>
    80002430:	ff010113          	addi	sp,sp,-16
    80002434:	00b505b3          	add	a1,a0,a1
    80002438:	00113423          	sd	ra,8(sp)
    8000243c:	e61ff0ef          	jal	ra,8000229c <checksum>
    80002440:	00004797          	auipc	a5,0x4
    80002444:	2787b783          	ld	a5,632(a5) # 800066b8 <setting>
    80002448:	0187a783          	lw	a5,24(a5)
    8000244c:	00813083          	ld	ra,8(sp)
    80002450:	0005051b          	sext.w	a0,a0
    80002454:	40a78533          	sub	a0,a5,a0
    80002458:	00153513          	seqz	a0,a0
    8000245c:	01010113          	addi	sp,sp,16
    80002460:	00008067          	ret

0000000080002464 <bench_memcpy.part.0>:
    80002464:	ff010113          	addi	sp,sp,-16
    80002468:	00800613          	li	a2,8
    8000246c:	00003597          	auipc	a1,0x3
    80002470:	6c458593          	addi	a1,a1,1732 # 80005b30 <r+0x508>
    80002474:	00003517          	auipc	a0,0x3
    80002478:	2f450513          	addi	a0,a0,756 # 80005768 <r+0x140>
    8000247c:	00113423          	sd	ra,8(sp)
    80002480:	7ed020ef          	jal	ra,8000546c <printf>
    80002484:	00100513          	li	a0,1
    80002488:	300020ef          	jal	ra,80004788 <_halt>

000000008000248c <memcpy_up.isra.0>:
    8000248c:	ff010113          	addi	sp,sp,-16
    80002490:	09500613          	li	a2,149
    80002494:	00003597          	auipc	a1,0x3
    80002498:	6e458593          	addi	a1,a1,1764 # 80005b78 <r+0x550>
    8000249c:	00003517          	auipc	a0,0x3
    800024a0:	2cc50513          	addi	a0,a0,716 # 80005768 <r+0x140>
    800024a4:	00113423          	sd	ra,8(sp)
    800024a8:	7c5020ef          	jal	ra,8000546c <printf>
    800024ac:	00100513          	li	a0,1
    800024b0:	2d8020ef          	jal	ra,80004788 <_halt>

00000000800024b4 <qlz_get_setting>:
    800024b4:	00900793          	li	a5,9
    800024b8:	02a7e063          	bltu	a5,a0,800024d8 <qlz_get_setting+0x24>
    800024bc:	02051513          	slli	a0,a0,0x20
    800024c0:	00003797          	auipc	a5,0x3
    800024c4:	70078793          	addi	a5,a5,1792 # 80005bc0 <CSWTCH.22>
    800024c8:	01e55513          	srli	a0,a0,0x1e
    800024cc:	00a78533          	add	a0,a5,a0
    800024d0:	00052503          	lw	a0,0(a0)
    800024d4:	00008067          	ret
    800024d8:	fff00513          	li	a0,-1
    800024dc:	00008067          	ret

00000000800024e0 <qlz_size_decompressed>:
    800024e0:	00054783          	lbu	a5,0(a0)
    800024e4:	0027f793          	andi	a5,a5,2
    800024e8:	04079663          	bnez	a5,80002534 <qlz_size_decompressed+0x54>
    800024ec:	0ff00593          	li	a1,255
    800024f0:	00200793          	li	a5,2
    800024f4:	00100693          	li	a3,1
    800024f8:	00f50533          	add	a0,a0,a5
    800024fc:	00369693          	slli	a3,a3,0x3
    80002500:	00000713          	li	a4,0
    80002504:	00000793          	li	a5,0
    80002508:	00054603          	lbu	a2,0(a0)
    8000250c:	00150513          	addi	a0,a0,1
    80002510:	00e6163b          	sllw	a2,a2,a4
    80002514:	00c7e7b3          	or	a5,a5,a2
    80002518:	0087071b          	addiw	a4,a4,8
    8000251c:	0007879b          	sext.w	a5,a5
    80002520:	fee694e3          	bne	a3,a4,80002508 <qlz_size_decompressed+0x28>
    80002524:	00b7f533          	and	a0,a5,a1
    80002528:	02051513          	slli	a0,a0,0x20
    8000252c:	02055513          	srli	a0,a0,0x20
    80002530:	00008067          	ret
    80002534:	fff00593          	li	a1,-1
    80002538:	00500793          	li	a5,5
    8000253c:	00400693          	li	a3,4
    80002540:	fb9ff06f          	j	800024f8 <qlz_size_decompressed+0x18>

0000000080002544 <qlz_size_compressed>:
    80002544:	00054703          	lbu	a4,0(a0)
    80002548:	00154783          	lbu	a5,1(a0)
    8000254c:	00277713          	andi	a4,a4,2
    80002550:	0007869b          	sext.w	a3,a5
    80002554:	02070863          	beqz	a4,80002584 <qlz_size_compressed+0x40>
    80002558:	00254603          	lbu	a2,2(a0)
    8000255c:	00354683          	lbu	a3,3(a0)
    80002560:	00454703          	lbu	a4,4(a0)
    80002564:	0086151b          	slliw	a0,a2,0x8
    80002568:	00a7e533          	or	a0,a5,a0
    8000256c:	0005051b          	sext.w	a0,a0
    80002570:	0106979b          	slliw	a5,a3,0x10
    80002574:	00f56533          	or	a0,a0,a5
    80002578:	0187179b          	slliw	a5,a4,0x18
    8000257c:	00f56533          	or	a0,a0,a5
    80002580:	0005069b          	sext.w	a3,a0
    80002584:	02069513          	slli	a0,a3,0x20
    80002588:	02055513          	srli	a0,a0,0x20
    8000258c:	00008067          	ret

0000000080002590 <qlz_size_header>:
    80002590:	00054783          	lbu	a5,0(a0)
    80002594:	0027f793          	andi	a5,a5,2
    80002598:	00079663          	bnez	a5,800025a4 <qlz_size_header+0x14>
    8000259c:	00300513          	li	a0,3
    800025a0:	00008067          	ret
    800025a4:	00900513          	li	a0,9
    800025a8:	00008067          	ret

00000000800025ac <qlz_compress>:
    800025ac:	00100793          	li	a5,1
    800025b0:	f5010113          	addi	sp,sp,-176
    800025b4:	02079793          	slli	a5,a5,0x20
    800025b8:	00060713          	mv	a4,a2
    800025bc:	02c13023          	sd	a2,32(sp)
    800025c0:	0a113423          	sd	ra,168(sp)
    800025c4:	0a813023          	sd	s0,160(sp)
    800025c8:	08913c23          	sd	s1,152(sp)
    800025cc:	09213823          	sd	s2,144(sp)
    800025d0:	09313423          	sd	s3,136(sp)
    800025d4:	09413023          	sd	s4,128(sp)
    800025d8:	07513c23          	sd	s5,120(sp)
    800025dc:	07613823          	sd	s6,112(sp)
    800025e0:	07713423          	sd	s7,104(sp)
    800025e4:	07813023          	sd	s8,96(sp)
    800025e8:	05913c23          	sd	s9,88(sp)
    800025ec:	05a13823          	sd	s10,80(sp)
    800025f0:	05b13423          	sd	s11,72(sp)
    800025f4:	fff60613          	addi	a2,a2,-1
    800025f8:	e6e78793          	addi	a5,a5,-402
    800025fc:	00a13423          	sd	a0,8(sp)
    80002600:	02b13823          	sd	a1,48(sp)
    80002604:	58c7e463          	bltu	a5,a2,80002b8c <qlz_compress+0x5e0>
    80002608:	00300593          	li	a1,3
    8000260c:	0d700793          	li	a5,215
    80002610:	02b13423          	sd	a1,40(sp)
    80002614:	46e7e263          	bltu	a5,a4,80002a78 <qlz_compress+0x4cc>
    80002618:	000107b7          	lui	a5,0x10
    8000261c:	00011737          	lui	a4,0x11
    80002620:	00878793          	addi	a5,a5,8 # 10008 <_start-0x7ffefff8>
    80002624:	80870713          	addi	a4,a4,-2040 # 10808 <_start-0x7ffef7f8>
    80002628:	00f687b3          	add	a5,a3,a5
    8000262c:	00e68733          	add	a4,a3,a4
    80002630:	00078023          	sb	zero,0(a5)
    80002634:	00178793          	addi	a5,a5,1
    80002638:	fef71ce3          	bne	a4,a5,80002630 <qlz_compress+0x84>
    8000263c:	00813783          	ld	a5,8(sp)
    80002640:	03013703          	ld	a4,48(sp)
    80002644:	02813583          	ld	a1,40(sp)
    80002648:	00c78633          	add	a2,a5,a2
    8000264c:	02c13c23          	sd	a2,56(sp)
    80002650:	00b704b3          	add	s1,a4,a1
    80002654:	00913823          	sd	s1,16(sp)
    80002658:	ff660c13          	addi	s8,a2,-10
    8000265c:	00448e13          	addi	t3,s1,4
    80002660:	00078713          	mv	a4,a5
    80002664:	5cfc6663          	bltu	s8,a5,80002c30 <qlz_compress+0x684>
    80002668:	02013783          	ld	a5,32(sp)
    8000266c:	ffc60d13          	addi	s10,a2,-4
    80002670:	0fe00c93          	li	s9,254
    80002674:	0017d793          	srli	a5,a5,0x1
    80002678:	00f707b3          	add	a5,a4,a5
    8000267c:	00f13c23          	sd	a5,24(sp)
    80002680:	00010bb7          	lui	s7,0x10
    80002684:	00070793          	mv	a5,a4
    80002688:	00400993          	li	s3,4
    8000268c:	80000737          	lui	a4,0x80000
    80002690:	80000db7          	lui	s11,0x80000
    80002694:	40fd0fb3          	sub	t6,s10,a5
    80002698:	01fcd463          	bge	s9,t6,800026a0 <qlz_compress+0xf4>
    8000269c:	0fe00f93          	li	t6,254
    800026a0:	0017c603          	lbu	a2,1(a5)
    800026a4:	0027c503          	lbu	a0,2(a5)
    800026a8:	0007c583          	lbu	a1,0(a5)
    800026ac:	0086161b          	slliw	a2,a2,0x8
    800026b0:	0105151b          	slliw	a0,a0,0x10
    800026b4:	00a66633          	or	a2,a2,a0
    800026b8:	00b66633          	or	a2,a2,a1
    800026bc:	00d6559b          	srliw	a1,a2,0xd
    800026c0:	0096581b          	srliw	a6,a2,0x9
    800026c4:	00b84833          	xor	a6,a6,a1
    800026c8:	0006061b          	sext.w	a2,a2
    800026cc:	00c84833          	xor	a6,a6,a2
    800026d0:	7ff87313          	andi	t1,a6,2047
    800026d4:	00531893          	slli	a7,t1,0x5
    800026d8:	011688b3          	add	a7,a3,a7
    800026dc:	0088b583          	ld	a1,8(a7)
    800026e0:	00668533          	add	a0,a3,t1
    800026e4:	00ab8533          	add	a0,s7,a0
    800026e8:	ffe78a13          	addi	s4,a5,-2
    800026ec:	00854283          	lbu	t0,8(a0)
    800026f0:	001f8f93          	addi	t6,t6,1
    800026f4:	00030813          	mv	a6,t1
    800026f8:	0945fe63          	bgeu	a1,s4,80002794 <qlz_compress+0x1e8>
    800026fc:	2c029e63          	bnez	t0,800029d8 <qlz_compress+0x42c>
    80002700:	00f8b423          	sd	a5,8(a7)
    80002704:	00100613          	li	a2,1
    80002708:	00c50423          	sb	a2,8(a0)
    8000270c:	0017571b          	srliw	a4,a4,0x1
    80002710:	0007c603          	lbu	a2,0(a5)
    80002714:	001e0e13          	addi	t3,t3,1
    80002718:	00178793          	addi	a5,a5,1
    8000271c:	fece0fa3          	sb	a2,-1(t3)
    80002720:	00177613          	andi	a2,a4,1
    80002724:	00060593          	mv	a1,a2
    80002728:	14fc6063          	bltu	s8,a5,80002868 <qlz_compress+0x2bc>
    8000272c:	f60584e3          	beqz	a1,80002694 <qlz_compress+0xe8>
    80002730:	01813603          	ld	a2,24(sp)
    80002734:	02f67063          	bgeu	a2,a5,80002754 <qlz_compress+0x1a8>
    80002738:	00813603          	ld	a2,8(sp)
    8000273c:	01013583          	ld	a1,16(sp)
    80002740:	40c78633          	sub	a2,a5,a2
    80002744:	40565513          	srai	a0,a2,0x5
    80002748:	40be05b3          	sub	a1,t3,a1
    8000274c:	40a60633          	sub	a2,a2,a0
    80002750:	44b64a63          	blt	a2,a1,80002ba4 <qlz_compress+0x5f8>
    80002754:	0017571b          	srliw	a4,a4,0x1
    80002758:	01b76733          	or	a4,a4,s11
    8000275c:	0007071b          	sext.w	a4,a4
    80002760:	00875513          	srli	a0,a4,0x8
    80002764:	01075593          	srli	a1,a4,0x10
    80002768:	01875613          	srli	a2,a4,0x18
    8000276c:	00e48023          	sb	a4,0(s1)
    80002770:	00a480a3          	sb	a0,1(s1)
    80002774:	00b48123          	sb	a1,2(s1)
    80002778:	00c481a3          	sb	a2,3(s1)
    8000277c:	40fd0fb3          	sub	t6,s10,a5
    80002780:	000e0493          	mv	s1,t3
    80002784:	80000737          	lui	a4,0x80000
    80002788:	004e0e13          	addi	t3,t3,4
    8000278c:	f1fcdae3          	bge	s9,t6,800026a0 <qlz_compress+0xf4>
    80002790:	f0dff06f          	j	8000269c <qlz_compress+0xf0>
    80002794:	00000e93          	li	t4,0
    80002798:	00531593          	slli	a1,t1,0x5
    8000279c:	0002891b          	sext.w	s2,t0
    800027a0:	00b685b3          	add	a1,a3,a1
    800027a4:	00000f13          	li	t5,0
    800027a8:	00100513          	li	a0,1
    800027ac:	03257863          	bgeu	a0,s2,800027dc <qlz_compress+0x230>
    800027b0:	0105b883          	ld	a7,16(a1)
    800027b4:	020e9393          	slli	t2,t4,0x20
    800027b8:	0203d393          	srli	t2,t2,0x20
    800027bc:	00778433          	add	s0,a5,t2
    800027c0:	007883b3          	add	t2,a7,t2
    800027c4:	00044403          	lbu	s0,0(s0)
    800027c8:	0003c383          	lbu	t2,0(t2)
    800027cc:	18740c63          	beq	s0,t2,80002964 <qlz_compress+0x3b8>
    800027d0:	0015051b          	addiw	a0,a0,1
    800027d4:	00858593          	addi	a1,a1,8
    800027d8:	fd351ae3          	bne	a0,s3,800027ac <qlz_compress+0x200>
    800027dc:	0032f593          	andi	a1,t0,3
    800027e0:	00231613          	slli	a2,t1,0x2
    800027e4:	00b60633          	add	a2,a2,a1
    800027e8:	00361613          	slli	a2,a2,0x3
    800027ec:	00c68633          	add	a2,a3,a2
    800027f0:	00668333          	add	t1,a3,t1
    800027f4:	00f63423          	sd	a5,8(a2)
    800027f8:	006b8333          	add	t1,s7,t1
    800027fc:	0012829b          	addiw	t0,t0,1
    80002800:	0017561b          	srliw	a2,a4,0x1
    80002804:	00530423          	sb	t0,8(t1)
    80002808:	00200593          	li	a1,2
    8000280c:	0006071b          	sext.w	a4,a2
    80002810:	f1d5f0e3          	bgeu	a1,t4,80002710 <qlz_compress+0x164>
    80002814:	01b66733          	or	a4,a2,s11
    80002818:	020e9613          	slli	a2,t4,0x20
    8000281c:	02065613          	srli	a2,a2,0x20
    80002820:	0058181b          	slliw	a6,a6,0x5
    80002824:	010f6f33          	or	t5,t5,a6
    80002828:	00c787b3          	add	a5,a5,a2
    8000282c:	00900613          	li	a2,9
    80002830:	0007071b          	sext.w	a4,a4
    80002834:	000f0f1b          	sext.w	t5,t5
    80002838:	21d66c63          	bltu	a2,t4,80002a50 <qlz_compress+0x4a4>
    8000283c:	ffee8e9b          	addiw	t4,t4,-2
    80002840:	002e9e9b          	slliw	t4,t4,0x2
    80002844:	01df6f33          	or	t5,t5,t4
    80002848:	000f0f1b          	sext.w	t5,t5
    8000284c:	008f5613          	srli	a2,t5,0x8
    80002850:	00ce00a3          	sb	a2,1(t3)
    80002854:	01ee0023          	sb	t5,0(t3)
    80002858:	00177613          	andi	a2,a4,1
    8000285c:	002e0e13          	addi	t3,t3,2
    80002860:	00060593          	mv	a1,a2
    80002864:	ecfc74e3          	bgeu	s8,a5,8000272c <qlz_compress+0x180>
    80002868:	03813883          	ld	a7,56(sp)
    8000286c:	0017551b          	srliw	a0,a4,0x1
    80002870:	0017581b          	srliw	a6,a4,0x1
    80002874:	20f8e863          	bltu	a7,a5,80002a84 <qlz_compress+0x4d8>
    80002878:	03813583          	ld	a1,56(sp)
    8000287c:	02013803          	ld	a6,32(sp)
    80002880:	80000f37          	lui	t5,0x80000
    80002884:	ffd58313          	addi	t1,a1,-3
    80002888:	00813583          	ld	a1,8(sp)
    8000288c:	00010eb7          	lui	t4,0x10
    80002890:	010588b3          	add	a7,a1,a6
    80002894:	08c0006f          	j	80002920 <qlz_compress+0x374>
    80002898:	0027581b          	srliw	a6,a4,0x2
    8000289c:	00157593          	andi	a1,a0,1
    800028a0:	000f8713          	mv	a4,t6
    800028a4:	0007cf83          	lbu	t6,0(a5)
    800028a8:	06f36063          	bltu	t1,a5,80002908 <qlz_compress+0x35c>
    800028ac:	0017c503          	lbu	a0,1(a5)
    800028b0:	0027c603          	lbu	a2,2(a5)
    800028b4:	0085151b          	slliw	a0,a0,0x8
    800028b8:	0106161b          	slliw	a2,a2,0x10
    800028bc:	00c56533          	or	a0,a0,a2
    800028c0:	00d5529b          	srliw	t0,a0,0xd
    800028c4:	0095561b          	srliw	a2,a0,0x9
    800028c8:	00564633          	xor	a2,a2,t0
    800028cc:	01f56533          	or	a0,a0,t6
    800028d0:	00a64633          	xor	a2,a2,a0
    800028d4:	7ff67613          	andi	a2,a2,2047
    800028d8:	00c68533          	add	a0,a3,a2
    800028dc:	00ae8533          	add	a0,t4,a0
    800028e0:	00854f83          	lbu	t6,8(a0)
    800028e4:	00261613          	slli	a2,a2,0x2
    800028e8:	003ff293          	andi	t0,t6,3
    800028ec:	00560633          	add	a2,a2,t0
    800028f0:	00361613          	slli	a2,a2,0x3
    800028f4:	00c68633          	add	a2,a3,a2
    800028f8:	00f63423          	sd	a5,8(a2)
    800028fc:	001f8f9b          	addiw	t6,t6,1
    80002900:	01f50423          	sb	t6,8(a0)
    80002904:	0007cf83          	lbu	t6,0(a5)
    80002908:	01fe0023          	sb	t6,0(t3)
    8000290c:	00178793          	addi	a5,a5,1
    80002910:	001e0e13          	addi	t3,t3,1
    80002914:	17178863          	beq	a5,a7,80002a84 <qlz_compress+0x4d8>
    80002918:	0017551b          	srliw	a0,a4,0x1
    8000291c:	00177613          	andi	a2,a4,1
    80002920:	00050f9b          	sext.w	t6,a0
    80002924:	f6060ae3          	beqz	a2,80002898 <qlz_compress+0x2ec>
    80002928:	01e56533          	or	a0,a0,t5
    8000292c:	0005051b          	sext.w	a0,a0
    80002930:	00855593          	srli	a1,a0,0x8
    80002934:	01855713          	srli	a4,a0,0x18
    80002938:	01055613          	srli	a2,a0,0x10
    8000293c:	00b480a3          	sb	a1,1(s1)
    80002940:	00e481a3          	sb	a4,3(s1)
    80002944:	00a48023          	sb	a0,0(s1)
    80002948:	00c48123          	sb	a2,2(s1)
    8000294c:	20000837          	lui	a6,0x20000
    80002950:	000e0493          	mv	s1,t3
    80002954:	00000593          	li	a1,0
    80002958:	004e0e13          	addi	t3,t3,4
    8000295c:	40000737          	lui	a4,0x40000
    80002960:	f45ff06f          	j	800028a4 <qlz_compress+0x2f8>
    80002964:	0018c383          	lbu	t2,1(a7)
    80002968:	0028c403          	lbu	s0,2(a7)
    8000296c:	0008ca83          	lbu	s5,0(a7)
    80002970:	0083939b          	slliw	t2,t2,0x8
    80002974:	0104141b          	slliw	s0,s0,0x10
    80002978:	0083e3b3          	or	t2,t2,s0
    8000297c:	0153e3b3          	or	t2,t2,s5
    80002980:	0003839b          	sext.w	t2,t2
    80002984:	e4c396e3          	bne	t2,a2,800027d0 <qlz_compress+0x224>
    80002988:	e548f4e3          	bgeu	a7,s4,800027d0 <qlz_compress+0x224>
    8000298c:	0038c403          	lbu	s0,3(a7)
    80002990:	0037c383          	lbu	t2,3(a5)
    80002994:	28741a63          	bne	s0,t2,80002c28 <qlz_compress+0x67c>
    80002998:	00300393          	li	t2,3
    8000299c:	01f3e663          	bltu	t2,t6,800029a8 <qlz_compress+0x3fc>
    800029a0:	2880006f          	j	80002c28 <qlz_compress+0x67c>
    800029a4:	03f47263          	bgeu	s0,t6,800029c8 <qlz_compress+0x41c>
    800029a8:	0013839b          	addiw	t2,t2,1
    800029ac:	02039413          	slli	s0,t2,0x20
    800029b0:	02045413          	srli	s0,s0,0x20
    800029b4:	00888b33          	add	s6,a7,s0
    800029b8:	00878ab3          	add	s5,a5,s0
    800029bc:	000b4b03          	lbu	s6,0(s6)
    800029c0:	000aca83          	lbu	s5,0(s5)
    800029c4:	ff5b00e3          	beq	s6,s5,800029a4 <qlz_compress+0x3f8>
    800029c8:	e07ef4e3          	bgeu	t4,t2,800027d0 <qlz_compress+0x224>
    800029cc:	00050f13          	mv	t5,a0
    800029d0:	00038e93          	mv	t4,t2
    800029d4:	dfdff06f          	j	800027d0 <qlz_compress+0x224>
    800029d8:	0015c503          	lbu	a0,1(a1)
    800029dc:	0025c883          	lbu	a7,2(a1)
    800029e0:	0005ce83          	lbu	t4,0(a1)
    800029e4:	0085151b          	slliw	a0,a0,0x8
    800029e8:	0108989b          	slliw	a7,a7,0x10
    800029ec:	01156533          	or	a0,a0,a7
    800029f0:	01d56533          	or	a0,a0,t4
    800029f4:	0005051b          	sext.w	a0,a0
    800029f8:	00000e93          	li	t4,0
    800029fc:	d8c51ee3          	bne	a0,a2,80002798 <qlz_compress+0x1ec>
    80002a00:	0035c883          	lbu	a7,3(a1)
    80002a04:	0037c503          	lbu	a0,3(a5)
    80002a08:	00300e93          	li	t4,3
    80002a0c:	d8a896e3          	bne	a7,a0,80002798 <qlz_compress+0x1ec>
    80002a10:	0045c883          	lbu	a7,4(a1)
    80002a14:	0047c503          	lbu	a0,4(a5)
    80002a18:	00400e93          	li	t4,4
    80002a1c:	d6a89ee3          	bne	a7,a0,80002798 <qlz_compress+0x1ec>
    80002a20:	01f9e663          	bltu	s3,t6,80002a2c <qlz_compress+0x480>
    80002a24:	d75ff06f          	j	80002798 <qlz_compress+0x1ec>
    80002a28:	d7f578e3          	bgeu	a0,t6,80002798 <qlz_compress+0x1ec>
    80002a2c:	001e8e9b          	addiw	t4,t4,1
    80002a30:	020e9513          	slli	a0,t4,0x20
    80002a34:	02055513          	srli	a0,a0,0x20
    80002a38:	00a588b3          	add	a7,a1,a0
    80002a3c:	00a78f33          	add	t5,a5,a0
    80002a40:	0008c883          	lbu	a7,0(a7)
    80002a44:	000f4f03          	lbu	t5,0(t5) # ffffffff80000000 <_pmem_end+0xfffffffef8000000>
    80002a48:	ffe880e3          	beq	a7,t5,80002a28 <qlz_compress+0x47c>
    80002a4c:	d4dff06f          	j	80002798 <qlz_compress+0x1ec>
    80002a50:	010e9e9b          	slliw	t4,t4,0x10
    80002a54:	01df6eb3          	or	t4,t5,t4
    80002a58:	000e8e9b          	sext.w	t4,t4
    80002a5c:	008ed593          	srli	a1,t4,0x8
    80002a60:	010ed613          	srli	a2,t4,0x10
    80002a64:	01de0023          	sb	t4,0(t3)
    80002a68:	00be00a3          	sb	a1,1(t3)
    80002a6c:	00ce0123          	sb	a2,2(t3)
    80002a70:	003e0e13          	addi	t3,t3,3
    80002a74:	cadff06f          	j	80002720 <qlz_compress+0x174>
    80002a78:	00900793          	li	a5,9
    80002a7c:	02f13423          	sd	a5,40(sp)
    80002a80:	b99ff06f          	j	80002618 <qlz_compress+0x6c>
    80002a84:	00059e63          	bnez	a1,80002aa0 <qlz_compress+0x4f4>
    80002a88:	0017579b          	srliw	a5,a4,0x1
    80002a8c:	0017f613          	andi	a2,a5,1
    80002a90:	0007081b          	sext.w	a6,a4
    80002a94:	0007871b          	sext.w	a4,a5
    80002a98:	fe0608e3          	beqz	a2,80002a88 <qlz_compress+0x4dc>
    80002a9c:	0028581b          	srliw	a6,a6,0x2
    80002aa0:	800007b7          	lui	a5,0x80000
    80002aa4:	00f86833          	or	a6,a6,a5
    80002aa8:	01885793          	srli	a5,a6,0x18
    80002aac:	00f481a3          	sb	a5,3(s1)
    80002ab0:	01013783          	ld	a5,16(sp)
    80002ab4:	00885613          	srli	a2,a6,0x8
    80002ab8:	01085713          	srli	a4,a6,0x10
    80002abc:	40fe0533          	sub	a0,t3,a5
    80002ac0:	01048023          	sb	a6,0(s1)
    80002ac4:	00c480a3          	sb	a2,1(s1)
    80002ac8:	00e48123          	sb	a4,2(s1)
    80002acc:	00900793          	li	a5,9
    80002ad0:	00f55463          	bge	a0,a5,80002ad8 <qlz_compress+0x52c>
    80002ad4:	00900513          	li	a0,9
    80002ad8:	02813783          	ld	a5,40(sp)
    80002adc:	00f50533          	add	a0,a0,a5
    80002ae0:	00100793          	li	a5,1
    80002ae4:	0006b023          	sd	zero,0(a3)
    80002ae8:	02813683          	ld	a3,40(sp)
    80002aec:	00300713          	li	a4,3
    80002af0:	02014603          	lbu	a2,32(sp)
    80002af4:	0ff57593          	andi	a1,a0,255
    80002af8:	08e68e63          	beq	a3,a4,80002b94 <qlz_compress+0x5e8>
    80002afc:	02012683          	lw	a3,32(sp)
    80002b00:	03013e83          	ld	t4,48(sp)
    80002b04:	0005071b          	sext.w	a4,a0
    80002b08:	00875e13          	srli	t3,a4,0x8
    80002b0c:	01075313          	srli	t1,a4,0x10
    80002b10:	0086d893          	srli	a7,a3,0x8
    80002b14:	0106d813          	srli	a6,a3,0x10
    80002b18:	01875713          	srli	a4,a4,0x18
    80002b1c:	0186d693          	srli	a3,a3,0x18
    80002b20:	0027e793          	ori	a5,a5,2
    80002b24:	00be80a3          	sb	a1,1(t4) # 10001 <_start-0x7ffeffff>
    80002b28:	01ce8123          	sb	t3,2(t4)
    80002b2c:	006e81a3          	sb	t1,3(t4)
    80002b30:	00ee8223          	sb	a4,4(t4)
    80002b34:	00ce82a3          	sb	a2,5(t4)
    80002b38:	011e8323          	sb	a7,6(t4)
    80002b3c:	010e83a3          	sb	a6,7(t4)
    80002b40:	00de8423          	sb	a3,8(t4)
    80002b44:	03013703          	ld	a4,48(sp)
    80002b48:	0487e793          	ori	a5,a5,72
    80002b4c:	00f70023          	sb	a5,0(a4) # 40000000 <_start-0x40000000>
    80002b50:	0a813083          	ld	ra,168(sp)
    80002b54:	0a013403          	ld	s0,160(sp)
    80002b58:	09813483          	ld	s1,152(sp)
    80002b5c:	09013903          	ld	s2,144(sp)
    80002b60:	08813983          	ld	s3,136(sp)
    80002b64:	08013a03          	ld	s4,128(sp)
    80002b68:	07813a83          	ld	s5,120(sp)
    80002b6c:	07013b03          	ld	s6,112(sp)
    80002b70:	06813b83          	ld	s7,104(sp)
    80002b74:	06013c03          	ld	s8,96(sp)
    80002b78:	05813c83          	ld	s9,88(sp)
    80002b7c:	05013d03          	ld	s10,80(sp)
    80002b80:	04813d83          	ld	s11,72(sp)
    80002b84:	0b010113          	addi	sp,sp,176
    80002b88:	00008067          	ret
    80002b8c:	00000513          	li	a0,0
    80002b90:	fc1ff06f          	j	80002b50 <qlz_compress+0x5a4>
    80002b94:	03013703          	ld	a4,48(sp)
    80002b98:	00b700a3          	sb	a1,1(a4)
    80002b9c:	00c70123          	sb	a2,2(a4)
    80002ba0:	fa5ff06f          	j	80002b44 <qlz_compress+0x598>
    80002ba4:	00813783          	ld	a5,8(sp)
    80002ba8:	0a078c63          	beqz	a5,80002c60 <qlz_compress+0x6b4>
    80002bac:	00813603          	ld	a2,8(sp)
    80002bb0:	02013583          	ld	a1,32(sp)
    80002bb4:	01013703          	ld	a4,16(sp)
    80002bb8:	00b607b3          	add	a5,a2,a1
    80002bbc:	02f77c63          	bgeu	a4,a5,80002bf4 <qlz_compress+0x648>
    80002bc0:	02e67a63          	bgeu	a2,a4,80002bf4 <qlz_compress+0x648>
    80002bc4:	00b70733          	add	a4,a4,a1
    80002bc8:	fff7c603          	lbu	a2,-1(a5) # ffffffff7fffffff <_pmem_end+0xfffffffef7ffffff>
    80002bcc:	fff78793          	addi	a5,a5,-1
    80002bd0:	fff70713          	addi	a4,a4,-1
    80002bd4:	00c70023          	sb	a2,0(a4)
    80002bd8:	00813603          	ld	a2,8(sp)
    80002bdc:	fef616e3          	bne	a2,a5,80002bc8 <qlz_compress+0x61c>
    80002be0:	02813783          	ld	a5,40(sp)
    80002be4:	02013703          	ld	a4,32(sp)
    80002be8:	00e78533          	add	a0,a5,a4
    80002bec:	00000793          	li	a5,0
    80002bf0:	ef5ff06f          	j	80002ae4 <qlz_compress+0x538>
    80002bf4:	01013783          	ld	a5,16(sp)
    80002bf8:	02013703          	ld	a4,32(sp)
    80002bfc:	00e78733          	add	a4,a5,a4
    80002c00:	00813583          	ld	a1,8(sp)
    80002c04:	01013603          	ld	a2,16(sp)
    80002c08:	0005c783          	lbu	a5,0(a1)
    80002c0c:	00160613          	addi	a2,a2,1
    80002c10:	00158593          	addi	a1,a1,1
    80002c14:	00c13823          	sd	a2,16(sp)
    80002c18:	00b13423          	sd	a1,8(sp)
    80002c1c:	fef60fa3          	sb	a5,-1(a2)
    80002c20:	fec710e3          	bne	a4,a2,80002c00 <qlz_compress+0x654>
    80002c24:	fbdff06f          	j	80002be0 <qlz_compress+0x634>
    80002c28:	00300393          	li	t2,3
    80002c2c:	d9dff06f          	j	800029c8 <qlz_compress+0x41c>
    80002c30:	00813783          	ld	a5,8(sp)
    80002c34:	03813703          	ld	a4,56(sp)
    80002c38:	00f76e63          	bltu	a4,a5,80002c54 <qlz_compress+0x6a8>
    80002c3c:	00813783          	ld	a5,8(sp)
    80002c40:	01013483          	ld	s1,16(sp)
    80002c44:	80000737          	lui	a4,0x80000
    80002c48:	40000537          	lui	a0,0x40000
    80002c4c:	00000613          	li	a2,0
    80002c50:	c29ff06f          	j	80002878 <qlz_compress+0x2cc>
    80002c54:	01013483          	ld	s1,16(sp)
    80002c58:	80000737          	lui	a4,0x80000
    80002c5c:	e2dff06f          	j	80002a88 <qlz_compress+0x4dc>
    80002c60:	805ff0ef          	jal	ra,80002464 <bench_memcpy.part.0>

0000000080002c64 <qlz_decompress>:
    80002c64:	fe010113          	addi	sp,sp,-32
    80002c68:	00813823          	sd	s0,16(sp)
    80002c6c:	00913423          	sd	s1,8(sp)
    80002c70:	01213023          	sd	s2,0(sp)
    80002c74:	00050413          	mv	s0,a0
    80002c78:	00113c23          	sd	ra,24(sp)
    80002c7c:	00058913          	mv	s2,a1
    80002c80:	00060493          	mv	s1,a2
    80002c84:	85dff0ef          	jal	ra,800024e0 <qlz_size_decompressed>
    80002c88:	00044783          	lbu	a5,0(s0)
    80002c8c:	0017f713          	andi	a4,a5,1
    80002c90:	14070e63          	beqz	a4,80002dec <qlz_decompress+0x188>
    80002c94:	00011737          	lui	a4,0x11
    80002c98:	000107b7          	lui	a5,0x10
    80002c9c:	80070713          	addi	a4,a4,-2048 # 10800 <_start-0x7ffef800>
    80002ca0:	00f487b3          	add	a5,s1,a5
    80002ca4:	00e48733          	add	a4,s1,a4
    80002ca8:	00078023          	sb	zero,0(a5) # 10000 <_start-0x7fff0000>
    80002cac:	00178793          	addi	a5,a5,1
    80002cb0:	fef71ce3          	bne	a4,a5,80002ca8 <qlz_decompress+0x44>
    80002cb4:	00044783          	lbu	a5,0(s0)
    80002cb8:	00900713          	li	a4,9
    80002cbc:	0027f793          	andi	a5,a5,2
    80002cc0:	16078663          	beqz	a5,80002e2c <qlz_decompress+0x1c8>
    80002cc4:	fff50593          	addi	a1,a0,-1 # 3fffffff <_start-0x40000001>
    80002cc8:	00e407b3          	add	a5,s0,a4
    80002ccc:	00b905b3          	add	a1,s2,a1
    80002cd0:	ff658e13          	addi	t3,a1,-10
    80002cd4:	fff90693          	addi	a3,s2,-1
    80002cd8:	00078893          	mv	a7,a5
    80002cdc:	00000613          	li	a2,0
    80002ce0:	00000713          	li	a4,0
    80002ce4:	02000313          	li	t1,32
    80002ce8:	0008c803          	lbu	a6,0(a7)
    80002cec:	00188893          	addi	a7,a7,1
    80002cf0:	00c8183b          	sllw	a6,a6,a2
    80002cf4:	01076733          	or	a4,a4,a6
    80002cf8:	0086061b          	addiw	a2,a2,8
    80002cfc:	0007071b          	sext.w	a4,a4
    80002d00:	fe6614e3          	bne	a2,t1,80002ce8 <qlz_decompress+0x84>
    80002d04:	00177613          	andi	a2,a4,1
    80002d08:	00478793          	addi	a5,a5,4
    80002d0c:	16061263          	bnez	a2,80002e70 <qlz_decompress+0x20c>
    80002d10:	17c96063          	bltu	s2,t3,80002e70 <qlz_decompress+0x20c>
    80002d14:	00a908b3          	add	a7,s2,a0
    80002d18:	00100813          	li	a6,1
    80002d1c:	0325e063          	bltu	a1,s2,80002d3c <qlz_decompress+0xd8>
    80002d20:	15070063          	beq	a4,a6,80002e60 <qlz_decompress+0x1fc>
    80002d24:	0017571b          	srliw	a4,a4,0x1
    80002d28:	0007c603          	lbu	a2,0(a5)
    80002d2c:	00190913          	addi	s2,s2,1
    80002d30:	00178793          	addi	a5,a5,1
    80002d34:	fec90fa3          	sb	a2,-1(s2)
    80002d38:	ff1914e3          	bne	s2,a7,80002d20 <qlz_decompress+0xbc>
    80002d3c:	ffd58593          	addi	a1,a1,-3
    80002d40:	000108b7          	lui	a7,0x10
    80002d44:	06b6f463          	bgeu	a3,a1,80002dac <qlz_decompress+0x148>
    80002d48:	0026c703          	lbu	a4,2(a3)
    80002d4c:	0036c783          	lbu	a5,3(a3)
    80002d50:	0016c803          	lbu	a6,1(a3)
    80002d54:	0087171b          	slliw	a4,a4,0x8
    80002d58:	0107979b          	slliw	a5,a5,0x10
    80002d5c:	00f76733          	or	a4,a4,a5
    80002d60:	00d7561b          	srliw	a2,a4,0xd
    80002d64:	0097579b          	srliw	a5,a4,0x9
    80002d68:	00c7c7b3          	xor	a5,a5,a2
    80002d6c:	01076733          	or	a4,a4,a6
    80002d70:	00e7c7b3          	xor	a5,a5,a4
    80002d74:	7ff7f793          	andi	a5,a5,2047
    80002d78:	00f48733          	add	a4,s1,a5
    80002d7c:	00e88733          	add	a4,a7,a4
    80002d80:	00074603          	lbu	a2,0(a4)
    80002d84:	00279793          	slli	a5,a5,0x2
    80002d88:	00168693          	addi	a3,a3,1
    80002d8c:	00367813          	andi	a6,a2,3
    80002d90:	010787b3          	add	a5,a5,a6
    80002d94:	00379793          	slli	a5,a5,0x3
    80002d98:	00f487b3          	add	a5,s1,a5
    80002d9c:	00d7b023          	sd	a3,0(a5)
    80002da0:	0016061b          	addiw	a2,a2,1
    80002da4:	00c70023          	sb	a2,0(a4)
    80002da8:	fad590e3          	bne	a1,a3,80002d48 <qlz_decompress+0xe4>
    80002dac:	000117b7          	lui	a5,0x11
    80002db0:	00f486b3          	add	a3,s1,a5
    80002db4:	80078713          	addi	a4,a5,-2048 # 10800 <_start-0x7ffef800>
    80002db8:	000107b7          	lui	a5,0x10
    80002dbc:	8006b023          	sd	zero,-2048(a3)
    80002dc0:	00f487b3          	add	a5,s1,a5
    80002dc4:	00e48733          	add	a4,s1,a4
    80002dc8:	00078023          	sb	zero,0(a5) # 10000 <_start-0x7fff0000>
    80002dcc:	00178793          	addi	a5,a5,1
    80002dd0:	fef71ce3          	bne	a4,a5,80002dc8 <qlz_decompress+0x164>
    80002dd4:	01813083          	ld	ra,24(sp)
    80002dd8:	01013403          	ld	s0,16(sp)
    80002ddc:	00813483          	ld	s1,8(sp)
    80002de0:	00013903          	ld	s2,0(sp)
    80002de4:	02010113          	addi	sp,sp,32
    80002de8:	00008067          	ret
    80002dec:	0027f793          	andi	a5,a5,2
    80002df0:	00900713          	li	a4,9
    80002df4:	04078063          	beqz	a5,80002e34 <qlz_decompress+0x1d0>
    80002df8:	00e407b3          	add	a5,s0,a4
    80002dfc:	06090863          	beqz	s2,80002e6c <qlz_decompress+0x208>
    80002e00:	00a78733          	add	a4,a5,a0
    80002e04:	04e97063          	bgeu	s2,a4,80002e44 <qlz_decompress+0x1e0>
    80002e08:	0327fe63          	bgeu	a5,s2,80002e44 <qlz_decompress+0x1e0>
    80002e0c:	00a90933          	add	s2,s2,a0
    80002e10:	f8050ee3          	beqz	a0,80002dac <qlz_decompress+0x148>
    80002e14:	fff74683          	lbu	a3,-1(a4)
    80002e18:	fff70713          	addi	a4,a4,-1
    80002e1c:	fff90913          	addi	s2,s2,-1
    80002e20:	00d90023          	sb	a3,0(s2)
    80002e24:	fef718e3          	bne	a4,a5,80002e14 <qlz_decompress+0x1b0>
    80002e28:	f85ff06f          	j	80002dac <qlz_decompress+0x148>
    80002e2c:	00300713          	li	a4,3
    80002e30:	e95ff06f          	j	80002cc4 <qlz_decompress+0x60>
    80002e34:	00300713          	li	a4,3
    80002e38:	00e407b3          	add	a5,s0,a4
    80002e3c:	fc0912e3          	bnez	s2,80002e00 <qlz_decompress+0x19c>
    80002e40:	02c0006f          	j	80002e6c <qlz_decompress+0x208>
    80002e44:	f60504e3          	beqz	a0,80002dac <qlz_decompress+0x148>
    80002e48:	0007c683          	lbu	a3,0(a5)
    80002e4c:	00178793          	addi	a5,a5,1
    80002e50:	00190913          	addi	s2,s2,1
    80002e54:	fed90fa3          	sb	a3,-1(s2)
    80002e58:	fef718e3          	bne	a4,a5,80002e48 <qlz_decompress+0x1e4>
    80002e5c:	f51ff06f          	j	80002dac <qlz_decompress+0x148>
    80002e60:	00478793          	addi	a5,a5,4
    80002e64:	40000737          	lui	a4,0x40000
    80002e68:	ec1ff06f          	j	80002d28 <qlz_decompress+0xc4>
    80002e6c:	df8ff0ef          	jal	ra,80002464 <bench_memcpy.part.0>
    80002e70:	e1cff0ef          	jal	ra,8000248c <memcpy_up.isra.0>

0000000080002e74 <_ZL9radixPassPiS_S_ii>:
    80002e74:	fd010113          	addi	sp,sp,-48
    80002e78:	0017079b          	addiw	a5,a4,1
    80002e7c:	02813023          	sd	s0,32(sp)
    80002e80:	01413023          	sd	s4,0(sp)
    80002e84:	00050413          	mv	s0,a0
    80002e88:	00070a13          	mv	s4,a4
    80002e8c:	00279513          	slli	a0,a5,0x2
    80002e90:	00913c23          	sd	s1,24(sp)
    80002e94:	01213823          	sd	s2,16(sp)
    80002e98:	01313423          	sd	s3,8(sp)
    80002e9c:	02113423          	sd	ra,40(sp)
    80002ea0:	00058993          	mv	s3,a1
    80002ea4:	00060493          	mv	s1,a2
    80002ea8:	00068913          	mv	s2,a3
    80002eac:	b08ff0ef          	jal	ra,800021b4 <bench_alloc>
    80002eb0:	0e0a4e63          	bltz	s4,80002fac <_ZL9radixPassPiS_S_ii+0x138>
    80002eb4:	001a0713          	addi	a4,s4,1
    80002eb8:	00271713          	slli	a4,a4,0x2
    80002ebc:	00050793          	mv	a5,a0
    80002ec0:	00a70733          	add	a4,a4,a0
    80002ec4:	0007a023          	sw	zero,0(a5)
    80002ec8:	00478793          	addi	a5,a5,4
    80002ecc:	fef71ce3          	bne	a4,a5,80002ec4 <_ZL9radixPassPiS_S_ii+0x50>
    80002ed0:	05205663          	blez	s2,80002f1c <_ZL9radixPassPiS_S_ii+0xa8>
    80002ed4:	fff9071b          	addiw	a4,s2,-1
    80002ed8:	02071713          	slli	a4,a4,0x20
    80002edc:	01e75793          	srli	a5,a4,0x1e
    80002ee0:	00440713          	addi	a4,s0,4
    80002ee4:	00040813          	mv	a6,s0
    80002ee8:	00e78733          	add	a4,a5,a4
    80002eec:	00082783          	lw	a5,0(a6) # 20000000 <_start-0x60000000>
    80002ef0:	00480813          	addi	a6,a6,4
    80002ef4:	00279793          	slli	a5,a5,0x2
    80002ef8:	00f487b3          	add	a5,s1,a5
    80002efc:	0007a783          	lw	a5,0(a5)
    80002f00:	00279793          	slli	a5,a5,0x2
    80002f04:	00f507b3          	add	a5,a0,a5
    80002f08:	0007a883          	lw	a7,0(a5)
    80002f0c:	0018889b          	addiw	a7,a7,1
    80002f10:	0117a023          	sw	a7,0(a5)
    80002f14:	fd071ce3          	bne	a4,a6,80002eec <_ZL9radixPassPiS_S_ii+0x78>
    80002f18:	020a4663          	bltz	s4,80002f44 <_ZL9radixPassPiS_S_ii+0xd0>
    80002f1c:	00050793          	mv	a5,a0
    80002f20:	00000613          	li	a2,0
    80002f24:	00000693          	li	a3,0
    80002f28:	0007a583          	lw	a1,0(a5)
    80002f2c:	0016869b          	addiw	a3,a3,1
    80002f30:	00c7a023          	sw	a2,0(a5)
    80002f34:	00c5863b          	addw	a2,a1,a2
    80002f38:	00478793          	addi	a5,a5,4
    80002f3c:	feda56e3          	bge	s4,a3,80002f28 <_ZL9radixPassPiS_S_ii+0xb4>
    80002f40:	05205663          	blez	s2,80002f8c <_ZL9radixPassPiS_S_ii+0x118>
    80002f44:	00040813          	mv	a6,s0
    80002f48:	00000893          	li	a7,0
    80002f4c:	00082783          	lw	a5,0(a6)
    80002f50:	00480813          	addi	a6,a6,4
    80002f54:	0018889b          	addiw	a7,a7,1
    80002f58:	00279793          	slli	a5,a5,0x2
    80002f5c:	00f487b3          	add	a5,s1,a5
    80002f60:	0007a703          	lw	a4,0(a5)
    80002f64:	00271713          	slli	a4,a4,0x2
    80002f68:	00e50733          	add	a4,a0,a4
    80002f6c:	00072783          	lw	a5,0(a4) # 40000000 <_start-0x40000000>
    80002f70:	0017869b          	addiw	a3,a5,1
    80002f74:	00d72023          	sw	a3,0(a4)
    80002f78:	ffc82703          	lw	a4,-4(a6)
    80002f7c:	00279793          	slli	a5,a5,0x2
    80002f80:	00f987b3          	add	a5,s3,a5
    80002f84:	00e7a023          	sw	a4,0(a5)
    80002f88:	fd28c2e3          	blt	a7,s2,80002f4c <_ZL9radixPassPiS_S_ii+0xd8>
    80002f8c:	02813083          	ld	ra,40(sp)
    80002f90:	02013403          	ld	s0,32(sp)
    80002f94:	01813483          	ld	s1,24(sp)
    80002f98:	01013903          	ld	s2,16(sp)
    80002f9c:	00813983          	ld	s3,8(sp)
    80002fa0:	00013a03          	ld	s4,0(sp)
    80002fa4:	03010113          	addi	sp,sp,48
    80002fa8:	00008067          	ret
    80002fac:	f32044e3          	bgtz	s2,80002ed4 <_ZL9radixPassPiS_S_ii+0x60>
    80002fb0:	fddff06f          	j	80002f8c <_ZL9radixPassPiS_S_ii+0x118>

0000000080002fb4 <_Z11suffixArrayPiS_ii>:
    80002fb4:	f7010113          	addi	sp,sp,-144
    80002fb8:	05613823          	sd	s6,80(sp)
    80002fbc:	00060b13          	mv	s6,a2
    80002fc0:	07213823          	sd	s2,112(sp)
    80002fc4:	00300613          	li	a2,3
    80002fc8:	002b091b          	addiw	s2,s6,2
    80002fcc:	08813023          	sd	s0,128(sp)
    80002fd0:	02c9443b          	divw	s0,s2,a2
    80002fd4:	03a13823          	sd	s10,48(sp)
    80002fd8:	05513c23          	sd	s5,88(sp)
    80002fdc:	07413023          	sd	s4,96(sp)
    80002fe0:	07313423          	sd	s3,104(sp)
    80002fe4:	05713423          	sd	s7,72(sp)
    80002fe8:	00050993          	mv	s3,a0
    80002fec:	00c13c23          	sd	a2,24(sp)
    80002ff0:	08113423          	sd	ra,136(sp)
    80002ff4:	06913c23          	sd	s1,120(sp)
    80002ff8:	05813023          	sd	s8,64(sp)
    80002ffc:	03913c23          	sd	s9,56(sp)
    80003000:	00058c13          	mv	s8,a1
    80003004:	03b13423          	sd	s11,40(sp)
    80003008:	00068c93          	mv	s9,a3
    8000300c:	02cb4d3b          	divw	s10,s6,a2
    80003010:	00241713          	slli	a4,s0,0x2
    80003014:	00e13823          	sd	a4,16(sp)
    80003018:	008d0abb          	addw	s5,s10,s0
    8000301c:	003a8a1b          	addiw	s4,s5,3
    80003020:	002a1a13          	slli	s4,s4,0x2
    80003024:	000a0513          	mv	a0,s4
    80003028:	002a8b93          	addi	s7,s5,2
    8000302c:	988ff0ef          	jal	ra,800021b4 <bench_alloc>
    80003030:	002b9b93          	slli	s7,s7,0x2
    80003034:	ffcb8793          	addi	a5,s7,-4 # fffc <_start-0x7fff0004>
    80003038:	017506b3          	add	a3,a0,s7
    8000303c:	0006a023          	sw	zero,0(a3)
    80003040:	ff8b8d93          	addi	s11,s7,-8
    80003044:	00f506b3          	add	a3,a0,a5
    80003048:	0006a023          	sw	zero,0(a3)
    8000304c:	01b506b3          	add	a3,a0,s11
    80003050:	0006a023          	sw	zero,0(a3)
    80003054:	00050493          	mv	s1,a0
    80003058:	000a0513          	mv	a0,s4
    8000305c:	00f13423          	sd	a5,8(sp)
    80003060:	954ff0ef          	jal	ra,800021b4 <bench_alloc>
    80003064:	00813783          	ld	a5,8(sp)
    80003068:	01013703          	ld	a4,16(sp)
    8000306c:	01750bb3          	add	s7,a0,s7
    80003070:	00f507b3          	add	a5,a0,a5
    80003074:	000ba023          	sw	zero,0(s7)
    80003078:	0007a023          	sw	zero,0(a5)
    8000307c:	01b50db3          	add	s11,a0,s11
    80003080:	000da023          	sw	zero,0(s11) # ffffffff80000000 <_pmem_end+0xfffffffef8000000>
    80003084:	00050a13          	mv	s4,a0
    80003088:	00070513          	mv	a0,a4
    8000308c:	00e13423          	sd	a4,8(sp)
    80003090:	924ff0ef          	jal	ra,800021b4 <bench_alloc>
    80003094:	00813703          	ld	a4,8(sp)
    80003098:	00050d93          	mv	s11,a0
    8000309c:	000a8d13          	mv	s10,s5
    800030a0:	00070513          	mv	a0,a4
    800030a4:	910ff0ef          	jal	ra,800021b4 <bench_alloc>
    800030a8:	01813603          	ld	a2,24(sp)
    800030ac:	001b079b          	addiw	a5,s6,1
    800030b0:	00050b93          	mv	s7,a0
    800030b4:	02c7c7bb          	divw	a5,a5,a2
    800030b8:	00000693          	li	a3,0
    800030bc:	00000613          	li	a2,0
    800030c0:	00300813          	li	a6,3
    800030c4:	40f4093b          	subw	s2,s0,a5
    800030c8:	0169053b          	addw	a0,s2,s6
    800030cc:	02a05e63          	blez	a0,80003108 <_Z11suffixArrayPiS_ii+0x154>
    800030d0:	0016869b          	addiw	a3,a3,1
    800030d4:	00261793          	slli	a5,a2,0x2
    800030d8:	00068713          	mv	a4,a3
    800030dc:	00f487b3          	add	a5,s1,a5
    800030e0:	02a68463          	beq	a3,a0,80003108 <_Z11suffixArrayPiS_ii+0x154>
    800030e4:	030765bb          	remw	a1,a4,a6
    800030e8:	fe0584e3          	beqz	a1,800030d0 <_Z11suffixArrayPiS_ii+0x11c>
    800030ec:	0016061b          	addiw	a2,a2,1
    800030f0:	00e7a023          	sw	a4,0(a5)
    800030f4:	0016869b          	addiw	a3,a3,1
    800030f8:	00261793          	slli	a5,a2,0x2
    800030fc:	00068713          	mv	a4,a3
    80003100:	00f487b3          	add	a5,s1,a5
    80003104:	fea690e3          	bne	a3,a0,800030e4 <_Z11suffixArrayPiS_ii+0x130>
    80003108:	00898613          	addi	a2,s3,8
    8000310c:	000a0593          	mv	a1,s4
    80003110:	00048513          	mv	a0,s1
    80003114:	000c8713          	mv	a4,s9
    80003118:	000a8693          	mv	a3,s5
    8000311c:	d59ff0ef          	jal	ra,80002e74 <_ZL9radixPassPiS_S_ii>
    80003120:	000c8713          	mv	a4,s9
    80003124:	000a8693          	mv	a3,s5
    80003128:	00498613          	addi	a2,s3,4
    8000312c:	00048593          	mv	a1,s1
    80003130:	000a0513          	mv	a0,s4
    80003134:	d41ff0ef          	jal	ra,80002e74 <_ZL9radixPassPiS_S_ii>
    80003138:	000c8713          	mv	a4,s9
    8000313c:	000a8693          	mv	a3,s5
    80003140:	00098613          	mv	a2,s3
    80003144:	000a0593          	mv	a1,s4
    80003148:	00048513          	mv	a0,s1
    8000314c:	d29ff0ef          	jal	ra,80002e74 <_ZL9radixPassPiS_S_ii>
    80003150:	11505a63          	blez	s5,80003264 <_Z11suffixArrayPiS_ii+0x2b0>
    80003154:	fffd081b          	addiw	a6,s10,-1
    80003158:	02081813          	slli	a6,a6,0x20
    8000315c:	02085813          	srli	a6,a6,0x20
    80003160:	00180813          	addi	a6,a6,1
    80003164:	00281813          	slli	a6,a6,0x2
    80003168:	000a0d13          	mv	s10,s4
    8000316c:	01480833          	add	a6,a6,s4
    80003170:	000a0613          	mv	a2,s4
    80003174:	fff00e13          	li	t3,-1
    80003178:	fff00593          	li	a1,-1
    8000317c:	fff00893          	li	a7,-1
    80003180:	00000693          	li	a3,0
    80003184:	00300513          	li	a0,3
    80003188:	00100313          	li	t1,1
    8000318c:	02c0006f          	j	800031b8 <_Z11suffixArrayPiS_ii+0x204>
    80003190:	02a7c7bb          	divw	a5,a5,a0
    80003194:	0016869b          	addiw	a3,a3,1
    80003198:	000f0893          	mv	a7,t5
    8000319c:	0087873b          	addw	a4,a5,s0
    800031a0:	00271713          	slli	a4,a4,0x2
    800031a4:	00e48733          	add	a4,s1,a4
    800031a8:	046e8a63          	beq	t4,t1,800031fc <_Z11suffixArrayPiS_ii+0x248>
    800031ac:	00d72023          	sw	a3,0(a4)
    800031b0:	00460613          	addi	a2,a2,4
    800031b4:	04c80e63          	beq	a6,a2,80003210 <_Z11suffixArrayPiS_ii+0x25c>
    800031b8:	00062783          	lw	a5,0(a2)
    800031bc:	00058f93          	mv	t6,a1
    800031c0:	000e0293          	mv	t0,t3
    800031c4:	00279713          	slli	a4,a5,0x2
    800031c8:	00e98733          	add	a4,s3,a4
    800031cc:	00072f03          	lw	t5,0(a4)
    800031d0:	02a7eebb          	remw	t4,a5,a0
    800031d4:	00472583          	lw	a1,4(a4)
    800031d8:	00872e03          	lw	t3,8(a4)
    800031dc:	fb1f1ae3          	bne	t5,a7,80003190 <_Z11suffixArrayPiS_ii+0x1dc>
    800031e0:	fabf98e3          	bne	t6,a1,80003190 <_Z11suffixArrayPiS_ii+0x1dc>
    800031e4:	fbc296e3          	bne	t0,t3,80003190 <_Z11suffixArrayPiS_ii+0x1dc>
    800031e8:	02a7c7bb          	divw	a5,a5,a0
    800031ec:	0087873b          	addw	a4,a5,s0
    800031f0:	00271713          	slli	a4,a4,0x2
    800031f4:	00e48733          	add	a4,s1,a4
    800031f8:	fa6e9ae3          	bne	t4,t1,800031ac <_Z11suffixArrayPiS_ii+0x1f8>
    800031fc:	00279793          	slli	a5,a5,0x2
    80003200:	00f487b3          	add	a5,s1,a5
    80003204:	00d7a023          	sw	a3,0(a5)
    80003208:	00460613          	addi	a2,a2,4
    8000320c:	fac816e3          	bne	a6,a2,800031b8 <_Z11suffixArrayPiS_ii+0x204>
    80003210:	00048613          	mv	a2,s1
    80003214:	00000713          	li	a4,0
    80003218:	2d56c063          	blt	a3,s5,800034d8 <_Z11suffixArrayPiS_ii+0x524>
    8000321c:	00062783          	lw	a5,0(a2)
    80003220:	00460613          	addi	a2,a2,4
    80003224:	00279793          	slli	a5,a5,0x2
    80003228:	00fa07b3          	add	a5,s4,a5
    8000322c:	fee7ae23          	sw	a4,-4(a5)
    80003230:	0017071b          	addiw	a4,a4,1
    80003234:	feea94e3          	bne	s5,a4,8000321c <_Z11suffixArrayPiS_ii+0x268>
    80003238:	00000613          	li	a2,0
    8000323c:	000d2703          	lw	a4,0(s10)
    80003240:	00261793          	slli	a5,a2,0x2
    80003244:	004d0d13          	addi	s10,s10,4
    80003248:	0017169b          	slliw	a3,a4,0x1
    8000324c:	00fd87b3          	add	a5,s11,a5
    80003250:	00e686bb          	addw	a3,a3,a4
    80003254:	00875663          	bge	a4,s0,80003260 <_Z11suffixArrayPiS_ii+0x2ac>
    80003258:	00d7a023          	sw	a3,0(a5)
    8000325c:	0016061b          	addiw	a2,a2,1
    80003260:	fd0d1ee3          	bne	s10,a6,8000323c <_Z11suffixArrayPiS_ii+0x288>
    80003264:	000c8713          	mv	a4,s9
    80003268:	00040693          	mv	a3,s0
    8000326c:	00098613          	mv	a2,s3
    80003270:	000b8593          	mv	a1,s7
    80003274:	000d8513          	mv	a0,s11
    80003278:	bfdff0ef          	jal	ra,80002e74 <_ZL9radixPassPiS_S_ii>
    8000327c:	0b605c63          	blez	s6,80003334 <_Z11suffixArrayPiS_ii+0x380>
    80003280:	004a0793          	addi	a5,s4,4
    80003284:	00000e13          	li	t3,0
    80003288:	00000f13          	li	t5,0
    8000328c:	00300593          	li	a1,3
    80003290:	000a8d9b          	sext.w	s11,s5
    80003294:	fffa8d1b          	addiw	s10,s5,-1
    80003298:	00f13423          	sd	a5,8(sp)
    8000329c:	00040c9b          	sext.w	s9,s0
    800032a0:	fff4039b          	addiw	t2,s0,-1
    800032a4:	004b8513          	addi	a0,s7,4
    800032a8:	002f1713          	slli	a4,t5,0x2
    800032ac:	00eb8733          	add	a4,s7,a4
    800032b0:	00072e83          	lw	t4,0(a4)
    800032b4:	00291813          	slli	a6,s2,0x2
    800032b8:	010a0833          	add	a6,s4,a6
    800032bc:	00082783          	lw	a5,0(a6)
    800032c0:	002e9313          	slli	t1,t4,0x2
    800032c4:	00698333          	add	t1,s3,t1
    800032c8:	02bec63b          	divw	a2,t4,a1
    800032cc:	00032283          	lw	t0,0(t1)
    800032d0:	0c87d663          	bge	a5,s0,8000339c <_Z11suffixArrayPiS_ii+0x3e8>
    800032d4:	0017969b          	slliw	a3,a5,0x1
    800032d8:	00f686bb          	addw	a3,a3,a5
    800032dc:	0016869b          	addiw	a3,a3,1
    800032e0:	00269893          	slli	a7,a3,0x2
    800032e4:	011988b3          	add	a7,s3,a7
    800032e8:	008787bb          	addw	a5,a5,s0
    800032ec:	0008a883          	lw	a7,0(a7) # 10000 <_start-0x7fff0000>
    800032f0:	00279793          	slli	a5,a5,0x2
    800032f4:	00261613          	slli	a2,a2,0x2
    800032f8:	00f487b3          	add	a5,s1,a5
    800032fc:	00c48633          	add	a2,s1,a2
    80003300:	0007a303          	lw	t1,0(a5)
    80003304:	00062783          	lw	a5,0(a2)
    80003308:	0658c663          	blt	a7,t0,80003374 <_Z11suffixArrayPiS_ii+0x3c0>
    8000330c:	06588263          	beq	a7,t0,80003370 <_Z11suffixArrayPiS_ii+0x3bc>
    80003310:	002e1693          	slli	a3,t3,0x2
    80003314:	00dc07b3          	add	a5,s8,a3
    80003318:	001e061b          	addiw	a2,t3,1
    8000331c:	01d7a023          	sw	t4,0(a5)
    80003320:	001f0f1b          	addiw	t5,t5,1
    80003324:	0006079b          	sext.w	a5,a2
    80003328:	13e40263          	beq	s0,t5,8000344c <_Z11suffixArrayPiS_ii+0x498>
    8000332c:	00078e13          	mv	t3,a5
    80003330:	f76e4ce3          	blt	t3,s6,800032a8 <_Z11suffixArrayPiS_ii+0x2f4>
    80003334:	08813083          	ld	ra,136(sp)
    80003338:	08013403          	ld	s0,128(sp)
    8000333c:	07813483          	ld	s1,120(sp)
    80003340:	07013903          	ld	s2,112(sp)
    80003344:	06813983          	ld	s3,104(sp)
    80003348:	06013a03          	ld	s4,96(sp)
    8000334c:	05813a83          	ld	s5,88(sp)
    80003350:	05013b03          	ld	s6,80(sp)
    80003354:	04813b83          	ld	s7,72(sp)
    80003358:	04013c03          	ld	s8,64(sp)
    8000335c:	03813c83          	ld	s9,56(sp)
    80003360:	03013d03          	ld	s10,48(sp)
    80003364:	02813d83          	ld	s11,40(sp)
    80003368:	09010113          	addi	sp,sp,144
    8000336c:	00008067          	ret
    80003370:	fa67c0e3          	blt	a5,t1,80003310 <_Z11suffixArrayPiS_ii+0x35c>
    80003374:	002e1793          	slli	a5,t3,0x2
    80003378:	00fc0833          	add	a6,s8,a5
    8000337c:	001e061b          	addiw	a2,t3,1
    80003380:	00d82023          	sw	a3,0(a6)
    80003384:	0019091b          	addiw	s2,s2,1
    80003388:	0006069b          	sext.w	a3,a2
    8000338c:	072a8663          	beq	s5,s2,800033f8 <_Z11suffixArrayPiS_ii+0x444>
    80003390:	00068e13          	mv	t3,a3
    80003394:	f16e4ae3          	blt	t3,s6,800032a8 <_Z11suffixArrayPiS_ii+0x2f4>
    80003398:	f9dff06f          	j	80003334 <_Z11suffixArrayPiS_ii+0x380>
    8000339c:	408787bb          	subw	a5,a5,s0
    800033a0:	0017969b          	slliw	a3,a5,0x1
    800033a4:	00f686bb          	addw	a3,a3,a5
    800033a8:	0026869b          	addiw	a3,a3,2
    800033ac:	00269f93          	slli	t6,a3,0x2
    800033b0:	01f98fb3          	add	t6,s3,t6
    800033b4:	008608bb          	addw	a7,a2,s0
    800033b8:	00178793          	addi	a5,a5,1
    800033bc:	000fa603          	lw	a2,0(t6)
    800033c0:	00279793          	slli	a5,a5,0x2
    800033c4:	00289893          	slli	a7,a7,0x2
    800033c8:	00f487b3          	add	a5,s1,a5
    800033cc:	011488b3          	add	a7,s1,a7
    800033d0:	004faf83          	lw	t6,4(t6)
    800033d4:	0007a783          	lw	a5,0(a5)
    800033d8:	00432303          	lw	t1,4(t1)
    800033dc:	0008a883          	lw	a7,0(a7)
    800033e0:	f8564ae3          	blt	a2,t0,80003374 <_Z11suffixArrayPiS_ii+0x3c0>
    800033e4:	f25616e3          	bne	a2,t0,80003310 <_Z11suffixArrayPiS_ii+0x35c>
    800033e8:	f86fc6e3          	blt	t6,t1,80003374 <_Z11suffixArrayPiS_ii+0x3c0>
    800033ec:	f26f92e3          	bne	t6,t1,80003310 <_Z11suffixArrayPiS_ii+0x35c>
    800033f0:	f2f8c0e3          	blt	a7,a5,80003310 <_Z11suffixArrayPiS_ii+0x35c>
    800033f4:	f81ff06f          	j	80003374 <_Z11suffixArrayPiS_ii+0x3c0>
    800033f8:	128f5063          	bge	t5,s0,80003518 <_Z11suffixArrayPiS_ii+0x564>
    800033fc:	41e3883b          	subw	a6,t2,t5
    80003400:	02081813          	slli	a6,a6,0x20
    80003404:	02085813          	srli	a6,a6,0x20
    80003408:	01e80833          	add	a6,a6,t5
    8000340c:	00478793          	addi	a5,a5,4
    80003410:	00281813          	slli	a6,a6,0x2
    80003414:	00fc07b3          	add	a5,s8,a5
    80003418:	000f0e1b          	sext.w	t3,t5
    8000341c:	00a80833          	add	a6,a6,a0
    80003420:	00072683          	lw	a3,0(a4)
    80003424:	00470713          	addi	a4,a4,4
    80003428:	00478793          	addi	a5,a5,4
    8000342c:	fed7ae23          	sw	a3,-4(a5)
    80003430:	fee818e3          	bne	a6,a4,80003420 <_Z11suffixArrayPiS_ii+0x46c>
    80003434:	41c60e3b          	subw	t3,a2,t3
    80003438:	019e0e3b          	addw	t3,t3,s9
    8000343c:	001e0e1b          	addiw	t3,t3,1
    80003440:	00040f13          	mv	t5,s0
    80003444:	e76e42e3          	blt	t3,s6,800032a8 <_Z11suffixArrayPiS_ii+0x2f4>
    80003448:	eedff06f          	j	80003334 <_Z11suffixArrayPiS_ii+0x380>
    8000344c:	0d595663          	bge	s2,s5,80003518 <_Z11suffixArrayPiS_ii+0x564>
    80003450:	412d033b          	subw	t1,s10,s2
    80003454:	02031313          	slli	t1,t1,0x20
    80003458:	00813783          	ld	a5,8(sp)
    8000345c:	02035313          	srli	t1,t1,0x20
    80003460:	01230333          	add	t1,t1,s2
    80003464:	00468693          	addi	a3,a3,4
    80003468:	00231313          	slli	t1,t1,0x2
    8000346c:	00dc06b3          	add	a3,s8,a3
    80003470:	0009091b          	sext.w	s2,s2
    80003474:	00f30333          	add	t1,t1,a5
    80003478:	0180006f          	j	80003490 <_Z11suffixArrayPiS_ii+0x4dc>
    8000347c:	0018879b          	addiw	a5,a7,1
    80003480:	00f6a023          	sw	a5,0(a3)
    80003484:	00480813          	addi	a6,a6,4
    80003488:	00468693          	addi	a3,a3,4
    8000348c:	03030a63          	beq	t1,a6,800034c0 <_Z11suffixArrayPiS_ii+0x50c>
    80003490:	00082703          	lw	a4,0(a6)
    80003494:	40870e3b          	subw	t3,a4,s0
    80003498:	0017189b          	slliw	a7,a4,0x1
    8000349c:	001e179b          	slliw	a5,t3,0x1
    800034a0:	00e888bb          	addw	a7,a7,a4
    800034a4:	01c787bb          	addw	a5,a5,t3
    800034a8:	fc874ae3          	blt	a4,s0,8000347c <_Z11suffixArrayPiS_ii+0x4c8>
    800034ac:	0027879b          	addiw	a5,a5,2
    800034b0:	00f6a023          	sw	a5,0(a3)
    800034b4:	00480813          	addi	a6,a6,4
    800034b8:	00468693          	addi	a3,a3,4
    800034bc:	fd031ae3          	bne	t1,a6,80003490 <_Z11suffixArrayPiS_ii+0x4dc>
    800034c0:	4126093b          	subw	s2,a2,s2
    800034c4:	01b90e3b          	addw	t3,s2,s11
    800034c8:	001e0e1b          	addiw	t3,t3,1
    800034cc:	000a8913          	mv	s2,s5
    800034d0:	dd6e4ce3          	blt	t3,s6,800032a8 <_Z11suffixArrayPiS_ii+0x2f4>
    800034d4:	e61ff06f          	j	80003334 <_Z11suffixArrayPiS_ii+0x380>
    800034d8:	000a8613          	mv	a2,s5
    800034dc:	000a0593          	mv	a1,s4
    800034e0:	00048513          	mv	a0,s1
    800034e4:	01013423          	sd	a6,8(sp)
    800034e8:	acdff0ef          	jal	ra,80002fb4 <_Z11suffixArrayPiS_ii>
    800034ec:	00813803          	ld	a6,8(sp)
    800034f0:	000a0693          	mv	a3,s4
    800034f4:	00000713          	li	a4,0
    800034f8:	0006a783          	lw	a5,0(a3)
    800034fc:	0017071b          	addiw	a4,a4,1
    80003500:	00468693          	addi	a3,a3,4
    80003504:	00279793          	slli	a5,a5,0x2
    80003508:	00f487b3          	add	a5,s1,a5
    8000350c:	00e7a023          	sw	a4,0(a5)
    80003510:	ff5714e3          	bne	a4,s5,800034f8 <_Z11suffixArrayPiS_ii+0x544>
    80003514:	d25ff06f          	j	80003238 <_Z11suffixArrayPiS_ii+0x284>
    80003518:	002e0e1b          	addiw	t3,t3,2
    8000351c:	d96e46e3          	blt	t3,s6,800032a8 <_Z11suffixArrayPiS_ii+0x2f4>
    80003520:	e15ff06f          	j	80003334 <_Z11suffixArrayPiS_ii+0x380>

0000000080003524 <bench_ssort_prepare>:
    80003524:	00003797          	auipc	a5,0x3
    80003528:	1947b783          	ld	a5,404(a5) # 800066b8 <setting>
    8000352c:	0007a783          	lw	a5,0(a5)
    80003530:	fd010113          	addi	sp,sp,-48
    80003534:	00913c23          	sd	s1,24(sp)
    80003538:	00100513          	li	a0,1
    8000353c:	00003497          	auipc	s1,0x3
    80003540:	11c48493          	addi	s1,s1,284 # 80006658 <_ZL1N>
    80003544:	02113423          	sd	ra,40(sp)
    80003548:	00f4a023          	sw	a5,0(s1)
    8000354c:	01213823          	sd	s2,16(sp)
    80003550:	02813023          	sd	s0,32(sp)
    80003554:	01313423          	sd	s3,8(sp)
    80003558:	cfdfe0ef          	jal	ra,80002254 <bench_srand>
    8000355c:	0004a503          	lw	a0,0(s1)
    80003560:	00003917          	auipc	s2,0x3
    80003564:	0f090913          	addi	s2,s2,240 # 80006650 <_ZL1s>
    80003568:	00a5051b          	addiw	a0,a0,10
    8000356c:	00251513          	slli	a0,a0,0x2
    80003570:	c45fe0ef          	jal	ra,800021b4 <bench_alloc>
    80003574:	0004a783          	lw	a5,0(s1)
    80003578:	00a93023          	sd	a0,0(s2)
    8000357c:	00a7851b          	addiw	a0,a5,10
    80003580:	00251513          	slli	a0,a0,0x2
    80003584:	c31fe0ef          	jal	ra,800021b4 <bench_alloc>
    80003588:	0004a783          	lw	a5,0(s1)
    8000358c:	00003717          	auipc	a4,0x3
    80003590:	0aa73e23          	sd	a0,188(a4) # 80006648 <_ZL2sa>
    80003594:	02f05a63          	blez	a5,800035c8 <bench_ssort_prepare+0xa4>
    80003598:	00000413          	li	s0,0
    8000359c:	01a00993          	li	s3,26
    800035a0:	cc9fe0ef          	jal	ra,80002268 <bench_rand>
    800035a4:	0335753b          	remuw	a0,a0,s3
    800035a8:	00093783          	ld	a5,0(s2)
    800035ac:	00241713          	slli	a4,s0,0x2
    800035b0:	0004a683          	lw	a3,0(s1)
    800035b4:	00e787b3          	add	a5,a5,a4
    800035b8:	00140413          	addi	s0,s0,1
    800035bc:	0004071b          	sext.w	a4,s0
    800035c0:	00a7a023          	sw	a0,0(a5)
    800035c4:	fcd74ee3          	blt	a4,a3,800035a0 <bench_ssort_prepare+0x7c>
    800035c8:	02813083          	ld	ra,40(sp)
    800035cc:	02013403          	ld	s0,32(sp)
    800035d0:	01813483          	ld	s1,24(sp)
    800035d4:	01013903          	ld	s2,16(sp)
    800035d8:	00813983          	ld	s3,8(sp)
    800035dc:	03010113          	addi	sp,sp,48
    800035e0:	00008067          	ret

00000000800035e4 <bench_ssort_run>:
    800035e4:	01a00693          	li	a3,26
    800035e8:	00003617          	auipc	a2,0x3
    800035ec:	07062603          	lw	a2,112(a2) # 80006658 <_ZL1N>
    800035f0:	00003597          	auipc	a1,0x3
    800035f4:	0585b583          	ld	a1,88(a1) # 80006648 <_ZL2sa>
    800035f8:	00003517          	auipc	a0,0x3
    800035fc:	05853503          	ld	a0,88(a0) # 80006650 <_ZL1s>
    80003600:	9b5ff06f          	j	80002fb4 <_Z11suffixArrayPiS_ii>

0000000080003604 <bench_ssort_validate>:
    80003604:	00003597          	auipc	a1,0x3
    80003608:	0545a583          	lw	a1,84(a1) # 80006658 <_ZL1N>
    8000360c:	00003517          	auipc	a0,0x3
    80003610:	03c53503          	ld	a0,60(a0) # 80006648 <_ZL2sa>
    80003614:	00259593          	slli	a1,a1,0x2
    80003618:	ff010113          	addi	sp,sp,-16
    8000361c:	00b505b3          	add	a1,a0,a1
    80003620:	00113423          	sd	ra,8(sp)
    80003624:	c79fe0ef          	jal	ra,8000229c <checksum>
    80003628:	00003797          	auipc	a5,0x3
    8000362c:	0907b783          	ld	a5,144(a5) # 800066b8 <setting>
    80003630:	0187a783          	lw	a5,24(a5)
    80003634:	00813083          	ld	ra,8(sp)
    80003638:	0005051b          	sext.w	a0,a0
    8000363c:	40a78533          	sub	a0,a5,a0
    80003640:	00153513          	seqz	a0,a0
    80003644:	01010113          	addi	sp,sp,16
    80003648:	00008067          	ret

000000008000364c <bench_bf_prepare>:
    8000364c:	00003797          	auipc	a5,0x3
    80003650:	06c7b783          	ld	a5,108(a5) # 800066b8 <setting>
    80003654:	0007a783          	lw	a5,0(a5)
    80003658:	fd010113          	addi	sp,sp,-48
    8000365c:	00913c23          	sd	s1,24(sp)
    80003660:	00004537          	lui	a0,0x4
    80003664:	00003497          	auipc	s1,0x3
    80003668:	03c48493          	addi	s1,s1,60 # 800066a0 <ARR_SIZE>
    8000366c:	02113423          	sd	ra,40(sp)
    80003670:	00f4a023          	sw	a5,0(s1)
    80003674:	01413023          	sd	s4,0(sp)
    80003678:	00003797          	auipc	a5,0x3
    8000367c:	0007a823          	sw	zero,16(a5) # 80006688 <SP>
    80003680:	02813023          	sd	s0,32(sp)
    80003684:	01213823          	sd	s2,16(sp)
    80003688:	01313423          	sd	s3,8(sp)
    8000368c:	b29fe0ef          	jal	ra,800021b4 <bench_alloc>
    80003690:	00050793          	mv	a5,a0
    80003694:	40000513          	li	a0,1024
    80003698:	00003717          	auipc	a4,0x3
    8000369c:	00f73023          	sd	a5,0(a4) # 80006698 <PROGRAM>
    800036a0:	b15fe0ef          	jal	ra,800021b4 <bench_alloc>
    800036a4:	00050793          	mv	a5,a0
    800036a8:	00002537          	lui	a0,0x2
    800036ac:	00003717          	auipc	a4,0x3
    800036b0:	fef73223          	sd	a5,-28(a4) # 80006690 <STACK>
    800036b4:	b01fe0ef          	jal	ra,800021b4 <bench_alloc>
    800036b8:	0004a783          	lw	a5,0(s1)
    800036bc:	00003717          	auipc	a4,0x3
    800036c0:	faa73a23          	sd	a0,-76(a4) # 80006670 <data>
    800036c4:	00003a17          	auipc	s4,0x3
    800036c8:	fb4a0a13          	addi	s4,s4,-76 # 80006678 <input>
    800036cc:	0017851b          	addiw	a0,a5,1
    800036d0:	00002797          	auipc	a5,0x2
    800036d4:	51878793          	addi	a5,a5,1304 # 80005be8 <CSWTCH.22+0x28>
    800036d8:	00003717          	auipc	a4,0x3
    800036dc:	faf73423          	sd	a5,-88(a4) # 80006680 <code>
    800036e0:	ad5fe0ef          	jal	ra,800021b4 <bench_alloc>
    800036e4:	00050793          	mv	a5,a0
    800036e8:	00001537          	lui	a0,0x1
    800036ec:	00fa3023          	sd	a5,0(s4)
    800036f0:	ac5fe0ef          	jal	ra,800021b4 <bench_alloc>
    800036f4:	00050793          	mv	a5,a0
    800036f8:	00100513          	li	a0,1
    800036fc:	00003717          	auipc	a4,0x3
    80003700:	f6f73623          	sd	a5,-148(a4) # 80006668 <output>
    80003704:	00003797          	auipc	a5,0x3
    80003708:	f407ae23          	sw	zero,-164(a5) # 80006660 <noutput>
    8000370c:	b49fe0ef          	jal	ra,80002254 <bench_srand>
    80003710:	0004a783          	lw	a5,0(s1)
    80003714:	04f05463          	blez	a5,8000375c <bench_bf_prepare+0x110>
    80003718:	00000413          	li	s0,0
    8000371c:	00002997          	auipc	s3,0x2
    80003720:	58498993          	addi	s3,s3,1412 # 80005ca0 <CSWTCH.22+0xe0>
    80003724:	03e00913          	li	s2,62
    80003728:	b41fe0ef          	jal	ra,80002268 <bench_rand>
    8000372c:	0325753b          	remuw	a0,a0,s2
    80003730:	000a3783          	ld	a5,0(s4)
    80003734:	0004a683          	lw	a3,0(s1)
    80003738:	008787b3          	add	a5,a5,s0
    8000373c:	00140413          	addi	s0,s0,1
    80003740:	0004071b          	sext.w	a4,s0
    80003744:	02051513          	slli	a0,a0,0x20
    80003748:	02055513          	srli	a0,a0,0x20
    8000374c:	00a98533          	add	a0,s3,a0
    80003750:	00054603          	lbu	a2,0(a0) # 1000 <_start-0x7ffff000>
    80003754:	00c78023          	sb	a2,0(a5)
    80003758:	fcd748e3          	blt	a4,a3,80003728 <bench_bf_prepare+0xdc>
    8000375c:	02813083          	ld	ra,40(sp)
    80003760:	02013403          	ld	s0,32(sp)
    80003764:	01813483          	ld	s1,24(sp)
    80003768:	01013903          	ld	s2,16(sp)
    8000376c:	00813983          	ld	s3,8(sp)
    80003770:	00013a03          	ld	s4,0(sp)
    80003774:	03010113          	addi	sp,sp,48
    80003778:	00008067          	ret

000000008000377c <bench_bf_run>:
    8000377c:	00003317          	auipc	t1,0x3
    80003780:	f0430313          	addi	t1,t1,-252 # 80006680 <code>
    80003784:	00033583          	ld	a1,0(t1)
    80003788:	fc010113          	addi	sp,sp,-64
    8000378c:	02813c23          	sd	s0,56(sp)
    80003790:	02913823          	sd	s1,48(sp)
    80003794:	03213423          	sd	s2,40(sp)
    80003798:	03313023          	sd	s3,32(sp)
    8000379c:	01413c23          	sd	s4,24(sp)
    800037a0:	01513823          	sd	s5,16(sp)
    800037a4:	01613423          	sd	s6,8(sp)
    800037a8:	01713023          	sd	s7,0(sp)
    800037ac:	0005c703          	lbu	a4,0(a1)
    800037b0:	00003517          	auipc	a0,0x3
    800037b4:	ed850513          	addi	a0,a0,-296 # 80006688 <SP>
    800037b8:	00052603          	lw	a2,0(a0)
    800037bc:	00003697          	auipc	a3,0x3
    800037c0:	edc6b683          	ld	a3,-292(a3) # 80006698 <PROGRAM>
    800037c4:	38070463          	beqz	a4,80003b4c <bench_bf_run+0x3d0>
    800037c8:	00003897          	auipc	a7,0x3
    800037cc:	ec88b883          	ld	a7,-312(a7) # 80006690 <STACK>
    800037d0:	00158593          	addi	a1,a1,1
    800037d4:	00000b13          	li	s6,0
    800037d8:	00000a93          	li	s5,0
    800037dc:	00000793          	li	a5,0
    800037e0:	03200a13          	li	s4,50
    800037e4:	00002817          	auipc	a6,0x2
    800037e8:	4fc80813          	addi	a6,a6,1276 # 80005ce0 <CSWTCH.22+0x120>
    800037ec:	000019b7          	lui	s3,0x1
    800037f0:	00800913          	li	s2,8
    800037f4:	00700493          	li	s1,7
    800037f8:	20000413          	li	s0,512
    800037fc:	00600393          	li	t2,6
    80003800:	00500293          	li	t0,5
    80003804:	00400f93          	li	t6,4
    80003808:	00300f13          	li	t5,3
    8000380c:	00200e93          	li	t4,2
    80003810:	00100e13          	li	t3,1
    80003814:	fd57071b          	addiw	a4,a4,-43
    80003818:	0ff77713          	andi	a4,a4,255
    8000381c:	fff58b93          	addi	s7,a1,-1
    80003820:	00ea6c63          	bltu	s4,a4,80003838 <bench_bf_run+0xbc>
    80003824:	00271713          	slli	a4,a4,0x2
    80003828:	01070733          	add	a4,a4,a6
    8000382c:	00072703          	lw	a4,0(a4)
    80003830:	01070733          	add	a4,a4,a6
    80003834:	00070067          	jr	a4
    80003838:	0005c703          	lbu	a4,0(a1)
    8000383c:	10070a63          	beqz	a4,80003950 <bench_bf_run+0x1d4>
    80003840:	00158593          	addi	a1,a1,1
    80003844:	00100b13          	li	s6,1
    80003848:	fcdff06f          	j	80003814 <bench_bf_run+0x98>
    8000384c:	2c060e63          	beqz	a2,80003b28 <bench_bf_run+0x3ac>
    80003850:	fff6061b          	addiw	a2,a2,-1
    80003854:	02061713          	slli	a4,a2,0x20
    80003858:	01f75713          	srli	a4,a4,0x1f
    8000385c:	00e88733          	add	a4,a7,a4
    80003860:	00075b03          	lhu	s6,0(a4)
    80003864:	00279713          	slli	a4,a5,0x2
    80003868:	00e68733          	add	a4,a3,a4
    8000386c:	002b1a93          	slli	s5,s6,0x2
    80003870:	01671123          	sh	s6,2(a4)
    80003874:	01271023          	sh	s2,0(a4)
    80003878:	01568733          	add	a4,a3,s5
    8000387c:	00f71123          	sh	a5,2(a4)
    80003880:	00100a93          	li	s5,1
    80003884:	0005c703          	lbu	a4,0(a1)
    80003888:	0017879b          	addiw	a5,a5,1
    8000388c:	03079793          	slli	a5,a5,0x30
    80003890:	0307d793          	srli	a5,a5,0x30
    80003894:	0a070e63          	beqz	a4,80003950 <bench_bf_run+0x1d4>
    80003898:	fb3794e3          	bne	a5,s3,80003840 <bench_bf_run+0xc4>
    8000389c:	000a8463          	beqz	s5,800038a4 <bench_bf_run+0x128>
    800038a0:	00c52023          	sw	a2,0(a0)
    800038a4:	00b33023          	sd	a1,0(t1)
    800038a8:	0006d703          	lhu	a4,0(a3)
    800038ac:	16070c63          	beqz	a4,80003a24 <bench_bf_run+0x2a8>
    800038b0:	00003e97          	auipc	t4,0x3
    800038b4:	dc8e8e93          	addi	t4,t4,-568 # 80006678 <input>
    800038b8:	00003e17          	auipc	t3,0x3
    800038bc:	da8e0e13          	addi	t3,t3,-600 # 80006660 <noutput>
    800038c0:	000eb803          	ld	a6,0(t4)
    800038c4:	000e2503          	lw	a0,0(t3)
    800038c8:	00003597          	auipc	a1,0x3
    800038cc:	da85b583          	ld	a1,-600(a1) # 80006670 <data>
    800038d0:	00003397          	auipc	t2,0x3
    800038d4:	d983b383          	ld	t2,-616(t2) # 80006668 <output>
    800038d8:	00068793          	mv	a5,a3
    800038dc:	00000f13          	li	t5,0
    800038e0:	00000313          	li	t1,0
    800038e4:	00000413          	li	s0,0
    800038e8:	00000613          	li	a2,0
    800038ec:	00800293          	li	t0,8
    800038f0:	00002897          	auipc	a7,0x2
    800038f4:	4bc88893          	addi	a7,a7,1212 # 80005dac <CSWTCH.22+0x1ec>
    800038f8:	00001fb7          	lui	t6,0x1
    800038fc:	10e2ec63          	bltu	t0,a4,80003a14 <bench_bf_run+0x298>
    80003900:	00271713          	slli	a4,a4,0x2
    80003904:	01170733          	add	a4,a4,a7
    80003908:	00072703          	lw	a4,0(a4)
    8000390c:	01170733          	add	a4,a4,a7
    80003910:	00070067          	jr	a4
    80003914:	00279713          	slli	a4,a5,0x2
    80003918:	00e68733          	add	a4,a3,a4
    8000391c:	00971023          	sh	s1,0(a4)
    80003920:	22860063          	beq	a2,s0,80003b40 <bench_bf_run+0x3c4>
    80003924:	02061713          	slli	a4,a2,0x20
    80003928:	01f75713          	srli	a4,a4,0x1f
    8000392c:	00e88733          	add	a4,a7,a4
    80003930:	00f71023          	sh	a5,0(a4)
    80003934:	0005c703          	lbu	a4,0(a1)
    80003938:	0017879b          	addiw	a5,a5,1
    8000393c:	03079793          	slli	a5,a5,0x30
    80003940:	0016061b          	addiw	a2,a2,1
    80003944:	00100a93          	li	s5,1
    80003948:	0307d793          	srli	a5,a5,0x30
    8000394c:	f40716e3          	bnez	a4,80003898 <bench_bf_run+0x11c>
    80003950:	000a8463          	beqz	s5,80003958 <bench_bf_run+0x1dc>
    80003954:	00c52023          	sw	a2,0(a0)
    80003958:	00052703          	lw	a4,0(a0)
    8000395c:	00b33023          	sd	a1,0(t1)
    80003960:	f40714e3          	bnez	a4,800038a8 <bench_bf_run+0x12c>
    80003964:	00001737          	lui	a4,0x1
    80003968:	f4e780e3          	beq	a5,a4,800038a8 <bench_bf_run+0x12c>
    8000396c:	00279793          	slli	a5,a5,0x2
    80003970:	00f687b3          	add	a5,a3,a5
    80003974:	00079023          	sh	zero,0(a5)
    80003978:	0006d703          	lhu	a4,0(a3)
    8000397c:	f2071ae3          	bnez	a4,800038b0 <bench_bf_run+0x134>
    80003980:	0a40006f          	j	80003a24 <bench_bf_run+0x2a8>
    80003984:	00279713          	slli	a4,a5,0x2
    80003988:	00e68733          	add	a4,a3,a4
    8000398c:	01c71023          	sh	t3,0(a4) # 1000 <_start-0x7ffff000>
    80003990:	ef5ff06f          	j	80003884 <bench_bf_run+0x108>
    80003994:	00279713          	slli	a4,a5,0x2
    80003998:	00e68733          	add	a4,a3,a4
    8000399c:	01d71023          	sh	t4,0(a4)
    800039a0:	ee5ff06f          	j	80003884 <bench_bf_run+0x108>
    800039a4:	00279713          	slli	a4,a5,0x2
    800039a8:	00e68733          	add	a4,a3,a4
    800039ac:	00571023          	sh	t0,0(a4)
    800039b0:	ed5ff06f          	j	80003884 <bench_bf_run+0x108>
    800039b4:	00279713          	slli	a4,a5,0x2
    800039b8:	00e68733          	add	a4,a3,a4
    800039bc:	01f71023          	sh	t6,0(a4)
    800039c0:	ec5ff06f          	j	80003884 <bench_bf_run+0x108>
    800039c4:	00279713          	slli	a4,a5,0x2
    800039c8:	00e68733          	add	a4,a3,a4
    800039cc:	00771023          	sh	t2,0(a4)
    800039d0:	eb5ff06f          	j	80003884 <bench_bf_run+0x108>
    800039d4:	00279713          	slli	a4,a5,0x2
    800039d8:	00e68733          	add	a4,a3,a4
    800039dc:	01e71023          	sh	t5,0(a4)
    800039e0:	ea5ff06f          	j	80003884 <bench_bf_run+0x108>
    800039e4:	02061713          	slli	a4,a2,0x20
    800039e8:	01f75713          	srli	a4,a4,0x1f
    800039ec:	00e58733          	add	a4,a1,a4
    800039f0:	00075703          	lhu	a4,0(a4)
    800039f4:	08070863          	beqz	a4,80003a84 <bench_bf_run+0x308>
    800039f8:	0027d403          	lhu	s0,2(a5)
    800039fc:	0014041b          	addiw	s0,s0,1
    80003a00:	02041793          	slli	a5,s0,0x20
    80003a04:	01e7d793          	srli	a5,a5,0x1e
    80003a08:	00f687b3          	add	a5,a3,a5
    80003a0c:	0007d703          	lhu	a4,0(a5)
    80003a10:	ee0716e3          	bnez	a4,800038fc <bench_bf_run+0x180>
    80003a14:	00030463          	beqz	t1,80003a1c <bench_bf_run+0x2a0>
    80003a18:	00ae2023          	sw	a0,0(t3)
    80003a1c:	000f0463          	beqz	t5,80003a24 <bench_bf_run+0x2a8>
    80003a20:	010eb023          	sd	a6,0(t4)
    80003a24:	03813403          	ld	s0,56(sp)
    80003a28:	03013483          	ld	s1,48(sp)
    80003a2c:	02813903          	ld	s2,40(sp)
    80003a30:	02013983          	ld	s3,32(sp)
    80003a34:	01813a03          	ld	s4,24(sp)
    80003a38:	01013a83          	ld	s5,16(sp)
    80003a3c:	00813b03          	ld	s6,8(sp)
    80003a40:	00013b83          	ld	s7,0(sp)
    80003a44:	04010113          	addi	sp,sp,64
    80003a48:	00008067          	ret
    80003a4c:	02061713          	slli	a4,a2,0x20
    80003a50:	01f75713          	srli	a4,a4,0x1f
    80003a54:	00e58733          	add	a4,a1,a4
    80003a58:	00075703          	lhu	a4,0(a4)
    80003a5c:	02071463          	bnez	a4,80003a84 <bench_bf_run+0x308>
    80003a60:	0027d403          	lhu	s0,2(a5)
    80003a64:	f99ff06f          	j	800039fc <bench_bf_run+0x280>
    80003a68:	00084703          	lbu	a4,0(a6)
    80003a6c:	02061793          	slli	a5,a2,0x20
    80003a70:	01f7d793          	srli	a5,a5,0x1f
    80003a74:	00f587b3          	add	a5,a1,a5
    80003a78:	00e79023          	sh	a4,0(a5)
    80003a7c:	00180813          	addi	a6,a6,1
    80003a80:	00100f13          	li	t5,1
    80003a84:	0014041b          	addiw	s0,s0,1
    80003a88:	02041793          	slli	a5,s0,0x20
    80003a8c:	01e7d793          	srli	a5,a5,0x1e
    80003a90:	00f687b3          	add	a5,a3,a5
    80003a94:	0007d703          	lhu	a4,0(a5)
    80003a98:	e60712e3          	bnez	a4,800038fc <bench_bf_run+0x180>
    80003a9c:	f79ff06f          	j	80003a14 <bench_bf_run+0x298>
    80003aa0:	02061793          	slli	a5,a2,0x20
    80003aa4:	01f7d793          	srli	a5,a5,0x1f
    80003aa8:	00f587b3          	add	a5,a1,a5
    80003aac:	0007d703          	lhu	a4,0(a5)
    80003ab0:	fff7071b          	addiw	a4,a4,-1
    80003ab4:	00e79023          	sh	a4,0(a5)
    80003ab8:	fcdff06f          	j	80003a84 <bench_bf_run+0x308>
    80003abc:	02061793          	slli	a5,a2,0x20
    80003ac0:	01f7d793          	srli	a5,a5,0x1f
    80003ac4:	00f587b3          	add	a5,a1,a5
    80003ac8:	0007d703          	lhu	a4,0(a5)
    80003acc:	00a387b3          	add	a5,t2,a0
    80003ad0:	00100313          	li	t1,1
    80003ad4:	00e78023          	sb	a4,0(a5)
    80003ad8:	0015051b          	addiw	a0,a0,1
    80003adc:	fa9ff06f          	j	80003a84 <bench_bf_run+0x308>
    80003ae0:	02061793          	slli	a5,a2,0x20
    80003ae4:	01f7d793          	srli	a5,a5,0x1f
    80003ae8:	00f587b3          	add	a5,a1,a5
    80003aec:	0007d703          	lhu	a4,0(a5)
    80003af0:	0017071b          	addiw	a4,a4,1
    80003af4:	00e79023          	sh	a4,0(a5)
    80003af8:	f8dff06f          	j	80003a84 <bench_bf_run+0x308>
    80003afc:	fff6061b          	addiw	a2,a2,-1
    80003b00:	0014041b          	addiw	s0,s0,1
    80003b04:	02041793          	slli	a5,s0,0x20
    80003b08:	01e7d793          	srli	a5,a5,0x1e
    80003b0c:	00f687b3          	add	a5,a3,a5
    80003b10:	0007d703          	lhu	a4,0(a5)
    80003b14:	f00700e3          	beqz	a4,80003a14 <bench_bf_run+0x298>
    80003b18:	dff662e3          	bltu	a2,t6,800038fc <bench_bf_run+0x180>
    80003b1c:	ef9ff06f          	j	80003a14 <bench_bf_run+0x298>
    80003b20:	0016061b          	addiw	a2,a2,1
    80003b24:	fddff06f          	j	80003b00 <bench_bf_run+0x384>
    80003b28:	000a8663          	beqz	s5,80003b34 <bench_bf_run+0x3b8>
    80003b2c:	00003797          	auipc	a5,0x3
    80003b30:	b407ae23          	sw	zero,-1188(a5) # 80006688 <SP>
    80003b34:	d60b0ae3          	beqz	s6,800038a8 <bench_bf_run+0x12c>
    80003b38:	01733023          	sd	s7,0(t1)
    80003b3c:	d6dff06f          	j	800038a8 <bench_bf_run+0x12c>
    80003b40:	fe0a8ae3          	beqz	s5,80003b34 <bench_bf_run+0x3b8>
    80003b44:	00c52023          	sw	a2,0(a0)
    80003b48:	fedff06f          	j	80003b34 <bench_bf_run+0x3b8>
    80003b4c:	00068793          	mv	a5,a3
    80003b50:	e20602e3          	beqz	a2,80003974 <bench_bf_run+0x1f8>
    80003b54:	d55ff06f          	j	800038a8 <bench_bf_run+0x12c>

0000000080003b58 <bench_bf_validate>:
    80003b58:	ff010113          	addi	sp,sp,-16
    80003b5c:	00813023          	sd	s0,0(sp)
    80003b60:	00003417          	auipc	s0,0x3
    80003b64:	b0040413          	addi	s0,s0,-1280 # 80006660 <noutput>
    80003b68:	00042583          	lw	a1,0(s0)
    80003b6c:	00003517          	auipc	a0,0x3
    80003b70:	afc53503          	ld	a0,-1284(a0) # 80006668 <output>
    80003b74:	00113423          	sd	ra,8(sp)
    80003b78:	00b505b3          	add	a1,a0,a1
    80003b7c:	f20fe0ef          	jal	ra,8000229c <checksum>
    80003b80:	00042683          	lw	a3,0(s0)
    80003b84:	00003717          	auipc	a4,0x3
    80003b88:	b1c72703          	lw	a4,-1252(a4) # 800066a0 <ARR_SIZE>
    80003b8c:	00e68c63          	beq	a3,a4,80003ba4 <bench_bf_validate+0x4c>
    80003b90:	00813083          	ld	ra,8(sp)
    80003b94:	00013403          	ld	s0,0(sp)
    80003b98:	00000513          	li	a0,0
    80003b9c:	01010113          	addi	sp,sp,16
    80003ba0:	00008067          	ret
    80003ba4:	00003717          	auipc	a4,0x3
    80003ba8:	b1473703          	ld	a4,-1260(a4) # 800066b8 <setting>
    80003bac:	0005079b          	sext.w	a5,a0
    80003bb0:	01872503          	lw	a0,24(a4)
    80003bb4:	00813083          	ld	ra,8(sp)
    80003bb8:	00013403          	ld	s0,0(sp)
    80003bbc:	40f50533          	sub	a0,a0,a5
    80003bc0:	00153513          	seqz	a0,a0
    80003bc4:	01010113          	addi	sp,sp,16
    80003bc8:	00008067          	ret

Disassembly of section .text._ZN5Dinic3DFSEii:

0000000080003bcc <_ZN5Dinic3DFSEii>:
    80003bcc:	00c52783          	lw	a5,12(a0)
    80003bd0:	fc010113          	addi	sp,sp,-64
    80003bd4:	01413823          	sd	s4,16(sp)
    80003bd8:	01513423          	sd	s5,8(sp)
    80003bdc:	02113c23          	sd	ra,56(sp)
    80003be0:	02813823          	sd	s0,48(sp)
    80003be4:	02913423          	sd	s1,40(sp)
    80003be8:	03213023          	sd	s2,32(sp)
    80003bec:	01313c23          	sd	s3,24(sp)
    80003bf0:	01613023          	sd	s6,0(sp)
    80003bf4:	00060a13          	mv	s4,a2
    80003bf8:	00060a93          	mv	s5,a2
    80003bfc:	0cb78663          	beq	a5,a1,80003cc8 <_ZN5Dinic3DFSEii+0xfc>
    80003c00:	00000a93          	li	s5,0
    80003c04:	0c060263          	beqz	a2,80003cc8 <_ZN5Dinic3DFSEii+0xfc>
    80003c08:	03053783          	ld	a5,48(a0)
    80003c0c:	00259993          	slli	s3,a1,0x2
    80003c10:	fff00713          	li	a4,-1
    80003c14:	013787b3          	add	a5,a5,s3
    80003c18:	0007a403          	lw	s0,0(a5)
    80003c1c:	00050913          	mv	s2,a0
    80003c20:	0ae40463          	beq	s0,a4,80003cc8 <_ZN5Dinic3DFSEii+0xfc>
    80003c24:	fff00b13          	li	s6,-1
    80003c28:	0180006f          	j	80003c40 <_ZN5Dinic3DFSEii+0x74>
    80003c2c:	02093783          	ld	a5,32(s2)
    80003c30:	00241413          	slli	s0,s0,0x2
    80003c34:	00878433          	add	s0,a5,s0
    80003c38:	00042403          	lw	s0,0(s0)
    80003c3c:	09640663          	beq	s0,s6,80003cc8 <_ZN5Dinic3DFSEii+0xfc>
    80003c40:	01093703          	ld	a4,16(s2)
    80003c44:	00441493          	slli	s1,s0,0x4
    80003c48:	02893783          	ld	a5,40(s2)
    80003c4c:	009704b3          	add	s1,a4,s1
    80003c50:	0044a583          	lw	a1,4(s1)
    80003c54:	01378733          	add	a4,a5,s3
    80003c58:	00072703          	lw	a4,0(a4)
    80003c5c:	00259693          	slli	a3,a1,0x2
    80003c60:	00d787b3          	add	a5,a5,a3
    80003c64:	0007a683          	lw	a3,0(a5)
    80003c68:	0017079b          	addiw	a5,a4,1
    80003c6c:	fcd790e3          	bne	a5,a3,80003c2c <_ZN5Dinic3DFSEii+0x60>
    80003c70:	0084a603          	lw	a2,8(s1)
    80003c74:	00c4a783          	lw	a5,12(s1)
    80003c78:	00090513          	mv	a0,s2
    80003c7c:	40f607bb          	subw	a5,a2,a5
    80003c80:	00078613          	mv	a2,a5
    80003c84:	00fa5463          	bge	s4,a5,80003c8c <_ZN5Dinic3DFSEii+0xc0>
    80003c88:	000a061b          	sext.w	a2,s4
    80003c8c:	f41ff0ef          	jal	ra,80003bcc <_ZN5Dinic3DFSEii>
    80003c90:	00144793          	xori	a5,s0,1
    80003c94:	00479793          	slli	a5,a5,0x4
    80003c98:	f8a05ae3          	blez	a0,80003c2c <_ZN5Dinic3DFSEii+0x60>
    80003c9c:	00c4a683          	lw	a3,12(s1)
    80003ca0:	01093703          	ld	a4,16(s2)
    80003ca4:	40aa0a3b          	subw	s4,s4,a0
    80003ca8:	00a686bb          	addw	a3,a3,a0
    80003cac:	00d4a623          	sw	a3,12(s1)
    80003cb0:	00f707b3          	add	a5,a4,a5
    80003cb4:	00c7a703          	lw	a4,12(a5)
    80003cb8:	01550abb          	addw	s5,a0,s5
    80003cbc:	40a7053b          	subw	a0,a4,a0
    80003cc0:	00a7a623          	sw	a0,12(a5)
    80003cc4:	f60a14e3          	bnez	s4,80003c2c <_ZN5Dinic3DFSEii+0x60>
    80003cc8:	03813083          	ld	ra,56(sp)
    80003ccc:	03013403          	ld	s0,48(sp)
    80003cd0:	02813483          	ld	s1,40(sp)
    80003cd4:	02013903          	ld	s2,32(sp)
    80003cd8:	01813983          	ld	s3,24(sp)
    80003cdc:	01013a03          	ld	s4,16(sp)
    80003ce0:	00013b03          	ld	s6,0(sp)
    80003ce4:	000a8513          	mv	a0,s5
    80003ce8:	00813a83          	ld	s5,8(sp)
    80003cec:	04010113          	addi	sp,sp,64
    80003cf0:	00008067          	ret

Disassembly of section .text._ZN8N_puzzleILi4EEC2Ev:

0000000080003cf4 <_ZN8N_puzzleILi4EEC1Ev>:
    80003cf4:	f6010113          	addi	sp,sp,-160
    80003cf8:	05813823          	sd	s8,80(sp)
    80003cfc:	08113c23          	sd	ra,152(sp)
    80003d00:	08813823          	sd	s0,144(sp)
    80003d04:	08913423          	sd	s1,136(sp)
    80003d08:	09213023          	sd	s2,128(sp)
    80003d0c:	07313c23          	sd	s3,120(sp)
    80003d10:	07413823          	sd	s4,112(sp)
    80003d14:	07513423          	sd	s5,104(sp)
    80003d18:	07613023          	sd	s6,96(sp)
    80003d1c:	05713c23          	sd	s7,88(sp)
    80003d20:	05913423          	sd	s9,72(sp)
    80003d24:	00100793          	li	a5,1
    80003d28:	00f50023          	sb	a5,0(a0)
    80003d2c:	00050c13          	mv	s8,a0
    80003d30:	000501a3          	sb	zero,3(a0)
    80003d34:	00010713          	mv	a4,sp
    80003d38:	00000793          	li	a5,0
    80003d3c:	01000693          	li	a3,16
    80003d40:	00f72023          	sw	a5,0(a4)
    80003d44:	0017879b          	addiw	a5,a5,1
    80003d48:	00470713          	addi	a4,a4,4
    80003d4c:	fed79ae3          	bne	a5,a3,80003d40 <_ZN8N_puzzleILi4EEC1Ev+0x4c>
    80003d50:	03c10a13          	addi	s4,sp,60
    80003d54:	000c0413          	mv	s0,s8
    80003d58:	00000993          	li	s3,0
    80003d5c:	00000c93          	li	s9,0
    80003d60:	00400913          	li	s2,4
    80003d64:	ff000a93          	li	s5,-16
    80003d68:	000a0b93          	mv	s7,s4
    80003d6c:	00000b13          	li	s6,0
    80003d70:	0109849b          	addiw	s1,s3,16
    80003d74:	cf4fe0ef          	jal	ra,80002268 <bench_rand>
    80003d78:	4164863b          	subw	a2,s1,s6
    80003d7c:	02c5763b          	remuw	a2,a0,a2
    80003d80:	04010793          	addi	a5,sp,64
    80003d84:	000b071b          	sext.w	a4,s6
    80003d88:	01640833          	add	a6,s0,s6
    80003d8c:	00261613          	slli	a2,a2,0x2
    80003d90:	00c787b3          	add	a5,a5,a2
    80003d94:	fc07a503          	lw	a0,-64(a5)
    80003d98:	fff5079b          	addiw	a5,a0,-1
    80003d9c:	41f7d69b          	sraiw	a3,a5,0x1f
    80003da0:	01e6d59b          	srliw	a1,a3,0x1e
    80003da4:	00f587bb          	addw	a5,a1,a5
    80003da8:	0037f693          	andi	a3,a5,3
    80003dac:	40b686bb          	subw	a3,a3,a1
    80003db0:	4027d79b          	sraiw	a5,a5,0x2
    80003db4:	419787bb          	subw	a5,a5,s9
    80003db8:	40e6873b          	subw	a4,a3,a4
    80003dbc:	41f7d59b          	sraiw	a1,a5,0x1f
    80003dc0:	41f7569b          	sraiw	a3,a4,0x1f
    80003dc4:	00f5c7b3          	xor	a5,a1,a5
    80003dc8:	00e6c733          	xor	a4,a3,a4
    80003dcc:	40b787bb          	subw	a5,a5,a1
    80003dd0:	40d7073b          	subw	a4,a4,a3
    80003dd4:	00a80223          	sb	a0,4(a6)
    80003dd8:	00e787bb          	addw	a5,a5,a4
    80003ddc:	0a051463          	bnez	a0,80003e84 <_ZN8N_puzzleILi4EEC1Ev+0x190>
    80003de0:	019c00a3          	sb	s9,1(s8)
    80003de4:	016c0123          	sb	s6,2(s8)
    80003de8:	000ba783          	lw	a5,0(s7)
    80003dec:	04010713          	addi	a4,sp,64
    80003df0:	00c70633          	add	a2,a4,a2
    80003df4:	001b0b13          	addi	s6,s6,1
    80003df8:	fcf62023          	sw	a5,-64(a2)
    80003dfc:	ffcb8b93          	addi	s7,s7,-4
    80003e00:	f72b1ae3          	bne	s6,s2,80003d74 <_ZN8N_puzzleILi4EEC1Ev+0x80>
    80003e04:	ffc9899b          	addiw	s3,s3,-4
    80003e08:	001c8c9b          	addiw	s9,s9,1
    80003e0c:	ff0a0a13          	addi	s4,s4,-16
    80003e10:	00440413          	addi	s0,s0,4
    80003e14:	f5599ae3          	bne	s3,s5,80003d68 <_ZN8N_puzzleILi4EEC1Ev+0x74>
    80003e18:	000c2a23          	sw	zero,20(s8)
    80003e1c:	004c0613          	addi	a2,s8,4
    80003e20:	014c0513          	addi	a0,s8,20
    80003e24:	00000713          	li	a4,0
    80003e28:	7b500593          	li	a1,1973
    80003e2c:	ffc60793          	addi	a5,a2,-4
    80003e30:	02e5873b          	mulw	a4,a1,a4
    80003e34:	00478683          	lb	a3,4(a5)
    80003e38:	00178793          	addi	a5,a5,1
    80003e3c:	00d7073b          	addw	a4,a4,a3
    80003e40:	fec798e3          	bne	a5,a2,80003e30 <_ZN8N_puzzleILi4EEC1Ev+0x13c>
    80003e44:	00478613          	addi	a2,a5,4
    80003e48:	fec512e3          	bne	a0,a2,80003e2c <_ZN8N_puzzleILi4EEC1Ev+0x138>
    80003e4c:	09813083          	ld	ra,152(sp)
    80003e50:	09013403          	ld	s0,144(sp)
    80003e54:	00ec2a23          	sw	a4,20(s8)
    80003e58:	08813483          	ld	s1,136(sp)
    80003e5c:	08013903          	ld	s2,128(sp)
    80003e60:	07813983          	ld	s3,120(sp)
    80003e64:	07013a03          	ld	s4,112(sp)
    80003e68:	06813a83          	ld	s5,104(sp)
    80003e6c:	06013b03          	ld	s6,96(sp)
    80003e70:	05813b83          	ld	s7,88(sp)
    80003e74:	05013c03          	ld	s8,80(sp)
    80003e78:	04813c83          	ld	s9,72(sp)
    80003e7c:	0a010113          	addi	sp,sp,160
    80003e80:	00008067          	ret
    80003e84:	003c4703          	lbu	a4,3(s8)
    80003e88:	00e787bb          	addw	a5,a5,a4
    80003e8c:	00fc01a3          	sb	a5,3(s8)
    80003e90:	f59ff06f          	j	80003de8 <_ZN8N_puzzleILi4EEC1Ev+0xf4>

Disassembly of section .text._ZN8N_puzzleILi4EEC2EPi:

0000000080003e94 <_ZN8N_puzzleILi4EEC1EPi>:
    80003e94:	fe010113          	addi	sp,sp,-32
    80003e98:	00100793          	li	a5,1
    80003e9c:	00010e93          	mv	t4,sp
    80003ea0:	00f50023          	sb	a5,0(a0)
    80003ea4:	00813c23          	sd	s0,24(sp)
    80003ea8:	000501a3          	sb	zero,3(a0)
    80003eac:	01010f13          	addi	t5,sp,16
    80003eb0:	000e8793          	mv	a5,t4
    80003eb4:	00078023          	sb	zero,0(a5)
    80003eb8:	00178793          	addi	a5,a5,1
    80003ebc:	ffe79ce3          	bne	a5,t5,80003eb4 <_ZN8N_puzzleILi4EEC1EPi+0x20>
    80003ec0:	00050f93          	mv	t6,a0
    80003ec4:	00000e13          	li	t3,0
    80003ec8:	00100393          	li	t2,1
    80003ecc:	00400293          	li	t0,4
    80003ed0:	00058313          	mv	t1,a1
    80003ed4:	00000613          	li	a2,0
    80003ed8:	00032803          	lw	a6,0(t1)
    80003edc:	0006071b          	sext.w	a4,a2
    80003ee0:	00cf8433          	add	s0,t6,a2
    80003ee4:	fff8079b          	addiw	a5,a6,-1
    80003ee8:	41f7d69b          	sraiw	a3,a5,0x1f
    80003eec:	01e6d89b          	srliw	a7,a3,0x1e
    80003ef0:	00f887bb          	addw	a5,a7,a5
    80003ef4:	0037f693          	andi	a3,a5,3
    80003ef8:	411686bb          	subw	a3,a3,a7
    80003efc:	40e6873b          	subw	a4,a3,a4
    80003f00:	41f7569b          	sraiw	a3,a4,0x1f
    80003f04:	4027d79b          	sraiw	a5,a5,0x2
    80003f08:	41c787bb          	subw	a5,a5,t3
    80003f0c:	00e6c733          	xor	a4,a3,a4
    80003f10:	41f7d89b          	sraiw	a7,a5,0x1f
    80003f14:	40d7073b          	subw	a4,a4,a3
    80003f18:	01010693          	addi	a3,sp,16
    80003f1c:	00f8c7b3          	xor	a5,a7,a5
    80003f20:	010686b3          	add	a3,a3,a6
    80003f24:	411787bb          	subw	a5,a5,a7
    80003f28:	01040223          	sb	a6,4(s0)
    80003f2c:	fe768823          	sb	t2,-16(a3)
    80003f30:	00e787bb          	addw	a5,a5,a4
    80003f34:	06081e63          	bnez	a6,80003fb0 <_ZN8N_puzzleILi4EEC1EPi+0x11c>
    80003f38:	01c500a3          	sb	t3,1(a0)
    80003f3c:	00c50123          	sb	a2,2(a0)
    80003f40:	00160613          	addi	a2,a2,1
    80003f44:	00430313          	addi	t1,t1,4
    80003f48:	f85618e3          	bne	a2,t0,80003ed8 <_ZN8N_puzzleILi4EEC1EPi+0x44>
    80003f4c:	001e0e1b          	addiw	t3,t3,1
    80003f50:	01058593          	addi	a1,a1,16
    80003f54:	004f8f93          	addi	t6,t6,4 # 1004 <_start-0x7fffeffc>
    80003f58:	f65e1ce3          	bne	t3,t0,80003ed0 <_ZN8N_puzzleILi4EEC1EPi+0x3c>
    80003f5c:	000ec783          	lbu	a5,0(t4)
    80003f60:	001e8e93          	addi	t4,t4,1
    80003f64:	04078e63          	beqz	a5,80003fc0 <_ZN8N_puzzleILi4EEC1EPi+0x12c>
    80003f68:	ffee9ae3          	bne	t4,t5,80003f5c <_ZN8N_puzzleILi4EEC1EPi+0xc8>
    80003f6c:	00052a23          	sw	zero,20(a0)
    80003f70:	00450613          	addi	a2,a0,4
    80003f74:	01450813          	addi	a6,a0,20
    80003f78:	00000713          	li	a4,0
    80003f7c:	7b500593          	li	a1,1973
    80003f80:	ffc60793          	addi	a5,a2,-4
    80003f84:	02e5873b          	mulw	a4,a1,a4
    80003f88:	00478683          	lb	a3,4(a5)
    80003f8c:	00178793          	addi	a5,a5,1
    80003f90:	00d7073b          	addw	a4,a4,a3
    80003f94:	fec798e3          	bne	a5,a2,80003f84 <_ZN8N_puzzleILi4EEC1EPi+0xf0>
    80003f98:	00478613          	addi	a2,a5,4
    80003f9c:	fec812e3          	bne	a6,a2,80003f80 <_ZN8N_puzzleILi4EEC1EPi+0xec>
    80003fa0:	01813403          	ld	s0,24(sp)
    80003fa4:	00e52a23          	sw	a4,20(a0)
    80003fa8:	02010113          	addi	sp,sp,32
    80003fac:	00008067          	ret
    80003fb0:	00354703          	lbu	a4,3(a0)
    80003fb4:	00e787bb          	addw	a5,a5,a4
    80003fb8:	00f501a3          	sb	a5,3(a0)
    80003fbc:	f85ff06f          	j	80003f40 <_ZN8N_puzzleILi4EEC1EPi+0xac>
    80003fc0:	01813403          	ld	s0,24(sp)
    80003fc4:	00050023          	sb	zero,0(a0)
    80003fc8:	02010113          	addi	sp,sp,32
    80003fcc:	00008067          	ret

Disassembly of section .text._ZNK8N_puzzleILi4EEeqERKS0_:

0000000080003fd0 <_ZNK8N_puzzleILi4EEeqERKS0_>:
    80003fd0:	00050713          	mv	a4,a0
    80003fd4:	00054503          	lbu	a0,0(a0)
    80003fd8:	04050863          	beqz	a0,80004028 <_ZNK8N_puzzleILi4EEeqERKS0_+0x58>
    80003fdc:	0005c503          	lbu	a0,0(a1)
    80003fe0:	04050463          	beqz	a0,80004028 <_ZNK8N_puzzleILi4EEeqERKS0_+0x58>
    80003fe4:	0145a683          	lw	a3,20(a1)
    80003fe8:	01472783          	lw	a5,20(a4)
    80003fec:	02f69c63          	bne	a3,a5,80004024 <_ZNK8N_puzzleILi4EEeqERKS0_+0x54>
    80003ff0:	00800693          	li	a3,8
    80003ff4:	01800893          	li	a7,24
    80003ff8:	ffc68793          	addi	a5,a3,-4
    80003ffc:	00f70833          	add	a6,a4,a5
    80004000:	00f58633          	add	a2,a1,a5
    80004004:	00084803          	lbu	a6,0(a6)
    80004008:	00064603          	lbu	a2,0(a2)
    8000400c:	00178793          	addi	a5,a5,1
    80004010:	00c81a63          	bne	a6,a2,80004024 <_ZNK8N_puzzleILi4EEeqERKS0_+0x54>
    80004014:	fed794e3          	bne	a5,a3,80003ffc <_ZNK8N_puzzleILi4EEeqERKS0_+0x2c>
    80004018:	00468693          	addi	a3,a3,4
    8000401c:	fd169ee3          	bne	a3,a7,80003ff8 <_ZNK8N_puzzleILi4EEeqERKS0_+0x28>
    80004020:	00008067          	ret
    80004024:	00000513          	li	a0,0
    80004028:	00008067          	ret

Disassembly of section .text._ZN14Updatable_heapI8N_puzzleILi4EEE12percolate_upEi:

000000008000402c <_ZN14Updatable_heapI8N_puzzleILi4EEE12percolate_upEi>:
    8000402c:	00100793          	li	a5,1
    80004030:	06f58463          	beq	a1,a5,80004098 <_ZN14Updatable_heapI8N_puzzleILi4EEE12percolate_upEi+0x6c>
    80004034:	01053883          	ld	a7,16(a0)
    80004038:	00359793          	slli	a5,a1,0x3
    8000403c:	00100e93          	li	t4,1
    80004040:	00f887b3          	add	a5,a7,a5
    80004044:	0007b603          	ld	a2,0(a5)
    80004048:	01c0006f          	j	80004064 <_ZN14Updatable_heapI8N_puzzleILi4EEE12percolate_upEi+0x38>
    8000404c:	0106b023          	sd	a6,0(a3)
    80004050:	00c73023          	sd	a2,0(a4)
    80004054:	0006b703          	ld	a4,0(a3)
    80004058:	02f62023          	sw	a5,32(a2)
    8000405c:	02a72023          	sw	a0,32(a4)
    80004060:	03d58c63          	beq	a1,t4,80004098 <_ZN14Updatable_heapI8N_puzzleILi4EEE12percolate_upEi+0x6c>
    80004064:	01f5d79b          	srliw	a5,a1,0x1f
    80004068:	00b787bb          	addw	a5,a5,a1
    8000406c:	4017d79b          	sraiw	a5,a5,0x1
    80004070:	00058513          	mv	a0,a1
    80004074:	0007859b          	sext.w	a1,a5
    80004078:	00359713          	slli	a4,a1,0x3
    8000407c:	00e88733          	add	a4,a7,a4
    80004080:	00073803          	ld	a6,0(a4)
    80004084:	02862303          	lw	t1,40(a2)
    80004088:	00351693          	slli	a3,a0,0x3
    8000408c:	02882e03          	lw	t3,40(a6)
    80004090:	00d886b3          	add	a3,a7,a3
    80004094:	fbc34ce3          	blt	t1,t3,8000404c <_ZN14Updatable_heapI8N_puzzleILi4EEE12percolate_upEi+0x20>
    80004098:	00008067          	ret

Disassembly of section .text._ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i:

000000008000409c <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i>:
    8000409c:	fd010113          	addi	sp,sp,-48
    800040a0:	01313423          	sd	s3,8(sp)
    800040a4:	00052983          	lw	s3,0(a0)
    800040a8:	00913c23          	sd	s1,24(sp)
    800040ac:	00058493          	mv	s1,a1
    800040b0:	00853583          	ld	a1,8(a0)
    800040b4:	02813023          	sd	s0,32(sp)
    800040b8:	01213823          	sd	s2,16(sp)
    800040bc:	00050413          	mv	s0,a0
    800040c0:	00060913          	mv	s2,a2
    800040c4:	00098513          	mv	a0,s3
    800040c8:	00048613          	mv	a2,s1
    800040cc:	02113423          	sd	ra,40(sp)
    800040d0:	d7cfd0ef          	jal	ra,8000164c <_ZNK14Updatable_heapI8N_puzzleILi4EEE7pointerERKS1_.isra.0>
    800040d4:	04050263          	beqz	a0,80004118 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x7c>
    800040d8:	02c54783          	lbu	a5,44(a0)
    800040dc:	02079063          	bnez	a5,800040fc <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x60>
    800040e0:	00054703          	lbu	a4,0(a0)
    800040e4:	04000793          	li	a5,64
    800040e8:	00070463          	beqz	a4,800040f0 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x54>
    800040ec:	00350783          	lb	a5,3(a0)
    800040f0:	02852703          	lw	a4,40(a0)
    800040f4:	00f907bb          	addw	a5,s2,a5
    800040f8:	16e7cc63          	blt	a5,a4,80004270 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x1d4>
    800040fc:	02813083          	ld	ra,40(sp)
    80004100:	02013403          	ld	s0,32(sp)
    80004104:	01813483          	ld	s1,24(sp)
    80004108:	01013903          	ld	s2,16(sp)
    8000410c:	00813983          	ld	s3,8(sp)
    80004110:	03010113          	addi	sp,sp,48
    80004114:	00008067          	ret
    80004118:	01842783          	lw	a5,24(s0)
    8000411c:	1af9c263          	blt	s3,a5,800042c0 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x224>
    80004120:	0017879b          	addiw	a5,a5,1
    80004124:	00f42c23          	sw	a5,24(s0)
    80004128:	03800513          	li	a0,56
    8000412c:	888fe0ef          	jal	ra,800021b4 <bench_alloc>
    80004130:	0004c803          	lbu	a6,0(s1)
    80004134:	00843683          	ld	a3,8(s0)
    80004138:	00000713          	li	a4,0
    8000413c:	12081663          	bnez	a6,80004268 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x1cc>
    80004140:	00042603          	lw	a2,0(s0)
    80004144:	01842883          	lw	a7,24(s0)
    80004148:	00448793          	addi	a5,s1,4
    8000414c:	fff6061b          	addiw	a2,a2,-1
    80004150:	00c77733          	and	a4,a4,a2
    80004154:	02071713          	slli	a4,a4,0x20
    80004158:	01d75713          	srli	a4,a4,0x1d
    8000415c:	00e68733          	add	a4,a3,a4
    80004160:	00073303          	ld	t1,0(a4)
    80004164:	01050023          	sb	a6,0(a0)
    80004168:	0014c683          	lbu	a3,1(s1)
    8000416c:	00450713          	addi	a4,a0,4
    80004170:	01448593          	addi	a1,s1,20
    80004174:	00d500a3          	sb	a3,1(a0)
    80004178:	0024c683          	lbu	a3,2(s1)
    8000417c:	00d50123          	sb	a3,2(a0)
    80004180:	00348603          	lb	a2,3(s1)
    80004184:	00c501a3          	sb	a2,3(a0)
    80004188:	0144a683          	lw	a3,20(s1)
    8000418c:	00d52a23          	sw	a3,20(a0)
    80004190:	00078683          	lb	a3,0(a5)
    80004194:	00478793          	addi	a5,a5,4
    80004198:	00470713          	addi	a4,a4,4
    8000419c:	fed70e23          	sb	a3,-4(a4)
    800041a0:	ffd78683          	lb	a3,-3(a5)
    800041a4:	fed70ea3          	sb	a3,-3(a4)
    800041a8:	ffe78683          	lb	a3,-2(a5)
    800041ac:	fed70f23          	sb	a3,-2(a4)
    800041b0:	fff78683          	lb	a3,-1(a5)
    800041b4:	fed70fa3          	sb	a3,-1(a4)
    800041b8:	fcb79ce3          	bne	a5,a1,80004190 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0xf4>
    800041bc:	00653c23          	sd	t1,24(a0)
    800041c0:	03152023          	sw	a7,32(a0)
    800041c4:	03252223          	sw	s2,36(a0)
    800041c8:	0c080863          	beqz	a6,80004298 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x1fc>
    800041cc:	02050623          	sb	zero,44(a0)
    800041d0:	0004c703          	lbu	a4,0(s1)
    800041d4:	0126093b          	addw	s2,a2,s2
    800041d8:	03252423          	sw	s2,40(a0)
    800041dc:	02053823          	sd	zero,48(a0)
    800041e0:	00843683          	ld	a3,8(s0)
    800041e4:	00000793          	li	a5,0
    800041e8:	00070463          	beqz	a4,800041f0 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x154>
    800041ec:	0144a783          	lw	a5,20(s1)
    800041f0:	00042603          	lw	a2,0(s0)
    800041f4:	01842583          	lw	a1,24(s0)
    800041f8:	01043703          	ld	a4,16(s0)
    800041fc:	fff6061b          	addiw	a2,a2,-1
    80004200:	00c7f7b3          	and	a5,a5,a2
    80004204:	02079793          	slli	a5,a5,0x20
    80004208:	01d7d793          	srli	a5,a5,0x1d
    8000420c:	00f687b3          	add	a5,a3,a5
    80004210:	00359693          	slli	a3,a1,0x3
    80004214:	00a7b023          	sd	a0,0(a5)
    80004218:	00d707b3          	add	a5,a4,a3
    8000421c:	00a7b023          	sd	a0,0(a5)
    80004220:	00040513          	mv	a0,s0
    80004224:	e09ff0ef          	jal	ra,8000402c <_ZN14Updatable_heapI8N_puzzleILi4EEE12percolate_upEi>
    80004228:	01842703          	lw	a4,24(s0)
    8000422c:	01c42783          	lw	a5,28(s0)
    80004230:	0007069b          	sext.w	a3,a4
    80004234:	0007861b          	sext.w	a2,a5
    80004238:	02d64263          	blt	a2,a3,8000425c <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x1c0>
    8000423c:	00f42e23          	sw	a5,28(s0)
    80004240:	02813083          	ld	ra,40(sp)
    80004244:	02013403          	ld	s0,32(sp)
    80004248:	01813483          	ld	s1,24(sp)
    8000424c:	01013903          	ld	s2,16(sp)
    80004250:	00813983          	ld	s3,8(sp)
    80004254:	03010113          	addi	sp,sp,48
    80004258:	00008067          	ret
    8000425c:	00070793          	mv	a5,a4
    80004260:	00f42e23          	sw	a5,28(s0)
    80004264:	fddff06f          	j	80004240 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x1a4>
    80004268:	0144a703          	lw	a4,20(s1)
    8000426c:	ed5ff06f          	j	80004140 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0xa4>
    80004270:	02052583          	lw	a1,32(a0)
    80004274:	02f52423          	sw	a5,40(a0)
    80004278:	00040513          	mv	a0,s0
    8000427c:	02013403          	ld	s0,32(sp)
    80004280:	02813083          	ld	ra,40(sp)
    80004284:	01813483          	ld	s1,24(sp)
    80004288:	01013903          	ld	s2,16(sp)
    8000428c:	00813983          	ld	s3,8(sp)
    80004290:	03010113          	addi	sp,sp,48
    80004294:	d99ff06f          	j	8000402c <_ZN14Updatable_heapI8N_puzzleILi4EEE12percolate_upEi>
    80004298:	02050623          	sb	zero,44(a0)
    8000429c:	0004c703          	lbu	a4,0(s1)
    800042a0:	04000613          	li	a2,64
    800042a4:	0126093b          	addw	s2,a2,s2
    800042a8:	03252423          	sw	s2,40(a0)
    800042ac:	02053823          	sd	zero,48(a0)
    800042b0:	00843683          	ld	a3,8(s0)
    800042b4:	00000793          	li	a5,0
    800042b8:	f2070ce3          	beqz	a4,800041f0 <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x154>
    800042bc:	f31ff06f          	j	800041ec <_ZN14Updatable_heapI8N_puzzleILi4EEE4pushERKS1_i+0x150>
    800042c0:	09800613          	li	a2,152
    800042c4:	00001597          	auipc	a1,0x1
    800042c8:	46458593          	addi	a1,a1,1124 # 80005728 <r+0x100>
    800042cc:	00001517          	auipc	a0,0x1
    800042d0:	49c50513          	addi	a0,a0,1180 # 80005768 <r+0x140>
    800042d4:	198010ef          	jal	ra,8000546c <printf>
    800042d8:	00100513          	li	a0,1
    800042dc:	4ac000ef          	jal	ra,80004788 <_halt>

Disassembly of section .text._ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv:

00000000800042e0 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv>:
    800042e0:	01852783          	lw	a5,24(a0)
    800042e4:	00200713          	li	a4,2
    800042e8:	0ef75263          	bge	a4,a5,800043cc <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0xec>
    800042ec:	01053603          	ld	a2,16(a0)
    800042f0:	00100293          	li	t0,1
    800042f4:	02c0006f          	j	80004320 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0x40>
    800042f8:	0deec863          	blt	t4,t5,800043c8 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0xe8>
    800042fc:	0107b023          	sd	a6,0(a5)
    80004300:	00b6b023          	sd	a1,0(a3)
    80004304:	0007b783          	ld	a5,0(a5)
    80004308:	0255a023          	sw	t0,32(a1)
    8000430c:	000f829b          	sext.w	t0,t6
    80004310:	03f7a023          	sw	t6,32(a5)
    80004314:	01852783          	lw	a5,24(a0)
    80004318:	0012971b          	slliw	a4,t0,0x1
    8000431c:	06f75263          	bge	a4,a5,80004380 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0xa0>
    80004320:	00371793          	slli	a5,a4,0x3
    80004324:	00329693          	slli	a3,t0,0x3
    80004328:	00f60333          	add	t1,a2,a5
    8000432c:	00d606b3          	add	a3,a2,a3
    80004330:	0006b803          	ld	a6,0(a3)
    80004334:	00033883          	ld	a7,0(t1)
    80004338:	00878793          	addi	a5,a5,8
    8000433c:	00f607b3          	add	a5,a2,a5
    80004340:	0007b583          	ld	a1,0(a5)
    80004344:	02882e83          	lw	t4,40(a6)
    80004348:	0288ae03          	lw	t3,40(a7)
    8000434c:	0285af03          	lw	t5,40(a1)
    80004350:	00170f9b          	addiw	t6,a4,1
    80004354:	fbcec2e3          	blt	t4,t3,800042f8 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0x18>
    80004358:	fbee52e3          	bge	t3,t5,800042fc <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0x1c>
    8000435c:	01033023          	sd	a6,0(t1)
    80004360:	0116b023          	sd	a7,0(a3)
    80004364:	00033783          	ld	a5,0(t1)
    80004368:	0258a023          	sw	t0,32(a7)
    8000436c:	00070293          	mv	t0,a4
    80004370:	02e7a023          	sw	a4,32(a5)
    80004374:	01852783          	lw	a5,24(a0)
    80004378:	0012971b          	slliw	a4,t0,0x1
    8000437c:	faf742e3          	blt	a4,a5,80004320 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0x40>
    80004380:	00f70463          	beq	a4,a5,80004388 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0xa8>
    80004384:	00008067          	ret
    80004388:	01053683          	ld	a3,16(a0)
    8000438c:	00329613          	slli	a2,t0,0x3
    80004390:	00371793          	slli	a5,a4,0x3
    80004394:	00f687b3          	add	a5,a3,a5
    80004398:	00c686b3          	add	a3,a3,a2
    8000439c:	0006b583          	ld	a1,0(a3)
    800043a0:	0007b603          	ld	a2,0(a5)
    800043a4:	0285a503          	lw	a0,40(a1)
    800043a8:	02862803          	lw	a6,40(a2)
    800043ac:	fca85ce3          	bge	a6,a0,80004384 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0xa4>
    800043b0:	00b7b023          	sd	a1,0(a5)
    800043b4:	00c6b023          	sd	a2,0(a3)
    800043b8:	0007b783          	ld	a5,0(a5)
    800043bc:	02562023          	sw	t0,32(a2)
    800043c0:	02e7a023          	sw	a4,32(a5)
    800043c4:	00008067          	ret
    800043c8:	00008067          	ret
    800043cc:	00200713          	li	a4,2
    800043d0:	00100293          	li	t0,1
    800043d4:	faf718e3          	bne	a4,a5,80004384 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0xa4>
    800043d8:	fb1ff06f          	j	80004388 <_ZN14Updatable_heapI8N_puzzleILi4EEE14percolate_downEv+0xa8>

Disassembly of section .text.startup:

00000000800043dc <main>:
    800043dc:	f6010113          	addi	sp,sp,-160
    800043e0:	08113c23          	sd	ra,152(sp)
    800043e4:	08813823          	sd	s0,144(sp)
    800043e8:	08913423          	sd	s1,136(sp)
    800043ec:	09213023          	sd	s2,128(sp)
    800043f0:	07313c23          	sd	s3,120(sp)
    800043f4:	07413823          	sd	s4,112(sp)
    800043f8:	07513423          	sd	s5,104(sp)
    800043fc:	07613023          	sd	s6,96(sp)
    80004400:	05713c23          	sd	s7,88(sp)
    80004404:	05813823          	sd	s8,80(sp)
    80004408:	05913423          	sd	s9,72(sp)
    8000440c:	05a13023          	sd	s10,64(sp)
    80004410:	03b13c23          	sd	s11,56(sp)
    80004414:	2a050e63          	beqz	a0,800046d0 <main+0x2f4>
    80004418:	00001597          	auipc	a1,0x1
    8000441c:	47058593          	addi	a1,a1,1136 # 80005888 <r+0x260>
    80004420:	00050413          	mv	s0,a0
    80004424:	0c4010ef          	jal	ra,800054e8 <strcmp>
    80004428:	2a050463          	beqz	a0,800046d0 <main+0x2f4>
    8000442c:	00001597          	auipc	a1,0x1
    80004430:	3e458593          	addi	a1,a1,996 # 80005810 <r+0x1e8>
    80004434:	00040513          	mv	a0,s0
    80004438:	0b0010ef          	jal	ra,800054e8 <strcmp>
    8000443c:	00a13823          	sd	a0,16(sp)
    80004440:	02050063          	beqz	a0,80004460 <main+0x84>
    80004444:	00001597          	auipc	a1,0x1
    80004448:	3d458593          	addi	a1,a1,980 # 80005818 <r+0x1f0>
    8000444c:	00040513          	mv	a0,s0
    80004450:	098010ef          	jal	ra,800054e8 <strcmp>
    80004454:	00100793          	li	a5,1
    80004458:	00f13823          	sd	a5,16(sp)
    8000445c:	2e051a63          	bnez	a0,80004750 <main+0x374>
    80004460:	3c0000ef          	jal	ra,80004820 <_ioe_init>
    80004464:	00040593          	mv	a1,s0
    80004468:	00001517          	auipc	a0,0x1
    8000446c:	3f050513          	addi	a0,a0,1008 # 80005858 <r+0x230>
    80004470:	7fd000ef          	jal	ra,8000546c <printf>
    80004474:	5a4000ef          	jal	ra,80004a18 <uptime>
    80004478:	01013783          	ld	a5,16(sp)
    8000447c:	00002c17          	auipc	s8,0x2
    80004480:	bb4c0c13          	addi	s8,s8,-1100 # 80006030 <benchmarks>
    80004484:	00002b97          	auipc	s7,0x2
    80004488:	0fcb8b93          	addi	s7,s7,252 # 80006580 <seed>
    8000448c:	00178993          	addi	s3,a5,1
    80004490:	0005079b          	sext.w	a5,a0
    80004494:	00599993          	slli	s3,s3,0x5
    80004498:	02f13423          	sd	a5,40(sp)
    8000449c:	00100793          	li	a5,1
    800044a0:	fe098b13          	addi	s6,s3,-32 # fe0 <_start-0x7ffff020>
    800044a4:	00f13423          	sd	a5,8(sp)
    800044a8:	02013023          	sd	zero,32(sp)
    800044ac:	00002417          	auipc	s0,0x2
    800044b0:	20440413          	addi	s0,s0,516 # 800066b0 <current>
    800044b4:	00002a97          	auipc	s5,0x2
    800044b8:	204a8a93          	addi	s5,s5,516 # 800066b8 <setting>
    800044bc:	00898993          	addi	s3,s3,8
    800044c0:	00002d97          	auipc	s11,0x2
    800044c4:	0c8d8d93          	addi	s11,s11,200 # 80006588 <_heap>
    800044c8:	00001a17          	auipc	s4,0x1
    800044cc:	3c8a0a13          	addi	s4,s4,968 # 80005890 <r+0x268>
    800044d0:	00001d17          	auipc	s10,0x1
    800044d4:	3d0d0d13          	addi	s10,s10,976 # 800058a0 <r+0x278>
    800044d8:	00001c97          	auipc	s9,0x1
    800044dc:	3e0c8c93          	addi	s9,s9,992 # 800058b8 <r+0x290>
    800044e0:	0200006f          	j	80004500 <main+0x124>
    800044e4:	000a0513          	mv	a0,s4
    800044e8:	785000ef          	jal	ra,8000546c <printf>
    800044ec:	000d0593          	mv	a1,s10
    800044f0:	000c8513          	mv	a0,s9
    800044f4:	779000ef          	jal	ra,8000546c <printf>
    800044f8:	088c0c13          	addi	s8,s8,136
    800044fc:	137c0a63          	beq	s8,s7,80004630 <main+0x254>
    80004500:	000db603          	ld	a2,0(s11)
    80004504:	016c05b3          	add	a1,s8,s6
    80004508:	008db703          	ld	a4,8(s11)
    8000450c:	0305b503          	ld	a0,48(a1)
    80004510:	018985b3          	add	a1,s3,s8
    80004514:	00bab023          	sd	a1,0(s5)
    80004518:	40c70733          	sub	a4,a4,a2
    8000451c:	01843023          	sd	s8,0(s0)
    80004520:	018c3583          	ld	a1,24(s8)
    80004524:	020c3603          	ld	a2,32(s8)
    80004528:	faa76ee3          	bltu	a4,a0,800044e4 <main+0x108>
    8000452c:	000a0513          	mv	a0,s4
    80004530:	73d000ef          	jal	ra,8000546c <printf>
    80004534:	00043603          	ld	a2,0(s0)
    80004538:	000db703          	ld	a4,0(s11)
    8000453c:	00002797          	auipc	a5,0x2
    80004540:	0dc78793          	addi	a5,a5,220 # 80006618 <hbrk>
    80004544:	00063603          	ld	a2,0(a2)
    80004548:	00770713          	addi	a4,a4,7
    8000454c:	ff877713          	andi	a4,a4,-8
    80004550:	00e7b023          	sd	a4,0(a5)
    80004554:	000600e7          	jalr	a2
    80004558:	4c0000ef          	jal	ra,80004a18 <uptime>
    8000455c:	00043703          	ld	a4,0(s0)
    80004560:	0005049b          	sext.w	s1,a0
    80004564:	00873703          	ld	a4,8(a4)
    80004568:	000700e7          	jalr	a4
    8000456c:	4ac000ef          	jal	ra,80004a18 <uptime>
    80004570:	00043703          	ld	a4,0(s0)
    80004574:	0005091b          	sext.w	s2,a0
    80004578:	01073703          	ld	a4,16(a4)
    8000457c:	000700e7          	jalr	a4
    80004580:	00050713          	mv	a4,a0
    80004584:	16050263          	beqz	a0,800046e8 <main+0x30c>
    80004588:	00177713          	andi	a4,a4,1
    8000458c:	00001517          	auipc	a0,0x1
    80004590:	33c50513          	addi	a0,a0,828 # 800058c8 <r+0x2a0>
    80004594:	00e13c23          	sd	a4,24(sp)
    80004598:	6d5000ef          	jal	ra,8000546c <printf>
    8000459c:	01813703          	ld	a4,24(sp)
    800045a0:	14070a63          	beqz	a4,800046f4 <main+0x318>
    800045a4:	00001517          	auipc	a0,0x1
    800045a8:	32c50513          	addi	a0,a0,812 # 800058d0 <r+0x2a8>
    800045ac:	6c1000ef          	jal	ra,8000546c <printf>
    800045b0:	01813703          	ld	a4,24(sp)
    800045b4:	00813783          	ld	a5,8(sp)
    800045b8:	02091593          	slli	a1,s2,0x20
    800045bc:	02049513          	slli	a0,s1,0x20
    800045c0:	00f777b3          	and	a5,a4,a5
    800045c4:	0205d593          	srli	a1,a1,0x20
    800045c8:	02055513          	srli	a0,a0,0x20
    800045cc:	00f13423          	sd	a5,8(sp)
    800045d0:	40a58633          	sub	a2,a1,a0
    800045d4:	02a58263          	beq	a1,a0,800045f8 <main+0x21c>
    800045d8:	000ab703          	ld	a4,0(s5)
    800045dc:	06400793          	li	a5,100
    800045e0:	01073703          	ld	a4,16(a4)
    800045e4:	02e78733          	mul	a4,a5,a4
    800045e8:	02013783          	ld	a5,32(sp)
    800045ec:	02c75633          	divu	a2,a4,a2
    800045f0:	00c787b3          	add	a5,a5,a2
    800045f4:	02f13023          	sd	a5,32(sp)
    800045f8:	00001517          	auipc	a0,0x1
    800045fc:	36850513          	addi	a0,a0,872 # 80005960 <r+0x338>
    80004600:	00c13c23          	sd	a2,24(sp)
    80004604:	669000ef          	jal	ra,8000546c <printf>
    80004608:	01013783          	ld	a5,16(sp)
    8000460c:	01813603          	ld	a2,24(sp)
    80004610:	ee0784e3          	beqz	a5,800044f8 <main+0x11c>
    80004614:	0006061b          	sext.w	a2,a2
    80004618:	409905bb          	subw	a1,s2,s1
    8000461c:	00001517          	auipc	a0,0x1
    80004620:	2d450513          	addi	a0,a0,724 # 800058f0 <r+0x2c8>
    80004624:	088c0c13          	addi	s8,s8,136
    80004628:	645000ef          	jal	ra,8000546c <printf>
    8000462c:	ed7c1ae3          	bne	s8,s7,80004500 <main+0x124>
    80004630:	3e8000ef          	jal	ra,80004a18 <uptime>
    80004634:	00050413          	mv	s0,a0
    80004638:	00001517          	auipc	a0,0x1
    8000463c:	2d050513          	addi	a0,a0,720 # 80005908 <r+0x2e0>
    80004640:	62d000ef          	jal	ra,8000546c <printf>
    80004644:	00813783          	ld	a5,8(sp)
    80004648:	0004041b          	sext.w	s0,s0
    8000464c:	00001597          	auipc	a1,0x1
    80004650:	18c58593          	addi	a1,a1,396 # 800057d8 <r+0x1b0>
    80004654:	0a078a63          	beqz	a5,80004708 <main+0x32c>
    80004658:	00001517          	auipc	a0,0x1
    8000465c:	2e850513          	addi	a0,a0,744 # 80005940 <r+0x318>
    80004660:	60d000ef          	jal	ra,8000546c <printf>
    80004664:	01013703          	ld	a4,16(sp)
    80004668:	00200793          	li	a5,2
    8000466c:	0af70463          	beq	a4,a5,80004714 <main+0x338>
    80004670:	00001517          	auipc	a0,0x1
    80004674:	2f050513          	addi	a0,a0,752 # 80005960 <r+0x338>
    80004678:	5f5000ef          	jal	ra,8000546c <printf>
    8000467c:	02813783          	ld	a5,40(sp)
    80004680:	00001517          	auipc	a0,0x1
    80004684:	32850513          	addi	a0,a0,808 # 800059a8 <r+0x380>
    80004688:	40f405bb          	subw	a1,s0,a5
    8000468c:	5e1000ef          	jal	ra,8000546c <printf>
    80004690:	09813083          	ld	ra,152(sp)
    80004694:	09013403          	ld	s0,144(sp)
    80004698:	08813483          	ld	s1,136(sp)
    8000469c:	08013903          	ld	s2,128(sp)
    800046a0:	07813983          	ld	s3,120(sp)
    800046a4:	07013a03          	ld	s4,112(sp)
    800046a8:	06813a83          	ld	s5,104(sp)
    800046ac:	06013b03          	ld	s6,96(sp)
    800046b0:	05813b83          	ld	s7,88(sp)
    800046b4:	05013c03          	ld	s8,80(sp)
    800046b8:	04813c83          	ld	s9,72(sp)
    800046bc:	04013d03          	ld	s10,64(sp)
    800046c0:	03813d83          	ld	s11,56(sp)
    800046c4:	00000513          	li	a0,0
    800046c8:	0a010113          	addi	sp,sp,160
    800046cc:	00008067          	ret
    800046d0:	00001517          	auipc	a0,0x1
    800046d4:	11850513          	addi	a0,a0,280 # 800057e8 <r+0x1c0>
    800046d8:	595000ef          	jal	ra,8000546c <printf>
    800046dc:	00001417          	auipc	s0,0x1
    800046e0:	0f440413          	addi	s0,s0,244 # 800057d0 <r+0x1a8>
    800046e4:	d49ff06f          	j	8000442c <main+0x50>
    800046e8:	00001517          	auipc	a0,0x1
    800046ec:	2d850513          	addi	a0,a0,728 # 800059c0 <r+0x398>
    800046f0:	57d000ef          	jal	ra,8000546c <printf>
    800046f4:	00001517          	auipc	a0,0x1
    800046f8:	1ec50513          	addi	a0,a0,492 # 800058e0 <r+0x2b8>
    800046fc:	571000ef          	jal	ra,8000546c <printf>
    80004700:	00000713          	li	a4,0
    80004704:	eb1ff06f          	j	800045b4 <main+0x1d8>
    80004708:	00001597          	auipc	a1,0x1
    8000470c:	0d858593          	addi	a1,a1,216 # 800057e0 <r+0x1b8>
    80004710:	f49ff06f          	j	80004658 <main+0x27c>
    80004714:	02013783          	ld	a5,32(sp)
    80004718:	00a00593          	li	a1,10
    8000471c:	00001517          	auipc	a0,0x1
    80004720:	23450513          	addi	a0,a0,564 # 80005950 <r+0x328>
    80004724:	02b7d5b3          	divu	a1,a5,a1
    80004728:	0005859b          	sext.w	a1,a1
    8000472c:	541000ef          	jal	ra,8000546c <printf>
    80004730:	000185b7          	lui	a1,0x18
    80004734:	00001617          	auipc	a2,0x1
    80004738:	23460613          	addi	a2,a2,564 # 80005968 <r+0x340>
    8000473c:	6a058593          	addi	a1,a1,1696 # 186a0 <_start-0x7ffe7960>
    80004740:	00001517          	auipc	a0,0x1
    80004744:	24050513          	addi	a0,a0,576 # 80005980 <r+0x358>
    80004748:	525000ef          	jal	ra,8000546c <printf>
    8000474c:	f31ff06f          	j	8000467c <main+0x2a0>
    80004750:	00001597          	auipc	a1,0x1
    80004754:	08058593          	addi	a1,a1,128 # 800057d0 <r+0x1a8>
    80004758:	00040513          	mv	a0,s0
    8000475c:	58d000ef          	jal	ra,800054e8 <strcmp>
    80004760:	00200793          	li	a5,2
    80004764:	00f13823          	sd	a5,16(sp)
    80004768:	ce050ce3          	beqz	a0,80004460 <main+0x84>
    8000476c:	00040593          	mv	a1,s0
    80004770:	00001517          	auipc	a0,0x1
    80004774:	0b050513          	addi	a0,a0,176 # 80005820 <r+0x1f8>
    80004778:	4f5000ef          	jal	ra,8000546c <printf>
    8000477c:	00100513          	li	a0,1
    80004780:	008000ef          	jal	ra,80004788 <_halt>

Disassembly of section .text._putc:

0000000080004784 <_putc>:
    80004784:	0540006f          	j	800047d8 <__am_uartlite_putchar>

Disassembly of section .text._halt:

0000000080004788 <_halt>:
    80004788:	ff010113          	addi	sp,sp,-16
    8000478c:	00113423          	sd	ra,8(sp)
    80004790:	00050593          	mv	a1,a0
    80004794:	00050513          	mv	a0,a0
    80004798:	0005006b          	0x5006b
    8000479c:	00001517          	auipc	a0,0x1
    800047a0:	63450513          	addi	a0,a0,1588 # 80005dd0 <CSWTCH.22+0x210>
    800047a4:	4c9000ef          	jal	ra,8000546c <printf>
    800047a8:	0000006f          	j	800047a8 <_halt+0x20>

Disassembly of section .text._trm_init:

00000000800047ac <_trm_init>:
    800047ac:	ff010113          	addi	sp,sp,-16
    800047b0:	00113423          	sd	ra,8(sp)
    800047b4:	014000ef          	jal	ra,800047c8 <__am_init_uartlite>
    800047b8:	00001517          	auipc	a0,0x1
    800047bc:	62d50513          	addi	a0,a0,1581 # 80005de5 <__am_mainargs>
    800047c0:	c1dff0ef          	jal	ra,800043dc <main>
    800047c4:	fc5ff0ef          	jal	ra,80004788 <_halt>

Disassembly of section .text.__am_init_uartlite:

00000000800047c8 <__am_init_uartlite>:
    800047c8:	406007b7          	lui	a5,0x40600
    800047cc:	00300713          	li	a4,3
    800047d0:	00e78623          	sb	a4,12(a5) # 4060000c <_start-0x3f9ffff4>
    800047d4:	00008067          	ret

Disassembly of section .text.__am_uartlite_putchar:

00000000800047d8 <__am_uartlite_putchar>:
    800047d8:	ff010113          	addi	sp,sp,-16
    800047dc:	00813023          	sd	s0,0(sp)
    800047e0:	00113423          	sd	ra,8(sp)
    800047e4:	00a00793          	li	a5,10
    800047e8:	00050413          	mv	s0,a0
    800047ec:	02f50463          	beq	a0,a5,80004814 <__am_uartlite_putchar+0x3c>
    800047f0:	40600737          	lui	a4,0x40600
    800047f4:	00874783          	lbu	a5,8(a4) # 40600008 <_start-0x3f9ffff8>
    800047f8:	0087f793          	andi	a5,a5,8
    800047fc:	fe079ce3          	bnez	a5,800047f4 <__am_uartlite_putchar+0x1c>
    80004800:	00870223          	sb	s0,4(a4)
    80004804:	00813083          	ld	ra,8(sp)
    80004808:	00013403          	ld	s0,0(sp)
    8000480c:	01010113          	addi	sp,sp,16
    80004810:	00008067          	ret
    80004814:	00d00513          	li	a0,13
    80004818:	fc1ff0ef          	jal	ra,800047d8 <__am_uartlite_putchar>
    8000481c:	fd5ff06f          	j	800047f0 <__am_uartlite_putchar+0x18>

Disassembly of section .text._ioe_init:

0000000080004820 <_ioe_init>:
    80004820:	ff010113          	addi	sp,sp,-16
    80004824:	00113423          	sd	ra,8(sp)
    80004828:	1e0000ef          	jal	ra,80004a08 <__am_vga_init>
    8000482c:	140000ef          	jal	ra,8000496c <__am_timer_init>
    80004830:	1dc000ef          	jal	ra,80004a0c <__am_audio_init>
    80004834:	00813083          	ld	ra,8(sp)
    80004838:	00000513          	li	a0,0
    8000483c:	01010113          	addi	sp,sp,16
    80004840:	00008067          	ret

Disassembly of section .text._io_read:

0000000080004844 <_io_read>:
    80004844:	0000b7b7          	lui	a5,0xb
    80004848:	00050713          	mv	a4,a0
    8000484c:	c0478813          	addi	a6,a5,-1020 # ac04 <_start-0x7fff53fc>
    80004850:	00058513          	mv	a0,a1
    80004854:	00060593          	mv	a1,a2
    80004858:	00068613          	mv	a2,a3
    8000485c:	03070863          	beq	a4,a6,8000488c <_io_read+0x48>
    80004860:	00e86c63          	bltu	a6,a4,80004878 <_io_read+0x34>
    80004864:	c0278693          	addi	a3,a5,-1022
    80004868:	02d70463          	beq	a4,a3,80004890 <_io_read+0x4c>
    8000486c:	c0378793          	addi	a5,a5,-1021
    80004870:	00f71a63          	bne	a4,a5,80004884 <_io_read+0x40>
    80004874:	0200006f          	j	80004894 <__am_timer_read>
    80004878:	c0778793          	addi	a5,a5,-1017
    8000487c:	00f71463          	bne	a4,a5,80004884 <_io_read+0x40>
    80004880:	1900006f          	j	80004a10 <__am_audio_read>
    80004884:	00000513          	li	a0,0
    80004888:	00008067          	ret
    8000488c:	13c0006f          	j	800049c8 <__am_video_read>
    80004890:	1000006f          	j	80004990 <__am_input_read>

Disassembly of section .text.__am_timer_read:

0000000080004894 <__am_timer_read>:
    80004894:	00100793          	li	a5,1
    80004898:	08f50263          	beq	a0,a5,8000491c <__am_timer_read+0x88>
    8000489c:	00200793          	li	a5,2
    800048a0:	06f51a63          	bne	a0,a5,80004914 <__am_timer_read+0x80>
    800048a4:	fe200793          	li	a5,-30
    800048a8:	00f58023          	sb	a5,0(a1)
    800048ac:	00700793          	li	a5,7
    800048b0:	00058a23          	sb	zero,20(a1)
    800048b4:	00058aa3          	sb	zero,21(a1)
    800048b8:	00058b23          	sb	zero,22(a1)
    800048bc:	00058ba3          	sb	zero,23(a1)
    800048c0:	00058823          	sb	zero,16(a1)
    800048c4:	000588a3          	sb	zero,17(a1)
    800048c8:	00058923          	sb	zero,18(a1)
    800048cc:	000589a3          	sb	zero,19(a1)
    800048d0:	00058623          	sb	zero,12(a1)
    800048d4:	000586a3          	sb	zero,13(a1)
    800048d8:	00058723          	sb	zero,14(a1)
    800048dc:	000587a3          	sb	zero,15(a1)
    800048e0:	00058423          	sb	zero,8(a1)
    800048e4:	000584a3          	sb	zero,9(a1)
    800048e8:	00058523          	sb	zero,10(a1)
    800048ec:	000585a3          	sb	zero,11(a1)
    800048f0:	00058223          	sb	zero,4(a1)
    800048f4:	000582a3          	sb	zero,5(a1)
    800048f8:	00058323          	sb	zero,6(a1)
    800048fc:	000583a3          	sb	zero,7(a1)
    80004900:	00f580a3          	sb	a5,1(a1)
    80004904:	00058123          	sb	zero,2(a1)
    80004908:	000581a3          	sb	zero,3(a1)
    8000490c:	01800513          	li	a0,24
    80004910:	00008067          	ret
    80004914:	00000513          	li	a0,0
    80004918:	00008067          	ret
    8000491c:	3800c7b7          	lui	a5,0x3800c
    80004920:	ff87b783          	ld	a5,-8(a5) # 3800bff8 <_start-0x47ff4008>
    80004924:	3e800713          	li	a4,1000
    80004928:	00058023          	sb	zero,0(a1)
    8000492c:	02e7d7b3          	divu	a5,a5,a4
    80004930:	00002717          	auipc	a4,0x2
    80004934:	d7873703          	ld	a4,-648(a4) # 800066a8 <boot_time>
    80004938:	000580a3          	sb	zero,1(a1)
    8000493c:	00058123          	sb	zero,2(a1)
    80004940:	000581a3          	sb	zero,3(a1)
    80004944:	00800513          	li	a0,8
    80004948:	40e787bb          	subw	a5,a5,a4
    8000494c:	0087d61b          	srliw	a2,a5,0x8
    80004950:	0107d69b          	srliw	a3,a5,0x10
    80004954:	0187d71b          	srliw	a4,a5,0x18
    80004958:	00f58223          	sb	a5,4(a1)
    8000495c:	00c582a3          	sb	a2,5(a1)
    80004960:	00d58323          	sb	a3,6(a1)
    80004964:	00e583a3          	sb	a4,7(a1)
    80004968:	00008067          	ret

Disassembly of section .text.__am_timer_init:

000000008000496c <__am_timer_init>:
    8000496c:	3800c7b7          	lui	a5,0x3800c
    80004970:	ff87b783          	ld	a5,-8(a5) # 3800bff8 <_start-0x47ff4008>
    80004974:	3e800713          	li	a4,1000
    80004978:	02e7d7b3          	divu	a5,a5,a4
    8000497c:	02079793          	slli	a5,a5,0x20
    80004980:	0207d793          	srli	a5,a5,0x20
    80004984:	00002717          	auipc	a4,0x2
    80004988:	d2f73223          	sd	a5,-732(a4) # 800066a8 <boot_time>
    8000498c:	00008067          	ret

Disassembly of section .text.__am_input_read:

0000000080004990 <__am_input_read>:
    80004990:	00100793          	li	a5,1
    80004994:	00f50663          	beq	a0,a5,800049a0 <__am_input_read+0x10>
    80004998:	00000513          	li	a0,0
    8000499c:	00008067          	ret
    800049a0:	00058023          	sb	zero,0(a1)
    800049a4:	000580a3          	sb	zero,1(a1)
    800049a8:	00058123          	sb	zero,2(a1)
    800049ac:	000581a3          	sb	zero,3(a1)
    800049b0:	00058223          	sb	zero,4(a1)
    800049b4:	000582a3          	sb	zero,5(a1)
    800049b8:	00058323          	sb	zero,6(a1)
    800049bc:	000583a3          	sb	zero,7(a1)
    800049c0:	00800513          	li	a0,8
    800049c4:	00008067          	ret

Disassembly of section .text.__am_video_read:

00000000800049c8 <__am_video_read>:
    800049c8:	00100793          	li	a5,1
    800049cc:	00f50663          	beq	a0,a5,800049d8 <__am_video_read+0x10>
    800049d0:	00000513          	li	a0,0
    800049d4:	00008067          	ret
    800049d8:	04000793          	li	a5,64
    800049dc:	00f58023          	sb	a5,0(a1)
    800049e0:	ff000793          	li	a5,-16
    800049e4:	00a580a3          	sb	a0,1(a1)
    800049e8:	00058123          	sb	zero,2(a1)
    800049ec:	000581a3          	sb	zero,3(a1)
    800049f0:	00f58223          	sb	a5,4(a1)
    800049f4:	000582a3          	sb	zero,5(a1)
    800049f8:	00058323          	sb	zero,6(a1)
    800049fc:	000583a3          	sb	zero,7(a1)
    80004a00:	00800513          	li	a0,8
    80004a04:	00008067          	ret

Disassembly of section .text.__am_vga_init:

0000000080004a08 <__am_vga_init>:
    80004a08:	00008067          	ret

Disassembly of section .text.__am_audio_init:

0000000080004a0c <__am_audio_init>:
    80004a0c:	00008067          	ret

Disassembly of section .text.__am_audio_read:

0000000080004a10 <__am_audio_read>:
    80004a10:	00000513          	li	a0,0
    80004a14:	00008067          	ret

Disassembly of section .text.uptime:

0000000080004a18 <uptime>:
    80004a18:	fe010113          	addi	sp,sp,-32
    80004a1c:	0000b537          	lui	a0,0xb
    80004a20:	00810613          	addi	a2,sp,8
    80004a24:	00800693          	li	a3,8
    80004a28:	00100593          	li	a1,1
    80004a2c:	c0350513          	addi	a0,a0,-1021 # ac03 <_start-0x7fff53fd>
    80004a30:	00113c23          	sd	ra,24(sp)
    80004a34:	e11ff0ef          	jal	ra,80004844 <_io_read>
    80004a38:	01813083          	ld	ra,24(sp)
    80004a3c:	00c12503          	lw	a0,12(sp)
    80004a40:	02010113          	addi	sp,sp,32
    80004a44:	00008067          	ret

Disassembly of section .text.__putch:

0000000080004a48 <__putch>:
    80004a48:	08058c63          	beqz	a1,80004ae0 <__putch+0x98>
    80004a4c:	fd010113          	addi	sp,sp,-48
    80004a50:	02813023          	sd	s0,32(sp)
    80004a54:	00913c23          	sd	s1,24(sp)
    80004a58:	01213823          	sd	s2,16(sp)
    80004a5c:	01313423          	sd	s3,8(sp)
    80004a60:	02113423          	sd	ra,40(sp)
    80004a64:	fff5849b          	addiw	s1,a1,-1
    80004a68:	00060413          	mv	s0,a2
    80004a6c:	00050993          	mv	s3,a0
    80004a70:	fff00913          	li	s2,-1
    80004a74:	0280006f          	j	80004a9c <__putch+0x54>
    80004a78:	01843703          	ld	a4,24(s0)
    80004a7c:	00e78663          	beq	a5,a4,80004a88 <__putch+0x40>
    80004a80:	00d43823          	sd	a3,16(s0)
    80004a84:	01378023          	sb	s3,0(a5)
    80004a88:	02043783          	ld	a5,32(s0)
    80004a8c:	fff4849b          	addiw	s1,s1,-1
    80004a90:	00178793          	addi	a5,a5,1
    80004a94:	02f43023          	sd	a5,32(s0)
    80004a98:	03248663          	beq	s1,s2,80004ac4 <__putch+0x7c>
    80004a9c:	01043783          	ld	a5,16(s0)
    80004aa0:	00178693          	addi	a3,a5,1
    80004aa4:	fc079ae3          	bnez	a5,80004a78 <__putch+0x30>
    80004aa8:	00098513          	mv	a0,s3
    80004aac:	cd9ff0ef          	jal	ra,80004784 <_putc>
    80004ab0:	02043783          	ld	a5,32(s0)
    80004ab4:	fff4849b          	addiw	s1,s1,-1
    80004ab8:	00178793          	addi	a5,a5,1
    80004abc:	02f43023          	sd	a5,32(s0)
    80004ac0:	fd249ee3          	bne	s1,s2,80004a9c <__putch+0x54>
    80004ac4:	02813083          	ld	ra,40(sp)
    80004ac8:	02013403          	ld	s0,32(sp)
    80004acc:	01813483          	ld	s1,24(sp)
    80004ad0:	01013903          	ld	s2,16(sp)
    80004ad4:	00813983          	ld	s3,8(sp)
    80004ad8:	03010113          	addi	sp,sp,48
    80004adc:	00008067          	ret
    80004ae0:	00008067          	ret

Disassembly of section .text.vsnprintf_internal:

0000000080004ae4 <vsnprintf_internal>:
    80004ae4:	f1010113          	addi	sp,sp,-240
    80004ae8:	0e813023          	sd	s0,224(sp)
    80004aec:	0d413023          	sd	s4,192(sp)
    80004af0:	0e113423          	sd	ra,232(sp)
    80004af4:	0c913c23          	sd	s1,216(sp)
    80004af8:	0d213823          	sd	s2,208(sp)
    80004afc:	0d313423          	sd	s3,200(sp)
    80004b00:	0b513c23          	sd	s5,184(sp)
    80004b04:	0b613823          	sd	s6,176(sp)
    80004b08:	0b713423          	sd	s7,168(sp)
    80004b0c:	0b813023          	sd	s8,160(sp)
    80004b10:	09913c23          	sd	s9,152(sp)
    80004b14:	09a13823          	sd	s10,144(sp)
    80004b18:	09b13423          	sd	s11,136(sp)
    80004b1c:	00013c23          	sd	zero,24(sp)
    80004b20:	02013023          	sd	zero,32(sp)
    80004b24:	02013c23          	sd	zero,56(sp)
    80004b28:	02a13423          	sd	a0,40(sp)
    80004b2c:	00060413          	mv	s0,a2
    80004b30:	00068a13          	mv	s4,a3
    80004b34:	00050663          	beqz	a0,80004b40 <vsnprintf_internal+0x5c>
    80004b38:	00b50533          	add	a0,a0,a1
    80004b3c:	58058863          	beqz	a1,800050cc <vsnprintf_internal+0x5e8>
    80004b40:	02a13823          	sd	a0,48(sp)
    80004b44:	00001917          	auipc	s2,0x1
    80004b48:	2a490913          	addi	s2,s2,676 # 80005de8 <__am_mainargs+0x3>
    80004b4c:	03900a93          	li	s5,57
    80004b50:	00001997          	auipc	s3,0x1
    80004b54:	40898993          	addi	s3,s3,1032 # 80005f58 <__am_mainargs+0x173>
    80004b58:	00044503          	lbu	a0,0(s0)
    80004b5c:	02050263          	beqz	a0,80004b80 <vsnprintf_internal+0x9c>
    80004b60:	02500793          	li	a5,37
    80004b64:	00140413          	addi	s0,s0,1
    80004b68:	06f50263          	beq	a0,a5,80004bcc <vsnprintf_internal+0xe8>
    80004b6c:	01810613          	addi	a2,sp,24
    80004b70:	00100593          	li	a1,1
    80004b74:	ed5ff0ef          	jal	ra,80004a48 <__putch>
    80004b78:	00044503          	lbu	a0,0(s0)
    80004b7c:	fe0512e3          	bnez	a0,80004b60 <vsnprintf_internal+0x7c>
    80004b80:	02813783          	ld	a5,40(sp)
    80004b84:	00078463          	beqz	a5,80004b8c <vsnprintf_internal+0xa8>
    80004b88:	00078023          	sb	zero,0(a5)
    80004b8c:	0e813083          	ld	ra,232(sp)
    80004b90:	0e013403          	ld	s0,224(sp)
    80004b94:	03812503          	lw	a0,56(sp)
    80004b98:	0d813483          	ld	s1,216(sp)
    80004b9c:	0d013903          	ld	s2,208(sp)
    80004ba0:	0c813983          	ld	s3,200(sp)
    80004ba4:	0c013a03          	ld	s4,192(sp)
    80004ba8:	0b813a83          	ld	s5,184(sp)
    80004bac:	0b013b03          	ld	s6,176(sp)
    80004bb0:	0a813b83          	ld	s7,168(sp)
    80004bb4:	0a013c03          	ld	s8,160(sp)
    80004bb8:	09813c83          	ld	s9,152(sp)
    80004bbc:	09013d03          	ld	s10,144(sp)
    80004bc0:	08813d83          	ld	s11,136(sp)
    80004bc4:	0f010113          	addi	sp,sp,240
    80004bc8:	00008067          	ret
    80004bcc:	02000793          	li	a5,32
    80004bd0:	00f10e23          	sb	a5,28(sp)
    80004bd4:	00012c23          	sw	zero,24(sp)
    80004bd8:	02012023          	sw	zero,32(sp)
    80004bdc:	00040793          	mv	a5,s0
    80004be0:	00000b93          	li	s7,0
    80004be4:	00000b13          	li	s6,0
    80004be8:	00000c13          	li	s8,0
    80004bec:	05800693          	li	a3,88
    80004bf0:	06c00e13          	li	t3,108
    80004bf4:	06800313          	li	t1,104
    80004bf8:	02f00593          	li	a1,47
    80004bfc:	02d00e93          	li	t4,45
    80004c00:	00900613          	li	a2,9
    80004c04:	02000813          	li	a6,32
    80004c08:	00100513          	li	a0,1
    80004c0c:	02b00893          	li	a7,43
    80004c10:	02b00f13          	li	t5,43
    80004c14:	0007c703          	lbu	a4,0(a5)
    80004c18:	00140413          	addi	s0,s0,1
    80004c1c:	fe07079b          	addiw	a5,a4,-32
    80004c20:	0ff7f793          	andi	a5,a5,255
    80004c24:	f2f6eae3          	bltu	a3,a5,80004b58 <vsnprintf_internal+0x74>
    80004c28:	00279793          	slli	a5,a5,0x2
    80004c2c:	012787b3          	add	a5,a5,s2
    80004c30:	0007a783          	lw	a5,0(a5)
    80004c34:	012787b3          	add	a5,a5,s2
    80004c38:	00078067          	jr	a5
    80004c3c:	fd070c1b          	addiw	s8,a4,-48
    80004c40:	00044703          	lbu	a4,0(s0)
    80004c44:	00140413          	addi	s0,s0,1
    80004c48:	02e5f463          	bgeu	a1,a4,80004c70 <vsnprintf_internal+0x18c>
    80004c4c:	fceae8e3          	bltu	s5,a4,80004c1c <vsnprintf_internal+0x138>
    80004c50:	002c179b          	slliw	a5,s8,0x2
    80004c54:	01878c3b          	addw	s8,a5,s8
    80004c58:	001c1c1b          	slliw	s8,s8,0x1
    80004c5c:	00140413          	addi	s0,s0,1
    80004c60:	00ec0c3b          	addw	s8,s8,a4
    80004c64:	fff44703          	lbu	a4,-1(s0)
    80004c68:	fd0c0c1b          	addiw	s8,s8,-48
    80004c6c:	fee5e0e3          	bltu	a1,a4,80004c4c <vsnprintf_internal+0x168>
    80004c70:	fbd716e3          	bne	a4,t4,80004c1c <vsnprintf_internal+0x138>
    80004c74:	41800c3b          	negw	s8,s8
    80004c78:	00040793          	mv	a5,s0
    80004c7c:	f99ff06f          	j	80004c14 <vsnprintf_internal+0x130>
    80004c80:	00200793          	li	a5,2
    80004c84:	008a0513          	addi	a0,s4,8
    80004c88:	74fb8063          	beq	s7,a5,800053c8 <vsnprintf_internal+0x8e4>
    80004c8c:	4b77da63          	bge	a5,s7,80005140 <vsnprintf_internal+0x65c>
    80004c90:	00300793          	li	a5,3
    80004c94:	00fb8663          	beq	s7,a5,80004ca0 <vsnprintf_internal+0x1bc>
    80004c98:	00400793          	li	a5,4
    80004c9c:	72fb9a63          	bne	s7,a5,800053d0 <vsnprintf_internal+0x8ec>
    80004ca0:	000a3483          	ld	s1,0(s4)
    80004ca4:	01810c93          	addi	s9,sp,24
    80004ca8:	00050a13          	mv	s4,a0
    80004cac:	06010fa3          	sb	zero,127(sp)
    80004cb0:	07f10713          	addi	a4,sp,127
    80004cb4:	00f00613          	li	a2,15
    80004cb8:	0080006f          	j	80004cc0 <vsnprintf_internal+0x1dc>
    80004cbc:	00068493          	mv	s1,a3
    80004cc0:	00f4f793          	andi	a5,s1,15
    80004cc4:	00f987b3          	add	a5,s3,a5
    80004cc8:	0007c783          	lbu	a5,0(a5)
    80004ccc:	fff70713          	addi	a4,a4,-1
    80004cd0:	0044d693          	srli	a3,s1,0x4
    80004cd4:	00f70023          	sb	a5,0(a4)
    80004cd8:	fe9662e3          	bltu	a2,s1,80004cbc <vsnprintf_internal+0x1d8>
    80004cdc:	08010793          	addi	a5,sp,128
    80004ce0:	40e7873b          	subw	a4,a5,a4
    80004ce4:	fff70d1b          	addiw	s10,a4,-1
    80004ce8:	ffe7079b          	addiw	a5,a4,-2
    80004cec:	fffd4493          	not	s1,s10
    80004cf0:	00f13023          	sd	a5,0(sp)
    80004cf4:	08010793          	addi	a5,sp,128
    80004cf8:	009784b3          	add	s1,a5,s1
    80004cfc:	00000b93          	li	s7,0
    80004d00:	136d5a63          	bge	s10,s6,80004e34 <vsnprintf_internal+0x350>
    80004d04:	41ab083b          	subw	a6,s6,s10
    80004d08:	01780b3b          	addw	s6,a6,s7
    80004d0c:	01ab073b          	addw	a4,s6,s10
    80004d10:	00000d93          	li	s11,0
    80004d14:	01875463          	bge	a4,s8,80004d1c <vsnprintf_internal+0x238>
    80004d18:	40ec0dbb          	subw	s11,s8,a4
    80004d1c:	01813683          	ld	a3,24(sp)
    80004d20:	fff00713          	li	a4,-1
    80004d24:	01875713          	srli	a4,a4,0x18
    80004d28:	00e6f6b3          	and	a3,a3,a4
    80004d2c:	00100713          	li	a4,1
    80004d30:	02571713          	slli	a4,a4,0x25
    80004d34:	3ae68063          	beq	a3,a4,800050d4 <vsnprintf_internal+0x5f0>
    80004d38:	3a0b9c63          	bnez	s7,800050f0 <vsnprintf_internal+0x60c>
    80004d3c:	01813683          	ld	a3,24(sp)
    80004d40:	fff00713          	li	a4,-1
    80004d44:	01875713          	srli	a4,a4,0x18
    80004d48:	00e6f6b3          	and	a3,a3,a4
    80004d4c:	00300713          	li	a4,3
    80004d50:	02471713          	slli	a4,a4,0x24
    80004d54:	3ce68863          	beq	a3,a4,80005124 <vsnprintf_internal+0x640>
    80004d58:	000c8613          	mv	a2,s9
    80004d5c:	00080593          	mv	a1,a6
    80004d60:	03000513          	li	a0,48
    80004d64:	ce5ff0ef          	jal	ra,80004a48 <__putch>
    80004d68:	020d0463          	beqz	s10,80004d90 <vsnprintf_internal+0x2ac>
    80004d6c:	00016b03          	lwu	s6,0(sp)
    80004d70:	001b0b13          	addi	s6,s6,1
    80004d74:	01648b33          	add	s6,s1,s6
    80004d78:	00148493          	addi	s1,s1,1
    80004d7c:	fff4c503          	lbu	a0,-1(s1)
    80004d80:	000c8613          	mv	a2,s9
    80004d84:	00100593          	li	a1,1
    80004d88:	cc1ff0ef          	jal	ra,80004a48 <__putch>
    80004d8c:	ff6496e3          	bne	s1,s6,80004d78 <vsnprintf_internal+0x294>
    80004d90:	01812783          	lw	a5,24(sp)
    80004d94:	dc0782e3          	beqz	a5,80004b58 <vsnprintf_internal+0x74>
    80004d98:	01c14503          	lbu	a0,28(sp)
    80004d9c:	000c8613          	mv	a2,s9
    80004da0:	000d8593          	mv	a1,s11
    80004da4:	ca5ff0ef          	jal	ra,80004a48 <__putch>
    80004da8:	db1ff06f          	j	80004b58 <vsnprintf_internal+0x74>
    80004dac:	01812783          	lw	a5,24(sp)
    80004db0:	ec0794e3          	bnez	a5,80004c78 <vsnprintf_internal+0x194>
    80004db4:	03000793          	li	a5,48
    80004db8:	00f10e23          	sb	a5,28(sp)
    80004dbc:	00040793          	mv	a5,s0
    80004dc0:	e55ff06f          	j	80004c14 <vsnprintf_internal+0x130>
    80004dc4:	00200793          	li	a5,2
    80004dc8:	60fb8e63          	beq	s7,a5,800053e4 <vsnprintf_internal+0x900>
    80004dcc:	4377d663          	bge	a5,s7,800051f8 <vsnprintf_internal+0x714>
    80004dd0:	00300793          	li	a5,3
    80004dd4:	64fb8063          	beq	s7,a5,80005414 <vsnprintf_internal+0x930>
    80004dd8:	00400793          	li	a5,4
    80004ddc:	00a00713          	li	a4,10
    80004de0:	60fb9a63          	bne	s7,a5,800053f4 <vsnprintf_internal+0x910>
    80004de4:	00800693          	li	a3,8
    80004de8:	008a0513          	addi	a0,s4,8
    80004dec:	000a3783          	ld	a5,0(s4)
    80004df0:	44d70263          	beq	a4,a3,80005234 <vsnprintf_internal+0x750>
    80004df4:	00a00693          	li	a3,10
    80004df8:	00050a13          	mv	s4,a0
    80004dfc:	66d70463          	beq	a4,a3,80005464 <vsnprintf_internal+0x980>
    80004e00:	fff00793          	li	a5,-1
    80004e04:	00f13023          	sd	a5,0(sp)
    80004e08:	fff00493          	li	s1,-1
    80004e0c:	00000b93          	li	s7,0
    80004e10:	00000d13          	li	s10,0
    80004e14:	08010793          	addi	a5,sp,128
    80004e18:	009784b3          	add	s1,a5,s1
    80004e1c:	01810c93          	addi	s9,sp,24
    80004e20:	ee0b80e3          	beqz	s7,80004d00 <vsnprintf_internal+0x21c>
    80004e24:	02012b83          	lw	s7,32(sp)
    80004e28:	01810c93          	addi	s9,sp,24
    80004e2c:	01703bb3          	snez	s7,s7
    80004e30:	ed6d4ae3          	blt	s10,s6,80004d04 <vsnprintf_internal+0x220>
    80004e34:	000b8b13          	mv	s6,s7
    80004e38:	00000813          	li	a6,0
    80004e3c:	ed1ff06f          	j	80004d0c <vsnprintf_internal+0x228>
    80004e40:	008a0c93          	addi	s9,s4,8
    80004e44:	000a3483          	ld	s1,0(s4)
    80004e48:	500b0a63          	beqz	s6,8000535c <vsnprintf_internal+0x878>
    80004e4c:	fffb0b9b          	addiw	s7,s6,-1
    80004e50:	000c8a13          	mv	s4,s9
    80004e54:	00000d13          	li	s10,0
    80004e58:	018b5463          	bge	s6,s8,80004e60 <vsnprintf_internal+0x37c>
    80004e5c:	416c0d3b          	subw	s10,s8,s6
    80004e60:	01812783          	lw	a5,24(sp)
    80004e64:	3a078663          	beqz	a5,80005210 <vsnprintf_internal+0x72c>
    80004e68:	01810c93          	addi	s9,sp,24
    80004e6c:	020b0a63          	beqz	s6,80004ea0 <vsnprintf_internal+0x3bc>
    80004e70:	020b9b13          	slli	s6,s7,0x20
    80004e74:	020b5b13          	srli	s6,s6,0x20
    80004e78:	001b0b13          	addi	s6,s6,1
    80004e7c:	01648b33          	add	s6,s1,s6
    80004e80:	00148493          	addi	s1,s1,1
    80004e84:	fff4c503          	lbu	a0,-1(s1)
    80004e88:	000c8613          	mv	a2,s9
    80004e8c:	00100593          	li	a1,1
    80004e90:	bb9ff0ef          	jal	ra,80004a48 <__putch>
    80004e94:	fe9b16e3          	bne	s6,s1,80004e80 <vsnprintf_internal+0x39c>
    80004e98:	01812783          	lw	a5,24(sp)
    80004e9c:	ca078ee3          	beqz	a5,80004b58 <vsnprintf_internal+0x74>
    80004ea0:	01c14503          	lbu	a0,28(sp)
    80004ea4:	000c8613          	mv	a2,s9
    80004ea8:	000d0593          	mv	a1,s10
    80004eac:	b9dff0ef          	jal	ra,80004a48 <__putch>
    80004eb0:	ca9ff06f          	j	80004b58 <vsnprintf_internal+0x74>
    80004eb4:	000a3483          	ld	s1,0(s4)
    80004eb8:	008a0a13          	addi	s4,s4,8
    80004ebc:	46049c63          	bnez	s1,80005334 <vsnprintf_internal+0x850>
    80004ec0:	02800513          	li	a0,40
    80004ec4:	00001497          	auipc	s1,0x1
    80004ec8:	08c48493          	addi	s1,s1,140 # 80005f50 <__am_mainargs+0x16b>
    80004ecc:	01810c93          	addi	s9,sp,24
    80004ed0:	00001b17          	auipc	s6,0x1
    80004ed4:	085b0b13          	addi	s6,s6,133 # 80005f55 <__am_mainargs+0x170>
    80004ed8:	0080006f          	j	80004ee0 <vsnprintf_internal+0x3fc>
    80004edc:	0004c503          	lbu	a0,0(s1)
    80004ee0:	00148493          	addi	s1,s1,1
    80004ee4:	000c8613          	mv	a2,s9
    80004ee8:	00100593          	li	a1,1
    80004eec:	b5dff0ef          	jal	ra,80004a48 <__putch>
    80004ef0:	ff6496e3          	bne	s1,s6,80004edc <vsnprintf_internal+0x3f8>
    80004ef4:	c65ff06f          	j	80004b58 <vsnprintf_internal+0x74>
    80004ef8:	00200793          	li	a5,2
    80004efc:	4cfb8e63          	beq	s7,a5,800053d8 <vsnprintf_internal+0x8f4>
    80004f00:	2d77dc63          	bge	a5,s7,800051d8 <vsnprintf_internal+0x6f4>
    80004f04:	00300793          	li	a5,3
    80004f08:	32fb8263          	beq	s7,a5,8000522c <vsnprintf_internal+0x748>
    80004f0c:	00400793          	li	a5,4
    80004f10:	00800713          	li	a4,8
    80004f14:	ecfb88e3          	beq	s7,a5,80004de4 <vsnprintf_internal+0x300>
    80004f18:	000a2783          	lw	a5,0(s4)
    80004f1c:	008a0a13          	addi	s4,s4,8
    80004f20:	0077f713          	andi	a4,a5,7
    80004f24:	00e98733          	add	a4,s3,a4
    80004f28:	00074603          	lbu	a2,0(a4)
    80004f2c:	06010fa3          	sb	zero,127(sp)
    80004f30:	07f10713          	addi	a4,sp,127
    80004f34:	00700593          	li	a1,7
    80004f38:	0140006f          	j	80004f4c <vsnprintf_internal+0x468>
    80004f3c:	0076f793          	andi	a5,a3,7
    80004f40:	00f987b3          	add	a5,s3,a5
    80004f44:	0007c603          	lbu	a2,0(a5)
    80004f48:	0006879b          	sext.w	a5,a3
    80004f4c:	fff70713          	addi	a4,a4,-1
    80004f50:	00c70023          	sb	a2,0(a4)
    80004f54:	0037d69b          	srliw	a3,a5,0x3
    80004f58:	fef5e2e3          	bltu	a1,a5,80004f3c <vsnprintf_internal+0x458>
    80004f5c:	08010793          	addi	a5,sp,128
    80004f60:	40e7873b          	subw	a4,a5,a4
    80004f64:	fff70d1b          	addiw	s10,a4,-1
    80004f68:	ffe7079b          	addiw	a5,a4,-2
    80004f6c:	fffd4493          	not	s1,s10
    80004f70:	00f13023          	sd	a5,0(sp)
    80004f74:	01810c93          	addi	s9,sp,24
    80004f78:	d7dff06f          	j	80004cf4 <vsnprintf_internal+0x210>
    80004f7c:	00044703          	lbu	a4,0(s0)
    80004f80:	00140413          	addi	s0,s0,1
    80004f84:	4dc70463          	beq	a4,t3,8000544c <vsnprintf_internal+0x968>
    80004f88:	00300b93          	li	s7,3
    80004f8c:	c91ff06f          	j	80004c1c <vsnprintf_internal+0x138>
    80004f90:	02a12023          	sw	a0,32(sp)
    80004f94:	03110223          	sb	a7,36(sp)
    80004f98:	00040793          	mv	a5,s0
    80004f9c:	c79ff06f          	j	80004c14 <vsnprintf_internal+0x130>
    80004fa0:	01810613          	addi	a2,sp,24
    80004fa4:	00100593          	li	a1,1
    80004fa8:	02500513          	li	a0,37
    80004fac:	a9dff0ef          	jal	ra,80004a48 <__putch>
    80004fb0:	ba9ff06f          	j	80004b58 <vsnprintf_internal+0x74>
    80004fb4:	02012783          	lw	a5,32(sp)
    80004fb8:	2c079863          	bnez	a5,80005288 <vsnprintf_internal+0x7a4>
    80004fbc:	02a12023          	sw	a0,32(sp)
    80004fc0:	03010223          	sb	a6,36(sp)
    80004fc4:	00040793          	mv	a5,s0
    80004fc8:	c4dff06f          	j	80004c14 <vsnprintf_internal+0x130>
    80004fcc:	00044703          	lbu	a4,0(s0)
    80004fd0:	00140413          	addi	s0,s0,1
    80004fd4:	fd07079b          	addiw	a5,a4,-48
    80004fd8:	0ff7f793          	andi	a5,a5,255
    80004fdc:	02f66663          	bltu	a2,a5,80005008 <vsnprintf_internal+0x524>
    80004fe0:	002b179b          	slliw	a5,s6,0x2
    80004fe4:	01678b3b          	addw	s6,a5,s6
    80004fe8:	001b1b1b          	slliw	s6,s6,0x1
    80004fec:	00140413          	addi	s0,s0,1
    80004ff0:	00eb0b3b          	addw	s6,s6,a4
    80004ff4:	fff44703          	lbu	a4,-1(s0)
    80004ff8:	fd0b0b1b          	addiw	s6,s6,-48
    80004ffc:	fd07079b          	addiw	a5,a4,-48
    80005000:	0ff7f793          	andi	a5,a5,255
    80005004:	fcf67ee3          	bgeu	a2,a5,80004fe0 <vsnprintf_internal+0x4fc>
    80005008:	01010e23          	sb	a6,28(sp)
    8000500c:	c11ff06f          	j	80004c1c <vsnprintf_internal+0x138>
    80005010:	00200793          	li	a5,2
    80005014:	38fb8a63          	beq	s7,a5,800053a8 <vsnprintf_internal+0x8c4>
    80005018:	1977d463          	bge	a5,s7,800051a0 <vsnprintf_internal+0x6bc>
    8000501c:	00300793          	li	a5,3
    80005020:	00fb8663          	beq	s7,a5,8000502c <vsnprintf_internal+0x548>
    80005024:	00400793          	li	a5,4
    80005028:	34fb9263          	bne	s7,a5,8000536c <vsnprintf_internal+0x888>
    8000502c:	000a3783          	ld	a5,0(s4)
    80005030:	008a0a13          	addi	s4,s4,8
    80005034:	2607c463          	bltz	a5,8000529c <vsnprintf_internal+0x7b8>
    80005038:	00100b93          	li	s7,1
    8000503c:	06010fa3          	sb	zero,127(sp)
    80005040:	07f10693          	addi	a3,sp,127
    80005044:	00a00613          	li	a2,10
    80005048:	00900513          	li	a0,9
    8000504c:	0080006f          	j	80005054 <vsnprintf_internal+0x570>
    80005050:	00058793          	mv	a5,a1
    80005054:	02c7f733          	remu	a4,a5,a2
    80005058:	fff68693          	addi	a3,a3,-1
    8000505c:	00e98733          	add	a4,s3,a4
    80005060:	00074703          	lbu	a4,0(a4)
    80005064:	02c7d5b3          	divu	a1,a5,a2
    80005068:	00e68023          	sb	a4,0(a3)
    8000506c:	fef562e3          	bltu	a0,a5,80005050 <vsnprintf_internal+0x56c>
    80005070:	08010793          	addi	a5,sp,128
    80005074:	40d786bb          	subw	a3,a5,a3
    80005078:	fff68d1b          	addiw	s10,a3,-1
    8000507c:	ffe6879b          	addiw	a5,a3,-2
    80005080:	fffd4493          	not	s1,s10
    80005084:	00f13023          	sd	a5,0(sp)
    80005088:	d8dff06f          	j	80004e14 <vsnprintf_internal+0x330>
    8000508c:	00a12c23          	sw	a0,24(sp)
    80005090:	01010e23          	sb	a6,28(sp)
    80005094:	00040793          	mv	a5,s0
    80005098:	b7dff06f          	j	80004c14 <vsnprintf_internal+0x130>
    8000509c:	00044703          	lbu	a4,0(s0)
    800050a0:	00140413          	addi	s0,s0,1
    800050a4:	3a670a63          	beq	a4,t1,80005458 <vsnprintf_internal+0x974>
    800050a8:	00200b93          	li	s7,2
    800050ac:	b71ff06f          	j	80004c1c <vsnprintf_internal+0x138>
    800050b0:	000a2783          	lw	a5,0(s4)
    800050b4:	00000b93          	li	s7,0
    800050b8:	008a0a13          	addi	s4,s4,8
    800050bc:	04f10023          	sb	a5,64(sp)
    800050c0:	04010493          	addi	s1,sp,64
    800050c4:	00100b13          	li	s6,1
    800050c8:	d8dff06f          	j	80004e54 <vsnprintf_internal+0x370>
    800050cc:	00000513          	li	a0,0
    800050d0:	a71ff06f          	j	80004b40 <vsnprintf_internal+0x5c>
    800050d4:	01c14503          	lbu	a0,28(sp)
    800050d8:	000c8613          	mv	a2,s9
    800050dc:	000d8593          	mv	a1,s11
    800050e0:	01013423          	sd	a6,8(sp)
    800050e4:	965ff0ef          	jal	ra,80004a48 <__putch>
    800050e8:	00813803          	ld	a6,8(sp)
    800050ec:	c40b88e3          	beqz	s7,80004d3c <vsnprintf_internal+0x258>
    800050f0:	02414503          	lbu	a0,36(sp)
    800050f4:	000c8613          	mv	a2,s9
    800050f8:	00100593          	li	a1,1
    800050fc:	01013423          	sd	a6,8(sp)
    80005100:	949ff0ef          	jal	ra,80004a48 <__putch>
    80005104:	01813683          	ld	a3,24(sp)
    80005108:	fff00713          	li	a4,-1
    8000510c:	01875713          	srli	a4,a4,0x18
    80005110:	00e6f6b3          	and	a3,a3,a4
    80005114:	00300713          	li	a4,3
    80005118:	02471713          	slli	a4,a4,0x24
    8000511c:	00813803          	ld	a6,8(sp)
    80005120:	c2e69ce3          	bne	a3,a4,80004d58 <vsnprintf_internal+0x274>
    80005124:	01c14503          	lbu	a0,28(sp)
    80005128:	000c8613          	mv	a2,s9
    8000512c:	000d8593          	mv	a1,s11
    80005130:	01013423          	sd	a6,8(sp)
    80005134:	915ff0ef          	jal	ra,80004a48 <__putch>
    80005138:	00813803          	ld	a6,8(sp)
    8000513c:	c1dff06f          	j	80004d58 <vsnprintf_internal+0x274>
    80005140:	00100793          	li	a5,1
    80005144:	28fb9663          	bne	s7,a5,800053d0 <vsnprintf_internal+0x8ec>
    80005148:	000a4703          	lbu	a4,0(s4)
    8000514c:	06010fa3          	sb	zero,127(sp)
    80005150:	07f10693          	addi	a3,sp,127
    80005154:	00f00593          	li	a1,15
    80005158:	0080006f          	j	80005160 <vsnprintf_internal+0x67c>
    8000515c:	00060713          	mv	a4,a2
    80005160:	00f77793          	andi	a5,a4,15
    80005164:	00f987b3          	add	a5,s3,a5
    80005168:	0007c783          	lbu	a5,0(a5)
    8000516c:	fff68693          	addi	a3,a3,-1
    80005170:	0047561b          	srliw	a2,a4,0x4
    80005174:	00f68023          	sb	a5,0(a3)
    80005178:	fee5e2e3          	bltu	a1,a4,8000515c <vsnprintf_internal+0x678>
    8000517c:	08010793          	addi	a5,sp,128
    80005180:	40d786bb          	subw	a3,a5,a3
    80005184:	fff68d1b          	addiw	s10,a3,-1
    80005188:	ffe6879b          	addiw	a5,a3,-2
    8000518c:	fffd4493          	not	s1,s10
    80005190:	00f13023          	sd	a5,0(sp)
    80005194:	00050a13          	mv	s4,a0
    80005198:	01810c93          	addi	s9,sp,24
    8000519c:	b59ff06f          	j	80004cf4 <vsnprintf_internal+0x210>
    800051a0:	00100793          	li	a5,1
    800051a4:	1cfb9463          	bne	s7,a5,8000536c <vsnprintf_internal+0x888>
    800051a8:	000a2703          	lw	a4,0(s4)
    800051ac:	008a0793          	addi	a5,s4,8
    800051b0:	0187169b          	slliw	a3,a4,0x18
    800051b4:	4186d69b          	sraiw	a3,a3,0x18
    800051b8:	0e06ce63          	bltz	a3,800052b4 <vsnprintf_internal+0x7d0>
    800051bc:	0ff77713          	andi	a4,a4,255
    800051c0:	00a00693          	li	a3,10
    800051c4:	02d776bb          	remuw	a3,a4,a3
    800051c8:	00078a13          	mv	s4,a5
    800051cc:	00d987b3          	add	a5,s3,a3
    800051d0:	0007c783          	lbu	a5,0(a5)
    800051d4:	1100006f          	j	800052e4 <vsnprintf_internal+0x800>
    800051d8:	00100793          	li	a5,1
    800051dc:	d2fb9ee3          	bne	s7,a5,80004f18 <vsnprintf_internal+0x434>
    800051e0:	000a4783          	lbu	a5,0(s4)
    800051e4:	008a0a13          	addi	s4,s4,8
    800051e8:	0077f713          	andi	a4,a5,7
    800051ec:	00e98733          	add	a4,s3,a4
    800051f0:	00074603          	lbu	a2,0(a4)
    800051f4:	d39ff06f          	j	80004f2c <vsnprintf_internal+0x448>
    800051f8:	00100793          	li	a5,1
    800051fc:	1efb9c63          	bne	s7,a5,800053f4 <vsnprintf_internal+0x910>
    80005200:	008a0793          	addi	a5,s4,8
    80005204:	000a4703          	lbu	a4,0(s4)
    80005208:	00000b93          	li	s7,0
    8000520c:	fb5ff06f          	j	800051c0 <vsnprintf_internal+0x6dc>
    80005210:	01c14503          	lbu	a0,28(sp)
    80005214:	01810c93          	addi	s9,sp,24
    80005218:	000c8613          	mv	a2,s9
    8000521c:	000d0593          	mv	a1,s10
    80005220:	829ff0ef          	jal	ra,80004a48 <__putch>
    80005224:	c40b16e3          	bnez	s6,80004e70 <vsnprintf_internal+0x38c>
    80005228:	c71ff06f          	j	80004e98 <vsnprintf_internal+0x3b4>
    8000522c:	000a3783          	ld	a5,0(s4)
    80005230:	008a0513          	addi	a0,s4,8
    80005234:	06010fa3          	sb	zero,127(sp)
    80005238:	07f10693          	addi	a3,sp,127
    8000523c:	00700593          	li	a1,7
    80005240:	0080006f          	j	80005248 <vsnprintf_internal+0x764>
    80005244:	00060793          	mv	a5,a2
    80005248:	0077f713          	andi	a4,a5,7
    8000524c:	00e98733          	add	a4,s3,a4
    80005250:	00074703          	lbu	a4,0(a4)
    80005254:	fff68693          	addi	a3,a3,-1
    80005258:	0037d613          	srli	a2,a5,0x3
    8000525c:	00e68023          	sb	a4,0(a3)
    80005260:	fef5e2e3          	bltu	a1,a5,80005244 <vsnprintf_internal+0x760>
    80005264:	08010793          	addi	a5,sp,128
    80005268:	40d786bb          	subw	a3,a5,a3
    8000526c:	fff68d1b          	addiw	s10,a3,-1
    80005270:	ffe6879b          	addiw	a5,a3,-2
    80005274:	fffd4493          	not	s1,s10
    80005278:	00f13023          	sd	a5,0(sp)
    8000527c:	00050a13          	mv	s4,a0
    80005280:	01810c93          	addi	s9,sp,24
    80005284:	a71ff06f          	j	80004cf4 <vsnprintf_internal+0x210>
    80005288:	02414783          	lbu	a5,36(sp)
    8000528c:	9fe786e3          	beq	a5,t5,80004c78 <vsnprintf_internal+0x194>
    80005290:	02a12023          	sw	a0,32(sp)
    80005294:	03010223          	sb	a6,36(sp)
    80005298:	d2dff06f          	j	80004fc4 <vsnprintf_internal+0x4e0>
    8000529c:	02d00713          	li	a4,45
    800052a0:	02e10223          	sb	a4,36(sp)
    800052a4:	00100713          	li	a4,1
    800052a8:	02e12023          	sw	a4,32(sp)
    800052ac:	40f007b3          	neg	a5,a5
    800052b0:	d89ff06f          	j	80005038 <vsnprintf_internal+0x554>
    800052b4:	fff74713          	not	a4,a4
    800052b8:	0ff77713          	andi	a4,a4,255
    800052bc:	02d00693          	li	a3,45
    800052c0:	02d10223          	sb	a3,36(sp)
    800052c4:	03712023          	sw	s7,32(sp)
    800052c8:	00170713          	addi	a4,a4,1
    800052cc:	00078a13          	mv	s4,a5
    800052d0:	00a00793          	li	a5,10
    800052d4:	02f777bb          	remuw	a5,a4,a5
    800052d8:	00100b93          	li	s7,1
    800052dc:	00f987b3          	add	a5,s3,a5
    800052e0:	0007c783          	lbu	a5,0(a5)
    800052e4:	06010fa3          	sb	zero,127(sp)
    800052e8:	07f10693          	addi	a3,sp,127
    800052ec:	00a00613          	li	a2,10
    800052f0:	00900593          	li	a1,9
    800052f4:	0140006f          	j	80005308 <vsnprintf_internal+0x824>
    800052f8:	0007871b          	sext.w	a4,a5
    800052fc:	02c7f7bb          	remuw	a5,a5,a2
    80005300:	00f987b3          	add	a5,s3,a5
    80005304:	0007c783          	lbu	a5,0(a5)
    80005308:	fff68693          	addi	a3,a3,-1
    8000530c:	00f68023          	sb	a5,0(a3)
    80005310:	02c757bb          	divuw	a5,a4,a2
    80005314:	fee5e2e3          	bltu	a1,a4,800052f8 <vsnprintf_internal+0x814>
    80005318:	08010793          	addi	a5,sp,128
    8000531c:	40d786bb          	subw	a3,a5,a3
    80005320:	fff68d1b          	addiw	s10,a3,-1
    80005324:	ffe6879b          	addiw	a5,a3,-2
    80005328:	fffd4493          	not	s1,s10
    8000532c:	00f13023          	sd	a5,0(sp)
    80005330:	ae5ff06f          	j	80004e14 <vsnprintf_internal+0x330>
    80005334:	01810c93          	addi	s9,sp,24
    80005338:	000c8613          	mv	a2,s9
    8000533c:	00100593          	li	a1,1
    80005340:	03000513          	li	a0,48
    80005344:	f04ff0ef          	jal	ra,80004a48 <__putch>
    80005348:	000c8613          	mv	a2,s9
    8000534c:	00100593          	li	a1,1
    80005350:	07800513          	li	a0,120
    80005354:	ef4ff0ef          	jal	ra,80004a48 <__putch>
    80005358:	955ff06f          	j	80004cac <vsnprintf_internal+0x1c8>
    8000535c:	00048513          	mv	a0,s1
    80005360:	158000ef          	jal	ra,800054b8 <strlen>
    80005364:	00050b1b          	sext.w	s6,a0
    80005368:	ae5ff06f          	j	80004e4c <vsnprintf_internal+0x368>
    8000536c:	000a2783          	lw	a5,0(s4)
    80005370:	008a0a13          	addi	s4,s4,8
    80005374:	0007871b          	sext.w	a4,a5
    80005378:	f407dce3          	bgez	a5,800052d0 <vsnprintf_internal+0x7ec>
    8000537c:	40e0073b          	negw	a4,a4
    80005380:	00a00793          	li	a5,10
    80005384:	02f777bb          	remuw	a5,a4,a5
    80005388:	02d00693          	li	a3,45
    8000538c:	02d10223          	sb	a3,36(sp)
    80005390:	00100693          	li	a3,1
    80005394:	02d12023          	sw	a3,32(sp)
    80005398:	00100b93          	li	s7,1
    8000539c:	00f987b3          	add	a5,s3,a5
    800053a0:	0007c783          	lbu	a5,0(a5)
    800053a4:	f41ff06f          	j	800052e4 <vsnprintf_internal+0x800>
    800053a8:	000a2703          	lw	a4,0(s4)
    800053ac:	008a0793          	addi	a5,s4,8
    800053b0:	03071693          	slli	a3,a4,0x30
    800053b4:	0606c863          	bltz	a3,80005424 <vsnprintf_internal+0x940>
    800053b8:	03071713          	slli	a4,a4,0x30
    800053bc:	03075713          	srli	a4,a4,0x30
    800053c0:	00100b93          	li	s7,1
    800053c4:	dfdff06f          	j	800051c0 <vsnprintf_internal+0x6dc>
    800053c8:	000a5703          	lhu	a4,0(s4)
    800053cc:	d81ff06f          	j	8000514c <vsnprintf_internal+0x668>
    800053d0:	000a2703          	lw	a4,0(s4)
    800053d4:	d79ff06f          	j	8000514c <vsnprintf_internal+0x668>
    800053d8:	000a5783          	lhu	a5,0(s4)
    800053dc:	008a0a13          	addi	s4,s4,8
    800053e0:	e09ff06f          	j	800051e8 <vsnprintf_internal+0x704>
    800053e4:	008a0793          	addi	a5,s4,8
    800053e8:	000a5703          	lhu	a4,0(s4)
    800053ec:	00000b93          	li	s7,0
    800053f0:	dd1ff06f          	j	800051c0 <vsnprintf_internal+0x6dc>
    800053f4:	000a2703          	lw	a4,0(s4)
    800053f8:	00a00793          	li	a5,10
    800053fc:	008a0a13          	addi	s4,s4,8
    80005400:	02f777bb          	remuw	a5,a4,a5
    80005404:	00000b93          	li	s7,0
    80005408:	00f987b3          	add	a5,s3,a5
    8000540c:	0007c783          	lbu	a5,0(a5)
    80005410:	ed5ff06f          	j	800052e4 <vsnprintf_internal+0x800>
    80005414:	000a3783          	ld	a5,0(s4)
    80005418:	00000b93          	li	s7,0
    8000541c:	008a0a13          	addi	s4,s4,8
    80005420:	c1dff06f          	j	8000503c <vsnprintf_internal+0x558>
    80005424:	fff74713          	not	a4,a4
    80005428:	02d00693          	li	a3,45
    8000542c:	0107171b          	slliw	a4,a4,0x10
    80005430:	0107571b          	srliw	a4,a4,0x10
    80005434:	02d10223          	sb	a3,36(sp)
    80005438:	00100693          	li	a3,1
    8000543c:	02d12023          	sw	a3,32(sp)
    80005440:	00170713          	addi	a4,a4,1
    80005444:	00078a13          	mv	s4,a5
    80005448:	e89ff06f          	j	800052d0 <vsnprintf_internal+0x7ec>
    8000544c:	00400b93          	li	s7,4
    80005450:	00040793          	mv	a5,s0
    80005454:	fc0ff06f          	j	80004c14 <vsnprintf_internal+0x130>
    80005458:	00100b93          	li	s7,1
    8000545c:	00040793          	mv	a5,s0
    80005460:	fb4ff06f          	j	80004c14 <vsnprintf_internal+0x130>
    80005464:	00000b93          	li	s7,0
    80005468:	bd5ff06f          	j	8000503c <vsnprintf_internal+0x558>

Disassembly of section .text.printf:

000000008000546c <printf>:
    8000546c:	fa010113          	addi	sp,sp,-96
    80005470:	02810313          	addi	t1,sp,40
    80005474:	02b13423          	sd	a1,40(sp)
    80005478:	02c13823          	sd	a2,48(sp)
    8000547c:	02d13c23          	sd	a3,56(sp)
    80005480:	00050613          	mv	a2,a0
    80005484:	00030693          	mv	a3,t1
    80005488:	00000593          	li	a1,0
    8000548c:	00000513          	li	a0,0
    80005490:	00113c23          	sd	ra,24(sp)
    80005494:	04e13023          	sd	a4,64(sp)
    80005498:	04f13423          	sd	a5,72(sp)
    8000549c:	05013823          	sd	a6,80(sp)
    800054a0:	05113c23          	sd	a7,88(sp)
    800054a4:	00613423          	sd	t1,8(sp)
    800054a8:	e3cff0ef          	jal	ra,80004ae4 <vsnprintf_internal>
    800054ac:	01813083          	ld	ra,24(sp)
    800054b0:	06010113          	addi	sp,sp,96
    800054b4:	00008067          	ret

Disassembly of section .text.strlen:

00000000800054b8 <strlen>:
    800054b8:	00054783          	lbu	a5,0(a0)
    800054bc:	02078063          	beqz	a5,800054dc <strlen+0x24>
    800054c0:	00000793          	li	a5,0
    800054c4:	00178793          	addi	a5,a5,1
    800054c8:	00f50733          	add	a4,a0,a5
    800054cc:	00074703          	lbu	a4,0(a4)
    800054d0:	fe071ae3          	bnez	a4,800054c4 <strlen+0xc>
    800054d4:	00078513          	mv	a0,a5
    800054d8:	00008067          	ret
    800054dc:	00000793          	li	a5,0
    800054e0:	00078513          	mv	a0,a5
    800054e4:	00008067          	ret

Disassembly of section .text.strcmp:

00000000800054e8 <strcmp>:
    800054e8:	00054783          	lbu	a5,0(a0)
    800054ec:	0005c703          	lbu	a4,0(a1)
    800054f0:	00078e63          	beqz	a5,8000550c <strcmp+0x24>
    800054f4:	02e79263          	bne	a5,a4,80005518 <strcmp+0x30>
    800054f8:	00150513          	addi	a0,a0,1
    800054fc:	00054783          	lbu	a5,0(a0)
    80005500:	00158593          	addi	a1,a1,1
    80005504:	0005c703          	lbu	a4,0(a1)
    80005508:	fe0796e3          	bnez	a5,800054f4 <strcmp+0xc>
    8000550c:	00000513          	li	a0,0
    80005510:	40e5053b          	subw	a0,a0,a4
    80005514:	00008067          	ret
    80005518:	0007851b          	sext.w	a0,a5
    8000551c:	40e5053b          	subw	a0,a0,a4
    80005520:	00008067          	ret