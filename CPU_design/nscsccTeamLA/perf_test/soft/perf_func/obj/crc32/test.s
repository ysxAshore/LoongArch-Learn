
obj/crc32/main.elf:     file format elf32-loongarch
obj/crc32/main.elf


Disassembly of section .text:

1c000000 <_ftext>:
_ftext():
1c000000:	157f5f19 	lu12i.w	$r25,-263432(0xbfaf8)
1c000004:	03bff339 	ori	$r25,$r25,0xffc
1c000008:	29800320 	st.w	$r0,$r25,0
1c00000c:	157f5ff9 	lu12i.w	$r25,-263425(0xbfaff)
1c000010:	03bcc339 	ori	$r25,$r25,0xf30
1c000014:	29800320 	st.w	$r0,$r25,0
1c000018:	157f5f19 	lu12i.w	$r25,-263432(0xbfaf8)
1c00001c:	03bff339 	ori	$r25,$r25,0xffc
1c000020:	29800320 	st.w	$r0,$r25,0
1c000024:	157f5f19 	lu12i.w	$r25,-263432(0xbfaf8)
1c000028:	03bff339 	ori	$r25,$r25,0xffc
1c00002c:	29800320 	st.w	$r0,$r25,0
1c000030:	157f5ff9 	lu12i.w	$r25,-263425(0xbfaff)
1c000034:	03bd0339 	ori	$r25,$r25,0xf40
1c000038:	29800320 	st.w	$r0,$r25,0
1c00003c:	157f5f19 	lu12i.w	$r25,-263432(0xbfaf8)
1c000040:	03bff339 	ori	$r25,$r25,0xffc
1c000044:	29800320 	st.w	$r0,$r25,0
1c000048:	04060020 	csrwr	$r0,0x180
1c00004c:	04060420 	csrwr	$r0,0x181
1c000050:	0380640c 	ori	$r12,$r0,0x19
1c000054:	0406002c 	csrwr	$r12,0x180
1c000058:	1540000c 	lu12i.w	$r12,-393216(0xa0000)
1c00005c:	0380258c 	ori	$r12,$r12,0x9
1c000060:	0406042c 	csrwr	$r12,0x181
1c000064:	0380400c 	ori	$r12,$r0,0x10
1c000068:	0380600d 	ori	$r13,$r0,0x18
1c00006c:	040001ac 	csrxchg	$r12,$r13,0x0
1c000070:	1438000c 	lu12i.w	$r12,114688(0x1c000)
1c000074:	038e018c 	ori	$r12,$r12,0x380
1c000078:	0400302c 	csrwr	$r12,0xc
1c00007c:	1c000043 	pcaddu12i	$r3,2(0x2)
1c000080:	28aac063 	ld.w	$r3,$r3,-1360(0xab0)
1c000084:	50030800 	b	776(0x308) # 1c00038c <run_test>
	...

1c000100 <test_finish>:
test_finish():
1c000100:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c000104:	157f5fee 	lu12i.w	$r14,-263425(0xbfaff)
1c000108:	03bc41ce 	ori	$r14,$r14,0xf10
1c00010c:	298001c0 	st.w	$r0,$r14,0
1c000110:	157f5fec 	lu12i.w	$r12,-263425(0xbfaff)
1c000114:	0381818c 	ori	$r12,$r12,0x60
1c000118:	2880018c 	ld.w	$r12,$r12,0
1c00011c:	0342018c 	andi	$r12,$r12,0x80
1c000120:	5800180c 	beq	$r0,$r12,24(0x18) # 1c000138 <test_finish+0x38>
1c000124:	03400000 	andi	$r0,$r0,0x0
1c000128:	157f5f0c 	lu12i.w	$r12,-263432(0xbfaf8)
1c00012c:	2880018d 	ld.w	$r13,$r12,0
1c000130:	50001400 	b	20(0x14) # 1c000144 <test_finish+0x44>
1c000134:	03400000 	andi	$r0,$r0,0x0
1c000138:	157f5f0c 	lu12i.w	$r12,-263432(0xbfaf8)
1c00013c:	0380418c 	ori	$r12,$r12,0x10
1c000140:	2880018d 	ld.w	$r13,$r12,0
1c000144:	157f5fec 	lu12i.w	$r12,-263425(0xbfaff)
1c000148:	0381418c 	ori	$r12,$r12,0x50
1c00014c:	2980018d 	st.w	$r13,$r12,0
1c000150:	53ffc3ff 	b	-64(0xfffffc0) # 1c000110 <test_finish+0x10>
1c000154:	03400000 	andi	$r0,$r0,0x0
1c000158:	1500000c 	lu12i.w	$r12,-524288(0x80000)
1c00015c:	028005ad 	addi.w	$r13,$r13,1(0x1)
1c000160:	0015018e 	move	$r14,$r12
1c000164:	00104a2f 	add.w	$r15,$r17,$r18
1c000168:	28800190 	ld.w	$r16,$r12,0
	...
1c000380:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c000384:	53ffffff 	b	-4(0xffffffc) # 1c000380 <test_finish+0x280>
1c000388:	03400000 	andi	$r0,$r0,0x0

1c00038c <run_test>:
run_test():
1c00038c:	54001400 	bl	20(0x14) # 1c0003a0 <shell4>
1c000390:	03400000 	andi	$r0,$r0,0x0

1c000394 <go_finish>:
go_finish():
1c000394:	53fd6fff 	b	-660(0xffffd6c) # 1c000100 <test_finish>
	...

1c0003a0 <shell4>:
shell4():
1c0003a0:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0003a4:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0003a8:	02829084 	addi.w	$r4,$r4,164(0xa4)
1c0003ac:	29807061 	st.w	$r1,$r3,28(0x1c)
1c0003b0:	2980307a 	st.w	$r26,$r3,12(0xc)
1c0003b4:	2980207b 	st.w	$r27,$r3,8(0x8)
1c0003b8:	29806077 	st.w	$r23,$r3,24(0x18)
1c0003bc:	29805078 	st.w	$r24,$r3,20(0x14)
1c0003c0:	29804079 	st.w	$r25,$r3,16(0x10)
1c0003c4:	540bfc00 	bl	3068(0xbfc) # 1c000fc0 <puts>
1c0003c8:	540f7c00 	bl	3964(0xf7c) # 1c001344 <get_count>
1c0003cc:	0015009a 	move	$r26,$r4
1c0003d0:	540f9400 	bl	3988(0xf94) # 1c001364 <get_count_my>
1c0003d4:	157f5fec 	lu12i.w	$r12,-263425(0xbfaff)
1c0003d8:	0015009b 	move	$r27,$r4
1c0003dc:	03bc8184 	ori	$r4,$r12,0xf20
1c0003e0:	28800085 	ld.w	$r5,$r4,0
1c0003e4:	5c0104a0 	bne	$r5,$r0,260(0x104) # 1c0004e8 <shell4+0x148>
1c0003e8:	02802817 	addi.w	$r23,$r0,10(0xa)
1c0003ec:	00150018 	move	$r24,$r0
1c0003f0:	1c000039 	pcaddu12i	$r25,1(0x1)
1c0003f4:	0281b339 	addi.w	$r25,$r25,108(0x6c)
1c0003f8:	00150324 	move	$r4,$r25
1c0003fc:	54049400 	bl	1172(0x494) # 1c000890 <crc32>
1c000400:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000404:	00101318 	add.w	$r24,$r24,$r4
1c000408:	5ffff2e0 	bne	$r23,$r0,-16(0x3fff0) # 1c0003f8 <shell4+0x58>
1c00040c:	540f5800 	bl	3928(0xf58) # 1c001364 <get_count_my>
1c000410:	00150099 	move	$r25,$r4
1c000414:	540f3000 	bl	3888(0xf30) # 1c001344 <get_count>
1c000418:	0011689a 	sub.w	$r26,$r4,$r26
1c00041c:	00116f3b 	sub.w	$r27,$r25,$r27
1c000420:	58009300 	beq	$r24,$r0,144(0x90) # 1c0004b0 <shell4+0x110>
1c000424:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000428:	02844084 	addi.w	$r4,$r4,272(0x110)
1c00042c:	540b9400 	bl	2964(0xb94) # 1c000fc0 <puts>
1c000430:	157f5fe6 	lu12i.w	$r6,-263425(0xbfaff)
1c000434:	038100ce 	ori	$r14,$r6,0x40
1c000438:	0280040f 	addi.w	$r15,$r0,1(0x1)
1c00043c:	298001cf 	st.w	$r15,$r14,0
1c000440:	0380c0cd 	ori	$r13,$r6,0x30
1c000444:	02800808 	addi.w	$r8,$r0,2(0x2)
1c000448:	038080c7 	ori	$r7,$r6,0x20
1c00044c:	298001a8 	st.w	$r8,$r13,0
1c000450:	298000e0 	st.w	$r0,$r7,0
1c000454:	157f5fe1 	lu12i.w	$r1,-263425(0xbfaff)
1c000458:	03814034 	ori	$r20,$r1,0x50
1c00045c:	2980029b 	st.w	$r27,$r20,0
1c000460:	157f5f0c 	lu12i.w	$r12,-263432(0xbfaf8)
1c000464:	2980019b 	st.w	$r27,$r12,0
1c000468:	03804184 	ori	$r4,$r12,0x10
1c00046c:	2980009a 	st.w	$r26,$r4,0
1c000470:	00150345 	move	$r5,$r26
1c000474:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000478:	02834084 	addi.w	$r4,$r4,208(0xd0)
1c00047c:	54085800 	bl	2136(0x858) # 1c000cd4 <printf>
1c000480:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c000484:	28806077 	ld.w	$r23,$r3,24(0x18)
1c000488:	28805078 	ld.w	$r24,$r3,20(0x14)
1c00048c:	28804079 	ld.w	$r25,$r3,16(0x10)
1c000490:	2880307a 	ld.w	$r26,$r3,12(0xc)
1c000494:	00150365 	move	$r5,$r27
1c000498:	2880207b 	ld.w	$r27,$r3,8(0x8)
1c00049c:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0004a0:	02834084 	addi.w	$r4,$r4,208(0xd0)
1c0004a4:	02808063 	addi.w	$r3,$r3,32(0x20)
1c0004a8:	50082c00 	b	2092(0x82c) # 1c000cd4 <printf>
1c0004ac:	03400000 	andi	$r0,$r0,0x0
1c0004b0:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0004b4:	0281e084 	addi.w	$r4,$r4,120(0x78)
1c0004b8:	540b0800 	bl	2824(0xb08) # 1c000fc0 <puts>
1c0004bc:	157f5fe9 	lu12i.w	$r9,-263425(0xbfaff)
1c0004c0:	0280040a 	addi.w	$r10,$r0,1(0x1)
1c0004c4:	0381012b 	ori	$r11,$r9,0x40
1c0004c8:	2980016a 	st.w	$r10,$r11,0
1c0004cc:	0380c130 	ori	$r16,$r9,0x30
1c0004d0:	140001f2 	lu12i.w	$r18,15(0xf)
1c0004d4:	03808131 	ori	$r17,$r9,0x20
1c0004d8:	2980020a 	st.w	$r10,$r16,0
1c0004dc:	03bffe53 	ori	$r19,$r18,0xfff
1c0004e0:	29800233 	st.w	$r19,$r17,0
1c0004e4:	53ff73ff 	b	-144(0xfffff70) # 1c000454 <shell4+0xb4>
1c0004e8:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0004ec:	02bdd084 	addi.w	$r4,$r4,-140(0xf74)
1c0004f0:	5403a000 	bl	928(0x3a0) # 1c000890 <crc32>
1c0004f4:	00150098 	move	$r24,$r4
1c0004f8:	540e6c00 	bl	3692(0xe6c) # 1c001364 <get_count_my>
1c0004fc:	00150099 	move	$r25,$r4
1c000500:	540e4400 	bl	3652(0xe44) # 1c001344 <get_count>
1c000504:	0011689a 	sub.w	$r26,$r4,$r26
1c000508:	00116f3b 	sub.w	$r27,$r25,$r27
1c00050c:	5fff1b00 	bne	$r24,$r0,-232(0x3ff18) # 1c000424 <shell4+0x84>
1c000510:	53ffa3ff 	b	-96(0xfffffa0) # 1c0004b0 <shell4+0x110>
1c000514:	03400000 	andi	$r0,$r0,0x0
1c000518:	03400000 	andi	$r0,$r0,0x0
1c00051c:	03400000 	andi	$r0,$r0,0x0

1c000520 <updateCRC32>:
updateCRC32():
1c000520:	00159484 	xor	$r4,$r4,$r5
1c000524:	0343fc86 	andi	$r6,$r4,0xff
1c000528:	004088c7 	slli.w	$r7,$r6,0x2
1c00052c:	1c00002c 	pcaddu12i	$r12,1(0x1)
1c000530:	0282718c 	addi.w	$r12,$r12,156(0x9c)
1c000534:	00101d88 	add.w	$r8,$r12,$r7
1c000538:	28800109 	ld.w	$r9,$r8,0
1c00053c:	0044a0a5 	srli.w	$r5,$r5,0x8
1c000540:	0015a4a4 	xor	$r4,$r5,$r9
1c000544:	4c000020 	jirl	$r0,$r1,0
1c000548:	03400000 	andi	$r0,$r0,0x0
1c00054c:	03400000 	andi	$r0,$r0,0x0

1c000550 <crc32file>:
crc32file():
1c000550:	02bf0063 	addi.w	$r3,$r3,-64(0xfc0)
1c000554:	2980f061 	st.w	$r1,$r3,60(0x3c)
1c000558:	2980e077 	st.w	$r23,$r3,56(0x38)
1c00055c:	2980d078 	st.w	$r24,$r3,52(0x34)
1c000560:	2980c079 	st.w	$r25,$r3,48(0x30)
1c000564:	2980b07a 	st.w	$r26,$r3,44(0x2c)
1c000568:	2980a07b 	st.w	$r27,$r3,40(0x28)
1c00056c:	2980907c 	st.w	$r28,$r3,36(0x24)
1c000570:	2980807d 	st.w	$r29,$r3,32(0x20)
1c000574:	2980707e 	st.w	$r30,$r3,28(0x1c)
1c000578:	298000c0 	st.w	$r0,$r6,0
1c00057c:	001500de 	move	$r30,$r6
1c000580:	001500bc 	move	$r28,$r5
1c000584:	54050c00 	bl	1292(0x50c) # 1c000a90 <fopen>
1c000588:	00150099 	move	$r25,$r4
1c00058c:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000590:	02802084 	addi.w	$r4,$r4,8(0x8)
1c000594:	540a2c00 	bl	2604(0xa2c) # 1c000fc0 <puts>
1c000598:	28800324 	ld.w	$r4,$r25,0
1c00059c:	1c00003a 	pcaddu12i	$r26,1(0x1)
1c0005a0:	0280335a 	addi.w	$r26,$r26,12(0xc)
1c0005a4:	02bffc1b 	addi.w	$r27,$r0,-1(0xfff)
1c0005a8:	540b2c00 	bl	2860(0xb2c) # 1c0010d4 <strlen>
1c0005ac:	00150085 	move	$r5,$r4
1c0005b0:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0005b4:	02bfb084 	addi.w	$r4,$r4,-20(0xfec)
1c0005b8:	54071c00 	bl	1820(0x71c) # 1c000cd4 <printf>
1c0005bc:	00150324 	move	$r4,$r25
1c0005c0:	5406c000 	bl	1728(0x6c0) # 1c000c80 <getc>
1c0005c4:	00150098 	move	$r24,$r4
1c0005c8:	02bffc17 	addi.w	$r23,$r0,-1(0xfff)
1c0005cc:	1c00003d 	pcaddu12i	$r29,1(0x1)
1c0005d0:	02bff3bd 	addi.w	$r29,$r29,-4(0xffc)
1c0005d4:	00150344 	move	$r4,$r26
1c0005d8:	5801231b 	beq	$r24,$r27,288(0x120) # 1c0006f8 <crc32file+0x1a8>
1c0005dc:	288003cc 	ld.w	$r12,$r30,0
1c0005e0:	02800581 	addi.w	$r1,$r12,1(0x1)
1c0005e4:	00150025 	move	$r5,$r1
1c0005e8:	298003c1 	st.w	$r1,$r30,0
1c0005ec:	5406e800 	bl	1768(0x6e8) # 1c000cd4 <printf>
1c0005f0:	0015e2e4 	xor	$r4,$r23,$r24
1c0005f4:	29803064 	st.w	$r4,$r3,12(0xc)
1c0005f8:	2a003065 	ld.bu	$r5,$r3,12(0xc)
1c0005fc:	0044a2f7 	srli.w	$r23,$r23,0x8
1c000600:	00150324 	move	$r4,$r25
1c000604:	004088a6 	slli.w	$r6,$r5,0x2
1c000608:	00101ba7 	add.w	$r7,$r29,$r6
1c00060c:	288000e8 	ld.w	$r8,$r7,0
1c000610:	0015dd17 	xor	$r23,$r8,$r23
1c000614:	54066c00 	bl	1644(0x66c) # 1c000c80 <getc>
1c000618:	00150098 	move	$r24,$r4
1c00061c:	00150344 	move	$r4,$r26
1c000620:	5800db1b 	beq	$r24,$r27,216(0xd8) # 1c0006f8 <crc32file+0x1a8>
1c000624:	288003c9 	ld.w	$r9,$r30,0
1c000628:	0280052a 	addi.w	$r10,$r9,1(0x1)
1c00062c:	00150145 	move	$r5,$r10
1c000630:	298003ca 	st.w	$r10,$r30,0
1c000634:	5406a000 	bl	1696(0x6a0) # 1c000cd4 <printf>
1c000638:	0015e2eb 	xor	$r11,$r23,$r24
1c00063c:	2980306b 	st.w	$r11,$r3,12(0xc)
1c000640:	2a00306d 	ld.bu	$r13,$r3,12(0xc)
1c000644:	0044a2ee 	srli.w	$r14,$r23,0x8
1c000648:	00150324 	move	$r4,$r25
1c00064c:	004089af 	slli.w	$r15,$r13,0x2
1c000650:	00103fb0 	add.w	$r16,$r29,$r15
1c000654:	28800211 	ld.w	$r17,$r16,0
1c000658:	0015ba37 	xor	$r23,$r17,$r14
1c00065c:	54062400 	bl	1572(0x624) # 1c000c80 <getc>
1c000660:	00150098 	move	$r24,$r4
1c000664:	00150344 	move	$r4,$r26
1c000668:	5800931b 	beq	$r24,$r27,144(0x90) # 1c0006f8 <crc32file+0x1a8>
1c00066c:	288003d2 	ld.w	$r18,$r30,0
1c000670:	02800653 	addi.w	$r19,$r18,1(0x1)
1c000674:	00150265 	move	$r5,$r19
1c000678:	298003d3 	st.w	$r19,$r30,0
1c00067c:	54065800 	bl	1624(0x658) # 1c000cd4 <printf>
1c000680:	0015e2f4 	xor	$r20,$r23,$r24
1c000684:	29803074 	st.w	$r20,$r3,12(0xc)
1c000688:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c00068c:	0044a2e5 	srli.w	$r5,$r23,0x8
1c000690:	00150324 	move	$r4,$r25
1c000694:	00408997 	slli.w	$r23,$r12,0x2
1c000698:	00105fa6 	add.w	$r6,$r29,$r23
1c00069c:	288000c7 	ld.w	$r7,$r6,0
1c0006a0:	001594f7 	xor	$r23,$r7,$r5
1c0006a4:	5405dc00 	bl	1500(0x5dc) # 1c000c80 <getc>
1c0006a8:	00150098 	move	$r24,$r4
1c0006ac:	00150344 	move	$r4,$r26
1c0006b0:	58004b1b 	beq	$r24,$r27,72(0x48) # 1c0006f8 <crc32file+0x1a8>
1c0006b4:	288003c1 	ld.w	$r1,$r30,0
1c0006b8:	02800425 	addi.w	$r5,$r1,1(0x1)
1c0006bc:	298003c5 	st.w	$r5,$r30,0
1c0006c0:	54061400 	bl	1556(0x614) # 1c000cd4 <printf>
1c0006c4:	0015e2e4 	xor	$r4,$r23,$r24
1c0006c8:	29803064 	st.w	$r4,$r3,12(0xc)
1c0006cc:	2a003068 	ld.bu	$r8,$r3,12(0xc)
1c0006d0:	0044a2e9 	srli.w	$r9,$r23,0x8
1c0006d4:	00150324 	move	$r4,$r25
1c0006d8:	0040890a 	slli.w	$r10,$r8,0x2
1c0006dc:	00102bab 	add.w	$r11,$r29,$r10
1c0006e0:	2880016d 	ld.w	$r13,$r11,0
1c0006e4:	0015a5b7 	xor	$r23,$r13,$r9
1c0006e8:	54059800 	bl	1432(0x598) # 1c000c80 <getc>
1c0006ec:	00150098 	move	$r24,$r4
1c0006f0:	00150344 	move	$r4,$r26
1c0006f4:	5ffeeb1b 	bne	$r24,$r27,-280(0x3fee8) # 1c0005dc <crc32file+0x8c>
1c0006f8:	02bffc05 	addi.w	$r5,$r0,-1(0xfff)
1c0006fc:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000700:	02bad084 	addi.w	$r4,$r4,-332(0xeb4)
1c000704:	5405d000 	bl	1488(0x5d0) # 1c000cd4 <printf>
1c000708:	1c000024 	pcaddu12i	$r4,1(0x1)
1c00070c:	02bab084 	addi.w	$r4,$r4,-340(0xeac)
1c000710:	5408b000 	bl	2224(0x8b0) # 1c000fc0 <puts>
1c000714:	00150324 	move	$r4,$r25
1c000718:	54049800 	bl	1176(0x498) # 1c000bb0 <fclose>
1c00071c:	2880f061 	ld.w	$r1,$r3,60(0x3c)
1c000720:	00145c1e 	nor	$r30,$r0,$r23
1c000724:	2980039e 	st.w	$r30,$r28,0
1c000728:	2880e077 	ld.w	$r23,$r3,56(0x38)
1c00072c:	2880d078 	ld.w	$r24,$r3,52(0x34)
1c000730:	2880c079 	ld.w	$r25,$r3,48(0x30)
1c000734:	2880b07a 	ld.w	$r26,$r3,44(0x2c)
1c000738:	2880a07b 	ld.w	$r27,$r3,40(0x28)
1c00073c:	2880907c 	ld.w	$r28,$r3,36(0x24)
1c000740:	2880807d 	ld.w	$r29,$r3,32(0x20)
1c000744:	2880707e 	ld.w	$r30,$r3,28(0x1c)
1c000748:	00150004 	move	$r4,$r0
1c00074c:	02810063 	addi.w	$r3,$r3,64(0x40)
1c000750:	4c000020 	jirl	$r0,$r1,0
1c000754:	03400000 	andi	$r0,$r0,0x0
1c000758:	03400000 	andi	$r0,$r0,0x0
1c00075c:	03400000 	andi	$r0,$r0,0x0

1c000760 <crc32buf>:
crc32buf():
1c000760:	580128a0 	beq	$r5,$r0,296(0x128) # 1c000888 <crc32buf+0x128>
1c000764:	03400cad 	andi	$r13,$r5,0x3
1c000768:	02bffc12 	addi.w	$r18,$r0,-1(0xfff)
1c00076c:	1c00002f 	pcaddu12i	$r15,1(0x1)
1c000770:	02b971ef 	addi.w	$r15,$r15,-420(0xe5c)
1c000774:	00101485 	add.w	$r5,$r4,$r5
1c000778:	580081a0 	beq	$r13,$r0,128(0x80) # 1c0007f8 <crc32buf+0x98>
1c00077c:	0280040e 	addi.w	$r14,$r0,1(0x1)
1c000780:	580051ae 	beq	$r13,$r14,80(0x50) # 1c0007d0 <crc32buf+0x70>
1c000784:	02800806 	addi.w	$r6,$r0,2(0x2)
1c000788:	580025a6 	beq	$r13,$r6,36(0x24) # 1c0007ac <crc32buf+0x4c>
1c00078c:	2a000087 	ld.bu	$r7,$r4,0
1c000790:	0044a24c 	srli.w	$r12,$r18,0x8
1c000794:	02800484 	addi.w	$r4,$r4,1(0x1)
1c000798:	004088e8 	slli.w	$r8,$r7,0x2
1c00079c:	03cff109 	xori	$r9,$r8,0x3fc
1c0007a0:	001025ea 	add.w	$r10,$r15,$r9
1c0007a4:	2880014b 	ld.w	$r11,$r10,0
1c0007a8:	0015b172 	xor	$r18,$r11,$r12
1c0007ac:	2a000090 	ld.bu	$r16,$r4,0
1c0007b0:	0044a251 	srli.w	$r17,$r18,0x8
1c0007b4:	02800484 	addi.w	$r4,$r4,1(0x1)
1c0007b8:	0015ca12 	xor	$r18,$r16,$r18
1c0007bc:	0343fe53 	andi	$r19,$r18,0xff
1c0007c0:	00408a74 	slli.w	$r20,$r19,0x2
1c0007c4:	001051ed 	add.w	$r13,$r15,$r20
1c0007c8:	288001ae 	ld.w	$r14,$r13,0
1c0007cc:	0015c5d2 	xor	$r18,$r14,$r17
1c0007d0:	2a000086 	ld.bu	$r6,$r4,0
1c0007d4:	0044a247 	srli.w	$r7,$r18,0x8
1c0007d8:	02800484 	addi.w	$r4,$r4,1(0x1)
1c0007dc:	0015c8cc 	xor	$r12,$r6,$r18
1c0007e0:	0343fd88 	andi	$r8,$r12,0xff
1c0007e4:	00408909 	slli.w	$r9,$r8,0x2
1c0007e8:	001025ea 	add.w	$r10,$r15,$r9
1c0007ec:	2880014b 	ld.w	$r11,$r10,0
1c0007f0:	00159d72 	xor	$r18,$r11,$r7
1c0007f4:	58008c85 	beq	$r4,$r5,140(0x8c) # 1c000880 <crc32buf+0x120>
1c0007f8:	2a000091 	ld.bu	$r17,$r4,0
1c0007fc:	2a000493 	ld.bu	$r19,$r4,1(0x1)
1c000800:	0044a250 	srli.w	$r16,$r18,0x8
1c000804:	0015ca34 	xor	$r20,$r17,$r18
1c000808:	0343fe8d 	andi	$r13,$r20,0xff
1c00080c:	004089ae 	slli.w	$r14,$r13,0x2
1c000810:	001039e6 	add.w	$r6,$r15,$r14
1c000814:	288000c7 	ld.w	$r7,$r6,0
1c000818:	2a00088c 	ld.bu	$r12,$r4,2(0x2)
1c00081c:	2a000c88 	ld.bu	$r8,$r4,3(0x3)
1c000820:	0015c0e9 	xor	$r9,$r7,$r16
1c000824:	0015a66a 	xor	$r10,$r19,$r9
1c000828:	0343fd4b 	andi	$r11,$r10,0xff
1c00082c:	00408972 	slli.w	$r18,$r11,0x2
1c000830:	001049f1 	add.w	$r17,$r15,$r18
1c000834:	28800233 	ld.w	$r19,$r17,0
1c000838:	0044a130 	srli.w	$r16,$r9,0x8
1c00083c:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000840:	0015c274 	xor	$r20,$r19,$r16
1c000844:	0015d18d 	xor	$r13,$r12,$r20
1c000848:	0343fdae 	andi	$r14,$r13,0xff
1c00084c:	004089c6 	slli.w	$r6,$r14,0x2
1c000850:	001019e7 	add.w	$r7,$r15,$r6
1c000854:	288000ec 	ld.w	$r12,$r7,0
1c000858:	0044a289 	srli.w	$r9,$r20,0x8
1c00085c:	0015a58a 	xor	$r10,$r12,$r9
1c000860:	0015a908 	xor	$r8,$r8,$r10
1c000864:	0343fd0b 	andi	$r11,$r8,0xff
1c000868:	00408972 	slli.w	$r18,$r11,0x2
1c00086c:	001049f1 	add.w	$r17,$r15,$r18
1c000870:	28800233 	ld.w	$r19,$r17,0
1c000874:	0044a150 	srli.w	$r16,$r10,0x8
1c000878:	0015c272 	xor	$r18,$r19,$r16
1c00087c:	5fff7c85 	bne	$r4,$r5,-132(0x3ff7c) # 1c0007f8 <crc32buf+0x98>
1c000880:	00144804 	nor	$r4,$r0,$r18
1c000884:	4c000020 	jirl	$r0,$r1,0
1c000888:	00150004 	move	$r4,$r0
1c00088c:	4c000020 	jirl	$r0,$r1,0

1c000890 <crc32>:
crc32():
1c000890:	02bf0063 	addi.w	$r3,$r3,-64(0xfc0)
1c000894:	2980f061 	st.w	$r1,$r3,60(0x3c)
1c000898:	2980e077 	st.w	$r23,$r3,56(0x38)
1c00089c:	2980d078 	st.w	$r24,$r3,52(0x34)
1c0008a0:	2980c079 	st.w	$r25,$r3,48(0x30)
1c0008a4:	2980b07a 	st.w	$r26,$r3,44(0x2c)
1c0008a8:	2980a07b 	st.w	$r27,$r3,40(0x28)
1c0008ac:	2980907c 	st.w	$r28,$r3,36(0x24)
1c0008b0:	2980807d 	st.w	$r29,$r3,32(0x20)
1c0008b4:	2980707e 	st.w	$r30,$r3,28(0x1c)
1c0008b8:	5401d800 	bl	472(0x1d8) # 1c000a90 <fopen>
1c0008bc:	0015009a 	move	$r26,$r4
1c0008c0:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0008c4:	02b35084 	addi.w	$r4,$r4,-812(0xcd4)
1c0008c8:	5406f800 	bl	1784(0x6f8) # 1c000fc0 <puts>
1c0008cc:	28800344 	ld.w	$r4,$r26,0
1c0008d0:	1c00003c 	pcaddu12i	$r28,1(0x1)
1c0008d4:	02b3639c 	addi.w	$r28,$r28,-808(0xcd8)
1c0008d8:	02bffc1d 	addi.w	$r29,$r0,-1(0xfff)
1c0008dc:	5407f800 	bl	2040(0x7f8) # 1c0010d4 <strlen>
1c0008e0:	00150085 	move	$r5,$r4
1c0008e4:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0008e8:	02b2e084 	addi.w	$r4,$r4,-840(0xcb8)
1c0008ec:	5403e800 	bl	1000(0x3e8) # 1c000cd4 <printf>
1c0008f0:	00150344 	move	$r4,$r26
1c0008f4:	54038c00 	bl	908(0x38c) # 1c000c80 <getc>
1c0008f8:	00150099 	move	$r25,$r4
1c0008fc:	00150018 	move	$r24,$r0
1c000900:	02bffc17 	addi.w	$r23,$r0,-1(0xfff)
1c000904:	1c00003b 	pcaddu12i	$r27,1(0x1)
1c000908:	02b3137b 	addi.w	$r27,$r27,-828(0xcc4)
1c00090c:	00150384 	move	$r4,$r28
1c000910:	58010b3d 	beq	$r25,$r29,264(0x108) # 1c000a18 <crc32+0x188>
1c000914:	02800718 	addi.w	$r24,$r24,1(0x1)
1c000918:	00150305 	move	$r5,$r24
1c00091c:	5403b800 	bl	952(0x3b8) # 1c000cd4 <printf>
1c000920:	0015e6e4 	xor	$r4,$r23,$r25
1c000924:	29803064 	st.w	$r4,$r3,12(0xc)
1c000928:	2a003065 	ld.bu	$r5,$r3,12(0xc)
1c00092c:	0044a2f7 	srli.w	$r23,$r23,0x8
1c000930:	00150344 	move	$r4,$r26
1c000934:	004088a6 	slli.w	$r6,$r5,0x2
1c000938:	00101b67 	add.w	$r7,$r27,$r6
1c00093c:	288000ec 	ld.w	$r12,$r7,0
1c000940:	0015031e 	move	$r30,$r24
1c000944:	0015dd97 	xor	$r23,$r12,$r23
1c000948:	54033800 	bl	824(0x338) # 1c000c80 <getc>
1c00094c:	00150099 	move	$r25,$r4
1c000950:	00150384 	move	$r4,$r28
1c000954:	5800c73d 	beq	$r25,$r29,196(0xc4) # 1c000a18 <crc32+0x188>
1c000958:	02800718 	addi.w	$r24,$r24,1(0x1)
1c00095c:	00150305 	move	$r5,$r24
1c000960:	54037400 	bl	884(0x374) # 1c000cd4 <printf>
1c000964:	0015e6e8 	xor	$r8,$r23,$r25
1c000968:	29803068 	st.w	$r8,$r3,12(0xc)
1c00096c:	2a003069 	ld.bu	$r9,$r3,12(0xc)
1c000970:	0044a2ea 	srli.w	$r10,$r23,0x8
1c000974:	00150344 	move	$r4,$r26
1c000978:	0040892b 	slli.w	$r11,$r9,0x2
1c00097c:	00102f6d 	add.w	$r13,$r27,$r11
1c000980:	288001ae 	ld.w	$r14,$r13,0
1c000984:	0015a9d7 	xor	$r23,$r14,$r10
1c000988:	5402f800 	bl	760(0x2f8) # 1c000c80 <getc>
1c00098c:	00150099 	move	$r25,$r4
1c000990:	00150384 	move	$r4,$r28
1c000994:	5800873d 	beq	$r25,$r29,132(0x84) # 1c000a18 <crc32+0x188>
1c000998:	02800bd8 	addi.w	$r24,$r30,2(0x2)
1c00099c:	00150305 	move	$r5,$r24
1c0009a0:	54033400 	bl	820(0x334) # 1c000cd4 <printf>
1c0009a4:	0015e6ef 	xor	$r15,$r23,$r25
1c0009a8:	2980306f 	st.w	$r15,$r3,12(0xc)
1c0009ac:	2a003070 	ld.bu	$r16,$r3,12(0xc)
1c0009b0:	0044a2f1 	srli.w	$r17,$r23,0x8
1c0009b4:	00150344 	move	$r4,$r26
1c0009b8:	00408a12 	slli.w	$r18,$r16,0x2
1c0009bc:	00104b73 	add.w	$r19,$r27,$r18
1c0009c0:	28800274 	ld.w	$r20,$r19,0
1c0009c4:	0015c697 	xor	$r23,$r20,$r17
1c0009c8:	5402b800 	bl	696(0x2b8) # 1c000c80 <getc>
1c0009cc:	00150099 	move	$r25,$r4
1c0009d0:	00150384 	move	$r4,$r28
1c0009d4:	5800473d 	beq	$r25,$r29,68(0x44) # 1c000a18 <crc32+0x188>
1c0009d8:	02800fd8 	addi.w	$r24,$r30,3(0x3)
1c0009dc:	00150305 	move	$r5,$r24
1c0009e0:	5402f400 	bl	756(0x2f4) # 1c000cd4 <printf>
1c0009e4:	0015e6e4 	xor	$r4,$r23,$r25
1c0009e8:	29803064 	st.w	$r4,$r3,12(0xc)
1c0009ec:	2a003065 	ld.bu	$r5,$r3,12(0xc)
1c0009f0:	0044a2f7 	srli.w	$r23,$r23,0x8
1c0009f4:	00150344 	move	$r4,$r26
1c0009f8:	004088a6 	slli.w	$r6,$r5,0x2
1c0009fc:	00101b67 	add.w	$r7,$r27,$r6
1c000a00:	288000ec 	ld.w	$r12,$r7,0
1c000a04:	0015dd97 	xor	$r23,$r12,$r23
1c000a08:	54027800 	bl	632(0x278) # 1c000c80 <getc>
1c000a0c:	00150099 	move	$r25,$r4
1c000a10:	00150384 	move	$r4,$r28
1c000a14:	5fff033d 	bne	$r25,$r29,-256(0x3ff00) # 1c000914 <crc32+0x84>
1c000a18:	02bffc05 	addi.w	$r5,$r0,-1(0xfff)
1c000a1c:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000a20:	02ae5084 	addi.w	$r4,$r4,-1132(0xb94)
1c000a24:	5402b000 	bl	688(0x2b0) # 1c000cd4 <printf>
1c000a28:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000a2c:	02ae3084 	addi.w	$r4,$r4,-1140(0xb8c)
1c000a30:	54059000 	bl	1424(0x590) # 1c000fc0 <puts>
1c000a34:	00150344 	move	$r4,$r26
1c000a38:	54017800 	bl	376(0x178) # 1c000bb0 <fclose>
1c000a3c:	00145c1a 	nor	$r26,$r0,$r23
1c000a40:	00150306 	move	$r6,$r24
1c000a44:	00150345 	move	$r5,$r26
1c000a48:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000a4c:	02adc084 	addi.w	$r4,$r4,-1168(0xb70)
1c000a50:	54028400 	bl	644(0x284) # 1c000cd4 <printf>
1c000a54:	154111b8 	lu12i.w	$r24,-391027(0xa088d)
1c000a58:	2880f061 	ld.w	$r1,$r3,60(0x3c)
1c000a5c:	0395971d 	ori	$r29,$r24,0x565
1c000a60:	0010775c 	add.w	$r28,$r26,$r29
1c000a64:	0012f004 	sltu	$r4,$r0,$r28
1c000a68:	2880e077 	ld.w	$r23,$r3,56(0x38)
1c000a6c:	2880d078 	ld.w	$r24,$r3,52(0x34)
1c000a70:	2880c079 	ld.w	$r25,$r3,48(0x30)
1c000a74:	2880b07a 	ld.w	$r26,$r3,44(0x2c)
1c000a78:	2880a07b 	ld.w	$r27,$r3,40(0x28)
1c000a7c:	2880907c 	ld.w	$r28,$r3,36(0x24)
1c000a80:	2880807d 	ld.w	$r29,$r3,32(0x20)
1c000a84:	2880707e 	ld.w	$r30,$r3,28(0x1c)
1c000a88:	02810063 	addi.w	$r3,$r3,64(0x40)
1c000a8c:	4c000020 	jirl	$r0,$r1,0

1c000a90 <fopen>:
fopen():
/home/wwt/work/perf_func/lib/stdio.c:22
1c000a90:	1c000030 	pcaddu12i	$r16,1(0x1)
1c000a94:	029ac210 	addi.w	$r16,$r16,1712(0x6b0)
1c000a98:	0015020d 	move	$r13,$r16
1c000a9c:	0015000c 	move	$r12,$r0
1c000aa0:	0280280f 	addi.w	$r15,$r0,10(0xa)
/home/wwt/work/perf_func/lib/stdio.c:23
1c000aa4:	288001ae 	ld.w	$r14,$r13,0
1c000aa8:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c000aac:	580029c0 	beq	$r14,$r0,40(0x28) # 1c000ad4 <fopen+0x44>
/home/wwt/work/perf_func/lib/stdio.c:22 (discriminator 2)
1c000ab0:	0280058c 	addi.w	$r12,$r12,1(0x1)
/home/wwt/work/perf_func/lib/stdio.c:22
1c000ab4:	5ffff18f 	bne	$r12,$r15,-16(0x3fff0) # 1c000aa4 <fopen+0x14>
/home/wwt/work/perf_func/lib/stdio.c:27
1c000ab8:	00408d8c 	slli.w	$r12,$r12,0x3
1c000abc:	0010320c 	add.w	$r12,$r16,$r12
1c000ac0:	0281400d 	addi.w	$r13,$r0,80(0x50)
1c000ac4:	29800184 	st.w	$r4,$r12,0
/home/wwt/work/perf_func/lib/stdio.c:28
1c000ac8:	29801180 	st.w	$r0,$r12,4(0x4)
/home/wwt/work/perf_func/lib/stdio.c:30
1c000acc:	00103604 	add.w	$r4,$r16,$r13
1c000ad0:	4c000020 	jirl	$r0,$r1,0
1c000ad4:	00408d8c 	slli.w	$r12,$r12,0x3
1c000ad8:	0015018d 	move	$r13,$r12
/home/wwt/work/perf_func/lib/stdio.c:27
1c000adc:	0010320c 	add.w	$r12,$r16,$r12
1c000ae0:	29800184 	st.w	$r4,$r12,0
/home/wwt/work/perf_func/lib/stdio.c:28
1c000ae4:	29801180 	st.w	$r0,$r12,4(0x4)
/home/wwt/work/perf_func/lib/stdio.c:30
1c000ae8:	00103604 	add.w	$r4,$r16,$r13
1c000aec:	4c000020 	jirl	$r0,$r1,0

1c000af0 <fread>:
fread():
/home/wwt/work/perf_func/lib/stdio.c:32
1c000af0:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c000af4:	29804079 	st.w	$r25,$r3,16(0x10)
/home/wwt/work/perf_func/lib/stdio.c:34
1c000af8:	288000f9 	ld.w	$r25,$r7,0
/home/wwt/work/perf_func/lib/stdio.c:32
1c000afc:	2980307a 	st.w	$r26,$r3,12(0xc)
1c000b00:	0015009a 	move	$r26,$r4
/home/wwt/work/perf_func/lib/stdio.c:35
1c000b04:	00150324 	move	$r4,$r25
/home/wwt/work/perf_func/lib/stdio.c:32
1c000b08:	29806077 	st.w	$r23,$r3,24(0x18)
1c000b0c:	29805078 	st.w	$r24,$r3,20(0x14)
1c000b10:	2980207b 	st.w	$r27,$r3,8(0x8)
1c000b14:	001500f7 	move	$r23,$r7
1c000b18:	29807061 	st.w	$r1,$r3,28(0x1c)
1c000b1c:	001500b8 	move	$r24,$r5
1c000b20:	001500db 	move	$r27,$r6
/home/wwt/work/perf_func/lib/stdio.c:35
1c000b24:	5405b000 	bl	1456(0x5b0) # 1c0010d4 <strlen>
/home/wwt/work/perf_func/lib/stdio.c:36
1c000b28:	288012ec 	ld.w	$r12,$r23,4(0x4)
1c000b2c:	58005d84 	beq	$r12,$r4,92(0x5c) # 1c000b88 <fread+0x98>
/home/wwt/work/perf_func/lib/stdio.c:40
1c000b30:	001c6f05 	mul.w	$r5,$r24,$r27
1c000b34:	0015000d 	move	$r13,$r0
1c000b38:	50002000 	b	32(0x20) # 1c000b58 <fread+0x68>
/home/wwt/work/perf_func/lib/stdio.c:41
1c000b3c:	298012ee 	st.w	$r14,$r23,4(0x4)
1c000b40:	2800018e 	ld.b	$r14,$r12,0
1c000b44:	028005ad 	addi.w	$r13,$r13,1(0x1)
1c000b48:	0010374c 	add.w	$r12,$r26,$r13
1c000b4c:	293ffd8e 	st.b	$r14,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/stdio.c:42
1c000b50:	288012ec 	ld.w	$r12,$r23,4(0x4)
1c000b54:	58001184 	beq	$r12,$r4,16(0x10) # 1c000b64 <fread+0x74>
/home/wwt/work/perf_func/lib/stdio.c:41
1c000b58:	0280058e 	addi.w	$r14,$r12,1(0x1)
1c000b5c:	0010332c 	add.w	$r12,$r25,$r12
/home/wwt/work/perf_func/lib/stdio.c:40
1c000b60:	5fffdcad 	bne	$r5,$r13,-36(0x3ffdc) # 1c000b3c <fread+0x4c>
/home/wwt/work/perf_func/lib/stdio.c:47
1c000b64:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c000b68:	28806077 	ld.w	$r23,$r3,24(0x18)
1c000b6c:	28805078 	ld.w	$r24,$r3,20(0x14)
1c000b70:	28804079 	ld.w	$r25,$r3,16(0x10)
1c000b74:	2880307a 	ld.w	$r26,$r3,12(0xc)
1c000b78:	2880207b 	ld.w	$r27,$r3,8(0x8)
1c000b7c:	001501a4 	move	$r4,$r13
1c000b80:	02808063 	addi.w	$r3,$r3,32(0x20)
1c000b84:	4c000020 	jirl	$r0,$r1,0
1c000b88:	28807061 	ld.w	$r1,$r3,28(0x1c)
/home/wwt/work/perf_func/lib/stdio.c:37
1c000b8c:	0015000d 	move	$r13,$r0
/home/wwt/work/perf_func/lib/stdio.c:47
1c000b90:	28806077 	ld.w	$r23,$r3,24(0x18)
1c000b94:	28805078 	ld.w	$r24,$r3,20(0x14)
1c000b98:	28804079 	ld.w	$r25,$r3,16(0x10)
1c000b9c:	2880307a 	ld.w	$r26,$r3,12(0xc)
1c000ba0:	2880207b 	ld.w	$r27,$r3,8(0x8)
1c000ba4:	001501a4 	move	$r4,$r13
1c000ba8:	02808063 	addi.w	$r3,$r3,32(0x20)
1c000bac:	4c000020 	jirl	$r0,$r1,0

1c000bb0 <fclose>:
fclose():
/home/wwt/work/perf_func/lib/stdio.c:68
1c000bb0:	29800080 	st.w	$r0,$r4,0
/home/wwt/work/perf_func/lib/stdio.c:69
1c000bb4:	29801080 	st.w	$r0,$r4,4(0x4)
/home/wwt/work/perf_func/lib/stdio.c:70
1c000bb8:	4c000020 	jirl	$r0,$r1,0

1c000bbc <fgets>:
fgets():
/home/wwt/work/perf_func/lib/stdio.c:72
1c000bbc:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000bc0:	29801078 	st.w	$r24,$r3,4(0x4)
/home/wwt/work/perf_func/lib/stdio.c:73
1c000bc4:	288000d8 	ld.w	$r24,$r6,0
/home/wwt/work/perf_func/lib/stdio.c:72
1c000bc8:	29800079 	st.w	$r25,$r3,0
1c000bcc:	00150099 	move	$r25,$r4
/home/wwt/work/perf_func/lib/stdio.c:74
1c000bd0:	00150304 	move	$r4,$r24
/home/wwt/work/perf_func/lib/stdio.c:72
1c000bd4:	29802077 	st.w	$r23,$r3,8(0x8)
1c000bd8:	29803061 	st.w	$r1,$r3,12(0xc)
1c000bdc:	001500d7 	move	$r23,$r6
/home/wwt/work/perf_func/lib/stdio.c:74
1c000be0:	5404f400 	bl	1268(0x4f4) # 1c0010d4 <strlen>
/home/wwt/work/perf_func/lib/stdio.c:77
1c000be4:	288012ec 	ld.w	$r12,$r23,4(0x4)
1c000be8:	58004d84 	beq	$r12,$r4,76(0x4c) # 1c000c34 <fgets+0x78>
/home/wwt/work/perf_func/lib/stdio.c:78
1c000bec:	0010330d 	add.w	$r13,$r24,$r12
1c000bf0:	280001af 	ld.b	$r15,$r13,0
1c000bf4:	0280280e 	addi.w	$r14,$r0,10(0xa)
1c000bf8:	580059ee 	beq	$r15,$r14,88(0x58) # 1c000c50 <fgets+0x94>
/home/wwt/work/perf_func/lib/stdio.c:75
1c000bfc:	0015000e 	move	$r14,$r0
/home/wwt/work/perf_func/lib/stdio.c:78
1c000c00:	02802811 	addi.w	$r17,$r0,10(0xa)
1c000c04:	50000c00 	b	12(0xc) # 1c000c10 <fgets+0x54>
1c000c08:	280001b0 	ld.b	$r16,$r13,0
1c000c0c:	58004a11 	beq	$r16,$r17,72(0x48) # 1c000c54 <fgets+0x98>
/home/wwt/work/perf_func/lib/stdio.c:82
1c000c10:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c000c14:	298012ec 	st.w	$r12,$r23,4(0x4)
1c000c18:	280001ac 	ld.b	$r12,$r13,0
1c000c1c:	028005ce 	addi.w	$r14,$r14,1(0x1)
1c000c20:	00103b2f 	add.w	$r15,$r25,$r14
1c000c24:	293ffdec 	st.b	$r12,$r15,-1(0xfff)
/home/wwt/work/perf_func/lib/stdio.c:77
1c000c28:	288012ec 	ld.w	$r12,$r23,4(0x4)
/home/wwt/work/perf_func/lib/stdio.c:78
1c000c2c:	0010330d 	add.w	$r13,$r24,$r12
/home/wwt/work/perf_func/lib/stdio.c:77
1c000c30:	5fffd984 	bne	$r12,$r4,-40(0x3ffd8) # 1c000c08 <fgets+0x4c>
/home/wwt/work/perf_func/lib/stdio.c:86
1c000c34:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000c38:	28802077 	ld.w	$r23,$r3,8(0x8)
1c000c3c:	28801078 	ld.w	$r24,$r3,4(0x4)
1c000c40:	28800079 	ld.w	$r25,$r3,0
1c000c44:	00150004 	move	$r4,$r0
1c000c48:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000c4c:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/stdio.c:78
1c000c50:	0015032f 	move	$r15,$r25
/home/wwt/work/perf_func/lib/stdio.c:79
1c000c54:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c000c58:	298012ec 	st.w	$r12,$r23,4(0x4)
1c000c5c:	280001ac 	ld.b	$r12,$r13,0
/home/wwt/work/perf_func/lib/stdio.c:86
1c000c60:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/stdio.c:79
1c000c64:	290001ec 	st.b	$r12,$r15,0
/home/wwt/work/perf_func/lib/stdio.c:86
1c000c68:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000c6c:	28802077 	ld.w	$r23,$r3,8(0x8)
1c000c70:	28801078 	ld.w	$r24,$r3,4(0x4)
1c000c74:	28800079 	ld.w	$r25,$r3,0
1c000c78:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000c7c:	4c000020 	jirl	$r0,$r1,0

1c000c80 <getc>:
getc():
/home/wwt/work/perf_func/lib/stdio.c:88
1c000c80:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000c84:	29802077 	st.w	$r23,$r3,8(0x8)
/home/wwt/work/perf_func/lib/stdio.c:89
1c000c88:	28800097 	ld.w	$r23,$r4,0
/home/wwt/work/perf_func/lib/stdio.c:88
1c000c8c:	29801078 	st.w	$r24,$r3,4(0x4)
1c000c90:	00150098 	move	$r24,$r4
/home/wwt/work/perf_func/lib/stdio.c:90
1c000c94:	001502e4 	move	$r4,$r23
/home/wwt/work/perf_func/lib/stdio.c:88
1c000c98:	29803061 	st.w	$r1,$r3,12(0xc)
/home/wwt/work/perf_func/lib/stdio.c:90
1c000c9c:	54043800 	bl	1080(0x438) # 1c0010d4 <strlen>
/home/wwt/work/perf_func/lib/stdio.c:91
1c000ca0:	2880130c 	ld.w	$r12,$r24,4(0x4)
1c000ca4:	58002984 	beq	$r12,$r4,40(0x28) # 1c000ccc <getc+0x4c>
/home/wwt/work/perf_func/lib/stdio.c:94
1c000ca8:	0280058d 	addi.w	$r13,$r12,1(0x1)
1c000cac:	2980130d 	st.w	$r13,$r24,4(0x4)
1c000cb0:	001032f7 	add.w	$r23,$r23,$r12
1c000cb4:	2a0002e4 	ld.bu	$r4,$r23,0
/home/wwt/work/perf_func/lib/stdio.c:97
1c000cb8:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000cbc:	28802077 	ld.w	$r23,$r3,8(0x8)
1c000cc0:	28801078 	ld.w	$r24,$r3,4(0x4)
1c000cc4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000cc8:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/stdio.c:92
1c000ccc:	02bffc04 	addi.w	$r4,$r0,-1(0xfff)
1c000cd0:	53ffebff 	b	-24(0xfffffe8) # 1c000cb8 <getc+0x38>

1c000cd4 <printf>:
printf():
/home/wwt/work/perf_func/lib/printf.c:2
1c000cd4:	02be8063 	addi.w	$r3,$r3,-96(0xfa0)
1c000cd8:	2980b07a 	st.w	$r26,$r3,44(0x2c)
1c000cdc:	2980f061 	st.w	$r1,$r3,60(0x3c)
1c000ce0:	2980e077 	st.w	$r23,$r3,56(0x38)
1c000ce4:	2980d078 	st.w	$r24,$r3,52(0x34)
1c000ce8:	2980c079 	st.w	$r25,$r3,48(0x30)
1c000cec:	2980a07b 	st.w	$r27,$r3,40(0x28)
1c000cf0:	2980907c 	st.w	$r28,$r3,36(0x24)
/home/wwt/work/perf_func/lib/printf.c:10
1c000cf4:	28000097 	ld.b	$r23,$r4,0
/home/wwt/work/perf_func/lib/printf.c:8
1c000cf8:	0281107a 	addi.w	$r26,$r3,68(0x44)
/home/wwt/work/perf_func/lib/printf.c:2
1c000cfc:	29811065 	st.w	$r5,$r3,68(0x44)
1c000d00:	29812066 	st.w	$r6,$r3,72(0x48)
1c000d04:	29813067 	st.w	$r7,$r3,76(0x4c)
1c000d08:	29814068 	st.w	$r8,$r3,80(0x50)
1c000d0c:	29815069 	st.w	$r9,$r3,84(0x54)
1c000d10:	2981606a 	st.w	$r10,$r3,88(0x58)
1c000d14:	2981706b 	st.w	$r11,$r3,92(0x5c)
/home/wwt/work/perf_func/lib/printf.c:8
1c000d18:	2980707a 	st.w	$r26,$r3,28(0x1c)
/home/wwt/work/perf_func/lib/printf.c:10
1c000d1c:	580086e0 	beq	$r23,$r0,132(0x84) # 1c000da0 <printf+0xcc>
1c000d20:	00150099 	move	$r25,$r4
1c000d24:	00150018 	move	$r24,$r0
1c000d28:	1c00003c 	pcaddu12i	$r28,1(0x1)
1c000d2c:	02b2839c 	addi.w	$r28,$r28,-864(0xca0)
1c000d30:	0280201b 	addi.w	$r27,$r0,8(0x8)
1c000d34:	50001c00 	b	28(0x1c) # 1c000d50 <printf+0x7c>
/home/wwt/work/perf_func/lib/printf.c:80
1c000d38:	001502e4 	move	$r4,$r23
1c000d3c:	5401c400 	bl	452(0x1c4) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/printf.c:10 (discriminator 2)
1c000d40:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:10
1c000d44:	0010632c 	add.w	$r12,$r25,$r24
1c000d48:	28000197 	ld.b	$r23,$r12,0
1c000d4c:	580056e0 	beq	$r23,$r0,84(0x54) # 1c000da0 <printf+0xcc>
/home/wwt/work/perf_func/lib/printf.c:13
1c000d50:	0280940c 	addi.w	$r12,$r0,37(0x25)
1c000d54:	58001aec 	beq	$r23,$r12,24(0x18) # 1c000d6c <printf+0x98>
/home/wwt/work/perf_func/lib/printf.c:79
1c000d58:	0280280c 	addi.w	$r12,$r0,10(0xa)
1c000d5c:	5fffdeec 	bne	$r23,$r12,-36(0x3ffdc) # 1c000d38 <printf+0x64>
/home/wwt/work/perf_func/lib/printf.c:79 (discriminator 1)
1c000d60:	02803404 	addi.w	$r4,$r0,13(0xd)
1c000d64:	54019c00 	bl	412(0x19c) # 1c000f00 <putchar>
1c000d68:	53ffd3ff 	b	-48(0xfffffd0) # 1c000d38 <printf+0x64>
1c000d6c:	0010632c 	add.w	$r12,$r25,$r24
1c000d70:	2800058d 	ld.b	$r13,$r12,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:15
1c000d74:	02800405 	addi.w	$r5,$r0,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:17
1c000d78:	02814c10 	addi.w	$r16,$r0,83(0x53)
/home/wwt/work/perf_func/lib/printf.c:68
1c000d7c:	0280280f 	addi.w	$r15,$r0,10(0xa)
/home/wwt/work/perf_func/lib/printf.c:17
1c000d80:	02bf6dac 	addi.w	$r12,$r13,-37(0xfdb)
1c000d84:	2980306c 	st.w	$r12,$r3,12(0xc)
1c000d88:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c000d8c:	68016a0c 	bltu	$r16,$r12,360(0x168) # 1c000ef4 <printf+0x220>
1c000d90:	0040898c 	slli.w	$r12,$r12,0x2
1c000d94:	0010338c 	add.w	$r12,$r28,$r12
1c000d98:	2880018c 	ld.w	$r12,$r12,0
1c000d9c:	4c000180 	jirl	$r0,$r12,0
/home/wwt/work/perf_func/lib/printf.c:84
1c000da0:	2880f061 	ld.w	$r1,$r3,60(0x3c)
1c000da4:	2880e077 	ld.w	$r23,$r3,56(0x38)
1c000da8:	2880d078 	ld.w	$r24,$r3,52(0x34)
1c000dac:	2880c079 	ld.w	$r25,$r3,48(0x30)
1c000db0:	2880b07a 	ld.w	$r26,$r3,44(0x2c)
1c000db4:	2880a07b 	ld.w	$r27,$r3,40(0x28)
1c000db8:	2880907c 	ld.w	$r28,$r3,36(0x24)
1c000dbc:	00150004 	move	$r4,$r0
1c000dc0:	02818063 	addi.w	$r3,$r3,96(0x60)
1c000dc4:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/printf.c:65
1c000dc8:	0010632c 	add.w	$r12,$r25,$r24
1c000dcc:	2800098d 	ld.b	$r13,$r12,2(0x2)
1c000dd0:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:67 (discriminator 1)
1c000dd4:	02bf3dac 	addi.w	$r12,$r13,-49(0xfcf)
/home/wwt/work/perf_func/lib/printf.c:67
1c000dd8:	2980306c 	st.w	$r12,$r3,12(0xc)
1c000ddc:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c000de0:	00150005 	move	$r5,$r0
1c000de4:	6bff9f6c 	bltu	$r27,$r12,-100(0x3ff9c) # 1c000d80 <printf+0xac>
/home/wwt/work/perf_func/lib/printf.c:68
1c000de8:	001c3ca5 	mul.w	$r5,$r5,$r15
/home/wwt/work/perf_func/lib/printf.c:67
1c000dec:	02800718 	addi.w	$r24,$r24,1(0x1)
1c000df0:	0010632c 	add.w	$r12,$r25,$r24
/home/wwt/work/perf_func/lib/printf.c:68
1c000df4:	02bf41ae 	addi.w	$r14,$r13,-48(0xfd0)
/home/wwt/work/perf_func/lib/printf.c:67
1c000df8:	2800058d 	ld.b	$r13,$r12,1(0x1)
1c000dfc:	02bf3dac 	addi.w	$r12,$r13,-49(0xfcf)
1c000e00:	2980306c 	st.w	$r12,$r3,12(0xc)
1c000e04:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
/home/wwt/work/perf_func/lib/printf.c:68
1c000e08:	001015c5 	add.w	$r5,$r14,$r5
/home/wwt/work/perf_func/lib/printf.c:67
1c000e0c:	6fffdf6c 	bgeu	$r27,$r12,-36(0x3ffdc) # 1c000de8 <printf+0x114>
1c000e10:	53ff73ff 	b	-144(0xfffff70) # 1c000d80 <printf+0xac>
/home/wwt/work/perf_func/lib/printf.c:50
1c000e14:	28800344 	ld.w	$r4,$r26,0
1c000e18:	00150007 	move	$r7,$r0
1c000e1c:	02800806 	addi.w	$r6,$r0,2(0x2)
1c000e20:	5401cc00 	bl	460(0x1cc) # 1c000fec <printbase>
/home/wwt/work/perf_func/lib/printf.c:51
1c000e24:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:52
1c000e28:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:53
1c000e2c:	53ff17ff 	b	-236(0xfffff14) # 1c000d40 <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:25
1c000e30:	28800344 	ld.w	$r4,$r26,0
/home/wwt/work/perf_func/lib/printf.c:27
1c000e34:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:26
1c000e38:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:25
1c000e3c:	5400c400 	bl	196(0xc4) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/printf.c:28
1c000e40:	53ff03ff 	b	-256(0xfffff00) # 1c000d40 <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:35
1c000e44:	28800344 	ld.w	$r4,$r26,0
1c000e48:	02800407 	addi.w	$r7,$r0,1(0x1)
1c000e4c:	02802806 	addi.w	$r6,$r0,10(0xa)
1c000e50:	54019c00 	bl	412(0x19c) # 1c000fec <printbase>
/home/wwt/work/perf_func/lib/printf.c:36
1c000e54:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:37
1c000e58:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:38
1c000e5c:	53fee7ff 	b	-284(0xffffee4) # 1c000d40 <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:40
1c000e60:	28800344 	ld.w	$r4,$r26,0
1c000e64:	00150007 	move	$r7,$r0
1c000e68:	02802806 	addi.w	$r6,$r0,10(0xa)
1c000e6c:	54018000 	bl	384(0x180) # 1c000fec <printbase>
/home/wwt/work/perf_func/lib/printf.c:41
1c000e70:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:42
1c000e74:	02800b18 	addi.w	$r24,$r24,2(0x2)
/home/wwt/work/perf_func/lib/printf.c:43
1c000e78:	53fecbff 	b	-312(0xffffec8) # 1c000d40 <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:45
1c000e7c:	28800344 	ld.w	$r4,$r26,0
1c000e80:	00150007 	move	$r7,$r0
1c000e84:	02802006 	addi.w	$r6,$r0,8(0x8)
1c000e88:	54016400 	bl	356(0x164) # 1c000fec <printbase>
/home/wwt/work/perf_func/lib/printf.c:46
1c000e8c:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:47
1c000e90:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:48
1c000e94:	53feafff 	b	-340(0xffffeac) # 1c000d40 <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:56
1c000e98:	28800344 	ld.w	$r4,$r26,0
1c000e9c:	00150007 	move	$r7,$r0
1c000ea0:	02804006 	addi.w	$r6,$r0,16(0x10)
1c000ea4:	54014800 	bl	328(0x148) # 1c000fec <printbase>
/home/wwt/work/perf_func/lib/printf.c:57
1c000ea8:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:58
1c000eac:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:59
1c000eb0:	53fe93ff 	b	-368(0xffffe90) # 1c000d40 <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:20
1c000eb4:	28800344 	ld.w	$r4,$r26,0
/home/wwt/work/perf_func/lib/printf.c:22
1c000eb8:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:21
1c000ebc:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:20
1c000ec0:	54008c00 	bl	140(0x8c) # 1c000f4c <putstring>
/home/wwt/work/perf_func/lib/printf.c:23
1c000ec4:	53fe7fff 	b	-388(0xffffe7c) # 1c000d40 <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:30
1c000ec8:	28800344 	ld.w	$r4,$r26,0
1c000ecc:	00150007 	move	$r7,$r0
1c000ed0:	02802806 	addi.w	$r6,$r0,10(0xa)
1c000ed4:	54011800 	bl	280(0x118) # 1c000fec <printbase>
/home/wwt/work/perf_func/lib/printf.c:31
1c000ed8:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:32
1c000edc:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:33
1c000ee0:	53fe63ff 	b	-416(0xffffe60) # 1c000d40 <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:61
1c000ee4:	02809404 	addi.w	$r4,$r0,37(0x25)
1c000ee8:	54001800 	bl	24(0x18) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/printf.c:62
1c000eec:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:63
1c000ef0:	53fe53ff 	b	-432(0xffffe50) # 1c000d40 <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:73
1c000ef4:	02809404 	addi.w	$r4,$r0,37(0x25)
1c000ef8:	54000800 	bl	8(0x8) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/printf.c:74
1c000efc:	53fe47ff 	b	-444(0xffffe44) # 1c000d40 <printf+0x6c>

1c000f00 <putchar>:
putchar():
/home/wwt/work/perf_func/lib/putchar.c:2
1c000f00:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000f04:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/putchar.c:9
1c000f08:	157f5ff9 	lu12i.w	$r25,-263425(0xbfaff)
1c000f0c:	03bc4339 	ori	$r25,$r25,0xf10
1c000f10:	29000324 	st.b	$r4,$r25,0
1c000f14:	03400000 	andi	$r0,$r0,0x0
/home/wwt/work/perf_func/lib/putchar.c:5
1c000f18:	00150004 	move	$r4,$r0
1c000f1c:	28803079 	ld.w	$r25,$r3,12(0xc)
1c000f20:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000f24:	4c000020 	jirl	$r0,$r1,0

1c000f28 <tgt_putchar>:
tgt_putchar():
/home/wwt/work/perf_func/lib/putchar.c:8
1c000f28:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000f2c:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/putchar.c:9
1c000f30:	157f5ff9 	lu12i.w	$r25,-263425(0xbfaff)
1c000f34:	03bc4339 	ori	$r25,$r25,0xf10
1c000f38:	29000324 	st.b	$r4,$r25,0
1c000f3c:	03400000 	andi	$r0,$r0,0x0
/home/wwt/work/perf_func/lib/putchar.c:16
1c000f40:	28803079 	ld.w	$r25,$r3,12(0xc)
1c000f44:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000f48:	4c000020 	jirl	$r0,$r1,0

1c000f4c <putstring>:
putstring():
/home/wwt/work/perf_func/lib/puts.c:2
1c000f4c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000f50:	29803061 	st.w	$r1,$r3,12(0xc)
1c000f54:	29802077 	st.w	$r23,$r3,8(0x8)
1c000f58:	29801078 	st.w	$r24,$r3,4(0x4)
1c000f5c:	29800079 	st.w	$r25,$r3,0
/home/wwt/work/perf_func/lib/puts.c:4
1c000f60:	28000097 	ld.b	$r23,$r4,0
1c000f64:	580042e0 	beq	$r23,$r0,64(0x40) # 1c000fa4 <putstring+0x58>
1c000f68:	00150098 	move	$r24,$r4
/home/wwt/work/perf_func/lib/puts.c:6
1c000f6c:	02802819 	addi.w	$r25,$r0,10(0xa)
1c000f70:	50001400 	b	20(0x14) # 1c000f84 <putstring+0x38>
/home/wwt/work/perf_func/lib/puts.c:7
1c000f74:	001502e4 	move	$r4,$r23
1c000f78:	57ff8bff 	bl	-120(0xfffff88) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/puts.c:4
1c000f7c:	28000317 	ld.b	$r23,$r24,0
1c000f80:	580026e0 	beq	$r23,$r0,36(0x24) # 1c000fa4 <putstring+0x58>
/home/wwt/work/perf_func/lib/puts.c:8
1c000f84:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/puts.c:6
1c000f88:	5fffeef9 	bne	$r23,$r25,-20(0x3ffec) # 1c000f74 <putstring+0x28>
/home/wwt/work/perf_func/lib/puts.c:6 (discriminator 1)
1c000f8c:	02803404 	addi.w	$r4,$r0,13(0xd)
1c000f90:	57ff73ff 	bl	-144(0xfffff70) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/puts.c:7
1c000f94:	001502e4 	move	$r4,$r23
1c000f98:	57ff6bff 	bl	-152(0xfffff68) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/puts.c:4
1c000f9c:	28000317 	ld.b	$r23,$r24,0
1c000fa0:	5fffe6e0 	bne	$r23,$r0,-28(0x3ffe4) # 1c000f84 <putstring+0x38>
/home/wwt/work/perf_func/lib/puts.c:11
1c000fa4:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000fa8:	28802077 	ld.w	$r23,$r3,8(0x8)
1c000fac:	28801078 	ld.w	$r24,$r3,4(0x4)
1c000fb0:	28800079 	ld.w	$r25,$r3,0
1c000fb4:	00150004 	move	$r4,$r0
1c000fb8:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000fbc:	4c000020 	jirl	$r0,$r1,0

1c000fc0 <puts>:
puts():
/home/wwt/work/perf_func/lib/puts.c:15
1c000fc0:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000fc4:	29803061 	st.w	$r1,$r3,12(0xc)
/home/wwt/work/perf_func/lib/puts.c:16
1c000fc8:	57ff87ff 	bl	-124(0xfffff84) # 1c000f4c <putstring>
/home/wwt/work/perf_func/lib/puts.c:17
1c000fcc:	02803404 	addi.w	$r4,$r0,13(0xd)
1c000fd0:	57ff33ff 	bl	-208(0xfffff30) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/puts.c:18
1c000fd4:	02802804 	addi.w	$r4,$r0,10(0xa)
1c000fd8:	57ff2bff 	bl	-216(0xfffff28) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/puts.c:20
1c000fdc:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000fe0:	00150004 	move	$r4,$r0
1c000fe4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000fe8:	4c000020 	jirl	$r0,$r1,0

1c000fec <printbase>:
printbase():
/home/wwt/work/perf_func/lib/printbase.c:2
1c000fec:	02be8063 	addi.w	$r3,$r3,-96(0xfa0)
1c000ff0:	29816077 	st.w	$r23,$r3,88(0x58)
1c000ff4:	29817061 	st.w	$r1,$r3,92(0x5c)
1c000ff8:	29815078 	st.w	$r24,$r3,84(0x54)
1c000ffc:	29814079 	st.w	$r25,$r3,80(0x50)
1c001000:	00150097 	move	$r23,$r4
/home/wwt/work/perf_func/lib/printbase.c:7
1c001004:	580008e0 	beq	$r7,$r0,8(0x8) # 1c00100c <printbase+0x20>
/home/wwt/work/perf_func/lib/printbase.c:7 (discriminator 1)
1c001008:	6000a080 	blt	$r4,$r0,160(0xa0) # 1c0010a8 <printbase+0xbc>
/home/wwt/work/perf_func/lib/printbase.c:14
1c00100c:	5800bee0 	beq	$r23,$r0,188(0xbc) # 1c0010c8 <printbase+0xdc>
1c001010:	0280406c 	addi.w	$r12,$r3,16(0x10)
1c001014:	0280040e 	addi.w	$r14,$r0,1(0x1)
1c001018:	001131ce 	sub.w	$r14,$r14,$r12
1c00101c:	50000800 	b	8(0x8) # 1c001024 <printbase+0x38>
/home/wwt/work/perf_func/lib/printbase.c:17
1c001020:	001501b7 	move	$r23,$r13
/home/wwt/work/perf_func/lib/printbase.c:16
1c001024:	00219aed 	mod.wu	$r13,$r23,$r6
1c001028:	5c0008c0 	bne	$r6,$r0,8(0x8) # 1c001030 <printbase+0x44>
1c00102c:	002a0007 	break	0x7
1c001030:	2900018d 	st.b	$r13,$r12,0
/home/wwt/work/perf_func/lib/printbase.c:17
1c001034:	001031d8 	add.w	$r24,$r14,$r12
1c001038:	00211aed 	div.wu	$r13,$r23,$r6
1c00103c:	5c0008c0 	bne	$r6,$r0,8(0x8) # 1c001044 <printbase+0x58>
1c001040:	002a0007 	break	0x7
1c001044:	0280058c 	addi.w	$r12,$r12,1(0x1)
/home/wwt/work/perf_func/lib/printbase.c:14
1c001048:	6fffdae6 	bgeu	$r23,$r6,-40(0x3ffd8) # 1c001020 <printbase+0x34>
/home/wwt/work/perf_func/lib/printbase.c:22
1c00104c:	600054b8 	blt	$r5,$r24,84(0x54) # 1c0010a0 <printbase+0xb4>
1c001050:	001500b7 	move	$r23,$r5
/home/wwt/work/perf_func/lib/printbase.c:25
1c001054:	02802419 	addi.w	$r25,$r0,9(0x9)
/home/wwt/work/perf_func/lib/printbase.c:24
1c001058:	0280406c 	addi.w	$r12,$r3,16(0x10)
1c00105c:	00105d8c 	add.w	$r12,$r12,$r23
1c001060:	0280c004 	addi.w	$r4,$r0,48(0x30)
1c001064:	60001717 	blt	$r24,$r23,20(0x14) # 1c001078 <printbase+0x8c>
1c001068:	283ffd8c 	ld.b	$r12,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/printbase.c:25 (discriminator 1)
1c00106c:	02815d84 	addi.w	$r4,$r12,87(0x57)
1c001070:	60000b2c 	blt	$r25,$r12,8(0x8) # 1c001078 <printbase+0x8c>
1c001074:	0280c184 	addi.w	$r4,$r12,48(0x30)
1c001078:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c00107c:	57fe87ff 	bl	-380(0xffffe84) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/printbase.c:22 (discriminator 4)
1c001080:	5fffdae0 	bne	$r23,$r0,-40(0x3ffd8) # 1c001058 <printbase+0x6c>
/home/wwt/work/perf_func/lib/printbase.c:28
1c001084:	28817061 	ld.w	$r1,$r3,92(0x5c)
1c001088:	28816077 	ld.w	$r23,$r3,88(0x58)
1c00108c:	28815078 	ld.w	$r24,$r3,84(0x54)
1c001090:	28814079 	ld.w	$r25,$r3,80(0x50)
1c001094:	00150004 	move	$r4,$r0
1c001098:	02818063 	addi.w	$r3,$r3,96(0x60)
1c00109c:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/printbase.c:22
1c0010a0:	00150305 	move	$r5,$r24
1c0010a4:	53ffafff 	b	-84(0xfffffac) # 1c001050 <printbase+0x64>
/home/wwt/work/perf_func/lib/printbase.c:10
1c0010a8:	0280b404 	addi.w	$r4,$r0,45(0x2d)
1c0010ac:	29803066 	st.w	$r6,$r3,12(0xc)
1c0010b0:	29802065 	st.w	$r5,$r3,8(0x8)
1c0010b4:	57fe4fff 	bl	-436(0xffffe4c) # 1c000f00 <putchar>
/home/wwt/work/perf_func/lib/printbase.c:9
1c0010b8:	00115c17 	sub.w	$r23,$r0,$r23
/home/wwt/work/perf_func/lib/printbase.c:10
1c0010bc:	28802065 	ld.w	$r5,$r3,8(0x8)
1c0010c0:	28803066 	ld.w	$r6,$r3,12(0xc)
1c0010c4:	53ff4fff 	b	-180(0xfffff4c) # 1c001010 <printbase+0x24>
/home/wwt/work/perf_func/lib/printbase.c:22
1c0010c8:	67ffbc05 	bge	$r0,$r5,-68(0x3ffbc) # 1c001084 <printbase+0x98>
1c0010cc:	00150018 	move	$r24,$r0
1c0010d0:	53ff83ff 	b	-128(0xfffff80) # 1c001050 <printbase+0x64>

1c0010d4 <strlen>:
strlen():
/home/wwt/work/perf_func/lib/string.c:14
1c0010d4:	2800008c 	ld.b	$r12,$r4,0
1c0010d8:	58002180 	beq	$r12,$r0,32(0x20) # 1c0010f8 <strlen+0x24>
/home/wwt/work/perf_func/lib/string.c:13
1c0010dc:	0015000c 	move	$r12,$r0
/home/wwt/work/perf_func/lib/string.c:15
1c0010e0:	0280058c 	addi.w	$r12,$r12,1(0x1)
/home/wwt/work/perf_func/lib/string.c:14
1c0010e4:	0010308d 	add.w	$r13,$r4,$r12
1c0010e8:	280001ad 	ld.b	$r13,$r13,0
1c0010ec:	5ffff5a0 	bne	$r13,$r0,-12(0x3fff4) # 1c0010e0 <strlen+0xc>
/home/wwt/work/perf_func/lib/string.c:18
1c0010f0:	00150184 	move	$r4,$r12
1c0010f4:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/string.c:13
1c0010f8:	0015000c 	move	$r12,$r0
/home/wwt/work/perf_func/lib/string.c:18
1c0010fc:	00150184 	move	$r4,$r12
1c001100:	4c000020 	jirl	$r0,$r1,0

1c001104 <strnlen>:
strnlen():
/home/wwt/work/perf_func/lib/string.c:36
1c001104:	580030a0 	beq	$r5,$r0,48(0x30) # 1c001134 <strnlen+0x30>
1c001108:	2800008c 	ld.b	$r12,$r4,0
1c00110c:	58002980 	beq	$r12,$r0,40(0x28) # 1c001134 <strnlen+0x30>
/home/wwt/work/perf_func/lib/string.c:35
1c001110:	0015000c 	move	$r12,$r0
1c001114:	50000c00 	b	12(0xc) # 1c001120 <strnlen+0x1c>
/home/wwt/work/perf_func/lib/string.c:36 (discriminator 1)
1c001118:	280001ad 	ld.b	$r13,$r13,0
1c00111c:	580011a0 	beq	$r13,$r0,16(0x10) # 1c00112c <strnlen+0x28>
/home/wwt/work/perf_func/lib/string.c:37
1c001120:	0280058c 	addi.w	$r12,$r12,1(0x1)
/home/wwt/work/perf_func/lib/string.c:36
1c001124:	0010308d 	add.w	$r13,$r4,$r12
1c001128:	5ffff0ac 	bne	$r5,$r12,-16(0x3fff0) # 1c001118 <strnlen+0x14>
/home/wwt/work/perf_func/lib/string.c:40
1c00112c:	00150184 	move	$r4,$r12
1c001130:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/string.c:35
1c001134:	0015000c 	move	$r12,$r0
/home/wwt/work/perf_func/lib/string.c:40
1c001138:	00150184 	move	$r4,$r12
1c00113c:	4c000020 	jirl	$r0,$r1,0

1c001140 <strcpy>:
strcpy():
/home/wwt/work/perf_func/lib/string.c:59
1c001140:	0015008c 	move	$r12,$r4
/home/wwt/work/perf_func/lib/string.c:60
1c001144:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c001148:	283ffcad 	ld.b	$r13,$r5,-1(0xfff)
1c00114c:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c001150:	293ffd8d 	st.b	$r13,$r12,-1(0xfff)
1c001154:	5ffff1a0 	bne	$r13,$r0,-16(0x3fff0) # 1c001144 <strcpy+0x4>
/home/wwt/work/perf_func/lib/string.c:64
1c001158:	4c000020 	jirl	$r0,$r1,0

1c00115c <strncpy>:
strncpy():
/home/wwt/work/perf_func/lib/string.c:79
1c00115c:	580024c0 	beq	$r6,$r0,36(0x24) # 1c001180 <strncpy+0x24>
1c001160:	00101886 	add.w	$r6,$r4,$r6
/home/wwt/work/perf_func/lib/string.c:78
1c001164:	0015008d 	move	$r13,$r4
/home/wwt/work/perf_func/lib/string.c:80
1c001168:	280000ac 	ld.b	$r12,$r5,0
/home/wwt/work/perf_func/lib/string.c:83
1c00116c:	028005ad 	addi.w	$r13,$r13,1(0x1)
/home/wwt/work/perf_func/lib/string.c:80
1c001170:	293ffdac 	st.b	$r12,$r13,-1(0xfff)
/home/wwt/work/perf_func/lib/string.c:81
1c001174:	0012b00c 	sltu	$r12,$r0,$r12
1c001178:	001030a5 	add.w	$r5,$r5,$r12
/home/wwt/work/perf_func/lib/string.c:79
1c00117c:	5fffeda6 	bne	$r13,$r6,-20(0x3ffec) # 1c001168 <strncpy+0xc>
/home/wwt/work/perf_func/lib/string.c:86
1c001180:	4c000020 	jirl	$r0,$r1,0

1c001184 <strncmp>:
strncmp():
/home/wwt/work/perf_func/lib/string.c:101
1c001184:	58003cc0 	beq	$r6,$r0,60(0x3c) # 1c0011c0 <strncmp+0x3c>
1c001188:	2800008d 	ld.b	$r13,$r4,0
1c00118c:	280000ae 	ld.b	$r14,$r5,0
1c001190:	58003da0 	beq	$r13,$r0,60(0x3c) # 1c0011cc <strncmp+0x48>
1c001194:	5c0039ae 	bne	$r13,$r14,56(0x38) # 1c0011cc <strncmp+0x48>
1c001198:	001018a6 	add.w	$r6,$r5,$r6
1c00119c:	50001800 	b	24(0x18) # 1c0011b4 <strncmp+0x30>
/home/wwt/work/perf_func/lib/string.c:101 (discriminator 1)
1c0011a0:	2800008d 	ld.b	$r13,$r4,0
/home/wwt/work/perf_func/lib/string.c:101
1c0011a4:	580025a0 	beq	$r13,$r0,36(0x24) # 1c0011c8 <strncmp+0x44>
/home/wwt/work/perf_func/lib/string.c:101 (discriminator 2)
1c0011a8:	2800018e 	ld.b	$r14,$r12,0
1c0011ac:	00150185 	move	$r5,$r12
/home/wwt/work/perf_func/lib/string.c:101
1c0011b0:	5c001dae 	bne	$r13,$r14,28(0x1c) # 1c0011cc <strncmp+0x48>
/home/wwt/work/perf_func/lib/string.c:102
1c0011b4:	028004ac 	addi.w	$r12,$r5,1(0x1)
1c0011b8:	02800484 	addi.w	$r4,$r4,1(0x1)
/home/wwt/work/perf_func/lib/string.c:101
1c0011bc:	5fffe586 	bne	$r12,$r6,-28(0x3ffe4) # 1c0011a0 <strncmp+0x1c>
/home/wwt/work/perf_func/lib/string.c:104
1c0011c0:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/string.c:105
1c0011c4:	4c000020 	jirl	$r0,$r1,0
1c0011c8:	280004ae 	ld.b	$r14,$r5,1(0x1)
/home/wwt/work/perf_func/lib/string.c:100
1c0011cc:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
/home/wwt/work/perf_func/lib/string.c:104
1c0011d0:	2980306d 	st.w	$r13,$r3,12(0xc)
1c0011d4:	2a00306d 	ld.bu	$r13,$r3,12(0xc)
1c0011d8:	2980306e 	st.w	$r14,$r3,12(0xc)
1c0011dc:	2a003064 	ld.bu	$r4,$r3,12(0xc)
/home/wwt/work/perf_func/lib/string.c:105
1c0011e0:	02804063 	addi.w	$r3,$r3,16(0x10)
/home/wwt/work/perf_func/lib/string.c:104
1c0011e4:	001111a4 	sub.w	$r4,$r13,$r4
/home/wwt/work/perf_func/lib/string.c:105
1c0011e8:	4c000020 	jirl	$r0,$r1,0

1c0011ec <strchr>:
strchr():
/home/wwt/work/perf_func/lib/string.c:117
1c0011ec:	2800008c 	ld.b	$r12,$r4,0
1c0011f0:	58001d80 	beq	$r12,$r0,28(0x1c) # 1c00120c <strchr+0x20>
/home/wwt/work/perf_func/lib/string.c:118
1c0011f4:	5c000d85 	bne	$r12,$r5,12(0xc) # 1c001200 <strchr+0x14>
1c0011f8:	50001c00 	b	28(0x1c) # 1c001214 <strchr+0x28>
1c0011fc:	58001585 	beq	$r12,$r5,20(0x14) # 1c001210 <strchr+0x24>
/home/wwt/work/perf_func/lib/string.c:121
1c001200:	02800484 	addi.w	$r4,$r4,1(0x1)
/home/wwt/work/perf_func/lib/string.c:117
1c001204:	2800008c 	ld.b	$r12,$r4,0
1c001208:	5ffff580 	bne	$r12,$r0,-12(0x3fff4) # 1c0011fc <strchr+0x10>
/home/wwt/work/perf_func/lib/string.c:123
1c00120c:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/string.c:124
1c001210:	4c000020 	jirl	$r0,$r1,0
1c001214:	4c000020 	jirl	$r0,$r1,0

1c001218 <strfind>:
strfind():
/home/wwt/work/perf_func/lib/string.c:137
1c001218:	2800008c 	ld.b	$r12,$r4,0
1c00121c:	58001d80 	beq	$r12,$r0,28(0x1c) # 1c001238 <strfind+0x20>
/home/wwt/work/perf_func/lib/string.c:138
1c001220:	5c000cac 	bne	$r5,$r12,12(0xc) # 1c00122c <strfind+0x14>
1c001224:	50001800 	b	24(0x18) # 1c00123c <strfind+0x24>
1c001228:	58001185 	beq	$r12,$r5,16(0x10) # 1c001238 <strfind+0x20>
/home/wwt/work/perf_func/lib/string.c:141
1c00122c:	02800484 	addi.w	$r4,$r4,1(0x1)
/home/wwt/work/perf_func/lib/string.c:137
1c001230:	2800008c 	ld.b	$r12,$r4,0
1c001234:	5ffff580 	bne	$r12,$r0,-12(0x3fff4) # 1c001228 <strfind+0x10>
/home/wwt/work/perf_func/lib/string.c:144
1c001238:	4c000020 	jirl	$r0,$r1,0
1c00123c:	4c000020 	jirl	$r0,$r1,0

1c001240 <memset>:
memset():
/home/wwt/work/perf_func/lib/string.c:251
1c001240:	580018c0 	beq	$r6,$r0,24(0x18) # 1c001258 <memset+0x18>
1c001244:	00101886 	add.w	$r6,$r4,$r6
/home/wwt/work/perf_func/lib/string.c:250
1c001248:	0015008c 	move	$r12,$r4
/home/wwt/work/perf_func/lib/string.c:252
1c00124c:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c001250:	293ffd85 	st.b	$r5,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/string.c:251
1c001254:	5ffff986 	bne	$r12,$r6,-8(0x3fff8) # 1c00124c <memset+0xc>
/home/wwt/work/perf_func/lib/string.c:256
1c001258:	4c000020 	jirl	$r0,$r1,0

1c00125c <memcpy>:
memcpy():
/home/wwt/work/perf_func/lib/string.c:279
1c00125c:	580020c0 	beq	$r6,$r0,32(0x20) # 1c00127c <memcpy+0x20>
1c001260:	001018a6 	add.w	$r6,$r5,$r6
/home/wwt/work/perf_func/lib/string.c:278
1c001264:	0015008c 	move	$r12,$r4
/home/wwt/work/perf_func/lib/string.c:280
1c001268:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c00126c:	283ffcad 	ld.b	$r13,$r5,-1(0xfff)
1c001270:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c001274:	293ffd8d 	st.b	$r13,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/string.c:279
1c001278:	5ffff0a6 	bne	$r5,$r6,-16(0x3fff0) # 1c001268 <memcpy+0xc>
/home/wwt/work/perf_func/lib/string.c:284
1c00127c:	4c000020 	jirl	$r0,$r1,0

1c001280 <memmove>:
memmove():
/home/wwt/work/perf_func/lib/string.c:302
1c001280:	6c002ca4 	bgeu	$r5,$r4,44(0x2c) # 1c0012ac <memmove+0x2c>
/home/wwt/work/perf_func/lib/string.c:302 (discriminator 1)
1c001284:	001018ac 	add.w	$r12,$r5,$r6
/home/wwt/work/perf_func/lib/string.c:302
1c001288:	6c00248c 	bgeu	$r4,$r12,36(0x24) # 1c0012ac <memmove+0x2c>
/home/wwt/work/perf_func/lib/string.c:303
1c00128c:	0010188d 	add.w	$r13,$r4,$r6
/home/wwt/work/perf_func/lib/string.c:304
1c001290:	58003cc0 	beq	$r6,$r0,60(0x3c) # 1c0012cc <memmove+0x4c>
/home/wwt/work/perf_func/lib/string.c:305
1c001294:	02bffd8c 	addi.w	$r12,$r12,-1(0xfff)
1c001298:	2800018e 	ld.b	$r14,$r12,0
1c00129c:	02bffdad 	addi.w	$r13,$r13,-1(0xfff)
1c0012a0:	290001ae 	st.b	$r14,$r13,0
/home/wwt/work/perf_func/lib/string.c:304
1c0012a4:	5ffff0ac 	bne	$r5,$r12,-16(0x3fff0) # 1c001294 <memmove+0x14>
1c0012a8:	4c000020 	jirl	$r0,$r1,0
1c0012ac:	001018ae 	add.w	$r14,$r5,$r6
/home/wwt/work/perf_func/lib/string.c:308
1c0012b0:	0015008c 	move	$r12,$r4
1c0012b4:	58001cc0 	beq	$r6,$r0,28(0x1c) # 1c0012d0 <memmove+0x50>
/home/wwt/work/perf_func/lib/string.c:309
1c0012b8:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c0012bc:	283ffcad 	ld.b	$r13,$r5,-1(0xfff)
1c0012c0:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0012c4:	293ffd8d 	st.b	$r13,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/string.c:308
1c0012c8:	5ffff0ae 	bne	$r5,$r14,-16(0x3fff0) # 1c0012b8 <memmove+0x38>
/home/wwt/work/perf_func/lib/string.c:314
1c0012cc:	4c000020 	jirl	$r0,$r1,0
1c0012d0:	4c000020 	jirl	$r0,$r1,0

1c0012d4 <memcmp>:
memcmp():
/home/wwt/work/perf_func/lib/string.c:334
1c0012d4:	580030c0 	beq	$r6,$r0,48(0x30) # 1c001304 <memcmp+0x30>
/home/wwt/work/perf_func/lib/string.c:335
1c0012d8:	2800008c 	ld.b	$r12,$r4,0
1c0012dc:	280000ad 	ld.b	$r13,$r5,0
1c0012e0:	00101886 	add.w	$r6,$r4,$r6
1c0012e4:	580015ac 	beq	$r13,$r12,20(0x14) # 1c0012f8 <memcmp+0x24>
1c0012e8:	50002400 	b	36(0x24) # 1c00130c <memcmp+0x38>
1c0012ec:	2800008c 	ld.b	$r12,$r4,0
1c0012f0:	280000ad 	ld.b	$r13,$r5,0
1c0012f4:	5c00198d 	bne	$r12,$r13,24(0x18) # 1c00130c <memcmp+0x38>
/home/wwt/work/perf_func/lib/string.c:338
1c0012f8:	02800484 	addi.w	$r4,$r4,1(0x1)
1c0012fc:	028004a5 	addi.w	$r5,$r5,1(0x1)
/home/wwt/work/perf_func/lib/string.c:334
1c001300:	5fffec86 	bne	$r4,$r6,-20(0x3ffec) # 1c0012ec <memcmp+0x18>
/home/wwt/work/perf_func/lib/string.c:340
1c001304:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/string.c:341
1c001308:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/string.c:331
1c00130c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
/home/wwt/work/perf_func/lib/string.c:336
1c001310:	2980306c 	st.w	$r12,$r3,12(0xc)
1c001314:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c001318:	2980306d 	st.w	$r13,$r3,12(0xc)
1c00131c:	2a003064 	ld.bu	$r4,$r3,12(0xc)
/home/wwt/work/perf_func/lib/string.c:341
1c001320:	02804063 	addi.w	$r3,$r3,16(0x10)
/home/wwt/work/perf_func/lib/string.c:336
1c001324:	00111184 	sub.w	$r4,$r12,$r4
/home/wwt/work/perf_func/lib/string.c:341
1c001328:	4c000020 	jirl	$r0,$r1,0

1c00132c <bzero>:
memset():
/home/wwt/work/perf_func/lib/string.c:251
1c00132c:	580014a0 	beq	$r5,$r0,20(0x14) # 1c001340 <bzero+0x14>
1c001330:	00101485 	add.w	$r5,$r4,$r5
/home/wwt/work/perf_func/lib/string.c:252
1c001334:	02800484 	addi.w	$r4,$r4,1(0x1)
1c001338:	293ffc80 	st.b	$r0,$r4,-1(0xfff)
/home/wwt/work/perf_func/lib/string.c:251
1c00133c:	5ffff885 	bne	$r4,$r5,-8(0x3fff8) # 1c001334 <bzero+0x8>
bzero():
/home/wwt/work/perf_func/lib/string.c:345
1c001340:	4c000020 	jirl	$r0,$r1,0

1c001344 <get_count>:
get_count():
/home/wwt/work/perf_func/lib/time.c:18
1c001344:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001348:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/time.c:7
1c00134c:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c001350:	28800324 	ld.w	$r4,$r25,0
/home/wwt/work/perf_func/lib/time.c:20
1c001354:	28803079 	ld.w	$r25,$r3,12(0xc)
1c001358:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00135c:	4c000020 	jirl	$r0,$r1,0

1c001360 <_get_count>:
_get_count():
/home/wwt/work/perf_func/lib/time.c:20
1c001360:	53ffe7ff 	b	-28(0xfffffe4) # 1c001344 <get_count>

1c001364 <get_count_my>:
get_count_my():
/home/wwt/work/perf_func/lib/time.c:25
1c001364:	00006004 	rdtimel.w	$r4,$r0
/home/wwt/work/perf_func/lib/time.c:30
1c001368:	4c000020 	jirl	$r0,$r1,0

1c00136c <clock_gettime>:
clock_gettime():
/home/wwt/work/perf_func/lib/time.c:33
1c00136c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001370:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c001374:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c001378:	2880032f 	ld.w	$r15,$r25,0
clock_gettime():
/home/wwt/work/perf_func/lib/time.c:36
1c00137c:	0280280d 	addi.w	$r13,$r0,10(0xa)
1c001380:	001c35ed 	mul.w	$r13,$r15,$r13
/home/wwt/work/perf_func/lib/time.c:37
1c001384:	02819010 	addi.w	$r16,$r0,100(0x64)
/home/wwt/work/perf_func/lib/time.c:36
1c001388:	028fa00c 	addi.w	$r12,$r0,1000(0x3e8)
/home/wwt/work/perf_func/lib/time.c:37
1c00138c:	002141ee 	div.wu	$r14,$r15,$r16
1c001390:	5c000a00 	bne	$r16,$r0,8(0x8) # 1c001398 <clock_gettime+0x2c>
1c001394:	002a0007 	break	0x7
1c001398:	0021b1d1 	mod.wu	$r17,$r14,$r12
1c00139c:	5c000980 	bne	$r12,$r0,8(0x8) # 1c0013a4 <clock_gettime+0x38>
1c0013a0:	002a0007 	break	0x7
/home/wwt/work/perf_func/lib/time.c:38
1c0013a4:	1400030e 	lu12i.w	$r14,24(0x18)
1c0013a8:	039a81ce 	ori	$r14,$r14,0x6a0
1c0013ac:	002139f0 	div.wu	$r16,$r15,$r14
1c0013b0:	5c0009c0 	bne	$r14,$r0,8(0x8) # 1c0013b8 <clock_gettime+0x4c>
1c0013b4:	002a0007 	break	0x7
1c0013b8:	0021b20e 	mod.wu	$r14,$r16,$r12
1c0013bc:	5c000980 	bne	$r12,$r0,8(0x8) # 1c0013c4 <clock_gettime+0x58>
1c0013c0:	002a0007 	break	0x7
/home/wwt/work/perf_func/lib/time.c:37
1c0013c4:	298020b1 	st.w	$r17,$r5,8(0x8)
/home/wwt/work/perf_func/lib/time.c:38
1c0013c8:	298030ae 	st.w	$r14,$r5,12(0xc)
/home/wwt/work/perf_func/lib/time.c:39
1c0013cc:	298000a0 	st.w	$r0,$r5,0
/home/wwt/work/perf_func/lib/time.c:42
1c0013d0:	28803079 	ld.w	$r25,$r3,12(0xc)
1c0013d4:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/time.c:36
1c0013d8:	0021b1ae 	mod.wu	$r14,$r13,$r12
1c0013dc:	5c000980 	bne	$r12,$r0,8(0x8) # 1c0013e4 <clock_gettime+0x78>
1c0013e0:	002a0007 	break	0x7
1c0013e4:	298010ae 	st.w	$r14,$r5,4(0x4)
/home/wwt/work/perf_func/lib/time.c:42
1c0013e8:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0013ec:	4c000020 	jirl	$r0,$r1,0

1c0013f0 <get_clock>:
get_clock():
/home/wwt/work/perf_func/lib/time.c:42
1c0013f0:	53ff57ff 	b	-172(0xfffff54) # 1c001344 <get_count>

1c0013f4 <get_ns>:
get_ns():
/home/wwt/work/perf_func/lib/time.c:52
1c0013f4:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0013f8:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c0013fc:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c001400:	28800324 	ld.w	$r4,$r25,0
get_ns():
/home/wwt/work/perf_func/lib/time.c:55
1c001404:	0280280c 	addi.w	$r12,$r0,10(0xa)
/home/wwt/work/perf_func/lib/time.c:57
1c001408:	28803079 	ld.w	$r25,$r3,12(0xc)
1c00140c:	001c3084 	mul.w	$r4,$r4,$r12
1c001410:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001414:	4c000020 	jirl	$r0,$r1,0

1c001418 <get_us>:
get_us():
/home/wwt/work/perf_func/lib/time.c:61
1c001418:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c00141c:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c001420:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c001424:	28800324 	ld.w	$r4,$r25,0
get_us():
/home/wwt/work/perf_func/lib/time.c:64
1c001428:	0281900c 	addi.w	$r12,$r0,100(0x64)
/home/wwt/work/perf_func/lib/time.c:66
1c00142c:	28803079 	ld.w	$r25,$r3,12(0xc)
1c001430:	0021308d 	div.wu	$r13,$r4,$r12
1c001434:	5c000980 	bne	$r12,$r0,8(0x8) # 1c00143c <get_us+0x24>
1c001438:	002a0007 	break	0x7
1c00143c:	001501a4 	move	$r4,$r13
1c001440:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001444:	4c000020 	jirl	$r0,$r1,0

Disassembly of section .data:

1c001448 <crc_32_tab-0x180>:
1c001448:	33637263 	xvstelm.h	$xr3,$r19,-72(0x1b8),0x8
1c00144c:	65742032 	bge	$r1,$r18,95264(0x17420) # 1c01886c <_stack+0x6d74>
1c001450:	62207473 	blt	$r3,$r19,-122764(0x22074) # 1bfe34c4 <data_size+0x1bfe2ddc>
1c001454:	6e696765 	bgeu	$r27,$r5,-104092(0x26964) # 1bfe7db8 <data_size+0x1bfe76d0>
1c001458:	0000002e 	0x0000002e
1c00145c:	ff1b0225 	0xff1b0225
1c001460:	ff55028f 	0xff55028f
1c001464:	ffd402e5 	0xffd402e5
1c001468:	ffc30315 	0xffc30315
1c00146c:	0116035e 	0x0116035e
1c001470:	01240398 	0x01240398
1c001474:	012a03b0 	0x012a03b0
1c001478:	fffe03f4 	0xfffe03f4
1c00147c:	fffd044f 	0xfffd044f
1c001480:	ffc10494 	0xffc10494
1c001484:	ff9d04fb 	0xff9d04fb
1c001488:	ff690593 	0xff690593
1c00148c:	ff3f062b 	0xff3f062b
1c001490:	ff0406c1 	0xff0406c1
1c001494:	fefa0791 	0xfefa0791
1c001498:	feb7088b 	0xfeb7088b
1c00149c:	fe8d0956 	0xfe8d0956
1c0014a0:	fe480a05 	0xfe480a05
1c0014a4:	fe270adf 	0xfe270adf
1c0014a8:	fe040b9c 	0xfe040b9c
1c0014ac:	fde30c0f 	0xfde30c0f
1c0014b0:	fde40c84 	0xfde40c84
1c0014b4:	fe120cf0 	0xfe120cf0
1c0014b8:	fe260d2e 	0xfe260d2e
1c0014bc:	fe980d69 	0xfe980d69
1c0014c0:	febb0d9a 	0xfebb0d9a
1c0014c4:	ff450d9e 	0xff450d9e
1c0014c8:	ff880d81 	0xff880d81
1c0014cc:	fff60d45 	0xfff60d45
1c0014d0:	016b0ce9 	0x016b0ce9
1c0014d4:	01ee0c6d 	0x01ee0c6d
1c0014d8:	017a0bcb 	0x017a0bcb
1c0014dc:	02180b35 	slti	$r21,$r25,1538(0x602)
1c0014e0:	028a0ab7 	addi.w	$r23,$r21,642(0x282)
1c0014e4:	033e0a3c 	lu52i.d	$r28,$r17,-126(0xf82)
1c0014e8:	039c09de 	ori	$r30,$r14,0x702
1c0014ec:	0448098c 	csrxchg	$r12,$r12,0x1202
1c0014f0:	04b1092f 	csrxchg	$r15,$r9,0x2c42
1c0014f4:	05260902 	0x05260902
1c0014f8:	058708f9 	0x058708f9
1c0014fc:	05e008e4 	0x05e008e4
1c001500:	05db0905 	0x05db0905
1c001504:	066b096c 	0x066b096c
1c001508:	062009ef 	cacop	0xf,$r15,-2046(0x802)
1c00150c:	06760a9a 	0x06760a9a
1c001510:	06710b47 	0x06710b47
1c001514:	06680bdb 	0x06680bdb
1c001518:	062e0c89 	cacop	0x9,$r4,-1149(0xb83)
1c00151c:	06250d32 	cacop	0x12,$r9,-1725(0x943)
1c001520:	05f00da1 	0x05f00da1
1c001524:	00000000 	0x00000000
1c001528:	33637263 	xvstelm.h	$xr3,$r19,-72(0x1b8),0x8
1c00152c:	41502032 	beqz	$r1,-3583968(0x495020) # 1bc9654c <data_size+0x1bc95e64>
1c001530:	00215353 	div.wu	$r19,$r26,$r20
1c001534:	33637263 	xvstelm.h	$xr3,$r19,-72(0x1b8),0x8
1c001538:	52452032 	b	13255968(0xca4520) # 1cca5a58 <_stack+0xc93f60>
1c00153c:	21454f52 	sc.w	$r18,$r26,17740(0x454c)
1c001540:	00002121 	clo.d	$r1,$r9
1c001544:	33637263 	xvstelm.h	$xr3,$r19,-72(0x1b8),0x8
1c001548:	54203a32 	bl	-121102280(0x8c82038) # 14c83580 <data_size+0x14c82e98>
1c00154c:	6c61746f 	bgeu	$r3,$r15,24948(0x6174) # 1c0076c0 <_heap+0x54c0>
1c001550:	756f4320 	0x756f4320
1c001554:	5328746e 	b	29042804(0x1bb2874) # 1dbb3dc8 <_stack+0x1ba22d0>
1c001558:	6320436f 	blt	$r27,$r15,-57280(0x32040) # 1bff3598 <data_size+0x1bff2eb0>
1c00155c:	746e756f 	0x746e756f
1c001560:	203d2029 	ll.w	$r9,$r1,15648(0x3d20)
1c001564:	78257830 	0x78257830
1c001568:	0000000a 	0x0000000a
1c00156c:	33637263 	xvstelm.h	$xr3,$r19,-72(0x1b8),0x8
1c001570:	54203a32 	bl	-121102280(0x8c82038) # 14c835a8 <data_size+0x14c82ec0>
1c001574:	6c61746f 	bgeu	$r3,$r15,24948(0x6174) # 1c0076e8 <_heap+0x54e8>
1c001578:	756f4320 	0x756f4320
1c00157c:	4328746e 	beqz	$r3,3876980(0x3b2874) # 1c3b3df0 <_stack+0x3a22f8>
1c001580:	63205550 	blt	$r10,$r16,-57260(0x32054) # 1bff35d4 <data_size+0x1bff2eec>
1c001584:	746e756f 	0x746e756f
1c001588:	203d2029 	ll.w	$r9,$r1,15648(0x3d20)
1c00158c:	78257830 	0x78257830
1c001590:	0000000a 	0x0000000a
1c001594:	72617473 	0x72617473
1c001598:	00000074 	0x00000074
1c00159c:	3a6e656c 	0x3a6e656c
1c0015a0:	0a752520 	0x0a752520
1c0015a4:	00000000 	0x00000000
1c0015a8:	0a646c25 	xvfmsub.d	$xr5,$xr1,$xr27,$xr8
1c0015ac:	00000000 	0x00000000
1c0015b0:	000a7825 	0x000a7825
1c0015b4:	00646e65 	bstrins.w	$r5,$r19,0x4,0x1b
1c0015b8:	6c383025 	bgeu	$r1,$r5,14384(0x3830) # 1c004de8 <_heap+0x2be8>
1c0015bc:	25202c58 	stptr.w	$r24,$r2,8236(0x202c)
1c0015c0:	646c3830 	bge	$r1,$r16,27704(0x6c38) # 1c0081f8 <_heap+0x5ff8>
1c0015c4:	0000000a 	0x0000000a

1c0015c8 <crc_32_tab>:
1c0015c8:	00000000 	0x00000000
1c0015cc:	77073096 	0x77073096
1c0015d0:	ee0e612c 	0xee0e612c
1c0015d4:	990951ba 	0x990951ba
1c0015d8:	076dc419 	0x076dc419
1c0015dc:	706af48f 	vavgr.hu	$vr15,$vr4,$vr29
1c0015e0:	e963a535 	0xe963a535
1c0015e4:	9e6495a3 	0x9e6495a3
1c0015e8:	0edb8832 	0x0edb8832
1c0015ec:	79dcb8a4 	0x79dcb8a4
1c0015f0:	e0d5e91e 	0xe0d5e91e
1c0015f4:	97d2d988 	0x97d2d988
1c0015f8:	09b64c2b 	0x09b64c2b
1c0015fc:	7eb17cbd 	0x7eb17cbd
1c001600:	e7b82d07 	0xe7b82d07
1c001604:	90bf1d91 	0x90bf1d91
1c001608:	1db71064 	pcaddu12i	$r4,-149373(0xdb883)
1c00160c:	6ab020f2 	bltu	$r7,$r18,-85984(0x2b020) # 1bfec62c <data_size+0x1bfebf44>
1c001610:	f3b97148 	0xf3b97148
1c001614:	84be41de 	0x84be41de
1c001618:	1adad47d 	pcalau12i	$r29,448163(0x6d6a3)
1c00161c:	6ddde4eb 	bgeu	$r7,$r11,122340(0x1dde4) # 1c01f400 <_stack+0xd908>
1c001620:	f4d4b551 	0xf4d4b551
1c001624:	83d385c7 	0x83d385c7
1c001628:	136c9856 	addu16i.d	$r22,$r2,-9434(0xdb26)
1c00162c:	646ba8c0 	bge	$r6,$r0,27560(0x6ba8) # 1c0081d4 <_heap+0x5fd4>
1c001630:	fd62f97a 	0xfd62f97a
1c001634:	8a65c9ec 	0x8a65c9ec
1c001638:	14015c4f 	lu12i.w	$r15,2786(0xae2)
1c00163c:	63066cd9 	blt	$r6,$r25,-63892(0x3066c) # 1bff1ca8 <data_size+0x1bff15c0>
1c001640:	fa0f3d63 	0xfa0f3d63
1c001644:	8d080df5 	0x8d080df5
1c001648:	3b6e20c8 	0x3b6e20c8
1c00164c:	4c69105e 	jirl	$r30,$r2,26896(0x6910)
1c001650:	d56041e4 	0xd56041e4
1c001654:	a2677172 	0xa2677172
1c001658:	3c03e4d1 	0x3c03e4d1
1c00165c:	4b04d447 	bceqz	$fcc2,2032852(0x1f04d4) # 1c1f1b30 <_stack+0x1e0038>
1c001660:	d20d85fd 	0xd20d85fd
1c001664:	a50ab56b 	0xa50ab56b
1c001668:	35b5a8fa 	0x35b5a8fa
1c00166c:	42b2986c 	beqz	$r3,3322520(0x32b298) # 1c32c904 <_stack+0x31ae0c>
1c001670:	dbbbc9d6 	0xdbbbc9d6
1c001674:	acbcf940 	0xacbcf940
1c001678:	32d86ce3 	0x32d86ce3
1c00167c:	45df5c75 	bnez	$r3,-2760868(0x55df5c) # 1bd5f5d8 <data_size+0x1bd5eef0>
1c001680:	dcd60dcf 	0xdcd60dcf
1c001684:	abd13d59 	0xabd13d59
1c001688:	26d930ac 	ldptr.d	$r12,$r5,-9936(0xd930)
1c00168c:	51de003a 	b	15326720(0xe9de00) # 1ce9f48c <_stack+0xe8d994>
1c001690:	c8d75180 	0xc8d75180
1c001694:	bfd06116 	0xbfd06116
1c001698:	21b4f4b5 	sc.w	$r21,$r5,-19212(0xb4f4)
1c00169c:	56b3c423 	bl	9352132(0x8eb3c4) # 1c8eca60 <_stack+0x8daf68>
1c0016a0:	cfba9599 	0xcfba9599
1c0016a4:	b8bda50f 	0xb8bda50f
1c0016a8:	2802b89e 	ld.b	$r30,$r4,174(0xae)
1c0016ac:	5f058808 	bne	$r0,$r8,-64120(0x30588) # 1bff1c34 <data_size+0x1bff154c>
1c0016b0:	c60cd9b2 	0xc60cd9b2
1c0016b4:	b10be924 	0xb10be924
1c0016b8:	2f6f7c87 	0x2f6f7c87
1c0016bc:	58684c11 	beq	$r0,$r17,26700(0x684c) # 1c007f08 <_heap+0x5d08>
1c0016c0:	c1611dab 	0xc1611dab
1c0016c4:	b6662d3d 	0xb6662d3d
1c0016c8:	76dc4190 	0x76dc4190
1c0016cc:	01db7106 	0x01db7106
1c0016d0:	98d220bc 	0x98d220bc
1c0016d4:	efd5102a 	0xefd5102a
1c0016d8:	71b18589 	0x71b18589
1c0016dc:	06b6b51f 	0x06b6b51f
1c0016e0:	9fbfe4a5 	0x9fbfe4a5
1c0016e4:	e8b8d433 	0xe8b8d433
1c0016e8:	7807c9a2 	0x7807c9a2
1c0016ec:	0f00f934 	0x0f00f934
1c0016f0:	9609a88e 	0x9609a88e
1c0016f4:	e10e9818 	0xe10e9818
1c0016f8:	7f6a0dbb 	0x7f6a0dbb
1c0016fc:	086d3d2d 	fmsub.d	$f13,$f9,$f15,$f26
1c001700:	91646c97 	0x91646c97
1c001704:	e6635c01 	0xe6635c01
1c001708:	6b6b51f4 	bltu	$r15,$r20,-38064(0x36b50) # 1bff8258 <data_size+0x1bff7b70>
1c00170c:	1c6c6162 	pcaddu12i	$r2,221963(0x3630b)
1c001710:	856530d8 	0x856530d8
1c001714:	f262004e 	0xf262004e
1c001718:	6c0695ed 	bgeu	$r15,$r13,1684(0x694) # 1c001dac <__bss_start+0x27c>
1c00171c:	1b01a57b 	pcalau12i	$r27,-520917(0x80d2b)
1c001720:	8208f4c1 	0x8208f4c1
1c001724:	f50fc457 	0xf50fc457
1c001728:	65b0d9c6 	bge	$r14,$r6,110808(0x1b0d8) # 1c01c800 <_stack+0xad08>
1c00172c:	12b7e950 	addu16i.d	$r16,$r10,-20998(0xadfa)
1c001730:	8bbeb8ea 	0x8bbeb8ea
1c001734:	fcb9887c 	0xfcb9887c
1c001738:	62dd1ddf 	blt	$r14,$r31,-74468(0x2dd1c) # 1bfef454 <data_size+0x1bfeed6c>
1c00173c:	15da2d49 	lu12i.w	$r9,-77462(0xed16a)
1c001740:	8cd37cf3 	0x8cd37cf3
1c001744:	fbd44c65 	0xfbd44c65
1c001748:	4db26158 	jirl	$r24,$r10,111200(0x1b260)
1c00174c:	3ab551ce 	0x3ab551ce
1c001750:	a3bc0074 	0xa3bc0074
1c001754:	d4bb30e2 	0xd4bb30e2
1c001758:	4adfa541 	bcnez	$fcc2,450468(0x6dfa4) # 1c06f6fc <_stack+0x5dc04>
1c00175c:	3dd895d7 	0x3dd895d7
1c001760:	a4d1c46d 	0xa4d1c46d
1c001764:	d3d6f4fb 	0xd3d6f4fb
1c001768:	4369e96a 	beqz	$r11,2845160(0x2b69e8) # 1c2b8150 <_stack+0x2a6658>
1c00176c:	346ed9fc 	0x346ed9fc
1c001770:	ad678846 	0xad678846
1c001774:	da60b8d0 	0xda60b8d0
1c001778:	44042d73 	bnez	$r11,-3406804(0x4c042c) # 1bcc1ba4 <data_size+0x1bcc14bc>
1c00177c:	33031de5 	0x33031de5
1c001780:	aa0a4c5f 	0xaa0a4c5f
1c001784:	dd0d7cc9 	0xdd0d7cc9
1c001788:	5005713c 	b	82838896(0x4f00570) # 20f01cf8 <_stack+0x4ef0200>
1c00178c:	270241aa 	stptr.d	$r10,$r13,576(0x240)
1c001790:	be0b1010 	0xbe0b1010
1c001794:	c90c2086 	0xc90c2086
1c001798:	5768b525 	bl	77031604(0x49768b4) # 2097804c <_stack+0x4966554>
1c00179c:	206f85b3 	ll.w	$r19,$r13,28548(0x6f84)
1c0017a0:	b966d409 	0xb966d409
1c0017a4:	ce61e49f 	0xce61e49f
1c0017a8:	5edef90e 	bne	$r8,$r14,-73992(0x2def8) # 1bfef6a0 <data_size+0x1bfeefb8>
1c0017ac:	29d9c998 	st.d	$r24,$r12,1650(0x672)
1c0017b0:	b0d09822 	0xb0d09822
1c0017b4:	c7d7a8b4 	0xc7d7a8b4
1c0017b8:	59b33d17 	beq	$r8,$r23,111420(0x1b33c) # 1c01caf4 <_stack+0xaffc>
1c0017bc:	2eb40d81 	0x2eb40d81
1c0017c0:	b7bd5c3b 	0xb7bd5c3b
1c0017c4:	c0ba6cad 	0xc0ba6cad
1c0017c8:	edb88320 	0xedb88320
1c0017cc:	9abfb3b6 	0x9abfb3b6
1c0017d0:	03b6e20c 	ori	$r12,$r16,0xdb8
1c0017d4:	74b1d29a 	0x74b1d29a
1c0017d8:	ead54739 	0xead54739
1c0017dc:	9dd277af 	0x9dd277af
1c0017e0:	04db2615 	csrxchg	$r21,$r16,0x36c9
1c0017e4:	73dc1683 	vnori.b	$vr3,$vr20,0x5
1c0017e8:	e3630b12 	0xe3630b12
1c0017ec:	94643b84 	0x94643b84
1c0017f0:	0d6d6a3e 	xvshuf.b	$xr30,$xr17,$xr26,$xr26
1c0017f4:	7a6a5aa8 	0x7a6a5aa8
1c0017f8:	e40ecf0b 	0xe40ecf0b
1c0017fc:	9309ff9d 	0x9309ff9d
1c001800:	0a00ae27 	0x0a00ae27
1c001804:	7d079eb1 	0x7d079eb1
1c001808:	f00f9344 	0xf00f9344
1c00180c:	8708a3d2 	0x8708a3d2
1c001810:	1e01f268 	pcaddu18i	$r8,3987(0xf93)
1c001814:	6906c2fe 	bltu	$r23,$r30,67264(0x106c0) # 1c011ed4 <_stack+0x3dc>
1c001818:	f762575d 	0xf762575d
1c00181c:	806567cb 	0x806567cb
1c001820:	196c3671 	pcaddi	$r17,-302669(0xb61b3)
1c001824:	6e6b06e7 	bgeu	$r23,$r7,-103676(0x26b04) # 1bfe8328 <data_size+0x1bfe7c40>
1c001828:	fed41b76 	0xfed41b76
1c00182c:	89d32be0 	0x89d32be0
1c001830:	10da7a5a 	addu16i.d	$r26,$r18,13982(0x369e)
1c001834:	67dd4acc 	bge	$r22,$r12,-8888(0x3dd48) # 1bfff57c <data_size+0x1bffee94>
1c001838:	f9b9df6f 	0xf9b9df6f
1c00183c:	8ebeeff9 	0x8ebeeff9
1c001840:	17b7be43 	lu32i.d	$r3,-147982(0xdbdf2)
1c001844:	60b08ed5 	blt	$r22,$r21,45196(0xb08c) # 1c00c8d0 <_heap+0xa6d0>
1c001848:	d6d6a3e8 	0xd6d6a3e8
1c00184c:	a1d1937e 	0xa1d1937e
1c001850:	38d8c2c4 	0x38d8c2c4
1c001854:	4fdff252 	jirl	$r18,$r18,-8208(0x3dff0)
1c001858:	d1bb67f1 	0xd1bb67f1
1c00185c:	a6bc5767 	0xa6bc5767
1c001860:	3fb506dd 	0x3fb506dd
1c001864:	48b2364b 	0x48b2364b
1c001868:	d80d2bda 	0xd80d2bda
1c00186c:	af0a1b4c 	0xaf0a1b4c
1c001870:	36034af6 	0x36034af6
1c001874:	41047a60 	beqz	$r19,66680(0x10478) # 1c011cec <_stack+0x1f4>
1c001878:	df60efc3 	0xdf60efc3
1c00187c:	a867df55 	0xa867df55
1c001880:	316e8eef 	0x316e8eef
1c001884:	4669be79 	bnez	$r19,-1676868(0x6669bc) # 1be68240 <data_size+0x1be67b58>
1c001888:	cb61b38c 	0xcb61b38c
1c00188c:	bc66831a 	0xbc66831a
1c001890:	256fd2a0 	stptr.w	$r0,$r21,28624(0x6fd0)
1c001894:	5268e236 	b	-119904032(0x8da68e0) # 14da8174 <data_size+0x14da7a8c>
1c001898:	cc0c7795 	0xcc0c7795
1c00189c:	bb0b4703 	0xbb0b4703
1c0018a0:	220216b9 	ll.d	$r25,$r21,532(0x214)
1c0018a4:	5505262f 	bl	-121830108(0x8bd0524) # 14bd1dc8 <data_size+0x14bd16e0>
1c0018a8:	c5ba3bbe 	0xc5ba3bbe
1c0018ac:	b2bd0b28 	0xb2bd0b28
1c0018b0:	2bb45a92 	fld.d	$f18,$r20,-746(0xd16)
1c0018b4:	5cb36a04 	bne	$r16,$r4,45928(0xb368) # 1c00cc1c <_heap+0xaa1c>
1c0018b8:	c2d7ffa7 	0xc2d7ffa7
1c0018bc:	b5d0cf31 	0xb5d0cf31
1c0018c0:	2cd99e8b 	xvst	$xr11,$r20,1639(0x667)
1c0018c4:	5bdeae1d 	beq	$r16,$r29,-8532(0x3deac) # 1bfff770 <data_size+0x1bfff088>
1c0018c8:	9b64c2b0 	0x9b64c2b0
1c0018cc:	ec63f226 	0xec63f226
1c0018d0:	756aa39c 	0x756aa39c
1c0018d4:	026d930a 	sltui	$r10,$r24,-1180(0xb64)
1c0018d8:	9c0906a9 	0x9c0906a9
1c0018dc:	eb0e363f 	0xeb0e363f
1c0018e0:	72076785 	0x72076785
1c0018e4:	05005713 	0x05005713
1c0018e8:	95bf4a82 	0x95bf4a82
1c0018ec:	e2b87a14 	0xe2b87a14
1c0018f0:	7bb12bae 	0x7bb12bae
1c0018f4:	0cb61b38 	0x0cb61b38
1c0018f8:	92d28e9b 	0x92d28e9b
1c0018fc:	e5d5be0d 	0xe5d5be0d
1c001900:	7cdcefb7 	0x7cdcefb7
1c001904:	0bdbdf21 	0x0bdbdf21
1c001908:	86d3d2d4 	0x86d3d2d4
1c00190c:	f1d4e242 	0xf1d4e242
1c001910:	68ddb3f8 	bltu	$r31,$r24,56752(0xddb0) # 1c00f6c0 <_heap+0xd4c0>
1c001914:	1fda836e 	pcaddu18i	$r14,-76773(0xed41b)
1c001918:	81be16cd 	0x81be16cd
1c00191c:	f6b9265b 	0xf6b9265b
1c001920:	6fb077e1 	bgeu	$r31,$r1,-20364(0x3b074) # 1bffc994 <data_size+0x1bffc2ac>
1c001924:	18b74777 	pcaddi	$r23,375355(0x5ba3b)
1c001928:	88085ae6 	0x88085ae6
1c00192c:	ff0f6a70 	0xff0f6a70
1c001930:	66063bca 	bge	$r30,$r10,-129480(0x20638) # 1bfe1f68 <data_size+0x1bfe1880>
1c001934:	11010b5c 	addu16i.d	$r28,$r26,16450(0x4042)
1c001938:	8f659eff 	0x8f659eff
1c00193c:	f862ae69 	0xf862ae69
1c001940:	616bffd3 	blt	$r30,$r19,93180(0x16bfc) # 1c01853c <_stack+0x6a44>
1c001944:	166ccf45 	lu32i.d	$r5,222842(0x3667a)
1c001948:	a00ae278 	0xa00ae278
1c00194c:	d70dd2ee 	0xd70dd2ee
1c001950:	4e048354 	jirl	$r20,$r26,-129920(0x20480)
1c001954:	3903b3c2 	0x3903b3c2
1c001958:	a7672661 	0xa7672661
1c00195c:	d06016f7 	0xd06016f7
1c001960:	4969474d 	0x4969474d
1c001964:	3e6e77db 	0x3e6e77db
1c001968:	aed16a4a 	0xaed16a4a
1c00196c:	d9d65adc 	0xd9d65adc
1c001970:	40df0b66 	beqz	$r27,1629960(0x18df08) # 1c18f878 <_stack+0x17dd80>
1c001974:	37d83bf0 	0x37d83bf0
1c001978:	a9bcae53 	0xa9bcae53
1c00197c:	debb9ec5 	0xdebb9ec5
1c001980:	47b2cf7f 	bnez	$r27,-19764(0x7fb2cc) # 1bffcc4c <data_size+0x1bffc564>
1c001984:	30b5ffe9 	vldrepl.b	$vr9,$r31,-641(0xd7f)
1c001988:	bdbdf21c 	0xbdbdf21c
1c00198c:	cabac28a 	0xcabac28a
1c001990:	53b39330 	b	-54283376(0xcc3b390) # 18c3cd20 <data_size+0x18c3c638>
1c001994:	24b4a3a6 	ldptr.w	$r6,$r29,-19296(0xb4a0)
1c001998:	bad03605 	0xbad03605
1c00199c:	cdd70693 	0xcdd70693
1c0019a0:	54de5729 	bl	-56304044(0xca4de54) # 18a4f7f4 <data_size+0x18a4f10c>
1c0019a4:	23d967bf 	sc.d	$r31,$r29,-9884(0xd964)
1c0019a8:	b3667a2e 	0xb3667a2e
1c0019ac:	c4614ab8 	0xc4614ab8
1c0019b0:	5d681b02 	bne	$r24,$r2,92184(0x16818) # 1c0181c8 <_stack+0x66d0>
1c0019b4:	2a6f2b94 	ld.hu	$r20,$r28,-1078(0xbca)
1c0019b8:	b40bbe37 	0xb40bbe37
1c0019bc:	c30c8ea1 	0xc30c8ea1
1c0019c0:	5a05df1b 	beq	$r24,$r27,-129572(0x205dc) # 1bfe1f9c <data_size+0x1bfe18b4>
1c0019c4:	2d02ef8d 	0x2d02ef8d
1c0019c8:	1c000ee4 	pcaddu12i	$r4,119(0x77)
1c0019cc:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c0019d0:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c0019d4:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c0019d8:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c0019dc:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c0019e0:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c0019e4:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c0019e8:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c0019ec:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c0019f0:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c0019f4:	1c000dc8 	pcaddu12i	$r8,110(0x6e)
1c0019f8:	1c000dd4 	pcaddu12i	$r20,110(0x6e)
1c0019fc:	1c000dd4 	pcaddu12i	$r20,110(0x6e)
1c001a00:	1c000dd4 	pcaddu12i	$r20,110(0x6e)
1c001a04:	1c000dd4 	pcaddu12i	$r20,110(0x6e)
1c001a08:	1c000dd4 	pcaddu12i	$r20,110(0x6e)
1c001a0c:	1c000dd4 	pcaddu12i	$r20,110(0x6e)
1c001a10:	1c000dd4 	pcaddu12i	$r20,110(0x6e)
1c001a14:	1c000dd4 	pcaddu12i	$r20,110(0x6e)
1c001a18:	1c000dd4 	pcaddu12i	$r20,110(0x6e)
1c001a1c:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a20:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a24:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a28:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a2c:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a30:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a34:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a38:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a3c:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a40:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a44:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a48:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a4c:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a50:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a54:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a58:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a5c:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a60:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a64:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a68:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a6c:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a70:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a74:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a78:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a7c:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a80:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a84:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a88:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a8c:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a90:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a94:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a98:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001a9c:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001aa0:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001aa4:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001aa8:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001aac:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001ab0:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001ab4:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001ab8:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001abc:	1c000e14 	pcaddu12i	$r20,112(0x70)
1c001ac0:	1c000e30 	pcaddu12i	$r16,113(0x71)
1c001ac4:	1c000e44 	pcaddu12i	$r4,114(0x72)
1c001ac8:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001acc:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001ad0:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001ad4:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001ad8:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001adc:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001ae0:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001ae4:	1c000e60 	pcaddu12i	$r0,115(0x73)
1c001ae8:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001aec:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001af0:	1c000e7c 	pcaddu12i	$r28,115(0x73)
1c001af4:	1c000e98 	pcaddu12i	$r24,116(0x74)
1c001af8:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001afc:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001b00:	1c000eb4 	pcaddu12i	$r20,117(0x75)
1c001b04:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001b08:	1c000ec8 	pcaddu12i	$r8,118(0x76)
1c001b0c:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001b10:	1c000ef4 	pcaddu12i	$r20,119(0x77)
1c001b14:	1c000e98 	pcaddu12i	$r24,116(0x74)

1c001b18 <__CTOR_LIST__>:
	...

1c001b20 <__CTOR_END__>:
	...

1c001b28 <__DTOR_END__>:
__DTOR_END__():
1c001b28:	00000000 	0x00000000
1c001b2c:	1c011af8 	pcaddu12i	$r24,2263(0x8d7)

Disassembly of section .eh_frame:

1c001b30 <.eh_frame>:
1c001b30:	0000000c 	0x0000000c
1c001b34:	00000000 	0x00000000
1c001b38:	7c010003 	0x7c010003
1c001b3c:	00030c01 	0x00030c01
1c001b40:	00000058 	0x00000058
1c001b44:	00000014 	0x00000014
1c001b48:	1c0003a0 	pcaddu12i	$r0,29(0x1d)
1c001b4c:	00000174 	0x00000174
1c001b50:	00000404 	0x00000404
1c001b54:	04200e00 	csrxchg	$r0,$r16,0x803
1c001b58:	00000020 	0x00000020
1c001b5c:	059a0181 	0x059a0181
1c001b60:	0297069b 	addi.w	$r27,$r20,1473(0x5c1)
1c001b64:	04990398 	csrxchg	$r24,$r28,0x2640
1c001b68:	0000c004 	0x0000c004
1c001b6c:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c001b70:	00000004 	0x00000004
1c001b74:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c001b78:	04d80000 	csrrd	$r0,0x3600
1c001b7c:	00000004 	0x00000004
1c001b80:	000404d9 	alsl.w	$r25,$r6,$r1,0x1
1c001b84:	04da0000 	csrrd	$r0,0x3680
1c001b88:	00000008 	0x00000008
1c001b8c:	000c04db 	bytepick.d	$r27,$r6,$r1,0x0
1c001b90:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c001b94:	00000804 	0x00000804
1c001b98:	00000b00 	0x00000b00
1c001b9c:	0000000c 	0x0000000c
1c001ba0:	00000070 	0x00000070
1c001ba4:	1c000520 	pcaddu12i	$r0,41(0x29)
1c001ba8:	00000028 	0x00000028
1c001bac:	00000068 	0x00000068
1c001bb0:	00000080 	0x00000080
1c001bb4:	1c000550 	pcaddu12i	$r16,42(0x2a)
1c001bb8:	00000204 	0x00000204
1c001bbc:	00000404 	0x00000404
1c001bc0:	04400e00 	csrxchg	$r0,$r16,0x1003
1c001bc4:	00000024 	0x00000024
1c001bc8:	02970181 	addi.w	$r1,$r12,1472(0x5c0)
1c001bcc:	04990398 	csrxchg	$r24,$r28,0x2640
1c001bd0:	069b059a 	0x069b059a
1c001bd4:	089d079c 	fnmadd.s	$f28,$f28,$f1,$f26
1c001bd8:	a804099e 	0xa804099e
1c001bdc:	c1000001 	0xc1000001
1c001be0:	00000c04 	0x00000c04
1c001be4:	0404d700 	csrxchg	$r0,$r24,0x135
1c001be8:	d8000000 	0xd8000000
1c001bec:	00000404 	0x00000404
1c001bf0:	0404d900 	csrxchg	$r0,$r8,0x136
1c001bf4:	da000000 	0xda000000
1c001bf8:	00000404 	0x00000404
1c001bfc:	0404db00 	csrxchg	$r0,$r24,0x136
1c001c00:	dc000000 	0xdc000000
1c001c04:	00000404 	0x00000404
1c001c08:	0404dd00 	csrxchg	$r0,$r8,0x137
1c001c0c:	de000000 	0xde000000
1c001c10:	00000804 	0x00000804
1c001c14:	00000e00 	0x00000e00
1c001c18:	0000000c 	0x0000000c
1c001c1c:	000000ec 	0x000000ec
1c001c20:	1c000760 	pcaddu12i	$r0,59(0x3b)
1c001c24:	00000130 	0x00000130
1c001c28:	00000068 	0x00000068
1c001c2c:	000000fc 	0x000000fc
1c001c30:	1c000890 	pcaddu12i	$r16,68(0x44)
1c001c34:	00000200 	0x00000200
1c001c38:	00000404 	0x00000404
1c001c3c:	04400e00 	csrxchg	$r0,$r16,0x1003
1c001c40:	00000024 	0x00000024
1c001c44:	02970181 	addi.w	$r1,$r12,1472(0x5c0)
1c001c48:	04990398 	csrxchg	$r24,$r28,0x2640
1c001c4c:	069b059a 	0x069b059a
1c001c50:	089d079c 	fnmadd.s	$f28,$f28,$f1,$f26
1c001c54:	a404099e 	0xa404099e
1c001c58:	c1000001 	0xc1000001
1c001c5c:	00001004 	clo.w	$r4,$r0
1c001c60:	0404d700 	csrxchg	$r0,$r24,0x135
1c001c64:	d8000000 	0xd8000000
1c001c68:	00000404 	0x00000404
1c001c6c:	0404d900 	csrxchg	$r0,$r8,0x136
1c001c70:	da000000 	0xda000000
1c001c74:	00000404 	0x00000404
1c001c78:	0404db00 	csrxchg	$r0,$r24,0x136
1c001c7c:	dc000000 	0xdc000000
1c001c80:	00000404 	0x00000404
1c001c84:	0404dd00 	csrxchg	$r0,$r8,0x137
1c001c88:	de000000 	0xde000000
1c001c8c:	00000404 	0x00000404
1c001c90:	00000e00 	0x00000e00
1c001c94:	0000000c 	0x0000000c
1c001c98:	00000168 	0x00000168
1c001c9c:	1c000a90 	pcaddu12i	$r16,84(0x54)
1c001ca0:	00000060 	0x00000060
1c001ca4:	00000090 	0x00000090
1c001ca8:	00000178 	0x00000178
1c001cac:	1c000af0 	pcaddu12i	$r16,87(0x57)
1c001cb0:	000000c0 	0x000000c0
1c001cb4:	00000404 	0x00000404
1c001cb8:	04200e00 	csrxchg	$r0,$r16,0x803
1c001cbc:	00000004 	0x00000004
1c001cc0:	08040499 	0x08040499
1c001cc4:	9a000000 	0x9a000000
1c001cc8:	00140405 	nor	$r5,$r0,$r1
1c001ccc:	02970000 	addi.w	$r0,$r0,1472(0x5c0)
1c001cd0:	069b0398 	0x069b0398
1c001cd4:	00000804 	0x00000804
1c001cd8:	04018100 	csrxchg	$r0,$r8,0x60
1c001cdc:	0000004c 	0x0000004c
1c001ce0:	0404c10a 	csrxchg	$r10,$r8,0x130
1c001ce4:	d7000000 	0xd7000000
1c001ce8:	00000404 	0x00000404
1c001cec:	0404d800 	csrrd	$r0,0x136
1c001cf0:	d9000000 	0xd9000000
1c001cf4:	00000404 	0x00000404
1c001cf8:	0404da00 	csrxchg	$r0,$r16,0x136
1c001cfc:	db000000 	0xdb000000
1c001d00:	00000804 	0x00000804
1c001d04:	04000e00 	csrxchg	$r0,$r16,0x3
1c001d08:	00000004 	0x00000004
1c001d0c:	0004040b 	alsl.w	$r11,$r0,$r1,0x1
1c001d10:	04c10000 	csrrd	$r0,0x3040
1c001d14:	00000008 	0x00000008
1c001d18:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c001d1c:	04d80000 	csrrd	$r0,0x3600
1c001d20:	00000004 	0x00000004
1c001d24:	000404d9 	alsl.w	$r25,$r6,$r1,0x1
1c001d28:	04da0000 	csrrd	$r0,0x3680
1c001d2c:	00000004 	0x00000004
1c001d30:	000804db 	bytepick.w	$r27,$r6,$r1,0x0
1c001d34:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c001d38:	0000000c 	0x0000000c
1c001d3c:	0000020c 	0x0000020c
1c001d40:	1c000bb0 	pcaddu12i	$r16,93(0x5d)
1c001d44:	0000000c 	0x0000000c
1c001d48:	00000070 	0x00000070
1c001d4c:	0000021c 	0x0000021c
1c001d50:	1c000bbc 	pcaddu12i	$r28,93(0x5d)
1c001d54:	000000c4 	0x000000c4
1c001d58:	00000404 	0x00000404
1c001d5c:	04100e00 	csrxchg	$r0,$r16,0x403
1c001d60:	00000004 	0x00000004
1c001d64:	08040398 	0x08040398
1c001d68:	99000000 	0x99000000
1c001d6c:	00100404 	add.w	$r4,$r0,$r1
1c001d70:	02970000 	addi.w	$r0,$r0,1472(0x5c0)
1c001d74:	5c040181 	bne	$r12,$r1,1024(0x400) # 1c002174 <files+0x34>
1c001d78:	0a000000 	0x0a000000
1c001d7c:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
1c001d80:	04d70000 	csrrd	$r0,0x35c0
1c001d84:	00000004 	0x00000004
1c001d88:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
1c001d8c:	04d90000 	csrrd	$r0,0x3640
1c001d90:	00000008 	0x00000008
1c001d94:	0404000e 	csrrd	$r14,0x100
1c001d98:	0b000000 	0x0b000000
1c001d9c:	00001c04 	ctz.w	$r4,$r0
1c001da0:	0404c100 	csrxchg	$r0,$r8,0x130
1c001da4:	d7000000 	0xd7000000
1c001da8:	00000404 	0x00000404
1c001dac:	0404d800 	csrrd	$r0,0x136
1c001db0:	d9000000 	0xd9000000
1c001db4:	00000404 	0x00000404
1c001db8:	00000e00 	0x00000e00
1c001dbc:	00000048 	0x00000048
1c001dc0:	00000290 	0x00000290
1c001dc4:	1c000c80 	pcaddu12i	$r0,100(0x64)
1c001dc8:	00000054 	0x00000054
1c001dcc:	00000404 	0x00000404
1c001dd0:	04100e00 	csrxchg	$r0,$r16,0x403
1c001dd4:	00000004 	0x00000004
1c001dd8:	08040297 	0x08040297
1c001ddc:	98000000 	0x98000000
1c001de0:	000c0403 	bytepick.d	$r3,$r0,$r1,0x0
1c001de4:	01810000 	0x01810000
1c001de8:	00002004 	clo.d	$r4,$r0
1c001dec:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c001df0:	00000004 	0x00000004
1c001df4:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c001df8:	04d80000 	csrrd	$r0,0x3600
1c001dfc:	00000004 	0x00000004
1c001e00:	0404000e 	csrrd	$r14,0x100
1c001e04:	0b000000 	0x0b000000
1c001e08:	00000060 	0x00000060
1c001e0c:	000002dc 	0x000002dc
1c001e10:	1c000cd4 	pcaddu12i	$r20,102(0x66)
1c001e14:	0000022c 	0x0000022c
1c001e18:	00000404 	0x00000404
1c001e1c:	04600e00 	csrxchg	$r0,$r16,0x1803
1c001e20:	0000001c 	0x0000001c
1c001e24:	09810d9a 	0x09810d9a
1c001e28:	0b980a97 	0x0b980a97
1c001e2c:	0e9b0c99 	0x0e9b0c99
1c001e30:	b0040f9c 	0xb0040f9c
1c001e34:	0a000000 	0x0a000000
1c001e38:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
1c001e3c:	04d70000 	csrrd	$r0,0x35c0
1c001e40:	00000004 	0x00000004
1c001e44:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
1c001e48:	04d90000 	csrrd	$r0,0x3640
1c001e4c:	00000004 	0x00000004
1c001e50:	000404da 	alsl.w	$r26,$r6,$r1,0x1
1c001e54:	04db0000 	csrrd	$r0,0x36c0
1c001e58:	00000004 	0x00000004
1c001e5c:	000804dc 	bytepick.w	$r28,$r6,$r1,0x0
1c001e60:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c001e64:	00000404 	0x00000404
1c001e68:	00000b00 	0x00000b00
1c001e6c:	00000028 	0x00000028
1c001e70:	00000340 	0x00000340
1c001e74:	1c000f00 	pcaddu12i	$r0,120(0x78)
1c001e78:	00000028 	0x00000028
1c001e7c:	00000404 	0x00000404
1c001e80:	04100e00 	csrxchg	$r0,$r16,0x403
1c001e84:	00000004 	0x00000004
1c001e88:	18040199 	pcaddi	$r25,8204(0x200c)
1c001e8c:	d9000000 	0xd9000000
1c001e90:	00000404 	0x00000404
1c001e94:	00000e00 	0x00000e00
1c001e98:	00000028 	0x00000028
1c001e9c:	0000036c 	0x0000036c
1c001ea0:	1c000f28 	pcaddu12i	$r8,121(0x79)
1c001ea4:	00000024 	0x00000024
1c001ea8:	00000404 	0x00000404
1c001eac:	04100e00 	csrxchg	$r0,$r16,0x403
1c001eb0:	00000004 	0x00000004
1c001eb4:	14040199 	lu12i.w	$r25,8204(0x200c)
1c001eb8:	d9000000 	0xd9000000
1c001ebc:	00000404 	0x00000404
1c001ec0:	00000e00 	0x00000e00
1c001ec4:	00000040 	0x00000040
1c001ec8:	00000398 	0x00000398
1c001ecc:	1c000f4c 	pcaddu12i	$r12,122(0x7a)
1c001ed0:	00000074 	0x00000074
1c001ed4:	00000404 	0x00000404
1c001ed8:	04100e00 	csrxchg	$r0,$r16,0x403
1c001edc:	00000010 	0x00000010
1c001ee0:	02970181 	addi.w	$r1,$r12,1472(0x5c0)
1c001ee4:	04990398 	csrxchg	$r24,$r28,0x2640
1c001ee8:	00004804 	bitrev.4b	$r4,$r0
1c001eec:	0404c100 	csrxchg	$r0,$r8,0x130
1c001ef0:	d7000000 	0xd7000000
1c001ef4:	00000404 	0x00000404
1c001ef8:	0404d800 	csrrd	$r0,0x136
1c001efc:	d9000000 	0xd9000000
1c001f00:	00000804 	0x00000804
1c001f04:	00000e00 	0x00000e00
1c001f08:	00000028 	0x00000028
1c001f0c:	000003dc 	0x000003dc
1c001f10:	1c000fc0 	pcaddu12i	$r0,126(0x7e)
1c001f14:	0000002c 	0x0000002c
1c001f18:	00000404 	0x00000404
1c001f1c:	04100e00 	csrxchg	$r0,$r16,0x403
1c001f20:	00000004 	0x00000004
1c001f24:	18040181 	pcaddi	$r1,8204(0x200c)
1c001f28:	c1000000 	0xc1000000
1c001f2c:	00000804 	0x00000804
1c001f30:	00000e00 	0x00000e00
1c001f34:	00000048 	0x00000048
1c001f38:	00000408 	0x00000408
1c001f3c:	1c000fec 	pcaddu12i	$r12,127(0x7f)
1c001f40:	000000e8 	0x000000e8
1c001f44:	00000404 	0x00000404
1c001f48:	04600e00 	csrxchg	$r0,$r16,0x1803
1c001f4c:	00000010 	0x00000010
1c001f50:	01810297 	0x01810297
1c001f54:	04990398 	csrxchg	$r24,$r28,0x2640
1c001f58:	00008804 	0x00008804
1c001f5c:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c001f60:	00000004 	0x00000004
1c001f64:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c001f68:	04d80000 	csrrd	$r0,0x3600
1c001f6c:	00000004 	0x00000004
1c001f70:	000804d9 	bytepick.w	$r25,$r6,$r1,0x0
1c001f74:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c001f78:	00000404 	0x00000404
1c001f7c:	00000b00 	0x00000b00
1c001f80:	0000000c 	0x0000000c
1c001f84:	00000454 	0x00000454
1c001f88:	1c0010d4 	pcaddu12i	$r20,134(0x86)
1c001f8c:	00000030 	0x00000030
1c001f90:	0000000c 	0x0000000c
1c001f94:	00000464 	0x00000464
1c001f98:	1c001104 	pcaddu12i	$r4,136(0x88)
1c001f9c:	0000003c 	0x0000003c
1c001fa0:	0000000c 	0x0000000c
1c001fa4:	00000474 	0x00000474
1c001fa8:	1c001140 	pcaddu12i	$r0,138(0x8a)
1c001fac:	0000001c 	0x0000001c
1c001fb0:	0000000c 	0x0000000c
1c001fb4:	00000484 	0x00000484
1c001fb8:	1c00115c 	pcaddu12i	$r28,138(0x8a)
1c001fbc:	00000028 	0x00000028
1c001fc0:	0000001c 	0x0000001c
1c001fc4:	00000494 	0x00000494
1c001fc8:	1c001184 	pcaddu12i	$r4,140(0x8c)
1c001fcc:	00000068 	0x00000068
1c001fd0:	00004c04 	bitrev.8b	$r4,$r0
1c001fd4:	04100e00 	csrxchg	$r0,$r16,0x403
1c001fd8:	00000014 	0x00000014
1c001fdc:	0000000e 	0x0000000e
1c001fe0:	0000000c 	0x0000000c
1c001fe4:	000004b4 	0x000004b4
1c001fe8:	1c0011ec 	pcaddu12i	$r12,143(0x8f)
1c001fec:	0000002c 	0x0000002c
1c001ff0:	0000000c 	0x0000000c
1c001ff4:	000004c4 	0x000004c4
1c001ff8:	1c001218 	pcaddu12i	$r24,144(0x90)
1c001ffc:	00000028 	0x00000028
1c002000:	0000000c 	0x0000000c
1c002004:	000004d4 	0x000004d4
1c002008:	1c001240 	pcaddu12i	$r0,146(0x92)
1c00200c:	0000001c 	0x0000001c
1c002010:	0000000c 	0x0000000c
1c002014:	000004e4 	0x000004e4
1c002018:	1c00125c 	pcaddu12i	$r28,146(0x92)
1c00201c:	00000024 	0x00000024
1c002020:	0000000c 	0x0000000c
1c002024:	000004f4 	0x000004f4
1c002028:	1c001280 	pcaddu12i	$r0,148(0x94)
1c00202c:	00000054 	0x00000054
1c002030:	0000001c 	0x0000001c
1c002034:	00000504 	0x00000504
1c002038:	1c0012d4 	pcaddu12i	$r20,150(0x96)
1c00203c:	00000058 	0x00000058
1c002040:	00003c04 	revb.d	$r4,$r0
1c002044:	04100e00 	csrxchg	$r0,$r16,0x403
1c002048:	00000014 	0x00000014
1c00204c:	0000000e 	0x0000000e
1c002050:	0000000c 	0x0000000c
1c002054:	00000524 	0x00000524
1c002058:	1c00132c 	pcaddu12i	$r12,153(0x99)
1c00205c:	00000018 	0x00000018
1c002060:	00000028 	0x00000028
1c002064:	00000534 	0x00000534
1c002068:	1c001344 	pcaddu12i	$r4,154(0x9a)
1c00206c:	0000001c 	0x0000001c
1c002070:	00000404 	0x00000404
1c002074:	04100e00 	csrxchg	$r0,$r16,0x403
1c002078:	00000004 	0x00000004
1c00207c:	0c040199 	0x0c040199
1c002080:	d9000000 	0xd9000000
1c002084:	00000404 	0x00000404
1c002088:	00000e00 	0x00000e00
1c00208c:	0000000c 	0x0000000c
1c002090:	00000560 	0x00000560
1c002094:	1c001360 	pcaddu12i	$r0,155(0x9b)
1c002098:	00000004 	0x00000004
1c00209c:	0000000c 	0x0000000c
1c0020a0:	00000570 	0x00000570
1c0020a4:	1c001364 	pcaddu12i	$r4,155(0x9b)
1c0020a8:	00000008 	0x00000008
1c0020ac:	00000028 	0x00000028
1c0020b0:	00000580 	0x00000580
1c0020b4:	1c00136c 	pcaddu12i	$r12,155(0x9b)
1c0020b8:	00000084 	0x00000084
1c0020bc:	00000404 	0x00000404
1c0020c0:	04100e00 	csrxchg	$r0,$r16,0x403
1c0020c4:	00000004 	0x00000004
1c0020c8:	60040199 	blt	$r12,$r25,1024(0x400) # 1c0024c8 <_heap+0x2c8>
1c0020cc:	d9000000 	0xd9000000
1c0020d0:	00001804 	cto.w	$r4,$r0
1c0020d4:	00000e00 	0x00000e00
1c0020d8:	0000000c 	0x0000000c
1c0020dc:	000005ac 	0x000005ac
1c0020e0:	1c0013f0 	pcaddu12i	$r16,159(0x9f)
1c0020e4:	00000004 	0x00000004
1c0020e8:	00000028 	0x00000028
1c0020ec:	000005bc 	0x000005bc
1c0020f0:	1c0013f4 	pcaddu12i	$r20,159(0x9f)
1c0020f4:	00000024 	0x00000024
1c0020f8:	00000404 	0x00000404
1c0020fc:	04100e00 	csrxchg	$r0,$r16,0x403
1c002100:	00000004 	0x00000004
1c002104:	10040199 	addu16i.d	$r25,$r12,256(0x100)
1c002108:	d9000000 	0xd9000000
1c00210c:	00000804 	0x00000804
1c002110:	00000e00 	0x00000e00
1c002114:	00000028 	0x00000028
1c002118:	000005e8 	0x000005e8
1c00211c:	1c001418 	pcaddu12i	$r24,160(0xa0)
1c002120:	00000030 	0x00000030
1c002124:	00000404 	0x00000404
1c002128:	04100e00 	csrxchg	$r0,$r16,0x403
1c00212c:	00000004 	0x00000004
1c002130:	10040199 	addu16i.d	$r25,$r12,256(0x100)
1c002134:	d9000000 	0xd9000000
1c002138:	00001404 	clz.w	$r4,$r0
1c00213c:	00000e00 	0x00000e00

Disassembly of section .bss:

1c002140 <files>:
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	0x0000001c
   4:	00000002 	0x00000002
   8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
   c:	00000000 	0x00000000
  10:	1c000a90 	pcaddu12i	$r16,84(0x54)
  14:	00000244 	0x00000244
	...
  20:	0000001c 	0x0000001c
  24:	03ba0002 	ori	$r2,$r0,0xe80
  28:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  2c:	00000000 	0x00000000
  30:	1c000cd4 	pcaddu12i	$r20,102(0x66)
  34:	0000022c 	0x0000022c
	...
  40:	0000001c 	0x0000001c
  44:	06d00002 	0x06d00002
  48:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  4c:	00000000 	0x00000000
  50:	1c000f00 	pcaddu12i	$r0,120(0x78)
  54:	0000004c 	0x0000004c
	...
  60:	0000001c 	0x0000001c
  64:	08400002 	0x08400002
  68:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  6c:	00000000 	0x00000000
  70:	1c000f4c 	pcaddu12i	$r12,122(0x7a)
  74:	000000a0 	0x000000a0
	...
  80:	0000001c 	0x0000001c
  84:	0a5a0002 	xvfmsub.s	$xr2,$xr0,$xr0,$xr20
  88:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  8c:	00000000 	0x00000000
  90:	1c000fec 	pcaddu12i	$r12,127(0x7f)
  94:	000000e8 	0x000000e8
	...
  a0:	0000001c 	0x0000001c
  a4:	0c740002 	0x0c740002
  a8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  ac:	00000000 	0x00000000
  b0:	1c0010d4 	pcaddu12i	$r20,134(0x86)
  b4:	00000270 	0x00000270
	...
  c0:	0000001c 	0x0000001c
  c4:	11970002 	addu16i.d	$r2,$r0,26048(0x65c0)
  c8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  cc:	00000000 	0x00000000
  d0:	1c001344 	pcaddu12i	$r4,154(0x9a)
  d4:	00000104 	0x00000104
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	0x3a434347
   4:	4e472820 	jirl	$r0,$r1,-112856(0x24728)
   8:	38202955 	ldx.bu	$r21,$r10,$r10
   c:	302e332e 	vldrepl.w	$vr14,$r25,-464(0xe30)
	...

Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	0x0000000c
   4:	ffffffff 	0xffffffff
   8:	7c010003 	0x7c010003
   c:	00030c01 	0x00030c01
  10:	0000000c 	0x0000000c
  14:	00000000 	0x00000000
  18:	1c000a90 	pcaddu12i	$r16,84(0x54)
  1c:	00000060 	0x00000060
  20:	00000090 	0x00000090
  24:	00000000 	0x00000000
  28:	1c000af0 	pcaddu12i	$r16,87(0x57)
  2c:	000000c0 	0x000000c0
  30:	00000404 	0x00000404
  34:	04200e00 	csrxchg	$r0,$r16,0x803
  38:	00000004 	0x00000004
  3c:	08040499 	0x08040499
  40:	9a000000 	0x9a000000
  44:	00140405 	nor	$r5,$r0,$r1
  48:	02970000 	addi.w	$r0,$r0,1472(0x5c0)
  4c:	069b0398 	0x069b0398
  50:	00000804 	0x00000804
  54:	04018100 	csrxchg	$r0,$r8,0x60
  58:	0000004c 	0x0000004c
  5c:	0404c10a 	csrxchg	$r10,$r8,0x130
  60:	d7000000 	0xd7000000
  64:	00000404 	0x00000404
  68:	0404d800 	csrrd	$r0,0x136
  6c:	d9000000 	0xd9000000
  70:	00000404 	0x00000404
  74:	0404da00 	csrxchg	$r0,$r16,0x136
  78:	db000000 	0xdb000000
  7c:	00000804 	0x00000804
  80:	04000e00 	csrxchg	$r0,$r16,0x3
  84:	00000004 	0x00000004
  88:	0004040b 	alsl.w	$r11,$r0,$r1,0x1
  8c:	04c10000 	csrrd	$r0,0x3040
  90:	00000008 	0x00000008
  94:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
  98:	04d80000 	csrrd	$r0,0x3600
  9c:	00000004 	0x00000004
  a0:	000404d9 	alsl.w	$r25,$r6,$r1,0x1
  a4:	04da0000 	csrrd	$r0,0x3680
  a8:	00000004 	0x00000004
  ac:	000804db 	bytepick.w	$r27,$r6,$r1,0x0
  b0:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
  b4:	0000000c 	0x0000000c
  b8:	00000000 	0x00000000
  bc:	1c000bb0 	pcaddu12i	$r16,93(0x5d)
  c0:	0000000c 	0x0000000c
  c4:	00000070 	0x00000070
  c8:	00000000 	0x00000000
  cc:	1c000bbc 	pcaddu12i	$r28,93(0x5d)
  d0:	000000c4 	0x000000c4
  d4:	00000404 	0x00000404
  d8:	04100e00 	csrxchg	$r0,$r16,0x403
  dc:	00000004 	0x00000004
  e0:	08040398 	0x08040398
  e4:	99000000 	0x99000000
  e8:	00100404 	add.w	$r4,$r0,$r1
  ec:	02970000 	addi.w	$r0,$r0,1472(0x5c0)
  f0:	5c040181 	bne	$r12,$r1,1024(0x400) # 4f0 <data_size-0x1f8>
  f4:	0a000000 	0x0a000000
  f8:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
  fc:	04d70000 	csrrd	$r0,0x35c0
 100:	00000004 	0x00000004
 104:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
 108:	04d90000 	csrrd	$r0,0x3640
 10c:	00000008 	0x00000008
 110:	0404000e 	csrrd	$r14,0x100
 114:	0b000000 	0x0b000000
 118:	00001c04 	ctz.w	$r4,$r0
 11c:	0404c100 	csrxchg	$r0,$r8,0x130
 120:	d7000000 	0xd7000000
 124:	00000404 	0x00000404
 128:	0404d800 	csrrd	$r0,0x136
 12c:	d9000000 	0xd9000000
 130:	00000404 	0x00000404
 134:	00000e00 	0x00000e00
 138:	00000048 	0x00000048
 13c:	00000000 	0x00000000
 140:	1c000c80 	pcaddu12i	$r0,100(0x64)
 144:	00000054 	0x00000054
 148:	00000404 	0x00000404
 14c:	04100e00 	csrxchg	$r0,$r16,0x403
 150:	00000004 	0x00000004
 154:	08040297 	0x08040297
 158:	98000000 	0x98000000
 15c:	000c0403 	bytepick.d	$r3,$r0,$r1,0x0
 160:	01810000 	0x01810000
 164:	00002004 	clo.d	$r4,$r0
 168:	04c10a00 	csrxchg	$r0,$r16,0x3042
 16c:	00000004 	0x00000004
 170:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
 174:	04d80000 	csrrd	$r0,0x3600
 178:	00000004 	0x00000004
 17c:	0404000e 	csrrd	$r14,0x100
 180:	0b000000 	0x0b000000
 184:	0000000c 	0x0000000c
 188:	ffffffff 	0xffffffff
 18c:	7c010003 	0x7c010003
 190:	00030c01 	0x00030c01
 194:	00000060 	0x00000060
 198:	00000184 	0x00000184
 19c:	1c000cd4 	pcaddu12i	$r20,102(0x66)
 1a0:	0000022c 	0x0000022c
 1a4:	00000404 	0x00000404
 1a8:	04600e00 	csrxchg	$r0,$r16,0x1803
 1ac:	0000001c 	0x0000001c
 1b0:	09810d9a 	0x09810d9a
 1b4:	0b980a97 	0x0b980a97
 1b8:	0e9b0c99 	0x0e9b0c99
 1bc:	b0040f9c 	0xb0040f9c
 1c0:	0a000000 	0x0a000000
 1c4:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
 1c8:	04d70000 	csrrd	$r0,0x35c0
 1cc:	00000004 	0x00000004
 1d0:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
 1d4:	04d90000 	csrrd	$r0,0x3640
 1d8:	00000004 	0x00000004
 1dc:	000404da 	alsl.w	$r26,$r6,$r1,0x1
 1e0:	04db0000 	csrrd	$r0,0x36c0
 1e4:	00000004 	0x00000004
 1e8:	000804dc 	bytepick.w	$r28,$r6,$r1,0x0
 1ec:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
 1f0:	00000404 	0x00000404
 1f4:	00000b00 	0x00000b00
 1f8:	0000000c 	0x0000000c
 1fc:	ffffffff 	0xffffffff
 200:	7c010003 	0x7c010003
 204:	00030c01 	0x00030c01
 208:	00000028 	0x00000028
 20c:	000001f8 	0x000001f8
 210:	1c000f00 	pcaddu12i	$r0,120(0x78)
 214:	00000028 	0x00000028
 218:	00000404 	0x00000404
 21c:	04100e00 	csrxchg	$r0,$r16,0x403
 220:	00000004 	0x00000004
 224:	18040199 	pcaddi	$r25,8204(0x200c)
 228:	d9000000 	0xd9000000
 22c:	00000404 	0x00000404
 230:	00000e00 	0x00000e00
 234:	00000028 	0x00000028
 238:	000001f8 	0x000001f8
 23c:	1c000f28 	pcaddu12i	$r8,121(0x79)
 240:	00000024 	0x00000024
 244:	00000404 	0x00000404
 248:	04100e00 	csrxchg	$r0,$r16,0x403
 24c:	00000004 	0x00000004
 250:	14040199 	lu12i.w	$r25,8204(0x200c)
 254:	d9000000 	0xd9000000
 258:	00000404 	0x00000404
 25c:	00000e00 	0x00000e00
 260:	0000000c 	0x0000000c
 264:	ffffffff 	0xffffffff
 268:	7c010003 	0x7c010003
 26c:	00030c01 	0x00030c01
 270:	00000040 	0x00000040
 274:	00000260 	0x00000260
 278:	1c000f4c 	pcaddu12i	$r12,122(0x7a)
 27c:	00000074 	0x00000074
 280:	00000404 	0x00000404
 284:	04100e00 	csrxchg	$r0,$r16,0x403
 288:	00000010 	0x00000010
 28c:	02970181 	addi.w	$r1,$r12,1472(0x5c0)
 290:	04990398 	csrxchg	$r24,$r28,0x2640
 294:	00004804 	bitrev.4b	$r4,$r0
 298:	0404c100 	csrxchg	$r0,$r8,0x130
 29c:	d7000000 	0xd7000000
 2a0:	00000404 	0x00000404
 2a4:	0404d800 	csrrd	$r0,0x136
 2a8:	d9000000 	0xd9000000
 2ac:	00000804 	0x00000804
 2b0:	00000e00 	0x00000e00
 2b4:	00000028 	0x00000028
 2b8:	00000260 	0x00000260
 2bc:	1c000fc0 	pcaddu12i	$r0,126(0x7e)
 2c0:	0000002c 	0x0000002c
 2c4:	00000404 	0x00000404
 2c8:	04100e00 	csrxchg	$r0,$r16,0x403
 2cc:	00000004 	0x00000004
 2d0:	18040181 	pcaddi	$r1,8204(0x200c)
 2d4:	c1000000 	0xc1000000
 2d8:	00000804 	0x00000804
 2dc:	00000e00 	0x00000e00
 2e0:	0000000c 	0x0000000c
 2e4:	ffffffff 	0xffffffff
 2e8:	7c010003 	0x7c010003
 2ec:	00030c01 	0x00030c01
 2f0:	00000048 	0x00000048
 2f4:	000002e0 	0x000002e0
 2f8:	1c000fec 	pcaddu12i	$r12,127(0x7f)
 2fc:	000000e8 	0x000000e8
 300:	00000404 	0x00000404
 304:	04600e00 	csrxchg	$r0,$r16,0x1803
 308:	00000010 	0x00000010
 30c:	01810297 	0x01810297
 310:	04990398 	csrxchg	$r24,$r28,0x2640
 314:	00008804 	0x00008804
 318:	04c10a00 	csrxchg	$r0,$r16,0x3042
 31c:	00000004 	0x00000004
 320:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
 324:	04d80000 	csrrd	$r0,0x3600
 328:	00000004 	0x00000004
 32c:	000804d9 	bytepick.w	$r25,$r6,$r1,0x0
 330:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
 334:	00000404 	0x00000404
 338:	00000b00 	0x00000b00
 33c:	0000000c 	0x0000000c
 340:	ffffffff 	0xffffffff
 344:	7c010003 	0x7c010003
 348:	00030c01 	0x00030c01
 34c:	0000000c 	0x0000000c
 350:	0000033c 	0x0000033c
 354:	1c0010d4 	pcaddu12i	$r20,134(0x86)
 358:	00000030 	0x00000030
 35c:	0000000c 	0x0000000c
 360:	0000033c 	0x0000033c
 364:	1c001104 	pcaddu12i	$r4,136(0x88)
 368:	0000003c 	0x0000003c
 36c:	0000000c 	0x0000000c
 370:	0000033c 	0x0000033c
 374:	1c001140 	pcaddu12i	$r0,138(0x8a)
 378:	0000001c 	0x0000001c
 37c:	0000000c 	0x0000000c
 380:	0000033c 	0x0000033c
 384:	1c00115c 	pcaddu12i	$r28,138(0x8a)
 388:	00000028 	0x00000028
 38c:	0000001c 	0x0000001c
 390:	0000033c 	0x0000033c
 394:	1c001184 	pcaddu12i	$r4,140(0x8c)
 398:	00000068 	0x00000068
 39c:	00004c04 	bitrev.8b	$r4,$r0
 3a0:	04100e00 	csrxchg	$r0,$r16,0x403
 3a4:	00000014 	0x00000014
 3a8:	0000000e 	0x0000000e
 3ac:	0000000c 	0x0000000c
 3b0:	0000033c 	0x0000033c
 3b4:	1c0011ec 	pcaddu12i	$r12,143(0x8f)
 3b8:	0000002c 	0x0000002c
 3bc:	0000000c 	0x0000000c
 3c0:	0000033c 	0x0000033c
 3c4:	1c001218 	pcaddu12i	$r24,144(0x90)
 3c8:	00000028 	0x00000028
 3cc:	0000000c 	0x0000000c
 3d0:	0000033c 	0x0000033c
 3d4:	1c001240 	pcaddu12i	$r0,146(0x92)
 3d8:	0000001c 	0x0000001c
 3dc:	0000000c 	0x0000000c
 3e0:	0000033c 	0x0000033c
 3e4:	1c00125c 	pcaddu12i	$r28,146(0x92)
 3e8:	00000024 	0x00000024
 3ec:	0000000c 	0x0000000c
 3f0:	0000033c 	0x0000033c
 3f4:	1c001280 	pcaddu12i	$r0,148(0x94)
 3f8:	00000054 	0x00000054
 3fc:	0000001c 	0x0000001c
 400:	0000033c 	0x0000033c
 404:	1c0012d4 	pcaddu12i	$r20,150(0x96)
 408:	00000058 	0x00000058
 40c:	00003c04 	revb.d	$r4,$r0
 410:	04100e00 	csrxchg	$r0,$r16,0x403
 414:	00000014 	0x00000014
 418:	0000000e 	0x0000000e
 41c:	0000000c 	0x0000000c
 420:	0000033c 	0x0000033c
 424:	1c00132c 	pcaddu12i	$r12,153(0x99)
 428:	00000018 	0x00000018
 42c:	0000000c 	0x0000000c
 430:	ffffffff 	0xffffffff
 434:	7c010003 	0x7c010003
 438:	00030c01 	0x00030c01
 43c:	00000028 	0x00000028
 440:	0000042c 	0x0000042c
 444:	1c001344 	pcaddu12i	$r4,154(0x9a)
 448:	0000001c 	0x0000001c
 44c:	00000404 	0x00000404
 450:	04100e00 	csrxchg	$r0,$r16,0x403
 454:	00000004 	0x00000004
 458:	0c040199 	0x0c040199
 45c:	d9000000 	0xd9000000
 460:	00000404 	0x00000404
 464:	00000e00 	0x00000e00
 468:	0000000c 	0x0000000c
 46c:	0000042c 	0x0000042c
 470:	1c001360 	pcaddu12i	$r0,155(0x9b)
 474:	00000004 	0x00000004
 478:	0000000c 	0x0000000c
 47c:	0000042c 	0x0000042c
 480:	1c001364 	pcaddu12i	$r4,155(0x9b)
 484:	00000008 	0x00000008
 488:	00000028 	0x00000028
 48c:	0000042c 	0x0000042c
 490:	1c00136c 	pcaddu12i	$r12,155(0x9b)
 494:	00000084 	0x00000084
 498:	00000404 	0x00000404
 49c:	04100e00 	csrxchg	$r0,$r16,0x403
 4a0:	00000004 	0x00000004
 4a4:	60040199 	blt	$r12,$r25,1024(0x400) # 8a4 <data_size+0x1bc>
 4a8:	d9000000 	0xd9000000
 4ac:	00001804 	cto.w	$r4,$r0
 4b0:	00000e00 	0x00000e00
 4b4:	0000000c 	0x0000000c
 4b8:	0000042c 	0x0000042c
 4bc:	1c0013f0 	pcaddu12i	$r16,159(0x9f)
 4c0:	00000004 	0x00000004
 4c4:	00000028 	0x00000028
 4c8:	0000042c 	0x0000042c
 4cc:	1c0013f4 	pcaddu12i	$r20,159(0x9f)
 4d0:	00000024 	0x00000024
 4d4:	00000404 	0x00000404
 4d8:	04100e00 	csrxchg	$r0,$r16,0x403
 4dc:	00000004 	0x00000004
 4e0:	10040199 	addu16i.d	$r25,$r12,256(0x100)
 4e4:	d9000000 	0xd9000000
 4e8:	00000804 	0x00000804
 4ec:	00000e00 	0x00000e00
 4f0:	00000028 	0x00000028
 4f4:	0000042c 	0x0000042c
 4f8:	1c001418 	pcaddu12i	$r24,160(0xa0)
 4fc:	00000030 	0x00000030
 500:	00000404 	0x00000404
 504:	04100e00 	csrxchg	$r0,$r16,0x403
 508:	00000004 	0x00000004
 50c:	10040199 	addu16i.d	$r25,$r12,256(0x100)
 510:	d9000000 	0xd9000000
 514:	00001404 	clz.w	$r4,$r0
 518:	00000e00 	0x00000e00

Disassembly of section .debug_info:

00000000 <.debug_info>:
       0:	000003b6 	0x000003b6
       4:	00000004 	0x00000004
       8:	01040000 	0x01040000
       c:	20554e47 	ll.w	$r7,$r18,21836(0x554c)
      10:	20373143 	ll.w	$r3,$r10,14128(0x3730)
      14:	2e332e38 	0x2e332e38
      18:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 12d38 <data_size+0x12650>
      1c:	3d696261 	0x3d696261
      20:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
      24:	2d207332 	0x2d207332
      28:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7288 <_stack+0xe3fe5790>
      2c:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff6c68 <_stack+0xe3fe5170>
      30:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 1679c <data_size+0x160b4>
      34:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
      38:	2d207232 	0x2d207232
      3c:	7570666d 	0x7570666d
      40:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe6fac <_stack+0xe3fd54b4>
      44:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 12d64 <data_size+0x1267c>
      48:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 6fb4 <data_size+0x68cc>
      4c:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe3db8 <_stack+0xe3fd22c0>
      50:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 16dc0 <data_size+0x166d8>
      54:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 12d74 <data_size+0x1268c>
      58:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 16ecc <data_size+0x167e4>
      5c:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff6fc8 <_stack+0xe3fe54d0>
      60:	7261676e 	0x7261676e
      64:	32336863 	0x32336863
      68:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff2d88 <_stack+0xe3fe1290>
      6c:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
      70:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe669c <_stack+0xe3fd4ba4>
      74:	75622d6f 	0x75622d6f
      78:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 174e4 <data_size+0x16dfc>
      7c:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe2d9c <_stack+0xe3fd12a4>
      80:	702d6f6e 	0x702d6f6e
      84:	0c006369 	0x0c006369
      88:	69647473 	bltu	$r3,$r19,91252(0x16474) # 164fc <data_size+0x15e14>
      8c:	00632e6f 	bstrins.w	$r15,$r19,0x3,0xb
      90:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 16ff8 <data_size+0x16910>
      94:	77772f65 	0x77772f65
      98:	6f772f74 	bgeu	$r27,$r20,-35028(0x3772c) # ffff77c4 <_stack+0xe3fe5ccc>
      9c:	702f6b72 	vaddwev.d.wu	$vr18,$vr27,$vr26
      a0:	5f667265 	bne	$r19,$r5,-39312(0x36670) # ffff6710 <_stack+0xe3fe4c18>
      a4:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff6f18 <_stack+0xe3fe5420>
      a8:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe6a14 <_stack+0xe3fd4f1c>
      ac:	000a9000 	0x000a9000
      b0:	0002441c 	0x0002441c
      b4:	00000000 	0x00000000
      b8:	03040200 	lu52i.d	$r0,$r16,256(0x100)
      bc:	6e750704 	bgeu	$r24,$r4,-101116(0x27504) # fffe75c0 <_stack+0xe3fd5ac8>
      c0:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6828 <_stack+0xe3fd4d30>
      c4:	69206465 	bltu	$r3,$r5,73828(0x12064) # 12128 <data_size+0x11a40>
      c8:	0300746e 	lu52i.d	$r14,$r3,29(0x1d)
      cc:	6f6c0704 	bgeu	$r24,$r4,-37884(0x36c04) # ffff6cd0 <_stack+0xe3fe51d8>
      d0:	7520676e 	xvpickod.b	$xr14,$xr27,$xr25
      d4:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff6a44 <_stack+0xe3fe4f4c>
      d8:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
      dc:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
      e0:	7a697304 	0x7a697304
      e4:	00745f65 	bstrins.w	$r5,$r27,0x14,0x17
      e8:	bb160f03 	0xbb160f03
      ec:	05000000 	0x05000000
      f0:	454c4946 	bnez	$r10,1657928(0x194c48) # 194d38 <data_size+0x194650>
      f4:	09020800 	0x09020800
      f8:	00011808 	0x00011808
      fc:	74730600 	xvmin.w	$xr0,$xr16,$xr1
     100:	0a020072 	0x0a020072
     104:	00011808 	0x00011808
     108:	70060000 	vslt.b	$vr0,$vr0,$vr0
     10c:	0200736f 	slti	$r15,$r27,28(0x1c)
     110:	00e0090b 	bstrpick.d	$r11,$r8,0x20,0x2
     114:	00040000 	alsl.w	$r0,$r0,$r0,0x1
     118:	011e0407 	0x011e0407
     11c:	01030000 	fsub.d	$f0,$f0,$f0
     120:	61686306 	blt	$r24,$r6,92256(0x16860) # 16980 <data_size+0x16298>
     124:	46040072 	bnez	$r3,-3537920(0x4a0400) # ffca0524 <_stack+0xe3c8ea2c>
     128:	00454c49 	srli.d	$r9,$r2,0x13
     12c:	ef150e02 	0xef150e02
     130:	08000000 	0x08000000
     134:	00000126 	0x00000126
     138:	00000143 	0x00000143
     13c:	0000bb09 	0x0000bb09
     140:	0a000900 	0x0a000900
     144:	656c6966 	bge	$r11,$r6,93288(0x16c68) # 16dac <data_size+0x166c4>
     148:	05010073 	0x05010073
     14c:	00013306 	0x00013306
     150:	40030500 	beqz	$r8,772(0x304) # 454 <data_size-0x294>
     154:	0b1c0021 	0x0b1c0021
     158:	63746567 	blt	$r11,$r7,-35740(0x37464) # ffff75bc <_stack+0xe3fe5ac4>
     15c:	05580100 	0x05580100
     160:	000001c7 	0x000001c7
     164:	1c000c80 	pcaddu12i	$r0,100(0x64)
     168:	00000054 	0x00000054
     16c:	01c79c01 	0x01c79c01
     170:	070c0000 	0x070c0000
     174:	01000000 	0x01000000
     178:	01ce1058 	0x01ce1058
     17c:	00000000 	0x00000000
     180:	730d0000 	vextl.qu.du	$vr0,$vr0
     184:	01007274 	0x01007274
     188:	01180859 	0x01180859
     18c:	00370000 	0x00370000
     190:	740d0000 	xvsub.w	$xr0,$xr0,$xr0
     194:	6c61746f 	bgeu	$r3,$r15,24948(0x6174) # 6308 <data_size+0x5c20>
     198:	095a0100 	vfmsub.s	$vr0,$vr8,$vr0,$vr20
     19c:	000000e0 	0x000000e0
     1a0:	00000055 	0x00000055
     1a4:	0000000e 	0x0000000e
     1a8:	11230100 	addu16i.d	$r0,$r8,18624(0x48c0)
     1ac:	000001c7 	0x000001c7
     1b0:	000001b6 	0x000001b6
     1b4:	a010000f 	0xa010000f
     1b8:	ad1c000c 	0xad1c000c
     1bc:	11000003 	addu16i.d	$r3,$r0,16384(0x4000)
     1c0:	87025401 	0x87025401
     1c4:	03000000 	lu52i.d	$r0,$r0,0
     1c8:	6e690504 	bgeu	$r8,$r4,-104188(0x26904) # fffe6acc <_stack+0xe3fd4fd4>
     1cc:	04070074 	csrxchg	$r20,$r3,0x1c0
     1d0:	00000126 	0x00000126
     1d4:	6567660b 	bge	$r16,$r11,92004(0x16764) # 16938 <data_size+0x16250>
     1d8:	01007374 	0x01007374
     1dc:	01180748 	0x01180748
     1e0:	0bbc0000 	0x0bbc0000
     1e4:	00c41c00 	bstrpick.d	$r0,$r0,0x4,0x7
     1e8:	9c010000 	0x9c010000
     1ec:	0000027d 	0x0000027d
     1f0:	01007312 	0x01007312
     1f4:	01181348 	0x01181348
     1f8:	00730000 	bstrins.w	$r0,$r0,0x13,0x0
     1fc:	73120000 	0x73120000
     200:	00657a69 	bstrins.w	$r9,$r19,0x5,0x1e
     204:	c71a4801 	0xc71a4801
     208:	b8000001 	0xb8000001
     20c:	0c000000 	0x0c000000
     210:	00000007 	0x00000007
     214:	ce264801 	0xce264801
     218:	d9000001 	0xd9000001
     21c:	0d000000 	fsel	$f0,$f0,$f0,$fcc0
     220:	00727473 	bstrins.w	$r19,$r3,0x12,0x1d
     224:	18084901 	pcaddi	$r1,16968(0x4248)
     228:	1e000001 	pcaddu18i	$r1,0
     22c:	0d000001 	fsel	$f1,$f0,$f0,$fcc0
     230:	61746f74 	blt	$r27,$r20,95340(0x1746c) # 1769c <data_size+0x16fb4>
     234:	4a01006c 	bceqz	$fcc3,3277056(0x320100) # 320334 <data_size+0x31fc4c>
     238:	0000e009 	0x0000e009
     23c:	00013c00 	asrtle.d	$r0,$r15
     240:	00000e00 	0x00000e00
     244:	23010000 	sc.d	$r0,$r0,256(0x100)
     248:	0001c711 	0x0001c711
     24c:	00025300 	0x00025300
     250:	0d000f00 	fsel	$f0,$f24,$f3,$fcc0
     254:	4b010063 	bceqz	$fcc3,983296(0xf0100) # f0354 <data_size+0xefc6c>
     258:	0000e009 	0x0000e009
     25c:	00015a00 	asrtle.d	$r16,$r22
     260:	00721300 	bstrins.w	$r0,$r24,0x12,0x4
     264:	18084c01 	pcaddi	$r1,16992(0x4260)
     268:	00000001 	0x00000001
     26c:	000be410 	0x000be410
     270:	0003ad1c 	0x0003ad1c
     274:	54011100 	bl	67109136(0x4000110) # 4000384 <data_size+0x3fffc9c>
     278:	00008802 	0x00008802
     27c:	63661400 	blt	$r0,$r0,-39404(0x36614) # ffff6890 <_stack+0xe3fe4d98>
     280:	65736f6c 	bge	$r27,$r12,95084(0x1736c) # 175ec <data_size+0x16f04>
     284:	063d0100 	cacop	0x0,$r8,-192(0xf40)
     288:	1c000bb0 	pcaddu12i	$r16,93(0x5d)
     28c:	0000000c 	0x0000000c
     290:	02b09c01 	addi.w	$r1,$r0,-985(0xc27)
     294:	07150000 	0x07150000
     298:	01000000 	0x01000000
     29c:	01ce133d 	0x01ce133d
     2a0:	54010000 	bl	256(0x100) # 3a0 <data_size-0x348>
     2a4:	01006913 	0x01006913
     2a8:	01c7063e 	0x01c7063e
     2ac:	00000000 	0x00000000
     2b0:	6572660b 	bge	$r16,$r11,94820(0x17264) # 17514 <data_size+0x16e2c>
     2b4:	01006461 	0x01006461
     2b8:	00e00820 	bstrpick.d	$r0,$r1,0x20,0x2
     2bc:	0af00000 	0x0af00000
     2c0:	00c01c00 	bstrpick.d	$r0,$r0,0x0,0x7
     2c4:	9c010000 	0x9c010000
     2c8:	00000372 	0x00000372
     2cc:	72747012 	0x72747012
     2d0:	14200100 	lu12i.w	$r0,65544(0x10008)
     2d4:	000000b9 	0x000000b9
     2d8:	00000185 	0x00000185
     2dc:	7a697312 	0x7a697312
     2e0:	20010065 	ll.w	$r5,$r3,256(0x100)
     2e4:	0000e020 	0x0000e020
     2e8:	0001ca00 	asrtgt.d	$r16,$r18
     2ec:	6d6e1200 	bgeu	$r16,$r0,93712(0x16e10) # 170fc <data_size+0x16a14>
     2f0:	00626d65 	bstrins.w	$r5,$r11,0x2,0x1b
     2f4:	e02d2001 	0xe02d2001
     2f8:	0f000000 	0x0f000000
     2fc:	0c000002 	0x0c000002
     300:	00000007 	0x00000007
     304:	ce3a2001 	0xce3a2001
     308:	54000001 	bl	262144(0x40000) # 40308 <data_size+0x3fc20>
     30c:	0d000002 	fsel	$f2,$f0,$f0,$fcc0
     310:	0074756f 	bstrins.w	$r15,$r11,0x14,0x1d
     314:	18082101 	pcaddi	$r1,16648(0x4108)
     318:	99000001 	0x99000001
     31c:	0d000002 	fsel	$f2,$f0,$f0,$fcc0
     320:	00727473 	bstrins.w	$r19,$r3,0x12,0x1d
     324:	18082201 	pcaddi	$r1,16656(0x4110)
     328:	de000001 	0xde000001
     32c:	0d000002 	fsel	$f2,$f0,$f0,$fcc0
     330:	61746f74 	blt	$r27,$r20,95340(0x1746c) # 1779c <data_size+0x170b4>
     334:	2301006c 	sc.d	$r12,$r3,256(0x100)
     338:	0000e009 	0x0000e009
     33c:	0002fc00 	0x0002fc00
     340:	00000e00 	0x00000e00
     344:	23010000 	sc.d	$r0,$r0,256(0x100)
     348:	0001c711 	0x0001c711
     34c:	00035300 	0x00035300
     350:	0d000f00 	fsel	$f0,$f24,$f3,$fcc0
     354:	27010063 	stptr.d	$r3,$r3,256(0x100)
     358:	0000e009 	0x0000e009
     35c:	00031a00 	0x00031a00
     360:	0b281000 	0x0b281000
     364:	03ad1c00 	ori	$r0,$r0,0xb47
     368:	01110000 	fscaleb.d	$f0,$f0,$f0
     36c:	00890254 	bstrins.d	$r20,$r18,0x9,0x0
     370:	660b0000 	bge	$r0,$r0,-128256(0x20b00) # fffe0e70 <_stack+0xe3fcf378>
     374:	6e65706f 	bgeu	$r3,$r15,-105104(0x26570) # fffe68e4 <_stack+0xe3fd4dec>
     378:	07140100 	0x07140100
     37c:	000001ce 	0x000001ce
     380:	1c000a90 	pcaddu12i	$r16,84(0x54)
     384:	00000060 	0x00000060
     388:	03ad9c01 	ori	$r1,$r0,0xb67
     38c:	73120000 	0x73120000
     390:	01007274 	0x01007274
     394:	01181314 	0x01181314
     398:	032d0000 	lu52i.d	$r0,$r0,-1216(0xb40)
     39c:	690d0000 	bltu	$r0,$r0,68864(0x10d00) # 1109c <data_size+0x109b4>
     3a0:	06150100 	cacop	0x0,$r8,1344(0x540)
     3a4:	000001c7 	0x000001c7
     3a8:	00000363 	0x00000363
     3ac:	00001600 	clz.w	$r0,$r16
     3b0:	00000000 	0x00000000
     3b4:	23010000 	sc.d	$r0,$r0,256(0x100)
     3b8:	03120011 	lu52i.d	$r17,$r0,1152(0x480)
     3bc:	00040000 	alsl.w	$r0,$r0,$r0,0x1
     3c0:	00000158 	0x00000158
     3c4:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
     3c8:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
     3cc:	2e382037 	0x2e382037
     3d0:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
     3d4:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe6540 <_stack+0xe3fd4a48>
     3d8:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 6d14 <data_size+0x662c>
     3dc:	73323370 	0x73323370
     3e0:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 1710c <data_size+0x16a24>
     3e4:	3d686372 	0x3d686372
     3e8:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7354 <_stack+0xe3fd585c>
     3ec:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff764c <_stack+0xe3fe5b54>
     3f0:	72323368 	0x72323368
     3f4:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe7120 <_stack+0xe3fd5628>
     3f8:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe416c <_stack+0xe3fd2674>
     3fc:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
     400:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 1676c <data_size+0x16084>
     404:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 6968 <data_size+0x6280>
     408:	726f6e3d 	0x726f6e3d
     40c:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
     410:	75746d2d 	0x75746d2d
     414:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 4178 <data_size+0x3a90>
     418:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7284 <_stack+0xe3fe578c>
     41c:	68637261 	bltu	$r19,$r1,25456(0x6370) # 678c <data_size+0x60a4>
     420:	20723233 	ll.w	$r19,$r17,29232(0x7230)
     424:	2d20672d 	0x2d20672d
     428:	2d20324f 	0x2d20324f
     42c:	2d6f6e66 	0x2d6f6e66
     430:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 6da4 <data_size+0x66bc>
     434:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
     438:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff729c <_stack+0xe3fe57a4>
     43c:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff6dac <_stack+0xe3fe52b4>
     440:	72700c00 	0x72700c00
     444:	66746e69 	bge	$r19,$r9,-101268(0x2746c) # fffe78b0 <_stack+0xe3fd5db8>
     448:	2f00632e 	0x2f00632e
     44c:	656d6f68 	bge	$r27,$r8,93548(0x16d6c) # 171b8 <data_size+0x16ad0>
     450:	7477772f 	xvmin.wu	$xr15,$xr25,$xr29
     454:	726f772f 	0x726f772f
     458:	65702f6b 	bge	$r27,$r11,94252(0x1702c) # 17484 <data_size+0x16d9c>
     45c:	665f6672 	bge	$r19,$r18,-106652(0x25f64) # fffe63c0 <_stack+0xe3fd48c8>
     460:	2f636e75 	0x2f636e75
     464:	0062696c 	bstrins.w	$r12,$r11,0x2,0x1a
     468:	1c000cd4 	pcaddu12i	$r20,102(0x66)
     46c:	0000022c 	0x0000022c
     470:	00000518 	0x00000518
     474:	04030402 	csrrd	$r2,0xc1
     478:	736e7507 	vssrarni.du.q	$vr7,$vr8,0x1d
     47c:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 172e0 <data_size+0x16bf8>
     480:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe6da0 <_stack+0xe3fd52a8>
     484:	04030074 	csrxchg	$r20,$r3,0xc0
     488:	6e6f6c07 	bgeu	$r0,$r7,-102548(0x26f6c) # fffe73f4 <_stack+0xe3fd58fc>
     48c:	6e752067 	bgeu	$r3,$r7,-101088(0x27520) # fffe79ac <_stack+0xe3fd5eb4>
     490:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6bf8 <_stack+0xe3fd5100>
     494:	69206465 	bltu	$r3,$r5,73828(0x12064) # 124f8 <data_size+0x11e10>
     498:	0400746e 	csrxchg	$r14,$r3,0x1d
     49c:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe6e0c <_stack+0xe3fd5314>
     4a0:	01006674 	0x01006674
     4a4:	02d10501 	addi.d	$r1,$r8,1089(0x441)
     4a8:	0cd40000 	0x0cd40000
     4ac:	022c1c00 	slti	$r0,$r0,-1273(0xb07)
     4b0:	9c010000 	0x9c010000
     4b4:	000002d1 	0x000002d1
     4b8:	746d6605 	0x746d6605
     4bc:	18010100 	pcaddi	$r0,2056(0x808)
     4c0:	000002d8 	0x000002d8
     4c4:	0000038d 	0x0000038d
     4c8:	00690706 	bstrins.w	$r6,$r24,0x9,0x1
     4cc:	d1050301 	0xd1050301
     4d0:	c4000002 	0xc4000002
     4d4:	07000003 	0x07000003
     4d8:	04010063 	csrxchg	$r3,$r3,0x40
     4dc:	0002de06 	0x0002de06
     4e0:	00044300 	alsl.w	$r0,$r24,$r16,0x1
     4e4:	72610700 	0x72610700
     4e8:	05010067 	0x05010067
     4ec:	0002eb08 	0x0002eb08
     4f0:	00046c00 	alsl.w	$r0,$r0,$r27,0x1
     4f4:	70610800 	vabsd.w	$vr0,$vr0,$vr2
     4f8:	07060100 	0x07060100
     4fc:	000000ba 	0x000000ba
     500:	7fbc9103 	0x7fbc9103
     504:	01007707 	0x01007707
     508:	02d10507 	addi.d	$r7,$r8,1089(0x441)
     50c:	04ba0000 	csrrd	$r0,0x2e80
     510:	61090000 	blt	$r0,$r0,67840(0x10900) # 10e10 <data_size+0x10728>
     514:	6e696167 	bgeu	$r11,$r7,-104096(0x26960) # fffe6e74 <_stack+0xe3fd537c>
     518:	01100100 	0x01100100
     51c:	1c000d80 	pcaddu12i	$r0,108(0x6c)
     520:	0000180a 	cto.w	$r10,$r0
     524:	00027900 	0x00027900
     528:	75700b00 	0x75700b00
     52c:	72747374 	0x72747374
     530:	00676e69 	bstrins.w	$r9,$r19,0x7,0x1b
     534:	d1051401 	0xd1051401
     538:	87000002 	0x87000002
     53c:	06000001 	cacop	0x1,$r0,0
     540:	000e0c00 	bytepick.d	$r0,$r0,$r3,0x4
     544:	19010000 	pcaddi	$r0,-522240(0x80800)
     548:	0002d105 	0x0002d105
     54c:	00019900 	asrtgt.d	$r8,$r6
     550:	0b000600 	0x0b000600
     554:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe6ec4 <_stack+0xe3fd53cc>
     558:	73616274 	vssrani.w.d	$vr20,$vr19,0x18
     55c:	1e010065 	pcaddu18i	$r5,2051(0x803)
     560:	0002d105 	0x0002d105
     564:	0001b100 	asrtgt.d	$r8,$r12
     568:	0d000600 	fsel	$f0,$f16,$f1,$fcc0
     56c:	1c000e24 	pcaddu12i	$r4,113(0x71)
     570:	000002f1 	0x000002f1
     574:	000001c9 	0x000001c9
     578:	0156010e 	0x0156010e
     57c:	57010e32 	bl	-120913652(0x8cb010c) # f8cb0688 <_stack+0xdcc9eb90>
     580:	0f003001 	0x0f003001
     584:	1c000e40 	pcaddu12i	$r0,114(0x72)
     588:	000002fd 	0x000002fd
     58c:	000e540d 	bytepick.d	$r13,$r0,$r21,0x4
     590:	0002f11c 	0x0002f11c
     594:	0001ea00 	asrtgt.d	$r16,$r26
     598:	56010e00 	bl	-134086388(0x802010c) # f80206a4 <_stack+0xdc00ebac>
     59c:	010e3a01 	0x010e3a01
     5a0:	00310157 	0x00310157
     5a4:	000e700d 	bytepick.d	$r13,$r0,$r28,0x4
     5a8:	0002f11c 	0x0002f11c
     5ac:	00020200 	0x00020200
     5b0:	56010e00 	bl	-134086388(0x802010c) # f80206bc <_stack+0xdc00ebc4>
     5b4:	010e3a01 	0x010e3a01
     5b8:	00300157 	0x00300157
     5bc:	000e8c0d 	bytepick.d	$r13,$r0,$r3,0x5
     5c0:	0002f11c 	0x0002f11c
     5c4:	00021b00 	0x00021b00
     5c8:	56010e00 	bl	-134086388(0x802010c) # f80206d4 <_stack+0xdc00ebdc>
     5cc:	0e008b02 	0x0e008b02
     5d0:	30015701 	0x30015701
     5d4:	0ea80d00 	0x0ea80d00
     5d8:	02f11c00 	addi.d	$r0,$r0,-953(0xc47)
     5dc:	02330000 	slti	$r0,$r0,-832(0xcc0)
     5e0:	010e0000 	0x010e0000
     5e4:	0e400156 	0x0e400156
     5e8:	30015701 	0x30015701
     5ec:	0ec40f00 	0x0ec40f00
     5f0:	03091c00 	lu52i.d	$r0,$r0,583(0x247)
     5f4:	d80d0000 	0xd80d0000
     5f8:	f11c000e 	0xf11c000e
     5fc:	54000002 	bl	524288(0x80000) # 805fc <data_size+0x7ff14>
     600:	0e000002 	0x0e000002
     604:	3a015601 	0x3a015601
     608:	0157010e 	0x0157010e
     60c:	ec0d0030 	0xec0d0030
     610:	fd1c000e 	0xfd1c000e
     614:	68000002 	bltu	$r0,$r2,0 # 614 <data_size-0xd4>
     618:	0e000002 	0x0e000002
     61c:	08025401 	0x08025401
     620:	fc100025 	0xfc100025
     624:	fd1c000e 	0xfd1c000e
     628:	0e000002 	0x0e000002
     62c:	08025401 	0x08025401
     630:	11000025 	addu16i.d	$r5,$r1,16384(0x4000)
     634:	00000000 	0x00000000
     638:	00000e0c 	0x00000e0c
     63c:	05190100 	0x05190100
     640:	000002d1 	0x000002d1
     644:	00000290 	0x00000290
     648:	60120006 	blt	$r0,$r6,4608(0x1200) # 1848 <data_size+0x1160>
     64c:	141c000d 	lu12i.w	$r13,57344(0xe000)
     650:	bf000000 	0xbf000000
     654:	0c000002 	0x0c000002
     658:	0000000e 	0x0000000e
     65c:	d1051901 	0xd1051901
     660:	af000002 	0xaf000002
     664:	06000002 	cacop	0x2,$r0,0
     668:	0d681000 	xvshuf.b	$xr0,$xr0,$xr4,$xr16
     66c:	02fd1c00 	addi.d	$r0,$r0,-185(0xf47)
     670:	010e0000 	0x010e0000
     674:	003d0154 	0x003d0154
     678:	0d401000 	0x0d401000
     67c:	02fd1c00 	addi.d	$r0,$r0,-185(0xf47)
     680:	010e0000 	0x010e0000
     684:	00870254 	bstrins.d	$r20,$r18,0x7,0x0
     688:	03000000 	lu52i.d	$r0,$r0,0
     68c:	6e690504 	bgeu	$r8,$r4,-104188(0x26904) # fffe6f90 <_stack+0xe3fd5498>
     690:	04130074 	csrxchg	$r20,$r3,0x4c0
     694:	000002e6 	0x000002e6
     698:	63060103 	blt	$r8,$r3,-64000(0x30600) # ffff0c98 <_stack+0xe3fdf1a0>
     69c:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
     6a0:	0002de14 	0x0002de14
     6a4:	ba041300 	0xba041300
     6a8:	15000000 	lu12i.w	$r0,-524288(0x80000)
     6ac:	00000020 	0x00000020
     6b0:	00000020 	0x00000020
     6b4:	15051e01 	lu12i.w	$r1,-513808(0x828f0)
     6b8:	0000000e 	0x0000000e
     6bc:	0000000e 	0x0000000e
     6c0:	15051901 	lu12i.w	$r1,-513848(0x828c8)
     6c4:	00000016 	0x00000016
     6c8:	00000016 	0x00000016
     6cc:	00051401 	alsl.w	$r1,$r0,$r5,0x3
     6d0:	0000016c 	0x0000016c
     6d4:	027a0004 	sltui	$r4,$r0,-384(0xe80)
     6d8:	01040000 	0x01040000
     6dc:	20554e47 	ll.w	$r7,$r18,21836(0x554c)
     6e0:	20373143 	ll.w	$r3,$r10,14128(0x3730)
     6e4:	2e332e38 	0x2e332e38
     6e8:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 13408 <data_size+0x12d20>
     6ec:	3d696261 	0x3d696261
     6f0:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
     6f4:	2d207332 	0x2d207332
     6f8:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7958 <_stack+0xe3fe5e60>
     6fc:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff7338 <_stack+0xe3fe5840>
     700:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 16e6c <data_size+0x16784>
     704:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
     708:	2d207232 	0x2d207232
     70c:	7570666d 	0x7570666d
     710:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe767c <_stack+0xe3fd5b84>
     714:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 13434 <data_size+0x12d4c>
     718:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 7684 <data_size+0x6f9c>
     71c:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe4488 <_stack+0xe3fd2990>
     720:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 17490 <data_size+0x16da8>
     724:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 13444 <data_size+0x12d5c>
     728:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 1759c <data_size+0x16eb4>
     72c:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff7698 <_stack+0xe3fe5ba0>
     730:	7261676e 	0x7261676e
     734:	32336863 	0x32336863
     738:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff3458 <_stack+0xe3fe1960>
     73c:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
     740:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe6d6c <_stack+0xe3fd5274>
     744:	75622d6f 	0x75622d6f
     748:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 17bb4 <data_size+0x174cc>
     74c:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe346c <_stack+0xe3fd1974>
     750:	702d6f6e 	0x702d6f6e
     754:	0c006369 	0x0c006369
     758:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff7bcc <_stack+0xe3fe60d4>
     75c:	2e726168 	0x2e726168
     760:	682f0063 	bltu	$r3,$r3,12032(0x2f00) # 3660 <data_size+0x2f78>
     764:	2f656d6f 	0x2f656d6f
     768:	2f747777 	0x2f747777
     76c:	6b726f77 	bltu	$r27,$r23,-36244(0x3726c) # ffff79d8 <_stack+0xe3fe5ee0>
     770:	7265702f 	0x7265702f
     774:	75665f66 	0x75665f66
     778:	6c2f636e 	bgeu	$r27,$r14,12128(0x2f60) # 36d8 <data_size+0x2ff0>
     77c:	00006269 	rdtimel.w	$r9,$r19
     780:	4c1c000f 	jirl	$r15,$r0,7168(0x1c00)
     784:	8d000000 	0x8d000000
     788:	02000009 	slti	$r9,$r0,0
     78c:	6e750704 	bgeu	$r24,$r4,-101116(0x27504) # fffe7c90 <_stack+0xe3fd6198>
     790:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6ef8 <_stack+0xe3fd5400>
     794:	69206465 	bltu	$r3,$r5,73828(0x12064) # 127f8 <data_size+0x12110>
     798:	0200746e 	slti	$r14,$r3,29(0x1d)
     79c:	6f6c0704 	bgeu	$r24,$r4,-37884(0x36c04) # ffff73a0 <_stack+0xe3fe58a8>
     7a0:	7520676e 	xvpickod.b	$xr14,$xr27,$xr25
     7a4:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff7114 <_stack+0xe3fe561c>
     7a8:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
     7ac:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
     7b0:	00002a03 	cto.d	$r3,$r16
     7b4:	06070100 	cacop	0x0,$r8,448(0x1c0)
     7b8:	0000f801 	0x0000f801
     7bc:	00630400 	bstrins.w	$r0,$r0,0x3,0x1
     7c0:	f8060701 	0xf8060701
     7c4:	00000000 	0x00000000
     7c8:	69050402 	bltu	$r0,$r2,66820(0x10504) # 10ccc <data_size+0x105e4>
     7cc:	0500746e 	0x0500746e
     7d0:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff7c44 <_stack+0xe3fe614c>
     7d4:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
     7d8:	f8050101 	0xf8050101
     7dc:	00000000 	0x00000000
     7e0:	281c000f 	ld.b	$r15,$r0,1792(0x700)
     7e4:	01000000 	0x01000000
     7e8:	0001589c 	0x0001589c
     7ec:	00630600 	bstrins.w	$r0,$r16,0x3,0x1
     7f0:	f8110101 	0xf8110101
     7f4:	5d000000 	bne	$r0,$r0,65536(0x10000) # 107f4 <data_size+0x1010c>
     7f8:	07000005 	0x07000005
     7fc:	0000002a 	0x0000002a
     800:	f8010301 	0xf8010301
     804:	3d000000 	0x3d000000
     808:	08000001 	0x08000001
     80c:	00e00900 	bstrpick.d	$r0,$r8,0x20,0x2
     810:	0f000000 	0x0f000000
     814:	00301c00 	0x00301c00
     818:	03010000 	lu52i.d	$r0,$r0,64(0x40)
     81c:	00ed0a01 	bstrpick.d	$r1,$r16,0x2d,0x2
     820:	057e0000 	0x057e0000
     824:	00000000 	0x00000000
     828:	0000e00b 	0x0000e00b
     82c:	000f2800 	bytepick.d	$r0,$r0,$r10,0x6
     830:	0000241c 	clz.d	$r28,$r0
     834:	0c9c0100 	xvfcmp.cune.s	$xr0,$xr8,$xr0
     838:	000000ed 	0x000000ed
     83c:	00005401 	bitrev.d	$r1,$r0
     840:	00000216 	0x00000216
     844:	03370004 	lu52i.d	$r4,$r0,-576(0xdc0)
     848:	01040000 	0x01040000
     84c:	20554e47 	ll.w	$r7,$r18,21836(0x554c)
     850:	20373143 	ll.w	$r3,$r10,14128(0x3730)
     854:	2e332e38 	0x2e332e38
     858:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 13578 <data_size+0x12e90>
     85c:	3d696261 	0x3d696261
     860:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
     864:	2d207332 	0x2d207332
     868:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7ac8 <_stack+0xe3fe5fd0>
     86c:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff74a8 <_stack+0xe3fe59b0>
     870:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 16fdc <data_size+0x168f4>
     874:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
     878:	2d207232 	0x2d207232
     87c:	7570666d 	0x7570666d
     880:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe77ec <_stack+0xe3fd5cf4>
     884:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 135a4 <data_size+0x12ebc>
     888:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 77f4 <data_size+0x710c>
     88c:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe45f8 <_stack+0xe3fd2b00>
     890:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 17600 <data_size+0x16f18>
     894:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 135b4 <data_size+0x12ecc>
     898:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 1770c <data_size+0x17024>
     89c:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff7808 <_stack+0xe3fe5d10>
     8a0:	7261676e 	0x7261676e
     8a4:	32336863 	0x32336863
     8a8:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff35c8 <_stack+0xe3fe1ad0>
     8ac:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
     8b0:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe6edc <_stack+0xe3fd53e4>
     8b4:	75622d6f 	0x75622d6f
     8b8:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 17d24 <data_size+0x1763c>
     8bc:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe35dc <_stack+0xe3fd1ae4>
     8c0:	702d6f6e 	0x702d6f6e
     8c4:	0c006369 	0x0c006369
     8c8:	73747570 	0x73747570
     8cc:	2f00632e 	0x2f00632e
     8d0:	656d6f68 	bge	$r27,$r8,93548(0x16d6c) # 1763c <data_size+0x16f54>
     8d4:	7477772f 	xvmin.wu	$xr15,$xr25,$xr29
     8d8:	726f772f 	0x726f772f
     8dc:	65702f6b 	bge	$r27,$r11,94252(0x1702c) # 17908 <data_size+0x17220>
     8e0:	665f6672 	bge	$r19,$r18,-106652(0x25f64) # fffe6844 <_stack+0xe3fd4d4c>
     8e4:	2f636e75 	0x2f636e75
     8e8:	0062696c 	bstrins.w	$r12,$r11,0x2,0x1a
     8ec:	1c000f4c 	pcaddu12i	$r12,122(0x7a)
     8f0:	000000a0 	0x000000a0
     8f4:	00000a3f 	0x00000a3f
     8f8:	75070402 	xvssran.hu.w	$xr2,$xr0,$xr1
     8fc:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff726c <_stack+0xe3fe5774>
     900:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
     904:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
     908:	6c070402 	bgeu	$r0,$r2,1796(0x704) # 100c <data_size+0x924>
     90c:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
     910:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17c7c <data_size+0x17594>
     914:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6e80 <data_size+0x6798>
     918:	746e6920 	0x746e6920
     91c:	75700300 	0x75700300
     920:	01007374 	0x01007374
     924:	0150050e 	0x0150050e
     928:	0fc00000 	0x0fc00000
     92c:	002c1c00 	alsl.d	$r0,$r0,$r7,0x1
     930:	9c010000 	0x9c010000
     934:	00000150 	0x00000150
     938:	01007304 	0x01007304
     93c:	0157100e 	0x0157100e
     940:	05910000 	0x05910000
     944:	36050000 	0x36050000
     948:	01000000 	0x01000000
     94c:	01501006 	0x01501006
     950:	01180000 	0x01180000
     954:	00060000 	alsl.wu	$r0,$r0,$r0,0x1
     958:	000fcc07 	bytepick.d	$r7,$r0,$r19,0x7
     95c:	0001651c 	0x0001651c
     960:	00012d00 	asrtle.d	$r8,$r11
     964:	54010800 	bl	264(0x108) # a6c <data_size+0x384>
     968:	5401f303 	bl	-66321936(0xc0c01f0) # fc0c0b58 <_stack+0xe00af060>
     96c:	0fd40700 	0x0fd40700
     970:	020d1c00 	slti	$r0,$r0,839(0x347)
     974:	01400000 	0x01400000
     978:	01080000 	0x01080000
     97c:	003d0154 	0x003d0154
     980:	000fdc09 	bytepick.d	$r9,$r0,$r23,0x7
     984:	00020d1c 	0x00020d1c
     988:	54010800 	bl	264(0x108) # a90 <data_size+0x3a8>
     98c:	00003a01 	revb.2w	$r1,$r16
     990:	69050402 	bltu	$r0,$r2,66820(0x10504) # 10e94 <data_size+0x107ac>
     994:	0a00746e 	0x0a00746e
     998:	00015d04 	0x00015d04
     99c:	06010200 	cacop	0x0,$r16,64(0x40)
     9a0:	72616863 	0x72616863
     9a4:	75700300 	0x75700300
     9a8:	72747374 	0x72747374
     9ac:	00676e69 	bstrins.w	$r9,$r19,0x7,0x1b
     9b0:	50050101 	b	67372288(0x4040500) # 4040eb0 <data_size+0x40407c8>
     9b4:	4c000001 	jirl	$r1,$r0,0
     9b8:	741c000f 	0x741c000f
     9bc:	01000000 	0x01000000
     9c0:	00020d9c 	0x00020d9c
     9c4:	00730400 	bstrins.w	$r0,$r0,0x13,0x1
     9c8:	57150101 	bl	67572992(0x4071500) # 4071ec8 <data_size+0x40717e0>
     9cc:	b2000001 	0xb2000001
     9d0:	0b000005 	0x0b000005
     9d4:	03010063 	lu52i.d	$r3,$r3,64(0x40)
     9d8:	00015d06 	0x00015d06
     9dc:	0005f500 	alsl.w	$r0,$r8,$r29,0x4
     9e0:	00480c00 	0x00480c00
     9e4:	36050000 	0x36050000
     9e8:	01000000 	0x01000000
     9ec:	01501006 	0x01501006
     9f0:	01b80000 	0x01b80000
     9f4:	00060000 	alsl.wu	$r0,$r0,$r0,0x1
     9f8:	000f8c0d 	bytepick.d	$r13,$r0,$r3,0x7
     9fc:	0000081c 	0x0000081c
     a00:	0001e700 	asrtgt.d	$r24,$r25
     a04:	00360500 	0x00360500
     a08:	06010000 	cacop	0x0,$r0,64(0x40)
     a0c:	00015010 	0x00015010
     a10:	0001d700 	asrtgt.d	$r24,$r21
     a14:	09000600 	0x09000600
     a18:	1c000f94 	pcaddu12i	$r20,124(0x7c)
     a1c:	0000020d 	0x0000020d
     a20:	01540108 	0x01540108
     a24:	0700003d 	0x0700003d
     a28:	1c000f7c 	pcaddu12i	$r28,123(0x7b)
     a2c:	0000020d 	0x0000020d
     a30:	000001fb 	0x000001fb
     a34:	02540108 	sltui	$r8,$r8,1280(0x500)
     a38:	09000087 	0x09000087
     a3c:	1c000f9c 	pcaddu12i	$r28,124(0x7c)
     a40:	0000020d 	0x0000020d
     a44:	02540108 	sltui	$r8,$r8,1280(0x500)
     a48:	00000087 	0x00000087
     a4c:	00360e00 	0x00360e00
     a50:	00360000 	0x00360000
     a54:	06010000 	cacop	0x0,$r0,64(0x40)
     a58:	02160010 	slti	$r16,$r0,1408(0x580)
     a5c:	00040000 	alsl.w	$r0,$r0,$r0,0x1
     a60:	00000402 	0x00000402
     a64:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
     a68:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
     a6c:	2e382037 	0x2e382037
     a70:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
     a74:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe6be0 <_stack+0xe3fd50e8>
     a78:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 73b4 <data_size+0x6ccc>
     a7c:	73323370 	0x73323370
     a80:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 177ac <data_size+0x170c4>
     a84:	3d686372 	0x3d686372
     a88:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe79f4 <_stack+0xe3fd5efc>
     a8c:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7cec <_stack+0xe3fe61f4>
     a90:	72323368 	0x72323368
     a94:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe77c0 <_stack+0xe3fd5cc8>
     a98:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe480c <_stack+0xe3fd2d14>
     a9c:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
     aa0:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 16e0c <data_size+0x16724>
     aa4:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 7008 <data_size+0x6920>
     aa8:	726f6e3d 	0x726f6e3d
     aac:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
     ab0:	75746d2d 	0x75746d2d
     ab4:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 4818 <data_size+0x4130>
     ab8:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7924 <_stack+0xe3fe5e2c>
     abc:	68637261 	bltu	$r19,$r1,25456(0x6370) # 6e2c <data_size+0x6744>
     ac0:	20723233 	ll.w	$r19,$r17,29232(0x7230)
     ac4:	2d20672d 	0x2d20672d
     ac8:	2d20324f 	0x2d20324f
     acc:	2d6f6e66 	0x2d6f6e66
     ad0:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 7444 <data_size+0x6d5c>
     ad4:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
     ad8:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff793c <_stack+0xe3fe5e44>
     adc:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff744c <_stack+0xe3fe5954>
     ae0:	72700c00 	0x72700c00
     ae4:	62746e69 	blt	$r19,$r9,-101268(0x2746c) # fffe7f50 <_stack+0xe3fd6458>
     ae8:	2e657361 	0x2e657361
     aec:	682f0063 	bltu	$r3,$r3,12032(0x2f00) # 39ec <data_size+0x3304>
     af0:	2f656d6f 	0x2f656d6f
     af4:	2f747777 	0x2f747777
     af8:	6b726f77 	bltu	$r27,$r23,-36244(0x3726c) # ffff7d64 <_stack+0xe3fe626c>
     afc:	7265702f 	0x7265702f
     b00:	75665f66 	0x75665f66
     b04:	6c2f636e 	bgeu	$r27,$r14,12128(0x2f60) # 3a64 <data_size+0x337c>
     b08:	ec006269 	0xec006269
     b0c:	e81c000f 	0xe81c000f
     b10:	a8000000 	0xa8000000
     b14:	0200000b 	slti	$r11,$r0,0
     b18:	6e750704 	bgeu	$r24,$r4,-101116(0x27504) # fffe801c <_stack+0xe3fd6524>
     b1c:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe7284 <_stack+0xe3fd578c>
     b20:	69206465 	bltu	$r3,$r5,73828(0x12064) # 12b84 <data_size+0x1249c>
     b24:	0200746e 	slti	$r14,$r3,29(0x1d)
     b28:	6f6c0704 	bgeu	$r24,$r4,-37884(0x36c04) # ffff772c <_stack+0xe3fe5c34>
     b2c:	7520676e 	xvpickod.b	$xr14,$xr27,$xr25
     b30:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff74a0 <_stack+0xe3fe59a8>
     b34:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
     b38:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
     b3c:	69727003 	bltu	$r0,$r3,94832(0x17270) # 17dac <data_size+0x176c4>
     b40:	6162746e 	blt	$r3,$r14,90740(0x16274) # 16db4 <data_size+0x166cc>
     b44:	01006573 	0x01006573
     b48:	01e20501 	0x01e20501
     b4c:	0fec0000 	0x0fec0000
     b50:	00e81c00 	bstrpick.d	$r0,$r0,0x28,0x7
     b54:	9c010000 	0x9c010000
     b58:	000001e2 	0x000001e2
     b5c:	01007604 	0x01007604
     b60:	01e91401 	0x01e91401
     b64:	06080000 	cacop	0x0,$r0,512(0x200)
     b68:	77040000 	0x77040000
     b6c:	1a010100 	pcalau12i	$r0,2056(0x808)
     b70:	000001e2 	0x000001e2
     b74:	00000658 	0x00000658
     b78:	73616204 	vssrani.w.d	$vr4,$vr16,0x18
     b7c:	01010065 	fadd.d	$f5,$f3,$f0
     b80:	0001e220 	asrtgt.d	$r17,$r24
     b84:	00069c00 	alsl.wu	$r0,$r0,$r7,0x2
     b88:	69730400 	bltu	$r0,$r0,94980(0x17304) # 17e8c <data_size+0x177a4>
     b8c:	01006e67 	0x01006e67
     b90:	01e22901 	0x01e22901
     b94:	06e00000 	0x06e00000
     b98:	69050000 	bltu	$r0,$r0,66816(0x10500) # 11098 <data_size+0x109b0>
     b9c:	06030100 	cacop	0x0,$r8,192(0xc0)
     ba0:	000001e2 	0x000001e2
     ba4:	00000725 	0x00000725
     ba8:	01006a05 	0x01006a05
     bac:	01e20803 	0x01e20803
     bb0:	07780000 	0x07780000
     bb4:	63050000 	blt	$r0,$r0,-64256(0x30500) # ffff10b4 <_stack+0xe3fdf5bc>
     bb8:	06040100 	cacop	0x0,$r8,256(0x100)
     bbc:	000001e2 	0x000001e2
     bc0:	000007c5 	0x000007c5
     bc4:	66756206 	bge	$r16,$r6,-101024(0x27560) # fffe8124 <_stack+0xe3fd662c>
     bc8:	07050100 	0x07050100
     bcc:	000001f5 	0x000001f5
     bd0:	7fb09103 	0x7fb09103
     bd4:	6c617605 	bgeu	$r16,$r5,24948(0x6174) # 6d48 <data_size+0x6660>
     bd8:	01006575 	0x01006575
     bdc:	00cd1006 	bstrpick.d	$r6,$r0,0xd,0x4
     be0:	07d80000 	0x07d80000
     be4:	a8070000 	0xa8070000
     be8:	201c0010 	ll.w	$r16,$r0,7168(0x1c00)
     bec:	bc000000 	0xbc000000
     bf0:	08000001 	0x08000001
     bf4:	0000003e 	0x0000003e
     bf8:	e2020a01 	0xe2020a01
     bfc:	ab000001 	0xab000001
     c00:	09000001 	0x09000001
     c04:	10b80a00 	addu16i.d	$r0,$r16,11778(0x2e02)
     c08:	020d1c00 	slti	$r0,$r0,839(0x347)
     c0c:	010b0000 	fmin.d	$f0,$f0,$f0
     c10:	2d080254 	0x2d080254
     c14:	540c0000 	bl	3072(0xc00) # 1814 <data_size+0x112c>
     c18:	2c1c0010 	vld	$vr16,$r0,1792(0x700)
     c1c:	08000000 	0x08000000
     c20:	0000003e 	0x0000003e
     c24:	e2020a01 	0xe2020a01
     c28:	d7000001 	0xd7000001
     c2c:	09000001 	0x09000001
     c30:	10800d00 	addu16i.d	$r0,$r8,8195(0x2003)
     c34:	020d1c00 	slti	$r0,$r0,839(0x347)
     c38:	00000000 	0x00000000
     c3c:	69050402 	bltu	$r0,$r2,66820(0x10504) # 11140 <data_size+0x10a58>
     c40:	0200746e 	slti	$r14,$r3,29(0x1d)
     c44:	6f6c0504 	bgeu	$r8,$r4,-37884(0x36c04) # ffff7848 <_stack+0xe3fe5d50>
     c48:	6920676e 	bltu	$r27,$r14,73828(0x12064) # 12cac <data_size+0x125c4>
     c4c:	0e00746e 	0x0e00746e
     c50:	00000205 	0x00000205
     c54:	00000205 	0x00000205
     c58:	0000bd0f 	0x0000bd0f
     c5c:	02003f00 	slti	$r0,$r24,15(0xf)
     c60:	68630601 	bltu	$r16,$r1,25348(0x6304) # 6f64 <data_size+0x687c>
     c64:	10007261 	addu16i.d	$r1,$r19,28(0x1c)
     c68:	0000003e 	0x0000003e
     c6c:	0000003e 	0x0000003e
     c70:	00020a01 	0x00020a01
     c74:	0000051f 	0x0000051f
     c78:	04e70004 	csrrd	$r4,0x39c0
     c7c:	01040000 	0x01040000
     c80:	20554e47 	ll.w	$r7,$r18,21836(0x554c)
     c84:	20373143 	ll.w	$r3,$r10,14128(0x3730)
     c88:	2e332e38 	0x2e332e38
     c8c:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 139ac <data_size+0x132c4>
     c90:	3d696261 	0x3d696261
     c94:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
     c98:	2d207332 	0x2d207332
     c9c:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7efc <_stack+0xe3fe6404>
     ca0:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff78dc <_stack+0xe3fe5de4>
     ca4:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 17410 <data_size+0x16d28>
     ca8:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
     cac:	2d207232 	0x2d207232
     cb0:	7570666d 	0x7570666d
     cb4:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe7c20 <_stack+0xe3fd6128>
     cb8:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 139d8 <data_size+0x132f0>
     cbc:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 7c28 <data_size+0x7540>
     cc0:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe4a2c <_stack+0xe3fd2f34>
     cc4:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 17a34 <data_size+0x1734c>
     cc8:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 139e8 <data_size+0x13300>
     ccc:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 17b40 <data_size+0x17458>
     cd0:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff7c3c <_stack+0xe3fe6144>
     cd4:	7261676e 	0x7261676e
     cd8:	32336863 	0x32336863
     cdc:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff39fc <_stack+0xe3fe1f04>
     ce0:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
     ce4:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe7310 <_stack+0xe3fd5818>
     ce8:	75622d6f 	0x75622d6f
     cec:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 18158 <data_size+0x17a70>
     cf0:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe3a10 <_stack+0xe3fd1f18>
     cf4:	702d6f6e 	0x702d6f6e
     cf8:	0c006369 	0x0c006369
     cfc:	69727473 	bltu	$r3,$r19,94836(0x17274) # 17f70 <data_size+0x17888>
     d00:	632e676e 	blt	$r27,$r14,-53660(0x32e64) # ffff3b64 <_stack+0xe3fe206c>
     d04:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff7530 <_stack+0xe3fe5a38>
     d08:	772f656d 	0x772f656d
     d0c:	772f7477 	0x772f7477
     d10:	2f6b726f 	0x2f6b726f
     d14:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7f78 <_stack+0xe3fd6480>
     d18:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe827c <_stack+0xe3fd6784>
     d1c:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 17948 <data_size+0x17260>
     d20:	00600062 	bstrins.w	$r2,$r3,0x0,0x0
     d24:	00000000 	0x00000000
     d28:	0d6b0000 	xvshuf.b	$xr0,$xr0,$xr0,$xr22
     d2c:	04020000 	csrrd	$r0,0x80
     d30:	75070403 	xvssran.hu.w	$xr3,$xr0,$xr1
     d34:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff76a4 <_stack+0xe3fe5bac>
     d38:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
     d3c:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
     d40:	6c070403 	bgeu	$r0,$r3,1796(0x704) # 1444 <data_size+0xd5c>
     d44:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
     d48:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 180b4 <data_size+0x179cc>
     d4c:	64656e67 	bge	$r19,$r7,25964(0x656c) # 72b8 <data_size+0x6bd0>
     d50:	746e6920 	0x746e6920
     d54:	69730400 	bltu	$r0,$r0,94980(0x17304) # 18058 <data_size+0x17970>
     d58:	745f657a 	0x745f657a
     d5c:	160f0200 	lu32i.d	$r0,30736(0x7810)
     d60:	000000bc 	0x000000bc
     d64:	657a6205 	bge	$r16,$r5,96864(0x17a60) # 187c4 <data_size+0x180dc>
     d68:	01006f72 	0x01006f72
     d6c:	2c060157 	vld	$vr23,$r10,384(0x180)
     d70:	181c0013 	pcaddi	$r19,57344(0xe000)
     d74:	01000000 	0x01000000
     d78:	0001639c 	0x0001639c
     d7c:	00730600 	bstrins.w	$r0,$r16,0x13,0x1
     d80:	12015701 	addu16i.d	$r1,$r24,-32683(0x8055)
     d84:	000000ba 	0x000000ba
     d88:	00000838 	0x00000838
     d8c:	01006e06 	0x01006e06
     d90:	e11c0157 	0xe11c0157
     d94:	59000000 	beq	$r0,$r0,65536(0x10000) # 10d94 <data_size+0x106ac>
     d98:	07000008 	0x07000008
     d9c:	000002cd 	0x000002cd
     da0:	1c00132c 	pcaddu12i	$r12,153(0x99)
     da4:	00000014 	0x00000014
     da8:	02015801 	slti	$r1,$r0,86(0x56)
     dac:	0002f508 	0x0002f508
     db0:	00087a00 	bytepick.w	$r0,$r16,$r30,0x0
     db4:	02eb0900 	addi.d	$r0,$r8,-1342(0xac2)
     db8:	08000000 	0x08000000
     dbc:	000002e1 	0x000002e1
     dc0:	0000089f 	0x0000089f
     dc4:	00132c0a 	maskeqz	$r10,$r0,$r11
     dc8:	0000141c 	clz.w	$r28,$r0
     dcc:	02ff0b00 	addi.d	$r0,$r24,-62(0xfc2)
     dd0:	54010000 	bl	256(0x100) # ed0 <data_size+0x7e8>
     dd4:	0c000000 	0x0c000000
     dd8:	636d656d 	blt	$r11,$r13,-37532(0x36d64) # ffff7b3c <_stack+0xe3fe6044>
     ddc:	0100706d 	0x0100706d
     de0:	cf01014b 	0xcf01014b
     de4:	d4000001 	0xd4000001
     de8:	581c0012 	beq	$r0,$r18,7168(0x1c00) # 29e8 <data_size+0x2300>
     dec:	01000000 	0x01000000
     df0:	0001cf9c 	0x0001cf9c
     df4:	31760600 	0x31760600
     df8:	014b0100 	0x014b0100
     dfc:	0001d614 	0x0001d614
     e00:	0008c000 	bytepick.w	$r0,$r0,$r16,0x1
     e04:	32760600 	0x32760600
     e08:	014b0100 	0x014b0100
     e0c:	0001d624 	0x0001d624
     e10:	0008e100 	bytepick.w	$r0,$r8,$r24,0x1
     e14:	006e0600 	bstrins.w	$r0,$r16,0xe,0x1
     e18:	2f014b01 	0x2f014b01
     e1c:	000000e1 	0x000000e1
     e20:	00000902 	0x00000902
     e24:	0031730d 	0x0031730d
     e28:	11014c01 	addu16i.d	$r1,$r0,16467(0x4053)
     e2c:	000001dd 	0x000001dd
     e30:	00000932 	0x00000932
     e34:	0032730e 	0x0032730e
     e38:	11014d01 	addu16i.d	$r1,$r8,16467(0x4053)
     e3c:	000001dd 	0x000001dd
     e40:	03005501 	lu52i.d	$r1,$r8,21(0x15)
     e44:	6e690504 	bgeu	$r8,$r4,-104188(0x26904) # fffe7748 <_stack+0xe3fd5c50>
     e48:	040f0074 	csrxchg	$r20,$r3,0x3c0
     e4c:	000001dc 	0x000001dc
     e50:	eb040f10 	0xeb040f10
     e54:	03000001 	lu52i.d	$r1,$r0,0
     e58:	68630601 	bltu	$r16,$r1,25348(0x6304) # 715c <data_size+0x6a74>
     e5c:	11007261 	addu16i.d	$r1,$r19,16412(0x401c)
     e60:	000001e3 	0x000001e3
     e64:	6d656d0c 	bgeu	$r8,$r12,91500(0x1656c) # 173d0 <data_size+0x16ce8>
     e68:	65766f6d 	bge	$r27,$r13,95852(0x1766c) # 184d4 <data_size+0x17dec>
     e6c:	01280100 	0x01280100
     e70:	0000ba01 	0x0000ba01
     e74:	00128000 	sltu	$r0,$r0,$r0
     e78:	0000541c 	bitrev.d	$r28,$r0
     e7c:	5d9c0100 	bne	$r8,$r0,105472(0x19c00) # 1aa7c <data_size+0x1a394>
     e80:	12000002 	addu16i.d	$r2,$r0,-32768(0x8000)
     e84:	00747364 	bstrins.w	$r4,$r27,0x14,0x1c
     e88:	0f012801 	0x0f012801
     e8c:	000000ba 	0x000000ba
     e90:	73065401 	0x73065401
     e94:	01006372 	0x01006372
     e98:	d6200128 	0xd6200128
     e9c:	50000001 	b	262144(0x40000) # 40e9c <data_size+0x407b4>
     ea0:	06000009 	cacop	0x9,$r0,0
     ea4:	2801006e 	ld.b	$r14,$r3,64(0x40)
     ea8:	00e12c01 	bstrpick.d	$r1,$r0,0x21,0xb
     eac:	097c0000 	0x097c0000
     eb0:	730d0000 	vextl.qu.du	$vr0,$vr0
     eb4:	012c0100 	0x012c0100
     eb8:	0001dd11 	0x0001dd11
     ebc:	0009a900 	bytepick.w	$r0,$r8,$r10,0x3
     ec0:	00640d00 	bstrins.w	$r0,$r8,0x4,0x3
     ec4:	0b012d01 	0x0b012d01
     ec8:	0000025d 	0x0000025d
     ecc:	000009dd 	0x000009dd
     ed0:	e3040f00 	0xe3040f00
     ed4:	0c000001 	0x0c000001
     ed8:	636d656d 	blt	$r11,$r13,-37532(0x36d64) # ffff7c3c <_stack+0xe3fe6144>
     edc:	01007970 	0x01007970
     ee0:	ba010111 	0xba010111
     ee4:	5c000000 	bne	$r0,$r0,0 # ee4 <data_size+0x7fc>
     ee8:	241c0012 	ldptr.w	$r18,$r0,7168(0x1c00)
     eec:	01000000 	0x01000000
     ef0:	0002cd9c 	0x0002cd9c
     ef4:	73641200 	0x73641200
     ef8:	11010074 	addu16i.d	$r20,$r3,16448(0x4040)
     efc:	00ba0e01 	bstrins.d	$r1,$r16,0x3a,0x3
     f00:	54010000 	bl	256(0x100) # 1000 <data_size+0x918>
     f04:	63727306 	blt	$r24,$r6,-36240(0x37270) # ffff8174 <_stack+0xe3fe667c>
     f08:	01110100 	fscaleb.d	$f0,$f8,$f0
     f0c:	0001d61f 	0x0001d61f
     f10:	000a1c00 	0x000a1c00
     f14:	006e0600 	bstrins.w	$r0,$r16,0xe,0x1
     f18:	2b011101 	fld.s	$f1,$r8,68(0x44)
     f1c:	000000e1 	0x000000e1
     f20:	00000a3d 	0x00000a3d
     f24:	0100730e 	0x0100730e
     f28:	dd110115 	0xdd110115
     f2c:	01000001 	0x01000001
     f30:	00640d55 	bstrins.w	$r21,$r10,0x4,0x3
     f34:	0b011601 	0x0b011601
     f38:	0000025d 	0x0000025d
     f3c:	00000a6d 	0x00000a6d
     f40:	656d1300 	bge	$r24,$r0,93456(0x16d10) # 17c50 <data_size+0x17568>
     f44:	7465736d 	xvavg.w	$xr13,$xr27,$xr28
     f48:	01f60100 	0x01f60100
     f4c:	000000ba 	0x000000ba
     f50:	00030a01 	0x00030a01
     f54:	00731400 	bstrins.w	$r0,$r0,0x13,0x5
     f58:	ba0ef601 	0xba0ef601
     f5c:	14000000 	lu12i.w	$r0,0
     f60:	f6010063 	0xf6010063
     f64:	0001e316 	0x0001e316
     f68:	006e1400 	bstrins.w	$r0,$r0,0xe,0x5
     f6c:	e120f601 	0xe120f601
     f70:	15000000 	lu12i.w	$r0,-524288(0x80000)
     f74:	fa010070 	0xfa010070
     f78:	00025d0b 	0x00025d0b
     f7c:	73160000 	0x73160000
     f80:	69667274 	bltu	$r19,$r20,91760(0x16670) # 175f0 <data_size+0x16f08>
     f84:	0100646e 	0x0100646e
     f88:	025d0188 	sltui	$r8,$r12,1856(0x740)
     f8c:	12180000 	addu16i.d	$r0,$r0,-31232(0x8600)
     f90:	00281c00 	0x00281c00
     f94:	9c010000 	0x9c010000
     f98:	00000343 	0x00000343
     f9c:	01007317 	0x01007317
     fa0:	01dd1588 	0x01dd1588
     fa4:	0a8b0000 	0x0a8b0000
     fa8:	63180000 	blt	$r0,$r0,-59392(0x31800) # ffff27a8 <_stack+0xe3fe0cb0>
     fac:	1d880100 	pcaddu12i	$r0,-245752(0xc4008)
     fb0:	000001e3 	0x000001e3
     fb4:	16005501 	lu32i.d	$r1,680(0x2a8)
     fb8:	63727473 	blt	$r3,$r19,-36236(0x37274) # ffff822c <_stack+0xe3fe6734>
     fbc:	01007268 	0x01007268
     fc0:	025d0174 	sltui	$r20,$r11,1856(0x740)
     fc4:	11ec0000 	addu16i.d	$r0,$r0,31488(0x7b00)
     fc8:	002c1c00 	alsl.d	$r0,$r0,$r7,0x1
     fcc:	9c010000 	0x9c010000
     fd0:	0000037b 	0x0000037b
     fd4:	01007317 	0x01007317
     fd8:	01dd1474 	0x01dd1474
     fdc:	0aa90000 	xvfnmadd.d	$xr0,$xr0,$xr0,$xr18
     fe0:	63180000 	blt	$r0,$r0,-59392(0x31800) # ffff27e0 <_stack+0xe3fe0ce8>
     fe4:	1c740100 	pcaddu12i	$r0,237576(0x3a008)
     fe8:	000001e3 	0x000001e3
     fec:	16005501 	lu32i.d	$r1,680(0x2a8)
     ff0:	6e727473 	bgeu	$r3,$r19,-101772(0x27274) # fffe8264 <_stack+0xe3fd676c>
     ff4:	00706d63 	bstrins.w	$r3,$r11,0x10,0x1b
     ff8:	cf016401 	0xcf016401
     ffc:	84000001 	0x84000001
    1000:	681c0011 	bltu	$r0,$r17,7168(0x1c00) # 2c00 <data_size+0x2518>
    1004:	01000000 	0x01000000
    1008:	0003c69c 	0x0003c69c
    100c:	31731700 	0x31731700
    1010:	15640100 	lu12i.w	$r0,-319480(0xb2008)
    1014:	000001dd 	0x000001dd
    1018:	00000ad2 	0x00000ad2
    101c:	00327317 	0x00327317
    1020:	dd256401 	0xdd256401
    1024:	fb000001 	0xfb000001
    1028:	1700000a 	lu32i.d	$r10,-524288(0x80000)
    102c:	6401006e 	bge	$r3,$r14,256(0x100) # 112c <data_size+0xa44>
    1030:	0000e130 	0x0000e130
    1034:	000b3a00 	0x000b3a00
    1038:	73160000 	0x73160000
    103c:	636e7274 	blt	$r19,$r20,-37264(0x36e70) # ffff7eac <_stack+0xe3fe63b4>
    1040:	01007970 	0x01007970
    1044:	025d014d 	sltui	$r13,$r10,1856(0x740)
    1048:	115c0000 	addu16i.d	$r0,$r0,22272(0x5700)
    104c:	00281c00 	0x00281c00
    1050:	9c010000 	0x9c010000
    1054:	00000421 	0x00000421
    1058:	74736418 	xvmin.w	$xr24,$xr0,$xr25
    105c:	0f4d0100 	0x0f4d0100
    1060:	0000025d 	0x0000025d
    1064:	73175401 	0x73175401
    1068:	01006372 	0x01006372
    106c:	01dd204d 	0x01dd204d
    1070:	0b7b0000 	0x0b7b0000
    1074:	6c170000 	bgeu	$r0,$r0,5888(0x1700) # 2774 <data_size+0x208c>
    1078:	01006e65 	0x01006e65
    107c:	00e12c4d 	bstrpick.d	$r13,$r2,0x21,0xb
    1080:	0b990000 	0x0b990000
    1084:	70190000 	0x70190000
    1088:	0b4e0100 	0x0b4e0100
    108c:	0000025d 	0x0000025d
    1090:	00000bf8 	0x00000bf8
    1094:	74731600 	xvmin.w	$xr0,$xr16,$xr5
    1098:	79706372 	0x79706372
    109c:	01370100 	0x01370100
    10a0:	0000025d 	0x0000025d
    10a4:	1c001140 	pcaddu12i	$r0,138(0x8a)
    10a8:	0000001c 	0x0000001c
    10ac:	046b9c01 	csrrd	$r1,0x1ae7
    10b0:	64180000 	bge	$r0,$r0,6144(0x1800) # 28b0 <data_size+0x21c8>
    10b4:	01007473 	0x01007473
    10b8:	025d0e37 	sltui	$r23,$r17,1859(0x743)
    10bc:	54010000 	bl	256(0x100) # 11bc <data_size+0xad4>
    10c0:	63727317 	blt	$r24,$r23,-36240(0x37270) # ffff8330 <_stack+0xe3fe6838>
    10c4:	1f370100 	pcaddu18i	$r0,-411640(0x9b808)
    10c8:	000001dd 	0x000001dd
    10cc:	00000c2e 	0x00000c2e
    10d0:	01007019 	0x01007019
    10d4:	025d0b3b 	sltui	$r27,$r25,1858(0x742)
    10d8:	0c4c0000 	0x0c4c0000
    10dc:	16000000 	lu32i.d	$r0,0
    10e0:	6e727473 	bgeu	$r3,$r19,-101772(0x27274) # fffe8354 <_stack+0xe3fd685c>
    10e4:	006e656c 	bstrins.w	$r12,$r11,0xe,0x19
    10e8:	e1012201 	0xe1012201
    10ec:	04000000 	csrrd	$r0,0x0
    10f0:	3c1c0011 	0x3c1c0011
    10f4:	01000000 	0x01000000
    10f8:	0004b69c 	alsl.w	$r28,$r20,$r13,0x2
    10fc:	00731700 	bstrins.w	$r0,$r24,0x13,0x5
    1100:	dd152201 	0xdd152201
    1104:	6a000001 	bltu	$r0,$r1,-131072(0x20000) # fffe1104 <_stack+0xe3fcf60c>
    1108:	1800000c 	pcaddi	$r12,0
    110c:	006e656c 	bstrins.w	$r12,$r11,0xe,0x19
    1110:	e11f2201 	0xe11f2201
    1114:	01000000 	0x01000000
    1118:	6e631955 	bgeu	$r10,$r21,-105704(0x26318) # fffe7430 <_stack+0xe3fd5938>
    111c:	23010074 	sc.d	$r20,$r3,256(0x100)
    1120:	0000e10c 	0x0000e10c
    1124:	000caf00 	bytepick.d	$r0,$r24,$r11,0x1
    1128:	73160000 	0x73160000
    112c:	656c7274 	bge	$r19,$r20,93296(0x16c70) # 17d9c <data_size+0x176b4>
    1130:	0c01006e 	0x0c01006e
    1134:	0000e101 	0x0000e101
    1138:	0010d400 	add.d	$r0,$r0,$r21
    113c:	0000301c 	revb.2h	$r28,$r0
    1140:	f29c0100 	0xf29c0100
    1144:	17000004 	lu32i.d	$r4,-524288(0x80000)
    1148:	0c010073 	0x0c010073
    114c:	0001dd14 	0x0001dd14
    1150:	000cda00 	bytepick.d	$r0,$r16,$r22,0x1
    1154:	6e631900 	bgeu	$r8,$r0,-105704(0x26318) # fffe746c <_stack+0xe3fd5974>
    1158:	0d010074 	fsel	$f20,$f3,$f0,$fcc2
    115c:	0000e10c 	0x0000e10c
    1160:	000d3c00 	bytepick.d	$r0,$r0,$r15,0x2
    1164:	cd1a0000 	0xcd1a0000
    1168:	40000002 	beqz	$r0,524288(0x80000) # 81168 <data_size+0x80a80>
    116c:	1c1c0012 	pcaddu12i	$r18,57344(0xe000)
    1170:	01000000 	0x01000000
    1174:	02e11b9c 	addi.d	$r28,$r28,-1978(0x846)
    1178:	54010000 	bl	256(0x100) # 1278 <data_size+0xb90>
    117c:	0002eb1b 	0x0002eb1b
    1180:	08550100 	fmsub.s	$f0,$f8,$f0,$f10
    1184:	000002f5 	0x000002f5
    1188:	00000d67 	0x00000d67
    118c:	0002ff1c 	0x0002ff1c
    1190:	000dd500 	bytepick.d	$r0,$r8,$r21,0x3
    1194:	ff000000 	0xff000000
    1198:	04000002 	csrrd	$r2,0x0
    119c:	00068c00 	alsl.wu	$r0,$r0,$r3,0x2
    11a0:	47010400 	bnez	$r0,196868(0x30104) # 312a4 <data_size+0x30bbc>
    11a4:	4320554e 	beqz	$r10,3874900(0x3b2054) # 3b31f8 <data_size+0x3b2b10>
    11a8:	38203731 	ldx.bu	$r17,$r25,$r13
    11ac:	302e332e 	vldrepl.w	$vr14,$r25,-464(0xe30)
    11b0:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 17edc <data_size+0x177f4>
    11b4:	693d6962 	bltu	$r11,$r2,81256(0x13d68) # 14f1c <data_size+0x14834>
    11b8:	3233706c 	0x3233706c
    11bc:	6d2d2073 	bgeu	$r3,$r19,77088(0x12d20) # 13edc <data_size+0x137f4>
    11c0:	68637261 	bltu	$r19,$r1,25456(0x6370) # 7530 <data_size+0x6e48>
    11c4:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff8130 <_stack+0xe3fe6638>
    11c8:	7261676e 	0x7261676e
    11cc:	32336863 	0x32336863
    11d0:	6d2d2072 	bgeu	$r3,$r18,77088(0x12d20) # 13ef0 <data_size+0x13808>
    11d4:	3d757066 	0x3d757066
    11d8:	656e6f6e 	bge	$r27,$r14,93804(0x16e6c) # 18044 <data_size+0x1795c>
    11dc:	636d2d20 	blt	$r9,$r0,-37588(0x36d2c) # ffff7f08 <_stack+0xe3fe6410>
    11e0:	65646f6d 	bge	$r27,$r13,91244(0x1646c) # 1764c <data_size+0x16f64>
    11e4:	6f6e3d6c 	bgeu	$r11,$r12,-37316(0x36e3c) # ffff8020 <_stack+0xe3fe6528>
    11e8:	6c616d72 	bgeu	$r11,$r18,24940(0x616c) # 7354 <data_size+0x6c6c>
    11ec:	746d2d20 	0x746d2d20
    11f0:	3d656e75 	0x3d656e75
    11f4:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe8160 <_stack+0xe3fd6668>
    11f8:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff8458 <_stack+0xe3fe6960>
    11fc:	72323368 	0x72323368
    1200:	20672d20 	ll.w	$r0,$r9,26412(0x672c)
    1204:	20324f2d 	ll.w	$r13,$r25,12876(0x324c)
    1208:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff806c <_stack+0xe3fe6574>
    120c:	6975622d 	bltu	$r17,$r13,95584(0x17560) # 1876c <data_size+0x18084>
    1210:	6e69746c 	bgeu	$r3,$r12,-104076(0x26974) # fffe7b84 <_stack+0xe3fd608c>
    1214:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe7840 <_stack+0xe3fd5d48>
    1218:	69702d6f 	bltu	$r11,$r15,94252(0x1702c) # 18244 <data_size+0x17b5c>
    121c:	740c0063 	xvsub.b	$xr3,$xr3,$xr0
    1220:	2e656d69 	0x2e656d69
    1224:	682f0063 	bltu	$r3,$r3,12032(0x2f00) # 4124 <data_size+0x3a3c>
    1228:	2f656d6f 	0x2f656d6f
    122c:	2f747777 	0x2f747777
    1230:	6b726f77 	bltu	$r27,$r23,-36244(0x3726c) # ffff849c <_stack+0xe3fe69a4>
    1234:	7265702f 	0x7265702f
    1238:	75665f66 	0x75665f66
    123c:	6c2f636e 	bgeu	$r27,$r14,12128(0x2f60) # 419c <data_size+0x3ab4>
    1240:	44006269 	bnez	$r19,2359392(0x240060) # 2412a0 <data_size+0x240bb8>
    1244:	041c0013 	csrrd	$r19,0x700
    1248:	78000001 	0x78000001
    124c:	02000015 	slti	$r21,$r0,0
    1250:	6e750704 	bgeu	$r24,$r4,-101116(0x27504) # fffe8754 <_stack+0xe3fd6c5c>
    1254:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe79bc <_stack+0xe3fd5ec4>
    1258:	69206465 	bltu	$r3,$r5,73828(0x12064) # 132bc <data_size+0x12bd4>
    125c:	0200746e 	slti	$r14,$r3,29(0x1d)
    1260:	6f6c0704 	bgeu	$r24,$r4,-37884(0x36c04) # ffff7e64 <_stack+0xe3fe636c>
    1264:	7520676e 	xvpickod.b	$xr14,$xr27,$xr25
    1268:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff7bd8 <_stack+0xe3fe60e0>
    126c:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
    1270:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
    1274:	6c635f03 	bgeu	$r24,$r3,25436(0x635c) # 75d0 <data_size+0x6ee8>
    1278:	5f6b636f 	bne	$r27,$r15,-38048(0x36b60) # ffff7dd8 <_stack+0xe3fe62e0>
    127c:	03020074 	lu52i.d	$r20,$r3,128(0x80)
    1280:	0000c817 	0x0000c817
    1284:	05040200 	0x05040200
    1288:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
    128c:	6d697404 	bgeu	$r0,$r4,92532(0x16974) # 17c00 <data_size+0x17518>
    1290:	65707365 	bge	$r27,$r5,94320(0x17070) # 18300 <data_size+0x17c18>
    1294:	02100063 	slti	$r3,$r3,1024(0x400)
    1298:	014b081f 	0x014b081f
    129c:	74050000 	xvsle.wu	$xr0,$xr0,$xr0
    12a0:	65735f76 	bge	$r27,$r22,95068(0x1735c) # 185fc <data_size+0x17f14>
    12a4:	20020063 	ll.w	$r3,$r3,512(0x200)
    12a8:	0000dd0b 	0x0000dd0b
    12ac:	74050000 	xvsle.wu	$xr0,$xr0,$xr0
    12b0:	736e5f76 	vssrarni.du.q	$vr22,$vr27,0x17
    12b4:	02006365 	slti	$r5,$r27,24(0x18)
    12b8:	00dd0b21 	bstrpick.d	$r1,$r25,0x1d,0x2
    12bc:	05040000 	0x05040000
    12c0:	755f7674 	0x755f7674
    12c4:	00636573 	bstrins.w	$r19,$r11,0x3,0x19
    12c8:	dd0b2202 	0xdd0b2202
    12cc:	08000000 	0x08000000
    12d0:	5f767405 	bne	$r0,$r5,-35212(0x37674) # ffff8944 <_stack+0xe3fe6e4c>
    12d4:	6365736d 	blt	$r27,$r13,-39568(0x36570) # ffff7844 <_stack+0xe3fe5d4c>
    12d8:	0b230200 	0x0b230200
    12dc:	000000dd 	0x000000dd
    12e0:	6706000c 	bge	$r0,$r12,-64000(0x30600) # ffff18e0 <_stack+0xe3fdfde8>
    12e4:	755f7465 	0x755f7465
    12e8:	3c010073 	0x3c010073
    12ec:	0000c80f 	0x0000c80f
    12f0:	00141800 	nor	$r0,$r0,$r6
    12f4:	0000301c 	revb.2h	$r28,$r0
    12f8:	939c0100 	0x939c0100
    12fc:	07000001 	0x07000001
    1300:	3e01006e 	0x3e01006e
    1304:	0000c813 	0x0000c813
    1308:	000df300 	bytepick.d	$r0,$r24,$r28,0x3
    130c:	02dc0800 	addi.d	$r0,$r0,1794(0x702)
    1310:	14180000 	lu12i.w	$r0,49152(0xc000)
    1314:	00b81c00 	bstrins.d	$r0,$r0,0x38,0x7
    1318:	3f010000 	0x3f010000
    131c:	00b80909 	bstrins.d	$r9,$r8,0x38,0x2
    1320:	f00a0000 	0xf00a0000
    1324:	00000002 	0x00000002
    1328:	67060000 	bge	$r0,$r0,-64000(0x30600) # ffff1928 <_stack+0xe3fdfe30>
    132c:	6e5f7465 	bgeu	$r3,$r5,-106636(0x25f74) # fffe72a0 <_stack+0xe3fd57a8>
    1330:	33010073 	0x33010073
    1334:	0000c80f 	0x0000c80f
    1338:	0013f400 	masknez	$r0,$r0,$r29
    133c:	0000241c 	clz.d	$r28,$r0
    1340:	db9c0100 	0xdb9c0100
    1344:	07000001 	0x07000001
    1348:	3501006e 	0x3501006e
    134c:	0000c813 	0x0000c813
    1350:	000e2a00 	bytepick.d	$r0,$r16,$r10,0x4
    1354:	02dc0800 	addi.d	$r0,$r0,1794(0x702)
    1358:	13f40000 	addu16i.d	$r0,$r0,-768(0xfd00)
    135c:	00a01c00 	bstrins.d	$r0,$r0,0x20,0x7
    1360:	36010000 	0x36010000
    1364:	00a00909 	bstrins.d	$r9,$r8,0x20,0x2
    1368:	f00a0000 	0xf00a0000
    136c:	00000002 	0x00000002
    1370:	670b0000 	bge	$r0,$r0,-62720(0x30b00) # ffff1e70 <_stack+0xe3fe0378>
    1374:	635f7465 	blt	$r3,$r5,-41100(0x35f74) # ffff72e8 <_stack+0xe3fe57f0>
    1378:	6b636f6c 	bltu	$r27,$r12,-40084(0x3636c) # ffff76e4 <_stack+0xe3fe5bec>
    137c:	0f2c0100 	0x0f2c0100
    1380:	000000c8 	0x000000c8
    1384:	000001fc 	0x000001fc
    1388:	01006e0c 	0x01006e0c
    138c:	00c8132e 	bstrpick.d	$r14,$r25,0x8,0x4
    1390:	06000000 	cacop	0x0,$r0,0
    1394:	636f6c63 	blt	$r3,$r3,-37012(0x36f6c) # ffff8300 <_stack+0xe3fe6808>
    1398:	65675f6b 	bge	$r27,$r11,91996(0x1675c) # 17af4 <data_size+0x1740c>
    139c:	6d697474 	bgeu	$r3,$r20,92532(0x16974) # 17d10 <data_size+0x17628>
    13a0:	20010065 	ll.w	$r5,$r3,256(0x100)
    13a4:	0000c80f 	0x0000c80f
    13a8:	00136c00 	maskeqz	$r0,$r0,$r27
    13ac:	0000841c 	0x0000841c
    13b0:	699c0100 	bltu	$r8,$r0,105472(0x19c00) # 1afb0 <data_size+0x1a8c8>
    13b4:	0d000002 	fsel	$f2,$f0,$f0,$fcc0
    13b8:	006c6573 	bstrins.w	$r19,$r11,0xc,0x19
    13bc:	ee212001 	0xee212001
    13c0:	58000000 	beq	$r0,$r0,0 # 13c0 <data_size+0xcd8>
    13c4:	0e00000e 	0x0e00000e
    13c8:	00706d74 	bstrins.w	$r20,$r11,0x10,0x1b
    13cc:	69362001 	bltu	$r0,$r1,79392(0x13620) # 149ec <data_size+0x14304>
    13d0:	01000002 	0x01000002
    13d4:	006e0755 	bstrins.w	$r21,$r26,0xe,0x1
    13d8:	c8132201 	0xc8132201
    13dc:	79000000 	0x79000000
    13e0:	0800000e 	0x0800000e
    13e4:	000002dc 	0x000002dc
    13e8:	1c00136c 	pcaddu12i	$r12,155(0x9b)
    13ec:	00000088 	0x00000088
    13f0:	09092301 	0x09092301
    13f4:	00000088 	0x00000088
    13f8:	0002f00a 	0x0002f00a
    13fc:	00000000 	0x00000000
    1400:	00f5040f 	bstrpick.d	$r15,$r0,0x35,0x1
    1404:	67100000 	bge	$r0,$r0,-61440(0x31000) # ffff2404 <_stack+0xe3fe090c>
    1408:	635f7465 	blt	$r3,$r5,-41100(0x35f74) # ffff737c <_stack+0xe3fe5884>
    140c:	746e756f 	0x746e756f
    1410:	00796d5f 	bstrins.w	$r31,$r10,0x19,0x1b
    1414:	c80f1601 	0xc80f1601
    1418:	64000000 	bge	$r0,$r0,0 # 1418 <data_size+0xd30>
    141c:	081c0013 	fmadd.s	$f19,$f0,$f0,$f24
    1420:	01000000 	0x01000000
    1424:	00029f9c 	0x00029f9c
    1428:	006e1100 	bstrins.w	$r0,$r8,0xe,0x4
    142c:	c8131801 	0xc8131801
    1430:	01000000 	0x01000000
    1434:	67100054 	bge	$r2,$r20,-61440(0x31000) # ffff2434 <_stack+0xe3fe093c>
    1438:	635f7465 	blt	$r3,$r5,-41100(0x35f74) # ffff73ac <_stack+0xe3fe58b4>
    143c:	746e756f 	0x746e756f
    1440:	0f110100 	0x0f110100
    1444:	000000c8 	0x000000c8
    1448:	1c001344 	pcaddu12i	$r4,154(0x9a)
    144c:	0000001c 	0x0000001c
    1450:	02dc9c01 	addi.d	$r1,$r0,1831(0x727)
    1454:	dc080000 	0xdc080000
    1458:	44000002 	bnez	$r0,524288(0x80000) # 81458 <data_size+0x80d70>
    145c:	701c0013 	0x701c0013
    1460:	01000000 	0x01000000
    1464:	70090d13 	vslt.wu	$vr19,$vr8,$vr3
    1468:	0a000000 	0x0a000000
    146c:	000002f0 	0x000002f0
    1470:	12000000 	addu16i.d	$r0,$r0,-32768(0x8000)
    1474:	7465675f 	xvavg.w	$xr31,$xr26,$xr25
    1478:	756f635f 	0x756f635f
    147c:	0100746e 	0x0100746e
    1480:	00c80f04 	bstrpick.d	$r4,$r24,0x8,0x3
    1484:	0c010000 	0x0c010000
    1488:	6e6f635f 	bgeu	$r26,$r31,-102560(0x26f60) # fffe83e8 <_stack+0xe3fd68f0>
    148c:	6c617674 	bgeu	$r19,$r20,24948(0x6174) # 7600 <data_size+0x6f18>
    1490:	13060100 	addu16i.d	$r0,$r8,-16000(0xc180)
    1494:	000000c8 	0x000000c8
	...

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	stptr.w	$r1,$r8,272(0x110)
   4:	030b1308 	lu52i.d	$r8,$r24,708(0x2c4)
   8:	11081b08 	addu16i.d	$r8,$r24,16902(0x4206)
   c:	10061201 	addu16i.d	$r1,$r16,388(0x184)
  10:	02000017 	slti	$r23,$r0,0
  14:	0b0b000f 	0x0b0b000f
  18:	24030000 	ldptr.w	$r0,$r0,768(0x300)
  1c:	3e0b0b00 	0x3e0b0b00
  20:	0008030b 	bytepick.w	$r11,$r24,$r0,0x0
  24:	00160400 	orn	$r0,$r0,$r1
  28:	0b3a0803 	0x0b3a0803
  2c:	0b390b3b 	0x0b390b3b
  30:	00001349 	clo.w	$r9,$r26
  34:	03011305 	lu52i.d	$r5,$r24,68(0x44)
  38:	3a0b0b08 	0x3a0b0b08
  3c:	390b3b0b 	0x390b3b0b
  40:	0013010b 	maskeqz	$r11,$r8,$r0
  44:	000d0600 	bytepick.d	$r0,$r16,$r1,0x2
  48:	0b3a0803 	0x0b3a0803
  4c:	0b390b3b 	0x0b390b3b
  50:	0b381349 	0x0b381349
  54:	0f070000 	0x0f070000
  58:	490b0b00 	0x490b0b00
  5c:	08000013 	0x08000013
  60:	13490101 	addu16i.d	$r1,$r8,-11712(0xd240)
  64:	00001301 	clo.w	$r1,$r24
  68:	49002109 	bcnez	$fcc0,2424864(0x250020) # 250088 <data_size+0x24f9a0>
  6c:	000b2f13 	0x000b2f13
  70:	00340a00 	0x00340a00
  74:	0b3a0803 	0x0b3a0803
  78:	0b390b3b 	0x0b390b3b
  7c:	193f1349 	pcaddi	$r9,-395110(0x9f89a)
  80:	00001802 	cto.w	$r2,$r0
  84:	3f012e0b 	0x3f012e0b
  88:	3a080319 	0x3a080319
  8c:	390b3b0b 	0x390b3b0b
  90:	4919270b 	0x4919270b
  94:	12011113 	addu16i.d	$r19,$r8,-32700(0x8044)
  98:	97184006 	0x97184006
  9c:	13011942 	addu16i.d	$r2,$r10,-16314(0xc046)
  a0:	050c0000 	0x050c0000
  a4:	3a0e0300 	0x3a0e0300
  a8:	390b3b0b 	0x390b3b0b
  ac:	0213490b 	slti	$r11,$r8,1234(0x4d2)
  b0:	0d000017 	fsel	$f23,$f0,$f0,$fcc0
  b4:	08030034 	0x08030034
  b8:	0b3b0b3a 	0x0b3b0b3a
  bc:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
  c0:	00001702 	clz.w	$r2,$r24
  c4:	3f012e0e 	0x3f012e0e
  c8:	3a0e0319 	0x3a0e0319
  cc:	390b3b0b 	0x390b3b0b
  d0:	3c13490b 	0x3c13490b
  d4:	00130119 	maskeqz	$r25,$r8,$r0
  d8:	00180f00 	sra.w	$r0,$r24,$r3
  dc:	89100000 	0x89100000
  e0:	11010182 	addu16i.d	$r2,$r12,16448(0x4040)
  e4:	00133101 	maskeqz	$r1,$r8,$r12
  e8:	828a1100 	0x828a1100
  ec:	18020001 	pcaddi	$r1,4096(0x1000)
  f0:	00184291 	sra.w	$r17,$r20,$r16
  f4:	00051200 	alsl.w	$r0,$r16,$r4,0x3
  f8:	0b3a0803 	0x0b3a0803
  fc:	0b390b3b 	0x0b390b3b
 100:	17021349 	lu32i.d	$r9,-520038(0x8109a)
 104:	34130000 	0x34130000
 108:	3a080300 	0x3a080300
 10c:	390b3b0b 	0x390b3b0b
 110:	1c13490b 	pcaddu12i	$r11,39496(0x9a48)
 114:	1400000b 	lu12i.w	$r11,0
 118:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 11c:	0b3a0803 	0x0b3a0803
 120:	0b390b3b 	0x0b390b3b
 124:	01111927 	fscaleb.d	$f7,$f9,$f6
 128:	18400612 	pcaddi	$r18,131120(0x20030)
 12c:	01194297 	0x01194297
 130:	15000013 	lu12i.w	$r19,-524288(0x80000)
 134:	0e030005 	0x0e030005
 138:	0b3b0b3a 	0x0b3b0b3a
 13c:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 140:	00001802 	cto.w	$r2,$r0
 144:	3f002e16 	0x3f002e16
 148:	6e193c19 	bgeu	$r0,$r25,-124612(0x2193c) # fffe1a84 <_stack+0xe3fcff8c>
 14c:	3a0e030e 	0x3a0e030e
 150:	390b3b0b 	0x390b3b0b
 154:	0000000b 	0x0000000b
 158:	25011101 	stptr.w	$r1,$r8,272(0x110)
 15c:	030b1308 	lu52i.d	$r8,$r24,708(0x2c4)
 160:	11081b08 	addu16i.d	$r8,$r24,16902(0x4206)
 164:	10061201 	addu16i.d	$r1,$r16,388(0x184)
 168:	02000017 	slti	$r23,$r0,0
 16c:	0b0b000f 	0x0b0b000f
 170:	24030000 	ldptr.w	$r0,$r0,768(0x300)
 174:	3e0b0b00 	0x3e0b0b00
 178:	0008030b 	bytepick.w	$r11,$r24,$r0,0x0
 17c:	012e0400 	0x012e0400
 180:	0803193f 	0x0803193f
 184:	0b3b0b3a 	0x0b3b0b3a
 188:	19270b39 	pcaddi	$r25,-444327(0x93859)
 18c:	01111349 	fscaleb.d	$f9,$f26,$f4
 190:	18400612 	pcaddi	$r18,131120(0x20030)
 194:	01194297 	0x01194297
 198:	05000013 	0x05000013
 19c:	08030005 	0x08030005
 1a0:	0b3b0b3a 	0x0b3b0b3a
 1a4:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 1a8:	00001702 	clz.w	$r2,$r24
 1ac:	00001806 	cto.w	$r6,$r0
 1b0:	00340700 	0x00340700
 1b4:	0b3a0803 	0x0b3a0803
 1b8:	0b390b3b 	0x0b390b3b
 1bc:	17021349 	lu32i.d	$r9,-520038(0x8109a)
 1c0:	34080000 	0x34080000
 1c4:	3a080300 	0x3a080300
 1c8:	390b3b0b 	0x390b3b0b
 1cc:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 1d0:	09000018 	0x09000018
 1d4:	0803000a 	0x0803000a
 1d8:	0b3b0b3a 	0x0b3b0b3a
 1dc:	01110b39 	fscaleb.d	$f25,$f25,$f2
 1e0:	0b0a0000 	0x0b0a0000
 1e4:	01175501 	0x01175501
 1e8:	0b000013 	0x0b000013
 1ec:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 1f0:	0b3a0803 	0x0b3a0803
 1f4:	0b390b3b 	0x0b390b3b
 1f8:	193c1349 	pcaddi	$r9,-401254(0x9e09a)
 1fc:	00001301 	clo.w	$r1,$r24
 200:	3f012e0c 	0x3f012e0c
 204:	3a0e0319 	0x3a0e0319
 208:	390b3b0b 	0x390b3b0b
 20c:	3c13490b 	0x3c13490b
 210:	00130119 	maskeqz	$r25,$r8,$r0
 214:	82890d00 	0x82890d00
 218:	01110101 	fscaleb.d	$f1,$f8,$f0
 21c:	13011331 	addu16i.d	$r17,$r25,-16316(0xc044)
 220:	8a0e0000 	0x8a0e0000
 224:	02000182 	slti	$r2,$r12,0
 228:	18429118 	pcaddi	$r24,136328(0x21488)
 22c:	890f0000 	0x890f0000
 230:	11000182 	addu16i.d	$r2,$r12,16384(0x4000)
 234:	00133101 	maskeqz	$r1,$r8,$r12
 238:	82891000 	0x82891000
 23c:	01110101 	fscaleb.d	$f1,$f8,$f0
 240:	00001331 	clo.w	$r17,$r25
 244:	55010b11 	bl	-62586616(0xc450108) # fc45034c <_stack+0xe043e854>
 248:	12000017 	addu16i.d	$r23,$r0,-32768(0x8000)
 24c:	0111010b 	fscaleb.d	$f11,$f8,$f0
 250:	13010612 	addu16i.d	$r18,$r16,-16319(0xc041)
 254:	0f130000 	0x0f130000
 258:	490b0b00 	0x490b0b00
 25c:	14000013 	lu12i.w	$r19,0
 260:	13490026 	addu16i.d	$r6,$r1,-11712(0xd240)
 264:	2e150000 	0x2e150000
 268:	3c193f00 	0x3c193f00
 26c:	030e6e19 	lu52i.d	$r25,$r16,923(0x39b)
 270:	3b0b3a0e 	0x3b0b3a0e
 274:	000b390b 	0x000b390b
 278:	11010000 	addu16i.d	$r0,$r0,16448(0x4040)
 27c:	13082501 	addu16i.d	$r1,$r8,-15863(0xc209)
 280:	1b08030b 	pcalau12i	$r11,-507880(0x84018)
 284:	12011108 	addu16i.d	$r8,$r8,-32700(0x8044)
 288:	00171006 	sll.w	$r6,$r0,$r4
 28c:	00240200 	crc.w.b.w	$r0,$r16,$r0
 290:	0b3e0b0b 	0x0b3e0b0b
 294:	00000803 	0x00000803
 298:	3f012e03 	0x3f012e03
 29c:	3a0e0319 	0x3a0e0319
 2a0:	390b3b0b 	0x390b3b0b
 2a4:	010b200b 	fmin.d	$f11,$f0,$f8
 2a8:	04000013 	csrrd	$r19,0x0
 2ac:	08030005 	0x08030005
 2b0:	0b3b0b3a 	0x0b3b0b3a
 2b4:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 2b8:	2e050000 	0x2e050000
 2bc:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 2c0:	3b0b3a08 	0x3b0b3a08
 2c4:	270b390b 	stptr.d	$r11,$r8,2872(0xb38)
 2c8:	11134919 	addu16i.d	$r25,$r8,17618(0x44d2)
 2cc:	40061201 	beqz	$r16,263696(0x40610) # 408dc <data_size+0x401f4>
 2d0:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 2d4:	00001301 	clo.w	$r1,$r24
 2d8:	03000506 	lu52i.d	$r6,$r8,1(0x1)
 2dc:	3b0b3a08 	0x3b0b3a08
 2e0:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0e18 <data_size+0x2d0730>
 2e4:	00170213 	sll.w	$r19,$r16,$r0
 2e8:	012e0700 	0x012e0700
 2ec:	0e03193f 	0x0e03193f
 2f0:	0b3b0b3a 	0x0b3b0b3a
 2f4:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 2f8:	1301193c 	addu16i.d	$r28,$r9,-16314(0xc046)
 2fc:	18080000 	pcaddi	$r0,16384(0x4000)
 300:	09000000 	0x09000000
 304:	1331011d 	addu16i.d	$r29,$r8,-13248(0xcc40)
 308:	17550152 	lu32i.d	$r18,-350198(0xaa80a)
 30c:	0b590b58 	0x0b590b58
 310:	00000b57 	0x00000b57
 314:	3100050a 	0x3100050a
 318:	00170213 	sll.w	$r19,$r16,$r0
 31c:	012e0b00 	0x012e0b00
 320:	01111331 	fscaleb.d	$f17,$f25,$f4
 324:	18400612 	pcaddi	$r18,131120(0x20030)
 328:	00194297 	srl.d	$r23,$r20,$r16
 32c:	00050c00 	alsl.w	$r0,$r0,$r3,0x3
 330:	18021331 	pcaddi	$r17,4249(0x1099)
 334:	01000000 	0x01000000
 338:	08250111 	fmadd.d	$f17,$f8,$f0,$f10
 33c:	08030b13 	0x08030b13
 340:	0111081b 	fscaleb.d	$f27,$f0,$f2
 344:	17100612 	lu32i.d	$r18,-491472(0x88030)
 348:	24020000 	ldptr.w	$r0,$r0,512(0x200)
 34c:	3e0b0b00 	0x3e0b0b00
 350:	0008030b 	bytepick.w	$r11,$r24,$r0,0x0
 354:	012e0300 	0x012e0300
 358:	0803193f 	0x0803193f
 35c:	0b3b0b3a 	0x0b3b0b3a
 360:	19270b39 	pcaddi	$r25,-444327(0x93859)
 364:	01111349 	fscaleb.d	$f9,$f26,$f4
 368:	18400612 	pcaddi	$r18,131120(0x20030)
 36c:	01194297 	0x01194297
 370:	04000013 	csrrd	$r19,0x0
 374:	08030005 	0x08030005
 378:	0b3b0b3a 	0x0b3b0b3a
 37c:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 380:	00001702 	clz.w	$r2,$r24
 384:	3f012e05 	0x3f012e05
 388:	3a0e0319 	0x3a0e0319
 38c:	390b3b0b 	0x390b3b0b
 390:	3c13490b 	0x3c13490b
 394:	00130119 	maskeqz	$r25,$r8,$r0
 398:	00180600 	sra.w	$r0,$r16,$r1
 39c:	89070000 	0x89070000
 3a0:	11010182 	addu16i.d	$r2,$r12,16448(0x4040)
 3a4:	01133101 	fcopysign.d	$f1,$f8,$f12
 3a8:	08000013 	0x08000013
 3ac:	0001828a 	0x0001828a
 3b0:	42911802 	beqz	$r0,692504(0xa9118) # a94c8 <data_size+0xa8de0>
 3b4:	09000018 	0x09000018
 3b8:	01018289 	0x01018289
 3bc:	13310111 	addu16i.d	$r17,$r8,-13248(0xcc40)
 3c0:	0f0a0000 	0x0f0a0000
 3c4:	490b0b00 	0x490b0b00
 3c8:	0b000013 	0x0b000013
 3cc:	08030034 	0x08030034
 3d0:	0b3b0b3a 	0x0b3b0b3a
 3d4:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 3d8:	00001702 	clz.w	$r2,$r24
 3dc:	55010b0c 	bl	-63897336(0xc310108) # fc3104e4 <_stack+0xe02fe9ec>
 3e0:	0d000017 	fsel	$f23,$f0,$f0,$fcc0
 3e4:	0111010b 	fscaleb.d	$f11,$f8,$f0
 3e8:	13010612 	addu16i.d	$r18,$r16,-16319(0xc041)
 3ec:	2e0e0000 	0x2e0e0000
 3f0:	3c193f00 	0x3c193f00
 3f4:	030e6e19 	lu52i.d	$r25,$r16,923(0x39b)
 3f8:	3b0b3a0e 	0x3b0b3a0e
 3fc:	000b390b 	0x000b390b
 400:	11010000 	addu16i.d	$r0,$r0,16448(0x4040)
 404:	13082501 	addu16i.d	$r1,$r8,-15863(0xc209)
 408:	1b08030b 	pcalau12i	$r11,-507880(0x84018)
 40c:	12011108 	addu16i.d	$r8,$r8,-32700(0x8044)
 410:	00171006 	sll.w	$r6,$r0,$r4
 414:	00240200 	crc.w.b.w	$r0,$r16,$r0
 418:	0b3e0b0b 	0x0b3e0b0b
 41c:	00000803 	0x00000803
 420:	3f012e03 	0x3f012e03
 424:	3a080319 	0x3a080319
 428:	390b3b0b 	0x390b3b0b
 42c:	4919270b 	0x4919270b
 430:	12011113 	addu16i.d	$r19,$r8,-32700(0x8044)
 434:	97184006 	0x97184006
 438:	13011942 	addu16i.d	$r2,$r10,-16314(0xc046)
 43c:	05040000 	0x05040000
 440:	3a080300 	0x3a080300
 444:	390b3b0b 	0x390b3b0b
 448:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 44c:	05000017 	0x05000017
 450:	08030034 	0x08030034
 454:	0b3b0b3a 	0x0b3b0b3a
 458:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 45c:	00001702 	clz.w	$r2,$r24
 460:	03003406 	lu52i.d	$r6,$r0,13(0xd)
 464:	3b0b3a08 	0x3b0b3a08
 468:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0fa0 <data_size+0x2d08b8>
 46c:	00180213 	sra.w	$r19,$r16,$r0
 470:	010b0700 	fmin.d	$f0,$f24,$f1
 474:	06120111 	cacop	0x11,$r8,1152(0x480)
 478:	00001301 	clo.w	$r1,$r24
 47c:	3f012e08 	0x3f012e08
 480:	3a0e0319 	0x3a0e0319
 484:	390b3b0b 	0x390b3b0b
 488:	3c13490b 	0x3c13490b
 48c:	00130119 	maskeqz	$r25,$r8,$r0
 490:	00180900 	sra.w	$r0,$r8,$r2
 494:	890a0000 	0x890a0000
 498:	11010182 	addu16i.d	$r2,$r12,16448(0x4040)
 49c:	00133101 	maskeqz	$r1,$r8,$r12
 4a0:	828a0b00 	0x828a0b00
 4a4:	18020001 	pcaddi	$r1,4096(0x1000)
 4a8:	00184291 	sra.w	$r17,$r20,$r16
 4ac:	010b0c00 	fmin.d	$f0,$f0,$f3
 4b0:	06120111 	cacop	0x11,$r8,1152(0x480)
 4b4:	890d0000 	0x890d0000
 4b8:	11000182 	addu16i.d	$r2,$r12,16384(0x4000)
 4bc:	00133101 	maskeqz	$r1,$r8,$r12
 4c0:	01010e00 	fadd.d	$f0,$f16,$f3
 4c4:	13011349 	addu16i.d	$r9,$r26,-16316(0xc044)
 4c8:	210f0000 	sc.w	$r0,$r0,3840(0xf00)
 4cc:	2f134900 	0x2f134900
 4d0:	1000000b 	addu16i.d	$r11,$r0,0
 4d4:	193f002e 	pcaddi	$r14,-395263(0x9f801)
 4d8:	0e6e193c 	0x0e6e193c
 4dc:	0b3a0e03 	0x0b3a0e03
 4e0:	0b390b3b 	0x0b390b3b
 4e4:	01000000 	0x01000000
 4e8:	08250111 	fmadd.d	$f17,$f8,$f0,$f10
 4ec:	08030b13 	0x08030b13
 4f0:	1755081b 	lu32i.d	$r27,-350144(0xaa840)
 4f4:	17100111 	lu32i.d	$r17,-491512(0x88008)
 4f8:	0f020000 	0x0f020000
 4fc:	000b0b00 	0x000b0b00
 500:	00240300 	crc.w.b.w	$r0,$r24,$r0
 504:	0b3e0b0b 	0x0b3e0b0b
 508:	00000803 	0x00000803
 50c:	03001604 	lu52i.d	$r4,$r16,5(0x5)
 510:	3b0b3a08 	0x3b0b3a08
 514:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d104c <data_size+0x2d0964>
 518:	05000013 	0x05000013
 51c:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 520:	0b3a0803 	0x0b3a0803
 524:	0b39053b 	0x0b39053b
 528:	01111927 	fscaleb.d	$f7,$f9,$f6
 52c:	18400612 	pcaddi	$r18,131120(0x20030)
 530:	01194297 	0x01194297
 534:	06000013 	cacop	0x13,$r0,0
 538:	08030005 	0x08030005
 53c:	053b0b3a 	0x053b0b3a
 540:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 544:	00001702 	clz.w	$r2,$r24
 548:	31011d07 	0x31011d07
 54c:	12011113 	addu16i.d	$r19,$r8,-32700(0x8044)
 550:	590b5806 	beq	$r0,$r6,68440(0x10b58) # 110a8 <data_size+0x109c0>
 554:	000b5705 	0x000b5705
 558:	00050800 	alsl.w	$r0,$r0,$r2,0x3
 55c:	17021331 	lu32i.d	$r17,-520039(0x81099)
 560:	05090000 	0x05090000
 564:	1c133100 	pcaddu12i	$r0,39304(0x9988)
 568:	0a00000b 	0x0a00000b
 56c:	0111010b 	fscaleb.d	$f11,$f8,$f0
 570:	00000612 	0x00000612
 574:	3100340b 	0x3100340b
 578:	00180213 	sra.w	$r19,$r16,$r0
 57c:	012e0c00 	0x012e0c00
 580:	0803193f 	0x0803193f
 584:	053b0b3a 	0x053b0b3a
 588:	19270b39 	pcaddi	$r25,-444327(0x93859)
 58c:	01111349 	fscaleb.d	$f9,$f26,$f4
 590:	18400612 	pcaddi	$r18,131120(0x20030)
 594:	01194297 	0x01194297
 598:	0d000013 	fsel	$f19,$f0,$f0,$fcc0
 59c:	08030034 	0x08030034
 5a0:	053b0b3a 	0x053b0b3a
 5a4:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 5a8:	00001702 	clz.w	$r2,$r24
 5ac:	0300340e 	lu52i.d	$r14,$r0,13(0xd)
 5b0:	3b0b3a08 	0x3b0b3a08
 5b4:	490b3905 	bcnez	$fcc0,1379128(0x150b38) # 1510ec <data_size+0x150a04>
 5b8:	00180213 	sra.w	$r19,$r16,$r0
 5bc:	000f0f00 	bytepick.d	$r0,$r24,$r3,0x6
 5c0:	13490b0b 	addu16i.d	$r11,$r24,-11710(0xd242)
 5c4:	26100000 	ldptr.d	$r0,$r0,4096(0x1000)
 5c8:	11000000 	addu16i.d	$r0,$r0,16384(0x4000)
 5cc:	13490026 	addu16i.d	$r6,$r1,-11712(0xd240)
 5d0:	05120000 	0x05120000
 5d4:	3a080300 	0x3a080300
 5d8:	39053b0b 	0x39053b0b
 5dc:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 5e0:	13000018 	addu16i.d	$r24,$r0,-16384(0xc000)
 5e4:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 5e8:	0b3a0803 	0x0b3a0803
 5ec:	0b390b3b 	0x0b390b3b
 5f0:	13491927 	addu16i.d	$r7,$r9,-11706(0xd246)
 5f4:	13010b20 	addu16i.d	$r0,$r25,-16318(0xc042)
 5f8:	05140000 	0x05140000
 5fc:	3a080300 	0x3a080300
 600:	390b3b0b 	0x390b3b0b
 604:	0013490b 	maskeqz	$r11,$r8,$r18
 608:	00341500 	0x00341500
 60c:	0b3a0803 	0x0b3a0803
 610:	0b390b3b 	0x0b390b3b
 614:	00001349 	clo.w	$r9,$r26
 618:	3f012e16 	0x3f012e16
 61c:	3a080319 	0x3a080319
 620:	390b3b0b 	0x390b3b0b
 624:	4919270b 	0x4919270b
 628:	12011113 	addu16i.d	$r19,$r8,-32700(0x8044)
 62c:	97184006 	0x97184006
 630:	13011942 	addu16i.d	$r2,$r10,-16314(0xc046)
 634:	05170000 	0x05170000
 638:	3a080300 	0x3a080300
 63c:	390b3b0b 	0x390b3b0b
 640:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 644:	18000017 	pcaddi	$r23,0
 648:	08030005 	0x08030005
 64c:	0b3b0b3a 	0x0b3b0b3a
 650:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 654:	00001802 	cto.w	$r2,$r0
 658:	03003419 	lu52i.d	$r25,$r0,13(0xd)
 65c:	3b0b3a08 	0x3b0b3a08
 660:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d1198 <data_size+0x2d0ab0>
 664:	00170213 	sll.w	$r19,$r16,$r0
 668:	012e1a00 	0x012e1a00
 66c:	01111331 	fscaleb.d	$f17,$f25,$f4
 670:	18400612 	pcaddi	$r18,131120(0x20030)
 674:	00194297 	srl.d	$r23,$r20,$r16
 678:	00051b00 	alsl.w	$r0,$r24,$r6,0x3
 67c:	18021331 	pcaddi	$r17,4249(0x1099)
 680:	341c0000 	0x341c0000
 684:	02133100 	slti	$r0,$r8,1228(0x4cc)
 688:	00000017 	0x00000017
 68c:	25011101 	stptr.w	$r1,$r8,272(0x110)
 690:	030b1308 	lu52i.d	$r8,$r24,708(0x2c4)
 694:	11081b08 	addu16i.d	$r8,$r24,16902(0x4206)
 698:	10061201 	addu16i.d	$r1,$r16,388(0x184)
 69c:	02000017 	slti	$r23,$r0,0
 6a0:	0b0b0024 	0x0b0b0024
 6a4:	08030b3e 	0x08030b3e
 6a8:	16030000 	lu32i.d	$r0,6144(0x1800)
 6ac:	3a080300 	0x3a080300
 6b0:	390b3b0b 	0x390b3b0b
 6b4:	0013490b 	maskeqz	$r11,$r8,$r18
 6b8:	01130400 	fcopysign.d	$f0,$f0,$f1
 6bc:	0b0b0803 	0x0b0b0803
 6c0:	0b3b0b3a 	0x0b3b0b3a
 6c4:	13010b39 	addu16i.d	$r25,$r25,-16318(0xc042)
 6c8:	0d050000 	0x0d050000
 6cc:	3a080300 	0x3a080300
 6d0:	390b3b0b 	0x390b3b0b
 6d4:	3813490b 	0x3813490b
 6d8:	0600000b 	cacop	0xb,$r0,0
 6dc:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 6e0:	0b3a0803 	0x0b3a0803
 6e4:	0b390b3b 	0x0b390b3b
 6e8:	13491927 	addu16i.d	$r7,$r9,-11706(0xd246)
 6ec:	06120111 	cacop	0x11,$r8,1152(0x480)
 6f0:	42971840 	beqz	$r2,169752(0x29718) # 29e08 <data_size+0x29720>
 6f4:	00130119 	maskeqz	$r25,$r8,$r0
 6f8:	00340700 	0x00340700
 6fc:	0b3a0803 	0x0b3a0803
 700:	0b390b3b 	0x0b390b3b
 704:	17021349 	lu32i.d	$r9,-520038(0x8109a)
 708:	1d080000 	pcaddu12i	$r0,-507904(0x84000)
 70c:	52133101 	b	67506992(0x4061330) # 4061a3c <data_size+0x4061354>
 710:	58175501 	beq	$r8,$r1,5972(0x1754) # 1e64 <data_size+0x177c>
 714:	570b590b 	bl	70191960(0x42f0b58) # 42f126c <data_size+0x42f0b84>
 718:	0900000b 	0x0900000b
 71c:	1755010b 	lu32i.d	$r11,-350200(0xaa808)
 720:	340a0000 	0x340a0000
 724:	00133100 	maskeqz	$r0,$r8,$r12
 728:	012e0b00 	0x012e0b00
 72c:	0803193f 	0x0803193f
 730:	0b3b0b3a 	0x0b3b0b3a
 734:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 738:	00001301 	clo.w	$r1,$r24
 73c:	0300340c 	lu52i.d	$r12,$r0,13(0xd)
 740:	3b0b3a08 	0x3b0b3a08
 744:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d127c <data_size+0x2d0b94>
 748:	0d000013 	fsel	$f19,$f0,$f0,$fcc0
 74c:	08030005 	0x08030005
 750:	0b3b0b3a 	0x0b3b0b3a
 754:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 758:	00001702 	clz.w	$r2,$r24
 75c:	0300050e 	lu52i.d	$r14,$r8,1(0x1)
 760:	3b0b3a08 	0x3b0b3a08
 764:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d129c <data_size+0x2d0bb4>
 768:	00180213 	sra.w	$r19,$r16,$r0
 76c:	000f0f00 	bytepick.d	$r0,$r24,$r3,0x6
 770:	13490b0b 	addu16i.d	$r11,$r24,-11710(0xd242)
 774:	2e100000 	0x2e100000
 778:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 77c:	3b0b3a08 	0x3b0b3a08
 780:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d12b8 <data_size+0x2d0bd0>
 784:	12011113 	addu16i.d	$r19,$r8,-32700(0x8044)
 788:	97184006 	0x97184006
 78c:	13011942 	addu16i.d	$r2,$r10,-16314(0xc046)
 790:	34110000 	0x34110000
 794:	3a080300 	0x3a080300
 798:	390b3b0b 	0x390b3b0b
 79c:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 7a0:	12000018 	addu16i.d	$r24,$r0,-32768(0x8000)
 7a4:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 7a8:	0b3a0803 	0x0b3a0803
 7ac:	0b390b3b 	0x0b390b3b
 7b0:	0b201349 	0x0b201349
 7b4:	Address 0x00000000000007b4 is out of bounds.


Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	000001f0 	0x000001f0
   4:	00000208 	0x00000208
   8:	08540001 	fmsub.s	$f1,$f0,$f0,$f8
   c:	34000002 	0x34000002
  10:	01000002 	0x01000002
  14:	02346800 	slti	$r0,$r0,-742(0xd1a)
  18:	023c0000 	slti	$r0,$r0,-256(0xf00)
  1c:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  20:	9f5401f3 	0x9f5401f3
  24:	0000023c 	0x0000023c
  28:	00000244 	0x00000244
  2c:	00680001 	bstrins.w	$r1,$r0,0x8,0x0
  30:	00000000 	0x00000000
  34:	fc000000 	0xfc000000
  38:	24000001 	ldptr.w	$r1,$r0,0
  3c:	01000002 	0x01000002
  40:	023c6700 	slti	$r0,$r24,-231(0xf19)
  44:	02440000 	sltui	$r0,$r0,256(0x100)
  48:	00010000 	asrtle.d	$r0,$r0
  4c:	00000067 	0x00000067
  50:	00000000 	0x00000000
  54:	00021000 	0x00021000
  58:	00022800 	0x00022800
  5c:	54000100 	bl	67108864(0x4000000) # 400005c <data_size+0x3fff974>
  60:	0000023c 	0x0000023c
  64:	00000240 	0x00000240
  68:	00540001 	0x00540001
  6c:	00000000 	0x00000000
  70:	2c000000 	vld	$vr0,$r0,0
  74:	44000001 	bnez	$r0,262144(0x40000) # 40074 <data_size+0x3f98c>
  78:	01000001 	0x01000001
  7c:	01445400 	0x01445400
  80:	01b40000 	0x01b40000
  84:	00010000 	asrtle.d	$r0,$r0
  88:	0001b469 	0x0001b469
  8c:	0001c000 	asrtgt.d	$r0,$r16
  90:	f3000400 	0xf3000400
  94:	c09f5401 	0xc09f5401
  98:	e8000001 	0xe8000001
  9c:	01000001 	0x01000001
  a0:	01e86900 	0x01e86900
  a4:	01f00000 	0x01f00000
  a8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  ac:	9f5401f3 	0x9f5401f3
	...
  b8:	0000012c 	0x0000012c
  bc:	00000153 	0x00000153
  c0:	53550001 	b	480512(0x75500) # 755c0 <data_size+0x74ed8>
  c4:	f0000001 	0xf0000001
  c8:	04000001 	csrrd	$r1,0x0
  cc:	5501f300 	bl	-67042832(0xc0101f0) # fc0102bc <_stack+0xdfffe7c4>
  d0:	0000009f 	0x0000009f
  d4:	00000000 	0x00000000
  d8:	00012c00 	asrtle.d	$r0,$r11
  dc:	00015300 	asrtle.d	$r24,$r20
  e0:	56000100 	bl	67239936(0x4020000) # 40200e0 <data_size+0x401f9f8>
  e4:	00000153 	0x00000153
  e8:	000001ac 	0x000001ac
  ec:	ac670001 	0xac670001
  f0:	c0000001 	0xc0000001
  f4:	04000001 	csrrd	$r1,0x0
  f8:	5601f300 	bl	-66977296(0xc0201f0) # fc0202e8 <_stack+0xe000e7f0>
  fc:	0001c09f 	0x0001c09f
 100:	0001e000 	asrtgt.d	$r0,$r24
 104:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff0104 <_stack+0xe3fde60c>
 108:	000001e0 	0x000001e0
 10c:	000001f0 	0x000001f0
 110:	01f30004 	0x01f30004
 114:	00009f56 	0x00009f56
 118:	00000000 	0x00000000
 11c:	01380000 	0x01380000
 120:	01b00000 	0x01b00000
 124:	00010000 	asrtle.d	$r0,$r0
 128:	0001c068 	0x0001c068
 12c:	0001e400 	asrtgt.d	$r0,$r25
 130:	68000100 	bltu	$r8,$r0,0 # 130 <data_size-0x5b8>
	...
 13c:	00000154 	0x00000154
 140:	000001b8 	0x000001b8
 144:	c0540001 	0xc0540001
 148:	d4000001 	0xd4000001
 14c:	01000001 	0x01000001
 150:	00005400 	bitrev.d	$r0,$r0
 154:	00000000 	0x00000000
 158:	01540000 	0x01540000
 15c:	01780000 	0x01780000
 160:	00020000 	0x00020000
 164:	01789f30 	0x01789f30
 168:	01a40000 	0x01a40000
 16c:	00010000 	asrtle.d	$r0,$r0
 170:	0001c05e 	0x0001c05e
 174:	0001c400 	asrtgt.d	$r0,$r17
 178:	30000200 	0x30000200
 17c:	0000009f 	0x0000009f
 180:	00000000 	0x00000000
 184:	00006000 	rdtimel.w	$r0,$r0
 188:	00007800 	0x00007800
 18c:	54000100 	bl	67108864(0x4000000) # 400018c <data_size+0x3fffaa4>
 190:	00000078 	0x00000078
 194:	000000e8 	0x000000e8
 198:	e86a0001 	0xe86a0001
 19c:	f8000000 	0xf8000000
 1a0:	04000000 	csrrd	$r0,0x0
 1a4:	5401f300 	bl	-67108368(0xc0001f0) # fc000394 <_stack+0xdffee89c>
 1a8:	0000f89f 	0x0000f89f
 1ac:	00011000 	asrtle.d	$r0,$r4
 1b0:	6a000100 	bltu	$r8,$r0,-131072(0x20000) # fffe01b0 <_stack+0xe3fce6b8>
 1b4:	00000110 	0x00000110
 1b8:	00000120 	0x00000120
 1bc:	01f30004 	0x01f30004
 1c0:	00009f54 	0x00009f54
 1c4:	00000000 	0x00000000
 1c8:	00600000 	bstrins.w	$r0,$r0,0x0,0x0
 1cc:	00970000 	bstrins.d	$r0,$r0,0x17,0x0
 1d0:	00010000 	asrtle.d	$r0,$r0
 1d4:	00009755 	0x00009755
 1d8:	0000e000 	0x0000e000
 1dc:	68000100 	bltu	$r8,$r0,0 # 1dc <data_size-0x50c>
 1e0:	000000e0 	0x000000e0
 1e4:	000000f8 	0x000000f8
 1e8:	01f30004 	0x01f30004
 1ec:	00f89f55 	bstrpick.d	$r21,$r26,0x38,0x27
 1f0:	01080000 	0x01080000
 1f4:	00010000 	asrtle.d	$r0,$r0
 1f8:	00010868 	0x00010868
 1fc:	00012000 	asrtle.d	$r0,$r8
 200:	f3000400 	0xf3000400
 204:	009f5501 	bstrins.d	$r1,$r8,0x1f,0x15
 208:	00000000 	0x00000000
 20c:	60000000 	blt	$r0,$r0,0 # 20c <data_size-0x4dc>
 210:	97000000 	0x97000000
 214:	01000000 	0x01000000
 218:	00975600 	bstrins.d	$r0,$r16,0x17,0x15
 21c:	00ec0000 	bstrpick.d	$r0,$r0,0x2c,0x0
 220:	00010000 	asrtle.d	$r0,$r0
 224:	0000ec6b 	0x0000ec6b
 228:	0000f800 	0x0000f800
 22c:	f3000400 	0xf3000400
 230:	f89f5601 	0xf89f5601
 234:	14000000 	lu12i.w	$r0,0
 238:	01000001 	0x01000001
 23c:	01146b00 	frsqrt.d	$f0,$f24
 240:	01200000 	0x01200000
 244:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 248:	9f5601f3 	0x9f5601f3
	...
 254:	00000060 	0x00000060
 258:	00000097 	0x00000097
 25c:	97570001 	0x97570001
 260:	dc000000 	0xdc000000
 264:	01000000 	0x01000000
 268:	00dc6700 	bstrpick.d	$r0,$r24,0x1c,0x19
 26c:	00f80000 	bstrpick.d	$r0,$r0,0x38,0x0
 270:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 274:	9f5701f3 	0x9f5701f3
 278:	000000f8 	0x000000f8
 27c:	00000104 	0x00000104
 280:	04670001 	csrrd	$r1,0x19c0
 284:	20000001 	ll.w	$r1,$r0,0
 288:	04000001 	csrrd	$r1,0x0
 28c:	5701f300 	bl	-66911760(0xc0301f0) # fc03047c <_stack+0xe001e984>
 290:	0000009f 	0x0000009f
 294:	00000000 	0x00000000
 298:	00007400 	0x00007400
 29c:	00007800 	0x00007800
 2a0:	54000100 	bl	67108864(0x4000000) # 40002a0 <data_size+0x3fffbb8>
 2a4:	00000078 	0x00000078
 2a8:	000000e8 	0x000000e8
 2ac:	e86a0001 	0xe86a0001
 2b0:	f8000000 	0xf8000000
 2b4:	04000000 	csrrd	$r0,0x0
 2b8:	5401f300 	bl	-67108368(0xc0001f0) # fc0004a8 <_stack+0xdffee9b0>
 2bc:	0000f89f 	0x0000f89f
 2c0:	00011000 	asrtle.d	$r0,$r4
 2c4:	6a000100 	bltu	$r8,$r0,-131072(0x20000) # fffe02c4 <_stack+0xe3fce7cc>
 2c8:	00000110 	0x00000110
 2cc:	00000120 	0x00000120
 2d0:	01f30004 	0x01f30004
 2d4:	00009f54 	0x00009f54
 2d8:	00000000 	0x00000000
 2dc:	00740000 	bstrins.w	$r0,$r0,0x14,0x0
 2e0:	00e40000 	bstrpick.d	$r0,$r0,0x24,0x0
 2e4:	00010000 	asrtle.d	$r0,$r0
 2e8:	0000f869 	0x0000f869
 2ec:	00010c00 	asrtle.d	$r0,$r3
 2f0:	69000100 	bltu	$r8,$r0,65536(0x10000) # 102f0 <data_size+0xfc08>
	...
 2fc:	00000098 	0x00000098
 300:	000000f0 	0x000000f0
 304:	f8540001 	0xf8540001
 308:	18000000 	pcaddi	$r0,0
 30c:	01000001 	0x01000001
 310:	00005400 	bitrev.d	$r0,$r0
 314:	00000000 	0x00000000
 318:	00ac0000 	bstrins.d	$r0,$r0,0x2c,0x0
 31c:	00f80000 	bstrpick.d	$r0,$r0,0x38,0x0
 320:	00010000 	asrtle.d	$r0,$r0
 324:	0000005d 	0x0000005d
	...
 330:	00004000 	revh.2w	$r0,$r0
 334:	54000100 	bl	67108864(0x4000000) # 4000334 <data_size+0x3fffc4c>
 338:	00000040 	0x00000040
 33c:	00000044 	0x00000044
 340:	007c0002 	bstrins.w	$r2,$r0,0x1c,0x0
 344:	00000044 	0x00000044
 348:	0000005c 	0x0000005c
 34c:	5c540001 	bne	$r0,$r1,21504(0x5400) # 574c <data_size+0x5064>
 350:	60000000 	blt	$r0,$r0,0 # 350 <data_size-0x398>
 354:	02000000 	slti	$r0,$r0,0
 358:	00007400 	0x00007400
	...
 364:	14000000 	lu12i.w	$r0,0
 368:	02000000 	slti	$r0,$r0,0
 36c:	149f3000 	lu12i.w	$r0,326016(0x4f980)
 370:	2c000000 	vld	$vr0,$r0,0
 374:	01000000 	0x01000000
 378:	00445c00 	0x00445c00
 37c:	00480000 	0x00480000
 380:	00010000 	asrtle.d	$r0,$r0
 384:	0000005c 	0x0000005c
	...
 390:	00006400 	rdtimeh.w	$r0,$r0
 394:	54000100 	bl	67108864(0x4000000) # 4000394 <data_size+0x3fffcac>
 398:	00000064 	0x00000064
 39c:	000000cc 	0x000000cc
 3a0:	cc690001 	0xcc690001
 3a4:	f4000000 	0xf4000000
 3a8:	04000000 	csrrd	$r0,0x0
 3ac:	5401f300 	bl	-67108368(0xc0001f0) # fc00059c <_stack+0xdffeeaa4>
 3b0:	0000f49f 	0x0000f49f
 3b4:	00022c00 	0x00022c00
 3b8:	69000100 	bltu	$r8,$r0,65536(0x10000) # 103b8 <data_size+0xfcd0>
	...
 3c4:	00000048 	0x00000048
 3c8:	00000064 	0x00000064
 3cc:	9f300002 	0x9f300002
 3d0:	00000064 	0x00000064
 3d4:	000000cc 	0x000000cc
 3d8:	f4680001 	0xf4680001
 3dc:	00000000 	0x00000000
 3e0:	03000001 	lu52i.d	$r1,$r0,0
 3e4:	9f018800 	0x9f018800
 3e8:	00000100 	0x00000100
 3ec:	0000011c 	0x0000011c
 3f0:	1c680001 	pcaddu12i	$r1,212992(0x34000)
 3f4:	38000001 	ldx.b	$r1,$r0,$r0
 3f8:	03000001 	lu52i.d	$r1,$r0,0
 3fc:	9f7f8800 	0x9f7f8800
 400:	00000138 	0x00000138
 404:	00000164 	0x00000164
 408:	64680001 	bge	$r0,$r1,26624(0x6800) # 6c08 <data_size+0x6520>
 40c:	6c000001 	bgeu	$r0,$r1,0 # 40c <data_size-0x2dc>
 410:	03000001 	lu52i.d	$r1,$r0,0
 414:	9f7f8800 	0x9f7f8800
 418:	0000016c 	0x0000016c
 41c:	000001e8 	0x000001e8
 420:	e8680001 	0xe8680001
 424:	f0000001 	0xf0000001
 428:	03000001 	lu52i.d	$r1,$r0,0
 42c:	9f7f8800 	0x9f7f8800
 430:	000001f0 	0x000001f0
 434:	0000022c 	0x0000022c
 438:	00680001 	bstrins.w	$r1,$r0,0x8,0x0
 43c:	00000000 	0x00000000
 440:	64000000 	bge	$r0,$r0,0 # 440 <data_size-0x2a8>
 444:	78000000 	0x78000000
 448:	01000000 	0x01000000
 44c:	007c6700 	bstrins.w	$r0,$r24,0x1c,0x19
 450:	00cc0000 	bstrpick.d	$r0,$r0,0xc,0x0
 454:	00010000 	asrtle.d	$r0,$r0
 458:	0000f467 	0x0000f467
 45c:	00022c00 	0x00022c00
 460:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff0460 <_stack+0xe3fde968>
	...
 46c:	00000048 	0x00000048
 470:	000000cc 	0x000000cc
 474:	f46a0001 	0xf46a0001
 478:	68000000 	bltu	$r0,$r0,0 # 478 <data_size-0x270>
 47c:	01000001 	0x01000001
 480:	01686a00 	0x01686a00
 484:	016c0000 	0x016c0000
 488:	00030000 	0x00030000
 48c:	6c9f7c8a 	bgeu	$r4,$r10,40828(0x9f7c) # a408 <data_size+0x9d20>
 490:	ec000001 	0xec000001
 494:	01000001 	0x01000001
 498:	01ec6a00 	0x01ec6a00
 49c:	01f00000 	0x01f00000
 4a0:	00030000 	0x00030000
 4a4:	f09f7c8a 	0xf09f7c8a
 4a8:	2c000001 	vld	$vr1,$r0,0
 4ac:	01000002 	0x01000002
 4b0:	00006a00 	rdtime.d	$r0,$r16
 4b4:	00000000 	0x00000000
 4b8:	00ac0000 	bstrins.d	$r0,$r0,0x2c,0x0
 4bc:	00cc0000 	bstrpick.d	$r0,$r0,0xc,0x0
 4c0:	00010000 	asrtle.d	$r0,$r0
 4c4:	0000f455 	0x0000f455
 4c8:	00010000 	asrtle.d	$r0,$r0
 4cc:	55000100 	bl	67174400(0x4010000) # 40104cc <data_size+0x400fde4>
 4d0:	00000100 	0x00000100
 4d4:	00000114 	0x00000114
 4d8:	9f300002 	0x9f300002
 4dc:	00000114 	0x00000114
 4e0:	00000118 	0x00000118
 4e4:	38550001 	0x38550001
 4e8:	4f000001 	jirl	$r1,$r0,-65536(0x30000)
 4ec:	01000001 	0x01000001
 4f0:	015c5500 	0x015c5500
 4f4:	016b0000 	0x016b0000
 4f8:	00010000 	asrtle.d	$r0,$r0
 4fc:	00017055 	0x00017055
 500:	00017f00 	asrtle.d	$r24,$r31
 504:	55000100 	bl	67174400(0x4010000) # 4010504 <data_size+0x400fe1c>
 508:	0000018c 	0x0000018c
 50c:	0000019b 	0x0000019b
 510:	a8550001 	0xa8550001
 514:	b7000001 	0xb7000001
 518:	01000001 	0x01000001
 51c:	01c45500 	0x01c45500
 520:	01d30000 	0x01d30000
 524:	00010000 	asrtle.d	$r0,$r0
 528:	0001e055 	0x0001e055
 52c:	0001ef00 	asrtgt.d	$r24,$r27
 530:	55000100 	bl	67174400(0x4010000) # 4010530 <data_size+0x400fe48>
 534:	000001f4 	0x000001f4
 538:	00000203 	0x00000203
 53c:	10550001 	addu16i.d	$r1,$r0,5440(0x1540)
 540:	17000002 	lu32i.d	$r2,-524288(0x80000)
 544:	01000002 	0x01000002
 548:	02205500 	slti	$r0,$r8,-2027(0x815)
 54c:	02270000 	slti	$r0,$r0,-1600(0x9c0)
 550:	00010000 	asrtle.d	$r0,$r0
 554:	00000055 	0x00000055
	...
 560:	00001c00 	ctz.w	$r0,$r0
 564:	54000100 	bl	67108864(0x4000000) # 4000564 <data_size+0x3fffe7c>
 568:	0000001c 	0x0000001c
 56c:	00000028 	0x00000028
 570:	01f30004 	0x01f30004
 574:	00009f54 	0x00009f54
	...
 580:	00180000 	sra.w	$r0,$r0,$r0
 584:	00010000 	asrtle.d	$r0,$r0
 588:	00000054 	0x00000054
 58c:	00000000 	0x00000000
 590:	00007400 	0x00007400
 594:	00007f00 	0x00007f00
 598:	54000100 	bl	67108864(0x4000000) # 4000598 <data_size+0x3fffeb0>
 59c:	0000007f 	0x0000007f
 5a0:	000000a0 	0x000000a0
 5a4:	01f30004 	0x01f30004
 5a8:	00009f54 	0x00009f54
	...
 5b4:	00280000 	0x00280000
 5b8:	00010000 	asrtle.d	$r0,$r0
 5bc:	00002854 	cto.d	$r20,$r2
 5c0:	00003000 	revb.2h	$r0,$r0
 5c4:	88000300 	0x88000300
 5c8:	00309f7f 	0x00309f7f
 5cc:	003c0000 	0x003c0000
 5d0:	00010000 	asrtle.d	$r0,$r0
 5d4:	00003c68 	revb.d	$r8,$r3
 5d8:	00005000 	bitrev.w	$r0,$r0
 5dc:	88000300 	0x88000300
 5e0:	00509f7f 	0x00509f7f
 5e4:	00580000 	0x00580000
 5e8:	00010000 	asrtle.d	$r0,$r0
 5ec:	00000068 	0x00000068
 5f0:	00000000 	0x00000000
 5f4:	00001800 	cto.w	$r0,$r0
 5f8:	00006000 	rdtimel.w	$r0,$r0
 5fc:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff05fc <_stack+0xe3fdeb04>
	...
 60c:	00000024 	0x00000024
 610:	24540001 	ldptr.w	$r1,$r0,21504(0x5400)
 614:	bc000000 	0xbc000000
 618:	04000000 	csrrd	$r0,0x0
 61c:	5401f300 	bl	-67108368(0xc0001f0) # fc00080c <_stack+0xdffeed14>
 620:	0000bc9f 	0x0000bc9f
 624:	0000c000 	0x0000c000
 628:	54000100 	bl	67108864(0x4000000) # 4000628 <data_size+0x3ffff40>
 62c:	000000c0 	0x000000c0
 630:	000000d0 	0x000000d0
 634:	d0670001 	0xd0670001
 638:	dc000000 	0xdc000000
 63c:	04000000 	csrrd	$r0,0x0
 640:	1f008700 	pcaddu18i	$r0,-523208(0x80438)
 644:	0000dc9f 	0x0000dc9f
 648:	0000e800 	0x0000e800
 64c:	54000100 	bl	67108864(0x4000000) # 400064c <data_size+0x3ffff64>
	...
 65c:	00000024 	0x00000024
 660:	24550001 	ldptr.w	$r1,$r0,21760(0x5500)
 664:	bc000000 	0xbc000000
 668:	04000000 	csrrd	$r0,0x0
 66c:	5501f300 	bl	-67042832(0xc0101f0) # fc01085c <_stack+0xdfffed64>
 670:	0000bc9f 	0x0000bc9f
 674:	0000cb00 	0x0000cb00
 678:	55000100 	bl	67174400(0x4010000) # 4010678 <data_size+0x400ff90>
 67c:	000000cb 	0x000000cb
 680:	000000dc 	0x000000dc
 684:	a8910003 	0xa8910003
 688:	0000dc7f 	0x0000dc7f
 68c:	0000e800 	0x0000e800
 690:	55000100 	bl	67174400(0x4010000) # 4010690 <data_size+0x400ffa8>
	...
 6a0:	00000024 	0x00000024
 6a4:	24560001 	ldptr.w	$r1,$r0,22016(0x5600)
 6a8:	bc000000 	0xbc000000
 6ac:	04000000 	csrrd	$r0,0x0
 6b0:	5601f300 	bl	-66977296(0xc0201f0) # fc0208a0 <_stack+0xe000eda8>
 6b4:	0000bc9f 	0x0000bc9f
 6b8:	0000cb00 	0x0000cb00
 6bc:	56000100 	bl	67239936(0x4020000) # 40206bc <data_size+0x401ffd4>
 6c0:	000000cb 	0x000000cb
 6c4:	000000dc 	0x000000dc
 6c8:	ac910003 	0xac910003
 6cc:	0000dc7f 	0x0000dc7f
 6d0:	0000e800 	0x0000e800
 6d4:	56000100 	bl	67239936(0x4020000) # 40206d4 <data_size+0x401ffec>
	...
 6e4:	00000024 	0x00000024
 6e8:	24570001 	ldptr.w	$r1,$r0,22272(0x5700)
 6ec:	bc000000 	0xbc000000
 6f0:	04000000 	csrrd	$r0,0x0
 6f4:	5701f300 	bl	-66911760(0xc0301f0) # fc0308e4 <_stack+0xe001edec>
 6f8:	0000bc9f 	0x0000bc9f
 6fc:	0000cb00 	0x0000cb00
 700:	57000100 	bl	67305472(0x4030000) # 4030700 <data_size+0x4030018>
 704:	000000cb 	0x000000cb
 708:	000000dc 	0x000000dc
 70c:	01f30004 	0x01f30004
 710:	00dc9f57 	bstrpick.d	$r23,$r26,0x1c,0x27
 714:	00e80000 	bstrpick.d	$r0,$r0,0x28,0x0
 718:	00010000 	asrtle.d	$r0,$r0
 71c:	00000057 	0x00000057
 720:	00000000 	0x00000000
 724:	00002000 	clo.d	$r0,$r0
 728:	00003400 	revb.4h	$r0,$r0
 72c:	30000200 	0x30000200
 730:	0000349f 	revb.4h	$r31,$r4
 734:	00003800 	revb.2w	$r0,$r0
 738:	68000100 	bltu	$r8,$r0,0 # 738 <data_size+0x50>
 73c:	00000038 	0x00000038
 740:	00000058 	0x00000058
 744:	007c0008 	bstrins.w	$r8,$r0,0x1c,0x0
 748:	231c0091 	sc.d	$r17,$r4,7168(0x1c00)
 74c:	00589f50 	0x00589f50
 750:	00640000 	bstrins.w	$r0,$r0,0x4,0x0
 754:	00010000 	asrtle.d	$r0,$r0
 758:	0000b468 	0x0000b468
 75c:	0000bc00 	0x0000bc00
 760:	68000100 	bltu	$r8,$r0,0 # 760 <data_size+0x78>
 764:	000000d0 	0x000000d0
 768:	000000e8 	0x000000e8
 76c:	9f300002 	0x9f300002
	...
 778:	0000006c 	0x0000006c
 77c:	00000090 	0x00000090
 780:	90670001 	0x90670001
 784:	94000000 	0x94000000
 788:	03000000 	lu52i.d	$r0,$r0,0
 78c:	9f018700 	0x9f018700
 790:	00000094 	0x00000094
 794:	00000098 	0x00000098
 798:	b8670001 	0xb8670001
 79c:	bc000000 	0xbc000000
 7a0:	01000000 	0x01000000
 7a4:	00dc5500 	bstrpick.d	$r0,$r8,0x1c,0x15
 7a8:	00e80000 	bstrpick.d	$r0,$r0,0x28,0x0
 7ac:	000d0000 	bytepick.d	$r0,$r0,$r0,0x2
 7b0:	30120075 	vldrepl.d	$vr21,$r3,1024(0x400)
 7b4:	282b1416 	ld.b	$r22,$r0,-1339(0xac5)
 7b8:	13160001 	addu16i.d	$r1,$r0,-14976(0xc580)
 7bc:	0000009f 	0x0000009f
 7c0:	00000000 	0x00000000
 7c4:	00008000 	0x00008000
 7c8:	00008c00 	0x00008c00
 7cc:	5c000100 	bne	$r8,$r0,0 # 7cc <data_size+0xe4>
	...
 7d8:	00000020 	0x00000020
 7dc:	00000024 	0x00000024
 7e0:	24540001 	ldptr.w	$r1,$r0,21504(0x5400)
 7e4:	34000000 	0x34000000
 7e8:	01000000 	0x01000000
 7ec:	00346700 	0x00346700
 7f0:	00380000 	0x00380000
 7f4:	00010000 	asrtle.d	$r0,$r0
 7f8:	0000385d 	revb.2w	$r29,$r2
 7fc:	00005800 	ext.w.h	$r0,$r0
 800:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff0800 <_stack+0xe3fded08>
 804:	00000058 	0x00000058
 808:	00000064 	0x00000064
 80c:	b45d0001 	0xb45d0001
 810:	bc000000 	0xbc000000
 814:	01000000 	0x01000000
 818:	00d05d00 	bstrpick.d	$r0,$r8,0x10,0x17
 81c:	00dc0000 	bstrpick.d	$r0,$r0,0x1c,0x0
 820:	00010000 	asrtle.d	$r0,$r0
 824:	0000dc67 	0x0000dc67
 828:	0000e800 	0x0000e800
 82c:	54000100 	bl	67108864(0x4000000) # 400082c <data_size+0x4000144>
	...
 838:	1c00132c 	pcaddu12i	$r12,153(0x99)
 83c:	1c001334 	pcaddu12i	$r20,153(0x99)
 840:	34540001 	0x34540001
 844:	441c0013 	bnez	$r0,-3400704(0x4c1c00) # ffcc2444 <_stack+0xe3cb094c>
 848:	041c0013 	csrrd	$r19,0x700
 84c:	5401f300 	bl	-67108368(0xc0001f0) # fc000a3c <_stack+0xdffeef44>
 850:	0000009f 	0x0000009f
 854:	00000000 	0x00000000
 858:	00132c00 	maskeqz	$r0,$r0,$r11
 85c:	0013341c 	maskeqz	$r28,$r0,$r13
 860:	5500011c 	bl	74514432(0x4710000) # 4710860 <data_size+0x4710178>
 864:	1c001334 	pcaddu12i	$r20,153(0x99)
 868:	1c001344 	pcaddu12i	$r4,154(0x9a)
 86c:	01f30004 	0x01f30004
 870:	00009f55 	0x00009f55
 874:	00000000 	0x00000000
 878:	132c0000 	addu16i.d	$r0,$r0,-13568(0xcb00)
 87c:	13341c00 	addu16i.d	$r0,$r0,-13049(0xcd07)
 880:	00031c00 	0x00031c00
 884:	349f7f75 	0x349f7f75
 888:	401c0013 	beqz	$r0,-3400704(0x4c1c00) # ffcc2488 <_stack+0xe3cb0990>
 88c:	061c0013 	cacop	0x13,$r0,1792(0x700)
 890:	5501f300 	bl	-67042832(0xc0101f0) # fc010a80 <_stack+0xdfffef88>
 894:	009f1c31 	bstrins.d	$r17,$r1,0x1f,0x7
 898:	00000000 	0x00000000
 89c:	2c000000 	vld	$vr0,$r0,0
 8a0:	341c0013 	0x341c0013
 8a4:	011c0013 	0x011c0013
 8a8:	13345400 	addu16i.d	$r0,$r0,-13035(0xcd15)
 8ac:	13441c00 	addu16i.d	$r0,$r0,-12025(0xd107)
 8b0:	00041c00 	alsl.w	$r0,$r0,$r7,0x1
 8b4:	9f5401f3 	0x9f5401f3
	...
 8c0:	1c0012d4 	pcaddu12i	$r20,150(0x96)
 8c4:	1c0012ec 	pcaddu12i	$r12,151(0x97)
 8c8:	ec540001 	0xec540001
 8cc:	2c1c0012 	vld	$vr18,$r0,1792(0x700)
 8d0:	041c0013 	csrrd	$r19,0x700
 8d4:	5401f300 	bl	-67108368(0xc0001f0) # fc000ac4 <_stack+0xdffeefcc>
 8d8:	0000009f 	0x0000009f
 8dc:	00000000 	0x00000000
 8e0:	0012d400 	sltu	$r0,$r0,$r21
 8e4:	0012ec1c 	sltu	$r28,$r0,$r27
 8e8:	5500011c 	bl	74514432(0x4710000) # 47108e8 <data_size+0x4710200>
 8ec:	1c0012ec 	pcaddu12i	$r12,151(0x97)
 8f0:	1c00132c 	pcaddu12i	$r12,153(0x99)
 8f4:	01f30004 	0x01f30004
 8f8:	00009f55 	0x00009f55
 8fc:	00000000 	0x00000000
 900:	12d40000 	addu16i.d	$r0,$r0,-19200(0xb500)
 904:	12d41c00 	addu16i.d	$r0,$r0,-19193(0xb507)
 908:	00011c00 	asrtle.d	$r0,$r7
 90c:	0012d456 	sltu	$r22,$r2,$r21
 910:	0012e41c 	sltu	$r28,$r0,$r25
 914:	7600031c 	0x7600031c
 918:	12e49f7f 	addu16i.d	$r31,$r27,-18137(0xb927)
 91c:	13041c00 	addu16i.d	$r0,$r0,-16121(0xc107)
 920:	00061c00 	alsl.wu	$r0,$r0,$r7,0x1
 924:	315601f3 	vstelm.h	$vr19,$r15,-256(0x100),0x5
 928:	00009f1c 	0x00009f1c
 92c:	00000000 	0x00000000
 930:	12d40000 	addu16i.d	$r0,$r0,-19200(0xb500)
 934:	13081c00 	addu16i.d	$r0,$r0,-15865(0xc207)
 938:	00011c00 	asrtle.d	$r0,$r7
 93c:	00130c54 	maskeqz	$r20,$r2,$r3
 940:	0013201c 	maskeqz	$r28,$r0,$r8
 944:	5400011c 	bl	74448896(0x4700000) # 4700944 <data_size+0x470025c>
	...
 950:	1c001280 	pcaddu12i	$r0,148(0x94)
 954:	1c0012b8 	pcaddu12i	$r24,149(0x95)
 958:	b8550001 	0xb8550001
 95c:	d01c0012 	0xd01c0012
 960:	041c0012 	csrrd	$r18,0x700
 964:	5501f300 	bl	-67042832(0xc0101f0) # fc010b54 <_stack+0xdffff05c>
 968:	0012d09f 	sltu	$r31,$r4,$r20
 96c:	0012d41c 	sltu	$r28,$r0,$r21
 970:	5500011c 	bl	74514432(0x4710000) # 4710970 <data_size+0x4710288>
	...
 97c:	1c001280 	pcaddu12i	$r0,148(0x94)
 980:	1c001290 	pcaddu12i	$r16,148(0x94)
 984:	90560001 	0x90560001
 988:	cc1c0012 	0xcc1c0012
 98c:	031c0012 	lu52i.d	$r18,$r0,1792(0x700)
 990:	9f7f7600 	0x9f7f7600
 994:	1c0012d0 	pcaddu12i	$r16,150(0x96)
 998:	1c0012d4 	pcaddu12i	$r20,150(0x96)
 99c:	7f760003 	0x7f760003
 9a0:	0000009f 	0x0000009f
 9a4:	00000000 	0x00000000
 9a8:	00128000 	sltu	$r0,$r0,$r0
 9ac:	00128c1c 	sltu	$r28,$r0,$r3
 9b0:	5500011c 	bl	74514432(0x4710000) # 47109b0 <data_size+0x47102c8>
 9b4:	1c00128c 	pcaddu12i	$r12,148(0x94)
 9b8:	1c0012ac 	pcaddu12i	$r12,149(0x95)
 9bc:	ac5c0001 	0xac5c0001
 9c0:	cc1c0012 	0xcc1c0012
 9c4:	011c0012 	0x011c0012
 9c8:	12d05500 	addu16i.d	$r0,$r8,-19435(0xb415)
 9cc:	12d41c00 	addu16i.d	$r0,$r0,-19193(0xb507)
 9d0:	00011c00 	asrtle.d	$r0,$r7
 9d4:	00000055 	0x00000055
 9d8:	00000000 	0x00000000
 9dc:	00128000 	sltu	$r0,$r0,$r0
 9e0:	0012901c 	sltu	$r28,$r0,$r4
 9e4:	5400011c 	bl	74448896(0x4700000) # 47009e4 <data_size+0x47002fc>
 9e8:	1c001290 	pcaddu12i	$r16,148(0x94)
 9ec:	1c0012ac 	pcaddu12i	$r12,149(0x95)
 9f0:	ac5d0001 	0xac5d0001
 9f4:	b81c0012 	0xb81c0012
 9f8:	011c0012 	0x011c0012
 9fc:	12b85400 	addu16i.d	$r0,$r0,-20971(0xae15)
 a00:	12cc1c00 	addu16i.d	$r0,$r0,-19705(0xb307)
 a04:	00011c00 	asrtle.d	$r0,$r7
 a08:	0012d05c 	sltu	$r28,$r2,$r20
 a0c:	0012d41c 	sltu	$r28,$r0,$r21
 a10:	5400011c 	bl	74448896(0x4700000) # 4700a10 <data_size+0x4700328>
	...
 a1c:	1c00125c 	pcaddu12i	$r28,146(0x92)
 a20:	1c001268 	pcaddu12i	$r8,147(0x93)
 a24:	68550001 	bltu	$r0,$r1,21760(0x5500) # 5f24 <data_size+0x583c>
 a28:	801c0012 	0x801c0012
 a2c:	041c0012 	csrrd	$r18,0x700
 a30:	5501f300 	bl	-67042832(0xc0101f0) # fc010c20 <_stack+0xdffff128>
 a34:	0000009f 	0x0000009f
 a38:	00000000 	0x00000000
 a3c:	00125c00 	slt	$r0,$r0,$r23
 a40:	00125c1c 	slt	$r28,$r0,$r23
 a44:	5600011c 	bl	74579968(0x4720000) # 4720a44 <data_size+0x472035c>
 a48:	1c00125c 	pcaddu12i	$r28,146(0x92)
 a4c:	1c001264 	pcaddu12i	$r4,147(0x93)
 a50:	7f760003 	0x7f760003
 a54:	0012649f 	slt	$r31,$r4,$r25
 a58:	00127c1c 	slt	$r28,$r0,$r31
 a5c:	f300061c 	0xf300061c
 a60:	1c315601 	pcaddu12i	$r1,101040(0x18ab0)
 a64:	0000009f 	0x0000009f
 a68:	00000000 	0x00000000
 a6c:	00125c00 	slt	$r0,$r0,$r23
 a70:	0012681c 	slt	$r28,$r0,$r26
 a74:	5400011c 	bl	74448896(0x4700000) # 4700a74 <data_size+0x470038c>
 a78:	1c001268 	pcaddu12i	$r8,147(0x93)
 a7c:	1c00127c 	pcaddu12i	$r28,147(0x93)
 a80:	005c0001 	0x005c0001
 a84:	00000000 	0x00000000
 a88:	18000000 	pcaddi	$r0,0
 a8c:	301c0012 	0x301c0012
 a90:	011c0012 	0x011c0012
 a94:	12305400 	addu16i.d	$r0,$r0,-29675(0x8c15)
 a98:	12401c00 	addu16i.d	$r0,$r0,-28665(0x9007)
 a9c:	00011c00 	asrtle.d	$r0,$r7
 aa0:	00000054 	0x00000054
 aa4:	00000000 	0x00000000
 aa8:	0011ec00 	sub.d	$r0,$r0,$r27
 aac:	0012041c 	slt	$r28,$r0,$r1
 ab0:	5400011c 	bl	74448896(0x4700000) # 4700ab0 <data_size+0x47003c8>
 ab4:	1c001204 	pcaddu12i	$r4,144(0x90)
 ab8:	1c001210 	pcaddu12i	$r16,144(0x90)
 abc:	14540001 	lu12i.w	$r1,172032(0x2a000)
 ac0:	181c0012 	pcaddi	$r18,57344(0xe000)
 ac4:	011c0012 	0x011c0012
 ac8:	00005400 	bitrev.d	$r0,$r0
 acc:	00000000 	0x00000000
 ad0:	11840000 	addu16i.d	$r0,$r0,24832(0x6100)
 ad4:	11bc1c00 	addu16i.d	$r0,$r0,28423(0x6f07)
 ad8:	00011c00 	asrtle.d	$r0,$r7
 adc:	0011bc54 	sub.d	$r20,$r2,$r15
 ae0:	0011c41c 	sub.d	$r28,$r0,$r17
 ae4:	5400011c 	bl	74448896(0x4700000) # 4700ae4 <data_size+0x47003fc>
 ae8:	1c0011c8 	pcaddu12i	$r8,142(0x8e)
 aec:	1c0011e0 	pcaddu12i	$r0,143(0x8f)
 af0:	00540001 	0x00540001
 af4:	00000000 	0x00000000
 af8:	84000000 	0x84000000
 afc:	a01c0011 	0xa01c0011
 b00:	011c0011 	0x011c0011
 b04:	11a05500 	addu16i.d	$r0,$r8,26645(0x6815)
 b08:	11b41c00 	addu16i.d	$r0,$r0,27911(0x6d07)
 b0c:	00011c00 	asrtle.d	$r0,$r7
 b10:	0011b45c 	sub.d	$r28,$r2,$r13
 b14:	0011bc1c 	sub.d	$r28,$r0,$r15
 b18:	5500011c 	bl	74514432(0x4710000) # 4710b18 <data_size+0x4710430>
 b1c:	1c0011bc 	pcaddu12i	$r28,141(0x8d)
 b20:	1c0011c0 	pcaddu12i	$r0,142(0x8e)
 b24:	c85c0001 	0xc85c0001
 b28:	cc1c0011 	0xcc1c0011
 b2c:	011c0011 	0x011c0011
 b30:	00005c00 	ext.w.b	$r0,$r0
 b34:	00000000 	0x00000000
 b38:	11840000 	addu16i.d	$r0,$r0,24832(0x6100)
 b3c:	119c1c00 	addu16i.d	$r0,$r0,26375(0x6707)
 b40:	00011c00 	asrtle.d	$r0,$r7
 b44:	00119c56 	sub.d	$r22,$r2,$r7
 b48:	0011a01c 	sub.d	$r28,$r0,$r8
 b4c:	f300041c 	0xf300041c
 b50:	a09f5601 	0xa09f5601
 b54:	c01c0011 	0xc01c0011
 b58:	061c0011 	cacop	0x11,$r0,1792(0x700)
 b5c:	5601f300 	bl	-66977296(0xc0201f0) # fc020d4c <_stack+0xe000f254>
 b60:	c89f1c31 	0xc89f1c31
 b64:	cc1c0011 	0xcc1c0011
 b68:	061c0011 	cacop	0x11,$r0,1792(0x700)
 b6c:	5601f300 	bl	-66977296(0xc0201f0) # fc020d5c <_stack+0xe000f264>
 b70:	009f1c31 	bstrins.d	$r17,$r1,0x1f,0x7
 b74:	00000000 	0x00000000
 b78:	5c000000 	bne	$r0,$r0,0 # b78 <data_size+0x490>
 b7c:	7c1c0011 	0x7c1c0011
 b80:	011c0011 	0x011c0011
 b84:	117c5500 	addu16i.d	$r0,$r8,24341(0x5f15)
 b88:	11841c00 	addu16i.d	$r0,$r0,24839(0x6107)
 b8c:	00011c00 	asrtle.d	$r0,$r7
 b90:	00000055 	0x00000055
 b94:	00000000 	0x00000000
 b98:	00115c00 	sub.w	$r0,$r0,$r23
 b9c:	0011641c 	sub.w	$r28,$r0,$r25
 ba0:	5600011c 	bl	74579968(0x4720000) # 4720ba0 <data_size+0x47204b8>
 ba4:	1c001164 	pcaddu12i	$r4,139(0x8b)
 ba8:	1c001168 	pcaddu12i	$r8,139(0x8b)
 bac:	01f30004 	0x01f30004
 bb0:	11689f56 	addu16i.d	$r22,$r26,23079(0x5a27)
 bb4:	11701c00 	addu16i.d	$r0,$r0,23559(0x5c07)
 bb8:	000a1c00 	0x000a1c00
 bbc:	007d0074 	bstrins.w	$r20,$r3,0x1d,0x0
 bc0:	5601f31c 	bl	-59637264(0xc7201f0) # fc720db0 <_stack+0xe070f2b8>
 bc4:	11709f22 	addu16i.d	$r2,$r25,23591(0x5c27)
 bc8:	117c1c00 	addu16i.d	$r0,$r0,24327(0x5f07)
 bcc:	000c1c00 	bytepick.d	$r0,$r0,$r7,0x0
 bd0:	007d0074 	bstrins.w	$r20,$r3,0x1d,0x0
 bd4:	5601f31c 	bl	-59637264(0xc7201f0) # fc720dc4 <_stack+0xe070f2cc>
 bd8:	9f012322 	0x9f012322
 bdc:	1c00117c 	pcaddu12i	$r28,139(0x8b)
 be0:	1c001180 	pcaddu12i	$r0,140(0x8c)
 be4:	0074000a 	bstrins.w	$r10,$r0,0x14,0x0
 be8:	f31c007d 	0xf31c007d
 bec:	9f225601 	0x9f225601
	...
 bf8:	1c00115c 	pcaddu12i	$r28,138(0x8a)
 bfc:	1c001168 	pcaddu12i	$r8,139(0x8b)
 c00:	68540001 	bltu	$r0,$r1,21504(0x5400) # 6000 <data_size+0x5918>
 c04:	701c0011 	0x701c0011
 c08:	011c0011 	0x011c0011
 c0c:	11705d00 	addu16i.d	$r0,$r8,23575(0x5c17)
 c10:	117c1c00 	addu16i.d	$r0,$r0,24327(0x5f07)
 c14:	00031c00 	0x00031c00
 c18:	7c9f7f7d 	0x7c9f7f7d
 c1c:	801c0011 	0x801c0011
 c20:	011c0011 	0x011c0011
 c24:	00005d00 	ext.w.b	$r0,$r8
 c28:	00000000 	0x00000000
 c2c:	11400000 	addu16i.d	$r0,$r0,20480(0x5000)
 c30:	11481c00 	addu16i.d	$r0,$r0,20999(0x5207)
 c34:	00011c00 	asrtle.d	$r0,$r7
 c38:	00114855 	sub.w	$r21,$r2,$r18
 c3c:	00115c1c 	sub.w	$r28,$r0,$r23
 c40:	5500011c 	bl	74514432(0x4710000) # 4710c40 <data_size+0x4710558>
	...
 c4c:	1c001140 	pcaddu12i	$r0,138(0x8a)
 c50:	1c001144 	pcaddu12i	$r4,138(0x8a)
 c54:	44540001 	bnez	$r0,283648(0x45400) # 46054 <data_size+0x4596c>
 c58:	5c1c0011 	bne	$r0,$r17,7168(0x1c00) # 2858 <data_size+0x2170>
 c5c:	011c0011 	0x011c0011
 c60:	00005c00 	ext.w.b	$r0,$r0
 c64:	00000000 	0x00000000
 c68:	11040000 	addu16i.d	$r0,$r0,16640(0x4100)
 c6c:	11081c00 	addu16i.d	$r0,$r0,16903(0x4207)
 c70:	00011c00 	asrtle.d	$r0,$r7
 c74:	00110854 	sub.w	$r20,$r2,$r2
 c78:	0011181c 	sub.w	$r28,$r0,$r6
 c7c:	7400031c 	xvseq.b	$xr28,$xr24,$xr0
 c80:	11189f01 	addu16i.d	$r1,$r24,17959(0x4627)
 c84:	11301c00 	addu16i.d	$r0,$r0,19463(0x4c07)
 c88:	00081c00 	bytepick.w	$r0,$r0,$r7,0x0
 c8c:	007c0074 	bstrins.w	$r20,$r3,0x1c,0x0
 c90:	9f012322 	0x9f012322
 c94:	1c001130 	pcaddu12i	$r16,137(0x89)
 c98:	1c001134 	pcaddu12i	$r20,137(0x89)
 c9c:	01f30009 	0x01f30009
 ca0:	22007c54 	ll.d	$r20,$r2,124(0x7c)
 ca4:	009f0123 	bstrins.d	$r3,$r9,0x1f,0x0
 ca8:	00000000 	0x00000000
 cac:	04000000 	csrrd	$r0,0x0
 cb0:	181c0011 	pcaddi	$r17,57344(0xe000)
 cb4:	021c0011 	slti	$r17,$r0,1792(0x700)
 cb8:	189f3000 	pcaddi	$r0,326016(0x4f980)
 cbc:	341c0011 	0x341c0011
 cc0:	011c0011 	0x011c0011
 cc4:	11345c00 	addu16i.d	$r0,$r0,19735(0x4d17)
 cc8:	11401c00 	addu16i.d	$r0,$r0,20487(0x5007)
 ccc:	00021c00 	0x00021c00
 cd0:	00009f30 	0x00009f30
 cd4:	00000000 	0x00000000
 cd8:	10d40000 	addu16i.d	$r0,$r0,13568(0x3500)
 cdc:	10d41c00 	addu16i.d	$r0,$r0,13575(0x3507)
 ce0:	00011c00 	asrtle.d	$r0,$r7
 ce4:	0010d454 	add.d	$r20,$r2,$r21
 ce8:	0010e01c 	add.d	$r28,$r0,$r24
 cec:	7400031c 	xvseq.b	$xr28,$xr24,$xr0
 cf0:	10e09f01 	addu16i.d	$r1,$r24,14375(0x3827)
 cf4:	10f41c00 	addu16i.d	$r0,$r0,15623(0x3d07)
 cf8:	00081c00 	bytepick.w	$r0,$r0,$r7,0x0
 cfc:	007c0074 	bstrins.w	$r20,$r3,0x1c,0x0
 d00:	9f012322 	0x9f012322
 d04:	1c0010f4 	pcaddu12i	$r20,135(0x87)
 d08:	1c0010f8 	pcaddu12i	$r24,135(0x87)
 d0c:	01f30009 	0x01f30009
 d10:	22007c54 	ll.d	$r20,$r2,124(0x7c)
 d14:	f89f0123 	0xf89f0123
 d18:	001c0010 	mul.w	$r16,$r0,$r0
 d1c:	031c0011 	lu52i.d	$r17,$r0,1792(0x700)
 d20:	9f017400 	0x9f017400
 d24:	1c001100 	pcaddu12i	$r0,136(0x88)
 d28:	1c001104 	pcaddu12i	$r4,136(0x88)
 d2c:	01f30006 	0x01f30006
 d30:	9f012354 	0x9f012354
	...
 d3c:	1c0010d4 	pcaddu12i	$r20,134(0x86)
 d40:	1c0010e0 	pcaddu12i	$r0,135(0x87)
 d44:	9f300002 	0x9f300002
 d48:	1c0010e0 	pcaddu12i	$r0,135(0x87)
 d4c:	1c0010f8 	pcaddu12i	$r24,135(0x87)
 d50:	f85c0001 	0xf85c0001
 d54:	041c0010 	csrrd	$r16,0x700
 d58:	021c0011 	slti	$r17,$r0,1792(0x700)
 d5c:	009f3000 	bstrins.d	$r0,$r0,0x1f,0xc
 d60:	00000000 	0x00000000
 d64:	40000000 	beqz	$r0,0 # d64 <data_size+0x67c>
 d68:	401c0012 	beqz	$r0,-3662848(0x481c00) # ffc82968 <_stack+0xe3c70e70>
 d6c:	011c0012 	0x011c0012
 d70:	12405600 	addu16i.d	$r0,$r16,-28651(0x9015)
 d74:	12481c00 	addu16i.d	$r0,$r0,-28153(0x9207)
 d78:	00031c00 	0x00031c00
 d7c:	489f7f76 	0x489f7f76
 d80:	4c1c0012 	jirl	$r18,$r0,7168(0x1c00)
 d84:	061c0012 	cacop	0x12,$r0,1792(0x700)
 d88:	5601f300 	bl	-66977296(0xc0201f0) # fc020f78 <_stack+0xe000f480>
 d8c:	4c9f1c31 	jirl	$r17,$r1,40732(0x9f1c)
 d90:	501c0012 	b	4725760(0x481c00) # 482990 <data_size+0x4822a8>
 d94:	0b1c0012 	0x0b1c0012
 d98:	20007c00 	ll.w	$r0,$r0,124(0x7c)
 d9c:	225601f3 	ll.d	$r19,$r15,22016(0x5600)
 da0:	9f220074 	0x9f220074
 da4:	1c001250 	pcaddu12i	$r16,146(0x92)
 da8:	1c001254 	pcaddu12i	$r20,146(0x92)
 dac:	0074000a 	bstrins.w	$r10,$r0,0x14,0x0
 db0:	f31c007c 	0xf31c007c
 db4:	9f225601 	0x9f225601
 db8:	1c001254 	pcaddu12i	$r20,146(0x92)
 dbc:	1c001258 	pcaddu12i	$r24,146(0x92)
 dc0:	007c000b 	bstrins.w	$r11,$r0,0x1c,0x0
 dc4:	5601f320 	bl	-58588688(0xc8201f0) # fc820fb4 <_stack+0xe080f4bc>
 dc8:	22007422 	ll.d	$r2,$r1,116(0x74)
 dcc:	0000009f 	0x0000009f
 dd0:	00000000 	0x00000000
 dd4:	00124000 	slt	$r0,$r0,$r16
 dd8:	00124c1c 	slt	$r28,$r0,$r19
 ddc:	5400011c 	bl	74448896(0x4700000) # 4700ddc <data_size+0x47006f4>
 de0:	1c00124c 	pcaddu12i	$r12,146(0x92)
 de4:	1c001258 	pcaddu12i	$r24,146(0x92)
 de8:	005c0001 	0x005c0001
 dec:	00000000 	0x00000000
 df0:	d4000000 	0xd4000000
 df4:	e4000000 	0xe4000000
 df8:	02000000 	slti	$r0,$r0,0
 dfc:	e49f3000 	0xe49f3000
 e00:	f8000000 	0xf8000000
 e04:	0e000000 	0x0e000000
 e08:	f7007400 	0xf7007400
 e0c:	640801b8 	bge	$r13,$r24,2048(0x800) # 160c <data_size+0xf24>
 e10:	1b01b8f7 	pcalau12i	$r23,-520761(0x80dc7)
 e14:	f89f00f7 	0xf89f00f7
 e18:	04000000 	csrrd	$r0,0x0
 e1c:	01000001 	0x01000001
 e20:	00005d00 	ext.w.b	$r0,$r8
 e24:	00000000 	0x00000000
 e28:	00b00000 	bstrins.d	$r0,$r0,0x30,0x0
 e2c:	00c00000 	bstrpick.d	$r0,$r0,0x0,0x0
 e30:	00020000 	0x00020000
 e34:	00c09f30 	bstrpick.d	$r16,$r25,0x0,0x27
 e38:	00cc0000 	bstrpick.d	$r0,$r0,0xc,0x0
 e3c:	00050000 	alsl.w	$r0,$r0,$r0,0x3
 e40:	1e3a0074 	pcaddu18i	$r20,118787(0x1d003)
 e44:	0000cc9f 	0x0000cc9f
 e48:	0000d400 	0x0000d400
 e4c:	54000100 	bl	67108864(0x4000000) # 4000e4c <data_size+0x4000764>
	...
 e58:	00000028 	0x00000028
 e5c:	00000094 	0x00000094
 e60:	94540001 	0x94540001
 e64:	ac000000 	0xac000000
 e68:	04000000 	csrrd	$r0,0x0
 e6c:	5401f300 	bl	-67108368(0xc0001f0) # fc00105c <_stack+0xdffef564>
 e70:	0000009f 	0x0000009f
 e74:	00000000 	0x00000000
 e78:	00002800 	cto.d	$r0,$r0
 e7c:	00003800 	revb.2w	$r0,$r0
 e80:	30000200 	0x30000200
 e84:	0000389f 	revb.2w	$r31,$r4
 e88:	0000ac00 	0x0000ac00
 e8c:	5f000100 	bne	$r8,$r0,-65536(0x30000) # ffff0e8c <_stack+0xe3fdf394>
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
       0:	00000514 	0x00000514
       4:	00410004 	slli.d	$r4,$r0,0x0
       8:	01010000 	fadd.d	$f0,$f0,$f0
       c:	0df2f601 	0x0df2f601
      10:	01010100 	fadd.d	$f0,$f8,$f0
      14:	00000001 	0x00000001
      18:	01000001 	0x01000001
      1c:	692f2e2e 	bltu	$r17,$r14,77612(0x12f2c) # 12f48 <data_size+0x12860>
      20:	756c636e 	0x756c636e
      24:	00006564 	rdtimeh.w	$r4,$r11
      28:	69647473 	bltu	$r3,$r19,91252(0x16474) # 1649c <data_size+0x15db4>
      2c:	00632e6f 	bstrins.w	$r15,$r19,0x3,0xb
      30:	73000000 	0x73000000
      34:	6f696474 	bgeu	$r3,$r20,-38556(0x36964) # ffff6998 <_stack+0xe3fe4ea0>
      38:	0100682e 	0x0100682e
      3c:	6f630000 	bgeu	$r0,$r0,-40192(0x36300) # ffff633c <_stack+0xe3fe4844>
      40:	6e6f6d6d 	bgeu	$r11,$r13,-102548(0x26f6c) # fffe6fac <_stack+0xe3fd54b4>
      44:	0100682e 	0x0100682e
      48:	00000000 	0x00000000
      4c:	0a900205 	xvfnmadd.s	$xr5,$xr16,$xr0,$xr0
      50:	052a1c00 	0x052a1c00
      54:	02050017 	slti	$r23,$r0,320(0x140)
      58:	1c000a90 	pcaddu12i	$r16,84(0x54)
      5c:	00020518 	0x00020518
      60:	0a900205 	xvfnmadd.s	$xr5,$xr16,$xr0,$xr0
      64:	05181c00 	0x05181c00
      68:	02050002 	slti	$r2,$r0,320(0x140)
      6c:	1c000a9c 	pcaddu12i	$r28,84(0x54)
      70:	07050106 	0x07050106
      74:	a0020500 	0xa0020500
      78:	011c000a 	0x011c000a
      7c:	05000205 	0x05000205
      80:	000aa402 	0x000aa402
      84:	0518061c 	0x0518061c
      88:	02050003 	slti	$r3,$r0,320(0x140)
      8c:	1c000aa4 	pcaddu12i	$r4,85(0x55)
      90:	05050106 	0x05050106
      94:	b0020500 	0xb0020500
      98:	001c000a 	mul.w	$r10,$r0,$r0
      9c:	16020402 	lu32i.d	$r2,4128(0x1020)
      a0:	05001205 	0x05001205
      a4:	000ab402 	0x000ab402
      a8:	0205011c 	slti	$r28,$r8,320(0x140)
      ac:	b8020500 	0xb8020500
      b0:	001c000a 	mul.w	$r10,$r0,$r0
      b4:	06000402 	cacop	0x2,$r0,1(0x1)
      b8:	0002051c 	0x0002051c
      bc:	0abc0205 	0x0abc0205
      c0:	01061c00 	0x01061c00
      c4:	05000f05 	0x05000f05
      c8:	000ac802 	0x000ac802
      cc:	0518061c 	0x0518061c
      d0:	02050002 	slti	$r2,$r0,320(0x140)
      d4:	1c000ac8 	pcaddu12i	$r8,86(0x56)
      d8:	0f050106 	0x0f050106
      dc:	cc020500 	0xcc020500
      e0:	061c000a 	cacop	0xa,$r0,1792(0x700)
      e4:	00020518 	0x00020518
      e8:	0acc0205 	0x0acc0205
      ec:	18061c00 	pcaddi	$r0,12512(0x30e0)
      f0:	05000105 	0x05000105
      f4:	000adc02 	0x000adc02
      f8:	0514061c 	0x0514061c
      fc:	02050002 	slti	$r2,$r0,320(0x140)
     100:	1c000adc 	pcaddu12i	$r28,86(0x56)
     104:	0f050106 	0x0f050106
     108:	e4020500 	0xe4020500
     10c:	061c000a 	cacop	0xa,$r0,1792(0x700)
     110:	00020518 	0x00020518
     114:	0ae40205 	xvfnmsub.d	$xr5,$xr16,$xr0,$xr8
     118:	01061c00 	0x01061c00
     11c:	05000f05 	0x05000f05
     120:	000ae802 	0x000ae802
     124:	0518061c 	0x0518061c
     128:	02050002 	slti	$r2,$r0,320(0x140)
     12c:	1c000ae8 	pcaddu12i	$r8,87(0x57)
     130:	01051806 	fmul.d	$f6,$f0,$f6
     134:	f0020500 	0xf0020500
     138:	061c000a 	cacop	0xa,$r0,1792(0x700)
     13c:	00410519 	slli.d	$r25,$r8,0x1
     140:	0af00205 	0x0af00205
     144:	05181c00 	0x05181c00
     148:	02050002 	slti	$r2,$r0,320(0x140)
     14c:	1c000af0 	pcaddu12i	$r16,87(0x57)
     150:	41051606 	beqz	$r16,1639700(0x190514) # 190664 <data_size+0x18ff7c>
     154:	f8020500 	0xf8020500
     158:	191c000a 	pcaddi	$r10,-466944(0x8e000)
     15c:	05000805 	0x05000805
     160:	000afc02 	0x000afc02
     164:	4105151c 	beqz	$r8,-981740(0x710514) # fff10678 <_stack+0xe3efeb80>
     168:	04020500 	csrxchg	$r0,$r8,0x81
     16c:	061c000b 	cacop	0xb,$r0,1792(0x700)
     170:	00020519 	0x00020519
     174:	0b040205 	0x0b040205
     178:	05181c00 	0x05181c00
     17c:	02050002 	slti	$r2,$r0,320(0x140)
     180:	1c000b04 	pcaddu12i	$r4,88(0x58)
     184:	11050106 	addu16i.d	$r6,$r8,16704(0x4140)
     188:	08020500 	0x08020500
     18c:	141c000b 	lu12i.w	$r11,57344(0xe000)
     190:	05004105 	0x05004105
     194:	000b1c02 	0x000b1c02
     198:	4105011c 	beqz	$r8,-981760(0x710500) # fff10698 <_stack+0xe3efeba0>
     19c:	24020500 	ldptr.w	$r0,$r8,516(0x204)
     1a0:	1a1c000b 	pcalau12i	$r11,57344(0xe000)
     1a4:	05001105 	0x05001105
     1a8:	000b2802 	0x000b2802
     1ac:	0518061c 	0x0518061c
     1b0:	02050002 	slti	$r2,$r0,320(0x140)
     1b4:	1c000b28 	pcaddu12i	$r8,89(0x59)
     1b8:	04050106 	csrxchg	$r6,$r8,0x140
     1bc:	30020500 	0x30020500
     1c0:	1b1c000b 	pcalau12i	$r11,-466944(0x8e000)
     1c4:	05001005 	0x05001005
     1c8:	000b3402 	0x000b3402
     1cc:	0705011c 	0x0705011c
     1d0:	3c020500 	0x3c020500
     1d4:	181c000b 	pcaddi	$r11,57344(0xe000)
     1d8:	05001d05 	0x05001d05
     1dc:	000b4002 	0x000b4002
     1e0:	1105011c 	addu16i.d	$r28,$r8,16704(0x4140)
     1e4:	44020500 	bnez	$r8,516(0x204) # 3e8 <data_size-0x300>
     1e8:	011c000b 	0x011c000b
     1ec:	05000805 	0x05000805
     1f0:	000b4802 	0x000b4802
     1f4:	0c05011c 	0x0c05011c
     1f8:	50020500 	b	67109380(0x4000204) # 40003fc <data_size+0x3fffd14>
     1fc:	061c000b 	cacop	0xb,$r0,1792(0x700)
     200:	00030518 	0x00030518
     204:	0b500205 	0x0b500205
     208:	01061c00 	0x01061c00
     20c:	05000505 	0x05000505
     210:	000b5802 	0x000b5802
     214:	0402001c 	csrrd	$r28,0x80
     218:	05160601 	0x05160601
     21c:	02050003 	slti	$r3,$r0,320(0x140)
     220:	1c000b58 	pcaddu12i	$r24,90(0x5a)
     224:	1d050106 	pcaddu12i	$r6,-514040(0x82808)
     228:	5c020500 	bne	$r8,$r0,516(0x204) # 42c <data_size-0x2bc>
     22c:	011c000b 	0x011c000b
     230:	05001105 	0x05001105
     234:	000b6002 	0x000b6002
     238:	0205161c 	slti	$r28,$r16,325(0x145)
     23c:	64020500 	bge	$r8,$r0,516(0x204) # 440 <data_size-0x2a8>
     240:	001c000b 	mul.w	$r11,$r0,$r0
     244:	1e000402 	pcaddu18i	$r2,32(0x20)
     248:	05000105 	0x05000105
     24c:	000b8c02 	0x000b8c02
     250:	0a050d1c 	0x0a050d1c
     254:	90020500 	0x90020500
     258:	211c000b 	sc.w	$r11,$r0,7168(0x1c00)
     25c:	05000105 	0x05000105
     260:	000bb002 	0x000bb002
     264:	0525061c 	0x0525061c
     268:	0205001a 	slti	$r26,$r0,320(0x140)
     26c:	1c000bb0 	pcaddu12i	$r16,93(0x5d)
     270:	00020518 	0x00020518
     274:	0bb00205 	0x0bb00205
     278:	05181c00 	0x05181c00
     27c:	02050002 	slti	$r2,$r0,320(0x140)
     280:	1c000bb0 	pcaddu12i	$r16,93(0x5d)
     284:	0002051c 	0x0002051c
     288:	0bb00205 	0x0bb00205
     28c:	01061c00 	0x01061c00
     290:	05000e05 	0x05000e05
     294:	000bb402 	0x000bb402
     298:	0518061c 	0x0518061c
     29c:	02050002 	slti	$r2,$r0,320(0x140)
     2a0:	1c000bb4 	pcaddu12i	$r20,93(0x5d)
     2a4:	0e050106 	0x0e050106
     2a8:	b8020500 	0xb8020500
     2ac:	181c000b 	pcaddi	$r11,57344(0xe000)
     2b0:	05000105 	0x05000105
     2b4:	000bbc02 	0x000bbc02
     2b8:	0519061c 	0x0519061c
     2bc:	0205002d 	slti	$r13,$r1,320(0x140)
     2c0:	1c000bbc 	pcaddu12i	$r28,93(0x5d)
     2c4:	00020518 	0x00020518
     2c8:	0bbc0205 	0x0bbc0205
     2cc:	16061c00 	lu32i.d	$r0,12512(0x30e0)
     2d0:	05002d05 	0x05002d05
     2d4:	000bc402 	0x000bc402
     2d8:	0805181c 	0x0805181c
     2dc:	c8020500 	0xc8020500
     2e0:	061c000b 	cacop	0xb,$r0,1792(0x700)
     2e4:	00020518 	0x00020518
     2e8:	0bc80205 	0x0bc80205
     2ec:	15061c00 	lu12i.w	$r0,-511776(0x830e0)
     2f0:	05002d05 	0x05002d05
     2f4:	000bd002 	0x000bd002
     2f8:	1105191c 	addu16i.d	$r28,$r8,16710(0x4146)
     2fc:	d4020500 	0xd4020500
     300:	151c000b 	lu12i.w	$r11,-466944(0x8e000)
     304:	05002d05 	0x05002d05
     308:	000bdc02 	0x000bdc02
     30c:	2d05011c 	0x2d05011c
     310:	e0020500 	0xe0020500
     314:	191c000b 	pcaddi	$r11,-466944(0x8e000)
     318:	05001105 	0x05001105
     31c:	000be402 	0x000be402
     320:	0518061c 	0x0518061c
     324:	02050002 	slti	$r2,$r0,320(0x140)
     328:	1c000be4 	pcaddu12i	$r4,95(0x5f)
     32c:	00020518 	0x00020518
     330:	0be40205 	0x0be40205
     334:	05181c00 	0x05181c00
     338:	02050002 	slti	$r2,$r0,320(0x140)
     33c:	1c000be4 	pcaddu12i	$r4,95(0x5f)
     340:	0e050106 	0x0e050106
     344:	e8020500 	0xe8020500
     348:	011c000b 	0x011c000b
     34c:	05000705 	0x05000705
     350:	000bec02 	0x000bec02
     354:	0518061c 	0x0518061c
     358:	02050003 	slti	$r3,$r0,320(0x140)
     35c:	1c000bec 	pcaddu12i	$r12,95(0x5f)
     360:	09050106 	0x09050106
     364:	f0020500 	0xf0020500
     368:	011c000b 	0x011c000b
     36c:	05000505 	0x05000505
     370:	000bfc02 	0x000bfc02
     374:	0905141c 	0x0905141c
     378:	00020500 	0x00020500
     37c:	1a1c000c 	pcalau12i	$r12,57344(0xe000)
     380:	05000505 	0x05000505
     384:	000c1002 	bytepick.d	$r2,$r0,$r4,0x0
     388:	0501061c 	0x0501061c
     38c:	02050003 	slti	$r3,$r0,320(0x140)
     390:	1c000c10 	pcaddu12i	$r16,96(0x60)
     394:	0004051b 	alsl.w	$r27,$r8,$r1,0x1
     398:	0c100205 	fcmp.caf.s	$fcc5,$f16,$f0
     39c:	01061c00 	0x01061c00
     3a0:	05001c05 	0x05001c05
     3a4:	000c1802 	bytepick.d	$r2,$r0,$r6,0x0
     3a8:	1005011c 	addu16i.d	$r28,$r8,320(0x140)
     3ac:	1c020500 	pcaddu12i	$r0,4136(0x1028)
     3b0:	011c000c 	0x011c000c
     3b4:	05000705 	0x05000705
     3b8:	000c2402 	bytepick.d	$r2,$r0,$r9,0x0
     3bc:	0b05011c 	0x0b05011c
     3c0:	28020500 	ld.b	$r0,$r8,129(0x81)
     3c4:	121c000c 	addu16i.d	$r12,$r0,-30976(0x8700)
     3c8:	05000e05 	0x05000e05
     3cc:	000c2c02 	bytepick.d	$r2,$r0,$r11,0x0
     3d0:	0905181c 	0x0905181c
     3d4:	30020500 	0x30020500
     3d8:	161c000c 	lu32i.d	$r12,57344(0xe000)
     3dc:	05000705 	0x05000705
     3e0:	000c3402 	bytepick.d	$r2,$r0,$r13,0x0
     3e4:	051f061c 	0x051f061c
     3e8:	02050002 	slti	$r2,$r0,320(0x140)
     3ec:	1c000c34 	pcaddu12i	$r20,97(0x61)
     3f0:	01051806 	fmul.d	$f6,$f0,$f6
     3f4:	50020500 	b	67109380(0x4000204) # 40005f8 <data_size+0x3ffff10>
     3f8:	0f1c000c 	0x0f1c000c
     3fc:	05000505 	0x05000505
     400:	000c5402 	bytepick.d	$r2,$r0,$r21,0x0
     404:	0518061c 	0x0518061c
     408:	02050004 	slti	$r4,$r0,320(0x140)
     40c:	1c000c54 	pcaddu12i	$r20,98(0x62)
     410:	1c050106 	pcaddu12i	$r6,10248(0x2808)
     414:	5c020500 	bne	$r8,$r0,516(0x204) # 618 <data_size-0xd0>
     418:	011c000c 	0x011c000c
     41c:	05001005 	0x05001005
     420:	000c6002 	bytepick.d	$r2,$r0,$r24,0x0
     424:	01051e1c 	fmul.d	$f28,$f16,$f7
     428:	64020500 	bge	$r8,$r0,516(0x204) # 62c <data_size-0xbc>
     42c:	101c000c 	addu16i.d	$r12,$r0,1792(0x700)
     430:	05000b05 	0x05000b05
     434:	000c6802 	bytepick.d	$r2,$r0,$r26,0x0
     438:	0518061c 	0x0518061c
     43c:	02050004 	slti	$r4,$r0,320(0x140)
     440:	1c000c68 	pcaddu12i	$r8,99(0x63)
     444:	0002051c 	0x0002051c
     448:	0c680205 	vfcmp.cne.d	$vr5,$vr16,$vr0
     44c:	18061c00 	pcaddi	$r0,12512(0x30e0)
     450:	05000105 	0x05000105
     454:	000c8002 	bytepick.d	$r2,$r0,$r0,0x1
     458:	0519061c 	0x0519061c
     45c:	02050017 	slti	$r23,$r0,320(0x140)
     460:	1c000c80 	pcaddu12i	$r0,100(0x64)
     464:	00020518 	0x00020518
     468:	0c800205 	0x0c800205
     46c:	16061c00 	lu32i.d	$r0,12512(0x30e0)
     470:	05001705 	0x05001705
     474:	000c8802 	bytepick.d	$r2,$r0,$r2,0x1
     478:	0805181c 	0x0805181c
     47c:	8c020500 	0x8c020500
     480:	061c000c 	cacop	0xc,$r0,1792(0x700)
     484:	00020518 	0x00020518
     488:	0c8c0205 	0x0c8c0205
     48c:	15061c00 	lu12i.w	$r0,-511776(0x830e0)
     490:	05001705 	0x05001705
     494:	000c9402 	bytepick.d	$r2,$r0,$r5,0x1
     498:	1105191c 	addu16i.d	$r28,$r8,16710(0x4146)
     49c:	98020500 	0x98020500
     4a0:	151c000c 	lu12i.w	$r12,-466944(0x8e000)
     4a4:	05001705 	0x05001705
     4a8:	000c9c02 	bytepick.d	$r2,$r0,$r7,0x1
     4ac:	1105191c 	addu16i.d	$r28,$r8,16710(0x4146)
     4b0:	a0020500 	0xa0020500
     4b4:	061c000c 	cacop	0xc,$r0,1792(0x700)
     4b8:	00020518 	0x00020518
     4bc:	0ca00205 	xvfcmp.caf.d	$xr5,$xr16,$xr0
     4c0:	01061c00 	0x01061c00
     4c4:	05000b05 	0x05000b05
     4c8:	000ca402 	bytepick.d	$r2,$r0,$r9,0x1
     4cc:	0405011c 	csrxchg	$r28,$r8,0x140
     4d0:	a8020500 	0xa8020500
     4d4:	061c000c 	cacop	0xc,$r0,1792(0x700)
     4d8:	0003051a 	0x0003051a
     4dc:	0ca80205 	xvfcmp.cne.d	$xr5,$xr16,$xr0
     4e0:	01061c00 	0x01061c00
     4e4:	05002805 	0x05002805
     4e8:	000cb002 	bytepick.d	$r2,$r0,$r12,0x1
     4ec:	1c05011c 	pcaddu12i	$r28,10248(0x2808)
     4f0:	b4020500 	0xb4020500
     4f4:	011c000c 	0x011c000c
     4f8:	05000a05 	0x05000a05
     4fc:	000cb802 	bytepick.d	$r2,$r0,$r14,0x1
     500:	01051a1c 	fmul.d	$f28,$f16,$f6
     504:	cc020500 	0xcc020500
     508:	121c000c 	addu16i.d	$r12,$r0,-30976(0x8700)
     50c:	05000a05 	0x05000a05
     510:	000cd402 	bytepick.d	$r2,$r0,$r21,0x1
     514:	0101001c 	fadd.d	$f28,$f0,$f0
     518:	00000471 	0x00000471
     51c:	00200004 	div.w	$r4,$r0,$r0
     520:	01010000 	fadd.d	$f0,$f0,$f0
     524:	0df2f601 	0x0df2f601
     528:	01010100 	fadd.d	$f0,$f8,$f0
     52c:	00000001 	0x00000001
     530:	01000001 	0x01000001
     534:	69727000 	bltu	$r0,$r0,94832(0x17270) # 177a4 <data_size+0x170bc>
     538:	2e66746e 	0x2e66746e
     53c:	00000063 	0x00000063
     540:	05000000 	0x05000000
     544:	000cd402 	bytepick.d	$r2,$r0,$r21,0x1
     548:	0105181c 	fmul.d	$f28,$f0,$f6
     54c:	d4020500 	0xd4020500
     550:	181c000c 	pcaddi	$r12,57344(0xe000)
     554:	05000105 	0x05000105
     558:	000cd402 	bytepick.d	$r2,$r0,$r21,0x1
     55c:	0105181c 	fmul.d	$f28,$f0,$f6
     560:	d4020500 	0xd4020500
     564:	181c000c 	pcaddi	$r12,57344(0xe000)
     568:	05000105 	0x05000105
     56c:	000cd402 	bytepick.d	$r2,$r0,$r21,0x1
     570:	0105181c 	fmul.d	$f28,$f0,$f6
     574:	d4020500 	0xd4020500
     578:	181c000c 	pcaddi	$r12,57344(0xe000)
     57c:	05000105 	0x05000105
     580:	000cd402 	bytepick.d	$r2,$r0,$r21,0x1
     584:	0105181c 	fmul.d	$f28,$f0,$f6
     588:	d4020500 	0xd4020500
     58c:	061c000c 	cacop	0xc,$r0,1792(0x700)
     590:	00010511 	0x00010511
     594:	0cf40205 	0x0cf40205
     598:	051f1c00 	0x051f1c00
     59c:	0205000c 	slti	$r12,$r0,320(0x140)
     5a0:	1c000cf8 	pcaddu12i	$r24,103(0x67)
     5a4:	00010515 	0x00010515
     5a8:	0cfc0205 	0x0cfc0205
     5ac:	05111c00 	0x05111c00
     5b0:	02050001 	slti	$r1,$r0,320(0x140)
     5b4:	1c000d18 	pcaddu12i	$r24,104(0x68)
     5b8:	0001051d 	0x0001051d
     5bc:	0d1c0205 	vbitsel.v	$vr5,$vr16,$vr0,$vr24
     5c0:	18061c00 	pcaddi	$r0,12512(0x30e0)
     5c4:	05000105 	0x05000105
     5c8:	000d1c02 	bytepick.d	$r2,$r0,$r7,0x2
     5cc:	0105181c 	fmul.d	$f28,$f0,$f6
     5d0:	38020500 	0x38020500
     5d4:	5d1c000d 	bne	$r0,$r13,72704(0x11c00) # 121d4 <data_size+0x11aec>
     5d8:	05000305 	0x05000305
     5dc:	000d4002 	bytepick.d	$r2,$r0,$r16,0x2
     5e0:	0402001c 	csrrd	$r28,0x80
     5e4:	ba030602 	0xba030602
     5e8:	1105017f 	addu16i.d	$r31,$r11,16704(0x4140)
     5ec:	44020500 	bnez	$r8,516(0x204) # 7f0 <data_size+0x108>
     5f0:	011c000d 	0x011c000d
     5f4:	05000c05 	0x05000c05
     5f8:	000d4c02 	bytepick.d	$r2,$r0,$r19,0x2
     5fc:	0105011c 	fmul.d	$f28,$f8,$f0
     600:	50020500 	b	67109380(0x4000204) # 4000804 <data_size+0x400011c>
     604:	001c000d 	mul.w	$r13,$r0,$r0
     608:	06000402 	cacop	0x2,$r0,1(0x1)
     60c:	00020519 	0x00020519
     610:	0d500205 	vshuf.b	$vr5,$vr16,$vr0,$vr0
     614:	05181c00 	0x05181c00
     618:	02050002 	slti	$r2,$r0,320(0x140)
     61c:	1c000d50 	pcaddu12i	$r16,106(0x6a)
     620:	04050106 	csrxchg	$r6,$r8,0x140
     624:	58020500 	beq	$r8,$r0,516(0x204) # 828 <data_size+0x140>
     628:	061c000d 	cacop	0xd,$r0,1792(0x700)
     62c:	00030559 	0x00030559
     630:	0d580205 	vshuf.b	$vr5,$vr16,$vr0,$vr16
     634:	01061c00 	0x01061c00
     638:	05000505 	0x05000505
     63c:	000d6002 	bytepick.d	$r2,$r0,$r24,0x2
     640:	0402001c 	csrrd	$r28,0x80
     644:	05010601 	0x05010601
     648:	0205000f 	slti	$r15,$r0,320(0x140)
     64c:	1c000d74 	pcaddu12i	$r20,107(0x6b)
     650:	00040200 	alsl.w	$r0,$r16,$r0,0x1
     654:	01400306 	0x01400306
     658:	05000405 	0x05000405
     65c:	000d7802 	bytepick.d	$r2,$r0,$r30,0x2
     660:	0305191c 	lu52i.d	$r28,$r8,326(0x146)
     664:	7c020500 	0x7c020500
     668:	4a1c000d 	bceqz	$fcc0,3546112(0x361c00) # 362268 <data_size+0x361b80>
     66c:	05000905 	0x05000905
     670:	000d8002 	bytepick.d	$r2,$r0,$r0,0x3
     674:	4d03061c 	jirl	$r28,$r16,66308(0x10304)
     678:	00030501 	0x00030501
     67c:	0da00205 	0x0da00205
     680:	5a061c00 	beq	$r0,$r0,-129508(0x2061c) # fffe0c9c <_stack+0xe3fcf1a4>
     684:	05000105 	0x05000105
     688:	000dc802 	bytepick.d	$r2,$r0,$r18,0x3
     68c:	6d03061c 	bgeu	$r16,$r28,66308(0x10304) # 10990 <data_size+0x102a8>
     690:	00050501 	alsl.w	$r1,$r8,$r1,0x3
     694:	0dd00205 	0x0dd00205
     698:	01061c00 	0x01061c00
     69c:	05000605 	0x05000605
     6a0:	000dd402 	bytepick.d	$r2,$r0,$r21,0x3
     6a4:	0402001c 	csrrd	$r28,0x80
     6a8:	1a051901 	pcalau12i	$r1,10440(0x28c8)
     6ac:	d8020500 	0xd8020500
     6b0:	011c000d 	0x011c000d
     6b4:	05000505 	0x05000505
     6b8:	000de802 	bytepick.d	$r2,$r0,$r26,0x3
     6bc:	0402001c 	csrrd	$r28,0x80
     6c0:	05180603 	0x05180603
     6c4:	02050006 	slti	$r6,$r0,320(0x140)
     6c8:	1c000de8 	pcaddu12i	$r8,111(0x6f)
     6cc:	09050106 	0x09050106
     6d0:	ec020500 	0xec020500
     6d4:	161c000d 	lu32i.d	$r13,57344(0xe000)
     6d8:	05002c05 	0x05002c05
     6dc:	000df002 	bytepick.d	$r2,$r0,$r28,0x3
     6e0:	1005011c 	addu16i.d	$r28,$r8,320(0x140)
     6e4:	f4020500 	0xf4020500
     6e8:	181c000d 	pcaddi	$r13,57344(0xe000)
     6ec:	05001605 	0x05001605
     6f0:	000df802 	bytepick.d	$r2,$r0,$r30,0x3
     6f4:	1005161c 	addu16i.d	$r28,$r16,325(0x145)
     6f8:	fc020500 	0xfc020500
     6fc:	011c000d 	0x011c000d
     700:	05001a05 	0x05001a05
     704:	000e0002 	bytepick.d	$r2,$r0,$r0,0x4
     708:	0505011c 	0x0505011c
     70c:	08020500 	0x08020500
     710:	181c000e 	pcaddi	$r14,57344(0xe000)
     714:	05000705 	0x05000705
     718:	000e0c02 	bytepick.d	$r2,$r0,$r3,0x4
     71c:	0505161c 	0x0505161c
     720:	14020500 	lu12i.w	$r0,4136(0x1028)
     724:	001c000e 	mul.w	$r14,$r0,$r0
     728:	06000402 	cacop	0x2,$r0,1(0x1)
     72c:	05016f03 	0x05016f03
     730:	02050005 	slti	$r5,$r0,320(0x140)
     734:	1c000e24 	pcaddu12i	$r4,113(0x71)
     738:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     73c:	0e240205 	0x0e240205
     740:	01061c00 	0x01061c00
     744:	05000805 	0x05000805
     748:	000e2802 	bytepick.d	$r2,$r0,$r10,0x4
     74c:	0518061c 	0x0518061c
     750:	02050005 	slti	$r5,$r0,320(0x140)
     754:	1c000e28 	pcaddu12i	$r8,113(0x71)
     758:	06050106 	cacop	0x6,$r8,320(0x140)
     75c:	2c020500 	vld	$vr0,$r8,129(0x81)
     760:	061c000e 	cacop	0xe,$r0,1792(0x700)
     764:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     768:	0e300205 	0x0e300205
     76c:	64031c00 	bge	$r0,$r0,796(0x31c) # a88 <data_size+0x3a0>
     770:	00050501 	alsl.w	$r1,$r8,$r1,0x3
     774:	0e340205 	0x0e340205
     778:	19061c00 	pcaddi	$r0,-511776(0x830e0)
     77c:	05000605 	0x05000605
     780:	000e3802 	bytepick.d	$r2,$r0,$r14,0x4
     784:	0805161c 	0x0805161c
     788:	3c020500 	0x3c020500
     78c:	161c000e 	lu32i.d	$r14,57344(0xe000)
     790:	05000505 	0x05000505
     794:	000e4002 	bytepick.d	$r2,$r0,$r16,0x4
     798:	0518061c 	0x0518061c
     79c:	02050005 	slti	$r5,$r0,320(0x140)
     7a0:	1c000e40 	pcaddu12i	$r0,114(0x72)
     7a4:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     7a8:	0e400205 	0x0e400205
     7ac:	05181c00 	0x05181c00
     7b0:	02050005 	slti	$r5,$r0,320(0x140)
     7b4:	1c000e44 	pcaddu12i	$r4,114(0x72)
     7b8:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
     7bc:	0e540205 	0x0e540205
     7c0:	05181c00 	0x05181c00
     7c4:	02050005 	slti	$r5,$r0,320(0x140)
     7c8:	1c000e54 	pcaddu12i	$r20,114(0x72)
     7cc:	08050106 	0x08050106
     7d0:	58020500 	beq	$r8,$r0,516(0x204) # 9d4 <data_size+0x2ec>
     7d4:	061c000e 	cacop	0xe,$r0,1792(0x700)
     7d8:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     7dc:	0e580205 	0x0e580205
     7e0:	01061c00 	0x01061c00
     7e4:	05000605 	0x05000605
     7e8:	000e5c02 	bytepick.d	$r2,$r0,$r23,0x4
     7ec:	0518061c 	0x0518061c
     7f0:	02050005 	slti	$r5,$r0,320(0x140)
     7f4:	1c000e60 	pcaddu12i	$r0,115(0x73)
     7f8:	00110519 	sub.w	$r25,$r8,$r1
     7fc:	0e700205 	0x0e700205
     800:	05181c00 	0x05181c00
     804:	02050011 	slti	$r17,$r0,320(0x140)
     808:	1c000e70 	pcaddu12i	$r16,115(0x73)
     80c:	14050106 	lu12i.w	$r6,10248(0x2808)
     810:	74020500 	xvsle.b	$xr0,$xr8,$xr1
     814:	061c000e 	cacop	0xe,$r0,1792(0x700)
     818:	00110518 	sub.w	$r24,$r8,$r1
     81c:	0e740205 	0x0e740205
     820:	01061c00 	0x01061c00
     824:	05001205 	0x05001205
     828:	000e7802 	bytepick.d	$r2,$r0,$r30,0x4
     82c:	0518061c 	0x0518061c
     830:	02050011 	slti	$r17,$r0,320(0x140)
     834:	1c000e7c 	pcaddu12i	$r28,115(0x73)
     838:	00050519 	alsl.w	$r25,$r8,$r1,0x3
     83c:	0e8c0205 	0x0e8c0205
     840:	05181c00 	0x05181c00
     844:	02050005 	slti	$r5,$r0,320(0x140)
     848:	1c000e8c 	pcaddu12i	$r12,116(0x74)
     84c:	08050106 	0x08050106
     850:	90020500 	0x90020500
     854:	061c000e 	cacop	0xe,$r0,1792(0x700)
     858:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     85c:	0e900205 	0x0e900205
     860:	01061c00 	0x01061c00
     864:	05000605 	0x05000605
     868:	000e9402 	bytepick.d	$r2,$r0,$r5,0x5
     86c:	0518061c 	0x0518061c
     870:	02050005 	slti	$r5,$r0,320(0x140)
     874:	1c000e98 	pcaddu12i	$r24,116(0x74)
     878:	0005051f 	alsl.w	$r31,$r8,$r1,0x3
     87c:	0ea80205 	0x0ea80205
     880:	05181c00 	0x05181c00
     884:	02050005 	slti	$r5,$r0,320(0x140)
     888:	1c000ea8 	pcaddu12i	$r8,117(0x75)
     88c:	08050106 	0x08050106
     890:	ac020500 	0xac020500
     894:	061c000e 	cacop	0xe,$r0,1792(0x700)
     898:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     89c:	0eac0205 	0x0eac0205
     8a0:	01061c00 	0x01061c00
     8a4:	05000605 	0x05000605
     8a8:	000eb002 	bytepick.d	$r2,$r0,$r12,0x5
     8ac:	0518061c 	0x0518061c
     8b0:	02050005 	slti	$r5,$r0,320(0x140)
     8b4:	1c000eb4 	pcaddu12i	$r20,117(0x75)
     8b8:	05015903 	0x05015903
     8bc:	02050005 	slti	$r5,$r0,320(0x140)
     8c0:	1c000eb8 	pcaddu12i	$r24,117(0x75)
     8c4:	06051906 	cacop	0x6,$r8,326(0x146)
     8c8:	bc020500 	0xbc020500
     8cc:	161c000e 	lu32i.d	$r14,57344(0xe000)
     8d0:	05000805 	0x05000805
     8d4:	000ec002 	bytepick.d	$r2,$r0,$r16,0x5
     8d8:	0505161c 	0x0505161c
     8dc:	c4020500 	0xc4020500
     8e0:	061c000e 	cacop	0xe,$r0,1792(0x700)
     8e4:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     8e8:	0ec40205 	0x0ec40205
     8ec:	05181c00 	0x05181c00
     8f0:	02050005 	slti	$r5,$r0,320(0x140)
     8f4:	1c000ec4 	pcaddu12i	$r4,118(0x76)
     8f8:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     8fc:	0ec80205 	0x0ec80205
     900:	051e1c00 	0x051e1c00
     904:	02050005 	slti	$r5,$r0,320(0x140)
     908:	1c000ed8 	pcaddu12i	$r24,118(0x76)
     90c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     910:	0ed80205 	0x0ed80205
     914:	01061c00 	0x01061c00
     918:	05000805 	0x05000805
     91c:	000edc02 	bytepick.d	$r2,$r0,$r23,0x5
     920:	0518061c 	0x0518061c
     924:	02050005 	slti	$r5,$r0,320(0x140)
     928:	1c000edc 	pcaddu12i	$r28,118(0x76)
     92c:	06050106 	cacop	0x6,$r8,320(0x140)
     930:	e0020500 	0xe0020500
     934:	061c000e 	cacop	0xe,$r0,1792(0x700)
     938:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     93c:	0ee40205 	0x0ee40205
     940:	05331c00 	0x05331c00
     944:	02050005 	slti	$r5,$r0,320(0x140)
     948:	1c000eec 	pcaddu12i	$r12,119(0x77)
     94c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     950:	0eec0205 	0x0eec0205
     954:	01061c00 	0x01061c00
     958:	05000605 	0x05000605
     95c:	000ef002 	bytepick.d	$r2,$r0,$r28,0x5
     960:	0518061c 	0x0518061c
     964:	02050005 	slti	$r5,$r0,320(0x140)
     968:	1c000ef4 	pcaddu12i	$r20,119(0x77)
     96c:	0006051e 	alsl.wu	$r30,$r8,$r1,0x1
     970:	0ef40205 	0x0ef40205
     974:	051a1c00 	0x051a1c00
     978:	02050005 	slti	$r5,$r0,320(0x140)
     97c:	1c000efc 	pcaddu12i	$r28,119(0x77)
     980:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     984:	0f000205 	0x0f000205
     988:	01001c00 	0x01001c00
     98c:	0000ae01 	0x0000ae01
     990:	21000400 	sc.w	$r0,$r0,4(0x4)
     994:	01000000 	0x01000000
     998:	f2f60101 	0xf2f60101
     99c:	0101000d 	fadd.d	$f13,$f0,$f0
     9a0:	00000101 	0x00000101
     9a4:	00000100 	0x00000100
     9a8:	75700001 	0x75700001
     9ac:	61686374 	blt	$r27,$r20,92256(0x16860) # 1720c <data_size+0x16b24>
     9b0:	00632e72 	bstrins.w	$r18,$r19,0x3,0xb
     9b4:	00000000 	0x00000000
     9b8:	00020500 	0x00020500
     9bc:	181c000f 	pcaddi	$r15,57344(0xe000)
     9c0:	05000105 	0x05000105
     9c4:	000f0002 	bytepick.d	$r2,$r0,$r0,0x6
     9c8:	0105181c 	fmul.d	$f28,$f0,$f6
     9cc:	00020500 	0x00020500
     9d0:	1d1c000f 	pcaddu12i	$r15,-466944(0x8e000)
     9d4:	05000505 	0x05000505
     9d8:	000f0002 	bytepick.d	$r2,$r0,$r0,0x6
     9dc:	0510061c 	0x0510061c
     9e0:	02050001 	slti	$r1,$r0,320(0x140)
     9e4:	1c000f08 	pcaddu12i	$r8,120(0x78)
     9e8:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
     9ec:	0f180205 	0x0f180205
     9f0:	12061c00 	addu16i.d	$r0,$r0,-32377(0x8187)
     9f4:	05000105 	0x05000105
     9f8:	000f1802 	bytepick.d	$r2,$r0,$r6,0x6
     9fc:	0518061c 	0x0518061c
     a00:	02050001 	slti	$r1,$r0,320(0x140)
     a04:	1c000f28 	pcaddu12i	$r8,121(0x79)
     a08:	01051a06 	fmul.d	$f6,$f16,$f6
     a0c:	28020500 	ld.b	$r0,$r8,129(0x81)
     a10:	181c000f 	pcaddi	$r15,57344(0xe000)
     a14:	05000505 	0x05000505
     a18:	000f2802 	bytepick.d	$r2,$r0,$r10,0x6
     a1c:	0516061c 	0x0516061c
     a20:	02050001 	slti	$r1,$r0,320(0x140)
     a24:	1c000f30 	pcaddu12i	$r16,121(0x79)
     a28:	00050518 	alsl.w	$r24,$r8,$r1,0x3
     a2c:	0f400205 	0x0f400205
     a30:	051e1c00 	0x051e1c00
     a34:	02050001 	slti	$r1,$r0,320(0x140)
     a38:	1c000f4c 	pcaddu12i	$r12,122(0x7a)
     a3c:	65010100 	bge	$r8,$r0,65792(0x10100) # 10b3c <data_size+0x10454>
     a40:	04000001 	csrrd	$r1,0x0
     a44:	00001e00 	ctz.w	$r0,$r16
     a48:	01010100 	fadd.d	$f0,$f8,$f0
     a4c:	000df2f6 	bytepick.d	$r22,$r23,$r28,0x3
     a50:	01010101 	fadd.d	$f1,$f8,$f0
     a54:	01000000 	0x01000000
     a58:	00010000 	asrtle.d	$r0,$r0
     a5c:	73747570 	0x73747570
     a60:	0000632e 	rdtimel.w	$r14,$r25
     a64:	00000000 	0x00000000
     a68:	0f4c0205 	0x0f4c0205
     a6c:	05181c00 	0x05181c00
     a70:	02050001 	slti	$r1,$r0,320(0x140)
     a74:	1c000f4c 	pcaddu12i	$r12,122(0x7a)
     a78:	00010518 	0x00010518
     a7c:	0f4c0205 	0x0f4c0205
     a80:	05181c00 	0x05181c00
     a84:	02050001 	slti	$r1,$r0,320(0x140)
     a88:	1c000f4c 	pcaddu12i	$r12,122(0x7a)
     a8c:	01051506 	fmul.d	$f6,$f8,$f5
     a90:	60020500 	blt	$r8,$r0,516(0x204) # c94 <data_size+0x5ac>
     a94:	191c000f 	pcaddi	$r15,-466944(0x8e000)
     a98:	05000905 	0x05000905
     a9c:	000f6402 	bytepick.d	$r2,$r0,$r25,0x6
     aa0:	0605011c 	cacop	0x1c,$r8,320(0x140)
     aa4:	6c020500 	bgeu	$r8,$r0,516(0x204) # ca8 <data_size+0x5c0>
     aa8:	191c000f 	pcaddi	$r15,-466944(0x8e000)
     aac:	05000405 	0x05000405
     ab0:	000f7402 	bytepick.d	$r2,$r0,$r29,0x6
     ab4:	0518061c 	0x0518061c
     ab8:	02050002 	slti	$r2,$r0,320(0x140)
     abc:	1c000f7c 	pcaddu12i	$r28,123(0x7b)
     ac0:	00020518 	0x00020518
     ac4:	0f7c0205 	0x0f7c0205
     ac8:	13061c00 	addu16i.d	$r0,$r0,-15993(0xc187)
     acc:	05000905 	0x05000905
     ad0:	000f8002 	bytepick.d	$r2,$r0,$r0,0x7
     ad4:	0605011c 	cacop	0x1c,$r8,320(0x140)
     ad8:	84020500 	0x84020500
     adc:	061c000f 	cacop	0xf,$r0,1792(0x700)
     ae0:	00020519 	0x00020519
     ae4:	0f840205 	0x0f840205
     ae8:	19061c00 	pcaddi	$r0,-511776(0x830e0)
     aec:	05000305 	0x05000305
     af0:	000f8802 	bytepick.d	$r2,$r0,$r2,0x7
     af4:	0405151c 	csrxchg	$r28,$r8,0x145
     af8:	8c020500 	0x8c020500
     afc:	001c000f 	mul.w	$r15,$r0,$r0
     b00:	06010402 	cacop	0x2,$r0,65(0x41)
     b04:	00100501 	add.w	$r1,$r8,$r1
     b08:	0f940205 	0x0f940205
     b0c:	05181c00 	0x05181c00
     b10:	02050002 	slti	$r2,$r0,320(0x140)
     b14:	1c000f9c 	pcaddu12i	$r28,124(0x7c)
     b18:	00020518 	0x00020518
     b1c:	0f9c0205 	0x0f9c0205
     b20:	13061c00 	addu16i.d	$r0,$r0,-15993(0xc187)
     b24:	05000905 	0x05000905
     b28:	000fa002 	bytepick.d	$r2,$r0,$r8,0x7
     b2c:	0605011c 	cacop	0x1c,$r8,320(0x140)
     b30:	a4020500 	0xa4020500
     b34:	001c000f 	mul.w	$r15,$r0,$r0
     b38:	06000402 	cacop	0x2,$r0,1(0x1)
     b3c:	0001051d 	0x0001051d
     b40:	0fa40205 	0x0fa40205
     b44:	18061c00 	pcaddi	$r0,12512(0x30e0)
     b48:	05000105 	0x05000105
     b4c:	000fc002 	bytepick.d	$r2,$r0,$r16,0x7
     b50:	051b061c 	0x051b061c
     b54:	02050001 	slti	$r1,$r0,320(0x140)
     b58:	1c000fc0 	pcaddu12i	$r0,126(0x7e)
     b5c:	00010518 	0x00010518
     b60:	0fc00205 	0x0fc00205
     b64:	16061c00 	lu32i.d	$r0,12512(0x30e0)
     b68:	05000105 	0x05000105
     b6c:	000fc802 	bytepick.d	$r2,$r0,$r18,0x7
     b70:	0105181c 	fmul.d	$f28,$f0,$f6
     b74:	cc020500 	0xcc020500
     b78:	061c000f 	cacop	0xf,$r0,1792(0x700)
     b7c:	00010518 	0x00010518
     b80:	0fd40205 	0x0fd40205
     b84:	05181c00 	0x05181c00
     b88:	02050001 	slti	$r1,$r0,320(0x140)
     b8c:	1c000fdc 	pcaddu12i	$r28,126(0x7e)
     b90:	00010518 	0x00010518
     b94:	0fdc0205 	0x0fdc0205
     b98:	18061c00 	pcaddi	$r0,12512(0x30e0)
     b9c:	05000105 	0x05000105
     ba0:	000fec02 	bytepick.d	$r2,$r0,$r27,0x7
     ba4:	0101001c 	fadd.d	$f28,$f0,$f0
     ba8:	000001bf 	0x000001bf
     bac:	00230004 	div.du	$r4,$r0,$r0
     bb0:	01010000 	fadd.d	$f0,$f0,$f0
     bb4:	0df2f601 	0x0df2f601
     bb8:	01010100 	fadd.d	$f0,$f8,$f0
     bbc:	00000001 	0x00000001
     bc0:	01000001 	0x01000001
     bc4:	69727000 	bltu	$r0,$r0,94832(0x17270) # 17e34 <data_size+0x1774c>
     bc8:	6162746e 	blt	$r3,$r14,90740(0x16274) # 16e3c <data_size+0x16754>
     bcc:	632e6573 	blt	$r11,$r19,-53660(0x32e64) # ffff3a30 <_stack+0xe3fe1f38>
     bd0:	00000000 	0x00000000
     bd4:	02050000 	slti	$r0,$r0,320(0x140)
     bd8:	1c000fec 	pcaddu12i	$r12,127(0x7f)
     bdc:	00010518 	0x00010518
     be0:	0fec0205 	0x0fec0205
     be4:	05181c00 	0x05181c00
     be8:	02050002 	slti	$r2,$r0,320(0x140)
     bec:	1c000fec 	pcaddu12i	$r12,127(0x7f)
     bf0:	00020518 	0x00020518
     bf4:	0fec0205 	0x0fec0205
     bf8:	05181c00 	0x05181c00
     bfc:	02050002 	slti	$r2,$r0,320(0x140)
     c00:	1c000fec 	pcaddu12i	$r12,127(0x7f)
     c04:	00020518 	0x00020518
     c08:	0fec0205 	0x0fec0205
     c0c:	05181c00 	0x05181c00
     c10:	02050002 	slti	$r2,$r0,320(0x140)
     c14:	1c000fec 	pcaddu12i	$r12,127(0x7f)
     c18:	01051206 	fmul.d	$f6,$f16,$f4
     c1c:	00020500 	0x00020500
     c20:	011c0010 	0x011c0010
     c24:	05000105 	0x05000105
     c28:	00100402 	add.w	$r2,$r0,$r1
     c2c:	04051c1c 	csrrd	$r28,0x147
     c30:	08020500 	0x08020500
     c34:	001c0010 	mul.w	$r16,$r0,$r0
     c38:	01010402 	fadd.d	$f2,$f0,$f1
     c3c:	05000a05 	0x05000a05
     c40:	00100c02 	add.w	$r2,$r0,$r3
     c44:	0402001c 	csrrd	$r28,0x80
     c48:	051c0600 	0x051c0600
     c4c:	02050007 	slti	$r7,$r0,320(0x140)
     c50:	1c00100c 	pcaddu12i	$r12,128(0x80)
     c54:	02051906 	slti	$r6,$r8,326(0x146)
     c58:	20020500 	ll.w	$r0,$r8,516(0x204)
     c5c:	1a1c0010 	pcalau12i	$r16,57344(0xe000)
     c60:	05000705 	0x05000705
     c64:	00102402 	add.w	$r2,$r0,$r9
     c68:	0402001c 	csrrd	$r28,0x80
     c6c:	05160603 	0x05160603
     c70:	02050002 	slti	$r2,$r0,320(0x140)
     c74:	1c001024 	pcaddu12i	$r4,129(0x81)
     c78:	0e050106 	0x0e050106
     c7c:	30020500 	0x30020500
     c80:	011c0010 	0x011c0010
     c84:	05000805 	0x05000805
     c88:	00103402 	add.w	$r2,$r0,$r13
     c8c:	0518061c 	0x0518061c
     c90:	02050002 	slti	$r2,$r0,320(0x140)
     c94:	1c001038 	pcaddu12i	$r24,129(0x81)
     c98:	07050106 	0x07050106
     c9c:	48020500 	bcnez	$fcc0,516(0x204) # ea0 <data_size+0x7b8>
     ca0:	141c0010 	lu12i.w	$r16,57344(0xe000)
     ca4:	05000205 	0x05000205
     ca8:	00104c02 	add.w	$r2,$r0,$r19
     cac:	0402001c 	csrrd	$r28,0x80
     cb0:	051f0600 	0x051f0600
     cb4:	02050002 	slti	$r2,$r0,320(0x140)
     cb8:	1c00104c 	pcaddu12i	$r12,130(0x82)
     cbc:	07050106 	0x07050106
     cc0:	54020500 	bl	67109380(0x4000204) # 4000ec4 <data_size+0x40007dc>
     cc4:	1a1c0010 	pcalau12i	$r16,57344(0xe000)
     cc8:	05000305 	0x05000305
     ccc:	00105802 	add.w	$r2,$r0,$r22
     cd0:	0516061c 	0x0516061c
     cd4:	02050003 	slti	$r3,$r0,320(0x140)
     cd8:	1c001058 	pcaddu12i	$r24,130(0x82)
     cdc:	0e050106 	0x0e050106
     ce0:	64020500 	bge	$r8,$r0,516(0x204) # ee4 <data_size+0x7fc>
     ce4:	011c0010 	0x011c0010
     ce8:	05000a05 	0x05000a05
     cec:	00106c02 	add.w	$r2,$r0,$r27
     cf0:	0402001c 	csrrd	$r28,0x80
     cf4:	05180601 	0x05180601
     cf8:	02050003 	slti	$r3,$r0,320(0x140)
     cfc:	1c001080 	pcaddu12i	$r0,132(0x84)
     d00:	04040200 	csrxchg	$r0,$r16,0x100
     d04:	02051406 	slti	$r6,$r0,325(0x145)
     d08:	84020500 	0x84020500
     d0c:	001c0010 	mul.w	$r16,$r0,$r0
     d10:	1d000402 	pcaddu12i	$r2,-524256(0x80020)
     d14:	05000105 	0x05000105
     d18:	0010a002 	add.d	$r2,$r0,$r8
     d1c:	0705111c 	0x0705111c
     d20:	a8020500 	0xa8020500
     d24:	031c0010 	lu52i.d	$r16,$r0,1792(0x700)
     d28:	02050174 	slti	$r20,$r11,320(0x140)
     d2c:	b4020500 	0xb4020500
     d30:	061c0010 	cacop	0x10,$r0,1792(0x700)
     d34:	00020516 	0x00020516
     d38:	10b40205 	addu16i.d	$r5,$r16,11520(0x2d00)
     d3c:	18061c00 	pcaddi	$r0,12512(0x30e0)
     d40:	05000205 	0x05000205
     d44:	0010b802 	add.d	$r2,$r0,$r14
     d48:	0a05161c 	0x0a05161c
     d4c:	bc020500 	0xbc020500
     d50:	061c0010 	cacop	0x10,$r0,1792(0x700)
     d54:	00020518 	0x00020518
     d58:	10c80205 	addu16i.d	$r5,$r16,12800(0x3200)
     d5c:	05231c00 	0x05231c00
     d60:	02050002 	slti	$r2,$r0,320(0x140)
     d64:	1c0010d4 	pcaddu12i	$r20,134(0x86)
     d68:	09010100 	0x09010100
     d6c:	04000008 	csrrd	$r8,0x0
     d70:	00003700 	revb.4h	$r0,$r24
     d74:	01010100 	fadd.d	$f0,$f8,$f0
     d78:	000df2f6 	bytepick.d	$r22,$r23,$r28,0x3
     d7c:	01010101 	fadd.d	$f1,$f8,$f0
     d80:	01000000 	0x01000000
     d84:	2e010000 	0x2e010000
     d88:	6e692f2e 	bgeu	$r25,$r14,-104148(0x2692c) # fffe76b4 <_stack+0xe3fd5bbc>
     d8c:	64756c63 	bge	$r3,$r3,30060(0x756c) # 82f8 <data_size+0x7c10>
     d90:	73000065 	0x73000065
     d94:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe7704 <_stack+0xe3fd5c0c>
     d98:	00632e67 	bstrins.w	$r7,$r19,0x3,0xb
     d9c:	63000000 	blt	$r0,$r0,-65536(0x30000) # ffff0d9c <_stack+0xe3fdf2a4>
     da0:	6f6d6d6f 	bgeu	$r11,$r15,-37524(0x36d6c) # ffff7b0c <_stack+0xe3fe6014>
     da4:	00682e6e 	bstrins.w	$r14,$r19,0x8,0xb
     da8:	00000001 	0x00000001
     dac:	d4020500 	0xd4020500
     db0:	221c0010 	ll.d	$r16,$r0,7168(0x1c00)
     db4:	05001705 	0x05001705
     db8:	0010d402 	add.d	$r2,$r0,$r21
     dbc:	0505181c 	0x0505181c
     dc0:	d4020500 	0xd4020500
     dc4:	181c0010 	pcaddi	$r16,57344(0xe000)
     dc8:	05000505 	0x05000505
     dcc:	0010d402 	add.d	$r2,$r0,$r21
     dd0:	0501061c 	0x0501061c
     dd4:	0205000b 	slti	$r11,$r0,320(0x140)
     dd8:	1c0010dc 	pcaddu12i	$r28,134(0x86)
     ddc:	000c0516 	bytepick.d	$r22,$r8,$r1,0x0
     de0:	10e00205 	addu16i.d	$r5,$r16,14336(0x3800)
     de4:	19061c00 	pcaddi	$r0,-511776(0x830e0)
     de8:	05000905 	0x05000905
     dec:	0010e002 	add.d	$r2,$r0,$r24
     df0:	0501061c 	0x0501061c
     df4:	0205000d 	slti	$r13,$r0,320(0x140)
     df8:	1c0010e4 	pcaddu12i	$r4,135(0x87)
     dfc:	000c0516 	bytepick.d	$r22,$r8,$r1,0x0
     e00:	10e80205 	addu16i.d	$r5,$r16,14848(0x3a00)
     e04:	05011c00 	0x05011c00
     e08:	0205000b 	slti	$r11,$r0,320(0x140)
     e0c:	1c0010f0 	pcaddu12i	$r16,135(0x87)
     e10:	0001051b 	0x0001051b
     e14:	10f80205 	addu16i.d	$r5,$r16,15872(0x3e00)
     e18:	05121c00 	0x05121c00
     e1c:	0205000c 	slti	$r12,$r0,320(0x140)
     e20:	1c0010fc 	pcaddu12i	$r28,135(0x87)
     e24:	05051b06 	0x05051b06
     e28:	fc020500 	0xfc020500
     e2c:	061c0010 	cacop	0x10,$r0,1792(0x700)
     e30:	00010518 	0x00010518
     e34:	11040205 	addu16i.d	$r5,$r16,16640(0x4100)
     e38:	27061c00 	stptr.d	$r0,$r0,1564(0x61c)
     e3c:	05002405 	0x05002405
     e40:	00110402 	sub.w	$r2,$r0,$r1
     e44:	0505181c 	0x0505181c
     e48:	04020500 	csrxchg	$r0,$r8,0x81
     e4c:	181c0011 	pcaddi	$r17,57344(0xe000)
     e50:	05000505 	0x05000505
     e54:	00110402 	sub.w	$r2,$r0,$r1
     e58:	0501061c 	0x0501061c
     e5c:	0205000b 	slti	$r11,$r0,320(0x140)
     e60:	1c001108 	pcaddu12i	$r8,136(0x88)
     e64:	00160501 	orn	$r1,$r8,$r1
     e68:	11100205 	addu16i.d	$r5,$r16,17408(0x4400)
     e6c:	05161c00 	0x05161c00
     e70:	0205000c 	slti	$r12,$r0,320(0x140)
     e74:	1c001118 	pcaddu12i	$r24,136(0x88)
     e78:	01040200 	0x01040200
     e7c:	00160518 	orn	$r24,$r8,$r1
     e80:	11200205 	addu16i.d	$r5,$r16,18432(0x4800)
     e84:	02001c00 	slti	$r0,$r0,7(0x7)
     e88:	18060004 	pcaddi	$r4,12288(0x3000)
     e8c:	05000905 	0x05000905
     e90:	00112002 	sub.w	$r2,$r0,$r8
     e94:	0501061c 	0x0501061c
     e98:	0205000d 	slti	$r13,$r0,320(0x140)
     e9c:	1c001124 	pcaddu12i	$r4,137(0x89)
     ea0:	00190516 	srl.d	$r22,$r8,$r1
     ea4:	11280205 	addu16i.d	$r5,$r16,18944(0x4a00)
     ea8:	05011c00 	0x05011c00
     eac:	0205000b 	slti	$r11,$r0,320(0x140)
     eb0:	1c00112c 	pcaddu12i	$r12,137(0x89)
     eb4:	0001051b 	0x0001051b
     eb8:	11340205 	addu16i.d	$r5,$r16,19712(0x4d00)
     ebc:	05121c00 	0x05121c00
     ec0:	0205000c 	slti	$r12,$r0,320(0x140)
     ec4:	1c001138 	pcaddu12i	$r24,137(0x89)
     ec8:	05051b06 	0x05051b06
     ecc:	38020500 	0x38020500
     ed0:	061c0011 	cacop	0x11,$r0,1792(0x700)
     ed4:	00010518 	0x00010518
     ed8:	11400205 	addu16i.d	$r5,$r16,20480(0x5000)
     edc:	26061c00 	ldptr.d	$r0,$r0,1564(0x61c)
     ee0:	05002405 	0x05002405
     ee4:	00114002 	sub.w	$r2,$r0,$r16
     ee8:	05051b1c 	0x05051b1c
     eec:	40020500 	beqz	$r8,516(0x204) # 10f0 <data_size+0xa08>
     ef0:	181c0011 	pcaddi	$r17,57344(0xe000)
     ef4:	05000505 	0x05000505
     ef8:	00114002 	sub.w	$r2,$r0,$r16
     efc:	0516061c 	0x0516061c
     f00:	0205000b 	slti	$r11,$r0,320(0x140)
     f04:	1c001144 	pcaddu12i	$r4,138(0x8a)
     f08:	01040200 	0x01040200
     f0c:	16051906 	lu32i.d	$r6,10440(0x28c8)
     f10:	44020500 	bnez	$r8,516(0x204) # 1114 <data_size+0xa2c>
     f14:	061c0011 	cacop	0x11,$r0,1792(0x700)
     f18:	001a0516 	0x001a0516
     f1c:	11480205 	addu16i.d	$r5,$r16,20992(0x5200)
     f20:	05011c00 	0x05011c00
     f24:	02050015 	slti	$r21,$r0,320(0x140)
     f28:	1c00114c 	pcaddu12i	$r12,138(0x8a)
     f2c:	00100501 	add.w	$r1,$r8,$r1
     f30:	11500205 	addu16i.d	$r5,$r16,21504(0x5400)
     f34:	05011c00 	0x05011c00
     f38:	02050013 	slti	$r19,$r0,320(0x140)
     f3c:	1c001154 	pcaddu12i	$r20,138(0x8a)
     f40:	000b0501 	0x000b0501
     f44:	11580205 	addu16i.d	$r5,$r16,22016(0x5600)
     f48:	02001c00 	slti	$r0,$r0,7(0x7)
     f4c:	051b0004 	0x051b0004
     f50:	02050001 	slti	$r1,$r0,320(0x140)
     f54:	1c00115c 	pcaddu12i	$r28,138(0x8a)
     f58:	31052406 	0x31052406
     f5c:	5c020500 	bne	$r8,$r0,516(0x204) # 1160 <data_size+0xa78>
     f60:	181c0011 	pcaddi	$r17,57344(0xe000)
     f64:	05000505 	0x05000505
     f68:	00115c02 	sub.w	$r2,$r0,$r23
     f6c:	0505181c 	0x0505181c
     f70:	5c020500 	bne	$r8,$r0,516(0x204) # 1174 <data_size+0xa8c>
     f74:	061c0011 	cacop	0x11,$r0,1792(0x700)
     f78:	000b0501 	0x000b0501
     f7c:	11640205 	addu16i.d	$r5,$r16,22784(0x5900)
     f80:	05161c00 	0x05161c00
     f84:	0205000b 	slti	$r11,$r0,320(0x140)
     f88:	1c001168 	pcaddu12i	$r8,139(0x8b)
     f8c:	09051906 	0x09051906
     f90:	68020500 	bltu	$r8,$r0,516(0x204) # 1194 <data_size+0xaac>
     f94:	061c0011 	cacop	0x11,$r0,1792(0x700)
     f98:	00130501 	maskeqz	$r1,$r8,$r1
     f9c:	116c0205 	addu16i.d	$r5,$r16,23296(0x5b00)
     fa0:	051a1c00 	0x051a1c00
     fa4:	0205000b 	slti	$r11,$r0,320(0x140)
     fa8:	1c001170 	pcaddu12i	$r16,139(0x8b)
     fac:	00110514 	sub.w	$r20,$r8,$r1
     fb0:	11740205 	addu16i.d	$r5,$r16,23808(0x5d00)
     fb4:	05181c00 	0x05181c00
     fb8:	02050011 	slti	$r17,$r0,320(0x140)
     fbc:	1c00117c 	pcaddu12i	$r28,139(0x8b)
     fc0:	09051906 	0x09051906
     fc4:	7c020500 	0x7c020500
     fc8:	061c0011 	cacop	0x11,$r0,1792(0x700)
     fcc:	000b0513 	0x000b0513
     fd0:	11800205 	addu16i.d	$r5,$r16,24576(0x6000)
     fd4:	1d061c00 	pcaddu12i	$r0,-511776(0x830e0)
     fd8:	05000505 	0x05000505
     fdc:	00118002 	sub.d	$r2,$r0,$r0
     fe0:	0518061c 	0x0518061c
     fe4:	02050001 	slti	$r1,$r0,320(0x140)
     fe8:	1c001184 	pcaddu12i	$r4,140(0x8c)
     fec:	33052506 	0x33052506
     ff0:	84020500 	0x84020500
     ff4:	181c0011 	pcaddi	$r17,57344(0xe000)
     ff8:	05000505 	0x05000505
     ffc:	00118402 	sub.d	$r2,$r0,$r1
    1000:	0501061c 	0x0501061c
    1004:	0205000b 	slti	$r11,$r0,320(0x140)
    1008:	1c001188 	pcaddu12i	$r8,140(0x8c)
    100c:	00150501 	or	$r1,$r8,$r1
    1010:	11900205 	addu16i.d	$r5,$r16,25600(0x6400)
    1014:	05011c00 	0x05011c00
    1018:	02050012 	slti	$r18,$r0,320(0x140)
    101c:	1c001194 	pcaddu12i	$r20,140(0x8c)
    1020:	00210501 	div.wu	$r1,$r8,$r1
    1024:	11a00205 	addu16i.d	$r5,$r16,26624(0x6800)
    1028:	02001c00 	slti	$r0,$r0,7(0x7)
    102c:	05010104 	0x05010104
    1030:	02050015 	slti	$r21,$r0,320(0x140)
    1034:	1c0011a4 	pcaddu12i	$r4,141(0x8d)
    1038:	00120501 	slt	$r1,$r8,$r1
    103c:	11a80205 	addu16i.d	$r5,$r16,27136(0x6a00)
    1040:	02001c00 	slti	$r0,$r0,7(0x7)
    1044:	05010204 	0x05010204
    1048:	0205002b 	slti	$r11,$r1,320(0x140)
    104c:	1c0011b0 	pcaddu12i	$r16,141(0x8d)
    1050:	00210501 	div.wu	$r1,$r8,$r1
    1054:	11b40205 	addu16i.d	$r5,$r16,27904(0x6d00)
    1058:	02001c00 	slti	$r0,$r0,7(0x7)
    105c:	18060004 	pcaddi	$r4,12288(0x3000)
    1060:	05000905 	0x05000905
    1064:	0011b402 	sub.d	$r2,$r0,$r13
    1068:	0501061c 	0x0501061c
    106c:	02050019 	slti	$r25,$r0,320(0x140)
    1070:	1c0011b8 	pcaddu12i	$r24,141(0x8d)
    1074:	00120501 	slt	$r1,$r8,$r1
    1078:	11bc0205 	addu16i.d	$r5,$r16,28416(0x6f00)
    107c:	05161c00 	0x05161c00
    1080:	0205000b 	slti	$r11,$r0,320(0x140)
    1084:	1c0011c0 	pcaddu12i	$r0,142(0x8e)
    1088:	0019051a 	srl.d	$r26,$r8,$r1
    108c:	11c40205 	addu16i.d	$r5,$r16,28928(0x7100)
    1090:	05181c00 	0x05181c00
    1094:	02050001 	slti	$r1,$r0,320(0x140)
    1098:	1c0011cc 	pcaddu12i	$r12,142(0x8e)
    109c:	05051606 	0x05051606
    10a0:	cc020500 	0xcc020500
    10a4:	061c0011 	cacop	0x11,$r0,1792(0x700)
    10a8:	00330513 	0x00330513
    10ac:	11d00205 	addu16i.d	$r5,$r16,29696(0x7400)
    10b0:	051b1c00 	0x051b1c00
    10b4:	02050021 	slti	$r1,$r1,320(0x140)
    10b8:	1c0011d8 	pcaddu12i	$r24,142(0x8e)
    10bc:	00360501 	0x00360501
    10c0:	11e00205 	addu16i.d	$r5,$r16,30720(0x7800)
    10c4:	05181c00 	0x05181c00
    10c8:	02050001 	slti	$r1,$r0,320(0x140)
    10cc:	1c0011e4 	pcaddu12i	$r4,143(0x8f)
    10d0:	00190516 	srl.d	$r22,$r8,$r1
    10d4:	11e80205 	addu16i.d	$r5,$r16,31232(0x7a00)
    10d8:	05181c00 	0x05181c00
    10dc:	02050001 	slti	$r1,$r0,320(0x140)
    10e0:	1c0011ec 	pcaddu12i	$r12,143(0x8f)
    10e4:	1f052206 	pcaddu18i	$r6,-513776(0x82910)
    10e8:	ec020500 	0xec020500
    10ec:	181c0011 	pcaddi	$r17,57344(0xe000)
    10f0:	05000505 	0x05000505
    10f4:	0011ec02 	sub.d	$r2,$r0,$r27
    10f8:	0501061c 	0x0501061c
    10fc:	0205000c 	slti	$r12,$r0,320(0x140)
    1100:	1c0011f0 	pcaddu12i	$r16,143(0x8f)
    1104:	000b0501 	0x000b0501
    1108:	11f40205 	addu16i.d	$r5,$r16,32000(0x7d00)
    110c:	18061c00 	pcaddi	$r0,12512(0x30e0)
    1110:	05000905 	0x05000905
    1114:	0011f402 	sub.d	$r2,$r0,$r29
    1118:	0501061c 	0x0501061c
    111c:	0205000c 	slti	$r12,$r0,320(0x140)
    1120:	1c001200 	pcaddu12i	$r0,144(0x90)
    1124:	09050106 	0x09050106
    1128:	00020500 	0x00020500
    112c:	1a1c0012 	pcalau12i	$r18,57344(0xe000)
    1130:	05000905 	0x05000905
    1134:	00120002 	slt	$r2,$r0,$r0
    1138:	0501061c 	0x0501061c
    113c:	0205000b 	slti	$r11,$r0,320(0x140)
    1140:	1c001204 	pcaddu12i	$r4,144(0x90)
    1144:	000c0513 	bytepick.d	$r19,$r8,$r1,0x0
    1148:	12080205 	addu16i.d	$r5,$r16,-32256(0x8200)
    114c:	05011c00 	0x05011c00
    1150:	0205000b 	slti	$r11,$r0,320(0x140)
    1154:	1c00120c 	pcaddu12i	$r12,144(0x90)
    1158:	000c051d 	bytepick.d	$r29,$r8,$r1,0x0
    115c:	12100205 	addu16i.d	$r5,$r16,-31744(0x8400)
    1160:	05181c00 	0x05181c00
    1164:	02050001 	slti	$r1,$r0,320(0x140)
    1168:	1c001218 	pcaddu12i	$r24,144(0x90)
    116c:	20052306 	ll.w	$r6,$r24,1312(0x520)
    1170:	18020500 	pcaddi	$r0,4136(0x1028)
    1174:	181c0012 	pcaddi	$r18,57344(0xe000)
    1178:	05000505 	0x05000505
    117c:	00121802 	slt	$r2,$r0,$r6
    1180:	0501061c 	0x0501061c
    1184:	0205000c 	slti	$r12,$r0,320(0x140)
    1188:	1c00121c 	pcaddu12i	$r28,144(0x90)
    118c:	000b0501 	0x000b0501
    1190:	12200205 	addu16i.d	$r5,$r16,-30720(0x8800)
    1194:	18061c00 	pcaddi	$r0,12512(0x30e0)
    1198:	05000905 	0x05000905
    119c:	00122002 	slt	$r2,$r0,$r8
    11a0:	0501061c 	0x0501061c
    11a4:	0205000c 	slti	$r12,$r0,320(0x140)
    11a8:	1c00122c 	pcaddu12i	$r12,145(0x91)
    11ac:	09050106 	0x09050106
    11b0:	2c020500 	vld	$vr0,$r8,129(0x81)
    11b4:	1a1c0012 	pcalau12i	$r18,57344(0xe000)
    11b8:	05000905 	0x05000905
    11bc:	00122c02 	slt	$r2,$r0,$r11
    11c0:	0501061c 	0x0501061c
    11c4:	0205000b 	slti	$r11,$r0,320(0x140)
    11c8:	1c001230 	pcaddu12i	$r16,145(0x91)
    11cc:	000c0513 	bytepick.d	$r19,$r8,$r1,0x0
    11d0:	12340205 	addu16i.d	$r5,$r16,-29440(0x8d00)
    11d4:	05011c00 	0x05011c00
    11d8:	0205000b 	slti	$r11,$r0,320(0x140)
    11dc:	1c001238 	pcaddu12i	$r24,145(0x91)
    11e0:	05051d06 	0x05051d06
    11e4:	38020500 	0x38020500
    11e8:	061c0012 	cacop	0x12,$r0,1792(0x700)
    11ec:	00010518 	0x00010518
    11f0:	12400205 	addu16i.d	$r5,$r16,-28672(0x9000)
    11f4:	7d061c00 	0x7d061c00
    11f8:	05002305 	0x05002305
    11fc:	00124002 	slt	$r2,$r0,$r16
    1200:	05051b1c 	0x05051b1c
    1204:	40020500 	beqz	$r8,516(0x204) # 1408 <data_size+0xd20>
    1208:	181c0012 	pcaddi	$r18,57344(0xe000)
    120c:	05000505 	0x05000505
    1210:	00124002 	slt	$r2,$r0,$r16
    1214:	0501061c 	0x0501061c
    1218:	0205000b 	slti	$r11,$r0,320(0x140)
    121c:	1c001248 	pcaddu12i	$r8,146(0x92)
    1220:	000b0516 	0x000b0516
    1224:	124c0205 	addu16i.d	$r5,$r16,-27904(0x9300)
    1228:	19061c00 	pcaddi	$r0,-511776(0x830e0)
    122c:	05000905 	0x05000905
    1230:	00124c02 	slt	$r2,$r0,$r19
    1234:	0501061c 	0x0501061c
    1238:	0205000c 	slti	$r12,$r0,320(0x140)
    123c:	1c001250 	pcaddu12i	$r16,146(0x92)
    1240:	000f0501 	bytepick.d	$r1,$r8,$r1,0x6
    1244:	12540205 	addu16i.d	$r5,$r16,-27392(0x9500)
    1248:	05161c00 	0x05161c00
    124c:	0205000b 	slti	$r11,$r0,320(0x140)
    1250:	1c001258 	pcaddu12i	$r24,146(0x92)
    1254:	05051a06 	0x05051a06
    1258:	58020500 	beq	$r8,$r0,516(0x204) # 145c <data_size+0xd74>
    125c:	061c0012 	cacop	0x12,$r0,1792(0x700)
    1260:	00010519 	0x00010519
    1264:	125c0205 	addu16i.d	$r5,$r16,-26880(0x9700)
    1268:	28061c00 	ld.b	$r0,$r0,391(0x187)
    126c:	05002e05 	0x05002e05
    1270:	00125c02 	slt	$r2,$r0,$r23
    1274:	05051b1c 	0x05051b1c
    1278:	5c020500 	bne	$r8,$r0,516(0x204) # 147c <data_size+0xd94>
    127c:	181c0012 	pcaddi	$r18,57344(0xe000)
    1280:	05000505 	0x05000505
    1284:	00125c02 	slt	$r2,$r0,$r23
    1288:	0505181c 	0x0505181c
    128c:	5c020500 	bne	$r8,$r0,516(0x204) # 1490 <data_size+0xda8>
    1290:	061c0012 	cacop	0x12,$r0,1792(0x700)
    1294:	000b0501 	0x000b0501
    1298:	12640205 	addu16i.d	$r5,$r16,-26368(0x9900)
    129c:	05161c00 	0x05161c00
    12a0:	0205000b 	slti	$r11,$r0,320(0x140)
    12a4:	1c001268 	pcaddu12i	$r8,147(0x93)
    12a8:	09051906 	0x09051906
    12ac:	68020500 	bltu	$r8,$r0,516(0x204) # 14b0 <data_size+0xdc8>
    12b0:	061c0012 	cacop	0x12,$r0,1792(0x700)
    12b4:	00140501 	nor	$r1,$r8,$r1
    12b8:	126c0205 	addu16i.d	$r5,$r16,-25856(0x9b00)
    12bc:	05011c00 	0x05011c00
    12c0:	02050011 	slti	$r17,$r0,320(0x140)
    12c4:	1c001270 	pcaddu12i	$r16,147(0x93)
    12c8:	000c0501 	bytepick.d	$r1,$r8,$r1,0x0
    12cc:	12740205 	addu16i.d	$r5,$r16,-25344(0x9d00)
    12d0:	05011c00 	0x05011c00
    12d4:	0205000f 	slti	$r15,$r0,320(0x140)
    12d8:	1c001278 	pcaddu12i	$r24,147(0x93)
    12dc:	000b0516 	0x000b0516
    12e0:	127c0205 	addu16i.d	$r5,$r16,-24832(0x9f00)
    12e4:	1a061c00 	pcalau12i	$r0,12512(0x30e0)
    12e8:	05000505 	0x05000505
    12ec:	00127c02 	slt	$r2,$r0,$r31
    12f0:	0519061c 	0x0519061c
    12f4:	02050001 	slti	$r1,$r0,320(0x140)
    12f8:	1c001280 	pcaddu12i	$r0,148(0x94)
    12fc:	2f052306 	0x2f052306
    1300:	80020500 	0x80020500
    1304:	1b1c0012 	pcalau12i	$r18,-466944(0x8e000)
    1308:	05000505 	0x05000505
    130c:	00128002 	sltu	$r2,$r0,$r0
    1310:	0505181c 	0x0505181c
    1314:	80020500 	0x80020500
    1318:	181c0012 	pcaddi	$r18,57344(0xe000)
    131c:	05000505 	0x05000505
    1320:	00128002 	sltu	$r2,$r0,$r0
    1324:	0501061c 	0x0501061c
    1328:	02050008 	slti	$r8,$r0,320(0x140)
    132c:	1c001284 	pcaddu12i	$r4,148(0x94)
    1330:	01040200 	0x01040200
    1334:	00140501 	nor	$r1,$r8,$r1
    1338:	12880205 	addu16i.d	$r5,$r16,-24064(0xa200)
    133c:	05011c00 	0x05011c00
    1340:	0205000f 	slti	$r15,$r0,320(0x140)
    1344:	1c00128c 	pcaddu12i	$r12,148(0x94)
    1348:	00040200 	alsl.w	$r0,$r16,$r0,0x1
    134c:	09051806 	0x09051806
    1350:	8c020500 	0x8c020500
    1354:	061c0012 	cacop	0x12,$r0,1792(0x700)
    1358:	00130501 	maskeqz	$r1,$r8,$r1
    135c:	12900205 	addu16i.d	$r5,$r16,-23552(0xa400)
    1360:	18061c00 	pcaddi	$r0,12512(0x30e0)
    1364:	05000905 	0x05000905
    1368:	00129002 	sltu	$r2,$r0,$r4
    136c:	0501061c 	0x0501061c
    1370:	0205000f 	slti	$r15,$r0,320(0x140)
    1374:	1c001294 	pcaddu12i	$r20,148(0x94)
    1378:	0d051806 	0x0d051806
    137c:	94020500 	0x94020500
    1380:	061c0012 	cacop	0x12,$r0,1792(0x700)
    1384:	00130501 	maskeqz	$r1,$r8,$r1
    1388:	12980205 	addu16i.d	$r5,$r16,-23040(0xa600)
    138c:	05011c00 	0x05011c00
    1390:	02050015 	slti	$r21,$r0,320(0x140)
    1394:	1c00129c 	pcaddu12i	$r28,148(0x94)
    1398:	00130501 	maskeqz	$r1,$r8,$r1
    139c:	12a40205 	addu16i.d	$r5,$r16,-22272(0xa900)
    13a0:	05161c00 	0x05161c00
    13a4:	0205000f 	slti	$r15,$r0,320(0x140)
    13a8:	1c0012b0 	pcaddu12i	$r16,149(0x95)
    13ac:	000f051b 	bytepick.d	$r27,$r8,$r1,0x6
    13b0:	12b80205 	addu16i.d	$r5,$r16,-20992(0xae00)
    13b4:	18061c00 	pcaddi	$r0,12512(0x30e0)
    13b8:	05000d05 	0x05000d05
    13bc:	0012b802 	sltu	$r2,$r0,$r14
    13c0:	0501061c 	0x0501061c
    13c4:	02050018 	slti	$r24,$r0,320(0x140)
    13c8:	1c0012bc 	pcaddu12i	$r28,149(0x95)
    13cc:	00150501 	or	$r1,$r8,$r1
    13d0:	12c00205 	addu16i.d	$r5,$r16,-20480(0xb000)
    13d4:	05011c00 	0x05011c00
    13d8:	02050010 	slti	$r16,$r0,320(0x140)
    13dc:	1c0012c4 	pcaddu12i	$r4,150(0x96)
    13e0:	00130501 	maskeqz	$r1,$r8,$r1
    13e4:	12c80205 	addu16i.d	$r5,$r16,-19968(0xb200)
    13e8:	05161c00 	0x05161c00
    13ec:	0205000f 	slti	$r15,$r0,320(0x140)
    13f0:	1c0012cc 	pcaddu12i	$r12,150(0x96)
    13f4:	0001051d 	0x0001051d
    13f8:	12d40205 	addu16i.d	$r5,$r16,-19200(0xb500)
    13fc:	28061c00 	ld.b	$r0,$r0,391(0x187)
    1400:	05003205 	0x05003205
    1404:	0012d402 	sltu	$r2,$r0,$r21
    1408:	0505181c 	0x0505181c
    140c:	d4020500 	0xd4020500
    1410:	181c0012 	pcaddi	$r18,57344(0xe000)
    1414:	05000505 	0x05000505
    1418:	0012d402 	sltu	$r2,$r0,$r21
    141c:	0505181c 	0x0505181c
    1420:	d4020500 	0xd4020500
    1424:	061c0012 	cacop	0x12,$r0,1792(0x700)
    1428:	000b0501 	0x000b0501
    142c:	12d80205 	addu16i.d	$r5,$r16,-18944(0xb600)
    1430:	18061c00 	pcaddi	$r0,12512(0x30e0)
    1434:	05000905 	0x05000905
    1438:	0012d802 	sltu	$r2,$r0,$r22
    143c:	0501061c 	0x0501061c
    1440:	0205000d 	slti	$r13,$r0,320(0x140)
    1444:	1c0012dc 	pcaddu12i	$r28,150(0x96)
    1448:	00140501 	nor	$r1,$r8,$r1
    144c:	12e40205 	addu16i.d	$r5,$r16,-18176(0xb900)
    1450:	05011c00 	0x05011c00
    1454:	0205000c 	slti	$r12,$r0,320(0x140)
    1458:	1c0012ec 	pcaddu12i	$r12,151(0x97)
    145c:	000d0501 	bytepick.d	$r1,$r8,$r1,0x2
    1460:	12f00205 	addu16i.d	$r5,$r16,-17408(0xbc00)
    1464:	05011c00 	0x05011c00
    1468:	02050014 	slti	$r20,$r0,320(0x140)
    146c:	1c0012f4 	pcaddu12i	$r20,151(0x97)
    1470:	000c0501 	bytepick.d	$r1,$r8,$r1,0x0
    1474:	12f80205 	addu16i.d	$r5,$r16,-16896(0xbe00)
    1478:	01061c00 	0x01061c00
    147c:	05000905 	0x05000905
    1480:	0012f802 	sltu	$r2,$r0,$r30
    1484:	09051a1c 	0x09051a1c
    1488:	f8020500 	0xf8020500
    148c:	061c0012 	cacop	0x12,$r0,1792(0x700)
    1490:	000c0501 	bytepick.d	$r1,$r8,$r1,0x0
    1494:	12fc0205 	addu16i.d	$r5,$r16,-16640(0xbf00)
    1498:	05011c00 	0x05011c00
    149c:	02050013 	slti	$r19,$r0,320(0x140)
    14a0:	1c001300 	pcaddu12i	$r0,152(0x98)
    14a4:	000b0513 	0x000b0513
    14a8:	13040205 	addu16i.d	$r5,$r16,-16128(0xc100)
    14ac:	051d1c00 	0x051d1c00
    14b0:	0205000c 	slti	$r12,$r0,320(0x140)
    14b4:	1c001308 	pcaddu12i	$r8,152(0x98)
    14b8:	00010518 	0x00010518
    14bc:	130c0205 	addu16i.d	$r5,$r16,-15616(0xc300)
    14c0:	12061c00 	addu16i.d	$r0,$r0,-32377(0x8187)
    14c4:	05000d05 	0x05000d05
    14c8:	00130c02 	maskeqz	$r2,$r0,$r3
    14cc:	0512061c 	0x0512061c
    14d0:	02050032 	slti	$r18,$r1,320(0x140)
    14d4:	1c001310 	pcaddu12i	$r16,152(0x98)
    14d8:	001a051c 	0x001a051c
    14dc:	13180205 	addu16i.d	$r5,$r16,-14848(0xc600)
    14e0:	05011c00 	0x05011c00
    14e4:	0205002f 	slti	$r15,$r1,320(0x140)
    14e8:	1c001320 	pcaddu12i	$r0,153(0x99)
    14ec:	0001051c 	0x0001051c
    14f0:	13240205 	addu16i.d	$r5,$r16,-14080(0xc900)
    14f4:	05121c00 	0x05121c00
    14f8:	02050014 	slti	$r20,$r0,320(0x140)
    14fc:	1c001328 	pcaddu12i	$r8,153(0x99)
    1500:	0001051c 	0x0001051c
    1504:	132c0205 	addu16i.d	$r5,$r16,-13568(0xcb00)
    1508:	19061c00 	pcaddi	$r0,-511776(0x830e0)
    150c:	05001e05 	0x05001e05
    1510:	00132c02 	maskeqz	$r2,$r0,$r11
    1514:	0205181c 	slti	$r28,$r0,326(0x146)
    1518:	2c020500 	vld	$vr0,$r8,129(0x81)
    151c:	031c0013 	lu52i.d	$r19,$r0,1792(0x700)
    1520:	05017fa2 	0x05017fa2
    1524:	02050005 	slti	$r5,$r0,320(0x140)
    1528:	1c00132c 	pcaddu12i	$r12,153(0x99)
    152c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1530:	132c0205 	addu16i.d	$r5,$r16,-13568(0xcb00)
    1534:	01061c00 	0x01061c00
    1538:	05000b05 	0x05000b05
    153c:	00133402 	maskeqz	$r2,$r0,$r13
    1540:	0518061c 	0x0518061c
    1544:	02050009 	slti	$r9,$r0,320(0x140)
    1548:	1c001334 	pcaddu12i	$r20,153(0x99)
    154c:	0c050106 	0x0c050106
    1550:	38020500 	0x38020500
    1554:	011c0013 	0x011c0013
    1558:	05000f05 	0x05000f05
    155c:	00133c02 	maskeqz	$r2,$r0,$r15
    1560:	0b05161c 	0x0b05161c
    1564:	40020500 	beqz	$r8,516(0x204) # 1768 <data_size+0x1080>
    1568:	751c0013 	xvilvh.b	$xr19,$xr0,$xr0
    156c:	05000105 	0x05000105
    1570:	00134402 	maskeqz	$r2,$r0,$r17
    1574:	0101001c 	fadd.d	$f28,$f0,$f0
    1578:	000002e6 	0x000002e6
    157c:	00330004 	0x00330004
    1580:	01010000 	fadd.d	$f0,$f0,$f0
    1584:	0df2f601 	0x0df2f601
    1588:	01010100 	fadd.d	$f0,$f8,$f0
    158c:	00000001 	0x00000001
    1590:	01000001 	0x01000001
    1594:	692f2e2e 	bltu	$r17,$r14,77612(0x12f2c) # 144c0 <data_size+0x13dd8>
    1598:	756c636e 	0x756c636e
    159c:	00006564 	rdtimeh.w	$r4,$r11
    15a0:	656d6974 	bge	$r11,$r20,93544(0x16d68) # 18308 <data_size+0x17c20>
    15a4:	0000632e 	rdtimel.w	$r14,$r25
    15a8:	69740000 	bltu	$r0,$r0,95232(0x17400) # 189a8 <data_size+0x182c0>
    15ac:	682e656d 	bltu	$r11,$r13,11876(0x2e64) # 4410 <data_size+0x3d28>
    15b0:	00000100 	0x00000100
    15b4:	02050000 	slti	$r0,$r0,320(0x140)
    15b8:	1c001344 	pcaddu12i	$r4,154(0x9a)
    15bc:	00010528 	0x00010528
    15c0:	13440205 	addu16i.d	$r5,$r16,-12032(0xd100)
    15c4:	05181c00 	0x05181c00
    15c8:	02050005 	slti	$r5,$r0,320(0x140)
    15cc:	1c001344 	pcaddu12i	$r4,154(0x9a)
    15d0:	05017303 	0x05017303
    15d4:	02050005 	slti	$r5,$r0,320(0x140)
    15d8:	1c001344 	pcaddu12i	$r4,154(0x9a)
    15dc:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    15e0:	13440205 	addu16i.d	$r5,$r16,-12032(0xd100)
    15e4:	22061c00 	ll.d	$r0,$r0,1564(0x61c)
    15e8:	05000105 	0x05000105
    15ec:	00134c02 	maskeqz	$r2,$r0,$r19
    15f0:	0175031c 	0x0175031c
    15f4:	05000505 	0x05000505
    15f8:	00135402 	maskeqz	$r2,$r0,$r21
    15fc:	051e061c 	0x051e061c
    1600:	02050005 	slti	$r5,$r0,320(0x140)
    1604:	1c001354 	pcaddu12i	$r20,154(0x9a)
    1608:	01051d06 	fmul.d	$f6,$f8,$f7
    160c:	64020500 	bge	$r8,$r0,516(0x204) # 1810 <data_size+0x1128>
    1610:	061c0013 	cacop	0x13,$r0,1792(0x700)
    1614:	0001051a 	0x0001051a
    1618:	13640205 	addu16i.d	$r5,$r16,-9984(0xd900)
    161c:	05181c00 	0x05181c00
    1620:	02050005 	slti	$r5,$r0,320(0x140)
    1624:	1c001364 	pcaddu12i	$r4,155(0x9b)
    1628:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    162c:	13680205 	addu16i.d	$r5,$r16,-9728(0xda00)
    1630:	051b1c00 	0x051b1c00
    1634:	02050005 	slti	$r5,$r0,320(0x140)
    1638:	1c001368 	pcaddu12i	$r8,155(0x9b)
    163c:	01051806 	fmul.d	$f6,$f0,$f6
    1640:	6c020500 	bgeu	$r8,$r0,516(0x204) # 1844 <data_size+0x115c>
    1644:	061c0013 	cacop	0x13,$r0,1792(0x700)
    1648:	0001051a 	0x0001051a
    164c:	136c0205 	addu16i.d	$r5,$r16,-9472(0xdb00)
    1650:	05181c00 	0x05181c00
    1654:	02050005 	slti	$r5,$r0,320(0x140)
    1658:	1c00136c 	pcaddu12i	$r12,155(0x9b)
    165c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1660:	136c0205 	addu16i.d	$r5,$r16,-9472(0xdb00)
    1664:	63031c00 	blt	$r0,$r0,-64740(0x3031c) # ffff1980 <_stack+0xe3fdfe88>
    1668:	00050501 	alsl.w	$r1,$r8,$r1,0x3
    166c:	136c0205 	addu16i.d	$r5,$r16,-9472(0xdb00)
    1670:	05181c00 	0x05181c00
    1674:	02050005 	slti	$r5,$r0,320(0x140)
    1678:	1c00136c 	pcaddu12i	$r12,155(0x9b)
    167c:	01053106 	fmul.d	$f6,$f8,$f12
    1680:	74020500 	xvsle.b	$xr0,$xr8,$xr1
    1684:	031c0013 	lu52i.d	$r19,$r0,1792(0x700)
    1688:	05050166 	0x05050166
    168c:	7c020500 	0x7c020500
    1690:	061c0013 	cacop	0x13,$r0,1792(0x700)
    1694:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
    1698:	137c0205 	addu16i.d	$r5,$r16,-8448(0xdf00)
    169c:	052d1c00 	0x052d1c00
    16a0:	02050005 	slti	$r5,$r0,320(0x140)
    16a4:	1c00137c 	pcaddu12i	$r28,155(0x9b)
    16a8:	15050106 	lu12i.w	$r6,-514040(0x82808)
    16ac:	84020500 	0x84020500
    16b0:	181c0013 	pcaddi	$r19,57344(0xe000)
    16b4:	05001605 	0x05001605
    16b8:	00138802 	masknez	$r2,$r0,$r2
    16bc:	3605161c 	0x3605161c
    16c0:	8c020500 	0x8c020500
    16c4:	181c0013 	pcaddi	$r19,57344(0xe000)
    16c8:	05001605 	0x05001605
    16cc:	00139802 	masknez	$r2,$r0,$r6
    16d0:	2805011c 	ld.b	$r28,$r8,320(0x140)
    16d4:	a4020500 	0xa4020500
    16d8:	181c0013 	pcaddi	$r19,57344(0xe000)
    16dc:	05002705 	0x05002705
    16e0:	0013b802 	masknez	$r2,$r0,$r14
    16e4:	3605011c 	0x3605011c
    16e8:	c4020500 	0xc4020500
    16ec:	161c0013 	lu32i.d	$r19,57344(0xe000)
    16f0:	05001205 	0x05001205
    16f4:	0013c802 	masknez	$r2,$r0,$r18
    16f8:	1205181c 	addu16i.d	$r28,$r0,-32442(0x8146)
    16fc:	cc020500 	0xcc020500
    1700:	181c0013 	pcaddi	$r19,57344(0xe000)
    1704:	05001205 	0x05001205
    1708:	0013d002 	masknez	$r2,$r0,$r20
    170c:	01051a1c 	fmul.d	$f28,$f16,$f6
    1710:	d8020500 	0xd8020500
    1714:	111c0013 	addu16i.d	$r19,$r0,18176(0x4700)
    1718:	05003605 	0x05003605
    171c:	0013e402 	masknez	$r2,$r0,$r25
    1720:	1205011c 	addu16i.d	$r28,$r8,-32448(0x8140)
    1724:	e8020500 	0xe8020500
    1728:	061c0013 	cacop	0x13,$r0,1792(0x700)
    172c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1730:	13e80205 	addu16i.d	$r5,$r16,-1536(0xfa00)
    1734:	05181c00 	0x05181c00
    1738:	02050005 	slti	$r5,$r0,320(0x140)
    173c:	1c0013e8 	pcaddu12i	$r8,159(0x9f)
    1740:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1744:	13e80205 	addu16i.d	$r5,$r16,-1536(0xfa00)
    1748:	05191c00 	0x05191c00
    174c:	02050005 	slti	$r5,$r0,320(0x140)
    1750:	1c0013e8 	pcaddu12i	$r8,159(0x9f)
    1754:	01051806 	fmul.d	$f6,$f0,$f6
    1758:	f4020500 	0xf4020500
    175c:	061c0013 	cacop	0x13,$r0,1792(0x700)
    1760:	00010521 	0x00010521
    1764:	13f40205 	addu16i.d	$r5,$r16,-768(0xfd00)
    1768:	05181c00 	0x05181c00
    176c:	02050005 	slti	$r5,$r0,320(0x140)
    1770:	1c0013f4 	pcaddu12i	$r20,159(0x9f)
    1774:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1778:	13f40205 	addu16i.d	$r5,$r16,-768(0xfd00)
    177c:	50031c00 	b	796(0x31c) # 1a98 <data_size+0x13b0>
    1780:	00050501 	alsl.w	$r1,$r8,$r1,0x3
    1784:	13f40205 	addu16i.d	$r5,$r16,-768(0xfd00)
    1788:	05181c00 	0x05181c00
    178c:	02050005 	slti	$r5,$r0,320(0x140)
    1790:	1c0013f4 	pcaddu12i	$r20,159(0x9f)
    1794:	01054406 	fmul.d	$f6,$f0,$f17
    1798:	fc020500 	0xfc020500
    179c:	031c0013 	lu52i.d	$r19,$r0,1792(0x700)
    17a0:	05050153 	0x05050153
    17a4:	04020500 	csrxchg	$r0,$r8,0x81
    17a8:	061c0014 	cacop	0x14,$r0,1792(0x700)
    17ac:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
    17b0:	14040205 	lu12i.w	$r5,8208(0x2010)
    17b4:	05401c00 	0x05401c00
    17b8:	02050005 	slti	$r5,$r0,320(0x140)
    17bc:	1c001404 	pcaddu12i	$r4,160(0xa0)
    17c0:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    17c4:	14040205 	lu12i.w	$r5,8208(0x2010)
    17c8:	16061c00 	lu32i.d	$r0,12512(0x30e0)
    17cc:	05000605 	0x05000605
    17d0:	00140802 	nor	$r2,$r0,$r2
    17d4:	0105191c 	fmul.d	$f28,$f8,$f6
    17d8:	18020500 	pcaddi	$r0,4136(0x1028)
    17dc:	061c0014 	cacop	0x14,$r0,1792(0x700)
    17e0:	0001051b 	0x0001051b
    17e4:	14180205 	lu12i.w	$r5,49168(0xc010)
    17e8:	05181c00 	0x05181c00
    17ec:	02050005 	slti	$r5,$r0,320(0x140)
    17f0:	1c001418 	pcaddu12i	$r24,160(0xa0)
    17f4:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    17f8:	14180205 	lu12i.w	$r5,49168(0xc010)
    17fc:	47031c00 	bnez	$r0,197404(0x3031c) # 31b18 <data_size+0x31430>
    1800:	00050501 	alsl.w	$r1,$r8,$r1,0x3
    1804:	14180205 	lu12i.w	$r5,49168(0xc010)
    1808:	05181c00 	0x05181c00
    180c:	02050005 	slti	$r5,$r0,320(0x140)
    1810:	1c001418 	pcaddu12i	$r24,160(0xa0)
    1814:	01054d06 	fmul.d	$f6,$f8,$f19
    1818:	20020500 	ll.w	$r0,$r8,516(0x204)
    181c:	031c0014 	lu52i.d	$r20,$r0,1792(0x700)
    1820:	0505014a 	0x0505014a
    1824:	28020500 	ld.b	$r0,$r8,129(0x81)
    1828:	061c0014 	cacop	0x14,$r0,1792(0x700)
    182c:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
    1830:	14280205 	lu12i.w	$r5,81936(0x14010)
    1834:	05491c00 	0x05491c00
    1838:	02050005 	slti	$r5,$r0,320(0x140)
    183c:	1c001428 	pcaddu12i	$r8,161(0xa1)
    1840:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1844:	14280205 	lu12i.w	$r5,81936(0x14010)
    1848:	16061c00 	lu32i.d	$r0,12512(0x30e0)
    184c:	05000605 	0x05000605
    1850:	00142c02 	nor	$r2,$r0,$r11
    1854:	0105191c 	fmul.d	$f28,$f8,$f6
    1858:	48020500 	bcnez	$fcc0,516(0x204) # 1a5c <data_size+0x1374>
    185c:	001c0014 	mul.w	$r20,$r0,$r0
    1860:	Address 0x0000000000001860 is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	6c727473 	bgeu	$r3,$r19,29300(0x7274) # 7274 <data_size+0x6b8c>
   4:	73006e65 	0x73006e65
   8:	61657274 	blt	$r19,$r20,91504(0x16570) # 16578 <data_size+0x15e90>
   c:	7570006d 	0x7570006d
  10:	61686374 	blt	$r27,$r20,92256(0x16860) # 16870 <data_size+0x16188>
  14:	75700072 	0x75700072
  18:	72747374 	0x72747374
  1c:	00676e69 	bstrins.w	$r9,$r19,0x7,0x1b
  20:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe6990 <_stack+0xe3fd4e98>
  24:	73616274 	vssrani.w.d	$vr20,$vr19,0x18
  28:	67740065 	bge	$r3,$r5,-35840(0x37400) # ffff7428 <_stack+0xe3fe5930>
  2c:	75705f74 	0x75705f74
  30:	61686374 	blt	$r27,$r20,92256(0x16860) # 16890 <data_size+0x161a8>
  34:	75700072 	0x75700072
  38:	61686374 	blt	$r27,$r20,92256(0x16860) # 16898 <data_size+0x161b0>
  3c:	75700072 	0x75700072
  40:	61686374 	blt	$r27,$r20,92256(0x16860) # 168a0 <data_size+0x161b8>
  44:	Address 0x0000000000000044 is out of bounds.


Disassembly of section .debug_ranges:

00000000 <.debug_ranges>:
   0:	00000064 	0x00000064
   4:	0000006c 	0x0000006c
   8:	00000084 	0x00000084
   c:	000000a0 	0x000000a0
	...
  18:	000000a8 	0x000000a8
  1c:	000000ac 	0x000000ac
  20:	000000f4 	0x000000f4
  24:	0000022c 	0x0000022c
	...
  38:	00000008 	0x00000008
  3c:	00000018 	0x00000018
	...
  48:	00000020 	0x00000020
  4c:	00000030 	0x00000030
  50:	00000038 	0x00000038
  54:	00000050 	0x00000050
	...
  60:	1c0010d4 	pcaddu12i	$r20,134(0x86)
  64:	1c001344 	pcaddu12i	$r4,154(0x9a)
	...
  78:	00000008 	0x00000008
  7c:	00000010 	0x00000010
	...
  88:	00000028 	0x00000028
  8c:	00000028 	0x00000028
  90:	00000030 	0x00000030
  94:	00000038 	0x00000038
	...
  a0:	000000b0 	0x000000b0
  a4:	000000b0 	0x000000b0
  a8:	000000b8 	0x000000b8
  ac:	000000c0 	0x000000c0
	...
  b8:	000000d4 	0x000000d4
  bc:	000000d4 	0x000000d4
  c0:	000000dc 	0x000000dc
  c4:	000000e4 	0x000000e4
	...
