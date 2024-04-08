
obj/bitcount/main.elf:     file format elf32-loongarch
obj/bitcount/main.elf


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
1c00007c:	1c000023 	pcaddu12i	$r3,1(0x1)
1c000080:	28947063 	ld.w	$r3,$r3,1308(0x51c)
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
1c00038c:	54001400 	bl	20(0x14) # 1c0003a0 <shell1>
1c000390:	03400000 	andi	$r0,$r0,0x0

1c000394 <go_finish>:
go_finish():
1c000394:	53fd6fff 	b	-660(0xffffd6c) # 1c000100 <test_finish>
	...

1c0003a0 <shell1>:
shell1():
1c0003a0:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0003a4:	29807061 	st.w	$r1,$r3,28(0x1c)
1c0003a8:	157f5fcc 	lu12i.w	$r12,-263426(0xbfafe)
1c0003ac:	2980307a 	st.w	$r26,$r3,12(0xc)
1c0003b0:	2980207b 	st.w	$r27,$r3,8(0x8)
1c0003b4:	29806077 	st.w	$r23,$r3,24(0x18)
1c0003b8:	29805078 	st.w	$r24,$r3,20(0x14)
1c0003bc:	29804079 	st.w	$r25,$r3,16(0x10)
1c0003c0:	29800180 	st.w	$r0,$r12,0
1c0003c4:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0003c8:	02b64084 	addi.w	$r4,$r4,-624(0xd90)
1c0003cc:	540b7000 	bl	2928(0xb70) # 1c000f3c <puts>
1c0003d0:	540c8000 	bl	3200(0xc80) # 1c001050 <get_count>
1c0003d4:	0015009a 	move	$r26,$r4
1c0003d8:	540c9800 	bl	3224(0xc98) # 1c001070 <get_count_my>
1c0003dc:	0015009b 	move	$r27,$r4
1c0003e0:	157f5fe4 	lu12i.w	$r4,-263425(0xbfaff)
1c0003e4:	03bc8085 	ori	$r5,$r4,0xf20
1c0003e8:	288000a6 	ld.w	$r6,$r5,0
1c0003ec:	5c011cc0 	bne	$r6,$r0,284(0x11c) # 1c000508 <shell1+0x168>
1c0003f0:	02802817 	addi.w	$r23,$r0,10(0xa)
1c0003f4:	00150018 	move	$r24,$r0
1c0003f8:	02819005 	addi.w	$r5,$r0,100(0x64)
1c0003fc:	02800404 	addi.w	$r4,$r0,1(0x1)
1c000400:	54021000 	bl	528(0x210) # 1c000610 <bitcnts>
1c000404:	03ccac87 	xori	$r7,$r4,0x32b
1c000408:	00129c08 	sltu	$r8,$r0,$r7
1c00040c:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000410:	00150099 	move	$r25,$r4
1c000414:	00102318 	add.w	$r24,$r24,$r8
1c000418:	5fffe2e0 	bne	$r23,$r0,-32(0x3ffe0) # 1c0003f8 <shell1+0x58>
1c00041c:	540c5400 	bl	3156(0xc54) # 1c001070 <get_count_my>
1c000420:	00150097 	move	$r23,$r4
1c000424:	540c2c00 	bl	3116(0xc2c) # 1c001050 <get_count>
1c000428:	0011689a 	sub.w	$r26,$r4,$r26
1c00042c:	00116efb 	sub.w	$r27,$r23,$r27
1c000430:	5800a300 	beq	$r24,$r0,160(0xa0) # 1c0004d0 <shell1+0x130>
1c000434:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000438:	02b52084 	addi.w	$r4,$r4,-696(0xd48)
1c00043c:	54081400 	bl	2068(0x814) # 1c000c50 <printf>
1c000440:	157f5fea 	lu12i.w	$r10,-263425(0xbfaff)
1c000444:	0381014e 	ori	$r14,$r10,0x40
1c000448:	0280040f 	addi.w	$r15,$r0,1(0x1)
1c00044c:	298001cf 	st.w	$r15,$r14,0
1c000450:	0380c14d 	ori	$r13,$r10,0x30
1c000454:	02800810 	addi.w	$r16,$r0,2(0x2)
1c000458:	0380814b 	ori	$r11,$r10,0x20
1c00045c:	298001b0 	st.w	$r16,$r13,0
1c000460:	29800160 	st.w	$r0,$r11,0
1c000464:	00150325 	move	$r5,$r25
1c000468:	1c000024 	pcaddu12i	$r4,1(0x1)
1c00046c:	02b4a084 	addi.w	$r4,$r4,-728(0xd28)
1c000470:	5407e000 	bl	2016(0x7e0) # 1c000c50 <printf>
1c000474:	157f5fe6 	lu12i.w	$r6,-263425(0xbfaff)
1c000478:	038140d9 	ori	$r25,$r6,0x50
1c00047c:	2980033b 	st.w	$r27,$r25,0
1c000480:	157f5f07 	lu12i.w	$r7,-263432(0xbfaf8)
1c000484:	298000fb 	st.w	$r27,$r7,0
1c000488:	038040e8 	ori	$r8,$r7,0x10
1c00048c:	00150345 	move	$r5,$r26
1c000490:	2980011a 	st.w	$r26,$r8,0
1c000494:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000498:	02b42084 	addi.w	$r4,$r4,-760(0xd08)
1c00049c:	5407b400 	bl	1972(0x7b4) # 1c000c50 <printf>
1c0004a0:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c0004a4:	28806077 	ld.w	$r23,$r3,24(0x18)
1c0004a8:	28805078 	ld.w	$r24,$r3,20(0x14)
1c0004ac:	28804079 	ld.w	$r25,$r3,16(0x10)
1c0004b0:	2880307a 	ld.w	$r26,$r3,12(0xc)
1c0004b4:	00150365 	move	$r5,$r27
1c0004b8:	2880207b 	ld.w	$r27,$r3,8(0x8)
1c0004bc:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0004c0:	02b43084 	addi.w	$r4,$r4,-756(0xd0c)
1c0004c4:	02808063 	addi.w	$r3,$r3,32(0x20)
1c0004c8:	50078800 	b	1928(0x788) # 1c000c50 <printf>
1c0004cc:	03400000 	andi	$r0,$r0,0x0
1c0004d0:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0004d4:	02b27084 	addi.w	$r4,$r4,-868(0xc9c)
1c0004d8:	54077800 	bl	1912(0x778) # 1c000c50 <printf>
1c0004dc:	157f5ff1 	lu12i.w	$r17,-263425(0xbfaff)
1c0004e0:	02800412 	addi.w	$r18,$r0,1(0x1)
1c0004e4:	03810233 	ori	$r19,$r17,0x40
1c0004e8:	29800272 	st.w	$r18,$r19,0
1c0004ec:	0380c234 	ori	$r20,$r17,0x30
1c0004f0:	140001e4 	lu12i.w	$r4,15(0xf)
1c0004f4:	0380822c 	ori	$r12,$r17,0x20
1c0004f8:	29800292 	st.w	$r18,$r20,0
1c0004fc:	03bffc85 	ori	$r5,$r4,0xfff
1c000500:	29800185 	st.w	$r5,$r12,0
1c000504:	53ff63ff 	b	-160(0xfffff60) # 1c000464 <shell1+0xc4>
1c000508:	02819005 	addi.w	$r5,$r0,100(0x64)
1c00050c:	02800404 	addi.w	$r4,$r0,1(0x1)
1c000510:	54010000 	bl	256(0x100) # 1c000610 <bitcnts>
1c000514:	03ccac89 	xori	$r9,$r4,0x32b
1c000518:	0012a418 	sltu	$r24,$r0,$r9
1c00051c:	00150099 	move	$r25,$r4
1c000520:	540b5000 	bl	2896(0xb50) # 1c001070 <get_count_my>
1c000524:	00150097 	move	$r23,$r4
1c000528:	540b2800 	bl	2856(0xb28) # 1c001050 <get_count>
1c00052c:	0011689a 	sub.w	$r26,$r4,$r26
1c000530:	00116efb 	sub.w	$r27,$r23,$r27
1c000534:	5fff0300 	bne	$r24,$r0,-256(0x3ff00) # 1c000434 <shell1+0x94>
1c000538:	53ff9bff 	b	-104(0xfffff98) # 1c0004d0 <shell1+0x130>
1c00053c:	03400000 	andi	$r0,$r0,0x0

1c000540 <bit_shifter>:
bit_shifter():
1c000540:	5800ac80 	beq	$r4,$r0,172(0xac) # 1c0005ec <bit_shifter+0xac>
1c000544:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000548:	29803077 	st.w	$r23,$r3,12(0xc)
1c00054c:	0280800e 	addi.w	$r14,$r0,32(0x20)
1c000550:	0015000c 	move	$r12,$r0
1c000554:	0340048d 	andi	$r13,$r4,0x1
1c000558:	0048848f 	srai.w	$r15,$r4,0x1
1c00055c:	00488890 	srai.w	$r16,$r4,0x2
1c000560:	00488c91 	srai.w	$r17,$r4,0x3
1c000564:	00489092 	srai.w	$r18,$r4,0x4
1c000568:	00489493 	srai.w	$r19,$r4,0x5
1c00056c:	00489894 	srai.w	$r20,$r4,0x6
1c000570:	00489c85 	srai.w	$r5,$r4,0x7
1c000574:	034005e6 	andi	$r6,$r15,0x1
1c000578:	03400607 	andi	$r7,$r16,0x1
1c00057c:	03400628 	andi	$r8,$r17,0x1
1c000580:	03400649 	andi	$r9,$r18,0x1
1c000584:	0340066a 	andi	$r10,$r19,0x1
1c000588:	0340068b 	andi	$r11,$r20,0x1
1c00058c:	034004b7 	andi	$r23,$r5,0x1
1c000590:	02bfe1ce 	addi.w	$r14,$r14,-8(0xff8)
1c000594:	0010358c 	add.w	$r12,$r12,$r13
1c000598:	0048a084 	srai.w	$r4,$r4,0x8
1c00059c:	580041e0 	beq	$r15,$r0,64(0x40) # 1c0005dc <bit_shifter+0x9c>
1c0005a0:	0010198c 	add.w	$r12,$r12,$r6
1c0005a4:	58003a00 	beq	$r16,$r0,56(0x38) # 1c0005dc <bit_shifter+0x9c>
1c0005a8:	00101d8c 	add.w	$r12,$r12,$r7
1c0005ac:	58003220 	beq	$r17,$r0,48(0x30) # 1c0005dc <bit_shifter+0x9c>
1c0005b0:	0010218c 	add.w	$r12,$r12,$r8
1c0005b4:	58002a40 	beq	$r18,$r0,40(0x28) # 1c0005dc <bit_shifter+0x9c>
1c0005b8:	0010258c 	add.w	$r12,$r12,$r9
1c0005bc:	58002260 	beq	$r19,$r0,32(0x20) # 1c0005dc <bit_shifter+0x9c>
1c0005c0:	0010298c 	add.w	$r12,$r12,$r10
1c0005c4:	58001a80 	beq	$r20,$r0,24(0x18) # 1c0005dc <bit_shifter+0x9c>
1c0005c8:	00102d8c 	add.w	$r12,$r12,$r11
1c0005cc:	580010a0 	beq	$r5,$r0,16(0x10) # 1c0005dc <bit_shifter+0x9c>
1c0005d0:	00105d8c 	add.w	$r12,$r12,$r23
1c0005d4:	58000880 	beq	$r4,$r0,8(0x8) # 1c0005dc <bit_shifter+0x9c>
1c0005d8:	5fff7dc0 	bne	$r14,$r0,-132(0x3ff7c) # 1c000554 <bit_shifter+0x14>
1c0005dc:	28803077 	ld.w	$r23,$r3,12(0xc)
1c0005e0:	00150184 	move	$r4,$r12
1c0005e4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0005e8:	4c000020 	jirl	$r0,$r1,0
1c0005ec:	00150004 	move	$r4,$r0
1c0005f0:	4c000020 	jirl	$r0,$r1,0
1c0005f4:	03400000 	andi	$r0,$r0,0x0
1c0005f8:	03400000 	andi	$r0,$r0,0x0
1c0005fc:	03400000 	andi	$r0,$r0,0x0

1c000600 <myrand>:
myrand():
1c000600:	140000a4 	lu12i.w	$r4,5(0x5)
1c000604:	0399c084 	ori	$r4,$r4,0x670
1c000608:	4c000020 	jirl	$r0,$r1,0
1c00060c:	03400000 	andi	$r0,$r0,0x0

1c000610 <bitcnts>:
bitcnts():
1c000610:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c000614:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000618:	02af8084 	addi.w	$r4,$r4,-1056(0xbe0)
1c00061c:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c000620:	2980707a 	st.w	$r26,$r3,28(0x1c)
1c000624:	2980607b 	st.w	$r27,$r3,24(0x18)
1c000628:	2980507c 	st.w	$r28,$r3,20(0x14)
1c00062c:	2980407d 	st.w	$r29,$r3,16(0x10)
1c000630:	001500bc 	move	$r28,$r5
1c000634:	2980307e 	st.w	$r30,$r3,12(0xc)
1c000638:	2980a077 	st.w	$r23,$r3,40(0x28)
1c00063c:	29809078 	st.w	$r24,$r3,36(0x24)
1c000640:	29808079 	st.w	$r25,$r3,32(0x20)
1c000644:	5408f800 	bl	2296(0x8f8) # 1c000f3c <puts>
1c000648:	540ab800 	bl	2744(0xab8) # 1c001100 <get_ns>
1c00064c:	0280341b 	addi.w	$r27,$r0,13(0xd)
1c000650:	001c6f84 	mul.w	$r4,$r28,$r27
1c000654:	140000ac 	lu12i.w	$r12,5(0x5)
1c000658:	1c00003a 	pcaddu12i	$r26,1(0x1)
1c00065c:	02af035a 	addi.w	$r26,$r26,-1088(0xbc0)
1c000660:	0399c185 	ori	$r5,$r12,0x670
1c000664:	0280735d 	addi.w	$r29,$r26,28(0x1c)
1c000668:	140000be 	lu12i.w	$r30,5(0x5)
1c00066c:	0010149b 	add.w	$r27,$r4,$r5
1c000670:	00150018 	move	$r24,$r0
1c000674:	64013c1c 	bge	$r0,$r28,316(0x13c) # 1c0007b0 <bitcnts+0x1a0>
1c000678:	0399c3d7 	ori	$r23,$r30,0x670
1c00067c:	00115f61 	sub.w	$r1,$r27,$r23
1c000680:	1589d88d 	lu12i.w	$r13,-241980(0xc4ec4)
1c000684:	02bfcc26 	addi.w	$r6,$r1,-13(0xff3)
1c000688:	03bb15a7 	ori	$r7,$r13,0xec5
1c00068c:	001c1cc8 	mul.w	$r8,$r6,$r7
1c000690:	28800359 	ld.w	$r25,$r26,0
1c000694:	00150018 	move	$r24,$r0
1c000698:	02800509 	addi.w	$r9,$r8,1(0x1)
1c00069c:	03401d2a 	andi	$r10,$r9,0x7
1c0006a0:	5800a940 	beq	$r10,$r0,168(0xa8) # 1c000748 <bitcnts+0x138>
1c0006a4:	0280040b 	addi.w	$r11,$r0,1(0x1)
1c0006a8:	58008d4b 	beq	$r10,$r11,140(0x8c) # 1c000734 <bitcnts+0x124>
1c0006ac:	0280080e 	addi.w	$r14,$r0,2(0x2)
1c0006b0:	5800754e 	beq	$r10,$r14,116(0x74) # 1c000724 <bitcnts+0x114>
1c0006b4:	02800c0f 	addi.w	$r15,$r0,3(0x3)
1c0006b8:	58005d4f 	beq	$r10,$r15,92(0x5c) # 1c000714 <bitcnts+0x104>
1c0006bc:	02801010 	addi.w	$r16,$r0,4(0x4)
1c0006c0:	58004550 	beq	$r10,$r16,68(0x44) # 1c000704 <bitcnts+0xf4>
1c0006c4:	02801411 	addi.w	$r17,$r0,5(0x5)
1c0006c8:	58002d51 	beq	$r10,$r17,44(0x2c) # 1c0006f4 <bitcnts+0xe4>
1c0006cc:	02801812 	addi.w	$r18,$r0,6(0x6)
1c0006d0:	58001552 	beq	$r10,$r18,20(0x14) # 1c0006e4 <bitcnts+0xd4>
1c0006d4:	001502e4 	move	$r4,$r23
1c0006d8:	4c000321 	jirl	$r1,$r25,0
1c0006dc:	00150098 	move	$r24,$r4
1c0006e0:	028036f7 	addi.w	$r23,$r23,13(0xd)
1c0006e4:	001502e4 	move	$r4,$r23
1c0006e8:	4c000321 	jirl	$r1,$r25,0
1c0006ec:	00101318 	add.w	$r24,$r24,$r4
1c0006f0:	028036f7 	addi.w	$r23,$r23,13(0xd)
1c0006f4:	001502e4 	move	$r4,$r23
1c0006f8:	4c000321 	jirl	$r1,$r25,0
1c0006fc:	00101318 	add.w	$r24,$r24,$r4
1c000700:	028036f7 	addi.w	$r23,$r23,13(0xd)
1c000704:	001502e4 	move	$r4,$r23
1c000708:	4c000321 	jirl	$r1,$r25,0
1c00070c:	00101318 	add.w	$r24,$r24,$r4
1c000710:	028036f7 	addi.w	$r23,$r23,13(0xd)
1c000714:	001502e4 	move	$r4,$r23
1c000718:	4c000321 	jirl	$r1,$r25,0
1c00071c:	00101318 	add.w	$r24,$r24,$r4
1c000720:	028036f7 	addi.w	$r23,$r23,13(0xd)
1c000724:	001502e4 	move	$r4,$r23
1c000728:	4c000321 	jirl	$r1,$r25,0
1c00072c:	00101318 	add.w	$r24,$r24,$r4
1c000730:	028036f7 	addi.w	$r23,$r23,13(0xd)
1c000734:	001502e4 	move	$r4,$r23
1c000738:	4c000321 	jirl	$r1,$r25,0
1c00073c:	028036f7 	addi.w	$r23,$r23,13(0xd)
1c000740:	00101318 	add.w	$r24,$r24,$r4
1c000744:	58006f77 	beq	$r27,$r23,108(0x6c) # 1c0007b0 <bitcnts+0x1a0>
1c000748:	001502e4 	move	$r4,$r23
1c00074c:	4c000321 	jirl	$r1,$r25,0
1c000750:	00101318 	add.w	$r24,$r24,$r4
1c000754:	028036e4 	addi.w	$r4,$r23,13(0xd)
1c000758:	4c000321 	jirl	$r1,$r25,0
1c00075c:	00101318 	add.w	$r24,$r24,$r4
1c000760:	02806ae4 	addi.w	$r4,$r23,26(0x1a)
1c000764:	4c000321 	jirl	$r1,$r25,0
1c000768:	00101318 	add.w	$r24,$r24,$r4
1c00076c:	02809ee4 	addi.w	$r4,$r23,39(0x27)
1c000770:	4c000321 	jirl	$r1,$r25,0
1c000774:	00101318 	add.w	$r24,$r24,$r4
1c000778:	0280d2e4 	addi.w	$r4,$r23,52(0x34)
1c00077c:	4c000321 	jirl	$r1,$r25,0
1c000780:	00101318 	add.w	$r24,$r24,$r4
1c000784:	028106e4 	addi.w	$r4,$r23,65(0x41)
1c000788:	4c000321 	jirl	$r1,$r25,0
1c00078c:	00101318 	add.w	$r24,$r24,$r4
1c000790:	02813ae4 	addi.w	$r4,$r23,78(0x4e)
1c000794:	4c000321 	jirl	$r1,$r25,0
1c000798:	00101318 	add.w	$r24,$r24,$r4
1c00079c:	02816ee4 	addi.w	$r4,$r23,91(0x5b)
1c0007a0:	4c000321 	jirl	$r1,$r25,0
1c0007a4:	0281a2f7 	addi.w	$r23,$r23,104(0x68)
1c0007a8:	00101318 	add.w	$r24,$r24,$r4
1c0007ac:	5fff9f77 	bne	$r27,$r23,-100(0x3ff9c) # 1c000748 <bitcnts+0x138>
1c0007b0:	0280135a 	addi.w	$r26,$r26,4(0x4)
1c0007b4:	5ffebf5d 	bne	$r26,$r29,-324(0x3febc) # 1c000670 <bitcnts+0x60>
1c0007b8:	54094800 	bl	2376(0x948) # 1c001100 <get_ns>
1c0007bc:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c0007c0:	00150304 	move	$r4,$r24
1c0007c4:	2880a077 	ld.w	$r23,$r3,40(0x28)
1c0007c8:	28809078 	ld.w	$r24,$r3,36(0x24)
1c0007cc:	28808079 	ld.w	$r25,$r3,32(0x20)
1c0007d0:	2880707a 	ld.w	$r26,$r3,28(0x1c)
1c0007d4:	2880607b 	ld.w	$r27,$r3,24(0x18)
1c0007d8:	2880507c 	ld.w	$r28,$r3,20(0x14)
1c0007dc:	2880407d 	ld.w	$r29,$r3,16(0x10)
1c0007e0:	2880307e 	ld.w	$r30,$r3,12(0xc)
1c0007e4:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c0007e8:	4c000020 	jirl	$r0,$r1,0
1c0007ec:	03400000 	andi	$r0,$r0,0x0

1c0007f0 <bitcount>:
bitcount():
1c0007f0:	14aaaaad 	lu12i.w	$r13,349525(0x55555)
1c0007f4:	039555a5 	ori	$r5,$r13,0x555
1c0007f8:	0044848c 	srli.w	$r12,$r4,0x1
1c0007fc:	00149586 	and	$r6,$r12,$r5
1c000800:	00149484 	and	$r4,$r4,$r5
1c000804:	001010c7 	add.w	$r7,$r6,$r4
1c000808:	14666668 	lu12i.w	$r8,209715(0x33333)
1c00080c:	038ccd09 	ori	$r9,$r8,0x333
1c000810:	004488ea 	srli.w	$r10,$r7,0x2
1c000814:	0014a54b 	and	$r11,$r10,$r9
1c000818:	0014a4ee 	and	$r14,$r7,$r9
1c00081c:	0010396f 	add.w	$r15,$r11,$r14
1c000820:	141e1e10 	lu12i.w	$r16,61680(0xf0f0)
1c000824:	03bc3e11 	ori	$r17,$r16,0xf0f
1c000828:	004491f2 	srli.w	$r18,$r15,0x4
1c00082c:	0014c653 	and	$r19,$r18,$r17
1c000830:	0014c5f4 	and	$r20,$r15,$r17
1c000834:	00105265 	add.w	$r5,$r19,$r20
1c000838:	1401fe0d 	lu12i.w	$r13,4080(0xff0)
1c00083c:	0383fda6 	ori	$r6,$r13,0xff
1c000840:	0044a0ac 	srli.w	$r12,$r5,0x8
1c000844:	001498a4 	and	$r4,$r5,$r6
1c000848:	00149987 	and	$r7,$r12,$r6
1c00084c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000850:	001010e8 	add.w	$r8,$r7,$r4
1c000854:	29803068 	st.w	$r8,$r3,12(0xc)
1c000858:	2a403069 	ld.hu	$r9,$r3,12(0xc)
1c00085c:	0044c10a 	srli.w	$r10,$r8,0x10
1c000860:	00102544 	add.w	$r4,$r10,$r9
1c000864:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000868:	4c000020 	jirl	$r0,$r1,0
1c00086c:	03400000 	andi	$r0,$r0,0x0

1c000870 <ntbl_bitcount>:
ntbl_bitcount():
1c000870:	0044908c 	srli.w	$r12,$r4,0x4
1c000874:	1c00002d 	pcaddu12i	$r13,1(0x1)
1c000878:	02a701ad 	addi.w	$r13,$r13,-1600(0x9c0)
1c00087c:	03403d85 	andi	$r5,$r12,0xf
1c000880:	03403c90 	andi	$r16,$r4,0xf
1c000884:	0044a08f 	srli.w	$r15,$r4,0x8
1c000888:	001015a6 	add.w	$r6,$r13,$r5
1c00088c:	001041a7 	add.w	$r7,$r13,$r16
1c000890:	03403de8 	andi	$r8,$r15,0xf
1c000894:	0044b08e 	srli.w	$r14,$r4,0xc
1c000898:	280000c9 	ld.b	$r9,$r6,0
1c00089c:	280000f3 	ld.b	$r19,$r7,0
1c0008a0:	001021aa 	add.w	$r10,$r13,$r8
1c0008a4:	03403dcb 	andi	$r11,$r14,0xf
1c0008a8:	0044c091 	srli.w	$r17,$r4,0x10
1c0008ac:	00102db4 	add.w	$r20,$r13,$r11
1c0008b0:	28000152 	ld.b	$r18,$r10,0
1c0008b4:	03403e2c 	andi	$r12,$r17,0xf
1c0008b8:	0044d085 	srli.w	$r5,$r4,0x14
1c0008bc:	28000286 	ld.b	$r6,$r20,0
1c0008c0:	001031b0 	add.w	$r16,$r13,$r12
1c0008c4:	03403caf 	andi	$r15,$r5,0xf
1c0008c8:	0044e087 	srli.w	$r7,$r4,0x18
1c0008cc:	00104d28 	add.w	$r8,$r9,$r19
1c0008d0:	03403cee 	andi	$r14,$r7,0xf
1c0008d4:	28000209 	ld.b	$r9,$r16,0
1c0008d8:	00103db3 	add.w	$r19,$r13,$r15
1c0008dc:	001039b1 	add.w	$r17,$r13,$r14
1c0008e0:	0010490a 	add.w	$r10,$r8,$r18
1c0008e4:	2800026b 	ld.b	$r11,$r19,0
1c0008e8:	0044f084 	srli.w	$r4,$r4,0x1c
1c0008ec:	00101952 	add.w	$r18,$r10,$r6
1c0008f0:	001011ad 	add.w	$r13,$r13,$r4
1c0008f4:	28000234 	ld.b	$r20,$r17,0
1c0008f8:	0010264c 	add.w	$r12,$r18,$r9
1c0008fc:	280001a5 	ld.b	$r5,$r13,0
1c000900:	00102d86 	add.w	$r6,$r12,$r11
1c000904:	001050d0 	add.w	$r16,$r6,$r20
1c000908:	00101604 	add.w	$r4,$r16,$r5
1c00090c:	4c000020 	jirl	$r0,$r1,0

1c000910 <BW_btbl_bitcount>:
BW_btbl_bitcount():
1c000910:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000914:	0044a08e 	srli.w	$r14,$r4,0x8
1c000918:	2980306e 	st.w	$r14,$r3,12(0xc)
1c00091c:	2a003065 	ld.bu	$r5,$r3,12(0xc)
1c000920:	0044c08f 	srli.w	$r15,$r4,0x10
1c000924:	2980306f 	st.w	$r15,$r3,12(0xc)
1c000928:	1c00002c 	pcaddu12i	$r12,1(0x1)
1c00092c:	02a4318c 	addi.w	$r12,$r12,-1780(0x90c)
1c000930:	2a003066 	ld.bu	$r6,$r3,12(0xc)
1c000934:	0343fc8d 	andi	$r13,$r4,0xff
1c000938:	00103587 	add.w	$r7,$r12,$r13
1c00093c:	0044e084 	srli.w	$r4,$r4,0x18
1c000940:	00101588 	add.w	$r8,$r12,$r5
1c000944:	280000e9 	ld.b	$r9,$r7,0
1c000948:	28000110 	ld.b	$r16,$r8,0
1c00094c:	0010118a 	add.w	$r10,$r12,$r4
1c000950:	2800014b 	ld.b	$r11,$r10,0
1c000954:	00101991 	add.w	$r17,$r12,$r6
1c000958:	28000232 	ld.b	$r18,$r17,0
1c00095c:	00104133 	add.w	$r19,$r9,$r16
1c000960:	00102e74 	add.w	$r20,$r19,$r11
1c000964:	00104a84 	add.w	$r4,$r20,$r18
1c000968:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00096c:	4c000020 	jirl	$r0,$r1,0

1c000970 <AR_btbl_bitcount>:
AR_btbl_bitcount():
1c000970:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000974:	0044a08e 	srli.w	$r14,$r4,0x8
1c000978:	2980306e 	st.w	$r14,$r3,12(0xc)
1c00097c:	0044c08d 	srli.w	$r13,$r4,0x10
1c000980:	2a003065 	ld.bu	$r5,$r3,12(0xc)
1c000984:	2980306d 	st.w	$r13,$r3,12(0xc)
1c000988:	2a003066 	ld.bu	$r6,$r3,12(0xc)
1c00098c:	1c00002c 	pcaddu12i	$r12,1(0x1)
1c000990:	02a2a18c 	addi.w	$r12,$r12,-1880(0x8a8)
1c000994:	0343fc8f 	andi	$r15,$r4,0xff
1c000998:	00103d87 	add.w	$r7,$r12,$r15
1c00099c:	00101588 	add.w	$r8,$r12,$r5
1c0009a0:	280000e9 	ld.b	$r9,$r7,0
1c0009a4:	2800010a 	ld.b	$r10,$r8,0
1c0009a8:	0044e084 	srli.w	$r4,$r4,0x18
1c0009ac:	0010198b 	add.w	$r11,$r12,$r6
1c0009b0:	28000170 	ld.b	$r16,$r11,0
1c0009b4:	00101191 	add.w	$r17,$r12,$r4
1c0009b8:	28000232 	ld.b	$r18,$r17,0
1c0009bc:	00102553 	add.w	$r19,$r10,$r9
1c0009c0:	00104e14 	add.w	$r20,$r16,$r19
1c0009c4:	00105244 	add.w	$r4,$r18,$r20
1c0009c8:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0009cc:	4c000020 	jirl	$r0,$r1,0

1c0009d0 <ntbl_bitcnt>:
ntbl_bitcnt():
1c0009d0:	03403c8d 	andi	$r13,$r4,0xf
1c0009d4:	1c00002e 	pcaddu12i	$r14,1(0x1)
1c0009d8:	02a581ce 	addi.w	$r14,$r14,-1696(0x960)
1c0009dc:	001035c5 	add.w	$r5,$r14,$r13
1c0009e0:	0048908c 	srai.w	$r12,$r4,0x4
1c0009e4:	280000a4 	ld.b	$r4,$r5,0
1c0009e8:	5800e980 	beq	$r12,$r0,232(0xe8) # 1c000ad0 <ntbl_bitcnt+0x100>
1c0009ec:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0009f0:	29803077 	st.w	$r23,$r3,12(0xc)
1c0009f4:	29802078 	st.w	$r24,$r3,8(0x8)
1c0009f8:	0015000d 	move	$r13,$r0
1c0009fc:	03403d8f 	andi	$r15,$r12,0xf
1c000a00:	00489187 	srai.w	$r7,$r12,0x4
1c000a04:	0048a188 	srai.w	$r8,$r12,0x8
1c000a08:	0048b189 	srai.w	$r9,$r12,0xc
1c000a0c:	0048c18a 	srai.w	$r10,$r12,0x10
1c000a10:	0048d18b 	srai.w	$r11,$r12,0x14
1c000a14:	0048e197 	srai.w	$r23,$r12,0x18
1c000a18:	0048f198 	srai.w	$r24,$r12,0x1c
1c000a1c:	03403cf0 	andi	$r16,$r7,0xf
1c000a20:	00103dcf 	add.w	$r15,$r14,$r15
1c000a24:	03403d11 	andi	$r17,$r8,0xf
1c000a28:	03403d32 	andi	$r18,$r9,0xf
1c000a2c:	03403d53 	andi	$r19,$r10,0xf
1c000a30:	03403d74 	andi	$r20,$r11,0xf
1c000a34:	03403ee5 	andi	$r5,$r23,0xf
1c000a38:	03403f06 	andi	$r6,$r24,0xf
1c000a3c:	001011ad 	add.w	$r13,$r13,$r4
1c000a40:	001041d0 	add.w	$r16,$r14,$r16
1c000a44:	001045d1 	add.w	$r17,$r14,$r17
1c000a48:	001049d2 	add.w	$r18,$r14,$r18
1c000a4c:	00104dd3 	add.w	$r19,$r14,$r19
1c000a50:	001051d4 	add.w	$r20,$r14,$r20
1c000a54:	001015c5 	add.w	$r5,$r14,$r5
1c000a58:	001019c6 	add.w	$r6,$r14,$r6
1c000a5c:	0048fd8c 	srai.w	$r12,$r12,0x1f
1c000a60:	280001e4 	ld.b	$r4,$r15,0
1c000a64:	580058e0 	beq	$r7,$r0,88(0x58) # 1c000abc <ntbl_bitcnt+0xec>
1c000a68:	001011ad 	add.w	$r13,$r13,$r4
1c000a6c:	28000204 	ld.b	$r4,$r16,0
1c000a70:	58004d00 	beq	$r8,$r0,76(0x4c) # 1c000abc <ntbl_bitcnt+0xec>
1c000a74:	001011ad 	add.w	$r13,$r13,$r4
1c000a78:	28000224 	ld.b	$r4,$r17,0
1c000a7c:	58004120 	beq	$r9,$r0,64(0x40) # 1c000abc <ntbl_bitcnt+0xec>
1c000a80:	001011ad 	add.w	$r13,$r13,$r4
1c000a84:	28000244 	ld.b	$r4,$r18,0
1c000a88:	58003540 	beq	$r10,$r0,52(0x34) # 1c000abc <ntbl_bitcnt+0xec>
1c000a8c:	001011ad 	add.w	$r13,$r13,$r4
1c000a90:	28000264 	ld.b	$r4,$r19,0
1c000a94:	58002960 	beq	$r11,$r0,40(0x28) # 1c000abc <ntbl_bitcnt+0xec>
1c000a98:	001011ad 	add.w	$r13,$r13,$r4
1c000a9c:	28000284 	ld.b	$r4,$r20,0
1c000aa0:	58001ee0 	beq	$r23,$r0,28(0x1c) # 1c000abc <ntbl_bitcnt+0xec>
1c000aa4:	001011ad 	add.w	$r13,$r13,$r4
1c000aa8:	280000a4 	ld.b	$r4,$r5,0
1c000aac:	58001300 	beq	$r24,$r0,16(0x10) # 1c000abc <ntbl_bitcnt+0xec>
1c000ab0:	001011ad 	add.w	$r13,$r13,$r4
1c000ab4:	280000c4 	ld.b	$r4,$r6,0
1c000ab8:	5fff4580 	bne	$r12,$r0,-188(0x3ff44) # 1c0009fc <ntbl_bitcnt+0x2c>
1c000abc:	28803077 	ld.w	$r23,$r3,12(0xc)
1c000ac0:	28802078 	ld.w	$r24,$r3,8(0x8)
1c000ac4:	00103484 	add.w	$r4,$r4,$r13
1c000ac8:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000acc:	4c000020 	jirl	$r0,$r1,0
1c000ad0:	4c000020 	jirl	$r0,$r1,0
1c000ad4:	03400000 	andi	$r0,$r0,0x0
1c000ad8:	03400000 	andi	$r0,$r0,0x0
1c000adc:	03400000 	andi	$r0,$r0,0x0

1c000ae0 <btbl_bitcnt>:
btbl_bitcnt():
1c000ae0:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000ae4:	29803064 	st.w	$r4,$r3,12(0xc)
1c000ae8:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c000aec:	1c00002e 	pcaddu12i	$r14,1(0x1)
1c000af0:	02a121ce 	addi.w	$r14,$r14,-1976(0x848)
1c000af4:	0048a08d 	srai.w	$r13,$r4,0x8
1c000af8:	001031c4 	add.w	$r4,$r14,$r12
1c000afc:	28000084 	ld.b	$r4,$r4,0
1c000b00:	58009da0 	beq	$r13,$r0,156(0x9c) # 1c000b9c <btbl_bitcnt+0xbc>
1c000b04:	0015000c 	move	$r12,$r0
1c000b08:	2980306d 	st.w	$r13,$r3,12(0xc)
1c000b0c:	0048a1b4 	srai.w	$r20,$r13,0x8
1c000b10:	2a00306f 	ld.bu	$r15,$r3,12(0xc)
1c000b14:	0048c1a5 	srai.w	$r5,$r13,0x10
1c000b18:	29803074 	st.w	$r20,$r3,12(0xc)
1c000b1c:	2a003070 	ld.bu	$r16,$r3,12(0xc)
1c000b20:	29803065 	st.w	$r5,$r3,12(0xc)
1c000b24:	2a003071 	ld.bu	$r17,$r3,12(0xc)
1c000b28:	0048e1a6 	srai.w	$r6,$r13,0x18
1c000b2c:	0048fda7 	srai.w	$r7,$r13,0x1f
1c000b30:	00103dc8 	add.w	$r8,$r14,$r15
1c000b34:	0343fcd2 	andi	$r18,$r6,0xff
1c000b38:	0343fcf3 	andi	$r19,$r7,0xff
1c000b3c:	0010118c 	add.w	$r12,$r12,$r4
1c000b40:	001041c9 	add.w	$r9,$r14,$r16
1c000b44:	001045ca 	add.w	$r10,$r14,$r17
1c000b48:	00104dcb 	add.w	$r11,$r14,$r19
1c000b4c:	001049cf 	add.w	$r15,$r14,$r18
1c000b50:	28000104 	ld.b	$r4,$r8,0
1c000b54:	58004680 	beq	$r20,$r0,68(0x44) # 1c000b98 <btbl_bitcnt+0xb8>
1c000b58:	0010118c 	add.w	$r12,$r12,$r4
1c000b5c:	0048fdad 	srai.w	$r13,$r13,0x1f
1c000b60:	28000124 	ld.b	$r4,$r9,0
1c000b64:	580034a0 	beq	$r5,$r0,52(0x34) # 1c000b98 <btbl_bitcnt+0xb8>
1c000b68:	0010118c 	add.w	$r12,$r12,$r4
1c000b6c:	28000144 	ld.b	$r4,$r10,0
1c000b70:	580028c0 	beq	$r6,$r0,40(0x28) # 1c000b98 <btbl_bitcnt+0xb8>
1c000b74:	0010118c 	add.w	$r12,$r12,$r4
1c000b78:	280001e4 	ld.b	$r4,$r15,0
1c000b7c:	58001ce0 	beq	$r7,$r0,28(0x1c) # 1c000b98 <btbl_bitcnt+0xb8>
1c000b80:	00101194 	add.w	$r20,$r12,$r4
1c000b84:	28000164 	ld.b	$r4,$r11,0
1c000b88:	00101290 	add.w	$r16,$r20,$r4
1c000b8c:	00101208 	add.w	$r8,$r16,$r4
1c000b90:	0010110c 	add.w	$r12,$r8,$r4
1c000b94:	53ff77ff 	b	-140(0xfffff74) # 1c000b08 <btbl_bitcnt+0x28>
1c000b98:	00103084 	add.w	$r4,$r4,$r12
1c000b9c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000ba0:	4c000020 	jirl	$r0,$r1,0
1c000ba4:	03400000 	andi	$r0,$r0,0x0
1c000ba8:	03400000 	andi	$r0,$r0,0x0
1c000bac:	03400000 	andi	$r0,$r0,0x0

1c000bb0 <bit_count>:
bit_count():
1c000bb0:	58009480 	beq	$r4,$r0,148(0x94) # 1c000c44 <bit_count+0x94>
1c000bb4:	0015008e 	move	$r14,$r4
1c000bb8:	00150004 	move	$r4,$r0
1c000bbc:	02bffdcd 	addi.w	$r13,$r14,-1(0xfff)
1c000bc0:	0014b5c5 	and	$r5,$r14,$r13
1c000bc4:	02bffcae 	addi.w	$r14,$r5,-1(0xfff)
1c000bc8:	0014b8a6 	and	$r6,$r5,$r14
1c000bcc:	02bffccf 	addi.w	$r15,$r6,-1(0xfff)
1c000bd0:	0014bcc7 	and	$r7,$r6,$r15
1c000bd4:	02bffcf0 	addi.w	$r16,$r7,-1(0xfff)
1c000bd8:	0014c0e8 	and	$r8,$r7,$r16
1c000bdc:	02bffd11 	addi.w	$r17,$r8,-1(0xfff)
1c000be0:	0014c509 	and	$r9,$r8,$r17
1c000be4:	02bffd32 	addi.w	$r18,$r9,-1(0xfff)
1c000be8:	0014c92a 	and	$r10,$r9,$r18
1c000bec:	02bffd53 	addi.w	$r19,$r10,-1(0xfff)
1c000bf0:	0014cd4b 	and	$r11,$r10,$r19
1c000bf4:	02800484 	addi.w	$r4,$r4,1(0x1)
1c000bf8:	02bffd6c 	addi.w	$r12,$r11,-1(0xfff)
1c000bfc:	0014b16e 	and	$r14,$r11,$r12
1c000c00:	00150094 	move	$r20,$r4
1c000c04:	580040a0 	beq	$r5,$r0,64(0x40) # 1c000c44 <bit_count+0x94>
1c000c08:	02800484 	addi.w	$r4,$r4,1(0x1)
1c000c0c:	580038c0 	beq	$r6,$r0,56(0x38) # 1c000c44 <bit_count+0x94>
1c000c10:	02800a84 	addi.w	$r4,$r20,2(0x2)
1c000c14:	580030e0 	beq	$r7,$r0,48(0x30) # 1c000c44 <bit_count+0x94>
1c000c18:	02800e84 	addi.w	$r4,$r20,3(0x3)
1c000c1c:	58002900 	beq	$r8,$r0,40(0x28) # 1c000c44 <bit_count+0x94>
1c000c20:	02801284 	addi.w	$r4,$r20,4(0x4)
1c000c24:	58002120 	beq	$r9,$r0,32(0x20) # 1c000c44 <bit_count+0x94>
1c000c28:	02801684 	addi.w	$r4,$r20,5(0x5)
1c000c2c:	58001940 	beq	$r10,$r0,24(0x18) # 1c000c44 <bit_count+0x94>
1c000c30:	02801a84 	addi.w	$r4,$r20,6(0x6)
1c000c34:	58001160 	beq	$r11,$r0,16(0x10) # 1c000c44 <bit_count+0x94>
1c000c38:	02801e84 	addi.w	$r4,$r20,7(0x7)
1c000c3c:	5fff81c0 	bne	$r14,$r0,-128(0x3ff80) # 1c000bbc <bit_count+0xc>
1c000c40:	4c000020 	jirl	$r0,$r1,0
1c000c44:	4c000020 	jirl	$r0,$r1,0
1c000c48:	03400000 	andi	$r0,$r0,0x0
1c000c4c:	03400000 	andi	$r0,$r0,0x0

1c000c50 <printf>:
printf():
/home/wwt/work/perf_func/lib/printf.c:2
1c000c50:	02be8063 	addi.w	$r3,$r3,-96(0xfa0)
1c000c54:	2980b07a 	st.w	$r26,$r3,44(0x2c)
1c000c58:	2980f061 	st.w	$r1,$r3,60(0x3c)
1c000c5c:	2980e077 	st.w	$r23,$r3,56(0x38)
1c000c60:	2980d078 	st.w	$r24,$r3,52(0x34)
1c000c64:	2980c079 	st.w	$r25,$r3,48(0x30)
1c000c68:	2980a07b 	st.w	$r27,$r3,40(0x28)
1c000c6c:	2980907c 	st.w	$r28,$r3,36(0x24)
/home/wwt/work/perf_func/lib/printf.c:10
1c000c70:	28000097 	ld.b	$r23,$r4,0
/home/wwt/work/perf_func/lib/printf.c:8
1c000c74:	0281107a 	addi.w	$r26,$r3,68(0x44)
/home/wwt/work/perf_func/lib/printf.c:2
1c000c78:	29811065 	st.w	$r5,$r3,68(0x44)
1c000c7c:	29812066 	st.w	$r6,$r3,72(0x48)
1c000c80:	29813067 	st.w	$r7,$r3,76(0x4c)
1c000c84:	29814068 	st.w	$r8,$r3,80(0x50)
1c000c88:	29815069 	st.w	$r9,$r3,84(0x54)
1c000c8c:	2981606a 	st.w	$r10,$r3,88(0x58)
1c000c90:	2981706b 	st.w	$r11,$r3,92(0x5c)
/home/wwt/work/perf_func/lib/printf.c:8
1c000c94:	2980707a 	st.w	$r26,$r3,28(0x1c)
/home/wwt/work/perf_func/lib/printf.c:10
1c000c98:	580086e0 	beq	$r23,$r0,132(0x84) # 1c000d1c <printf+0xcc>
1c000c9c:	00150099 	move	$r25,$r4
1c000ca0:	00150018 	move	$r24,$r0
1c000ca4:	1c00001c 	pcaddu12i	$r28,0
1c000ca8:	029e439c 	addi.w	$r28,$r28,1936(0x790)
1c000cac:	0280201b 	addi.w	$r27,$r0,8(0x8)
1c000cb0:	50001c00 	b	28(0x1c) # 1c000ccc <printf+0x7c>
/home/wwt/work/perf_func/lib/printf.c:80
1c000cb4:	001502e4 	move	$r4,$r23
1c000cb8:	5401c400 	bl	452(0x1c4) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/printf.c:10 (discriminator 2)
1c000cbc:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:10
1c000cc0:	0010632c 	add.w	$r12,$r25,$r24
1c000cc4:	28000197 	ld.b	$r23,$r12,0
1c000cc8:	580056e0 	beq	$r23,$r0,84(0x54) # 1c000d1c <printf+0xcc>
/home/wwt/work/perf_func/lib/printf.c:13
1c000ccc:	0280940c 	addi.w	$r12,$r0,37(0x25)
1c000cd0:	58001aec 	beq	$r23,$r12,24(0x18) # 1c000ce8 <printf+0x98>
/home/wwt/work/perf_func/lib/printf.c:79
1c000cd4:	0280280c 	addi.w	$r12,$r0,10(0xa)
1c000cd8:	5fffdeec 	bne	$r23,$r12,-36(0x3ffdc) # 1c000cb4 <printf+0x64>
/home/wwt/work/perf_func/lib/printf.c:79 (discriminator 1)
1c000cdc:	02803404 	addi.w	$r4,$r0,13(0xd)
1c000ce0:	54019c00 	bl	412(0x19c) # 1c000e7c <putchar>
1c000ce4:	53ffd3ff 	b	-48(0xfffffd0) # 1c000cb4 <printf+0x64>
1c000ce8:	0010632c 	add.w	$r12,$r25,$r24
1c000cec:	2800058d 	ld.b	$r13,$r12,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:15
1c000cf0:	02800405 	addi.w	$r5,$r0,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:17
1c000cf4:	02814c10 	addi.w	$r16,$r0,83(0x53)
/home/wwt/work/perf_func/lib/printf.c:68
1c000cf8:	0280280f 	addi.w	$r15,$r0,10(0xa)
/home/wwt/work/perf_func/lib/printf.c:17
1c000cfc:	02bf6dac 	addi.w	$r12,$r13,-37(0xfdb)
1c000d00:	2980306c 	st.w	$r12,$r3,12(0xc)
1c000d04:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c000d08:	68016a0c 	bltu	$r16,$r12,360(0x168) # 1c000e70 <printf+0x220>
1c000d0c:	0040898c 	slli.w	$r12,$r12,0x2
1c000d10:	0010338c 	add.w	$r12,$r28,$r12
1c000d14:	2880018c 	ld.w	$r12,$r12,0
1c000d18:	4c000180 	jirl	$r0,$r12,0
/home/wwt/work/perf_func/lib/printf.c:84
1c000d1c:	2880f061 	ld.w	$r1,$r3,60(0x3c)
1c000d20:	2880e077 	ld.w	$r23,$r3,56(0x38)
1c000d24:	2880d078 	ld.w	$r24,$r3,52(0x34)
1c000d28:	2880c079 	ld.w	$r25,$r3,48(0x30)
1c000d2c:	2880b07a 	ld.w	$r26,$r3,44(0x2c)
1c000d30:	2880a07b 	ld.w	$r27,$r3,40(0x28)
1c000d34:	2880907c 	ld.w	$r28,$r3,36(0x24)
1c000d38:	00150004 	move	$r4,$r0
1c000d3c:	02818063 	addi.w	$r3,$r3,96(0x60)
1c000d40:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/printf.c:65
1c000d44:	0010632c 	add.w	$r12,$r25,$r24
1c000d48:	2800098d 	ld.b	$r13,$r12,2(0x2)
1c000d4c:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:67 (discriminator 1)
1c000d50:	02bf3dac 	addi.w	$r12,$r13,-49(0xfcf)
/home/wwt/work/perf_func/lib/printf.c:67
1c000d54:	2980306c 	st.w	$r12,$r3,12(0xc)
1c000d58:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c000d5c:	00150005 	move	$r5,$r0
1c000d60:	6bff9f6c 	bltu	$r27,$r12,-100(0x3ff9c) # 1c000cfc <printf+0xac>
/home/wwt/work/perf_func/lib/printf.c:68
1c000d64:	001c3ca5 	mul.w	$r5,$r5,$r15
/home/wwt/work/perf_func/lib/printf.c:67
1c000d68:	02800718 	addi.w	$r24,$r24,1(0x1)
1c000d6c:	0010632c 	add.w	$r12,$r25,$r24
/home/wwt/work/perf_func/lib/printf.c:68
1c000d70:	02bf41ae 	addi.w	$r14,$r13,-48(0xfd0)
/home/wwt/work/perf_func/lib/printf.c:67
1c000d74:	2800058d 	ld.b	$r13,$r12,1(0x1)
1c000d78:	02bf3dac 	addi.w	$r12,$r13,-49(0xfcf)
1c000d7c:	2980306c 	st.w	$r12,$r3,12(0xc)
1c000d80:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
/home/wwt/work/perf_func/lib/printf.c:68
1c000d84:	001015c5 	add.w	$r5,$r14,$r5
/home/wwt/work/perf_func/lib/printf.c:67
1c000d88:	6fffdf6c 	bgeu	$r27,$r12,-36(0x3ffdc) # 1c000d64 <printf+0x114>
1c000d8c:	53ff73ff 	b	-144(0xfffff70) # 1c000cfc <printf+0xac>
/home/wwt/work/perf_func/lib/printf.c:50
1c000d90:	28800344 	ld.w	$r4,$r26,0
1c000d94:	00150007 	move	$r7,$r0
1c000d98:	02800806 	addi.w	$r6,$r0,2(0x2)
1c000d9c:	5401cc00 	bl	460(0x1cc) # 1c000f68 <printbase>
/home/wwt/work/perf_func/lib/printf.c:51
1c000da0:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:52
1c000da4:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:53
1c000da8:	53ff17ff 	b	-236(0xfffff14) # 1c000cbc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:25
1c000dac:	28800344 	ld.w	$r4,$r26,0
/home/wwt/work/perf_func/lib/printf.c:27
1c000db0:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:26
1c000db4:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:25
1c000db8:	5400c400 	bl	196(0xc4) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/printf.c:28
1c000dbc:	53ff03ff 	b	-256(0xfffff00) # 1c000cbc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:35
1c000dc0:	28800344 	ld.w	$r4,$r26,0
1c000dc4:	02800407 	addi.w	$r7,$r0,1(0x1)
1c000dc8:	02802806 	addi.w	$r6,$r0,10(0xa)
1c000dcc:	54019c00 	bl	412(0x19c) # 1c000f68 <printbase>
/home/wwt/work/perf_func/lib/printf.c:36
1c000dd0:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:37
1c000dd4:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:38
1c000dd8:	53fee7ff 	b	-284(0xffffee4) # 1c000cbc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:40
1c000ddc:	28800344 	ld.w	$r4,$r26,0
1c000de0:	00150007 	move	$r7,$r0
1c000de4:	02802806 	addi.w	$r6,$r0,10(0xa)
1c000de8:	54018000 	bl	384(0x180) # 1c000f68 <printbase>
/home/wwt/work/perf_func/lib/printf.c:41
1c000dec:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:42
1c000df0:	02800b18 	addi.w	$r24,$r24,2(0x2)
/home/wwt/work/perf_func/lib/printf.c:43
1c000df4:	53fecbff 	b	-312(0xffffec8) # 1c000cbc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:45
1c000df8:	28800344 	ld.w	$r4,$r26,0
1c000dfc:	00150007 	move	$r7,$r0
1c000e00:	02802006 	addi.w	$r6,$r0,8(0x8)
1c000e04:	54016400 	bl	356(0x164) # 1c000f68 <printbase>
/home/wwt/work/perf_func/lib/printf.c:46
1c000e08:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:47
1c000e0c:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:48
1c000e10:	53feafff 	b	-340(0xffffeac) # 1c000cbc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:56
1c000e14:	28800344 	ld.w	$r4,$r26,0
1c000e18:	00150007 	move	$r7,$r0
1c000e1c:	02804006 	addi.w	$r6,$r0,16(0x10)
1c000e20:	54014800 	bl	328(0x148) # 1c000f68 <printbase>
/home/wwt/work/perf_func/lib/printf.c:57
1c000e24:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:58
1c000e28:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:59
1c000e2c:	53fe93ff 	b	-368(0xffffe90) # 1c000cbc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:20
1c000e30:	28800344 	ld.w	$r4,$r26,0
/home/wwt/work/perf_func/lib/printf.c:22
1c000e34:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:21
1c000e38:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:20
1c000e3c:	54008c00 	bl	140(0x8c) # 1c000ec8 <putstring>
/home/wwt/work/perf_func/lib/printf.c:23
1c000e40:	53fe7fff 	b	-388(0xffffe7c) # 1c000cbc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:30
1c000e44:	28800344 	ld.w	$r4,$r26,0
1c000e48:	00150007 	move	$r7,$r0
1c000e4c:	02802806 	addi.w	$r6,$r0,10(0xa)
1c000e50:	54011800 	bl	280(0x118) # 1c000f68 <printbase>
/home/wwt/work/perf_func/lib/printf.c:31
1c000e54:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:32
1c000e58:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:33
1c000e5c:	53fe63ff 	b	-416(0xffffe60) # 1c000cbc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:61
1c000e60:	02809404 	addi.w	$r4,$r0,37(0x25)
1c000e64:	54001800 	bl	24(0x18) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/printf.c:62
1c000e68:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:63
1c000e6c:	53fe53ff 	b	-432(0xffffe50) # 1c000cbc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:73
1c000e70:	02809404 	addi.w	$r4,$r0,37(0x25)
1c000e74:	54000800 	bl	8(0x8) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/printf.c:74
1c000e78:	53fe47ff 	b	-444(0xffffe44) # 1c000cbc <printf+0x6c>

1c000e7c <putchar>:
putchar():
/home/wwt/work/perf_func/lib/putchar.c:2
1c000e7c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000e80:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/putchar.c:9
1c000e84:	157f5ff9 	lu12i.w	$r25,-263425(0xbfaff)
1c000e88:	03bc4339 	ori	$r25,$r25,0xf10
1c000e8c:	29000324 	st.b	$r4,$r25,0
1c000e90:	03400000 	andi	$r0,$r0,0x0
/home/wwt/work/perf_func/lib/putchar.c:5
1c000e94:	00150004 	move	$r4,$r0
1c000e98:	28803079 	ld.w	$r25,$r3,12(0xc)
1c000e9c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000ea0:	4c000020 	jirl	$r0,$r1,0

1c000ea4 <tgt_putchar>:
tgt_putchar():
/home/wwt/work/perf_func/lib/putchar.c:8
1c000ea4:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000ea8:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/putchar.c:9
1c000eac:	157f5ff9 	lu12i.w	$r25,-263425(0xbfaff)
1c000eb0:	03bc4339 	ori	$r25,$r25,0xf10
1c000eb4:	29000324 	st.b	$r4,$r25,0
1c000eb8:	03400000 	andi	$r0,$r0,0x0
/home/wwt/work/perf_func/lib/putchar.c:16
1c000ebc:	28803079 	ld.w	$r25,$r3,12(0xc)
1c000ec0:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000ec4:	4c000020 	jirl	$r0,$r1,0

1c000ec8 <putstring>:
putstring():
/home/wwt/work/perf_func/lib/puts.c:2
1c000ec8:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000ecc:	29803061 	st.w	$r1,$r3,12(0xc)
1c000ed0:	29802077 	st.w	$r23,$r3,8(0x8)
1c000ed4:	29801078 	st.w	$r24,$r3,4(0x4)
1c000ed8:	29800079 	st.w	$r25,$r3,0
/home/wwt/work/perf_func/lib/puts.c:4
1c000edc:	28000097 	ld.b	$r23,$r4,0
1c000ee0:	580042e0 	beq	$r23,$r0,64(0x40) # 1c000f20 <putstring+0x58>
1c000ee4:	00150098 	move	$r24,$r4
/home/wwt/work/perf_func/lib/puts.c:6
1c000ee8:	02802819 	addi.w	$r25,$r0,10(0xa)
1c000eec:	50001400 	b	20(0x14) # 1c000f00 <putstring+0x38>
/home/wwt/work/perf_func/lib/puts.c:7
1c000ef0:	001502e4 	move	$r4,$r23
1c000ef4:	57ff8bff 	bl	-120(0xfffff88) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/puts.c:4
1c000ef8:	28000317 	ld.b	$r23,$r24,0
1c000efc:	580026e0 	beq	$r23,$r0,36(0x24) # 1c000f20 <putstring+0x58>
/home/wwt/work/perf_func/lib/puts.c:8
1c000f00:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/puts.c:6
1c000f04:	5fffeef9 	bne	$r23,$r25,-20(0x3ffec) # 1c000ef0 <putstring+0x28>
/home/wwt/work/perf_func/lib/puts.c:6 (discriminator 1)
1c000f08:	02803404 	addi.w	$r4,$r0,13(0xd)
1c000f0c:	57ff73ff 	bl	-144(0xfffff70) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/puts.c:7
1c000f10:	001502e4 	move	$r4,$r23
1c000f14:	57ff6bff 	bl	-152(0xfffff68) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/puts.c:4
1c000f18:	28000317 	ld.b	$r23,$r24,0
1c000f1c:	5fffe6e0 	bne	$r23,$r0,-28(0x3ffe4) # 1c000f00 <putstring+0x38>
/home/wwt/work/perf_func/lib/puts.c:11
1c000f20:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000f24:	28802077 	ld.w	$r23,$r3,8(0x8)
1c000f28:	28801078 	ld.w	$r24,$r3,4(0x4)
1c000f2c:	28800079 	ld.w	$r25,$r3,0
1c000f30:	00150004 	move	$r4,$r0
1c000f34:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000f38:	4c000020 	jirl	$r0,$r1,0

1c000f3c <puts>:
puts():
/home/wwt/work/perf_func/lib/puts.c:15
1c000f3c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000f40:	29803061 	st.w	$r1,$r3,12(0xc)
/home/wwt/work/perf_func/lib/puts.c:16
1c000f44:	57ff87ff 	bl	-124(0xfffff84) # 1c000ec8 <putstring>
/home/wwt/work/perf_func/lib/puts.c:17
1c000f48:	02803404 	addi.w	$r4,$r0,13(0xd)
1c000f4c:	57ff33ff 	bl	-208(0xfffff30) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/puts.c:18
1c000f50:	02802804 	addi.w	$r4,$r0,10(0xa)
1c000f54:	57ff2bff 	bl	-216(0xfffff28) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/puts.c:20
1c000f58:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000f5c:	00150004 	move	$r4,$r0
1c000f60:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000f64:	4c000020 	jirl	$r0,$r1,0

1c000f68 <printbase>:
printbase():
/home/wwt/work/perf_func/lib/printbase.c:2
1c000f68:	02be8063 	addi.w	$r3,$r3,-96(0xfa0)
1c000f6c:	29816077 	st.w	$r23,$r3,88(0x58)
1c000f70:	29817061 	st.w	$r1,$r3,92(0x5c)
1c000f74:	29815078 	st.w	$r24,$r3,84(0x54)
1c000f78:	29814079 	st.w	$r25,$r3,80(0x50)
1c000f7c:	00150097 	move	$r23,$r4
/home/wwt/work/perf_func/lib/printbase.c:7
1c000f80:	580008e0 	beq	$r7,$r0,8(0x8) # 1c000f88 <printbase+0x20>
/home/wwt/work/perf_func/lib/printbase.c:7 (discriminator 1)
1c000f84:	6000a080 	blt	$r4,$r0,160(0xa0) # 1c001024 <printbase+0xbc>
/home/wwt/work/perf_func/lib/printbase.c:14
1c000f88:	5800bee0 	beq	$r23,$r0,188(0xbc) # 1c001044 <printbase+0xdc>
1c000f8c:	0280406c 	addi.w	$r12,$r3,16(0x10)
1c000f90:	0280040e 	addi.w	$r14,$r0,1(0x1)
1c000f94:	001131ce 	sub.w	$r14,$r14,$r12
1c000f98:	50000800 	b	8(0x8) # 1c000fa0 <printbase+0x38>
/home/wwt/work/perf_func/lib/printbase.c:17
1c000f9c:	001501b7 	move	$r23,$r13
/home/wwt/work/perf_func/lib/printbase.c:16
1c000fa0:	00219aed 	mod.wu	$r13,$r23,$r6
1c000fa4:	5c0008c0 	bne	$r6,$r0,8(0x8) # 1c000fac <printbase+0x44>
1c000fa8:	002a0007 	break	0x7
1c000fac:	2900018d 	st.b	$r13,$r12,0
/home/wwt/work/perf_func/lib/printbase.c:17
1c000fb0:	001031d8 	add.w	$r24,$r14,$r12
1c000fb4:	00211aed 	div.wu	$r13,$r23,$r6
1c000fb8:	5c0008c0 	bne	$r6,$r0,8(0x8) # 1c000fc0 <printbase+0x58>
1c000fbc:	002a0007 	break	0x7
1c000fc0:	0280058c 	addi.w	$r12,$r12,1(0x1)
/home/wwt/work/perf_func/lib/printbase.c:14
1c000fc4:	6fffdae6 	bgeu	$r23,$r6,-40(0x3ffd8) # 1c000f9c <printbase+0x34>
/home/wwt/work/perf_func/lib/printbase.c:22
1c000fc8:	600054b8 	blt	$r5,$r24,84(0x54) # 1c00101c <printbase+0xb4>
1c000fcc:	001500b7 	move	$r23,$r5
/home/wwt/work/perf_func/lib/printbase.c:25
1c000fd0:	02802419 	addi.w	$r25,$r0,9(0x9)
/home/wwt/work/perf_func/lib/printbase.c:24
1c000fd4:	0280406c 	addi.w	$r12,$r3,16(0x10)
1c000fd8:	00105d8c 	add.w	$r12,$r12,$r23
1c000fdc:	0280c004 	addi.w	$r4,$r0,48(0x30)
1c000fe0:	60001717 	blt	$r24,$r23,20(0x14) # 1c000ff4 <printbase+0x8c>
1c000fe4:	283ffd8c 	ld.b	$r12,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/printbase.c:25 (discriminator 1)
1c000fe8:	02815d84 	addi.w	$r4,$r12,87(0x57)
1c000fec:	60000b2c 	blt	$r25,$r12,8(0x8) # 1c000ff4 <printbase+0x8c>
1c000ff0:	0280c184 	addi.w	$r4,$r12,48(0x30)
1c000ff4:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000ff8:	57fe87ff 	bl	-380(0xffffe84) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/printbase.c:22 (discriminator 4)
1c000ffc:	5fffdae0 	bne	$r23,$r0,-40(0x3ffd8) # 1c000fd4 <printbase+0x6c>
/home/wwt/work/perf_func/lib/printbase.c:28
1c001000:	28817061 	ld.w	$r1,$r3,92(0x5c)
1c001004:	28816077 	ld.w	$r23,$r3,88(0x58)
1c001008:	28815078 	ld.w	$r24,$r3,84(0x54)
1c00100c:	28814079 	ld.w	$r25,$r3,80(0x50)
1c001010:	00150004 	move	$r4,$r0
1c001014:	02818063 	addi.w	$r3,$r3,96(0x60)
1c001018:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/printbase.c:22
1c00101c:	00150305 	move	$r5,$r24
1c001020:	53ffafff 	b	-84(0xfffffac) # 1c000fcc <printbase+0x64>
/home/wwt/work/perf_func/lib/printbase.c:10
1c001024:	0280b404 	addi.w	$r4,$r0,45(0x2d)
1c001028:	29803066 	st.w	$r6,$r3,12(0xc)
1c00102c:	29802065 	st.w	$r5,$r3,8(0x8)
1c001030:	57fe4fff 	bl	-436(0xffffe4c) # 1c000e7c <putchar>
/home/wwt/work/perf_func/lib/printbase.c:9
1c001034:	00115c17 	sub.w	$r23,$r0,$r23
/home/wwt/work/perf_func/lib/printbase.c:10
1c001038:	28802065 	ld.w	$r5,$r3,8(0x8)
1c00103c:	28803066 	ld.w	$r6,$r3,12(0xc)
1c001040:	53ff4fff 	b	-180(0xfffff4c) # 1c000f8c <printbase+0x24>
/home/wwt/work/perf_func/lib/printbase.c:22
1c001044:	67ffbc05 	bge	$r0,$r5,-68(0x3ffbc) # 1c001000 <printbase+0x98>
1c001048:	00150018 	move	$r24,$r0
1c00104c:	53ff83ff 	b	-128(0xfffff80) # 1c000fcc <printbase+0x64>

1c001050 <get_count>:
get_count():
/home/wwt/work/perf_func/lib/time.c:18
1c001050:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001054:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/time.c:7
1c001058:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c00105c:	28800324 	ld.w	$r4,$r25,0
/home/wwt/work/perf_func/lib/time.c:20
1c001060:	28803079 	ld.w	$r25,$r3,12(0xc)
1c001064:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001068:	4c000020 	jirl	$r0,$r1,0

1c00106c <_get_count>:
_get_count():
/home/wwt/work/perf_func/lib/time.c:20
1c00106c:	53ffe7ff 	b	-28(0xfffffe4) # 1c001050 <get_count>

1c001070 <get_count_my>:
get_count_my():
/home/wwt/work/perf_func/lib/time.c:25
1c001070:	00006004 	rdtimel.w	$r4,$r0
/home/wwt/work/perf_func/lib/time.c:30
1c001074:	4c000020 	jirl	$r0,$r1,0

1c001078 <clock_gettime>:
clock_gettime():
/home/wwt/work/perf_func/lib/time.c:33
1c001078:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c00107c:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c001080:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c001084:	2880032f 	ld.w	$r15,$r25,0
clock_gettime():
/home/wwt/work/perf_func/lib/time.c:36
1c001088:	0280280d 	addi.w	$r13,$r0,10(0xa)
1c00108c:	001c35ed 	mul.w	$r13,$r15,$r13
/home/wwt/work/perf_func/lib/time.c:37
1c001090:	02819010 	addi.w	$r16,$r0,100(0x64)
/home/wwt/work/perf_func/lib/time.c:36
1c001094:	028fa00c 	addi.w	$r12,$r0,1000(0x3e8)
/home/wwt/work/perf_func/lib/time.c:37
1c001098:	002141ee 	div.wu	$r14,$r15,$r16
1c00109c:	5c000a00 	bne	$r16,$r0,8(0x8) # 1c0010a4 <clock_gettime+0x2c>
1c0010a0:	002a0007 	break	0x7
1c0010a4:	0021b1d1 	mod.wu	$r17,$r14,$r12
1c0010a8:	5c000980 	bne	$r12,$r0,8(0x8) # 1c0010b0 <clock_gettime+0x38>
1c0010ac:	002a0007 	break	0x7
/home/wwt/work/perf_func/lib/time.c:38
1c0010b0:	1400030e 	lu12i.w	$r14,24(0x18)
1c0010b4:	039a81ce 	ori	$r14,$r14,0x6a0
1c0010b8:	002139f0 	div.wu	$r16,$r15,$r14
1c0010bc:	5c0009c0 	bne	$r14,$r0,8(0x8) # 1c0010c4 <clock_gettime+0x4c>
1c0010c0:	002a0007 	break	0x7
1c0010c4:	0021b20e 	mod.wu	$r14,$r16,$r12
1c0010c8:	5c000980 	bne	$r12,$r0,8(0x8) # 1c0010d0 <clock_gettime+0x58>
1c0010cc:	002a0007 	break	0x7
/home/wwt/work/perf_func/lib/time.c:37
1c0010d0:	298020b1 	st.w	$r17,$r5,8(0x8)
/home/wwt/work/perf_func/lib/time.c:38
1c0010d4:	298030ae 	st.w	$r14,$r5,12(0xc)
/home/wwt/work/perf_func/lib/time.c:39
1c0010d8:	298000a0 	st.w	$r0,$r5,0
/home/wwt/work/perf_func/lib/time.c:42
1c0010dc:	28803079 	ld.w	$r25,$r3,12(0xc)
1c0010e0:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/time.c:36
1c0010e4:	0021b1ae 	mod.wu	$r14,$r13,$r12
1c0010e8:	5c000980 	bne	$r12,$r0,8(0x8) # 1c0010f0 <clock_gettime+0x78>
1c0010ec:	002a0007 	break	0x7
1c0010f0:	298010ae 	st.w	$r14,$r5,4(0x4)
/home/wwt/work/perf_func/lib/time.c:42
1c0010f4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0010f8:	4c000020 	jirl	$r0,$r1,0

1c0010fc <get_clock>:
get_clock():
/home/wwt/work/perf_func/lib/time.c:42
1c0010fc:	53ff57ff 	b	-172(0xfffff54) # 1c001050 <get_count>

1c001100 <get_ns>:
get_ns():
/home/wwt/work/perf_func/lib/time.c:52
1c001100:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001104:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c001108:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c00110c:	28800324 	ld.w	$r4,$r25,0
get_ns():
/home/wwt/work/perf_func/lib/time.c:55
1c001110:	0280280c 	addi.w	$r12,$r0,10(0xa)
/home/wwt/work/perf_func/lib/time.c:57
1c001114:	28803079 	ld.w	$r25,$r3,12(0xc)
1c001118:	001c3084 	mul.w	$r4,$r4,$r12
1c00111c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001120:	4c000020 	jirl	$r0,$r1,0

1c001124 <get_us>:
get_us():
/home/wwt/work/perf_func/lib/time.c:61
1c001124:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001128:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c00112c:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c001130:	28800324 	ld.w	$r4,$r25,0
get_us():
/home/wwt/work/perf_func/lib/time.c:64
1c001134:	0281900c 	addi.w	$r12,$r0,100(0x64)
/home/wwt/work/perf_func/lib/time.c:66
1c001138:	28803079 	ld.w	$r25,$r3,12(0xc)
1c00113c:	0021308d 	div.wu	$r13,$r4,$r12
1c001140:	5c000980 	bne	$r12,$r0,8(0x8) # 1c001148 <get_us+0x24>
1c001144:	002a0007 	break	0x7
1c001148:	001501a4 	move	$r4,$r13
1c00114c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001150:	4c000020 	jirl	$r0,$r1,0

Disassembly of section .data:

1c001154 <pBitCntFunc.1684-0xc4>:
1c001154:	63746962 	blt	$r11,$r2,-35736(0x37468) # 1bff85bc <data_size+0x1bff8174>
1c001158:	746e756f 	0x746e756f
1c00115c:	73657420 	vssrani.wu.d	$vr0,$vr1,0x1d
1c001160:	65622074 	bge	$r3,$r20,90656(0x16220) # 1c017380 <_stack+0x5e1c>
1c001164:	2e6e6967 	0x2e6e6967
1c001168:	00000000 	0x00000000
1c00116c:	63746962 	blt	$r11,$r2,-35736(0x37468) # 1bff85d4 <data_size+0x1bff818c>
1c001170:	746e756f 	0x746e756f
1c001174:	53415020 	b	8601936(0x834150) # 1c8352c4 <_stack+0x823d60>
1c001178:	00002153 	clo.d	$r19,$r10
1c00117c:	63746962 	blt	$r11,$r2,-35736(0x37468) # 1bff85e4 <data_size+0x1bff819c>
1c001180:	746e756f 	0x746e756f
1c001184:	52524520 	b	75649604(0x4825244) # 208263c8 <_stack+0x4814e64>
1c001188:	2121524f 	sc.w	$r15,$r18,8528(0x2150)
1c00118c:	00000021 	0x00000021
1c001190:	73746942 	0x73746942
1c001194:	6c25203a 	bgeu	$r1,$r26,9504(0x2520) # 1c0036b4 <_heap+0x1cb4>
1c001198:	00000a64 	0x00000a64
1c00119c:	63746962 	blt	$r11,$r2,-35736(0x37468) # 1bff8604 <data_size+0x1bff81bc>
1c0011a0:	746e756f 	0x746e756f
1c0011a4:	6f54203a 	bgeu	$r1,$r26,-44000(0x35420) # 1bff65c4 <data_size+0x1bff617c>
1c0011a8:	206c6174 	ll.w	$r20,$r11,27744(0x6c60)
1c0011ac:	6e756f43 	bgeu	$r26,$r3,-101012(0x2756c) # 1bfe8718 <data_size+0x1bfe82d0>
1c0011b0:	6f532874 	bgeu	$r3,$r20,-44248(0x35328) # 1bff64d8 <data_size+0x1bff6090>
1c0011b4:	6f632043 	bgeu	$r2,$r3,-40160(0x36320) # 1bff74d4 <data_size+0x1bff708c>
1c0011b8:	29746e75 	st.h	$r21,$r19,-741(0xd1b)
1c0011bc:	30203d20 	vldrepl.w	$vr0,$r9,60(0x3c)
1c0011c0:	0a782578 	0x0a782578
1c0011c4:	00000000 	0x00000000
1c0011c8:	63746962 	blt	$r11,$r2,-35736(0x37468) # 1bff8630 <data_size+0x1bff81e8>
1c0011cc:	746e756f 	0x746e756f
1c0011d0:	6f54203a 	bgeu	$r1,$r26,-44000(0x35420) # 1bff65f0 <data_size+0x1bff61a8>
1c0011d4:	206c6174 	ll.w	$r20,$r11,27744(0x6c60)
1c0011d8:	6e756f43 	bgeu	$r26,$r3,-101012(0x2756c) # 1bfe8744 <data_size+0x1bfe82fc>
1c0011dc:	50432874 	b	30425896(0x1d04328) # 1dd05504 <_stack+0x1cf3fa0>
1c0011e0:	6f632055 	bgeu	$r2,$r21,-40160(0x36320) # 1bff7500 <data_size+0x1bff70b8>
1c0011e4:	29746e75 	st.h	$r21,$r19,-741(0xd1b)
1c0011e8:	30203d20 	vldrepl.w	$vr0,$r9,60(0x3c)
1c0011ec:	0a782578 	0x0a782578
1c0011f0:	00000000 	0x00000000
1c0011f4:	20746942 	ll.w	$r2,$r10,29800(0x7468)
1c0011f8:	6e756f63 	bgeu	$r27,$r3,-101012(0x2756c) # 1bfe8764 <data_size+0x1bfe831c>
1c0011fc:	20726574 	ll.w	$r20,$r11,29284(0x7264)
1c001200:	6f676c61 	bgeu	$r3,$r1,-39060(0x3676c) # 1bff796c <data_size+0x1bff7524>
1c001204:	68746972 	bltu	$r11,$r18,29800(0x7468) # 1c00866c <_heap+0x6c6c>
1c001208:	6562206d 	bge	$r3,$r13,90656(0x16220) # 1c017428 <_stack+0x5ec4>
1c00120c:	6d68636e 	bgeu	$r27,$r14,92256(0x16860) # 1c017a6c <_stack+0x6508>
1c001210:	0a6b7261 	xvfmsub.d	$xr1,$xr19,$xr28,$xr22
1c001214:	00000000 	0x00000000

1c001218 <pBitCntFunc.1684>:
1c001218:	1c000bb0 	pcaddu12i	$r16,93(0x5d)
1c00121c:	1c0007f0 	pcaddu12i	$r16,63(0x3f)
1c001220:	1c0009d0 	pcaddu12i	$r16,78(0x4e)
1c001224:	1c000870 	pcaddu12i	$r16,67(0x43)
1c001228:	1c000910 	pcaddu12i	$r16,72(0x48)
1c00122c:	1c000970 	pcaddu12i	$r16,75(0x4b)
1c001230:	1c000540 	pcaddu12i	$r0,42(0x2a)

1c001234 <bits>:
1c001234:	02010100 	slti	$r0,$r8,64(0x40)
1c001238:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c00123c:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c001240:	04030302 	csrxchg	$r2,$r24,0xc0
1c001244:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c001248:	04030302 	csrxchg	$r2,$r24,0xc0
1c00124c:	04030302 	csrxchg	$r2,$r24,0xc0
1c001250:	05040403 	0x05040403
1c001254:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c001258:	04030302 	csrxchg	$r2,$r24,0xc0
1c00125c:	04030302 	csrxchg	$r2,$r24,0xc0
1c001260:	05040403 	0x05040403
1c001264:	04030302 	csrxchg	$r2,$r24,0xc0
1c001268:	05040403 	0x05040403
1c00126c:	05040403 	0x05040403
1c001270:	06050504 	cacop	0x4,$r8,321(0x141)
1c001274:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c001278:	04030302 	csrxchg	$r2,$r24,0xc0
1c00127c:	04030302 	csrxchg	$r2,$r24,0xc0
1c001280:	05040403 	0x05040403
1c001284:	04030302 	csrxchg	$r2,$r24,0xc0
1c001288:	05040403 	0x05040403
1c00128c:	05040403 	0x05040403
1c001290:	06050504 	cacop	0x4,$r8,321(0x141)
1c001294:	04030302 	csrxchg	$r2,$r24,0xc0
1c001298:	05040403 	0x05040403
1c00129c:	05040403 	0x05040403
1c0012a0:	06050504 	cacop	0x4,$r8,321(0x141)
1c0012a4:	05040403 	0x05040403
1c0012a8:	06050504 	cacop	0x4,$r8,321(0x141)
1c0012ac:	06050504 	cacop	0x4,$r8,321(0x141)
1c0012b0:	07060605 	0x07060605
1c0012b4:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c0012b8:	04030302 	csrxchg	$r2,$r24,0xc0
1c0012bc:	04030302 	csrxchg	$r2,$r24,0xc0
1c0012c0:	05040403 	0x05040403
1c0012c4:	04030302 	csrxchg	$r2,$r24,0xc0
1c0012c8:	05040403 	0x05040403
1c0012cc:	05040403 	0x05040403
1c0012d0:	06050504 	cacop	0x4,$r8,321(0x141)
1c0012d4:	04030302 	csrxchg	$r2,$r24,0xc0
1c0012d8:	05040403 	0x05040403
1c0012dc:	05040403 	0x05040403
1c0012e0:	06050504 	cacop	0x4,$r8,321(0x141)
1c0012e4:	05040403 	0x05040403
1c0012e8:	06050504 	cacop	0x4,$r8,321(0x141)
1c0012ec:	06050504 	cacop	0x4,$r8,321(0x141)
1c0012f0:	07060605 	0x07060605
1c0012f4:	04030302 	csrxchg	$r2,$r24,0xc0
1c0012f8:	05040403 	0x05040403
1c0012fc:	05040403 	0x05040403
1c001300:	06050504 	cacop	0x4,$r8,321(0x141)
1c001304:	05040403 	0x05040403
1c001308:	06050504 	cacop	0x4,$r8,321(0x141)
1c00130c:	06050504 	cacop	0x4,$r8,321(0x141)
1c001310:	07060605 	0x07060605
1c001314:	05040403 	0x05040403
1c001318:	06050504 	cacop	0x4,$r8,321(0x141)
1c00131c:	06050504 	cacop	0x4,$r8,321(0x141)
1c001320:	07060605 	0x07060605
1c001324:	06050504 	cacop	0x4,$r8,321(0x141)
1c001328:	07060605 	0x07060605
1c00132c:	07060605 	0x07060605
1c001330:	08070706 	0x08070706

1c001334 <bits>:
1c001334:	02010100 	slti	$r0,$r8,64(0x40)
1c001338:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c00133c:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c001340:	04030302 	csrxchg	$r2,$r24,0xc0
1c001344:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c001348:	04030302 	csrxchg	$r2,$r24,0xc0
1c00134c:	04030302 	csrxchg	$r2,$r24,0xc0
1c001350:	05040403 	0x05040403
1c001354:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c001358:	04030302 	csrxchg	$r2,$r24,0xc0
1c00135c:	04030302 	csrxchg	$r2,$r24,0xc0
1c001360:	05040403 	0x05040403
1c001364:	04030302 	csrxchg	$r2,$r24,0xc0
1c001368:	05040403 	0x05040403
1c00136c:	05040403 	0x05040403
1c001370:	06050504 	cacop	0x4,$r8,321(0x141)
1c001374:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c001378:	04030302 	csrxchg	$r2,$r24,0xc0
1c00137c:	04030302 	csrxchg	$r2,$r24,0xc0
1c001380:	05040403 	0x05040403
1c001384:	04030302 	csrxchg	$r2,$r24,0xc0
1c001388:	05040403 	0x05040403
1c00138c:	05040403 	0x05040403
1c001390:	06050504 	cacop	0x4,$r8,321(0x141)
1c001394:	04030302 	csrxchg	$r2,$r24,0xc0
1c001398:	05040403 	0x05040403
1c00139c:	05040403 	0x05040403
1c0013a0:	06050504 	cacop	0x4,$r8,321(0x141)
1c0013a4:	05040403 	0x05040403
1c0013a8:	06050504 	cacop	0x4,$r8,321(0x141)
1c0013ac:	06050504 	cacop	0x4,$r8,321(0x141)
1c0013b0:	07060605 	0x07060605
1c0013b4:	03020201 	lu52i.d	$r1,$r16,128(0x80)
1c0013b8:	04030302 	csrxchg	$r2,$r24,0xc0
1c0013bc:	04030302 	csrxchg	$r2,$r24,0xc0
1c0013c0:	05040403 	0x05040403
1c0013c4:	04030302 	csrxchg	$r2,$r24,0xc0
1c0013c8:	05040403 	0x05040403
1c0013cc:	05040403 	0x05040403
1c0013d0:	06050504 	cacop	0x4,$r8,321(0x141)
1c0013d4:	04030302 	csrxchg	$r2,$r24,0xc0
1c0013d8:	05040403 	0x05040403
1c0013dc:	05040403 	0x05040403
1c0013e0:	06050504 	cacop	0x4,$r8,321(0x141)
1c0013e4:	05040403 	0x05040403
1c0013e8:	06050504 	cacop	0x4,$r8,321(0x141)
1c0013ec:	06050504 	cacop	0x4,$r8,321(0x141)
1c0013f0:	07060605 	0x07060605
1c0013f4:	04030302 	csrxchg	$r2,$r24,0xc0
1c0013f8:	05040403 	0x05040403
1c0013fc:	05040403 	0x05040403
1c001400:	06050504 	cacop	0x4,$r8,321(0x141)
1c001404:	05040403 	0x05040403
1c001408:	06050504 	cacop	0x4,$r8,321(0x141)
1c00140c:	06050504 	cacop	0x4,$r8,321(0x141)
1c001410:	07060605 	0x07060605
1c001414:	05040403 	0x05040403
1c001418:	06050504 	cacop	0x4,$r8,321(0x141)
1c00141c:	06050504 	cacop	0x4,$r8,321(0x141)
1c001420:	07060605 	0x07060605
1c001424:	06050504 	cacop	0x4,$r8,321(0x141)
1c001428:	07060605 	0x07060605
1c00142c:	07060605 	0x07060605
1c001430:	08070706 	0x08070706
1c001434:	1c000e60 	pcaddu12i	$r0,115(0x73)
1c001438:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00143c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001440:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001444:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001448:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00144c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001450:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001454:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001458:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00145c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001460:	1c000d44 	pcaddu12i	$r4,106(0x6a)
1c001464:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001468:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c00146c:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001470:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001474:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001478:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c00147c:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001480:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001484:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001488:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00148c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001490:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001494:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001498:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00149c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014a0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014a4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014a8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014ac:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014b0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014b4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014b8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014bc:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014c0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014c4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014c8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014cc:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014d0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014d4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014d8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014dc:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014e0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014e4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014e8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014ec:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014f0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014f4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014f8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0014fc:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001500:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001504:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001508:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00150c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001510:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001514:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001518:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00151c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001520:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001524:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001528:	1c000d90 	pcaddu12i	$r16,108(0x6c)
1c00152c:	1c000dac 	pcaddu12i	$r12,109(0x6d)
1c001530:	1c000dc0 	pcaddu12i	$r0,110(0x6e)
1c001534:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001538:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00153c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001540:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001544:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001548:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00154c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001550:	1c000ddc 	pcaddu12i	$r28,110(0x6e)
1c001554:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001558:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00155c:	1c000df8 	pcaddu12i	$r24,111(0x6f)
1c001560:	1c000e14 	pcaddu12i	$r20,112(0x70)
1c001564:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001568:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00156c:	1c000e30 	pcaddu12i	$r16,113(0x71)
1c001570:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001574:	1c000e44 	pcaddu12i	$r4,114(0x72)
1c001578:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00157c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001580:	1c000e14 	pcaddu12i	$r20,112(0x70)

1c001584 <__CTOR_LIST__>:
	...

1c00158c <__CTOR_END__>:
	...

1c001594 <__DTOR_END__>:
__DTOR_END__():
1c001594:	00000000 	0x00000000
1c001598:	1c011564 	pcaddu12i	$r4,2219(0x8ab)

Disassembly of section .eh_frame:

1c00159c <_end-0x444>:
1c00159c:	0000000c 	0x0000000c
1c0015a0:	00000000 	0x00000000
1c0015a4:	7c010003 	0x7c010003
1c0015a8:	00030c01 	0x00030c01
1c0015ac:	00000058 	0x00000058
1c0015b0:	00000014 	0x00000014
1c0015b4:	1c0003a0 	pcaddu12i	$r0,29(0x1d)
1c0015b8:	0000019c 	0x0000019c
1c0015bc:	00000404 	0x00000404
1c0015c0:	04200e00 	csrxchg	$r0,$r16,0x803
1c0015c4:	0000001c 	0x0000001c
1c0015c8:	059a0181 	0x059a0181
1c0015cc:	0297069b 	addi.w	$r27,$r20,1473(0x5c1)
1c0015d0:	04990398 	csrxchg	$r24,$r28,0x2640
1c0015d4:	0000e404 	0x0000e404
1c0015d8:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c0015dc:	00000004 	0x00000004
1c0015e0:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c0015e4:	04d80000 	csrrd	$r0,0x3600
1c0015e8:	00000004 	0x00000004
1c0015ec:	000404d9 	alsl.w	$r25,$r6,$r1,0x1
1c0015f0:	04da0000 	csrrd	$r0,0x3680
1c0015f4:	00000008 	0x00000008
1c0015f8:	000c04db 	bytepick.d	$r27,$r6,$r1,0x0
1c0015fc:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c001600:	00000804 	0x00000804
1c001604:	00000b00 	0x00000b00
1c001608:	00000028 	0x00000028
1c00160c:	00000070 	0x00000070
1c001610:	1c000540 	pcaddu12i	$r0,42(0x2a)
1c001614:	000000b4 	0x000000b4
1c001618:	00000804 	0x00000804
1c00161c:	04100e00 	csrxchg	$r0,$r16,0x403
1c001620:	00000004 	0x00000004
1c001624:	94040197 	0x94040197
1c001628:	d7000000 	0xd7000000
1c00162c:	00000804 	0x00000804
1c001630:	00000e00 	0x00000e00
1c001634:	0000000c 	0x0000000c
1c001638:	0000009c 	0x0000009c
1c00163c:	1c000600 	pcaddu12i	$r0,48(0x30)
1c001640:	0000000c 	0x0000000c
1c001644:	0000006c 	0x0000006c
1c001648:	000000ac 	0x000000ac
1c00164c:	1c000610 	pcaddu12i	$r16,48(0x30)
1c001650:	000001dc 	0x000001dc
1c001654:	00000404 	0x00000404
1c001658:	04300e00 	csrxchg	$r0,$r16,0xc03
1c00165c:	0000001c 	0x0000001c
1c001660:	059a0181 	0x059a0181
1c001664:	079c069b 	0x079c069b
1c001668:	1404089d 	lu12i.w	$r29,8260(0x2044)
1c00166c:	9e000000 	0x9e000000
1c001670:	98029709 	0x98029709
1c001674:	04049903 	csrxchg	$r3,$r8,0x126
1c001678:	0000017c 	0x0000017c
1c00167c:	000804c1 	bytepick.w	$r1,$r6,$r1,0x0
1c001680:	04d70000 	csrrd	$r0,0x35c0
1c001684:	00000004 	0x00000004
1c001688:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
1c00168c:	04d90000 	csrrd	$r0,0x3640
1c001690:	00000004 	0x00000004
1c001694:	000404da 	alsl.w	$r26,$r6,$r1,0x1
1c001698:	04db0000 	csrrd	$r0,0x36c0
1c00169c:	00000004 	0x00000004
1c0016a0:	000404dc 	alsl.w	$r28,$r6,$r1,0x1
1c0016a4:	04dd0000 	csrrd	$r0,0x3740
1c0016a8:	00000004 	0x00000004
1c0016ac:	000404de 	alsl.w	$r30,$r6,$r1,0x1
1c0016b0:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c0016b4:	0000001c 	0x0000001c
1c0016b8:	0000011c 	0x0000011c
1c0016bc:	1c0007f0 	pcaddu12i	$r16,63(0x3f)
1c0016c0:	0000007c 	0x0000007c
1c0016c4:	00006004 	rdtimel.w	$r4,$r0
1c0016c8:	04100e00 	csrxchg	$r0,$r16,0x403
1c0016cc:	00000018 	0x00000018
1c0016d0:	0000000e 	0x0000000e
1c0016d4:	0000000c 	0x0000000c
1c0016d8:	0000013c 	0x0000013c
1c0016dc:	1c000870 	pcaddu12i	$r16,67(0x43)
1c0016e0:	000000a0 	0x000000a0
1c0016e4:	0000001c 	0x0000001c
1c0016e8:	0000014c 	0x0000014c
1c0016ec:	1c000910 	pcaddu12i	$r16,72(0x48)
1c0016f0:	00000060 	0x00000060
1c0016f4:	00000404 	0x00000404
1c0016f8:	04100e00 	csrxchg	$r0,$r16,0x403
1c0016fc:	00000058 	0x00000058
1c001700:	0000000e 	0x0000000e
1c001704:	0000001c 	0x0000001c
1c001708:	0000016c 	0x0000016c
1c00170c:	1c000970 	pcaddu12i	$r16,75(0x4b)
1c001710:	00000060 	0x00000060
1c001714:	00000404 	0x00000404
1c001718:	04100e00 	csrxchg	$r0,$r16,0x403
1c00171c:	00000058 	0x00000058
1c001720:	0000000e 	0x0000000e
1c001724:	00000030 	0x00000030
1c001728:	0000018c 	0x0000018c
1c00172c:	1c0009d0 	pcaddu12i	$r16,78(0x4e)
1c001730:	00000104 	0x00000104
1c001734:	00002004 	clo.d	$r4,$r0
1c001738:	04100e00 	csrxchg	$r0,$r16,0x403
1c00173c:	00000008 	0x00000008
1c001740:	02980197 	addi.w	$r23,$r12,1536(0x600)
1c001744:	0000c804 	0x0000c804
1c001748:	0404d700 	csrxchg	$r0,$r24,0x135
1c00174c:	d8000000 	0xd8000000
1c001750:	00000804 	0x00000804
1c001754:	00000e00 	0x00000e00
1c001758:	0000001c 	0x0000001c
1c00175c:	000001c0 	0x000001c0
1c001760:	1c000ae0 	pcaddu12i	$r0,87(0x57)
1c001764:	000000c4 	0x000000c4
1c001768:	00000404 	0x00000404
1c00176c:	04100e00 	csrxchg	$r0,$r16,0x403
1c001770:	000000bc 	0x000000bc
1c001774:	0000000e 	0x0000000e
1c001778:	0000000c 	0x0000000c
1c00177c:	000001e0 	0x000001e0
1c001780:	1c000bb0 	pcaddu12i	$r16,93(0x5d)
1c001784:	00000098 	0x00000098
1c001788:	00000060 	0x00000060
1c00178c:	000001f0 	0x000001f0
1c001790:	1c000c50 	pcaddu12i	$r16,98(0x62)
1c001794:	0000022c 	0x0000022c
1c001798:	00000404 	0x00000404
1c00179c:	04600e00 	csrxchg	$r0,$r16,0x1803
1c0017a0:	0000001c 	0x0000001c
1c0017a4:	09810d9a 	0x09810d9a
1c0017a8:	0b980a97 	0x0b980a97
1c0017ac:	0e9b0c99 	0x0e9b0c99
1c0017b0:	b0040f9c 	0xb0040f9c
1c0017b4:	0a000000 	0x0a000000
1c0017b8:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
1c0017bc:	04d70000 	csrrd	$r0,0x35c0
1c0017c0:	00000004 	0x00000004
1c0017c4:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
1c0017c8:	04d90000 	csrrd	$r0,0x3640
1c0017cc:	00000004 	0x00000004
1c0017d0:	000404da 	alsl.w	$r26,$r6,$r1,0x1
1c0017d4:	04db0000 	csrrd	$r0,0x36c0
1c0017d8:	00000004 	0x00000004
1c0017dc:	000804dc 	bytepick.w	$r28,$r6,$r1,0x0
1c0017e0:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c0017e4:	00000404 	0x00000404
1c0017e8:	00000b00 	0x00000b00
1c0017ec:	00000028 	0x00000028
1c0017f0:	00000254 	0x00000254
1c0017f4:	1c000e7c 	pcaddu12i	$r28,115(0x73)
1c0017f8:	00000028 	0x00000028
1c0017fc:	00000404 	0x00000404
1c001800:	04100e00 	csrxchg	$r0,$r16,0x403
1c001804:	00000004 	0x00000004
1c001808:	18040199 	pcaddi	$r25,8204(0x200c)
1c00180c:	d9000000 	0xd9000000
1c001810:	00000404 	0x00000404
1c001814:	00000e00 	0x00000e00
1c001818:	00000028 	0x00000028
1c00181c:	00000280 	0x00000280
1c001820:	1c000ea4 	pcaddu12i	$r4,117(0x75)
1c001824:	00000024 	0x00000024
1c001828:	00000404 	0x00000404
1c00182c:	04100e00 	csrxchg	$r0,$r16,0x403
1c001830:	00000004 	0x00000004
1c001834:	14040199 	lu12i.w	$r25,8204(0x200c)
1c001838:	d9000000 	0xd9000000
1c00183c:	00000404 	0x00000404
1c001840:	00000e00 	0x00000e00
1c001844:	00000040 	0x00000040
1c001848:	000002ac 	0x000002ac
1c00184c:	1c000ec8 	pcaddu12i	$r8,118(0x76)
1c001850:	00000074 	0x00000074
1c001854:	00000404 	0x00000404
1c001858:	04100e00 	csrxchg	$r0,$r16,0x403
1c00185c:	00000010 	0x00000010
1c001860:	02970181 	addi.w	$r1,$r12,1472(0x5c0)
1c001864:	04990398 	csrxchg	$r24,$r28,0x2640
1c001868:	00004804 	bitrev.4b	$r4,$r0
1c00186c:	0404c100 	csrxchg	$r0,$r8,0x130
1c001870:	d7000000 	0xd7000000
1c001874:	00000404 	0x00000404
1c001878:	0404d800 	csrrd	$r0,0x136
1c00187c:	d9000000 	0xd9000000
1c001880:	00000804 	0x00000804
1c001884:	00000e00 	0x00000e00
1c001888:	00000028 	0x00000028
1c00188c:	000002f0 	0x000002f0
1c001890:	1c000f3c 	pcaddu12i	$r28,121(0x79)
1c001894:	0000002c 	0x0000002c
1c001898:	00000404 	0x00000404
1c00189c:	04100e00 	csrxchg	$r0,$r16,0x403
1c0018a0:	00000004 	0x00000004
1c0018a4:	18040181 	pcaddi	$r1,8204(0x200c)
1c0018a8:	c1000000 	0xc1000000
1c0018ac:	00000804 	0x00000804
1c0018b0:	00000e00 	0x00000e00
1c0018b4:	00000048 	0x00000048
1c0018b8:	0000031c 	0x0000031c
1c0018bc:	1c000f68 	pcaddu12i	$r8,123(0x7b)
1c0018c0:	000000e8 	0x000000e8
1c0018c4:	00000404 	0x00000404
1c0018c8:	04600e00 	csrxchg	$r0,$r16,0x1803
1c0018cc:	00000010 	0x00000010
1c0018d0:	01810297 	0x01810297
1c0018d4:	04990398 	csrxchg	$r24,$r28,0x2640
1c0018d8:	00008804 	0x00008804
1c0018dc:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c0018e0:	00000004 	0x00000004
1c0018e4:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c0018e8:	04d80000 	csrrd	$r0,0x3600
1c0018ec:	00000004 	0x00000004
1c0018f0:	000804d9 	bytepick.w	$r25,$r6,$r1,0x0
1c0018f4:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c0018f8:	00000404 	0x00000404
1c0018fc:	00000b00 	0x00000b00
1c001900:	00000028 	0x00000028
1c001904:	00000368 	0x00000368
1c001908:	1c001050 	pcaddu12i	$r16,130(0x82)
1c00190c:	0000001c 	0x0000001c
1c001910:	00000404 	0x00000404
1c001914:	04100e00 	csrxchg	$r0,$r16,0x403
1c001918:	00000004 	0x00000004
1c00191c:	0c040199 	0x0c040199
1c001920:	d9000000 	0xd9000000
1c001924:	00000404 	0x00000404
1c001928:	00000e00 	0x00000e00
1c00192c:	0000000c 	0x0000000c
1c001930:	00000394 	0x00000394
1c001934:	1c00106c 	pcaddu12i	$r12,131(0x83)
1c001938:	00000004 	0x00000004
1c00193c:	0000000c 	0x0000000c
1c001940:	000003a4 	0x000003a4
1c001944:	1c001070 	pcaddu12i	$r16,131(0x83)
1c001948:	00000008 	0x00000008
1c00194c:	00000028 	0x00000028
1c001950:	000003b4 	0x000003b4
1c001954:	1c001078 	pcaddu12i	$r24,131(0x83)
1c001958:	00000084 	0x00000084
1c00195c:	00000404 	0x00000404
1c001960:	04100e00 	csrxchg	$r0,$r16,0x403
1c001964:	00000004 	0x00000004
1c001968:	60040199 	blt	$r12,$r25,1024(0x400) # 1c001d68 <_heap+0x368>
1c00196c:	d9000000 	0xd9000000
1c001970:	00001804 	cto.w	$r4,$r0
1c001974:	00000e00 	0x00000e00
1c001978:	0000000c 	0x0000000c
1c00197c:	000003e0 	0x000003e0
1c001980:	1c0010fc 	pcaddu12i	$r28,135(0x87)
1c001984:	00000004 	0x00000004
1c001988:	00000028 	0x00000028
1c00198c:	000003f0 	0x000003f0
1c001990:	1c001100 	pcaddu12i	$r0,136(0x88)
1c001994:	00000024 	0x00000024
1c001998:	00000404 	0x00000404
1c00199c:	04100e00 	csrxchg	$r0,$r16,0x403
1c0019a0:	00000004 	0x00000004
1c0019a4:	10040199 	addu16i.d	$r25,$r12,256(0x100)
1c0019a8:	d9000000 	0xd9000000
1c0019ac:	00000804 	0x00000804
1c0019b0:	00000e00 	0x00000e00
1c0019b4:	00000028 	0x00000028
1c0019b8:	0000041c 	0x0000041c
1c0019bc:	1c001124 	pcaddu12i	$r4,137(0x89)
1c0019c0:	00000030 	0x00000030
1c0019c4:	00000404 	0x00000404
1c0019c8:	04100e00 	csrxchg	$r0,$r16,0x403
1c0019cc:	00000004 	0x00000004
1c0019d0:	10040199 	addu16i.d	$r25,$r12,256(0x100)
1c0019d4:	d9000000 	0xd9000000
1c0019d8:	00001404 	clz.w	$r4,$r0
1c0019dc:	00000e00 	0x00000e00

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	0x0000001c
   4:	00000002 	0x00000002
   8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
   c:	00000000 	0x00000000
  10:	1c000c50 	pcaddu12i	$r16,98(0x62)
  14:	0000022c 	0x0000022c
	...
  20:	0000001c 	0x0000001c
  24:	03160002 	lu52i.d	$r2,$r0,1408(0x580)
  28:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  2c:	00000000 	0x00000000
  30:	1c000e7c 	pcaddu12i	$r28,115(0x73)
  34:	0000004c 	0x0000004c
	...
  40:	0000001c 	0x0000001c
  44:	04860002 	csrrd	$r2,0x2180
  48:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  4c:	00000000 	0x00000000
  50:	1c000ec8 	pcaddu12i	$r8,118(0x76)
  54:	000000a0 	0x000000a0
	...
  60:	0000001c 	0x0000001c
  64:	06a00002 	0x06a00002
  68:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  6c:	00000000 	0x00000000
  70:	1c000f68 	pcaddu12i	$r8,123(0x7b)
  74:	000000e8 	0x000000e8
	...
  80:	0000001c 	0x0000001c
  84:	08ba0002 	0x08ba0002
  88:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  8c:	00000000 	0x00000000
  90:	1c001050 	pcaddu12i	$r16,130(0x82)
  94:	00000104 	0x00000104
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
  10:	00000060 	0x00000060
  14:	00000000 	0x00000000
  18:	1c000c50 	pcaddu12i	$r16,98(0x62)
  1c:	0000022c 	0x0000022c
  20:	00000404 	0x00000404
  24:	04600e00 	csrxchg	$r0,$r16,0x1803
  28:	0000001c 	0x0000001c
  2c:	09810d9a 	0x09810d9a
  30:	0b980a97 	0x0b980a97
  34:	0e9b0c99 	0x0e9b0c99
  38:	b0040f9c 	0xb0040f9c
  3c:	0a000000 	0x0a000000
  40:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
  44:	04d70000 	csrrd	$r0,0x35c0
  48:	00000004 	0x00000004
  4c:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
  50:	04d90000 	csrrd	$r0,0x3640
  54:	00000004 	0x00000004
  58:	000404da 	alsl.w	$r26,$r6,$r1,0x1
  5c:	04db0000 	csrrd	$r0,0x36c0
  60:	00000004 	0x00000004
  64:	000804dc 	bytepick.w	$r28,$r6,$r1,0x0
  68:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
  6c:	00000404 	0x00000404
  70:	00000b00 	0x00000b00
  74:	0000000c 	0x0000000c
  78:	ffffffff 	0xffffffff
  7c:	7c010003 	0x7c010003
  80:	00030c01 	0x00030c01
  84:	00000028 	0x00000028
  88:	00000074 	0x00000074
  8c:	1c000e7c 	pcaddu12i	$r28,115(0x73)
  90:	00000028 	0x00000028
  94:	00000404 	0x00000404
  98:	04100e00 	csrxchg	$r0,$r16,0x403
  9c:	00000004 	0x00000004
  a0:	18040199 	pcaddi	$r25,8204(0x200c)
  a4:	d9000000 	0xd9000000
  a8:	00000404 	0x00000404
  ac:	00000e00 	0x00000e00
  b0:	00000028 	0x00000028
  b4:	00000074 	0x00000074
  b8:	1c000ea4 	pcaddu12i	$r4,117(0x75)
  bc:	00000024 	0x00000024
  c0:	00000404 	0x00000404
  c4:	04100e00 	csrxchg	$r0,$r16,0x403
  c8:	00000004 	0x00000004
  cc:	14040199 	lu12i.w	$r25,8204(0x200c)
  d0:	d9000000 	0xd9000000
  d4:	00000404 	0x00000404
  d8:	00000e00 	0x00000e00
  dc:	0000000c 	0x0000000c
  e0:	ffffffff 	0xffffffff
  e4:	7c010003 	0x7c010003
  e8:	00030c01 	0x00030c01
  ec:	00000040 	0x00000040
  f0:	000000dc 	0x000000dc
  f4:	1c000ec8 	pcaddu12i	$r8,118(0x76)
  f8:	00000074 	0x00000074
  fc:	00000404 	0x00000404
 100:	04100e00 	csrxchg	$r0,$r16,0x403
 104:	00000010 	0x00000010
 108:	02970181 	addi.w	$r1,$r12,1472(0x5c0)
 10c:	04990398 	csrxchg	$r24,$r28,0x2640
 110:	00004804 	bitrev.4b	$r4,$r0
 114:	0404c100 	csrxchg	$r0,$r8,0x130
 118:	d7000000 	0xd7000000
 11c:	00000404 	0x00000404
 120:	0404d800 	csrrd	$r0,0x136
 124:	d9000000 	0xd9000000
 128:	00000804 	0x00000804
 12c:	00000e00 	0x00000e00
 130:	00000028 	0x00000028
 134:	000000dc 	0x000000dc
 138:	1c000f3c 	pcaddu12i	$r28,121(0x79)
 13c:	0000002c 	0x0000002c
 140:	00000404 	0x00000404
 144:	04100e00 	csrxchg	$r0,$r16,0x403
 148:	00000004 	0x00000004
 14c:	18040181 	pcaddi	$r1,8204(0x200c)
 150:	c1000000 	0xc1000000
 154:	00000804 	0x00000804
 158:	00000e00 	0x00000e00
 15c:	0000000c 	0x0000000c
 160:	ffffffff 	0xffffffff
 164:	7c010003 	0x7c010003
 168:	00030c01 	0x00030c01
 16c:	00000048 	0x00000048
 170:	0000015c 	0x0000015c
 174:	1c000f68 	pcaddu12i	$r8,123(0x7b)
 178:	000000e8 	0x000000e8
 17c:	00000404 	0x00000404
 180:	04600e00 	csrxchg	$r0,$r16,0x1803
 184:	00000010 	0x00000010
 188:	01810297 	0x01810297
 18c:	04990398 	csrxchg	$r24,$r28,0x2640
 190:	00008804 	0x00008804
 194:	04c10a00 	csrxchg	$r0,$r16,0x3042
 198:	00000004 	0x00000004
 19c:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
 1a0:	04d80000 	csrrd	$r0,0x3600
 1a4:	00000004 	0x00000004
 1a8:	000804d9 	bytepick.w	$r25,$r6,$r1,0x0
 1ac:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
 1b0:	00000404 	0x00000404
 1b4:	00000b00 	0x00000b00
 1b8:	0000000c 	0x0000000c
 1bc:	ffffffff 	0xffffffff
 1c0:	7c010003 	0x7c010003
 1c4:	00030c01 	0x00030c01
 1c8:	00000028 	0x00000028
 1cc:	000001b8 	0x000001b8
 1d0:	1c001050 	pcaddu12i	$r16,130(0x82)
 1d4:	0000001c 	0x0000001c
 1d8:	00000404 	0x00000404
 1dc:	04100e00 	csrxchg	$r0,$r16,0x403
 1e0:	00000004 	0x00000004
 1e4:	0c040199 	0x0c040199
 1e8:	d9000000 	0xd9000000
 1ec:	00000404 	0x00000404
 1f0:	00000e00 	0x00000e00
 1f4:	0000000c 	0x0000000c
 1f8:	000001b8 	0x000001b8
 1fc:	1c00106c 	pcaddu12i	$r12,131(0x83)
 200:	00000004 	0x00000004
 204:	0000000c 	0x0000000c
 208:	000001b8 	0x000001b8
 20c:	1c001070 	pcaddu12i	$r16,131(0x83)
 210:	00000008 	0x00000008
 214:	00000028 	0x00000028
 218:	000001b8 	0x000001b8
 21c:	1c001078 	pcaddu12i	$r24,131(0x83)
 220:	00000084 	0x00000084
 224:	00000404 	0x00000404
 228:	04100e00 	csrxchg	$r0,$r16,0x403
 22c:	00000004 	0x00000004
 230:	60040199 	blt	$r12,$r25,1024(0x400) # 630 <data_size+0x1e8>
 234:	d9000000 	0xd9000000
 238:	00001804 	cto.w	$r4,$r0
 23c:	00000e00 	0x00000e00
 240:	0000000c 	0x0000000c
 244:	000001b8 	0x000001b8
 248:	1c0010fc 	pcaddu12i	$r28,135(0x87)
 24c:	00000004 	0x00000004
 250:	00000028 	0x00000028
 254:	000001b8 	0x000001b8
 258:	1c001100 	pcaddu12i	$r0,136(0x88)
 25c:	00000024 	0x00000024
 260:	00000404 	0x00000404
 264:	04100e00 	csrxchg	$r0,$r16,0x403
 268:	00000004 	0x00000004
 26c:	10040199 	addu16i.d	$r25,$r12,256(0x100)
 270:	d9000000 	0xd9000000
 274:	00000804 	0x00000804
 278:	00000e00 	0x00000e00
 27c:	00000028 	0x00000028
 280:	000001b8 	0x000001b8
 284:	1c001124 	pcaddu12i	$r4,137(0x89)
 288:	00000030 	0x00000030
 28c:	00000404 	0x00000404
 290:	04100e00 	csrxchg	$r0,$r16,0x403
 294:	00000004 	0x00000004
 298:	10040199 	addu16i.d	$r25,$r12,256(0x100)
 29c:	d9000000 	0xd9000000
 2a0:	00001404 	clz.w	$r4,$r0
 2a4:	00000e00 	0x00000e00

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000312 	0x00000312
   4:	00000004 	0x00000004
   8:	01040000 	0x01040000
   c:	20554e47 	ll.w	$r7,$r18,21836(0x554c)
  10:	20373143 	ll.w	$r3,$r10,14128(0x3730)
  14:	2e332e38 	0x2e332e38
  18:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 12d38 <data_size+0x128f0>
  1c:	3d696261 	0x3d696261
  20:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
  24:	2d207332 	0x2d207332
  28:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7288 <_stack+0xe3fe5d24>
  2c:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff6c68 <_stack+0xe3fe5704>
  30:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 1679c <data_size+0x16354>
  34:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
  38:	2d207232 	0x2d207232
  3c:	7570666d 	0x7570666d
  40:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe6fac <_stack+0xe3fd5a48>
  44:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 12d64 <data_size+0x1291c>
  48:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 6fb4 <data_size+0x6b6c>
  4c:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe3db8 <_stack+0xe3fd2854>
  50:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 16dc0 <data_size+0x16978>
  54:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 12d74 <data_size+0x1292c>
  58:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 16ecc <data_size+0x16a84>
  5c:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff6fc8 <_stack+0xe3fe5a64>
  60:	7261676e 	0x7261676e
  64:	32336863 	0x32336863
  68:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff2d88 <_stack+0xe3fe1824>
  6c:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
  70:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe669c <_stack+0xe3fd5138>
  74:	75622d6f 	0x75622d6f
  78:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 174e4 <data_size+0x1709c>
  7c:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe2d9c <_stack+0xe3fd1838>
  80:	702d6f6e 	0x702d6f6e
  84:	0c006369 	0x0c006369
  88:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe69f8 <_stack+0xe3fd5494>
  8c:	632e6674 	blt	$r19,$r20,-53660(0x32e64) # ffff2ef0 <_stack+0xe3fe198c>
  90:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff68bc <_stack+0xe3fe5358>
  94:	772f656d 	0x772f656d
  98:	772f7477 	0x772f7477
  9c:	2f6b726f 	0x2f6b726f
  a0:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7304 <_stack+0xe3fd5da0>
  a4:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7608 <_stack+0xe3fd60a4>
  a8:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 16cd4 <data_size+0x1688c>
  ac:	0c500062 	vfcmp.caf.s	$vr2,$vr3,$vr0
  b0:	022c1c00 	slti	$r0,$r0,-1273(0xb07)
  b4:	00000000 	0x00000000
  b8:	04020000 	csrrd	$r0,0x80
  bc:	75070403 	xvssran.hu.w	$xr3,$xr0,$xr1
  c0:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff6a30 <_stack+0xe3fe54cc>
  c4:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
  c8:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
  cc:	6c070403 	bgeu	$r0,$r3,1796(0x704) # 7d0 <data_size+0x388>
  d0:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
  d4:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17440 <data_size+0x16ff8>
  d8:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6644 <data_size+0x61fc>
  dc:	746e6920 	0x746e6920
  e0:	72700400 	0x72700400
  e4:	66746e69 	bge	$r19,$r9,-101268(0x2746c) # fffe7550 <_stack+0xe3fd5fec>
  e8:	05010100 	0x05010100
  ec:	000002d1 	0x000002d1
  f0:	1c000c50 	pcaddu12i	$r16,98(0x62)
  f4:	0000022c 	0x0000022c
  f8:	02d19c01 	addi.d	$r1,$r0,1127(0x467)
  fc:	66050000 	bge	$r0,$r0,-129792(0x20500) # fffe05fc <_stack+0xe3fcf098>
 100:	0100746d 	0x0100746d
 104:	02d81801 	addi.d	$r1,$r0,1542(0x606)
 108:	00000000 	0x00000000
 10c:	07060000 	0x07060000
 110:	03010069 	lu52i.d	$r9,$r3,64(0x40)
 114:	0002d105 	0x0002d105
 118:	00003700 	revb.4h	$r0,$r24
 11c:	00630700 	bstrins.w	$r0,$r24,0x3,0x1
 120:	de060401 	0xde060401
 124:	b6000002 	0xb6000002
 128:	07000000 	0x07000000
 12c:	00677261 	bstrins.w	$r1,$r19,0x7,0x1c
 130:	eb080501 	0xeb080501
 134:	df000002 	0xdf000002
 138:	08000000 	0x08000000
 13c:	01007061 	0x01007061
 140:	00ba0706 	bstrins.d	$r6,$r24,0x3a,0x1
 144:	91030000 	0x91030000
 148:	77077fbc 	0x77077fbc
 14c:	05070100 	0x05070100
 150:	000002d1 	0x000002d1
 154:	0000012d 	0x0000012d
 158:	61676109 	blt	$r8,$r9,92000(0x16760) # 168b8 <data_size+0x16470>
 15c:	01006e69 	0x01006e69
 160:	0cfc0110 	0x0cfc0110
 164:	180a1c00 	pcaddi	$r0,20704(0x50e0)
 168:	79000000 	0x79000000
 16c:	0b000002 	0x0b000002
 170:	73747570 	0x73747570
 174:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe6ae4 <_stack+0xe3fd5580>
 178:	14010067 	lu12i.w	$r7,2051(0x803)
 17c:	0002d105 	0x0002d105
 180:	00018700 	asrtgt.d	$r24,$r1
 184:	0c000600 	0x0c000600
 188:	00000000 	0x00000000
 18c:	d1051901 	0xd1051901
 190:	99000002 	0x99000002
 194:	06000001 	cacop	0x1,$r0,0
 198:	72700b00 	0x72700b00
 19c:	62746e69 	blt	$r19,$r9,-101268(0x2746c) # fffe7608 <_stack+0xe3fd60a4>
 1a0:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
 1a4:	d1051e01 	0xd1051e01
 1a8:	b1000002 	0xb1000002
 1ac:	06000001 	cacop	0x1,$r0,0
 1b0:	0da00d00 	0x0da00d00
 1b4:	02f11c00 	addi.d	$r0,$r0,-953(0xc47)
 1b8:	01c90000 	0x01c90000
 1bc:	010e0000 	0x010e0000
 1c0:	0e320156 	0x0e320156
 1c4:	30015701 	0x30015701
 1c8:	0dbc0f00 	0x0dbc0f00
 1cc:	02fd1c00 	addi.d	$r0,$r0,-185(0xf47)
 1d0:	d00d0000 	0xd00d0000
 1d4:	f11c000d 	0xf11c000d
 1d8:	ea000002 	0xea000002
 1dc:	0e000001 	0x0e000001
 1e0:	3a015601 	0x3a015601
 1e4:	0157010e 	0x0157010e
 1e8:	ec0d0031 	0xec0d0031
 1ec:	f11c000d 	0xf11c000d
 1f0:	02000002 	slti	$r2,$r0,0
 1f4:	0e000002 	0x0e000002
 1f8:	3a015601 	0x3a015601
 1fc:	0157010e 	0x0157010e
 200:	080d0030 	0x080d0030
 204:	f11c000e 	0xf11c000e
 208:	1b000002 	pcalau12i	$r2,-524288(0x80000)
 20c:	0e000002 	0x0e000002
 210:	8b025601 	0x8b025601
 214:	57010e00 	bl	-134020852(0x803010c) # f8030320 <_stack+0xdc01edbc>
 218:	0d003001 	fsel	$f1,$f0,$f12,$fcc0
 21c:	1c000e24 	pcaddu12i	$r4,113(0x71)
 220:	000002f1 	0x000002f1
 224:	00000233 	0x00000233
 228:	0156010e 	0x0156010e
 22c:	57010e40 	bl	-117243636(0x903010c) # f9030338 <_stack+0xdd01edd4>
 230:	0f003001 	0x0f003001
 234:	1c000e40 	pcaddu12i	$r0,114(0x72)
 238:	00000309 	0x00000309
 23c:	000e540d 	bytepick.d	$r13,$r0,$r21,0x4
 240:	0002f11c 	0x0002f11c
 244:	00025400 	0x00025400
 248:	56010e00 	bl	-134086388(0x802010c) # f8020354 <_stack+0xdc00edf0>
 24c:	010e3a01 	0x010e3a01
 250:	00300157 	0x00300157
 254:	000e680d 	bytepick.d	$r13,$r0,$r26,0x4
 258:	0002fd1c 	0x0002fd1c
 25c:	00026800 	0x00026800
 260:	54010e00 	bl	-134217460(0x800010c) # f800036c <_stack+0xdbfeee08>
 264:	00250802 	crc.w.w.w	$r2,$r0,$r2
 268:	000e7810 	bytepick.d	$r16,$r0,$r30,0x4
 26c:	0002fd1c 	0x0002fd1c
 270:	54010e00 	bl	-134217460(0x800010c) # f800037c <_stack+0xdbfeee18>
 274:	00250802 	crc.w.w.w	$r2,$r0,$r2
 278:	00001100 	clo.w	$r0,$r8
 27c:	000c0000 	bytepick.d	$r0,$r0,$r0,0x0
 280:	01000000 	0x01000000
 284:	02d10519 	addi.d	$r25,$r8,1089(0x441)
 288:	02900000 	addi.w	$r0,$r0,1024(0x400)
 28c:	00060000 	alsl.wu	$r0,$r0,$r0,0x1
 290:	000cdc12 	bytepick.d	$r18,$r0,$r23,0x1
 294:	0000141c 	clz.w	$r28,$r0
 298:	0002bf00 	0x0002bf00
 29c:	00000c00 	0x00000c00
 2a0:	19010000 	pcaddi	$r0,-522240(0x80800)
 2a4:	0002d105 	0x0002d105
 2a8:	0002af00 	0x0002af00
 2ac:	10000600 	addu16i.d	$r0,$r16,1(0x1)
 2b0:	1c000ce4 	pcaddu12i	$r4,103(0x67)
 2b4:	000002fd 	0x000002fd
 2b8:	0154010e 	0x0154010e
 2bc:	1000003d 	addu16i.d	$r29,$r1,0
 2c0:	1c000cbc 	pcaddu12i	$r28,101(0x65)
 2c4:	000002fd 	0x000002fd
 2c8:	0254010e 	sltui	$r14,$r8,1280(0x500)
 2cc:	00000087 	0x00000087
 2d0:	05040300 	0x05040300
 2d4:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
 2d8:	02e60413 	addi.d	$r19,$r0,-1663(0x981)
 2dc:	01030000 	fsub.d	$f0,$f0,$f0
 2e0:	61686306 	blt	$r24,$r6,92256(0x16860) # 16b40 <data_size+0x166f8>
 2e4:	de140072 	0xde140072
 2e8:	13000002 	addu16i.d	$r2,$r0,-16384(0xc000)
 2ec:	0000ba04 	0x0000ba04
 2f0:	00121500 	slt	$r0,$r8,$r5
 2f4:	00120000 	slt	$r0,$r0,$r0
 2f8:	1e010000 	pcaddu18i	$r0,2048(0x800)
 2fc:	00001505 	clz.w	$r5,$r8
 300:	00000000 	0x00000000
 304:	19010000 	pcaddi	$r0,-522240(0x80800)
 308:	00081505 	bytepick.w	$r5,$r8,$r5,0x0
 30c:	00080000 	bytepick.w	$r0,$r0,$r0,0x0
 310:	14010000 	lu12i.w	$r0,2048(0x800)
 314:	016c0005 	0x016c0005
 318:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 31c:	00000122 	0x00000122
 320:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
 324:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
 328:	2e382037 	0x2e382037
 32c:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
 330:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe649c <_stack+0xe3fd4f38>
 334:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 6c70 <data_size+0x6828>
 338:	73323370 	0x73323370
 33c:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 17068 <data_size+0x16c20>
 340:	3d686372 	0x3d686372
 344:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe72b0 <_stack+0xe3fd5d4c>
 348:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff75a8 <_stack+0xe3fe6044>
 34c:	72323368 	0x72323368
 350:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe707c <_stack+0xe3fd5b18>
 354:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe40c8 <_stack+0xe3fd2b64>
 358:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
 35c:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 166c8 <data_size+0x16280>
 360:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 68c4 <data_size+0x647c>
 364:	726f6e3d 	0x726f6e3d
 368:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
 36c:	75746d2d 	0x75746d2d
 370:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 40d4 <data_size+0x3c8c>
 374:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff71e0 <_stack+0xe3fe5c7c>
 378:	68637261 	bltu	$r19,$r1,25456(0x6370) # 66e8 <data_size+0x62a0>
 37c:	20723233 	ll.w	$r19,$r17,29232(0x7230)
 380:	2d20672d 	0x2d20672d
 384:	2d20324f 	0x2d20324f
 388:	2d6f6e66 	0x2d6f6e66
 38c:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 6d00 <data_size+0x68b8>
 390:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
 394:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff71f8 <_stack+0xe3fe5c94>
 398:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff6d08 <_stack+0xe3fe57a4>
 39c:	75700c00 	0x75700c00
 3a0:	61686374 	blt	$r27,$r20,92256(0x16860) # 16c00 <data_size+0x167b8>
 3a4:	00632e72 	bstrins.w	$r18,$r19,0x3,0xb
 3a8:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 17310 <data_size+0x16ec8>
 3ac:	77772f65 	0x77772f65
 3b0:	6f772f74 	bgeu	$r27,$r20,-35028(0x3772c) # ffff7adc <_stack+0xe3fe6578>
 3b4:	702f6b72 	vaddwev.d.wu	$vr18,$vr27,$vr26
 3b8:	5f667265 	bne	$r19,$r5,-39312(0x36670) # ffff6a28 <_stack+0xe3fe54c4>
 3bc:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff7230 <_stack+0xe3fe5ccc>
 3c0:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe6d2c <_stack+0xe3fd57c8>
 3c4:	000e7c00 	bytepick.d	$r0,$r0,$r31,0x4
 3c8:	00004c1c 	bitrev.8b	$r28,$r0
 3cc:	00047500 	alsl.w	$r0,$r8,$r29,0x1
 3d0:	07040200 	0x07040200
 3d4:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17740 <data_size+0x172f8>
 3d8:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6944 <data_size+0x64fc>
 3dc:	746e6920 	0x746e6920
 3e0:	07040200 	0x07040200
 3e4:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff7250 <_stack+0xe3fe5cec>
 3e8:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
 3ec:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 17250 <data_size+0x16e08>
 3f0:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe6d10 <_stack+0xe3fd57ac>
 3f4:	1c030074 	pcaddu12i	$r20,6147(0x1803)
 3f8:	01000000 	0x01000000
 3fc:	f8010607 	0xf8010607
 400:	04000000 	csrrd	$r0,0x0
 404:	07010063 	0x07010063
 408:	0000f806 	0x0000f806
 40c:	04020000 	csrrd	$r0,0x80
 410:	746e6905 	0x746e6905
 414:	75700500 	0x75700500
 418:	61686374 	blt	$r27,$r20,92256(0x16860) # 16c78 <data_size+0x16830>
 41c:	01010072 	fadd.d	$f18,$f3,$f0
 420:	0000f805 	0x0000f805
 424:	000e7c00 	bytepick.d	$r0,$r0,$r31,0x4
 428:	0000281c 	cto.d	$r28,$r0
 42c:	589c0100 	beq	$r8,$r0,39936(0x9c00) # a02c <data_size+0x9be4>
 430:	06000001 	cacop	0x1,$r0,0
 434:	01010063 	fadd.d	$f3,$f3,$f0
 438:	0000f811 	0x0000f811
 43c:	0001d000 	asrtgt.d	$r0,$r20
 440:	001c0700 	mul.w	$r0,$r24,$r1
 444:	03010000 	lu52i.d	$r0,$r0,64(0x40)
 448:	0000f801 	0x0000f801
 44c:	00013d00 	asrtle.d	$r8,$r15
 450:	09000800 	0x09000800
 454:	000000e0 	0x000000e0
 458:	1c000e7c 	pcaddu12i	$r28,115(0x73)
 45c:	00000030 	0x00000030
 460:	0a010301 	0x0a010301
 464:	000000ed 	0x000000ed
 468:	000001f1 	0x000001f1
 46c:	e00b0000 	0xe00b0000
 470:	a4000000 	0xa4000000
 474:	241c000e 	ldptr.w	$r14,$r0,7168(0x1c00)
 478:	01000000 	0x01000000
 47c:	00ed0c9c 	bstrpick.d	$r28,$r4,0x2d,0x3
 480:	54010000 	bl	256(0x100) # 580 <data_size+0x138>
 484:	02160000 	slti	$r0,$r0,1408(0x580)
 488:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 48c:	000001df 	0x000001df
 490:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
 494:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
 498:	2e382037 	0x2e382037
 49c:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
 4a0:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe660c <_stack+0xe3fd50a8>
 4a4:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 6de0 <data_size+0x6998>
 4a8:	73323370 	0x73323370
 4ac:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 171d8 <data_size+0x16d90>
 4b0:	3d686372 	0x3d686372
 4b4:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7420 <_stack+0xe3fd5ebc>
 4b8:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7718 <_stack+0xe3fe61b4>
 4bc:	72323368 	0x72323368
 4c0:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe71ec <_stack+0xe3fd5c88>
 4c4:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe4238 <_stack+0xe3fd2cd4>
 4c8:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
 4cc:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 16838 <data_size+0x163f0>
 4d0:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 6a34 <data_size+0x65ec>
 4d4:	726f6e3d 	0x726f6e3d
 4d8:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
 4dc:	75746d2d 	0x75746d2d
 4e0:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 4244 <data_size+0x3dfc>
 4e4:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7350 <_stack+0xe3fe5dec>
 4e8:	68637261 	bltu	$r19,$r1,25456(0x6370) # 6858 <data_size+0x6410>
 4ec:	20723233 	ll.w	$r19,$r17,29232(0x7230)
 4f0:	2d20672d 	0x2d20672d
 4f4:	2d20324f 	0x2d20324f
 4f8:	2d6f6e66 	0x2d6f6e66
 4fc:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 6e70 <data_size+0x6a28>
 500:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
 504:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff7368 <_stack+0xe3fe5e04>
 508:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff6e78 <_stack+0xe3fe5914>
 50c:	75700c00 	0x75700c00
 510:	632e7374 	blt	$r27,$r20,-53648(0x32e70) # ffff3380 <_stack+0xe3fe1e1c>
 514:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff6d40 <_stack+0xe3fe57dc>
 518:	772f656d 	0x772f656d
 51c:	772f7477 	0x772f7477
 520:	2f6b726f 	0x2f6b726f
 524:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7788 <_stack+0xe3fd6224>
 528:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7a8c <_stack+0xe3fd6528>
 52c:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 17158 <data_size+0x16d10>
 530:	0ec80062 	0x0ec80062
 534:	00a01c00 	bstrins.d	$r0,$r0,0x20,0x7
 538:	05270000 	0x05270000
 53c:	04020000 	csrrd	$r0,0x80
 540:	736e7507 	vssrarni.du.q	$vr7,$vr8,0x1d
 544:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 173a8 <data_size+0x16f60>
 548:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe6e68 <_stack+0xe3fd5904>
 54c:	04020074 	csrxchg	$r20,$r3,0x80
 550:	6e6f6c07 	bgeu	$r0,$r7,-102548(0x26f6c) # fffe74bc <_stack+0xe3fd5f58>
 554:	6e752067 	bgeu	$r3,$r7,-101088(0x27520) # fffe7a74 <_stack+0xe3fd6510>
 558:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6cc0 <_stack+0xe3fd575c>
 55c:	69206465 	bltu	$r3,$r5,73828(0x12064) # 125c0 <data_size+0x12178>
 560:	0300746e 	lu52i.d	$r14,$r3,29(0x1d)
 564:	73747570 	0x73747570
 568:	050e0100 	0x050e0100
 56c:	00000150 	0x00000150
 570:	1c000f3c 	pcaddu12i	$r28,121(0x79)
 574:	0000002c 	0x0000002c
 578:	01509c01 	0x01509c01
 57c:	73040000 	0x73040000
 580:	100e0100 	addu16i.d	$r0,$r8,896(0x380)
 584:	00000157 	0x00000157
 588:	00000204 	0x00000204
 58c:	00002805 	cto.d	$r5,$r0
 590:	10060100 	addu16i.d	$r0,$r8,384(0x180)
 594:	00000150 	0x00000150
 598:	00000118 	0x00000118
 59c:	48070006 	bceqz	$fcc0,1574656(0x180700) # 180c9c <data_size+0x180854>
 5a0:	651c000f 	bge	$r0,$r15,72704(0x11c00) # 121a0 <data_size+0x11d58>
 5a4:	2d000001 	0x2d000001
 5a8:	08000001 	0x08000001
 5ac:	f3035401 	0xf3035401
 5b0:	07005401 	0x07005401
 5b4:	1c000f50 	pcaddu12i	$r16,122(0x7a)
 5b8:	0000020d 	0x0000020d
 5bc:	00000140 	0x00000140
 5c0:	01540108 	0x01540108
 5c4:	5809003d 	beq	$r1,$r29,2304(0x900) # ec4 <data_size+0xa7c>
 5c8:	0d1c000f 	vbitsel.v	$vr15,$vr0,$vr0,$vr24
 5cc:	08000002 	0x08000002
 5d0:	3a015401 	0x3a015401
 5d4:	04020000 	csrrd	$r0,0x80
 5d8:	746e6905 	0x746e6905
 5dc:	5d040a00 	bne	$r16,$r0,66568(0x10408) # 109e4 <data_size+0x1059c>
 5e0:	02000001 	slti	$r1,$r0,0
 5e4:	68630601 	bltu	$r16,$r1,25348(0x6304) # 68e8 <data_size+0x64a0>
 5e8:	03007261 	lu52i.d	$r1,$r19,28(0x1c)
 5ec:	73747570 	0x73747570
 5f0:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe6f60 <_stack+0xe3fd59fc>
 5f4:	01010067 	fadd.d	$f7,$f3,$f0
 5f8:	00015005 	0x00015005
 5fc:	000ec800 	bytepick.d	$r0,$r0,$r18,0x5
 600:	0000741c 	0x0000741c
 604:	0d9c0100 	0x0d9c0100
 608:	04000002 	csrrd	$r2,0x0
 60c:	01010073 	fadd.d	$f19,$f3,$f0
 610:	00015715 	0x00015715
 614:	00022500 	0x00022500
 618:	00630b00 	bstrins.w	$r0,$r24,0x3,0x2
 61c:	5d060301 	bne	$r24,$r1,67072(0x10600) # 10c1c <data_size+0x107d4>
 620:	68000001 	bltu	$r0,$r1,0 # 620 <data_size+0x1d8>
 624:	0c000002 	0x0c000002
 628:	00000048 	0x00000048
 62c:	00002805 	cto.d	$r5,$r0
 630:	10060100 	addu16i.d	$r0,$r8,384(0x180)
 634:	00000150 	0x00000150
 638:	000001b8 	0x000001b8
 63c:	080d0006 	0x080d0006
 640:	081c000f 	fmadd.s	$f15,$f0,$f0,$f24
 644:	e7000000 	0xe7000000
 648:	05000001 	0x05000001
 64c:	00000028 	0x00000028
 650:	50100601 	b	-133951484(0x8041004) # f8041654 <_stack+0xdc0300f0>
 654:	d7000001 	0xd7000001
 658:	06000001 	cacop	0x1,$r0,0
 65c:	0f100900 	0x0f100900
 660:	020d1c00 	slti	$r0,$r0,839(0x347)
 664:	01080000 	0x01080000
 668:	003d0154 	0x003d0154
 66c:	0ef80700 	0x0ef80700
 670:	020d1c00 	slti	$r0,$r0,839(0x347)
 674:	01fb0000 	0x01fb0000
 678:	01080000 	0x01080000
 67c:	00870254 	bstrins.d	$r20,$r18,0x7,0x0
 680:	0f180900 	0x0f180900
 684:	020d1c00 	slti	$r0,$r0,839(0x347)
 688:	01080000 	0x01080000
 68c:	00870254 	bstrins.d	$r20,$r18,0x7,0x0
 690:	0e000000 	0x0e000000
 694:	00000028 	0x00000028
 698:	00000028 	0x00000028
 69c:	00100601 	add.w	$r1,$r16,$r1
 6a0:	00000216 	0x00000216
 6a4:	02aa0004 	addi.w	$r4,$r0,-1408(0xa80)
 6a8:	01040000 	0x01040000
 6ac:	20554e47 	ll.w	$r7,$r18,21836(0x554c)
 6b0:	20373143 	ll.w	$r3,$r10,14128(0x3730)
 6b4:	2e332e38 	0x2e332e38
 6b8:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 133d8 <data_size+0x12f90>
 6bc:	3d696261 	0x3d696261
 6c0:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
 6c4:	2d207332 	0x2d207332
 6c8:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7928 <_stack+0xe3fe63c4>
 6cc:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff7308 <_stack+0xe3fe5da4>
 6d0:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 16e3c <data_size+0x169f4>
 6d4:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
 6d8:	2d207232 	0x2d207232
 6dc:	7570666d 	0x7570666d
 6e0:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe764c <_stack+0xe3fd60e8>
 6e4:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 13404 <data_size+0x12fbc>
 6e8:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 7654 <data_size+0x720c>
 6ec:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe4458 <_stack+0xe3fd2ef4>
 6f0:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 17460 <data_size+0x17018>
 6f4:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 13414 <data_size+0x12fcc>
 6f8:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 1756c <data_size+0x17124>
 6fc:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff7668 <_stack+0xe3fe6104>
 700:	7261676e 	0x7261676e
 704:	32336863 	0x32336863
 708:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff3428 <_stack+0xe3fe1ec4>
 70c:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
 710:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe6d3c <_stack+0xe3fd57d8>
 714:	75622d6f 	0x75622d6f
 718:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 17b84 <data_size+0x1773c>
 71c:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe343c <_stack+0xe3fd1ed8>
 720:	702d6f6e 	0x702d6f6e
 724:	0c006369 	0x0c006369
 728:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe7098 <_stack+0xe3fd5b34>
 72c:	73616274 	vssrani.w.d	$vr20,$vr19,0x18
 730:	00632e65 	bstrins.w	$r5,$r19,0x3,0xb
 734:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 1769c <data_size+0x17254>
 738:	77772f65 	0x77772f65
 73c:	6f772f74 	bgeu	$r27,$r20,-35028(0x3772c) # ffff7e68 <_stack+0xe3fe6904>
 740:	702f6b72 	vaddwev.d.wu	$vr18,$vr27,$vr26
 744:	5f667265 	bne	$r19,$r5,-39312(0x36670) # ffff6db4 <_stack+0xe3fe5850>
 748:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff75bc <_stack+0xe3fe6058>
 74c:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe70b8 <_stack+0xe3fd5b54>
 750:	000f6800 	bytepick.d	$r0,$r0,$r26,0x6
 754:	0000e81c 	0x0000e81c
 758:	00069000 	alsl.wu	$r0,$r0,$r4,0x2
 75c:	07040200 	0x07040200
 760:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17acc <data_size+0x17684>
 764:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6cd0 <data_size+0x6888>
 768:	746e6920 	0x746e6920
 76c:	07040200 	0x07040200
 770:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff75dc <_stack+0xe3fe6078>
 774:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
 778:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 175dc <data_size+0x17194>
 77c:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe709c <_stack+0xe3fd5b38>
 780:	70030074 	vsle.w	$vr20,$vr3,$vr0
 784:	746e6972 	0x746e6972
 788:	65736162 	bge	$r11,$r2,95072(0x17360) # 17ae8 <data_size+0x176a0>
 78c:	05010100 	0x05010100
 790:	000001e2 	0x000001e2
 794:	1c000f68 	pcaddu12i	$r8,123(0x7b)
 798:	000000e8 	0x000000e8
 79c:	01e29c01 	0x01e29c01
 7a0:	76040000 	0x76040000
 7a4:	14010100 	lu12i.w	$r0,2056(0x808)
 7a8:	000001e9 	0x000001e9
 7ac:	0000027b 	0x0000027b
 7b0:	01007704 	0x01007704
 7b4:	01e21a01 	0x01e21a01
 7b8:	02cb0000 	addi.d	$r0,$r0,704(0x2c0)
 7bc:	62040000 	blt	$r0,$r0,-130048(0x20400) # fffe0bbc <_stack+0xe3fcf658>
 7c0:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
 7c4:	e2200101 	0xe2200101
 7c8:	0f000001 	0x0f000001
 7cc:	04000003 	csrrd	$r3,0x0
 7d0:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6f38 <_stack+0xe3fd59d4>
 7d4:	29010100 	st.b	$r0,$r8,64(0x40)
 7d8:	000001e2 	0x000001e2
 7dc:	00000353 	0x00000353
 7e0:	01006905 	0x01006905
 7e4:	01e20603 	0x01e20603
 7e8:	03980000 	ori	$r0,$r0,0x600
 7ec:	6a050000 	bltu	$r0,$r0,-129792(0x20500) # fffe0cec <_stack+0xe3fcf788>
 7f0:	08030100 	0x08030100
 7f4:	000001e2 	0x000001e2
 7f8:	000003eb 	0x000003eb
 7fc:	01006305 	0x01006305
 800:	01e20604 	0x01e20604
 804:	04380000 	csrrd	$r0,0xe00
 808:	62060000 	blt	$r0,$r0,-129536(0x20600) # fffe0e08 <_stack+0xe3fcf8a4>
 80c:	01006675 	0x01006675
 810:	01f50705 	0x01f50705
 814:	91030000 	0x91030000
 818:	76057fb0 	0x76057fb0
 81c:	65756c61 	bge	$r3,$r1,95596(0x1756c) # 17d88 <data_size+0x17940>
 820:	10060100 	addu16i.d	$r0,$r8,384(0x180)
 824:	000000cd 	0x000000cd
 828:	0000044b 	0x0000044b
 82c:	00102407 	add.w	$r7,$r0,$r9
 830:	0000201c 	clo.d	$r28,$r0
 834:	0001bc00 	asrtgt.d	$r0,$r15
 838:	00300800 	0x00300800
 83c:	0a010000 	0x0a010000
 840:	0001e202 	0x0001e202
 844:	0001ab00 	asrtgt.d	$r24,$r10
 848:	0a000900 	0x0a000900
 84c:	1c001034 	pcaddu12i	$r20,129(0x81)
 850:	0000020d 	0x0000020d
 854:	0254010b 	sltui	$r11,$r8,1280(0x500)
 858:	00002d08 	ctz.d	$r8,$r8
 85c:	000fd00c 	bytepick.d	$r12,$r0,$r20,0x7
 860:	00002c1c 	ctz.d	$r28,$r0
 864:	00300800 	0x00300800
 868:	0a010000 	0x0a010000
 86c:	0001e202 	0x0001e202
 870:	0001d700 	asrtgt.d	$r24,$r21
 874:	0d000900 	fsel	$f0,$f8,$f2,$fcc0
 878:	1c000ffc 	pcaddu12i	$r28,127(0x7f)
 87c:	0000020d 	0x0000020d
 880:	04020000 	csrrd	$r0,0x80
 884:	746e6905 	0x746e6905
 888:	05040200 	0x05040200
 88c:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff76f8 <_stack+0xe3fe6194>
 890:	746e6920 	0x746e6920
 894:	02050e00 	slti	$r0,$r16,323(0x143)
 898:	02050000 	slti	$r0,$r0,320(0x140)
 89c:	bd0f0000 	0xbd0f0000
 8a0:	3f000000 	0x3f000000
 8a4:	06010200 	cacop	0x0,$r16,64(0x40)
 8a8:	72616863 	0x72616863
 8ac:	00301000 	0x00301000
 8b0:	00300000 	0x00300000
 8b4:	0a010000 	0x0a010000
 8b8:	02ff0002 	addi.d	$r2,$r0,-64(0xfc0)
 8bc:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 8c0:	0000038f 	0x0000038f
 8c4:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
 8c8:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
 8cc:	2e382037 	0x2e382037
 8d0:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
 8d4:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe6a40 <_stack+0xe3fd54dc>
 8d8:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 7214 <data_size+0x6dcc>
 8dc:	73323370 	0x73323370
 8e0:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 1760c <data_size+0x171c4>
 8e4:	3d686372 	0x3d686372
 8e8:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7854 <_stack+0xe3fd62f0>
 8ec:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7b4c <_stack+0xe3fe65e8>
 8f0:	72323368 	0x72323368
 8f4:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe7620 <_stack+0xe3fd60bc>
 8f8:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe466c <_stack+0xe3fd3108>
 8fc:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
 900:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 16c6c <data_size+0x16824>
 904:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 6e68 <data_size+0x6a20>
 908:	726f6e3d 	0x726f6e3d
 90c:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
 910:	75746d2d 	0x75746d2d
 914:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 4678 <data_size+0x4230>
 918:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7784 <_stack+0xe3fe6220>
 91c:	68637261 	bltu	$r19,$r1,25456(0x6370) # 6c8c <data_size+0x6844>
 920:	20723233 	ll.w	$r19,$r17,29232(0x7230)
 924:	2d20672d 	0x2d20672d
 928:	2d20324f 	0x2d20324f
 92c:	2d6f6e66 	0x2d6f6e66
 930:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 72a4 <data_size+0x6e5c>
 934:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
 938:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff779c <_stack+0xe3fe6238>
 93c:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff72ac <_stack+0xe3fe5d48>
 940:	69740c00 	bltu	$r0,$r0,95244(0x1740c) # 17d4c <data_size+0x17904>
 944:	632e656d 	blt	$r11,$r13,-53660(0x32e64) # ffff37a8 <_stack+0xe3fe2244>
 948:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff7174 <_stack+0xe3fe5c10>
 94c:	772f656d 	0x772f656d
 950:	772f7477 	0x772f7477
 954:	2f6b726f 	0x2f6b726f
 958:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7bbc <_stack+0xe3fd6658>
 95c:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7ec0 <_stack+0xe3fd695c>
 960:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 1758c <data_size+0x17144>
 964:	10500062 	addu16i.d	$r2,$r3,5120(0x1400)
 968:	01041c00 	0x01041c00
 96c:	08530000 	fmsub.s	$f0,$f0,$f0,$f6
 970:	04020000 	csrrd	$r0,0x80
 974:	736e7507 	vssrarni.du.q	$vr7,$vr8,0x1d
 978:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 177dc <data_size+0x17394>
 97c:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe729c <_stack+0xe3fd5d38>
 980:	04020074 	csrxchg	$r20,$r3,0x80
 984:	6e6f6c07 	bgeu	$r0,$r7,-102548(0x26f6c) # fffe78f0 <_stack+0xe3fd638c>
 988:	6e752067 	bgeu	$r3,$r7,-101088(0x27520) # fffe7ea8 <_stack+0xe3fd6944>
 98c:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe70f4 <_stack+0xe3fd5b90>
 990:	69206465 	bltu	$r3,$r5,73828(0x12064) # 129f4 <data_size+0x125ac>
 994:	0300746e 	lu52i.d	$r14,$r3,29(0x1d)
 998:	6f6c635f 	bgeu	$r26,$r31,-37792(0x36c60) # ffff75f8 <_stack+0xe3fe6094>
 99c:	745f6b63 	0x745f6b63
 9a0:	17030200 	lu32i.d	$r0,-518128(0x81810)
 9a4:	000000c8 	0x000000c8
 9a8:	69050402 	bltu	$r0,$r2,66820(0x10504) # 10eac <data_size+0x10a64>
 9ac:	0400746e 	csrxchg	$r14,$r3,0x1d
 9b0:	656d6974 	bge	$r11,$r20,93544(0x16d68) # 17718 <data_size+0x172d0>
 9b4:	63657073 	blt	$r3,$r19,-39568(0x36570) # ffff6f24 <_stack+0xe3fe59c0>
 9b8:	1f021000 	pcaddu18i	$r0,-520064(0x81080)
 9bc:	00014b08 	0x00014b08
 9c0:	76740500 	0x76740500
 9c4:	6365735f 	blt	$r26,$r31,-39568(0x36570) # ffff6f34 <_stack+0xe3fe59d0>
 9c8:	0b200200 	0x0b200200
 9cc:	000000dd 	0x000000dd
 9d0:	76740500 	0x76740500
 9d4:	65736e5f 	bge	$r18,$r31,95084(0x1736c) # 17d40 <data_size+0x178f8>
 9d8:	21020063 	sc.w	$r3,$r3,512(0x200)
 9dc:	0000dd0b 	0x0000dd0b
 9e0:	74050400 	xvsle.wu	$xr0,$xr0,$xr1
 9e4:	73755f76 	0x73755f76
 9e8:	02006365 	slti	$r5,$r27,24(0x18)
 9ec:	00dd0b22 	bstrpick.d	$r2,$r25,0x1d,0x2
 9f0:	05080000 	0x05080000
 9f4:	6d5f7674 	bgeu	$r19,$r20,89972(0x15f74) # 16968 <data_size+0x16520>
 9f8:	00636573 	bstrins.w	$r19,$r11,0x3,0x19
 9fc:	dd0b2302 	0xdd0b2302
 a00:	0c000000 	0x0c000000
 a04:	65670600 	bge	$r16,$r0,91908(0x16704) # 17108 <data_size+0x16cc0>
 a08:	73755f74 	0x73755f74
 a0c:	0f3c0100 	0x0f3c0100
 a10:	000000c8 	0x000000c8
 a14:	1c001124 	pcaddu12i	$r4,137(0x89)
 a18:	00000030 	0x00000030
 a1c:	01939c01 	0x01939c01
 a20:	6e070000 	bgeu	$r0,$r0,-129280(0x20700) # fffe1120 <_stack+0xe3fcfbbc>
 a24:	133e0100 	addu16i.d	$r0,$r8,-12416(0xcf80)
 a28:	000000c8 	0x000000c8
 a2c:	000004ab 	0x000004ab
 a30:	0002dc08 	0x0002dc08
 a34:	00112400 	sub.w	$r0,$r0,$r9
 a38:	0000a81c 	0x0000a81c
 a3c:	093f0100 	0x093f0100
 a40:	0000a809 	0x0000a809
 a44:	02f00a00 	addi.d	$r0,$r16,-1022(0xc02)
 a48:	00000000 	0x00000000
 a4c:	65670600 	bge	$r16,$r0,91908(0x16704) # 17150 <data_size+0x16d08>
 a50:	736e5f74 	vssrarni.du.q	$vr20,$vr27,0x17
 a54:	0f330100 	0x0f330100
 a58:	000000c8 	0x000000c8
 a5c:	1c001100 	pcaddu12i	$r0,136(0x88)
 a60:	00000024 	0x00000024
 a64:	01db9c01 	0x01db9c01
 a68:	6e070000 	bgeu	$r0,$r0,-129280(0x20700) # fffe1168 <_stack+0xe3fcfc04>
 a6c:	13350100 	addu16i.d	$r0,$r8,-12992(0xcd40)
 a70:	000000c8 	0x000000c8
 a74:	000004e2 	0x000004e2
 a78:	0002dc08 	0x0002dc08
 a7c:	00110000 	sub.w	$r0,$r0,$r0
 a80:	0000901c 	0x0000901c
 a84:	09360100 	0x09360100
 a88:	00009009 	0x00009009
 a8c:	02f00a00 	addi.d	$r0,$r16,-1022(0xc02)
 a90:	00000000 	0x00000000
 a94:	65670b00 	bge	$r24,$r0,91912(0x16708) # 1719c <data_size+0x16d54>
 a98:	6c635f74 	bgeu	$r27,$r20,25436(0x635c) # 6df4 <data_size+0x69ac>
 a9c:	006b636f 	bstrins.w	$r15,$r27,0xb,0x18
 aa0:	c80f2c01 	0xc80f2c01
 aa4:	fc000000 	0xfc000000
 aa8:	0c000001 	0x0c000001
 aac:	2e01006e 	0x2e01006e
 ab0:	0000c813 	0x0000c813
 ab4:	63060000 	blt	$r0,$r0,-64000(0x30600) # ffff10b4 <_stack+0xe3fdfb50>
 ab8:	6b636f6c 	bltu	$r27,$r12,-40084(0x3636c) # ffff6e24 <_stack+0xe3fe58c0>
 abc:	7465675f 	xvavg.w	$xr31,$xr26,$xr25
 ac0:	656d6974 	bge	$r11,$r20,93544(0x16d68) # 17828 <data_size+0x173e0>
 ac4:	0f200100 	0x0f200100
 ac8:	000000c8 	0x000000c8
 acc:	1c001078 	pcaddu12i	$r24,131(0x83)
 ad0:	00000084 	0x00000084
 ad4:	02699c01 	sltui	$r1,$r0,-1433(0xa67)
 ad8:	730d0000 	vextl.qu.du	$vr0,$vr0
 adc:	01006c65 	0x01006c65
 ae0:	00ee2120 	bstrpick.d	$r0,$r9,0x2e,0x8
 ae4:	05100000 	0x05100000
 ae8:	740e0000 	0x740e0000
 aec:	0100706d 	0x0100706d
 af0:	02693620 	sltui	$r0,$r17,-1459(0xa4d)
 af4:	55010000 	bl	65792(0x10100) # 10bf4 <data_size+0x107ac>
 af8:	01006e07 	0x01006e07
 afc:	00c81322 	bstrpick.d	$r2,$r25,0x8,0x4
 b00:	05310000 	0x05310000
 b04:	dc080000 	0xdc080000
 b08:	78000002 	0x78000002
 b0c:	781c0010 	0x781c0010
 b10:	01000000 	0x01000000
 b14:	78090923 	0x78090923
 b18:	0a000000 	0x0a000000
 b1c:	000002f0 	0x000002f0
 b20:	0f000000 	0x0f000000
 b24:	0000f504 	0x0000f504
 b28:	65671000 	bge	$r0,$r0,91920(0x16710) # 17238 <data_size+0x16df0>
 b2c:	6f635f74 	bgeu	$r27,$r20,-40100(0x3635c) # ffff6e88 <_stack+0xe3fe5924>
 b30:	5f746e75 	bne	$r19,$r21,-35732(0x3746c) # ffff7f9c <_stack+0xe3fe6a38>
 b34:	0100796d 	0x0100796d
 b38:	00c80f16 	bstrpick.d	$r22,$r24,0x8,0x3
 b3c:	10700000 	addu16i.d	$r0,$r0,7168(0x1c00)
 b40:	00081c00 	bytepick.w	$r0,$r0,$r7,0x0
 b44:	9c010000 	0x9c010000
 b48:	0000029f 	0x0000029f
 b4c:	01006e11 	0x01006e11
 b50:	00c81318 	bstrpick.d	$r24,$r24,0x8,0x4
 b54:	54010000 	bl	256(0x100) # c54 <data_size+0x80c>
 b58:	65671000 	bge	$r0,$r0,91920(0x16710) # 17268 <data_size+0x16e20>
 b5c:	6f635f74 	bgeu	$r27,$r20,-40100(0x3635c) # ffff6eb8 <_stack+0xe3fe5954>
 b60:	00746e75 	bstrins.w	$r21,$r19,0x14,0x1b
 b64:	c80f1101 	0xc80f1101
 b68:	50000000 	b	0 # b68 <data_size+0x720>
 b6c:	1c1c0010 	pcaddu12i	$r16,57344(0xe000)
 b70:	01000000 	0x01000000
 b74:	0002dc9c 	0x0002dc9c
 b78:	02dc0800 	addi.d	$r0,$r0,1794(0x702)
 b7c:	10500000 	addu16i.d	$r0,$r0,5120(0x1400)
 b80:	00601c00 	bstrins.w	$r0,$r0,0x0,0x7
 b84:	13010000 	addu16i.d	$r0,$r0,-16320(0xc040)
 b88:	0060090d 	bstrins.w	$r13,$r8,0x0,0x2
 b8c:	f00a0000 	0xf00a0000
 b90:	00000002 	0x00000002
 b94:	5f120000 	bne	$r0,$r0,-60928(0x31200) # ffff1d94 <_stack+0xe3fe0830>
 b98:	5f746567 	bne	$r11,$r7,-35740(0x37464) # ffff7ffc <_stack+0xe3fe6a98>
 b9c:	6e756f63 	bgeu	$r27,$r3,-101012(0x2756c) # fffe8108 <_stack+0xe3fd6ba4>
 ba0:	04010074 	csrxchg	$r20,$r3,0x40
 ba4:	0000c80f 	0x0000c80f
 ba8:	5f0c0100 	bne	$r8,$r0,-62464(0x30c00) # ffff17a8 <_stack+0xe3fe0244>
 bac:	746e6f63 	0x746e6f63
 bb0:	006c6176 	bstrins.w	$r22,$r11,0xc,0x18
 bb4:	c8130601 	0xc8130601
 bb8:	00000000 	0x00000000
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
  24:	012e0400 	0x012e0400
  28:	0803193f 	0x0803193f
  2c:	0b3b0b3a 	0x0b3b0b3a
  30:	19270b39 	pcaddi	$r25,-444327(0x93859)
  34:	01111349 	fscaleb.d	$f9,$f26,$f4
  38:	18400612 	pcaddi	$r18,131120(0x20030)
  3c:	01194297 	0x01194297
  40:	05000013 	0x05000013
  44:	08030005 	0x08030005
  48:	0b3b0b3a 	0x0b3b0b3a
  4c:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
  50:	00001702 	clz.w	$r2,$r24
  54:	00001806 	cto.w	$r6,$r0
  58:	00340700 	0x00340700
  5c:	0b3a0803 	0x0b3a0803
  60:	0b390b3b 	0x0b390b3b
  64:	17021349 	lu32i.d	$r9,-520038(0x8109a)
  68:	34080000 	0x34080000
  6c:	3a080300 	0x3a080300
  70:	390b3b0b 	0x390b3b0b
  74:	0213490b 	slti	$r11,$r8,1234(0x4d2)
  78:	09000018 	0x09000018
  7c:	0803000a 	0x0803000a
  80:	0b3b0b3a 	0x0b3b0b3a
  84:	01110b39 	fscaleb.d	$f25,$f25,$f2
  88:	0b0a0000 	0x0b0a0000
  8c:	01175501 	0x01175501
  90:	0b000013 	0x0b000013
  94:	193f012e 	pcaddi	$r14,-395255(0x9f809)
  98:	0b3a0803 	0x0b3a0803
  9c:	0b390b3b 	0x0b390b3b
  a0:	193c1349 	pcaddi	$r9,-401254(0x9e09a)
  a4:	00001301 	clo.w	$r1,$r24
  a8:	3f012e0c 	0x3f012e0c
  ac:	3a0e0319 	0x3a0e0319
  b0:	390b3b0b 	0x390b3b0b
  b4:	3c13490b 	0x3c13490b
  b8:	00130119 	maskeqz	$r25,$r8,$r0
  bc:	82890d00 	0x82890d00
  c0:	01110101 	fscaleb.d	$f1,$f8,$f0
  c4:	13011331 	addu16i.d	$r17,$r25,-16316(0xc044)
  c8:	8a0e0000 	0x8a0e0000
  cc:	02000182 	slti	$r2,$r12,0
  d0:	18429118 	pcaddi	$r24,136328(0x21488)
  d4:	890f0000 	0x890f0000
  d8:	11000182 	addu16i.d	$r2,$r12,16384(0x4000)
  dc:	00133101 	maskeqz	$r1,$r8,$r12
  e0:	82891000 	0x82891000
  e4:	01110101 	fscaleb.d	$f1,$f8,$f0
  e8:	00001331 	clo.w	$r17,$r25
  ec:	55010b11 	bl	-62586616(0xc450108) # fc4501f4 <_stack+0xe043ec90>
  f0:	12000017 	addu16i.d	$r23,$r0,-32768(0x8000)
  f4:	0111010b 	fscaleb.d	$f11,$f8,$f0
  f8:	13010612 	addu16i.d	$r18,$r16,-16319(0xc041)
  fc:	0f130000 	0x0f130000
 100:	490b0b00 	0x490b0b00
 104:	14000013 	lu12i.w	$r19,0
 108:	13490026 	addu16i.d	$r6,$r1,-11712(0xd240)
 10c:	2e150000 	0x2e150000
 110:	3c193f00 	0x3c193f00
 114:	030e6e19 	lu52i.d	$r25,$r16,923(0x39b)
 118:	3b0b3a0e 	0x3b0b3a0e
 11c:	000b390b 	0x000b390b
 120:	11010000 	addu16i.d	$r0,$r0,16448(0x4040)
 124:	13082501 	addu16i.d	$r1,$r8,-15863(0xc209)
 128:	1b08030b 	pcalau12i	$r11,-507880(0x84018)
 12c:	12011108 	addu16i.d	$r8,$r8,-32700(0x8044)
 130:	00171006 	sll.w	$r6,$r0,$r4
 134:	00240200 	crc.w.b.w	$r0,$r16,$r0
 138:	0b3e0b0b 	0x0b3e0b0b
 13c:	00000803 	0x00000803
 140:	3f012e03 	0x3f012e03
 144:	3a0e0319 	0x3a0e0319
 148:	390b3b0b 	0x390b3b0b
 14c:	010b200b 	fmin.d	$f11,$f0,$f8
 150:	04000013 	csrrd	$r19,0x0
 154:	08030005 	0x08030005
 158:	0b3b0b3a 	0x0b3b0b3a
 15c:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 160:	2e050000 	0x2e050000
 164:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 168:	3b0b3a08 	0x3b0b3a08
 16c:	270b390b 	stptr.d	$r11,$r8,2872(0xb38)
 170:	11134919 	addu16i.d	$r25,$r8,17618(0x44d2)
 174:	40061201 	beqz	$r16,263696(0x40610) # 40784 <data_size+0x4033c>
 178:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 17c:	00001301 	clo.w	$r1,$r24
 180:	03000506 	lu52i.d	$r6,$r8,1(0x1)
 184:	3b0b3a08 	0x3b0b3a08
 188:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0cc0 <data_size+0x2d0878>
 18c:	00170213 	sll.w	$r19,$r16,$r0
 190:	012e0700 	0x012e0700
 194:	0e03193f 	0x0e03193f
 198:	0b3b0b3a 	0x0b3b0b3a
 19c:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 1a0:	1301193c 	addu16i.d	$r28,$r9,-16314(0xc046)
 1a4:	18080000 	pcaddi	$r0,16384(0x4000)
 1a8:	09000000 	0x09000000
 1ac:	1331011d 	addu16i.d	$r29,$r8,-13248(0xcc40)
 1b0:	17550152 	lu32i.d	$r18,-350198(0xaa80a)
 1b4:	0b590b58 	0x0b590b58
 1b8:	00000b57 	0x00000b57
 1bc:	3100050a 	0x3100050a
 1c0:	00170213 	sll.w	$r19,$r16,$r0
 1c4:	012e0b00 	0x012e0b00
 1c8:	01111331 	fscaleb.d	$f17,$f25,$f4
 1cc:	18400612 	pcaddi	$r18,131120(0x20030)
 1d0:	00194297 	srl.d	$r23,$r20,$r16
 1d4:	00050c00 	alsl.w	$r0,$r0,$r3,0x3
 1d8:	18021331 	pcaddi	$r17,4249(0x1099)
 1dc:	01000000 	0x01000000
 1e0:	08250111 	fmadd.d	$f17,$f8,$f0,$f10
 1e4:	08030b13 	0x08030b13
 1e8:	0111081b 	fscaleb.d	$f27,$f0,$f2
 1ec:	17100612 	lu32i.d	$r18,-491472(0x88030)
 1f0:	24020000 	ldptr.w	$r0,$r0,512(0x200)
 1f4:	3e0b0b00 	0x3e0b0b00
 1f8:	0008030b 	bytepick.w	$r11,$r24,$r0,0x0
 1fc:	012e0300 	0x012e0300
 200:	0803193f 	0x0803193f
 204:	0b3b0b3a 	0x0b3b0b3a
 208:	19270b39 	pcaddi	$r25,-444327(0x93859)
 20c:	01111349 	fscaleb.d	$f9,$f26,$f4
 210:	18400612 	pcaddi	$r18,131120(0x20030)
 214:	01194297 	0x01194297
 218:	04000013 	csrrd	$r19,0x0
 21c:	08030005 	0x08030005
 220:	0b3b0b3a 	0x0b3b0b3a
 224:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 228:	00001702 	clz.w	$r2,$r24
 22c:	3f012e05 	0x3f012e05
 230:	3a0e0319 	0x3a0e0319
 234:	390b3b0b 	0x390b3b0b
 238:	3c13490b 	0x3c13490b
 23c:	00130119 	maskeqz	$r25,$r8,$r0
 240:	00180600 	sra.w	$r0,$r16,$r1
 244:	89070000 	0x89070000
 248:	11010182 	addu16i.d	$r2,$r12,16448(0x4040)
 24c:	01133101 	fcopysign.d	$f1,$f8,$f12
 250:	08000013 	0x08000013
 254:	0001828a 	0x0001828a
 258:	42911802 	beqz	$r0,692504(0xa9118) # a9370 <data_size+0xa8f28>
 25c:	09000018 	0x09000018
 260:	01018289 	0x01018289
 264:	13310111 	addu16i.d	$r17,$r8,-13248(0xcc40)
 268:	0f0a0000 	0x0f0a0000
 26c:	490b0b00 	0x490b0b00
 270:	0b000013 	0x0b000013
 274:	08030034 	0x08030034
 278:	0b3b0b3a 	0x0b3b0b3a
 27c:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 280:	00001702 	clz.w	$r2,$r24
 284:	55010b0c 	bl	-63897336(0xc310108) # fc31038c <_stack+0xe02fee28>
 288:	0d000017 	fsel	$f23,$f0,$f0,$fcc0
 28c:	0111010b 	fscaleb.d	$f11,$f8,$f0
 290:	13010612 	addu16i.d	$r18,$r16,-16319(0xc041)
 294:	2e0e0000 	0x2e0e0000
 298:	3c193f00 	0x3c193f00
 29c:	030e6e19 	lu52i.d	$r25,$r16,923(0x39b)
 2a0:	3b0b3a0e 	0x3b0b3a0e
 2a4:	000b390b 	0x000b390b
 2a8:	11010000 	addu16i.d	$r0,$r0,16448(0x4040)
 2ac:	13082501 	addu16i.d	$r1,$r8,-15863(0xc209)
 2b0:	1b08030b 	pcalau12i	$r11,-507880(0x84018)
 2b4:	12011108 	addu16i.d	$r8,$r8,-32700(0x8044)
 2b8:	00171006 	sll.w	$r6,$r0,$r4
 2bc:	00240200 	crc.w.b.w	$r0,$r16,$r0
 2c0:	0b3e0b0b 	0x0b3e0b0b
 2c4:	00000803 	0x00000803
 2c8:	3f012e03 	0x3f012e03
 2cc:	3a080319 	0x3a080319
 2d0:	390b3b0b 	0x390b3b0b
 2d4:	4919270b 	0x4919270b
 2d8:	12011113 	addu16i.d	$r19,$r8,-32700(0x8044)
 2dc:	97184006 	0x97184006
 2e0:	13011942 	addu16i.d	$r2,$r10,-16314(0xc046)
 2e4:	05040000 	0x05040000
 2e8:	3a080300 	0x3a080300
 2ec:	390b3b0b 	0x390b3b0b
 2f0:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 2f4:	05000017 	0x05000017
 2f8:	08030034 	0x08030034
 2fc:	0b3b0b3a 	0x0b3b0b3a
 300:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 304:	00001702 	clz.w	$r2,$r24
 308:	03003406 	lu52i.d	$r6,$r0,13(0xd)
 30c:	3b0b3a08 	0x3b0b3a08
 310:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0e48 <data_size+0x2d0a00>
 314:	00180213 	sra.w	$r19,$r16,$r0
 318:	010b0700 	fmin.d	$f0,$f24,$f1
 31c:	06120111 	cacop	0x11,$r8,1152(0x480)
 320:	00001301 	clo.w	$r1,$r24
 324:	3f012e08 	0x3f012e08
 328:	3a0e0319 	0x3a0e0319
 32c:	390b3b0b 	0x390b3b0b
 330:	3c13490b 	0x3c13490b
 334:	00130119 	maskeqz	$r25,$r8,$r0
 338:	00180900 	sra.w	$r0,$r8,$r2
 33c:	890a0000 	0x890a0000
 340:	11010182 	addu16i.d	$r2,$r12,16448(0x4040)
 344:	00133101 	maskeqz	$r1,$r8,$r12
 348:	828a0b00 	0x828a0b00
 34c:	18020001 	pcaddi	$r1,4096(0x1000)
 350:	00184291 	sra.w	$r17,$r20,$r16
 354:	010b0c00 	fmin.d	$f0,$f0,$f3
 358:	06120111 	cacop	0x11,$r8,1152(0x480)
 35c:	890d0000 	0x890d0000
 360:	11000182 	addu16i.d	$r2,$r12,16384(0x4000)
 364:	00133101 	maskeqz	$r1,$r8,$r12
 368:	01010e00 	fadd.d	$f0,$f16,$f3
 36c:	13011349 	addu16i.d	$r9,$r26,-16316(0xc044)
 370:	210f0000 	sc.w	$r0,$r0,3840(0xf00)
 374:	2f134900 	0x2f134900
 378:	1000000b 	addu16i.d	$r11,$r0,0
 37c:	193f002e 	pcaddi	$r14,-395263(0x9f801)
 380:	0e6e193c 	0x0e6e193c
 384:	0b3a0e03 	0x0b3a0e03
 388:	0b390b3b 	0x0b390b3b
 38c:	01000000 	0x01000000
 390:	08250111 	fmadd.d	$f17,$f8,$f0,$f10
 394:	08030b13 	0x08030b13
 398:	0111081b 	fscaleb.d	$f27,$f0,$f2
 39c:	17100612 	lu32i.d	$r18,-491472(0x88030)
 3a0:	24020000 	ldptr.w	$r0,$r0,512(0x200)
 3a4:	3e0b0b00 	0x3e0b0b00
 3a8:	0008030b 	bytepick.w	$r11,$r24,$r0,0x0
 3ac:	00160300 	orn	$r0,$r24,$r0
 3b0:	0b3a0803 	0x0b3a0803
 3b4:	0b390b3b 	0x0b390b3b
 3b8:	00001349 	clo.w	$r9,$r26
 3bc:	03011304 	lu52i.d	$r4,$r24,68(0x44)
 3c0:	3a0b0b08 	0x3a0b0b08
 3c4:	390b3b0b 	0x390b3b0b
 3c8:	0013010b 	maskeqz	$r11,$r8,$r0
 3cc:	000d0500 	bytepick.d	$r0,$r8,$r1,0x2
 3d0:	0b3a0803 	0x0b3a0803
 3d4:	0b390b3b 	0x0b390b3b
 3d8:	0b381349 	0x0b381349
 3dc:	2e060000 	0x2e060000
 3e0:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 3e4:	3b0b3a08 	0x3b0b3a08
 3e8:	270b390b 	stptr.d	$r11,$r8,2872(0xb38)
 3ec:	11134919 	addu16i.d	$r25,$r8,17618(0x44d2)
 3f0:	40061201 	beqz	$r16,263696(0x40610) # 40a00 <data_size+0x405b8>
 3f4:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 3f8:	00001301 	clo.w	$r1,$r24
 3fc:	03003407 	lu52i.d	$r7,$r0,13(0xd)
 400:	3b0b3a08 	0x3b0b3a08
 404:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0f3c <data_size+0x2d0af4>
 408:	00170213 	sll.w	$r19,$r16,$r0
 40c:	011d0800 	0x011d0800
 410:	01521331 	0x01521331
 414:	0b581755 	0x0b581755
 418:	0b570b59 	0x0b570b59
 41c:	0b090000 	0x0b090000
 420:	00175501 	sll.w	$r1,$r8,$r21
 424:	00340a00 	0x00340a00
 428:	00001331 	clo.w	$r17,$r25
 42c:	3f012e0b 	0x3f012e0b
 430:	3a080319 	0x3a080319
 434:	390b3b0b 	0x390b3b0b
 438:	0113490b 	fcopysign.d	$f11,$f8,$f18
 43c:	0c000013 	0x0c000013
 440:	08030034 	0x08030034
 444:	0b3b0b3a 	0x0b3b0b3a
 448:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 44c:	050d0000 	0x050d0000
 450:	3a080300 	0x3a080300
 454:	390b3b0b 	0x390b3b0b
 458:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 45c:	0e000017 	0x0e000017
 460:	08030005 	0x08030005
 464:	0b3b0b3a 	0x0b3b0b3a
 468:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 46c:	00001802 	cto.w	$r2,$r0
 470:	0b000f0f 	0x0b000f0f
 474:	0013490b 	maskeqz	$r11,$r8,$r18
 478:	012e1000 	0x012e1000
 47c:	0803193f 	0x0803193f
 480:	0b3b0b3a 	0x0b3b0b3a
 484:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 488:	06120111 	cacop	0x11,$r8,1152(0x480)
 48c:	42971840 	beqz	$r2,169752(0x29718) # 29ba4 <data_size+0x2975c>
 490:	00130119 	maskeqz	$r25,$r8,$r0
 494:	00341100 	0x00341100
 498:	0b3a0803 	0x0b3a0803
 49c:	0b390b3b 	0x0b390b3b
 4a0:	18021349 	pcaddi	$r9,4250(0x109a)
 4a4:	2e120000 	0x2e120000
 4a8:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 4ac:	3b0b3a08 	0x3b0b3a08
 4b0:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0fe8 <data_size+0x2d0ba0>
 4b4:	000b2013 	0x000b2013
	...

Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	0x00000000
   4:	00000064 	0x00000064
   8:	64540001 	bge	$r0,$r1,21504(0x5400) # 5408 <data_size+0x4fc0>
   c:	cc000000 	0xcc000000
  10:	01000000 	0x01000000
  14:	00cc6900 	bstrpick.d	$r0,$r8,0xc,0x1a
  18:	00f40000 	bstrpick.d	$r0,$r0,0x34,0x0
  1c:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  20:	9f5401f3 	0x9f5401f3
  24:	000000f4 	0x000000f4
  28:	0000022c 	0x0000022c
  2c:	00690001 	bstrins.w	$r1,$r0,0x9,0x0
  30:	00000000 	0x00000000
  34:	48000000 	bceqz	$fcc0,0 # 34 <data_size-0x414>
  38:	64000000 	bge	$r0,$r0,0 # 38 <data_size-0x410>
  3c:	02000000 	slti	$r0,$r0,0
  40:	649f3000 	bge	$r0,$r0,40752(0x9f30) # 9f70 <data_size+0x9b28>
  44:	cc000000 	0xcc000000
  48:	01000000 	0x01000000
  4c:	00f46800 	bstrpick.d	$r0,$r0,0x34,0x1a
  50:	01000000 	0x01000000
  54:	00030000 	0x00030000
  58:	009f0188 	bstrins.d	$r8,$r12,0x1f,0x0
  5c:	1c000001 	pcaddu12i	$r1,0
  60:	01000001 	0x01000001
  64:	011c6800 	0x011c6800
  68:	01380000 	0x01380000
  6c:	00030000 	0x00030000
  70:	389f7f88 	0x389f7f88
  74:	64000001 	bge	$r0,$r1,0 # 74 <data_size-0x3d4>
  78:	01000001 	0x01000001
  7c:	01646800 	0x01646800
  80:	016c0000 	0x016c0000
  84:	00030000 	0x00030000
  88:	6c9f7f88 	bgeu	$r28,$r8,40828(0x9f7c) # a004 <data_size+0x9bbc>
  8c:	e8000001 	0xe8000001
  90:	01000001 	0x01000001
  94:	01e86800 	0x01e86800
  98:	01f00000 	0x01f00000
  9c:	00030000 	0x00030000
  a0:	f09f7f88 	0xf09f7f88
  a4:	2c000001 	vld	$vr1,$r0,0
  a8:	01000002 	0x01000002
  ac:	00006800 	rdtime.d	$r0,$r0
  b0:	00000000 	0x00000000
  b4:	00640000 	bstrins.w	$r0,$r0,0x4,0x0
  b8:	00780000 	bstrins.w	$r0,$r0,0x18,0x0
  bc:	00010000 	asrtle.d	$r0,$r0
  c0:	00007c67 	0x00007c67
  c4:	0000cc00 	0x0000cc00
  c8:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff00c8 <_stack+0xe3fdeb64>
  cc:	000000f4 	0x000000f4
  d0:	0000022c 	0x0000022c
  d4:	00670001 	bstrins.w	$r1,$r0,0x7,0x0
  d8:	00000000 	0x00000000
  dc:	48000000 	bceqz	$fcc0,0 # dc <data_size-0x36c>
  e0:	cc000000 	0xcc000000
  e4:	01000000 	0x01000000
  e8:	00f46a00 	bstrpick.d	$r0,$r16,0x34,0x1a
  ec:	01680000 	0x01680000
  f0:	00010000 	asrtle.d	$r0,$r0
  f4:	0001686a 	0x0001686a
  f8:	00016c00 	asrtle.d	$r0,$r27
  fc:	8a000300 	0x8a000300
 100:	016c9f7c 	0x016c9f7c
 104:	01ec0000 	0x01ec0000
 108:	00010000 	asrtle.d	$r0,$r0
 10c:	0001ec6a 	0x0001ec6a
 110:	0001f000 	asrtgt.d	$r0,$r28
 114:	8a000300 	0x8a000300
 118:	01f09f7c 	0x01f09f7c
 11c:	022c0000 	slti	$r0,$r0,-1280(0xb00)
 120:	00010000 	asrtle.d	$r0,$r0
 124:	0000006a 	0x0000006a
 128:	00000000 	0x00000000
 12c:	0000ac00 	0x0000ac00
 130:	0000cc00 	0x0000cc00
 134:	55000100 	bl	67174400(0x4010000) # 4010134 <data_size+0x400fcec>
 138:	000000f4 	0x000000f4
 13c:	00000100 	0x00000100
 140:	00550001 	0x00550001
 144:	14000001 	lu12i.w	$r1,0
 148:	02000001 	slti	$r1,$r0,0
 14c:	149f3000 	lu12i.w	$r0,326016(0x4f980)
 150:	18000001 	pcaddi	$r1,0
 154:	01000001 	0x01000001
 158:	01385500 	0x01385500
 15c:	014f0000 	0x014f0000
 160:	00010000 	asrtle.d	$r0,$r0
 164:	00015c55 	0x00015c55
 168:	00016b00 	asrtle.d	$r24,$r26
 16c:	55000100 	bl	67174400(0x4010000) # 401016c <data_size+0x400fd24>
 170:	00000170 	0x00000170
 174:	0000017f 	0x0000017f
 178:	8c550001 	0x8c550001
 17c:	9b000001 	0x9b000001
 180:	01000001 	0x01000001
 184:	01a85500 	0x01a85500
 188:	01b70000 	0x01b70000
 18c:	00010000 	asrtle.d	$r0,$r0
 190:	0001c455 	0x0001c455
 194:	0001d300 	asrtgt.d	$r24,$r20
 198:	55000100 	bl	67174400(0x4010000) # 4010198 <data_size+0x400fd50>
 19c:	000001e0 	0x000001e0
 1a0:	000001ef 	0x000001ef
 1a4:	f4550001 	0xf4550001
 1a8:	03000001 	lu52i.d	$r1,$r0,0
 1ac:	01000002 	0x01000002
 1b0:	02105500 	slti	$r0,$r8,1045(0x415)
 1b4:	02170000 	slti	$r0,$r0,1472(0x5c0)
 1b8:	00010000 	asrtle.d	$r0,$r0
 1bc:	00022055 	0x00022055
 1c0:	00022700 	0x00022700
 1c4:	55000100 	bl	67174400(0x4010000) # 40101c4 <data_size+0x400fd7c>
	...
 1d4:	0000001c 	0x0000001c
 1d8:	1c540001 	pcaddu12i	$r1,172032(0x2a000)
 1dc:	28000000 	ld.b	$r0,$r0,0
 1e0:	04000000 	csrrd	$r0,0x0
 1e4:	5401f300 	bl	-67108368(0xc0001f0) # fc0003d4 <_stack+0xdffeee70>
 1e8:	0000009f 	0x0000009f
	...
 1f4:	00001800 	cto.w	$r0,$r0
 1f8:	54000100 	bl	67108864(0x4000000) # 40001f8 <data_size+0x3fffdb0>
	...
 204:	00000074 	0x00000074
 208:	0000007f 	0x0000007f
 20c:	7f540001 	0x7f540001
 210:	a0000000 	0xa0000000
 214:	04000000 	csrrd	$r0,0x0
 218:	5401f300 	bl	-67108368(0xc0001f0) # fc000408 <_stack+0xdffeeea4>
 21c:	0000009f 	0x0000009f
	...
 228:	00002800 	cto.d	$r0,$r0
 22c:	54000100 	bl	67108864(0x4000000) # 400022c <data_size+0x3fffde4>
 230:	00000028 	0x00000028
 234:	00000030 	0x00000030
 238:	7f880003 	0x7f880003
 23c:	0000309f 	revb.2h	$r31,$r4
 240:	00003c00 	revb.d	$r0,$r0
 244:	68000100 	bltu	$r8,$r0,0 # 244 <data_size-0x204>
 248:	0000003c 	0x0000003c
 24c:	00000050 	0x00000050
 250:	7f880003 	0x7f880003
 254:	0000509f 	bitrev.w	$r31,$r4
 258:	00005800 	ext.w.h	$r0,$r0
 25c:	68000100 	bltu	$r8,$r0,0 # 25c <data_size-0x1ec>
	...
 268:	00000018 	0x00000018
 26c:	00000060 	0x00000060
 270:	00670001 	bstrins.w	$r1,$r0,0x7,0x0
	...
 27c:	24000000 	ldptr.w	$r0,$r0,0
 280:	01000000 	0x01000000
 284:	00245400 	crc.w.b.w	$r0,$r0,$r21
 288:	00bc0000 	bstrins.d	$r0,$r0,0x3c,0x0
 28c:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 290:	9f5401f3 	0x9f5401f3
 294:	000000bc 	0x000000bc
 298:	000000c0 	0x000000c0
 29c:	c0540001 	0xc0540001
 2a0:	d0000000 	0xd0000000
 2a4:	01000000 	0x01000000
 2a8:	00d06700 	bstrpick.d	$r0,$r24,0x10,0x19
 2ac:	00dc0000 	bstrpick.d	$r0,$r0,0x1c,0x0
 2b0:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 2b4:	9f1f0087 	0x9f1f0087
 2b8:	000000dc 	0x000000dc
 2bc:	000000e8 	0x000000e8
 2c0:	00540001 	0x00540001
	...
 2cc:	24000000 	ldptr.w	$r0,$r0,0
 2d0:	01000000 	0x01000000
 2d4:	00245500 	crc.w.b.w	$r0,$r8,$r21
 2d8:	00bc0000 	bstrins.d	$r0,$r0,0x3c,0x0
 2dc:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 2e0:	9f5501f3 	0x9f5501f3
 2e4:	000000bc 	0x000000bc
 2e8:	000000cb 	0x000000cb
 2ec:	cb550001 	0xcb550001
 2f0:	dc000000 	0xdc000000
 2f4:	03000000 	lu52i.d	$r0,$r0,0
 2f8:	7fa89100 	0x7fa89100
 2fc:	000000dc 	0x000000dc
 300:	000000e8 	0x000000e8
 304:	00550001 	0x00550001
	...
 310:	24000000 	ldptr.w	$r0,$r0,0
 314:	01000000 	0x01000000
 318:	00245600 	crc.w.b.w	$r0,$r16,$r21
 31c:	00bc0000 	bstrins.d	$r0,$r0,0x3c,0x0
 320:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 324:	9f5601f3 	0x9f5601f3
 328:	000000bc 	0x000000bc
 32c:	000000cb 	0x000000cb
 330:	cb560001 	0xcb560001
 334:	dc000000 	0xdc000000
 338:	03000000 	lu52i.d	$r0,$r0,0
 33c:	7fac9100 	0x7fac9100
 340:	000000dc 	0x000000dc
 344:	000000e8 	0x000000e8
 348:	00560001 	0x00560001
	...
 354:	24000000 	ldptr.w	$r0,$r0,0
 358:	01000000 	0x01000000
 35c:	00245700 	crc.w.b.w	$r0,$r24,$r21
 360:	00bc0000 	bstrins.d	$r0,$r0,0x3c,0x0
 364:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 368:	9f5701f3 	0x9f5701f3
 36c:	000000bc 	0x000000bc
 370:	000000cb 	0x000000cb
 374:	cb570001 	0xcb570001
 378:	dc000000 	0xdc000000
 37c:	04000000 	csrrd	$r0,0x0
 380:	5701f300 	bl	-66911760(0xc0301f0) # fc030570 <_stack+0xe001f00c>
 384:	0000dc9f 	0x0000dc9f
 388:	0000e800 	0x0000e800
 38c:	57000100 	bl	67305472(0x4030000) # 403038c <data_size+0x402ff44>
	...
 398:	00000020 	0x00000020
 39c:	00000034 	0x00000034
 3a0:	9f300002 	0x9f300002
 3a4:	00000034 	0x00000034
 3a8:	00000038 	0x00000038
 3ac:	38680001 	ammin.wu	$r1,$r0,$r0
 3b0:	58000000 	beq	$r0,$r0,0 # 3b0 <data_size-0x98>
 3b4:	08000000 	0x08000000
 3b8:	91007c00 	0x91007c00
 3bc:	50231c00 	b	8988(0x231c) # 26d8 <data_size+0x2290>
 3c0:	0000589f 	ext.w.h	$r31,$r4
 3c4:	00006400 	rdtimeh.w	$r0,$r0
 3c8:	68000100 	bltu	$r8,$r0,0 # 3c8 <data_size-0x80>
 3cc:	000000b4 	0x000000b4
 3d0:	000000bc 	0x000000bc
 3d4:	d0680001 	0xd0680001
 3d8:	e8000000 	0xe8000000
 3dc:	02000000 	slti	$r0,$r0,0
 3e0:	009f3000 	bstrins.d	$r0,$r0,0x1f,0xc
 3e4:	00000000 	0x00000000
 3e8:	6c000000 	bgeu	$r0,$r0,0 # 3e8 <data_size-0x60>
 3ec:	90000000 	0x90000000
 3f0:	01000000 	0x01000000
 3f4:	00906700 	bstrins.d	$r0,$r24,0x10,0x19
 3f8:	00940000 	bstrins.d	$r0,$r0,0x14,0x0
 3fc:	00030000 	0x00030000
 400:	949f0187 	0x949f0187
 404:	98000000 	0x98000000
 408:	01000000 	0x01000000
 40c:	00b86700 	bstrins.d	$r0,$r24,0x38,0x19
 410:	00bc0000 	bstrins.d	$r0,$r0,0x3c,0x0
 414:	00010000 	asrtle.d	$r0,$r0
 418:	0000dc55 	0x0000dc55
 41c:	0000e800 	0x0000e800
 420:	75000d00 	0x75000d00
 424:	16301200 	lu32i.d	$r0,98448(0x18090)
 428:	01282b14 	0x01282b14
 42c:	9f131600 	0x9f131600
	...
 438:	00000080 	0x00000080
 43c:	0000008c 	0x0000008c
 440:	005c0001 	0x005c0001
 444:	00000000 	0x00000000
 448:	20000000 	ll.w	$r0,$r0,0
 44c:	24000000 	ldptr.w	$r0,$r0,0
 450:	01000000 	0x01000000
 454:	00245400 	crc.w.b.w	$r0,$r0,$r21
 458:	00340000 	0x00340000
 45c:	00010000 	asrtle.d	$r0,$r0
 460:	00003467 	revb.4h	$r7,$r3
 464:	00003800 	revb.2w	$r0,$r0
 468:	5d000100 	bne	$r8,$r0,65536(0x10000) # 10468 <data_size+0x10020>
 46c:	00000038 	0x00000038
 470:	00000058 	0x00000058
 474:	58670001 	beq	$r0,$r1,26368(0x6700) # 6b74 <data_size+0x672c>
 478:	64000000 	bge	$r0,$r0,0 # 478 <data_size+0x30>
 47c:	01000000 	0x01000000
 480:	00b45d00 	bstrins.d	$r0,$r8,0x34,0x17
 484:	00bc0000 	bstrins.d	$r0,$r0,0x3c,0x0
 488:	00010000 	asrtle.d	$r0,$r0
 48c:	0000d05d 	0x0000d05d
 490:	0000dc00 	0x0000dc00
 494:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff0494 <_stack+0xe3fdef30>
 498:	000000dc 	0x000000dc
 49c:	000000e8 	0x000000e8
 4a0:	00540001 	0x00540001
 4a4:	00000000 	0x00000000
 4a8:	d4000000 	0xd4000000
 4ac:	e4000000 	0xe4000000
 4b0:	02000000 	slti	$r0,$r0,0
 4b4:	e49f3000 	0xe49f3000
 4b8:	f8000000 	0xf8000000
 4bc:	0e000000 	0x0e000000
 4c0:	f7007400 	0xf7007400
 4c4:	640801b8 	bge	$r13,$r24,2048(0x800) # cc4 <data_size+0x87c>
 4c8:	1b01b8f7 	pcalau12i	$r23,-520761(0x80dc7)
 4cc:	f89f00f7 	0xf89f00f7
 4d0:	04000000 	csrrd	$r0,0x0
 4d4:	01000001 	0x01000001
 4d8:	00005d00 	ext.w.b	$r0,$r8
 4dc:	00000000 	0x00000000
 4e0:	00b00000 	bstrins.d	$r0,$r0,0x30,0x0
 4e4:	00c00000 	bstrpick.d	$r0,$r0,0x0,0x0
 4e8:	00020000 	0x00020000
 4ec:	00c09f30 	bstrpick.d	$r16,$r25,0x0,0x27
 4f0:	00cc0000 	bstrpick.d	$r0,$r0,0xc,0x0
 4f4:	00050000 	alsl.w	$r0,$r0,$r0,0x3
 4f8:	1e3a0074 	pcaddu18i	$r20,118787(0x1d003)
 4fc:	0000cc9f 	0x0000cc9f
 500:	0000d400 	0x0000d400
 504:	54000100 	bl	67108864(0x4000000) # 4000504 <data_size+0x40000bc>
	...
 510:	00000028 	0x00000028
 514:	00000094 	0x00000094
 518:	94540001 	0x94540001
 51c:	ac000000 	0xac000000
 520:	04000000 	csrrd	$r0,0x0
 524:	5401f300 	bl	-67108368(0xc0001f0) # fc000714 <_stack+0xdffef1b0>
 528:	0000009f 	0x0000009f
 52c:	00000000 	0x00000000
 530:	00002800 	cto.d	$r0,$r0
 534:	00003800 	revb.2w	$r0,$r0
 538:	30000200 	0x30000200
 53c:	0000389f 	revb.2w	$r31,$r4
 540:	0000ac00 	0x0000ac00
 544:	5f000100 	bne	$r8,$r0,-65536(0x30000) # ffff0544 <_stack+0xe3fdefe0>
	...

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
  68:	00000008 	0x00000008
  6c:	00000010 	0x00000010
	...
  78:	00000028 	0x00000028
  7c:	00000028 	0x00000028
  80:	00000030 	0x00000030
  84:	00000038 	0x00000038
	...
  90:	000000b0 	0x000000b0
  94:	000000b0 	0x000000b0
  98:	000000b8 	0x000000b8
  9c:	000000c0 	0x000000c0
	...
  a8:	000000d4 	0x000000d4
  ac:	000000d4 	0x000000d4
  b0:	000000dc 	0x000000dc
  b4:	000000e4 	0x000000e4
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000471 	0x00000471
   4:	00200004 	div.w	$r4,$r0,$r0
   8:	01010000 	fadd.d	$f0,$f0,$f0
   c:	0df2f601 	0x0df2f601
  10:	01010100 	fadd.d	$f0,$f8,$f0
  14:	00000001 	0x00000001
  18:	01000001 	0x01000001
  1c:	69727000 	bltu	$r0,$r0,94832(0x17270) # 1728c <data_size+0x16e44>
  20:	2e66746e 	0x2e66746e
  24:	00000063 	0x00000063
  28:	05000000 	0x05000000
  2c:	000c5002 	bytepick.d	$r2,$r0,$r20,0x0
  30:	0105181c 	fmul.d	$f28,$f0,$f6
  34:	50020500 	b	67109380(0x4000204) # 4000238 <data_size+0x3fffdf0>
  38:	181c000c 	pcaddi	$r12,57344(0xe000)
  3c:	05000105 	0x05000105
  40:	000c5002 	bytepick.d	$r2,$r0,$r20,0x0
  44:	0105181c 	fmul.d	$f28,$f0,$f6
  48:	50020500 	b	67109380(0x4000204) # 400024c <data_size+0x3fffe04>
  4c:	181c000c 	pcaddi	$r12,57344(0xe000)
  50:	05000105 	0x05000105
  54:	000c5002 	bytepick.d	$r2,$r0,$r20,0x0
  58:	0105181c 	fmul.d	$f28,$f0,$f6
  5c:	50020500 	b	67109380(0x4000204) # 4000260 <data_size+0x3fffe18>
  60:	181c000c 	pcaddi	$r12,57344(0xe000)
  64:	05000105 	0x05000105
  68:	000c5002 	bytepick.d	$r2,$r0,$r20,0x0
  6c:	0105181c 	fmul.d	$f28,$f0,$f6
  70:	50020500 	b	67109380(0x4000204) # 4000274 <data_size+0x3fffe2c>
  74:	061c000c 	cacop	0xc,$r0,1792(0x700)
  78:	00010511 	0x00010511
  7c:	0c700205 	0x0c700205
  80:	051f1c00 	0x051f1c00
  84:	0205000c 	slti	$r12,$r0,320(0x140)
  88:	1c000c74 	pcaddu12i	$r20,99(0x63)
  8c:	00010515 	0x00010515
  90:	0c780205 	0x0c780205
  94:	05111c00 	0x05111c00
  98:	02050001 	slti	$r1,$r0,320(0x140)
  9c:	1c000c94 	pcaddu12i	$r20,100(0x64)
  a0:	0001051d 	0x0001051d
  a4:	0c980205 	xvfcmp.cne.s	$xr5,$xr16,$xr0
  a8:	18061c00 	pcaddi	$r0,12512(0x30e0)
  ac:	05000105 	0x05000105
  b0:	000c9802 	bytepick.d	$r2,$r0,$r6,0x1
  b4:	0105181c 	fmul.d	$f28,$f0,$f6
  b8:	b4020500 	0xb4020500
  bc:	5d1c000c 	bne	$r0,$r12,72704(0x11c00) # 11cbc <data_size+0x11874>
  c0:	05000305 	0x05000305
  c4:	000cbc02 	bytepick.d	$r2,$r0,$r15,0x1
  c8:	0402001c 	csrrd	$r28,0x80
  cc:	ba030602 	0xba030602
  d0:	1105017f 	addu16i.d	$r31,$r11,16704(0x4140)
  d4:	c0020500 	0xc0020500
  d8:	011c000c 	0x011c000c
  dc:	05000c05 	0x05000c05
  e0:	000cc802 	bytepick.d	$r2,$r0,$r18,0x1
  e4:	0105011c 	fmul.d	$f28,$f8,$f0
  e8:	cc020500 	0xcc020500
  ec:	001c000c 	mul.w	$r12,$r0,$r0
  f0:	06000402 	cacop	0x2,$r0,1(0x1)
  f4:	00020519 	0x00020519
  f8:	0ccc0205 	0x0ccc0205
  fc:	05181c00 	0x05181c00
 100:	02050002 	slti	$r2,$r0,320(0x140)
 104:	1c000ccc 	pcaddu12i	$r12,102(0x66)
 108:	04050106 	csrxchg	$r6,$r8,0x140
 10c:	d4020500 	0xd4020500
 110:	061c000c 	cacop	0xc,$r0,1792(0x700)
 114:	00030559 	0x00030559
 118:	0cd40205 	0x0cd40205
 11c:	01061c00 	0x01061c00
 120:	05000505 	0x05000505
 124:	000cdc02 	bytepick.d	$r2,$r0,$r23,0x1
 128:	0402001c 	csrrd	$r28,0x80
 12c:	05010601 	0x05010601
 130:	0205000f 	slti	$r15,$r0,320(0x140)
 134:	1c000cf0 	pcaddu12i	$r16,103(0x67)
 138:	00040200 	alsl.w	$r0,$r16,$r0,0x1
 13c:	01400306 	0x01400306
 140:	05000405 	0x05000405
 144:	000cf402 	bytepick.d	$r2,$r0,$r29,0x1
 148:	0305191c 	lu52i.d	$r28,$r8,326(0x146)
 14c:	f8020500 	0xf8020500
 150:	4a1c000c 	bceqz	$fcc0,3283968(0x321c00) # 321d50 <data_size+0x321908>
 154:	05000905 	0x05000905
 158:	000cfc02 	bytepick.d	$r2,$r0,$r31,0x1
 15c:	4d03061c 	jirl	$r28,$r16,66308(0x10304)
 160:	00030501 	0x00030501
 164:	0d1c0205 	vbitsel.v	$vr5,$vr16,$vr0,$vr24
 168:	5a061c00 	beq	$r0,$r0,-129508(0x2061c) # fffe0784 <_stack+0xe3fcf220>
 16c:	05000105 	0x05000105
 170:	000d4402 	bytepick.d	$r2,$r0,$r17,0x2
 174:	6d03061c 	bgeu	$r16,$r28,66308(0x10304) # 10478 <data_size+0x10030>
 178:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 17c:	0d4c0205 	0x0d4c0205
 180:	01061c00 	0x01061c00
 184:	05000605 	0x05000605
 188:	000d5002 	bytepick.d	$r2,$r0,$r20,0x2
 18c:	0402001c 	csrrd	$r28,0x80
 190:	1a051901 	pcalau12i	$r1,10440(0x28c8)
 194:	54020500 	bl	67109380(0x4000204) # 4000398 <data_size+0x3ffff50>
 198:	011c000d 	0x011c000d
 19c:	05000505 	0x05000505
 1a0:	000d6402 	bytepick.d	$r2,$r0,$r25,0x2
 1a4:	0402001c 	csrrd	$r28,0x80
 1a8:	05180603 	0x05180603
 1ac:	02050006 	slti	$r6,$r0,320(0x140)
 1b0:	1c000d64 	pcaddu12i	$r4,107(0x6b)
 1b4:	09050106 	0x09050106
 1b8:	68020500 	bltu	$r8,$r0,516(0x204) # 3bc <data_size-0x8c>
 1bc:	161c000d 	lu32i.d	$r13,57344(0xe000)
 1c0:	05002c05 	0x05002c05
 1c4:	000d6c02 	bytepick.d	$r2,$r0,$r27,0x2
 1c8:	1005011c 	addu16i.d	$r28,$r8,320(0x140)
 1cc:	70020500 	vsle.b	$vr0,$vr8,$vr1
 1d0:	181c000d 	pcaddi	$r13,57344(0xe000)
 1d4:	05001605 	0x05001605
 1d8:	000d7402 	bytepick.d	$r2,$r0,$r29,0x2
 1dc:	1005161c 	addu16i.d	$r28,$r16,325(0x145)
 1e0:	78020500 	0x78020500
 1e4:	011c000d 	0x011c000d
 1e8:	05001a05 	0x05001a05
 1ec:	000d7c02 	bytepick.d	$r2,$r0,$r31,0x2
 1f0:	0505011c 	0x0505011c
 1f4:	84020500 	0x84020500
 1f8:	181c000d 	pcaddi	$r13,57344(0xe000)
 1fc:	05000705 	0x05000705
 200:	000d8802 	bytepick.d	$r2,$r0,$r2,0x3
 204:	0505161c 	0x0505161c
 208:	90020500 	0x90020500
 20c:	001c000d 	mul.w	$r13,$r0,$r0
 210:	06000402 	cacop	0x2,$r0,1(0x1)
 214:	05016f03 	0x05016f03
 218:	02050005 	slti	$r5,$r0,320(0x140)
 21c:	1c000da0 	pcaddu12i	$r0,109(0x6d)
 220:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 224:	0da00205 	0x0da00205
 228:	01061c00 	0x01061c00
 22c:	05000805 	0x05000805
 230:	000da402 	bytepick.d	$r2,$r0,$r9,0x3
 234:	0518061c 	0x0518061c
 238:	02050005 	slti	$r5,$r0,320(0x140)
 23c:	1c000da4 	pcaddu12i	$r4,109(0x6d)
 240:	06050106 	cacop	0x6,$r8,320(0x140)
 244:	a8020500 	0xa8020500
 248:	061c000d 	cacop	0xd,$r0,1792(0x700)
 24c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 250:	0dac0205 	0x0dac0205
 254:	64031c00 	bge	$r0,$r0,796(0x31c) # 570 <data_size+0x128>
 258:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 25c:	0db00205 	0x0db00205
 260:	19061c00 	pcaddi	$r0,-511776(0x830e0)
 264:	05000605 	0x05000605
 268:	000db402 	bytepick.d	$r2,$r0,$r13,0x3
 26c:	0805161c 	0x0805161c
 270:	b8020500 	0xb8020500
 274:	161c000d 	lu32i.d	$r13,57344(0xe000)
 278:	05000505 	0x05000505
 27c:	000dbc02 	bytepick.d	$r2,$r0,$r15,0x3
 280:	0518061c 	0x0518061c
 284:	02050005 	slti	$r5,$r0,320(0x140)
 288:	1c000dbc 	pcaddu12i	$r28,109(0x6d)
 28c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 290:	0dbc0205 	0x0dbc0205
 294:	05181c00 	0x05181c00
 298:	02050005 	slti	$r5,$r0,320(0x140)
 29c:	1c000dc0 	pcaddu12i	$r0,110(0x6e)
 2a0:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
 2a4:	0dd00205 	0x0dd00205
 2a8:	05181c00 	0x05181c00
 2ac:	02050005 	slti	$r5,$r0,320(0x140)
 2b0:	1c000dd0 	pcaddu12i	$r16,110(0x6e)
 2b4:	08050106 	0x08050106
 2b8:	d4020500 	0xd4020500
 2bc:	061c000d 	cacop	0xd,$r0,1792(0x700)
 2c0:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 2c4:	0dd40205 	0x0dd40205
 2c8:	01061c00 	0x01061c00
 2cc:	05000605 	0x05000605
 2d0:	000dd802 	bytepick.d	$r2,$r0,$r22,0x3
 2d4:	0518061c 	0x0518061c
 2d8:	02050005 	slti	$r5,$r0,320(0x140)
 2dc:	1c000ddc 	pcaddu12i	$r28,110(0x6e)
 2e0:	00110519 	sub.w	$r25,$r8,$r1
 2e4:	0dec0205 	0x0dec0205
 2e8:	05181c00 	0x05181c00
 2ec:	02050011 	slti	$r17,$r0,320(0x140)
 2f0:	1c000dec 	pcaddu12i	$r12,111(0x6f)
 2f4:	14050106 	lu12i.w	$r6,10248(0x2808)
 2f8:	f0020500 	0xf0020500
 2fc:	061c000d 	cacop	0xd,$r0,1792(0x700)
 300:	00110518 	sub.w	$r24,$r8,$r1
 304:	0df00205 	0x0df00205
 308:	01061c00 	0x01061c00
 30c:	05001205 	0x05001205
 310:	000df402 	bytepick.d	$r2,$r0,$r29,0x3
 314:	0518061c 	0x0518061c
 318:	02050011 	slti	$r17,$r0,320(0x140)
 31c:	1c000df8 	pcaddu12i	$r24,111(0x6f)
 320:	00050519 	alsl.w	$r25,$r8,$r1,0x3
 324:	0e080205 	0x0e080205
 328:	05181c00 	0x05181c00
 32c:	02050005 	slti	$r5,$r0,320(0x140)
 330:	1c000e08 	pcaddu12i	$r8,112(0x70)
 334:	08050106 	0x08050106
 338:	0c020500 	0x0c020500
 33c:	061c000e 	cacop	0xe,$r0,1792(0x700)
 340:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 344:	0e0c0205 	0x0e0c0205
 348:	01061c00 	0x01061c00
 34c:	05000605 	0x05000605
 350:	000e1002 	bytepick.d	$r2,$r0,$r4,0x4
 354:	0518061c 	0x0518061c
 358:	02050005 	slti	$r5,$r0,320(0x140)
 35c:	1c000e14 	pcaddu12i	$r20,112(0x70)
 360:	0005051f 	alsl.w	$r31,$r8,$r1,0x3
 364:	0e240205 	0x0e240205
 368:	05181c00 	0x05181c00
 36c:	02050005 	slti	$r5,$r0,320(0x140)
 370:	1c000e24 	pcaddu12i	$r4,113(0x71)
 374:	08050106 	0x08050106
 378:	28020500 	ld.b	$r0,$r8,129(0x81)
 37c:	061c000e 	cacop	0xe,$r0,1792(0x700)
 380:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 384:	0e280205 	0x0e280205
 388:	01061c00 	0x01061c00
 38c:	05000605 	0x05000605
 390:	000e2c02 	bytepick.d	$r2,$r0,$r11,0x4
 394:	0518061c 	0x0518061c
 398:	02050005 	slti	$r5,$r0,320(0x140)
 39c:	1c000e30 	pcaddu12i	$r16,113(0x71)
 3a0:	05015903 	0x05015903
 3a4:	02050005 	slti	$r5,$r0,320(0x140)
 3a8:	1c000e34 	pcaddu12i	$r20,113(0x71)
 3ac:	06051906 	cacop	0x6,$r8,326(0x146)
 3b0:	38020500 	0x38020500
 3b4:	161c000e 	lu32i.d	$r14,57344(0xe000)
 3b8:	05000805 	0x05000805
 3bc:	000e3c02 	bytepick.d	$r2,$r0,$r15,0x4
 3c0:	0505161c 	0x0505161c
 3c4:	40020500 	beqz	$r8,516(0x204) # 5c8 <data_size+0x180>
 3c8:	061c000e 	cacop	0xe,$r0,1792(0x700)
 3cc:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 3d0:	0e400205 	0x0e400205
 3d4:	05181c00 	0x05181c00
 3d8:	02050005 	slti	$r5,$r0,320(0x140)
 3dc:	1c000e40 	pcaddu12i	$r0,114(0x72)
 3e0:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 3e4:	0e440205 	0x0e440205
 3e8:	051e1c00 	0x051e1c00
 3ec:	02050005 	slti	$r5,$r0,320(0x140)
 3f0:	1c000e54 	pcaddu12i	$r20,114(0x72)
 3f4:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 3f8:	0e540205 	0x0e540205
 3fc:	01061c00 	0x01061c00
 400:	05000805 	0x05000805
 404:	000e5802 	bytepick.d	$r2,$r0,$r22,0x4
 408:	0518061c 	0x0518061c
 40c:	02050005 	slti	$r5,$r0,320(0x140)
 410:	1c000e58 	pcaddu12i	$r24,114(0x72)
 414:	06050106 	cacop	0x6,$r8,320(0x140)
 418:	5c020500 	bne	$r8,$r0,516(0x204) # 61c <data_size+0x1d4>
 41c:	061c000e 	cacop	0xe,$r0,1792(0x700)
 420:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 424:	0e600205 	0x0e600205
 428:	05331c00 	0x05331c00
 42c:	02050005 	slti	$r5,$r0,320(0x140)
 430:	1c000e68 	pcaddu12i	$r8,115(0x73)
 434:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 438:	0e680205 	0x0e680205
 43c:	01061c00 	0x01061c00
 440:	05000605 	0x05000605
 444:	000e6c02 	bytepick.d	$r2,$r0,$r27,0x4
 448:	0518061c 	0x0518061c
 44c:	02050005 	slti	$r5,$r0,320(0x140)
 450:	1c000e70 	pcaddu12i	$r16,115(0x73)
 454:	0006051e 	alsl.wu	$r30,$r8,$r1,0x1
 458:	0e700205 	0x0e700205
 45c:	051a1c00 	0x051a1c00
 460:	02050005 	slti	$r5,$r0,320(0x140)
 464:	1c000e78 	pcaddu12i	$r24,115(0x73)
 468:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 46c:	0e7c0205 	0x0e7c0205
 470:	01001c00 	0x01001c00
 474:	0000ae01 	0x0000ae01
 478:	21000400 	sc.w	$r0,$r0,4(0x4)
 47c:	01000000 	0x01000000
 480:	f2f60101 	0xf2f60101
 484:	0101000d 	fadd.d	$f13,$f0,$f0
 488:	00000101 	0x00000101
 48c:	00000100 	0x00000100
 490:	75700001 	0x75700001
 494:	61686374 	blt	$r27,$r20,92256(0x16860) # 16cf4 <data_size+0x168ac>
 498:	00632e72 	bstrins.w	$r18,$r19,0x3,0xb
 49c:	00000000 	0x00000000
 4a0:	7c020500 	0x7c020500
 4a4:	181c000e 	pcaddi	$r14,57344(0xe000)
 4a8:	05000105 	0x05000105
 4ac:	000e7c02 	bytepick.d	$r2,$r0,$r31,0x4
 4b0:	0105181c 	fmul.d	$f28,$f0,$f6
 4b4:	7c020500 	0x7c020500
 4b8:	1d1c000e 	pcaddu12i	$r14,-466944(0x8e000)
 4bc:	05000505 	0x05000505
 4c0:	000e7c02 	bytepick.d	$r2,$r0,$r31,0x4
 4c4:	0510061c 	0x0510061c
 4c8:	02050001 	slti	$r1,$r0,320(0x140)
 4cc:	1c000e84 	pcaddu12i	$r4,116(0x74)
 4d0:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
 4d4:	0e940205 	0x0e940205
 4d8:	12061c00 	addu16i.d	$r0,$r0,-32377(0x8187)
 4dc:	05000105 	0x05000105
 4e0:	000e9402 	bytepick.d	$r2,$r0,$r5,0x5
 4e4:	0518061c 	0x0518061c
 4e8:	02050001 	slti	$r1,$r0,320(0x140)
 4ec:	1c000ea4 	pcaddu12i	$r4,117(0x75)
 4f0:	01051a06 	fmul.d	$f6,$f16,$f6
 4f4:	a4020500 	0xa4020500
 4f8:	181c000e 	pcaddi	$r14,57344(0xe000)
 4fc:	05000505 	0x05000505
 500:	000ea402 	bytepick.d	$r2,$r0,$r9,0x5
 504:	0516061c 	0x0516061c
 508:	02050001 	slti	$r1,$r0,320(0x140)
 50c:	1c000eac 	pcaddu12i	$r12,117(0x75)
 510:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 514:	0ebc0205 	0x0ebc0205
 518:	051e1c00 	0x051e1c00
 51c:	02050001 	slti	$r1,$r0,320(0x140)
 520:	1c000ec8 	pcaddu12i	$r8,118(0x76)
 524:	65010100 	bge	$r8,$r0,65792(0x10100) # 10624 <data_size+0x101dc>
 528:	04000001 	csrrd	$r1,0x0
 52c:	00001e00 	ctz.w	$r0,$r16
 530:	01010100 	fadd.d	$f0,$f8,$f0
 534:	000df2f6 	bytepick.d	$r22,$r23,$r28,0x3
 538:	01010101 	fadd.d	$f1,$f8,$f0
 53c:	01000000 	0x01000000
 540:	00010000 	asrtle.d	$r0,$r0
 544:	73747570 	0x73747570
 548:	0000632e 	rdtimel.w	$r14,$r25
 54c:	00000000 	0x00000000
 550:	0ec80205 	0x0ec80205
 554:	05181c00 	0x05181c00
 558:	02050001 	slti	$r1,$r0,320(0x140)
 55c:	1c000ec8 	pcaddu12i	$r8,118(0x76)
 560:	00010518 	0x00010518
 564:	0ec80205 	0x0ec80205
 568:	05181c00 	0x05181c00
 56c:	02050001 	slti	$r1,$r0,320(0x140)
 570:	1c000ec8 	pcaddu12i	$r8,118(0x76)
 574:	01051506 	fmul.d	$f6,$f8,$f5
 578:	dc020500 	0xdc020500
 57c:	191c000e 	pcaddi	$r14,-466944(0x8e000)
 580:	05000905 	0x05000905
 584:	000ee002 	bytepick.d	$r2,$r0,$r24,0x5
 588:	0605011c 	cacop	0x1c,$r8,320(0x140)
 58c:	e8020500 	0xe8020500
 590:	191c000e 	pcaddi	$r14,-466944(0x8e000)
 594:	05000405 	0x05000405
 598:	000ef002 	bytepick.d	$r2,$r0,$r28,0x5
 59c:	0518061c 	0x0518061c
 5a0:	02050002 	slti	$r2,$r0,320(0x140)
 5a4:	1c000ef8 	pcaddu12i	$r24,119(0x77)
 5a8:	00020518 	0x00020518
 5ac:	0ef80205 	0x0ef80205
 5b0:	13061c00 	addu16i.d	$r0,$r0,-15993(0xc187)
 5b4:	05000905 	0x05000905
 5b8:	000efc02 	bytepick.d	$r2,$r0,$r31,0x5
 5bc:	0605011c 	cacop	0x1c,$r8,320(0x140)
 5c0:	00020500 	0x00020500
 5c4:	061c000f 	cacop	0xf,$r0,1792(0x700)
 5c8:	00020519 	0x00020519
 5cc:	0f000205 	0x0f000205
 5d0:	19061c00 	pcaddi	$r0,-511776(0x830e0)
 5d4:	05000305 	0x05000305
 5d8:	000f0402 	bytepick.d	$r2,$r0,$r1,0x6
 5dc:	0405151c 	csrxchg	$r28,$r8,0x145
 5e0:	08020500 	0x08020500
 5e4:	001c000f 	mul.w	$r15,$r0,$r0
 5e8:	06010402 	cacop	0x2,$r0,65(0x41)
 5ec:	00100501 	add.w	$r1,$r8,$r1
 5f0:	0f100205 	0x0f100205
 5f4:	05181c00 	0x05181c00
 5f8:	02050002 	slti	$r2,$r0,320(0x140)
 5fc:	1c000f18 	pcaddu12i	$r24,120(0x78)
 600:	00020518 	0x00020518
 604:	0f180205 	0x0f180205
 608:	13061c00 	addu16i.d	$r0,$r0,-15993(0xc187)
 60c:	05000905 	0x05000905
 610:	000f1c02 	bytepick.d	$r2,$r0,$r7,0x6
 614:	0605011c 	cacop	0x1c,$r8,320(0x140)
 618:	20020500 	ll.w	$r0,$r8,516(0x204)
 61c:	001c000f 	mul.w	$r15,$r0,$r0
 620:	06000402 	cacop	0x2,$r0,1(0x1)
 624:	0001051d 	0x0001051d
 628:	0f200205 	0x0f200205
 62c:	18061c00 	pcaddi	$r0,12512(0x30e0)
 630:	05000105 	0x05000105
 634:	000f3c02 	bytepick.d	$r2,$r0,$r15,0x6
 638:	051b061c 	0x051b061c
 63c:	02050001 	slti	$r1,$r0,320(0x140)
 640:	1c000f3c 	pcaddu12i	$r28,121(0x79)
 644:	00010518 	0x00010518
 648:	0f3c0205 	0x0f3c0205
 64c:	16061c00 	lu32i.d	$r0,12512(0x30e0)
 650:	05000105 	0x05000105
 654:	000f4402 	bytepick.d	$r2,$r0,$r17,0x6
 658:	0105181c 	fmul.d	$f28,$f0,$f6
 65c:	48020500 	bcnez	$fcc0,516(0x204) # 860 <data_size+0x418>
 660:	061c000f 	cacop	0xf,$r0,1792(0x700)
 664:	00010518 	0x00010518
 668:	0f500205 	0x0f500205
 66c:	05181c00 	0x05181c00
 670:	02050001 	slti	$r1,$r0,320(0x140)
 674:	1c000f58 	pcaddu12i	$r24,122(0x7a)
 678:	00010518 	0x00010518
 67c:	0f580205 	0x0f580205
 680:	18061c00 	pcaddi	$r0,12512(0x30e0)
 684:	05000105 	0x05000105
 688:	000f6802 	bytepick.d	$r2,$r0,$r26,0x6
 68c:	0101001c 	fadd.d	$f28,$f0,$f0
 690:	000001bf 	0x000001bf
 694:	00230004 	div.du	$r4,$r0,$r0
 698:	01010000 	fadd.d	$f0,$f0,$f0
 69c:	0df2f601 	0x0df2f601
 6a0:	01010100 	fadd.d	$f0,$f8,$f0
 6a4:	00000001 	0x00000001
 6a8:	01000001 	0x01000001
 6ac:	69727000 	bltu	$r0,$r0,94832(0x17270) # 1791c <data_size+0x174d4>
 6b0:	6162746e 	blt	$r3,$r14,90740(0x16274) # 16924 <data_size+0x164dc>
 6b4:	632e6573 	blt	$r11,$r19,-53660(0x32e64) # ffff3518 <_stack+0xe3fe1fb4>
 6b8:	00000000 	0x00000000
 6bc:	02050000 	slti	$r0,$r0,320(0x140)
 6c0:	1c000f68 	pcaddu12i	$r8,123(0x7b)
 6c4:	00010518 	0x00010518
 6c8:	0f680205 	0x0f680205
 6cc:	05181c00 	0x05181c00
 6d0:	02050002 	slti	$r2,$r0,320(0x140)
 6d4:	1c000f68 	pcaddu12i	$r8,123(0x7b)
 6d8:	00020518 	0x00020518
 6dc:	0f680205 	0x0f680205
 6e0:	05181c00 	0x05181c00
 6e4:	02050002 	slti	$r2,$r0,320(0x140)
 6e8:	1c000f68 	pcaddu12i	$r8,123(0x7b)
 6ec:	00020518 	0x00020518
 6f0:	0f680205 	0x0f680205
 6f4:	05181c00 	0x05181c00
 6f8:	02050002 	slti	$r2,$r0,320(0x140)
 6fc:	1c000f68 	pcaddu12i	$r8,123(0x7b)
 700:	01051206 	fmul.d	$f6,$f16,$f4
 704:	7c020500 	0x7c020500
 708:	011c000f 	0x011c000f
 70c:	05000105 	0x05000105
 710:	000f8002 	bytepick.d	$r2,$r0,$r0,0x7
 714:	04051c1c 	csrrd	$r28,0x147
 718:	84020500 	0x84020500
 71c:	001c000f 	mul.w	$r15,$r0,$r0
 720:	01010402 	fadd.d	$f2,$f0,$f1
 724:	05000a05 	0x05000a05
 728:	000f8802 	bytepick.d	$r2,$r0,$r2,0x7
 72c:	0402001c 	csrrd	$r28,0x80
 730:	051c0600 	0x051c0600
 734:	02050007 	slti	$r7,$r0,320(0x140)
 738:	1c000f88 	pcaddu12i	$r8,124(0x7c)
 73c:	02051906 	slti	$r6,$r8,326(0x146)
 740:	9c020500 	0x9c020500
 744:	1a1c000f 	pcalau12i	$r15,57344(0xe000)
 748:	05000705 	0x05000705
 74c:	000fa002 	bytepick.d	$r2,$r0,$r8,0x7
 750:	0402001c 	csrrd	$r28,0x80
 754:	05160603 	0x05160603
 758:	02050002 	slti	$r2,$r0,320(0x140)
 75c:	1c000fa0 	pcaddu12i	$r0,125(0x7d)
 760:	0e050106 	0x0e050106
 764:	ac020500 	0xac020500
 768:	011c000f 	0x011c000f
 76c:	05000805 	0x05000805
 770:	000fb002 	bytepick.d	$r2,$r0,$r12,0x7
 774:	0518061c 	0x0518061c
 778:	02050002 	slti	$r2,$r0,320(0x140)
 77c:	1c000fb4 	pcaddu12i	$r20,125(0x7d)
 780:	07050106 	0x07050106
 784:	c4020500 	0xc4020500
 788:	141c000f 	lu12i.w	$r15,57344(0xe000)
 78c:	05000205 	0x05000205
 790:	000fc802 	bytepick.d	$r2,$r0,$r18,0x7
 794:	0402001c 	csrrd	$r28,0x80
 798:	051f0600 	0x051f0600
 79c:	02050002 	slti	$r2,$r0,320(0x140)
 7a0:	1c000fc8 	pcaddu12i	$r8,126(0x7e)
 7a4:	07050106 	0x07050106
 7a8:	d0020500 	0xd0020500
 7ac:	1a1c000f 	pcalau12i	$r15,57344(0xe000)
 7b0:	05000305 	0x05000305
 7b4:	000fd402 	bytepick.d	$r2,$r0,$r21,0x7
 7b8:	0516061c 	0x0516061c
 7bc:	02050003 	slti	$r3,$r0,320(0x140)
 7c0:	1c000fd4 	pcaddu12i	$r20,126(0x7e)
 7c4:	0e050106 	0x0e050106
 7c8:	e0020500 	0xe0020500
 7cc:	011c000f 	0x011c000f
 7d0:	05000a05 	0x05000a05
 7d4:	000fe802 	bytepick.d	$r2,$r0,$r26,0x7
 7d8:	0402001c 	csrrd	$r28,0x80
 7dc:	05180601 	0x05180601
 7e0:	02050003 	slti	$r3,$r0,320(0x140)
 7e4:	1c000ffc 	pcaddu12i	$r28,127(0x7f)
 7e8:	04040200 	csrxchg	$r0,$r16,0x100
 7ec:	02051406 	slti	$r6,$r0,325(0x145)
 7f0:	00020500 	0x00020500
 7f4:	001c0010 	mul.w	$r16,$r0,$r0
 7f8:	1d000402 	pcaddu12i	$r2,-524256(0x80020)
 7fc:	05000105 	0x05000105
 800:	00101c02 	add.w	$r2,$r0,$r7
 804:	0705111c 	0x0705111c
 808:	24020500 	ldptr.w	$r0,$r8,516(0x204)
 80c:	031c0010 	lu52i.d	$r16,$r0,1792(0x700)
 810:	02050174 	slti	$r20,$r11,320(0x140)
 814:	30020500 	0x30020500
 818:	061c0010 	cacop	0x10,$r0,1792(0x700)
 81c:	00020516 	0x00020516
 820:	10300205 	addu16i.d	$r5,$r16,3072(0xc00)
 824:	18061c00 	pcaddi	$r0,12512(0x30e0)
 828:	05000205 	0x05000205
 82c:	00103402 	add.w	$r2,$r0,$r13
 830:	0a05161c 	0x0a05161c
 834:	38020500 	0x38020500
 838:	061c0010 	cacop	0x10,$r0,1792(0x700)
 83c:	00020518 	0x00020518
 840:	10440205 	addu16i.d	$r5,$r16,4352(0x1100)
 844:	05231c00 	0x05231c00
 848:	02050002 	slti	$r2,$r0,320(0x140)
 84c:	1c001050 	pcaddu12i	$r16,130(0x82)
 850:	e6010100 	0xe6010100
 854:	04000002 	csrrd	$r2,0x0
 858:	00003300 	revb.2h	$r0,$r24
 85c:	01010100 	fadd.d	$f0,$f8,$f0
 860:	000df2f6 	bytepick.d	$r22,$r23,$r28,0x3
 864:	01010101 	fadd.d	$f1,$f8,$f0
 868:	01000000 	0x01000000
 86c:	2e010000 	0x2e010000
 870:	6e692f2e 	bgeu	$r25,$r14,-104148(0x2692c) # fffe719c <_stack+0xe3fd5c38>
 874:	64756c63 	bge	$r3,$r3,30060(0x756c) # 7de0 <data_size+0x7998>
 878:	74000065 	xvseq.b	$xr5,$xr3,$xr0
 87c:	2e656d69 	0x2e656d69
 880:	00000063 	0x00000063
 884:	6d697400 	bgeu	$r0,$r0,92532(0x16974) # 171f8 <data_size+0x16db0>
 888:	00682e65 	bstrins.w	$r5,$r19,0x8,0xb
 88c:	00000001 	0x00000001
 890:	50020500 	b	67109380(0x4000204) # 4000a94 <data_size+0x400064c>
 894:	281c0010 	ld.b	$r16,$r0,1792(0x700)
 898:	05000105 	0x05000105
 89c:	00105002 	add.w	$r2,$r0,$r20
 8a0:	0505181c 	0x0505181c
 8a4:	50020500 	b	67109380(0x4000204) # 4000aa8 <data_size+0x4000660>
 8a8:	031c0010 	lu52i.d	$r16,$r0,1792(0x700)
 8ac:	05050173 	0x05050173
 8b0:	50020500 	b	67109380(0x4000204) # 4000ab4 <data_size+0x400066c>
 8b4:	181c0010 	pcaddi	$r16,57344(0xe000)
 8b8:	05000505 	0x05000505
 8bc:	00105002 	add.w	$r2,$r0,$r20
 8c0:	0522061c 	0x0522061c
 8c4:	02050001 	slti	$r1,$r0,320(0x140)
 8c8:	1c001058 	pcaddu12i	$r24,130(0x82)
 8cc:	05017503 	0x05017503
 8d0:	02050005 	slti	$r5,$r0,320(0x140)
 8d4:	1c001060 	pcaddu12i	$r0,131(0x83)
 8d8:	05051e06 	0x05051e06
 8dc:	60020500 	blt	$r8,$r0,516(0x204) # ae0 <data_size+0x698>
 8e0:	061c0010 	cacop	0x10,$r0,1792(0x700)
 8e4:	0001051d 	0x0001051d
 8e8:	10700205 	addu16i.d	$r5,$r16,7168(0x1c00)
 8ec:	1a061c00 	pcalau12i	$r0,12512(0x30e0)
 8f0:	05000105 	0x05000105
 8f4:	00107002 	add.w	$r2,$r0,$r28
 8f8:	0505181c 	0x0505181c
 8fc:	70020500 	vsle.b	$vr0,$vr8,$vr1
 900:	181c0010 	pcaddi	$r16,57344(0xe000)
 904:	05000505 	0x05000505
 908:	00107402 	add.w	$r2,$r0,$r29
 90c:	05051b1c 	0x05051b1c
 910:	74020500 	xvsle.b	$xr0,$xr8,$xr1
 914:	061c0010 	cacop	0x10,$r0,1792(0x700)
 918:	00010518 	0x00010518
 91c:	10780205 	addu16i.d	$r5,$r16,7680(0x1e00)
 920:	1a061c00 	pcalau12i	$r0,12512(0x30e0)
 924:	05000105 	0x05000105
 928:	00107802 	add.w	$r2,$r0,$r30
 92c:	0505181c 	0x0505181c
 930:	78020500 	0x78020500
 934:	181c0010 	pcaddi	$r16,57344(0xe000)
 938:	05000505 	0x05000505
 93c:	00107802 	add.w	$r2,$r0,$r30
 940:	0163031c 	0x0163031c
 944:	05000505 	0x05000505
 948:	00107802 	add.w	$r2,$r0,$r30
 94c:	0505181c 	0x0505181c
 950:	78020500 	0x78020500
 954:	061c0010 	cacop	0x10,$r0,1792(0x700)
 958:	00010531 	0x00010531
 95c:	10800205 	addu16i.d	$r5,$r16,8192(0x2000)
 960:	66031c00 	bge	$r0,$r0,-130276(0x2031c) # fffe0c7c <_stack+0xe3fcf718>
 964:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 968:	10880205 	addu16i.d	$r5,$r16,8704(0x2200)
 96c:	1e061c00 	pcaddu18i	$r0,12512(0x30e0)
 970:	05000505 	0x05000505
 974:	00108802 	add.d	$r2,$r0,$r2
 978:	05052d1c 	0x05052d1c
 97c:	88020500 	0x88020500
 980:	061c0010 	cacop	0x10,$r0,1792(0x700)
 984:	00150501 	or	$r1,$r8,$r1
 988:	10900205 	addu16i.d	$r5,$r16,9216(0x2400)
 98c:	05181c00 	0x05181c00
 990:	02050016 	slti	$r22,$r0,320(0x140)
 994:	1c001094 	pcaddu12i	$r20,132(0x84)
 998:	00360516 	0x00360516
 99c:	10980205 	addu16i.d	$r5,$r16,9728(0x2600)
 9a0:	05181c00 	0x05181c00
 9a4:	02050016 	slti	$r22,$r0,320(0x140)
 9a8:	1c0010a4 	pcaddu12i	$r4,133(0x85)
 9ac:	00280501 	0x00280501
 9b0:	10b00205 	addu16i.d	$r5,$r16,11264(0x2c00)
 9b4:	05181c00 	0x05181c00
 9b8:	02050027 	slti	$r7,$r1,320(0x140)
 9bc:	1c0010c4 	pcaddu12i	$r4,134(0x86)
 9c0:	00360501 	0x00360501
 9c4:	10d00205 	addu16i.d	$r5,$r16,13312(0x3400)
 9c8:	05161c00 	0x05161c00
 9cc:	02050012 	slti	$r18,$r0,320(0x140)
 9d0:	1c0010d4 	pcaddu12i	$r20,134(0x86)
 9d4:	00120518 	slt	$r24,$r8,$r1
 9d8:	10d80205 	addu16i.d	$r5,$r16,13824(0x3600)
 9dc:	05181c00 	0x05181c00
 9e0:	02050012 	slti	$r18,$r0,320(0x140)
 9e4:	1c0010dc 	pcaddu12i	$r28,134(0x86)
 9e8:	0001051a 	0x0001051a
 9ec:	10e40205 	addu16i.d	$r5,$r16,14592(0x3900)
 9f0:	05111c00 	0x05111c00
 9f4:	02050036 	slti	$r22,$r1,320(0x140)
 9f8:	1c0010f0 	pcaddu12i	$r16,135(0x87)
 9fc:	00120501 	slt	$r1,$r8,$r1
 a00:	10f40205 	addu16i.d	$r5,$r16,15616(0x3d00)
 a04:	18061c00 	pcaddi	$r0,12512(0x30e0)
 a08:	05000505 	0x05000505
 a0c:	0010f402 	add.d	$r2,$r0,$r29
 a10:	0505181c 	0x0505181c
 a14:	f4020500 	0xf4020500
 a18:	181c0010 	pcaddi	$r16,57344(0xe000)
 a1c:	05000505 	0x05000505
 a20:	0010f402 	add.d	$r2,$r0,$r29
 a24:	0505191c 	0x0505191c
 a28:	f4020500 	0xf4020500
 a2c:	061c0010 	cacop	0x10,$r0,1792(0x700)
 a30:	00010518 	0x00010518
 a34:	11000205 	addu16i.d	$r5,$r16,16384(0x4000)
 a38:	21061c00 	sc.w	$r0,$r0,1564(0x61c)
 a3c:	05000105 	0x05000105
 a40:	00110002 	sub.w	$r2,$r0,$r0
 a44:	0505181c 	0x0505181c
 a48:	00020500 	0x00020500
 a4c:	181c0011 	pcaddi	$r17,57344(0xe000)
 a50:	05000505 	0x05000505
 a54:	00110002 	sub.w	$r2,$r0,$r0
 a58:	0150031c 	0x0150031c
 a5c:	05000505 	0x05000505
 a60:	00110002 	sub.w	$r2,$r0,$r0
 a64:	0505181c 	0x0505181c
 a68:	00020500 	0x00020500
 a6c:	061c0011 	cacop	0x11,$r0,1792(0x700)
 a70:	00010544 	0x00010544
 a74:	11080205 	addu16i.d	$r5,$r16,16896(0x4200)
 a78:	53031c00 	b	197404(0x3031c) # 30d94 <data_size+0x3094c>
 a7c:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 a80:	11100205 	addu16i.d	$r5,$r16,17408(0x4400)
 a84:	1e061c00 	pcaddu18i	$r0,12512(0x30e0)
 a88:	05000505 	0x05000505
 a8c:	00111002 	sub.w	$r2,$r0,$r4
 a90:	0505401c 	0x0505401c
 a94:	10020500 	addu16i.d	$r0,$r8,129(0x81)
 a98:	181c0011 	pcaddi	$r17,57344(0xe000)
 a9c:	05000505 	0x05000505
 aa0:	00111002 	sub.w	$r2,$r0,$r4
 aa4:	0516061c 	0x0516061c
 aa8:	02050006 	slti	$r6,$r0,320(0x140)
 aac:	1c001114 	pcaddu12i	$r20,136(0x88)
 ab0:	00010519 	0x00010519
 ab4:	11240205 	addu16i.d	$r5,$r16,18688(0x4900)
 ab8:	1b061c00 	pcalau12i	$r0,-511776(0x830e0)
 abc:	05000105 	0x05000105
 ac0:	00112402 	sub.w	$r2,$r0,$r9
 ac4:	0505181c 	0x0505181c
 ac8:	24020500 	ldptr.w	$r0,$r8,516(0x204)
 acc:	181c0011 	pcaddi	$r17,57344(0xe000)
 ad0:	05000505 	0x05000505
 ad4:	00112402 	sub.w	$r2,$r0,$r9
 ad8:	0147031c 	0x0147031c
 adc:	05000505 	0x05000505
 ae0:	00112402 	sub.w	$r2,$r0,$r9
 ae4:	0505181c 	0x0505181c
 ae8:	24020500 	ldptr.w	$r0,$r8,516(0x204)
 aec:	061c0011 	cacop	0x11,$r0,1792(0x700)
 af0:	0001054d 	0x0001054d
 af4:	112c0205 	addu16i.d	$r5,$r16,19200(0x4b00)
 af8:	4a031c00 	bceqz	$fcc0,131868(0x2031c) # 20e14 <data_size+0x209cc>
 afc:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 b00:	11340205 	addu16i.d	$r5,$r16,19712(0x4d00)
 b04:	1e061c00 	pcaddu18i	$r0,12512(0x30e0)
 b08:	05000505 	0x05000505
 b0c:	00113402 	sub.w	$r2,$r0,$r13
 b10:	0505491c 	0x0505491c
 b14:	34020500 	0x34020500
 b18:	181c0011 	pcaddi	$r17,57344(0xe000)
 b1c:	05000505 	0x05000505
 b20:	00113402 	sub.w	$r2,$r0,$r13
 b24:	0516061c 	0x0516061c
 b28:	02050006 	slti	$r6,$r0,320(0x140)
 b2c:	1c001138 	pcaddu12i	$r24,137(0x89)
 b30:	00010519 	0x00010519
 b34:	11540205 	addu16i.d	$r5,$r16,21760(0x5500)
 b38:	01001c00 	0x01001c00
 b3c:	Address 0x0000000000000b3c is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff7474 <_stack+0xe3fe5f10>
   4:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
   8:	73747570 	0x73747570
   c:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe697c <_stack+0xe3fd5418>
  10:	72700067 	0x72700067
  14:	62746e69 	blt	$r19,$r9,-101268(0x2746c) # fffe7480 <_stack+0xe3fd5f1c>
  18:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
  1c:	5f746774 	bne	$r27,$r20,-35740(0x37464) # ffff7480 <_stack+0xe3fe5f1c>
  20:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff7494 <_stack+0xe3fe5f30>
  24:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
  28:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff749c <_stack+0xe3fe5f38>
  2c:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
  30:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff74a4 <_stack+0xe3fe5f40>
  34:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
