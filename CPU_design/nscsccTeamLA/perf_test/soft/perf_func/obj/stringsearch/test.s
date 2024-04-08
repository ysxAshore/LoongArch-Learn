
obj/stringsearch/main.elf:     file format elf32-loongarch
obj/stringsearch/main.elf


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
1c000080:	2880a063 	ld.w	$r3,$r3,40(0x28)
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
1c00038c:	54001400 	bl	20(0x14) # 1c0003a0 <shell10>
1c000390:	03400000 	andi	$r0,$r0,0x0

1c000394 <go_finish>:
go_finish():
1c000394:	53fd6fff 	b	-660(0xffffd6c) # 1c000100 <test_finish>
	...

1c0003a0 <shell10>:
shell10():
1c0003a0:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0003a4:	29807061 	st.w	$r1,$r3,28(0x1c)
1c0003a8:	157f5fcc 	lu12i.w	$r12,-263426(0xbfafe)
1c0003ac:	29804079 	st.w	$r25,$r3,16(0x10)
1c0003b0:	2980307a 	st.w	$r26,$r3,12(0xc)
1c0003b4:	29806077 	st.w	$r23,$r3,24(0x18)
1c0003b8:	29805078 	st.w	$r24,$r3,20(0x14)
1c0003bc:	29800180 	st.w	$r0,$r12,0
1c0003c0:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0003c4:	02801084 	addi.w	$r4,$r4,4(0x4)
1c0003c8:	540b7400 	bl	2932(0xb74) # 1c000f3c <puts>
1c0003cc:	540ef400 	bl	3828(0xef4) # 1c0012c0 <get_count>
1c0003d0:	00150099 	move	$r25,$r4
1c0003d4:	540f0c00 	bl	3852(0xf0c) # 1c0012e0 <get_count_my>
1c0003d8:	0015009a 	move	$r26,$r4
1c0003dc:	157f5fe4 	lu12i.w	$r4,-263425(0xbfaff)
1c0003e0:	03bc8085 	ori	$r5,$r4,0xf20
1c0003e4:	288000a6 	ld.w	$r6,$r5,0
1c0003e8:	5c00f0c0 	bne	$r6,$r0,240(0xf0) # 1c0004d8 <shell10+0x138>
1c0003ec:	02802817 	addi.w	$r23,$r0,10(0xa)
1c0003f0:	00150018 	move	$r24,$r0
1c0003f4:	54042c00 	bl	1068(0x42c) # 1c000820 <search_small>
1c0003f8:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c0003fc:	00101318 	add.w	$r24,$r24,$r4
1c000400:	5ffff6e0 	bne	$r23,$r0,-12(0x3fff4) # 1c0003f4 <shell10+0x54>
1c000404:	540edc00 	bl	3804(0xedc) # 1c0012e0 <get_count_my>
1c000408:	00150097 	move	$r23,$r4
1c00040c:	540eb400 	bl	3764(0xeb4) # 1c0012c0 <get_count>
1c000410:	00116499 	sub.w	$r25,$r4,$r25
1c000414:	00116afa 	sub.w	$r26,$r23,$r26
1c000418:	58008b00 	beq	$r24,$r0,136(0x88) # 1c0004a0 <shell10+0x100>
1c00041c:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000420:	02bf6084 	addi.w	$r4,$r4,-40(0xfd8)
1c000424:	540b1800 	bl	2840(0xb18) # 1c000f3c <puts>
1c000428:	157f5fe7 	lu12i.w	$r7,-263425(0xbfaff)
1c00042c:	038100ee 	ori	$r14,$r7,0x40
1c000430:	0280040f 	addi.w	$r15,$r0,1(0x1)
1c000434:	298001cf 	st.w	$r15,$r14,0
1c000438:	0380c0ed 	ori	$r13,$r7,0x30
1c00043c:	02800809 	addi.w	$r9,$r0,2(0x2)
1c000440:	038080e8 	ori	$r8,$r7,0x20
1c000444:	298001a9 	st.w	$r9,$r13,0
1c000448:	29800100 	st.w	$r0,$r8,0
1c00044c:	157f5fe1 	lu12i.w	$r1,-263425(0xbfaff)
1c000450:	0381402c 	ori	$r12,$r1,0x50
1c000454:	2980019a 	st.w	$r26,$r12,0
1c000458:	157f5f04 	lu12i.w	$r4,-263432(0xbfaf8)
1c00045c:	2980009a 	st.w	$r26,$r4,0
1c000460:	03804085 	ori	$r5,$r4,0x10
1c000464:	298000b9 	st.w	$r25,$r5,0
1c000468:	1c000024 	pcaddu12i	$r4,1(0x1)
1c00046c:	02be9084 	addi.w	$r4,$r4,-92(0xfa4)
1c000470:	00150325 	move	$r5,$r25
1c000474:	5407dc00 	bl	2012(0x7dc) # 1c000c50 <printf>
1c000478:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c00047c:	28806077 	ld.w	$r23,$r3,24(0x18)
1c000480:	28805078 	ld.w	$r24,$r3,20(0x14)
1c000484:	28804079 	ld.w	$r25,$r3,16(0x10)
1c000488:	00150345 	move	$r5,$r26
1c00048c:	2880307a 	ld.w	$r26,$r3,12(0xc)
1c000490:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000494:	02beb084 	addi.w	$r4,$r4,-84(0xfac)
1c000498:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00049c:	5007b400 	b	1972(0x7b4) # 1c000c50 <printf>
1c0004a0:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0004a4:	02bd0084 	addi.w	$r4,$r4,-192(0xf40)
1c0004a8:	540a9400 	bl	2708(0xa94) # 1c000f3c <puts>
1c0004ac:	157f5fea 	lu12i.w	$r10,-263425(0xbfaff)
1c0004b0:	0280040b 	addi.w	$r11,$r0,1(0x1)
1c0004b4:	03810150 	ori	$r16,$r10,0x40
1c0004b8:	2980020b 	st.w	$r11,$r16,0
1c0004bc:	0380c151 	ori	$r17,$r10,0x30
1c0004c0:	140001f3 	lu12i.w	$r19,15(0xf)
1c0004c4:	03808152 	ori	$r18,$r10,0x20
1c0004c8:	2980022b 	st.w	$r11,$r17,0
1c0004cc:	03bffe74 	ori	$r20,$r19,0xfff
1c0004d0:	29800254 	st.w	$r20,$r18,0
1c0004d4:	53ff7bff 	b	-136(0xfffff78) # 1c00044c <shell10+0xac>
1c0004d8:	54034800 	bl	840(0x348) # 1c000820 <search_small>
1c0004dc:	00150098 	move	$r24,$r4
1c0004e0:	540e0000 	bl	3584(0xe00) # 1c0012e0 <get_count_my>
1c0004e4:	00150097 	move	$r23,$r4
1c0004e8:	540dd800 	bl	3544(0xdd8) # 1c0012c0 <get_count>
1c0004ec:	00116499 	sub.w	$r25,$r4,$r25
1c0004f0:	00116afa 	sub.w	$r26,$r23,$r26
1c0004f4:	5fff2b00 	bne	$r24,$r0,-216(0x3ff28) # 1c00041c <shell10+0x7c>
1c0004f8:	53ffabff 	b	-88(0xfffffa8) # 1c0004a0 <shell10+0x100>
1c0004fc:	03400000 	andi	$r0,$r0,0x0

1c000500 <init_search>:
init_search():
1c000500:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000504:	29802077 	st.w	$r23,$r3,8(0x8)
1c000508:	29803061 	st.w	$r1,$r3,12(0xc)
1c00050c:	00150097 	move	$r23,$r4
1c000510:	540b4000 	bl	2880(0xb40) # 1c001050 <strlen>
1c000514:	1c00004e 	pcaddu12i	$r14,2(0x2)
1c000518:	0282e1ce 	addi.w	$r14,$r14,184(0xb8)
1c00051c:	1c00004c 	pcaddu12i	$r12,2(0x2)
1c000520:	0282b18c 	addi.w	$r12,$r12,172(0xac)
1c000524:	29800184 	st.w	$r4,$r12,0
1c000528:	001501c5 	move	$r5,$r14
1c00052c:	029001cd 	addi.w	$r13,$r14,1024(0x400)
1c000530:	298000a4 	st.w	$r4,$r5,0
1c000534:	298010a4 	st.w	$r4,$r5,4(0x4)
1c000538:	298020a4 	st.w	$r4,$r5,8(0x8)
1c00053c:	298030a4 	st.w	$r4,$r5,12(0xc)
1c000540:	298040a4 	st.w	$r4,$r5,16(0x10)
1c000544:	298050a4 	st.w	$r4,$r5,20(0x14)
1c000548:	298060a4 	st.w	$r4,$r5,24(0x18)
1c00054c:	298070a4 	st.w	$r4,$r5,28(0x1c)
1c000550:	028080a5 	addi.w	$r5,$r5,32(0x20)
1c000554:	5fffdcad 	bne	$r5,$r13,-36(0x3ffdc) # 1c000530 <init_search+0x30>
1c000558:	5801a480 	beq	$r4,$r0,420(0x1a4) # 1c0006fc <init_search+0x1fc>
1c00055c:	02bffee1 	addi.w	$r1,$r23,-1(0xfff)
1c000560:	03401c8f 	andi	$r15,$r4,0x7
1c000564:	00101026 	add.w	$r6,$r1,$r4
1c000568:	001502ec 	move	$r12,$r23
1c00056c:	00105c84 	add.w	$r4,$r4,$r23
1c000570:	5800c9e0 	beq	$r15,$r0,200(0xc8) # 1c000638 <init_search+0x138>
1c000574:	02800410 	addi.w	$r16,$r0,1(0x1)
1c000578:	5800a5f0 	beq	$r15,$r16,164(0xa4) # 1c00061c <init_search+0x11c>
1c00057c:	02800807 	addi.w	$r7,$r0,2(0x2)
1c000580:	580085e7 	beq	$r15,$r7,132(0x84) # 1c000604 <init_search+0x104>
1c000584:	02800c08 	addi.w	$r8,$r0,3(0x3)
1c000588:	580065e8 	beq	$r15,$r8,100(0x64) # 1c0005ec <init_search+0xec>
1c00058c:	02801009 	addi.w	$r9,$r0,4(0x4)
1c000590:	580045e9 	beq	$r15,$r9,68(0x44) # 1c0005d4 <init_search+0xd4>
1c000594:	0280140a 	addi.w	$r10,$r0,5(0x5)
1c000598:	580025ea 	beq	$r15,$r10,36(0x24) # 1c0005bc <init_search+0xbc>
1c00059c:	0280180b 	addi.w	$r11,$r0,6(0x6)
1c0005a0:	5c0179eb 	bne	$r15,$r11,376(0x178) # 1c000718 <init_search+0x218>
1c0005a4:	2a00018d 	ld.bu	$r13,$r12,0
1c0005a8:	001130c5 	sub.w	$r5,$r6,$r12
1c0005ac:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0005b0:	004089a1 	slli.w	$r1,$r13,0x2
1c0005b4:	001005cf 	add.w	$r15,$r14,$r1
1c0005b8:	298001e5 	st.w	$r5,$r15,0
1c0005bc:	2a000187 	ld.bu	$r7,$r12,0
1c0005c0:	001130d0 	sub.w	$r16,$r6,$r12
1c0005c4:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0005c8:	004088e8 	slli.w	$r8,$r7,0x2
1c0005cc:	001021c9 	add.w	$r9,$r14,$r8
1c0005d0:	29800130 	st.w	$r16,$r9,0
1c0005d4:	2a00018a 	ld.bu	$r10,$r12,0
1c0005d8:	001130cb 	sub.w	$r11,$r6,$r12
1c0005dc:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0005e0:	00408951 	slli.w	$r17,$r10,0x2
1c0005e4:	001045d2 	add.w	$r18,$r14,$r17
1c0005e8:	2980024b 	st.w	$r11,$r18,0
1c0005ec:	2a000193 	ld.bu	$r19,$r12,0
1c0005f0:	001130d4 	sub.w	$r20,$r6,$r12
1c0005f4:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0005f8:	00408a6d 	slli.w	$r13,$r19,0x2
1c0005fc:	001035c5 	add.w	$r5,$r14,$r13
1c000600:	298000b4 	st.w	$r20,$r5,0
1c000604:	2a000181 	ld.bu	$r1,$r12,0
1c000608:	001130c7 	sub.w	$r7,$r6,$r12
1c00060c:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c000610:	0040882f 	slli.w	$r15,$r1,0x2
1c000614:	00103dd0 	add.w	$r16,$r14,$r15
1c000618:	29800207 	st.w	$r7,$r16,0
1c00061c:	2a000188 	ld.bu	$r8,$r12,0
1c000620:	001130c9 	sub.w	$r9,$r6,$r12
1c000624:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c000628:	0040890a 	slli.w	$r10,$r8,0x2
1c00062c:	001029cb 	add.w	$r11,$r14,$r10
1c000630:	29800169 	st.w	$r9,$r11,0
1c000634:	5800c88c 	beq	$r4,$r12,200(0xc8) # 1c0006fc <init_search+0x1fc>
1c000638:	2a000192 	ld.bu	$r18,$r12,0
1c00063c:	001130d1 	sub.w	$r17,$r6,$r12
1c000640:	02800593 	addi.w	$r19,$r12,1(0x1)
1c000644:	00408a54 	slli.w	$r20,$r18,0x2
1c000648:	001051cd 	add.w	$r13,$r14,$r20
1c00064c:	298001b1 	st.w	$r17,$r13,0
1c000650:	2a000585 	ld.bu	$r5,$r12,1(0x1)
1c000654:	00114cc1 	sub.w	$r1,$r6,$r19
1c000658:	02800987 	addi.w	$r7,$r12,2(0x2)
1c00065c:	004088af 	slli.w	$r15,$r5,0x2
1c000660:	00103dd0 	add.w	$r16,$r14,$r15
1c000664:	29800201 	st.w	$r1,$r16,0
1c000668:	2a000988 	ld.bu	$r8,$r12,2(0x2)
1c00066c:	00111cc9 	sub.w	$r9,$r6,$r7
1c000670:	02800d8a 	addi.w	$r10,$r12,3(0x3)
1c000674:	0040890b 	slli.w	$r11,$r8,0x2
1c000678:	00102dd2 	add.w	$r18,$r14,$r11
1c00067c:	29800249 	st.w	$r9,$r18,0
1c000680:	2a000d93 	ld.bu	$r19,$r12,3(0x3)
1c000684:	001128d4 	sub.w	$r20,$r6,$r10
1c000688:	02801191 	addi.w	$r17,$r12,4(0x4)
1c00068c:	00408a6d 	slli.w	$r13,$r19,0x2
1c000690:	001035c5 	add.w	$r5,$r14,$r13
1c000694:	298000b4 	st.w	$r20,$r5,0
1c000698:	2a001181 	ld.bu	$r1,$r12,4(0x4)
1c00069c:	001144c7 	sub.w	$r7,$r6,$r17
1c0006a0:	02801590 	addi.w	$r16,$r12,5(0x5)
1c0006a4:	0040882f 	slli.w	$r15,$r1,0x2
1c0006a8:	00103dc8 	add.w	$r8,$r14,$r15
1c0006ac:	29800107 	st.w	$r7,$r8,0
1c0006b0:	2a001589 	ld.bu	$r9,$r12,5(0x5)
1c0006b4:	001140ca 	sub.w	$r10,$r6,$r16
1c0006b8:	0280198b 	addi.w	$r11,$r12,6(0x6)
1c0006bc:	00408932 	slli.w	$r18,$r9,0x2
1c0006c0:	001049d3 	add.w	$r19,$r14,$r18
1c0006c4:	2980026a 	st.w	$r10,$r19,0
1c0006c8:	2a001994 	ld.bu	$r20,$r12,6(0x6)
1c0006cc:	00112cd1 	sub.w	$r17,$r6,$r11
1c0006d0:	02801d8d 	addi.w	$r13,$r12,7(0x7)
1c0006d4:	00408a85 	slli.w	$r5,$r20,0x2
1c0006d8:	001015c1 	add.w	$r1,$r14,$r5
1c0006dc:	29800031 	st.w	$r17,$r1,0
1c0006e0:	2a001d87 	ld.bu	$r7,$r12,7(0x7)
1c0006e4:	001134d0 	sub.w	$r16,$r6,$r13
1c0006e8:	0280218c 	addi.w	$r12,$r12,8(0x8)
1c0006ec:	004088ef 	slli.w	$r15,$r7,0x2
1c0006f0:	00103dc8 	add.w	$r8,$r14,$r15
1c0006f4:	29800110 	st.w	$r16,$r8,0
1c0006f8:	5fff408c 	bne	$r4,$r12,-192(0x3ff40) # 1c000638 <init_search+0x138>
1c0006fc:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000700:	1c00004e 	pcaddu12i	$r14,2(0x2)
1c000704:	02bb11ce 	addi.w	$r14,$r14,-316(0xec4)
1c000708:	298001d7 	st.w	$r23,$r14,0
1c00070c:	28802077 	ld.w	$r23,$r3,8(0x8)
1c000710:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000714:	4c000020 	jirl	$r0,$r1,0
1c000718:	2a0002f1 	ld.bu	$r17,$r23,0
1c00071c:	00115cd2 	sub.w	$r18,$r6,$r23
1c000720:	028006ec 	addi.w	$r12,$r23,1(0x1)
1c000724:	00408a33 	slli.w	$r19,$r17,0x2
1c000728:	00104dd4 	add.w	$r20,$r14,$r19
1c00072c:	29800292 	st.w	$r18,$r20,0
1c000730:	53fe77ff 	b	-396(0xffffe74) # 1c0005a4 <init_search+0xa4>
1c000734:	03400000 	andi	$r0,$r0,0x0
1c000738:	03400000 	andi	$r0,$r0,0x0
1c00073c:	03400000 	andi	$r0,$r0,0x0

1c000740 <strsearch>:
strsearch():
1c000740:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c000744:	1c00004c 	pcaddu12i	$r12,2(0x2)
1c000748:	02ba118c 	addi.w	$r12,$r12,-380(0xe84)
1c00074c:	2980407d 	st.w	$r29,$r3,16(0x10)
1c000750:	2880019d 	ld.w	$r29,$r12,0
1c000754:	2980a077 	st.w	$r23,$r3,40(0x28)
1c000758:	29809078 	st.w	$r24,$r3,36(0x24)
1c00075c:	29808079 	st.w	$r25,$r3,32(0x20)
1c000760:	2980707a 	st.w	$r26,$r3,28(0x1c)
1c000764:	2980507c 	st.w	$r28,$r3,20(0x14)
1c000768:	2980307e 	st.w	$r30,$r3,12(0xc)
1c00076c:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c000770:	2980607b 	st.w	$r27,$r3,24(0x18)
1c000774:	00150098 	move	$r24,$r4
1c000778:	5408d800 	bl	2264(0x8d8) # 1c001050 <strlen>
1c00077c:	1c000045 	pcaddu12i	$r5,2(0x2)
1c000780:	02b920a5 	addi.w	$r5,$r5,-440(0xe48)
1c000784:	02800406 	addi.w	$r6,$r0,1(0x1)
1c000788:	02bfffb7 	addi.w	$r23,$r29,-1(0xfff)
1c00078c:	0015009a 	move	$r26,$r4
1c000790:	288000be 	ld.w	$r30,$r5,0
1c000794:	1c000059 	pcaddu12i	$r25,2(0x2)
1c000798:	02b8e339 	addi.w	$r25,$r25,-456(0xe38)
1c00079c:	001174dc 	sub.w	$r28,$r6,$r29
1c0007a0:	6c0026e4 	bgeu	$r23,$r4,36(0x24) # 1c0007c4 <strsearch+0x84>
1c0007a4:	00105f01 	add.w	$r1,$r24,$r23
1c0007a8:	2a000024 	ld.bu	$r4,$r1,0
1c0007ac:	00408887 	slli.w	$r7,$r4,0x2
1c0007b0:	00101f28 	add.w	$r8,$r25,$r7
1c0007b4:	28800109 	ld.w	$r9,$r8,0
1c0007b8:	58004120 	beq	$r9,$r0,64(0x40) # 1c0007f8 <strsearch+0xb8>
1c0007bc:	001026f7 	add.w	$r23,$r23,$r9
1c0007c0:	6bffe6fa 	bltu	$r23,$r26,-28(0x3ffe4) # 1c0007a4 <strsearch+0x64>
1c0007c4:	0015001b 	move	$r27,$r0
1c0007c8:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c0007cc:	00150364 	move	$r4,$r27
1c0007d0:	2880a077 	ld.w	$r23,$r3,40(0x28)
1c0007d4:	28809078 	ld.w	$r24,$r3,36(0x24)
1c0007d8:	28808079 	ld.w	$r25,$r3,32(0x20)
1c0007dc:	2880707a 	ld.w	$r26,$r3,28(0x1c)
1c0007e0:	2880607b 	ld.w	$r27,$r3,24(0x18)
1c0007e4:	2880507c 	ld.w	$r28,$r3,20(0x14)
1c0007e8:	2880407d 	ld.w	$r29,$r3,16(0x10)
1c0007ec:	2880307e 	ld.w	$r30,$r3,12(0xc)
1c0007f0:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c0007f4:	4c000020 	jirl	$r0,$r1,0
1c0007f8:	00105f9b 	add.w	$r27,$r28,$r23
1c0007fc:	00106f1b 	add.w	$r27,$r24,$r27
1c000800:	001503a6 	move	$r6,$r29
1c000804:	00150365 	move	$r5,$r27
1c000808:	001503c4 	move	$r4,$r30
1c00080c:	5408f400 	bl	2292(0x8f4) # 1c001100 <strncmp>
1c000810:	028006f7 	addi.w	$r23,$r23,1(0x1)
1c000814:	5fffac80 	bne	$r4,$r0,-84(0x3ffac) # 1c0007c0 <strsearch+0x80>
1c000818:	53ffb3ff 	b	-80(0xfffffb0) # 1c0007c8 <strsearch+0x88>
1c00081c:	03400000 	andi	$r0,$r0,0x0

1c000820 <search_small>:
search_small():
1c000820:	02b44063 	addi.w	$r3,$r3,-752(0xd10)
1c000824:	0283a006 	addi.w	$r6,$r0,232(0xe8)
1c000828:	1c000025 	pcaddu12i	$r5,1(0x1)
1c00082c:	02b7d0a5 	addi.w	$r5,$r5,-524(0xdf4)
1c000830:	02876064 	addi.w	$r4,$r3,472(0x1d8)
1c000834:	298bb061 	st.w	$r1,$r3,748(0x2ec)
1c000838:	298b107f 	st.w	$r31,$r3,708(0x2c4)
1c00083c:	298ba076 	st.w	$r22,$r3,744(0x2e8)
1c000840:	298b9077 	st.w	$r23,$r3,740(0x2e4)
1c000844:	298b8078 	st.w	$r24,$r3,736(0x2e0)
1c000848:	298b7079 	st.w	$r25,$r3,732(0x2dc)
1c00084c:	298b607a 	st.w	$r26,$r3,728(0x2d8)
1c000850:	298b507b 	st.w	$r27,$r3,724(0x2d4)
1c000854:	298b407c 	st.w	$r28,$r3,720(0x2d0)
1c000858:	298b307d 	st.w	$r29,$r3,716(0x2cc)
1c00085c:	298b207e 	st.w	$r30,$r3,712(0x2c8)
1c000860:	54097800 	bl	2424(0x978) # 1c0011d8 <memcpy>
1c000864:	02839006 	addi.w	$r6,$r0,228(0xe4)
1c000868:	1c000025 	pcaddu12i	$r5,1(0x1)
1c00086c:	029440a5 	addi.w	$r5,$r5,1296(0x510)
1c000870:	02804064 	addi.w	$r4,$r3,16(0x10)
1c000874:	54096400 	bl	2404(0x964) # 1c0011d8 <memcpy>
1c000878:	02839006 	addi.w	$r6,$r0,228(0xe4)
1c00087c:	1c000025 	pcaddu12i	$r5,1(0x1)
1c000880:	029780a5 	addi.w	$r5,$r5,1504(0x5e0)
1c000884:	0283d064 	addi.w	$r4,$r3,244(0xf4)
1c000888:	54095000 	bl	2384(0x950) # 1c0011d8 <memcpy>
1c00088c:	2887607f 	ld.w	$r31,$r3,472(0x1d8)
1c000890:	580387e0 	beq	$r31,$r0,900(0x384) # 1c000c14 <search_small+0x3f4>
1c000894:	1c000056 	pcaddu12i	$r22,2(0x2)
1c000898:	02b4e2d6 	addi.w	$r22,$r22,-712(0xd38)
1c00089c:	0287707a 	addi.w	$r26,$r3,476(0x1dc)
1c0008a0:	0283d078 	addi.w	$r24,$r3,244(0xf4)
1c0008a4:	02804079 	addi.w	$r25,$r3,16(0x10)
1c0008a8:	0015001b 	move	$r27,$r0
1c0008ac:	001503e4 	move	$r4,$r31
1c0008b0:	5407a000 	bl	1952(0x7a0) # 1c001050 <strlen>
1c0008b4:	1c00004c 	pcaddu12i	$r12,2(0x2)
1c0008b8:	02b4518c 	addi.w	$r12,$r12,-748(0xd14)
1c0008bc:	0015009e 	move	$r30,$r4
1c0008c0:	29800184 	st.w	$r4,$r12,0
1c0008c4:	1c000044 	pcaddu12i	$r4,2(0x2)
1c0008c8:	02b42084 	addi.w	$r4,$r4,-760(0xd08)
1c0008cc:	1c00004d 	pcaddu12i	$r13,2(0x2)
1c0008d0:	02b401ad 	addi.w	$r13,$r13,-768(0xd00)
1c0008d4:	2980009e 	st.w	$r30,$r4,0
1c0008d8:	2980109e 	st.w	$r30,$r4,4(0x4)
1c0008dc:	2980209e 	st.w	$r30,$r4,8(0x8)
1c0008e0:	2980309e 	st.w	$r30,$r4,12(0xc)
1c0008e4:	2980409e 	st.w	$r30,$r4,16(0x10)
1c0008e8:	2980509e 	st.w	$r30,$r4,20(0x14)
1c0008ec:	2980609e 	st.w	$r30,$r4,24(0x18)
1c0008f0:	2980709e 	st.w	$r30,$r4,28(0x1c)
1c0008f4:	029001a1 	addi.w	$r1,$r13,1024(0x400)
1c0008f8:	02808084 	addi.w	$r4,$r4,32(0x20)
1c0008fc:	5fffd024 	bne	$r1,$r4,-48(0x3ffd0) # 1c0008cc <search_small+0xac>
1c000900:	02bfffdd 	addi.w	$r29,$r30,-1(0xfff)
1c000904:	5802ffc0 	beq	$r30,$r0,764(0x2fc) # 1c000c00 <search_small+0x3e0>
1c000908:	03401fd2 	andi	$r18,$r30,0x7
1c00090c:	001503ec 	move	$r12,$r31
1c000910:	001077ef 	add.w	$r15,$r31,$r29
1c000914:	00107fd3 	add.w	$r19,$r30,$r31
1c000918:	5800e240 	beq	$r18,$r0,224(0xe0) # 1c0009f8 <search_small+0x1d8>
1c00091c:	02800414 	addi.w	$r20,$r0,1(0x1)
1c000920:	5800be54 	beq	$r18,$r20,188(0xbc) # 1c0009dc <search_small+0x1bc>
1c000924:	02800806 	addi.w	$r6,$r0,2(0x2)
1c000928:	58009e46 	beq	$r18,$r6,156(0x9c) # 1c0009c4 <search_small+0x1a4>
1c00092c:	02800c07 	addi.w	$r7,$r0,3(0x3)
1c000930:	58007e47 	beq	$r18,$r7,124(0x7c) # 1c0009ac <search_small+0x18c>
1c000934:	02801008 	addi.w	$r8,$r0,4(0x4)
1c000938:	58005e48 	beq	$r18,$r8,92(0x5c) # 1c000994 <search_small+0x174>
1c00093c:	02801409 	addi.w	$r9,$r0,5(0x5)
1c000940:	58003e49 	beq	$r18,$r9,60(0x3c) # 1c00097c <search_small+0x15c>
1c000944:	0280180a 	addi.w	$r10,$r0,6(0x6)
1c000948:	58001e4a 	beq	$r18,$r10,28(0x1c) # 1c000964 <search_small+0x144>
1c00094c:	2a0003eb 	ld.bu	$r11,$r31,0
1c000950:	00117dee 	sub.w	$r14,$r15,$r31
1c000954:	028007ec 	addi.w	$r12,$r31,1(0x1)
1c000958:	00408970 	slli.w	$r16,$r11,0x2
1c00095c:	001042d1 	add.w	$r17,$r22,$r16
1c000960:	2980022e 	st.w	$r14,$r17,0
1c000964:	2a000197 	ld.bu	$r23,$r12,0
1c000968:	001131e4 	sub.w	$r4,$r15,$r12
1c00096c:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c000970:	00408aed 	slli.w	$r13,$r23,0x2
1c000974:	001036c1 	add.w	$r1,$r22,$r13
1c000978:	29800024 	st.w	$r4,$r1,0
1c00097c:	2a000185 	ld.bu	$r5,$r12,0
1c000980:	001131fc 	sub.w	$r28,$r15,$r12
1c000984:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c000988:	004088b2 	slli.w	$r18,$r5,0x2
1c00098c:	00104ad4 	add.w	$r20,$r22,$r18
1c000990:	2980029c 	st.w	$r28,$r20,0
1c000994:	2a000186 	ld.bu	$r6,$r12,0
1c000998:	001131e7 	sub.w	$r7,$r15,$r12
1c00099c:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0009a0:	004088c8 	slli.w	$r8,$r6,0x2
1c0009a4:	001022c9 	add.w	$r9,$r22,$r8
1c0009a8:	29800127 	st.w	$r7,$r9,0
1c0009ac:	2a00018a 	ld.bu	$r10,$r12,0
1c0009b0:	001131eb 	sub.w	$r11,$r15,$r12
1c0009b4:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0009b8:	0040894e 	slli.w	$r14,$r10,0x2
1c0009bc:	00103ad0 	add.w	$r16,$r22,$r14
1c0009c0:	2980020b 	st.w	$r11,$r16,0
1c0009c4:	2a000191 	ld.bu	$r17,$r12,0
1c0009c8:	001131f7 	sub.w	$r23,$r15,$r12
1c0009cc:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0009d0:	00408a24 	slli.w	$r4,$r17,0x2
1c0009d4:	001012cd 	add.w	$r13,$r22,$r4
1c0009d8:	298001b7 	st.w	$r23,$r13,0
1c0009dc:	2a000181 	ld.bu	$r1,$r12,0
1c0009e0:	001131e5 	sub.w	$r5,$r15,$r12
1c0009e4:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0009e8:	0040883c 	slli.w	$r28,$r1,0x2
1c0009ec:	001072d2 	add.w	$r18,$r22,$r28
1c0009f0:	29800245 	st.w	$r5,$r18,0
1c0009f4:	5800ca6c 	beq	$r19,$r12,200(0xc8) # 1c000abc <search_small+0x29c>
1c0009f8:	2a000186 	ld.bu	$r6,$r12,0
1c0009fc:	001131e7 	sub.w	$r7,$r15,$r12
1c000a00:	02800594 	addi.w	$r20,$r12,1(0x1)
1c000a04:	004088c8 	slli.w	$r8,$r6,0x2
1c000a08:	001022c9 	add.w	$r9,$r22,$r8
1c000a0c:	29800127 	st.w	$r7,$r9,0
1c000a10:	2a00058a 	ld.bu	$r10,$r12,1(0x1)
1c000a14:	001151eb 	sub.w	$r11,$r15,$r20
1c000a18:	0280098e 	addi.w	$r14,$r12,2(0x2)
1c000a1c:	00408950 	slli.w	$r16,$r10,0x2
1c000a20:	001042d1 	add.w	$r17,$r22,$r16
1c000a24:	2980022b 	st.w	$r11,$r17,0
1c000a28:	2a000997 	ld.bu	$r23,$r12,2(0x2)
1c000a2c:	001139e4 	sub.w	$r4,$r15,$r14
1c000a30:	02800d8d 	addi.w	$r13,$r12,3(0x3)
1c000a34:	00408ae1 	slli.w	$r1,$r23,0x2
1c000a38:	001006c5 	add.w	$r5,$r22,$r1
1c000a3c:	298000a4 	st.w	$r4,$r5,0
1c000a40:	2a000d9c 	ld.bu	$r28,$r12,3(0x3)
1c000a44:	001135e6 	sub.w	$r6,$r15,$r13
1c000a48:	02801187 	addi.w	$r7,$r12,4(0x4)
1c000a4c:	00408b92 	slli.w	$r18,$r28,0x2
1c000a50:	00104ad4 	add.w	$r20,$r22,$r18
1c000a54:	29800286 	st.w	$r6,$r20,0
1c000a58:	2a001188 	ld.bu	$r8,$r12,4(0x4)
1c000a5c:	00111de9 	sub.w	$r9,$r15,$r7
1c000a60:	0280158a 	addi.w	$r10,$r12,5(0x5)
1c000a64:	0040890b 	slli.w	$r11,$r8,0x2
1c000a68:	00102ece 	add.w	$r14,$r22,$r11
1c000a6c:	298001c9 	st.w	$r9,$r14,0
1c000a70:	2a001590 	ld.bu	$r16,$r12,5(0x5)
1c000a74:	001129f1 	sub.w	$r17,$r15,$r10
1c000a78:	02801997 	addi.w	$r23,$r12,6(0x6)
1c000a7c:	00408a04 	slli.w	$r4,$r16,0x2
1c000a80:	001012cd 	add.w	$r13,$r22,$r4
1c000a84:	298001b1 	st.w	$r17,$r13,0
1c000a88:	2a001981 	ld.bu	$r1,$r12,6(0x6)
1c000a8c:	00115de5 	sub.w	$r5,$r15,$r23
1c000a90:	02801d9c 	addi.w	$r28,$r12,7(0x7)
1c000a94:	00408826 	slli.w	$r6,$r1,0x2
1c000a98:	00101ac7 	add.w	$r7,$r22,$r6
1c000a9c:	298000e5 	st.w	$r5,$r7,0
1c000aa0:	2a001d92 	ld.bu	$r18,$r12,7(0x7)
1c000aa4:	001171f4 	sub.w	$r20,$r15,$r28
1c000aa8:	0280218c 	addi.w	$r12,$r12,8(0x8)
1c000aac:	00408a48 	slli.w	$r8,$r18,0x2
1c000ab0:	001022c9 	add.w	$r9,$r22,$r8
1c000ab4:	29800134 	st.w	$r20,$r9,0
1c000ab8:	5fff426c 	bne	$r19,$r12,-192(0x3ff40) # 1c0009f8 <search_small+0x1d8>
1c000abc:	2880033c 	ld.w	$r28,$r25,0
1c000ac0:	02800413 	addi.w	$r19,$r0,1(0x1)
1c000ac4:	1c00004f 	pcaddu12i	$r15,2(0x2)
1c000ac8:	02ac01ef 	addi.w	$r15,$r15,-1280(0xb00)
1c000acc:	00117a6c 	sub.w	$r12,$r19,$r30
1c000ad0:	00150384 	move	$r4,$r28
1c000ad4:	298001ff 	st.w	$r31,$r15,0
1c000ad8:	2980206c 	st.w	$r12,$r3,8(0x8)
1c000adc:	54057400 	bl	1396(0x574) # 1c001050 <strlen>
1c000ae0:	0015008d 	move	$r13,$r4
1c000ae4:	6c0027a4 	bgeu	$r29,$r4,36(0x24) # 1c000b08 <search_small+0x2e8>
1c000ae8:	0010778a 	add.w	$r10,$r28,$r29
1c000aec:	2a00014b 	ld.bu	$r11,$r10,0
1c000af0:	0040896e 	slli.w	$r14,$r11,0x2
1c000af4:	00103ad0 	add.w	$r16,$r22,$r14
1c000af8:	28800211 	ld.w	$r17,$r16,0
1c000afc:	58008a20 	beq	$r17,$r0,136(0x88) # 1c000b84 <search_small+0x364>
1c000b00:	001047bd 	add.w	$r29,$r29,$r17
1c000b04:	6bffe7ad 	bltu	$r29,$r13,-28(0x3ffe4) # 1c000ae8 <search_small+0x2c8>
1c000b08:	00150387 	move	$r7,$r28
1c000b0c:	001503e5 	move	$r5,$r31
1c000b10:	1c000026 	pcaddu12i	$r6,1(0x1)
1c000b14:	02a570c6 	addi.w	$r6,$r6,-1700(0x95c)
1c000b18:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000b1c:	02a57084 	addi.w	$r4,$r4,-1700(0x95c)
1c000b20:	54013000 	bl	304(0x130) # 1c000c50 <printf>
1c000b24:	02802804 	addi.w	$r4,$r0,10(0xa)
1c000b28:	54035400 	bl	852(0x354) # 1c000e7c <putchar>
1c000b2c:	28800305 	ld.w	$r5,$r24,0
1c000b30:	0012941c 	sltu	$r28,$r0,$r5
1c000b34:	0010737b 	add.w	$r27,$r27,$r28
1c000b38:	2880035f 	ld.w	$r31,$r26,0
1c000b3c:	02801318 	addi.w	$r24,$r24,4(0x4)
1c000b40:	0280135a 	addi.w	$r26,$r26,4(0x4)
1c000b44:	02801339 	addi.w	$r25,$r25,4(0x4)
1c000b48:	5ffd67e0 	bne	$r31,$r0,-668(0x3fd64) # 1c0008ac <search_small+0x8c>
1c000b4c:	288bb061 	ld.w	$r1,$r3,748(0x2ec)
1c000b50:	288ba076 	ld.w	$r22,$r3,744(0x2e8)
1c000b54:	00150364 	move	$r4,$r27
1c000b58:	288b9077 	ld.w	$r23,$r3,740(0x2e4)
1c000b5c:	288b8078 	ld.w	$r24,$r3,736(0x2e0)
1c000b60:	288b7079 	ld.w	$r25,$r3,732(0x2dc)
1c000b64:	288b607a 	ld.w	$r26,$r3,728(0x2d8)
1c000b68:	288b507b 	ld.w	$r27,$r3,724(0x2d4)
1c000b6c:	288b407c 	ld.w	$r28,$r3,720(0x2d0)
1c000b70:	288b307d 	ld.w	$r29,$r3,716(0x2cc)
1c000b74:	288b207e 	ld.w	$r30,$r3,712(0x2c8)
1c000b78:	288b107f 	ld.w	$r31,$r3,708(0x2c4)
1c000b7c:	028bc063 	addi.w	$r3,$r3,752(0x2f0)
1c000b80:	4c000020 	jirl	$r0,$r1,0
1c000b84:	28802077 	ld.w	$r23,$r3,8(0x8)
1c000b88:	001503c6 	move	$r6,$r30
1c000b8c:	2980306d 	st.w	$r13,$r3,12(0xc)
1c000b90:	001076e4 	add.w	$r4,$r23,$r29
1c000b94:	00101397 	add.w	$r23,$r28,$r4
1c000b98:	001502e5 	move	$r5,$r23
1c000b9c:	001503e4 	move	$r4,$r31
1c000ba0:	54056000 	bl	1376(0x560) # 1c001100 <strncmp>
1c000ba4:	028007bd 	addi.w	$r29,$r29,1(0x1)
1c000ba8:	58001080 	beq	$r4,$r0,16(0x10) # 1c000bb8 <search_small+0x398>
1c000bac:	2880306d 	ld.w	$r13,$r3,12(0xc)
1c000bb0:	6bff3bad 	bltu	$r29,$r13,-200(0x3ff38) # 1c000ae8 <search_small+0x2c8>
1c000bb4:	53ff57ff 	b	-172(0xfffff54) # 1c000b08 <search_small+0x2e8>
1c000bb8:	00150387 	move	$r7,$r28
1c000bbc:	1c000026 	pcaddu12i	$r6,1(0x1)
1c000bc0:	02a330c6 	addi.w	$r6,$r6,-1844(0x8cc)
1c000bc4:	001503e5 	move	$r5,$r31
1c000bc8:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000bcc:	02a2b084 	addi.w	$r4,$r4,-1876(0x8ac)
1c000bd0:	54008000 	bl	128(0x80) # 1c000c50 <printf>
1c000bd4:	001502e5 	move	$r5,$r23
1c000bd8:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000bdc:	02a2d084 	addi.w	$r4,$r4,-1868(0x8b4)
1c000be0:	54007000 	bl	112(0x70) # 1c000c50 <printf>
1c000be4:	02802804 	addi.w	$r4,$r0,10(0xa)
1c000be8:	54029400 	bl	660(0x294) # 1c000e7c <putchar>
1c000bec:	2880031e 	ld.w	$r30,$r24,0
1c000bf0:	024007df 	sltui	$r31,$r30,1(0x1)
1c000bf4:	00107f7b 	add.w	$r27,$r27,$r31
1c000bf8:	53ff43ff 	b	-192(0xfffff40) # 1c000b38 <search_small+0x318>
1c000bfc:	03400000 	andi	$r0,$r0,0x0
1c000c00:	1c000045 	pcaddu12i	$r5,2(0x2)
1c000c04:	02a710a5 	addi.w	$r5,$r5,-1596(0x9c4)
1c000c08:	298000bf 	st.w	$r31,$r5,0
1c000c0c:	2880033c 	ld.w	$r28,$r25,0
1c000c10:	53fefbff 	b	-264(0xffffef8) # 1c000b08 <search_small+0x2e8>
1c000c14:	288bb061 	ld.w	$r1,$r3,748(0x2ec)
1c000c18:	288ba076 	ld.w	$r22,$r3,744(0x2e8)
1c000c1c:	0015001b 	move	$r27,$r0
1c000c20:	00150364 	move	$r4,$r27
1c000c24:	288b9077 	ld.w	$r23,$r3,740(0x2e4)
1c000c28:	288b8078 	ld.w	$r24,$r3,736(0x2e0)
1c000c2c:	288b7079 	ld.w	$r25,$r3,732(0x2dc)
1c000c30:	288b607a 	ld.w	$r26,$r3,728(0x2d8)
1c000c34:	288b507b 	ld.w	$r27,$r3,724(0x2d4)
1c000c38:	288b407c 	ld.w	$r28,$r3,720(0x2d0)
1c000c3c:	288b307d 	ld.w	$r29,$r3,716(0x2cc)
1c000c40:	288b207e 	ld.w	$r30,$r3,712(0x2c8)
1c000c44:	288b107f 	ld.w	$r31,$r3,708(0x2c4)
1c000c48:	028bc063 	addi.w	$r3,$r3,752(0x2f0)
1c000c4c:	4c000020 	jirl	$r0,$r1,0

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
1c000ca4:	1c00003c 	pcaddu12i	$r28,1(0x1)
1c000ca8:	028a739c 	addi.w	$r28,$r28,668(0x29c)
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

1c001050 <strlen>:
strlen():
/home/wwt/work/perf_func/lib/string.c:14
1c001050:	2800008c 	ld.b	$r12,$r4,0
1c001054:	58002180 	beq	$r12,$r0,32(0x20) # 1c001074 <strlen+0x24>
/home/wwt/work/perf_func/lib/string.c:13
1c001058:	0015000c 	move	$r12,$r0
/home/wwt/work/perf_func/lib/string.c:15
1c00105c:	0280058c 	addi.w	$r12,$r12,1(0x1)
/home/wwt/work/perf_func/lib/string.c:14
1c001060:	0010308d 	add.w	$r13,$r4,$r12
1c001064:	280001ad 	ld.b	$r13,$r13,0
1c001068:	5ffff5a0 	bne	$r13,$r0,-12(0x3fff4) # 1c00105c <strlen+0xc>
/home/wwt/work/perf_func/lib/string.c:18
1c00106c:	00150184 	move	$r4,$r12
1c001070:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/string.c:13
1c001074:	0015000c 	move	$r12,$r0
/home/wwt/work/perf_func/lib/string.c:18
1c001078:	00150184 	move	$r4,$r12
1c00107c:	4c000020 	jirl	$r0,$r1,0

1c001080 <strnlen>:
strnlen():
/home/wwt/work/perf_func/lib/string.c:36
1c001080:	580030a0 	beq	$r5,$r0,48(0x30) # 1c0010b0 <strnlen+0x30>
1c001084:	2800008c 	ld.b	$r12,$r4,0
1c001088:	58002980 	beq	$r12,$r0,40(0x28) # 1c0010b0 <strnlen+0x30>
/home/wwt/work/perf_func/lib/string.c:35
1c00108c:	0015000c 	move	$r12,$r0
1c001090:	50000c00 	b	12(0xc) # 1c00109c <strnlen+0x1c>
/home/wwt/work/perf_func/lib/string.c:36 (discriminator 1)
1c001094:	280001ad 	ld.b	$r13,$r13,0
1c001098:	580011a0 	beq	$r13,$r0,16(0x10) # 1c0010a8 <strnlen+0x28>
/home/wwt/work/perf_func/lib/string.c:37
1c00109c:	0280058c 	addi.w	$r12,$r12,1(0x1)
/home/wwt/work/perf_func/lib/string.c:36
1c0010a0:	0010308d 	add.w	$r13,$r4,$r12
1c0010a4:	5ffff0ac 	bne	$r5,$r12,-16(0x3fff0) # 1c001094 <strnlen+0x14>
/home/wwt/work/perf_func/lib/string.c:40
1c0010a8:	00150184 	move	$r4,$r12
1c0010ac:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/string.c:35
1c0010b0:	0015000c 	move	$r12,$r0
/home/wwt/work/perf_func/lib/string.c:40
1c0010b4:	00150184 	move	$r4,$r12
1c0010b8:	4c000020 	jirl	$r0,$r1,0

1c0010bc <strcpy>:
strcpy():
/home/wwt/work/perf_func/lib/string.c:59
1c0010bc:	0015008c 	move	$r12,$r4
/home/wwt/work/perf_func/lib/string.c:60
1c0010c0:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c0010c4:	283ffcad 	ld.b	$r13,$r5,-1(0xfff)
1c0010c8:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0010cc:	293ffd8d 	st.b	$r13,$r12,-1(0xfff)
1c0010d0:	5ffff1a0 	bne	$r13,$r0,-16(0x3fff0) # 1c0010c0 <strcpy+0x4>
/home/wwt/work/perf_func/lib/string.c:64
1c0010d4:	4c000020 	jirl	$r0,$r1,0

1c0010d8 <strncpy>:
strncpy():
/home/wwt/work/perf_func/lib/string.c:79
1c0010d8:	580024c0 	beq	$r6,$r0,36(0x24) # 1c0010fc <strncpy+0x24>
1c0010dc:	00101886 	add.w	$r6,$r4,$r6
/home/wwt/work/perf_func/lib/string.c:78
1c0010e0:	0015008d 	move	$r13,$r4
/home/wwt/work/perf_func/lib/string.c:80
1c0010e4:	280000ac 	ld.b	$r12,$r5,0
/home/wwt/work/perf_func/lib/string.c:83
1c0010e8:	028005ad 	addi.w	$r13,$r13,1(0x1)
/home/wwt/work/perf_func/lib/string.c:80
1c0010ec:	293ffdac 	st.b	$r12,$r13,-1(0xfff)
/home/wwt/work/perf_func/lib/string.c:81
1c0010f0:	0012b00c 	sltu	$r12,$r0,$r12
1c0010f4:	001030a5 	add.w	$r5,$r5,$r12
/home/wwt/work/perf_func/lib/string.c:79
1c0010f8:	5fffeda6 	bne	$r13,$r6,-20(0x3ffec) # 1c0010e4 <strncpy+0xc>
/home/wwt/work/perf_func/lib/string.c:86
1c0010fc:	4c000020 	jirl	$r0,$r1,0

1c001100 <strncmp>:
strncmp():
/home/wwt/work/perf_func/lib/string.c:101
1c001100:	58003cc0 	beq	$r6,$r0,60(0x3c) # 1c00113c <strncmp+0x3c>
1c001104:	2800008d 	ld.b	$r13,$r4,0
1c001108:	280000ae 	ld.b	$r14,$r5,0
1c00110c:	58003da0 	beq	$r13,$r0,60(0x3c) # 1c001148 <strncmp+0x48>
1c001110:	5c0039ae 	bne	$r13,$r14,56(0x38) # 1c001148 <strncmp+0x48>
1c001114:	001018a6 	add.w	$r6,$r5,$r6
1c001118:	50001800 	b	24(0x18) # 1c001130 <strncmp+0x30>
/home/wwt/work/perf_func/lib/string.c:101 (discriminator 1)
1c00111c:	2800008d 	ld.b	$r13,$r4,0
/home/wwt/work/perf_func/lib/string.c:101
1c001120:	580025a0 	beq	$r13,$r0,36(0x24) # 1c001144 <strncmp+0x44>
/home/wwt/work/perf_func/lib/string.c:101 (discriminator 2)
1c001124:	2800018e 	ld.b	$r14,$r12,0
1c001128:	00150185 	move	$r5,$r12
/home/wwt/work/perf_func/lib/string.c:101
1c00112c:	5c001dae 	bne	$r13,$r14,28(0x1c) # 1c001148 <strncmp+0x48>
/home/wwt/work/perf_func/lib/string.c:102
1c001130:	028004ac 	addi.w	$r12,$r5,1(0x1)
1c001134:	02800484 	addi.w	$r4,$r4,1(0x1)
/home/wwt/work/perf_func/lib/string.c:101
1c001138:	5fffe586 	bne	$r12,$r6,-28(0x3ffe4) # 1c00111c <strncmp+0x1c>
/home/wwt/work/perf_func/lib/string.c:104
1c00113c:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/string.c:105
1c001140:	4c000020 	jirl	$r0,$r1,0
1c001144:	280004ae 	ld.b	$r14,$r5,1(0x1)
/home/wwt/work/perf_func/lib/string.c:100
1c001148:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
/home/wwt/work/perf_func/lib/string.c:104
1c00114c:	2980306d 	st.w	$r13,$r3,12(0xc)
1c001150:	2a00306d 	ld.bu	$r13,$r3,12(0xc)
1c001154:	2980306e 	st.w	$r14,$r3,12(0xc)
1c001158:	2a003064 	ld.bu	$r4,$r3,12(0xc)
/home/wwt/work/perf_func/lib/string.c:105
1c00115c:	02804063 	addi.w	$r3,$r3,16(0x10)
/home/wwt/work/perf_func/lib/string.c:104
1c001160:	001111a4 	sub.w	$r4,$r13,$r4
/home/wwt/work/perf_func/lib/string.c:105
1c001164:	4c000020 	jirl	$r0,$r1,0

1c001168 <strchr>:
strchr():
/home/wwt/work/perf_func/lib/string.c:117
1c001168:	2800008c 	ld.b	$r12,$r4,0
1c00116c:	58001d80 	beq	$r12,$r0,28(0x1c) # 1c001188 <strchr+0x20>
/home/wwt/work/perf_func/lib/string.c:118
1c001170:	5c000d85 	bne	$r12,$r5,12(0xc) # 1c00117c <strchr+0x14>
1c001174:	50001c00 	b	28(0x1c) # 1c001190 <strchr+0x28>
1c001178:	58001585 	beq	$r12,$r5,20(0x14) # 1c00118c <strchr+0x24>
/home/wwt/work/perf_func/lib/string.c:121
1c00117c:	02800484 	addi.w	$r4,$r4,1(0x1)
/home/wwt/work/perf_func/lib/string.c:117
1c001180:	2800008c 	ld.b	$r12,$r4,0
1c001184:	5ffff580 	bne	$r12,$r0,-12(0x3fff4) # 1c001178 <strchr+0x10>
/home/wwt/work/perf_func/lib/string.c:123
1c001188:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/string.c:124
1c00118c:	4c000020 	jirl	$r0,$r1,0
1c001190:	4c000020 	jirl	$r0,$r1,0

1c001194 <strfind>:
strfind():
/home/wwt/work/perf_func/lib/string.c:137
1c001194:	2800008c 	ld.b	$r12,$r4,0
1c001198:	58001d80 	beq	$r12,$r0,28(0x1c) # 1c0011b4 <strfind+0x20>
/home/wwt/work/perf_func/lib/string.c:138
1c00119c:	5c000cac 	bne	$r5,$r12,12(0xc) # 1c0011a8 <strfind+0x14>
1c0011a0:	50001800 	b	24(0x18) # 1c0011b8 <strfind+0x24>
1c0011a4:	58001185 	beq	$r12,$r5,16(0x10) # 1c0011b4 <strfind+0x20>
/home/wwt/work/perf_func/lib/string.c:141
1c0011a8:	02800484 	addi.w	$r4,$r4,1(0x1)
/home/wwt/work/perf_func/lib/string.c:137
1c0011ac:	2800008c 	ld.b	$r12,$r4,0
1c0011b0:	5ffff580 	bne	$r12,$r0,-12(0x3fff4) # 1c0011a4 <strfind+0x10>
/home/wwt/work/perf_func/lib/string.c:144
1c0011b4:	4c000020 	jirl	$r0,$r1,0
1c0011b8:	4c000020 	jirl	$r0,$r1,0

1c0011bc <memset>:
memset():
/home/wwt/work/perf_func/lib/string.c:251
1c0011bc:	580018c0 	beq	$r6,$r0,24(0x18) # 1c0011d4 <memset+0x18>
1c0011c0:	00101886 	add.w	$r6,$r4,$r6
/home/wwt/work/perf_func/lib/string.c:250
1c0011c4:	0015008c 	move	$r12,$r4
/home/wwt/work/perf_func/lib/string.c:252
1c0011c8:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0011cc:	293ffd85 	st.b	$r5,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/string.c:251
1c0011d0:	5ffff986 	bne	$r12,$r6,-8(0x3fff8) # 1c0011c8 <memset+0xc>
/home/wwt/work/perf_func/lib/string.c:256
1c0011d4:	4c000020 	jirl	$r0,$r1,0

1c0011d8 <memcpy>:
memcpy():
/home/wwt/work/perf_func/lib/string.c:279
1c0011d8:	580020c0 	beq	$r6,$r0,32(0x20) # 1c0011f8 <memcpy+0x20>
1c0011dc:	001018a6 	add.w	$r6,$r5,$r6
/home/wwt/work/perf_func/lib/string.c:278
1c0011e0:	0015008c 	move	$r12,$r4
/home/wwt/work/perf_func/lib/string.c:280
1c0011e4:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c0011e8:	283ffcad 	ld.b	$r13,$r5,-1(0xfff)
1c0011ec:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c0011f0:	293ffd8d 	st.b	$r13,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/string.c:279
1c0011f4:	5ffff0a6 	bne	$r5,$r6,-16(0x3fff0) # 1c0011e4 <memcpy+0xc>
/home/wwt/work/perf_func/lib/string.c:284
1c0011f8:	4c000020 	jirl	$r0,$r1,0

1c0011fc <memmove>:
memmove():
/home/wwt/work/perf_func/lib/string.c:302
1c0011fc:	6c002ca4 	bgeu	$r5,$r4,44(0x2c) # 1c001228 <memmove+0x2c>
/home/wwt/work/perf_func/lib/string.c:302 (discriminator 1)
1c001200:	001018ac 	add.w	$r12,$r5,$r6
/home/wwt/work/perf_func/lib/string.c:302
1c001204:	6c00248c 	bgeu	$r4,$r12,36(0x24) # 1c001228 <memmove+0x2c>
/home/wwt/work/perf_func/lib/string.c:303
1c001208:	0010188d 	add.w	$r13,$r4,$r6
/home/wwt/work/perf_func/lib/string.c:304
1c00120c:	58003cc0 	beq	$r6,$r0,60(0x3c) # 1c001248 <memmove+0x4c>
/home/wwt/work/perf_func/lib/string.c:305
1c001210:	02bffd8c 	addi.w	$r12,$r12,-1(0xfff)
1c001214:	2800018e 	ld.b	$r14,$r12,0
1c001218:	02bffdad 	addi.w	$r13,$r13,-1(0xfff)
1c00121c:	290001ae 	st.b	$r14,$r13,0
/home/wwt/work/perf_func/lib/string.c:304
1c001220:	5ffff0ac 	bne	$r5,$r12,-16(0x3fff0) # 1c001210 <memmove+0x14>
1c001224:	4c000020 	jirl	$r0,$r1,0
1c001228:	001018ae 	add.w	$r14,$r5,$r6
/home/wwt/work/perf_func/lib/string.c:308
1c00122c:	0015008c 	move	$r12,$r4
1c001230:	58001cc0 	beq	$r6,$r0,28(0x1c) # 1c00124c <memmove+0x50>
/home/wwt/work/perf_func/lib/string.c:309
1c001234:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c001238:	283ffcad 	ld.b	$r13,$r5,-1(0xfff)
1c00123c:	0280058c 	addi.w	$r12,$r12,1(0x1)
1c001240:	293ffd8d 	st.b	$r13,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/string.c:308
1c001244:	5ffff0ae 	bne	$r5,$r14,-16(0x3fff0) # 1c001234 <memmove+0x38>
/home/wwt/work/perf_func/lib/string.c:314
1c001248:	4c000020 	jirl	$r0,$r1,0
1c00124c:	4c000020 	jirl	$r0,$r1,0

1c001250 <memcmp>:
memcmp():
/home/wwt/work/perf_func/lib/string.c:334
1c001250:	580030c0 	beq	$r6,$r0,48(0x30) # 1c001280 <memcmp+0x30>
/home/wwt/work/perf_func/lib/string.c:335
1c001254:	2800008c 	ld.b	$r12,$r4,0
1c001258:	280000ad 	ld.b	$r13,$r5,0
1c00125c:	00101886 	add.w	$r6,$r4,$r6
1c001260:	580015ac 	beq	$r13,$r12,20(0x14) # 1c001274 <memcmp+0x24>
1c001264:	50002400 	b	36(0x24) # 1c001288 <memcmp+0x38>
1c001268:	2800008c 	ld.b	$r12,$r4,0
1c00126c:	280000ad 	ld.b	$r13,$r5,0
1c001270:	5c00198d 	bne	$r12,$r13,24(0x18) # 1c001288 <memcmp+0x38>
/home/wwt/work/perf_func/lib/string.c:338
1c001274:	02800484 	addi.w	$r4,$r4,1(0x1)
1c001278:	028004a5 	addi.w	$r5,$r5,1(0x1)
/home/wwt/work/perf_func/lib/string.c:334
1c00127c:	5fffec86 	bne	$r4,$r6,-20(0x3ffec) # 1c001268 <memcmp+0x18>
/home/wwt/work/perf_func/lib/string.c:340
1c001280:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/string.c:341
1c001284:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/string.c:331
1c001288:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
/home/wwt/work/perf_func/lib/string.c:336
1c00128c:	2980306c 	st.w	$r12,$r3,12(0xc)
1c001290:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c001294:	2980306d 	st.w	$r13,$r3,12(0xc)
1c001298:	2a003064 	ld.bu	$r4,$r3,12(0xc)
/home/wwt/work/perf_func/lib/string.c:341
1c00129c:	02804063 	addi.w	$r3,$r3,16(0x10)
/home/wwt/work/perf_func/lib/string.c:336
1c0012a0:	00111184 	sub.w	$r4,$r12,$r4
/home/wwt/work/perf_func/lib/string.c:341
1c0012a4:	4c000020 	jirl	$r0,$r1,0

1c0012a8 <bzero>:
memset():
/home/wwt/work/perf_func/lib/string.c:251
1c0012a8:	580014a0 	beq	$r5,$r0,20(0x14) # 1c0012bc <bzero+0x14>
1c0012ac:	00101485 	add.w	$r5,$r4,$r5
/home/wwt/work/perf_func/lib/string.c:252
1c0012b0:	02800484 	addi.w	$r4,$r4,1(0x1)
1c0012b4:	293ffc80 	st.b	$r0,$r4,-1(0xfff)
/home/wwt/work/perf_func/lib/string.c:251
1c0012b8:	5ffff885 	bne	$r4,$r5,-8(0x3fff8) # 1c0012b0 <bzero+0x8>
bzero():
/home/wwt/work/perf_func/lib/string.c:345
1c0012bc:	4c000020 	jirl	$r0,$r1,0

1c0012c0 <get_count>:
get_count():
/home/wwt/work/perf_func/lib/time.c:18
1c0012c0:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0012c4:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/time.c:7
1c0012c8:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c0012cc:	28800324 	ld.w	$r4,$r25,0
/home/wwt/work/perf_func/lib/time.c:20
1c0012d0:	28803079 	ld.w	$r25,$r3,12(0xc)
1c0012d4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0012d8:	4c000020 	jirl	$r0,$r1,0

1c0012dc <_get_count>:
_get_count():
/home/wwt/work/perf_func/lib/time.c:20
1c0012dc:	53ffe7ff 	b	-28(0xfffffe4) # 1c0012c0 <get_count>

1c0012e0 <get_count_my>:
get_count_my():
/home/wwt/work/perf_func/lib/time.c:25
1c0012e0:	00006004 	rdtimel.w	$r4,$r0
/home/wwt/work/perf_func/lib/time.c:30
1c0012e4:	4c000020 	jirl	$r0,$r1,0

1c0012e8 <clock_gettime>:
clock_gettime():
/home/wwt/work/perf_func/lib/time.c:33
1c0012e8:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0012ec:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c0012f0:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c0012f4:	2880032f 	ld.w	$r15,$r25,0
clock_gettime():
/home/wwt/work/perf_func/lib/time.c:36
1c0012f8:	0280280d 	addi.w	$r13,$r0,10(0xa)
1c0012fc:	001c35ed 	mul.w	$r13,$r15,$r13
/home/wwt/work/perf_func/lib/time.c:37
1c001300:	02819010 	addi.w	$r16,$r0,100(0x64)
/home/wwt/work/perf_func/lib/time.c:36
1c001304:	028fa00c 	addi.w	$r12,$r0,1000(0x3e8)
/home/wwt/work/perf_func/lib/time.c:37
1c001308:	002141ee 	div.wu	$r14,$r15,$r16
1c00130c:	5c000a00 	bne	$r16,$r0,8(0x8) # 1c001314 <clock_gettime+0x2c>
1c001310:	002a0007 	break	0x7
1c001314:	0021b1d1 	mod.wu	$r17,$r14,$r12
1c001318:	5c000980 	bne	$r12,$r0,8(0x8) # 1c001320 <clock_gettime+0x38>
1c00131c:	002a0007 	break	0x7
/home/wwt/work/perf_func/lib/time.c:38
1c001320:	1400030e 	lu12i.w	$r14,24(0x18)
1c001324:	039a81ce 	ori	$r14,$r14,0x6a0
1c001328:	002139f0 	div.wu	$r16,$r15,$r14
1c00132c:	5c0009c0 	bne	$r14,$r0,8(0x8) # 1c001334 <clock_gettime+0x4c>
1c001330:	002a0007 	break	0x7
1c001334:	0021b20e 	mod.wu	$r14,$r16,$r12
1c001338:	5c000980 	bne	$r12,$r0,8(0x8) # 1c001340 <clock_gettime+0x58>
1c00133c:	002a0007 	break	0x7
/home/wwt/work/perf_func/lib/time.c:37
1c001340:	298020b1 	st.w	$r17,$r5,8(0x8)
/home/wwt/work/perf_func/lib/time.c:38
1c001344:	298030ae 	st.w	$r14,$r5,12(0xc)
/home/wwt/work/perf_func/lib/time.c:39
1c001348:	298000a0 	st.w	$r0,$r5,0
/home/wwt/work/perf_func/lib/time.c:42
1c00134c:	28803079 	ld.w	$r25,$r3,12(0xc)
1c001350:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/time.c:36
1c001354:	0021b1ae 	mod.wu	$r14,$r13,$r12
1c001358:	5c000980 	bne	$r12,$r0,8(0x8) # 1c001360 <clock_gettime+0x78>
1c00135c:	002a0007 	break	0x7
1c001360:	298010ae 	st.w	$r14,$r5,4(0x4)
/home/wwt/work/perf_func/lib/time.c:42
1c001364:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001368:	4c000020 	jirl	$r0,$r1,0

1c00136c <get_clock>:
get_clock():
/home/wwt/work/perf_func/lib/time.c:42
1c00136c:	53ff57ff 	b	-172(0xfffff54) # 1c0012c0 <get_count>

1c001370 <get_ns>:
get_ns():
/home/wwt/work/perf_func/lib/time.c:52
1c001370:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001374:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c001378:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c00137c:	28800324 	ld.w	$r4,$r25,0
get_ns():
/home/wwt/work/perf_func/lib/time.c:55
1c001380:	0280280c 	addi.w	$r12,$r0,10(0xa)
/home/wwt/work/perf_func/lib/time.c:57
1c001384:	28803079 	ld.w	$r25,$r3,12(0xc)
1c001388:	001c3084 	mul.w	$r4,$r4,$r12
1c00138c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001390:	4c000020 	jirl	$r0,$r1,0

1c001394 <get_us>:
get_us():
/home/wwt/work/perf_func/lib/time.c:61
1c001394:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001398:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c00139c:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c0013a0:	28800324 	ld.w	$r4,$r25,0
get_us():
/home/wwt/work/perf_func/lib/time.c:64
1c0013a4:	0281900c 	addi.w	$r12,$r0,100(0x64)
/home/wwt/work/perf_func/lib/time.c:66
1c0013a8:	28803079 	ld.w	$r25,$r3,12(0xc)
1c0013ac:	0021308d 	div.wu	$r13,$r4,$r12
1c0013b0:	5c000980 	bne	$r12,$r0,8(0x8) # 1c0013b8 <get_us+0x24>
1c0013b4:	002a0007 	break	0x7
1c0013b8:	001501a4 	move	$r4,$r13
1c0013bc:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0013c0:	4c000020 	jirl	$r0,$r1,0

Disassembly of section .data:

1c0013c4 <__CTOR_LIST__-0xccc>:
1c0013c4:	69727473 	bltu	$r3,$r19,94836(0x17274) # 1c018638 <_stack+0x65c8>
1c0013c8:	7320676e 	0x7320676e
1c0013cc:	63726165 	blt	$r11,$r5,-36256(0x37260) # 1bff862c <data_size+0x1bff7948>
1c0013d0:	65742068 	bge	$r3,$r8,95264(0x17420) # 1c0187f0 <_stack+0x6780>
1c0013d4:	62207473 	blt	$r3,$r19,-122764(0x22074) # 1bfe3448 <data_size+0x1bfe2764>
1c0013d8:	6e696765 	bgeu	$r27,$r5,-104092(0x26964) # 1bfe7d3c <data_size+0x1bfe7058>
1c0013dc:	0000002e 	0x0000002e
1c0013e0:	69727473 	bltu	$r3,$r19,94836(0x17274) # 1c018654 <_stack+0x65e4>
1c0013e4:	7320676e 	0x7320676e
1c0013e8:	63726165 	blt	$r11,$r5,-36256(0x37260) # 1bff8648 <data_size+0x1bff7964>
1c0013ec:	41502068 	beqz	$r3,2183200(0x215020) # 1c21640c <_stack+0x20439c>
1c0013f0:	00215353 	div.wu	$r19,$r26,$r20
1c0013f4:	69727473 	bltu	$r3,$r19,94836(0x17274) # 1c018668 <_stack+0x65f8>
1c0013f8:	7320676e 	0x7320676e
1c0013fc:	63726165 	blt	$r11,$r5,-36256(0x37260) # 1bff865c <data_size+0x1bff7978>
1c001400:	52452068 	b	27411744(0x1a24520) # 1da25920 <_stack+0x1a138b0>
1c001404:	21524f52 	sc.w	$r18,$r26,21068(0x524c)
1c001408:	00002121 	clo.d	$r1,$r9
1c00140c:	69727473 	bltu	$r3,$r19,94836(0x17274) # 1c018680 <_stack+0x6610>
1c001410:	7320676e 	0x7320676e
1c001414:	63726165 	blt	$r11,$r5,-36256(0x37260) # 1bff8674 <data_size+0x1bff7990>
1c001418:	54203a68 	bl	-106946504(0x9a02038) # 15a03450 <data_size+0x15a0276c>
1c00141c:	6c61746f 	bgeu	$r3,$r15,24948(0x6174) # 1c007590 <_heap+0x4b90>
1c001420:	756f4320 	0x756f4320
1c001424:	5328746e 	b	29042804(0x1bb2874) # 1dbb3c98 <_stack+0x1ba1c28>
1c001428:	6320436f 	blt	$r27,$r15,-57280(0x32040) # 1bff3468 <data_size+0x1bff2784>
1c00142c:	746e756f 	0x746e756f
1c001430:	203d2029 	ll.w	$r9,$r1,15648(0x3d20)
1c001434:	78257830 	0x78257830
1c001438:	0000000a 	0x0000000a
1c00143c:	69727473 	bltu	$r3,$r19,94836(0x17274) # 1c0186b0 <_stack+0x6640>
1c001440:	7320676e 	0x7320676e
1c001444:	63726165 	blt	$r11,$r5,-36256(0x37260) # 1bff86a4 <data_size+0x1bff79c0>
1c001448:	54203a68 	bl	-106946504(0x9a02038) # 15a03480 <data_size+0x15a0279c>
1c00144c:	6c61746f 	bgeu	$r3,$r15,24948(0x6174) # 1c0075c0 <_heap+0x4bc0>
1c001450:	756f4320 	0x756f4320
1c001454:	4328746e 	beqz	$r3,3876980(0x3b2874) # 1c3b3cc8 <_stack+0x3a1c58>
1c001458:	63205550 	blt	$r10,$r16,-57260(0x32054) # 1bff34ac <data_size+0x1bff27c8>
1c00145c:	746e756f 	0x746e756f
1c001460:	203d2029 	ll.w	$r9,$r1,15648(0x3d20)
1c001464:	78257830 	0x78257830
1c001468:	0000000a 	0x0000000a
1c00146c:	746f6e20 	0x746f6e20
1c001470:	00000000 	0x00000000
1c001474:	22732522 	ll.d	$r2,$r9,29476(0x7324)
1c001478:	25736920 	stptr.w	$r0,$r9,29544(0x7368)
1c00147c:	6e692073 	bgeu	$r3,$r19,-104160(0x26920) # 1bfe7d9c <data_size+0x1bfe70b8>
1c001480:	73252220 	vsat.d	$vr0,$vr17,0x8
1c001484:	00000022 	0x00000022
1c001488:	00000000 	0x00000000
1c00148c:	25225b20 	stptr.w	$r0,$r25,8792(0x2258)
1c001490:	005d2273 	0x005d2273
1c001494:	00626261 	bstrins.w	$r1,$r19,0x2,0x18
1c001498:	00756f79 	bstrins.w	$r25,$r27,0x15,0x1b
1c00149c:	00746f6e 	bstrins.w	$r14,$r27,0x14,0x1b
1c0014a0:	00007469 	0x00007469
1c0014a4:	00646164 	bstrins.w	$r4,$r11,0x4,0x18
1c0014a8:	006f6f79 	bstrins.w	$r25,$r27,0xf,0x1b
1c0014ac:	006f6f68 	bstrins.w	$r8,$r27,0xf,0x1b
1c0014b0:	00006f6f 	cpucfg	$r15,$r27
1c0014b4:	0000686f 	rdtime.d	$r15,$r3
1c0014b8:	00007878 	0x00007878
1c0014bc:	00000078 	0x00000078
1c0014c0:	6c656966 	bgeu	$r11,$r6,25960(0x6568) # 1c007a28 <_heap+0x5028>
1c0014c4:	00000064 	0x00000064
1c0014c8:	0077656e 	bstrins.w	$r14,$r11,0x17,0x19
1c0014cc:	00776f72 	bstrins.w	$r18,$r27,0x17,0x1b
1c0014d0:	69676572 	bltu	$r11,$r18,92004(0x16764) # 1c017c34 <_stack+0x5bc4>
1c0014d4:	0000656d 	rdtimeh.w	$r13,$r11
1c0014d8:	6d6f6f62 	bgeu	$r27,$r2,94060(0x16f6c) # 1c018444 <_stack+0x63d4>
1c0014dc:	00000000 	0x00000000
1c0014e0:	74616874 	xvabsd.w	$xr20,$xr3,$xr26
1c0014e4:	00000000 	0x00000000
1c0014e8:	61706d69 	blt	$r11,$r9,94316(0x1706c) # 1c018554 <_stack+0x64e4>
1c0014ec:	00007463 	0x00007463
1c0014f0:	00646e61 	bstrins.w	$r1,$r19,0x4,0x1b
1c0014f4:	6d6f6f7a 	bgeu	$r27,$r26,94060(0x16f6c) # 1c018460 <_stack+0x63f0>
1c0014f8:	00000000 	0x00000000
1c0014fc:	74786574 	0x74786574
1c001500:	00657275 	bstrins.w	$r21,$r19,0x5,0x1c
1c001504:	6e67616d 	bgeu	$r11,$r13,-104608(0x26760) # 1bfe7c64 <data_size+0x1bfe6f80>
1c001508:	00007465 	0x00007465
1c00150c:	6d6f6f64 	bgeu	$r27,$r4,94060(0x16f6c) # 1c018478 <_stack+0x6408>
1c001510:	00000000 	0x00000000
1c001514:	6d6f6f6c 	bgeu	$r27,$r12,94060(0x16f6c) # 1c018480 <_stack+0x6410>
1c001518:	00000000 	0x00000000
1c00151c:	71657266 	0x71657266
1c001520:	00000000 	0x00000000
1c001524:	72727563 	0x72727563
1c001528:	00746e65 	bstrins.w	$r5,$r19,0x14,0x1b
1c00152c:	73616870 	vssrani.w.d	$vr16,$vr3,0x1a
1c001530:	00000065 	0x00000065
1c001534:	67616d69 	bge	$r11,$r9,-40596(0x3616c) # 1bff76a0 <data_size+0x1bff69bc>
1c001538:	00007365 	0x00007365
1c00153c:	65707061 	bge	$r3,$r1,94320(0x17070) # 1c0185ac <_stack+0x653c>
1c001540:	00737261 	bstrins.w	$r1,$r19,0x13,0x1c
1c001544:	646e6f63 	bge	$r27,$r3,28268(0x6e6c) # 1c0083b0 <_heap+0x59b0>
1c001548:	6f746375 	bgeu	$r27,$r21,-35744(0x37460) # 1bff89a8 <data_size+0x1bff7cc4>
1c00154c:	00000072 	0x00000072
1c001550:	65766177 	bge	$r11,$r23,95840(0x17660) # 1c018bb0 <_stack+0x6b40>
1c001554:	0000007a 	0x0000007a
1c001558:	6d726f6e 	bgeu	$r27,$r14,94828(0x1726c) # 1c0187c4 <_stack+0x6754>
1c00155c:	00006c61 	cpucfg	$r1,$r3
1c001560:	65657266 	bge	$r19,$r6,91504(0x16570) # 1c017ad0 <_stack+0x5a60>
1c001564:	00000000 	0x00000000
1c001568:	6d726574 	bgeu	$r11,$r20,94820(0x17264) # 1c0187cc <_stack+0x675c>
1c00156c:	00006465 	rdtimeh.w	$r5,$r3
1c001570:	766f7270 	0x766f7270
1c001574:	00656469 	bstrins.w	$r9,$r3,0x5,0x19
1c001578:	00726f66 	bstrins.w	$r6,$r27,0x12,0x1b
1c00157c:	75727473 	0x75727473
1c001580:	00007463 	0x00007463
1c001584:	756f6261 	0x756f6261
1c001588:	00000074 	0x00000074
1c00158c:	65766168 	bge	$r11,$r8,95840(0x17660) # 1c018bec <_stack+0x6b7c>
1c001590:	00000000 	0x00000000
1c001594:	706f7270 	0x706f7270
1c001598:	00007265 	0x00007265
1c00159c:	6f766e69 	bgeu	$r19,$r9,-35220(0x3766c) # 1bff8c08 <data_size+0x1bff7f24>
1c0015a0:	0065766c 	bstrins.w	$r12,$r19,0x5,0x1d
1c0015a4:	63736564 	blt	$r11,$r4,-35996(0x37364) # 1bff8908 <data_size+0x1bff7c24>
1c0015a8:	65626972 	bge	$r11,$r18,90728(0x16268) # 1c017810 <_stack+0x57a0>
1c0015ac:	00796c64 	bstrins.w	$r4,$r3,0x19,0x1b
1c0015b0:	74616874 	xvabsd.w	$xr20,$xr3,$xr26
1c0015b4:	00000073 	0x00000073
1c0015b8:	63617073 	blt	$r3,$r19,-40592(0x36170) # 1bff7728 <data_size+0x1bff6a44>
1c0015bc:	00007365 	0x00007365
1c0015c0:	63726963 	blt	$r11,$r3,-36248(0x37268) # 1bff8828 <data_size+0x1bff7b44>
1c0015c4:	74736d75 	xvmin.w	$xr21,$xr11,$xr27
1c0015c8:	65636e61 	bge	$r19,$r1,90988(0x1636c) # 1c017934 <_stack+0x58c4>
1c0015cc:	00000000 	0x00000000
1c0015d0:	00656874 	bstrins.w	$r20,$r3,0x5,0x1a
1c0015d4:	626d656d 	blt	$r11,$r13,-103068(0x26d64) # 1bfe8338 <data_size+0x1bfe7654>
1c0015d8:	00007265 	0x00007265
1c0015dc:	68637573 	bltu	$r11,$r19,25460(0x6374) # 1c007950 <_heap+0x4f50>
1c0015e0:	00000000 	0x00000000
1c0015e4:	64697567 	bge	$r11,$r7,26996(0x6974) # 1c007f58 <_heap+0x5558>
1c0015e8:	00000065 	0x00000065
1c0015ec:	61676572 	blt	$r11,$r18,92004(0x16764) # 1c017d50 <_stack+0x5ce0>
1c0015f0:	00006472 	rdtimeh.w	$r18,$r3
1c0015f4:	6966666f 	bltu	$r19,$r15,91748(0x16664) # 1c017c58 <_stack+0x5be8>
1c0015f8:	73726563 	0x73726563
1c0015fc:	00000000 	0x00000000
1c001600:	6c706d69 	bgeu	$r11,$r9,28780(0x706c) # 1c00866c <_heap+0x5c6c>
1c001604:	6e656d65 	bgeu	$r11,$r5,-105108(0x2656c) # 1bfe7b70 <data_size+0x1bfe6e8c>
1c001608:	00000074 	0x00000074
1c00160c:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # 1bfe7f7c <data_size+0x1bfe7298>
1c001610:	61706963 	blt	$r11,$r3,94312(0x17068) # 1c018678 <_stack+0x6608>
1c001614:	6974696c 	bltu	$r11,$r12,95336(0x17468) # 1c018a7c <_stack+0x6a0c>
1c001618:	00007365 	0x00007365
1c00161c:	1c001494 	pcaddu12i	$r20,164(0xa4)
1c001620:	1c001498 	pcaddu12i	$r24,164(0xa4)
1c001624:	1c00149c 	pcaddu12i	$r28,164(0xa4)
1c001628:	1c0014a0 	pcaddu12i	$r0,165(0xa5)
1c00162c:	1c0014a4 	pcaddu12i	$r4,165(0xa5)
1c001630:	1c0014a8 	pcaddu12i	$r8,165(0xa5)
1c001634:	1c0014ac 	pcaddu12i	$r12,165(0xa5)
1c001638:	1c0014b0 	pcaddu12i	$r16,165(0xa5)
1c00163c:	1c0014b4 	pcaddu12i	$r20,165(0xa5)
1c001640:	1c0014b8 	pcaddu12i	$r24,165(0xa5)
1c001644:	1c0014b8 	pcaddu12i	$r24,165(0xa5)
1c001648:	1c0014bc 	pcaddu12i	$r28,165(0xa5)
1c00164c:	1c0014bc 	pcaddu12i	$r28,165(0xa5)
1c001650:	1c0014c0 	pcaddu12i	$r0,166(0xa6)
1c001654:	1c0014c8 	pcaddu12i	$r8,166(0xa6)
1c001658:	1c0014cc 	pcaddu12i	$r12,166(0xa6)
1c00165c:	1c0014d0 	pcaddu12i	$r16,166(0xa6)
1c001660:	1c0014d8 	pcaddu12i	$r24,166(0xa6)
1c001664:	1c0014e0 	pcaddu12i	$r0,167(0xa7)
1c001668:	1c0014e8 	pcaddu12i	$r8,167(0xa7)
1c00166c:	1c0014f0 	pcaddu12i	$r16,167(0xa7)
1c001670:	1c0014f4 	pcaddu12i	$r20,167(0xa7)
1c001674:	1c0014fc 	pcaddu12i	$r28,167(0xa7)
1c001678:	1c001504 	pcaddu12i	$r4,168(0xa8)
1c00167c:	1c00150c 	pcaddu12i	$r12,168(0xa8)
1c001680:	1c001514 	pcaddu12i	$r20,168(0xa8)
1c001684:	1c00151c 	pcaddu12i	$r28,168(0xa8)
1c001688:	1c001524 	pcaddu12i	$r4,169(0xa9)
1c00168c:	1c00152c 	pcaddu12i	$r12,169(0xa9)
1c001690:	1c001534 	pcaddu12i	$r20,169(0xa9)
1c001694:	1c00153c 	pcaddu12i	$r28,169(0xa9)
1c001698:	1c00152c 	pcaddu12i	$r12,169(0xa9)
1c00169c:	1c001544 	pcaddu12i	$r4,170(0xaa)
1c0016a0:	1c001550 	pcaddu12i	$r16,170(0xaa)
1c0016a4:	1c001558 	pcaddu12i	$r24,170(0xaa)
1c0016a8:	1c001560 	pcaddu12i	$r0,171(0xab)
1c0016ac:	1c001568 	pcaddu12i	$r8,171(0xab)
1c0016b0:	1c001570 	pcaddu12i	$r16,171(0xab)
1c0016b4:	1c001578 	pcaddu12i	$r24,171(0xab)
1c0016b8:	1c0014f0 	pcaddu12i	$r16,167(0xa7)
1c0016bc:	1c00157c 	pcaddu12i	$r28,171(0xab)
1c0016c0:	1c001584 	pcaddu12i	$r4,172(0xac)
1c0016c4:	1c00158c 	pcaddu12i	$r12,172(0xac)
1c0016c8:	1c001594 	pcaddu12i	$r20,172(0xac)
1c0016cc:	1c00159c 	pcaddu12i	$r28,172(0xac)
1c0016d0:	1c0015a4 	pcaddu12i	$r4,173(0xad)
1c0016d4:	1c0015b0 	pcaddu12i	$r16,173(0xad)
1c0016d8:	1c0015b8 	pcaddu12i	$r24,173(0xad)
1c0016dc:	1c0015c0 	pcaddu12i	$r0,174(0xae)
1c0016e0:	1c0015d0 	pcaddu12i	$r16,174(0xae)
1c0016e4:	1c0015d4 	pcaddu12i	$r20,174(0xae)
1c0016e8:	1c0015dc 	pcaddu12i	$r28,174(0xae)
1c0016ec:	1c0015e4 	pcaddu12i	$r4,175(0xaf)
1c0016f0:	1c0015ec 	pcaddu12i	$r12,175(0xaf)
1c0016f4:	1c0015f4 	pcaddu12i	$r20,175(0xaf)
1c0016f8:	1c001600 	pcaddu12i	$r0,176(0xb0)
1c0016fc:	1c00160c 	pcaddu12i	$r12,176(0xb0)
1c001700:	00000000 	0x00000000
1c001704:	62626163 	blt	$r11,$r3,-105888(0x26260) # 1bfe7964 <data_size+0x1bfe6c80>
1c001708:	00006569 	rdtimeh.w	$r9,$r11
1c00170c:	72756f79 	0x72756f79
1c001710:	00000000 	0x00000000
1c001714:	69207449 	bltu	$r2,$r9,73844(0x12074) # 1c013788 <_stack+0x1718>
1c001718:	74276e73 	0x74276e73
1c00171c:	72656820 	0x72656820
1c001720:	00000065 	0x00000065
1c001724:	20747542 	ll.w	$r2,$r10,29812(0x7474)
1c001728:	69207469 	bltu	$r3,$r9,73844(0x12074) # 1c01379c <_stack+0x172c>
1c00172c:	65682073 	bge	$r3,$r19,92192(0x16820) # 1c017f4c <_stack+0x5edc>
1c001730:	00006572 	rdtimeh.w	$r18,$r11
1c001734:	61646f68 	blt	$r27,$r8,91244(0x1646c) # 1c017ba0 <_stack+0x5b30>
1c001738:	00000064 	0x00000064
1c00173c:	686f6f79 	bltu	$r27,$r25,28524(0x6f6c) # 1c0086a8 <_heap+0x5ca8>
1c001740:	00006f6f 	cpucfg	$r15,$r27
1c001744:	0000002e 	0x0000002e
1c001748:	72206e49 	0x72206e49
1c00174c:	6e656365 	bgeu	$r27,$r5,-105120(0x26560) # 1bfe7cac <data_size+0x1bfe6fc8>
1c001750:	65792074 	bge	$r3,$r20,96544(0x17920) # 1c019070 <_stack+0x7000>
1c001754:	2c737261 	vst	$vr1,$r19,-804(0xcdc)
1c001758:	65687420 	bge	$r1,$r0,92276(0x16874) # 1c017fcc <_stack+0x5f5c>
1c00175c:	65696620 	bge	$r17,$r0,92516(0x16964) # 1c0180c0 <_stack+0x6050>
1c001760:	6f20646c 	bgeu	$r3,$r12,-57244(0x32064) # 1bff37c4 <data_size+0x1bff2ae0>
1c001764:	68702066 	bltu	$r3,$r6,28704(0x7020) # 1c008784 <_heap+0x5d84>
1c001768:	6e6f746f 	bgeu	$r3,$r15,-102540(0x26f74) # 1bfe86dc <data_size+0x1bfe79f8>
1c00176c:	00206369 	div.w	$r9,$r27,$r24
1c001770:	73797263 	0x73797263
1c001774:	736c6174 	vssrarni.bu.h	$vr20,$vr11,0x8
1c001778:	73616820 	vssrani.w.d	$vr0,$vr1,0x1a
1c00177c:	756f6620 	0x756f6620
1c001780:	6e20646e 	bgeu	$r3,$r14,-122780(0x22064) # 1bfe37e4 <data_size+0x1bfe2b00>
1c001784:	00007765 	0x00007765
1c001788:	6c707061 	bgeu	$r3,$r1,28784(0x7070) # 1c0087f8 <_heap+0x5df8>
1c00178c:	74616369 	xvabsd.w	$xr9,$xr27,$xr24
1c001790:	736e6f69 	vssrarni.du.q	$vr9,$vr27,0x1b
1c001794:	206e6920 	ll.w	$r0,$r9,28264(0x6e68)
1c001798:	20656874 	ll.w	$r20,$r3,25960(0x6568)
1c00179c:	61204652 	blt	$r18,$r18,73796(0x12044) # 1c0137e0 <_stack+0x1770>
1c0017a0:	6d20646e 	bgeu	$r3,$r14,73828(0x12064) # 1c013804 <_stack+0x1794>
1c0017a4:	6f726369 	bgeu	$r27,$r9,-36256(0x37260) # 1bff8a04 <data_size+0x1bff7d20>
1c0017a8:	65766177 	bge	$r11,$r23,95840(0x17660) # 1c018e08 <_stack+0x6d98>
1c0017ac:	00000000 	0x00000000
1c0017b0:	69676572 	bltu	$r11,$r18,92004(0x16764) # 1c017f14 <_stack+0x5ea4>
1c0017b4:	202e656d 	ll.w	$r13,$r11,11876(0x2e64)
1c0017b8:	656e2041 	bge	$r2,$r1,93728(0x16e20) # 1c0185d8 <_stack+0x6568>
1c0017bc:	79742077 	0x79742077
1c0017c0:	6f206570 	bgeu	$r11,$r16,-57244(0x32064) # 1bff3824 <data_size+0x1bff2b40>
1c0017c4:	656d2066 	bge	$r3,$r6,93472(0x16d20) # 1c0184e4 <_stack+0x6474>
1c0017c8:	6c6c6174 	bgeu	$r11,$r20,27744(0x6c60) # 1c008428 <_heap+0x5a28>
1c0017cc:	00006369 	rdtimel.w	$r9,$r27
1c0017d0:	63656c65 	blt	$r3,$r5,-39572(0x3656c) # 1bff7d3c <data_size+0x1bff7058>
1c0017d4:	6d6f7274 	bgeu	$r19,$r20,94064(0x16f70) # 1c018744 <_stack+0x66d4>
1c0017d8:	656e6761 	bge	$r27,$r1,93796(0x16e64) # 1c01863c <_stack+0x65cc>
1c0017dc:	20636974 	ll.w	$r20,$r11,25448(0x6368)
1c0017e0:	73797263 	0x73797263
1c0017e4:	206c6174 	ll.w	$r20,$r11,27744(0x6c60)
1c0017e8:	20736168 	ll.w	$r8,$r11,29536(0x7360)
1c0017ec:	6e656562 	bgeu	$r11,$r2,-105116(0x26564) # 1bfe7d50 <data_size+0x1bfe706c>
1c0017f0:	00000000 	0x00000000
1c0017f4:	65766564 	bge	$r11,$r4,95844(0x17664) # 1c018e58 <_stack+0x6de8>
1c0017f8:	65706f6c 	bge	$r27,$r12,94316(0x1706c) # 1c018864 <_stack+0x67f4>
1c0017fc:	68742064 	bltu	$r3,$r4,29728(0x7420) # 1c008c1c <_heap+0x621c>
1c001800:	69207461 	bltu	$r3,$r1,73844(0x12074) # 1c013874 <_stack+0x1804>
1c001804:	61682073 	blt	$r3,$r19,92192(0x16820) # 1c018024 <_stack+0x5fb4>
1c001808:	676e6976 	bge	$r11,$r22,-37272(0x36e68) # 1bff8670 <data_size+0x1bff798c>
1c00180c:	00006120 	rdtimel.w	$r0,$r9
1c001810:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # 1bfe7f78 <data_size+0x1bfe7294>
1c001814:	63696669 	blt	$r19,$r9,-38556(0x36964) # 1bff8178 <data_size+0x1bff7494>
1c001818:	20746e61 	ll.w	$r1,$r19,29804(0x746c)
1c00181c:	61706d69 	blt	$r11,$r9,94316(0x1706c) # 1c018888 <_stack+0x6818>
1c001820:	6f207463 	bgeu	$r3,$r3,-57228(0x32074) # 1bff3894 <data_size+0x1bff2bb0>
1c001824:	6874206e 	bltu	$r3,$r14,29728(0x7420) # 1c008c44 <_heap+0x6244>
1c001828:	69662065 	bltu	$r3,$r5,91680(0x16620) # 1c017e48 <_stack+0x5dd8>
1c00182c:	20646c65 	ll.w	$r5,$r3,25708(0x646c)
1c001830:	0000666f 	rdtimeh.w	$r15,$r19
1c001834:	65746e61 	bge	$r19,$r1,95340(0x1746c) # 1c018ca0 <_stack+0x6c30>
1c001838:	73616e6e 	vssrani.w.d	$vr14,$vr19,0x1b
1c00183c:	7449202e 	xvssub.w	$xr14,$xr1,$xr8
1c001840:	6e6f6320 	bgeu	$r25,$r0,-102560(0x26f60) # 1bfe87a0 <data_size+0x1bfe7abc>
1c001844:	74736973 	xvmin.w	$xr19,$xr11,$xr26
1c001848:	666f2073 	bge	$r3,$r19,-102624(0x26f20) # 1bfe8768 <data_size+0x1bfe7a84>
1c00184c:	00006120 	rdtimel.w	$r0,$r9
1c001850:	646e6f63 	bge	$r27,$r3,28268(0x6e6c) # 1c0086bc <_heap+0x5cbc>
1c001854:	69746375 	bltu	$r27,$r21,95328(0x17460) # 1c018cb4 <_stack+0x6c44>
1c001858:	73206576 	0x73206576
1c00185c:	61667275 	blt	$r19,$r21,91760(0x16670) # 1c017ecc <_stack+0x5e5c>
1c001860:	202c6563 	ll.w	$r3,$r11,11364(0x2c64)
1c001864:	65766f63 	bge	$r27,$r3,95852(0x1766c) # 1c018ed0 <_stack+0x6e60>
1c001868:	20646572 	ll.w	$r18,$r11,25700(0x6464)
1c00186c:	68746977 	bltu	$r11,$r23,29800(0x7468) # 1c008cd4 <_heap+0x62d4>
1c001870:	00006120 	rdtimel.w	$r0,$r9
1c001874:	63657073 	blt	$r3,$r19,-39568(0x36570) # 1bff7de4 <data_size+0x1bff7100>
1c001878:	206c6169 	ll.w	$r9,$r11,27744(0x6c60)
1c00187c:	74786574 	0x74786574
1c001880:	20657275 	ll.w	$r21,$r19,25968(0x6570)
1c001884:	63696877 	blt	$r3,$r23,-38552(0x36968) # 1bff81ec <data_size+0x1bff7508>
1c001888:	6c612068 	bgeu	$r3,$r8,24864(0x6120) # 1c0079a8 <_heap+0x4fa8>
1c00188c:	73726574 	0x73726574
1c001890:	73746920 	0x73746920
1c001894:	00000000 	0x00000000
1c001898:	63656c65 	blt	$r3,$r5,-39572(0x3656c) # 1bff7e04 <data_size+0x1bff7120>
1c00189c:	6d6f7274 	bgeu	$r19,$r20,94064(0x16f70) # 1c01880c <_stack+0x679c>
1c0018a0:	656e6761 	bge	$r27,$r1,93796(0x16e64) # 1c018704 <_stack+0x6694>
1c0018a4:	20636974 	ll.w	$r20,$r11,25448(0x6368)
1c0018a8:	706f7270 	0x706f7270
1c0018ac:	69747265 	bltu	$r19,$r5,95344(0x17470) # 1c018d1c <_stack+0x6cac>
1c0018b0:	202e7365 	ll.w	$r5,$r27,11888(0x2e70)
1c0018b4:	6564614d 	bge	$r10,$r13,91232(0x16460) # 1c017d14 <_stack+0x5ca4>
1c0018b8:	20666f20 	ll.w	$r0,$r25,26220(0x666c)
1c0018bc:	696c6f73 	bltu	$r27,$r19,93292(0x16c6c) # 1c018528 <_stack+0x64b8>
1c0018c0:	00000064 	0x00000064
1c0018c4:	6174656d 	blt	$r11,$r13,95332(0x17464) # 1c018d28 <_stack+0x6cb8>
1c0018c8:	74202c6c 	xvsubwev.h.b	$xr12,$xr3,$xr11
1c0018cc:	73206568 	0x73206568
1c0018d0:	63757274 	blt	$r19,$r20,-35472(0x37570) # 1bff8e40 <data_size+0x1bff815c>
1c0018d4:	65727574 	bge	$r11,$r20,94836(0x17274) # 1c018b48 <_stack+0x6ad8>
1c0018d8:	00000000 	0x00000000
1c0018dc:	646e6f63 	bge	$r27,$r3,28268(0x6e6c) # 1c008748 <_heap+0x5d48>
1c0018e0:	73746375 	0x73746375
1c0018e4:	20434420 	ll.w	$r0,$r1,17220(0x4344)
1c0018e8:	72727563 	0x72727563
1c0018ec:	73746e65 	0x73746e65
1c0018f0:	7562202c 	0x7562202c
1c0018f4:	766f2074 	0x766f2074
1c0018f8:	61207265 	blt	$r19,$r5,73840(0x12070) # 1c013968 <_stack+0x18f8>
1c0018fc:	00000000 	0x00000000
1c001900:	74726170 	xvmin.b	$xr16,$xr11,$xr24
1c001904:	6c756369 	bgeu	$r27,$r9,30048(0x7560) # 1c008e64 <_heap+0x6464>
1c001908:	66207261 	bge	$r19,$r1,-122768(0x22070) # 1bfe3978 <data_size+0x1bfe2c94>
1c00190c:	75716572 	0x75716572
1c001910:	79636e65 	0x79636e65
1c001914:	6e617220 	bgeu	$r17,$r0,-106128(0x26170) # 1bfe7a84 <data_size+0x1bfe6da0>
1c001918:	69206567 	bltu	$r11,$r7,73828(0x12064) # 1c01397c <_stack+0x190c>
1c00191c:	6f642074 	bgeu	$r3,$r20,-39904(0x36420) # 1bff7d3c <data_size+0x1bff7058>
1c001920:	00007365 	0x00007365
1c001924:	20746f6e 	ll.w	$r14,$r27,29804(0x746c)
1c001928:	646e6f63 	bge	$r27,$r3,28268(0x6e6c) # 1c008794 <_heap+0x5d94>
1c00192c:	20746375 	ll.w	$r21,$r27,29792(0x7460)
1c001930:	63204341 	blt	$r26,$r1,-57280(0x32040) # 1bff3970 <data_size+0x1bff2c8c>
1c001934:	65727275 	bge	$r19,$r21,94832(0x17270) # 1c018ba4 <_stack+0x6b34>
1c001938:	2e73746e 	0x2e73746e
1c00193c:	20744920 	ll.w	$r0,$r9,29768(0x7448)
1c001940:	73656f64 	vssrani.wu.d	$vr4,$vr27,0x1b
1c001944:	746f6e20 	0x746f6e20
1c001948:	00000000 	0x00000000
1c00194c:	65766572 	bge	$r11,$r18,95844(0x17664) # 1c018fb0 <_stack+0x6f40>
1c001950:	20657372 	ll.w	$r18,$r27,25968(0x6570)
1c001954:	20656874 	ll.w	$r20,$r3,25960(0x6568)
1c001958:	73616870 	vssrani.w.d	$vr16,$vr3,0x1a
1c00195c:	666f2065 	bge	$r3,$r5,-102624(0x26f20) # 1bfe887c <data_size+0x1bfe7b98>
1c001960:	66657220 	bge	$r17,$r0,-105104(0x26570) # 1bfe7ed0 <data_size+0x1bfe71ec>
1c001964:	7463656c 	xvabsd.wu	$xr12,$xr11,$xr25
1c001968:	00006465 	rdtimeh.w	$r5,$r3
1c00196c:	65766177 	bge	$r11,$r23,95840(0x17660) # 1c018fcc <_stack+0x6f5c>
1c001970:	61202c73 	blt	$r3,$r19,73772(0x1202c) # 1c01399c <_stack+0x192c>
1c001974:	7420646e 	xvsubwev.h.b	$xr14,$xr3,$xr25
1c001978:	65206568 	bge	$r11,$r8,73828(0x12064) # 1c0139dc <_stack+0x196c>
1c00197c:	63656666 	blt	$r19,$r6,-39580(0x36564) # 1bff7ee0 <data_size+0x1bff71fc>
1c001980:	65766974 	bge	$r11,$r20,95848(0x17668) # 1c018fe8 <_stack+0x6f78>
1c001984:	616d6920 	blt	$r9,$r0,93544(0x16d68) # 1c0186ec <_stack+0x667c>
1c001988:	63206567 	blt	$r11,$r7,-57244(0x32064) # 1bff39ec <data_size+0x1bff2d08>
1c00198c:	65727275 	bge	$r19,$r21,94832(0x17270) # 1c018bfc <_stack+0x6b8c>
1c001990:	0073746e 	bstrins.w	$r14,$r3,0x13,0x1d
1c001994:	65707061 	bge	$r3,$r1,94320(0x17070) # 1c018a04 <_stack+0x6994>
1c001998:	69207261 	bltu	$r19,$r1,73840(0x12070) # 1c013a08 <_stack+0x1998>
1c00199c:	68702d6e 	bltu	$r11,$r14,28716(0x702c) # 1c0089c8 <_heap+0x5fc8>
1c0019a0:	2c657361 	vst	$vr1,$r27,-1700(0x95c)
1c0019a4:	74617220 	xvabsd.w	$xr0,$xr17,$xr28
1c0019a8:	20726568 	ll.w	$r8,$r11,29284(0x7264)
1c0019ac:	6e616874 	bgeu	$r3,$r20,-106136(0x26168) # 1bfe7b14 <data_size+0x1bfe6e30>
1c0019b0:	00000000 	0x00000000
1c0019b4:	2d74756f 	0x2d74756f
1c0019b8:	702d666f 	0x702d666f
1c0019bc:	65736168 	bge	$r11,$r8,95072(0x17360) # 1c018d1c <_stack+0x6cac>
1c0019c0:	20736120 	ll.w	$r0,$r9,29536(0x7360)
1c0019c4:	79656874 	0x79656874
1c0019c8:	65726120 	bge	$r9,$r0,94816(0x17260) # 1c018c28 <_stack+0x6bb8>
1c0019cc:	206e6f20 	ll.w	$r0,$r25,28268(0x6e6c)
1c0019d0:	6d726f6e 	bgeu	$r27,$r14,94828(0x1726c) # 1c018c3c <_stack+0x6bcc>
1c0019d4:	00006c61 	cpucfg	$r1,$r3
1c0019d8:	646e6f63 	bge	$r27,$r3,28268(0x6e6c) # 1c008844 <_heap+0x5e44>
1c0019dc:	6f746375 	bgeu	$r27,$r21,-35744(0x37460) # 1bff8e3c <data_size+0x1bff8158>
1c0019e0:	202e7372 	ll.w	$r18,$r27,11888(0x2e70)
1c0019e4:	74727546 	xvmin.b	$xr6,$xr10,$xr29
1c0019e8:	6d726568 	bgeu	$r11,$r8,94820(0x17264) # 1c018c4c <_stack+0x6bdc>
1c0019ec:	2c65726f 	vst	$vr15,$r19,-1700(0x95c)
1c0019f0:	72757320 	0x72757320
1c0019f4:	65636166 	bge	$r11,$r6,90976(0x16360) # 1c017d54 <_stack+0x5ce4>
1c0019f8:	00000000 	0x00000000
1c0019fc:	65766177 	bge	$r11,$r23,95840(0x17660) # 1c01905c <_stack+0x6fec>
1c001a00:	6f642073 	bgeu	$r3,$r19,-39904(0x36420) # 1bff7e20 <data_size+0x1bff713c>
1c001a04:	746f6e20 	0x746f6e20
1c001a08:	6f727020 	bgeu	$r1,$r0,-36240(0x37270) # 1bff8c78 <data_size+0x1bff7f94>
1c001a0c:	61676170 	blt	$r11,$r16,92000(0x16760) # 1c01816c <_stack+0x60fc>
1c001a10:	202c6574 	ll.w	$r20,$r11,11364(0x2c64)
1c001a14:	20646e61 	ll.w	$r1,$r19,25708(0x646c)
1c001a18:	74736e69 	xvmin.w	$xr9,$xr19,$xr27
1c001a1c:	00646165 	bstrins.w	$r5,$r11,0x4,0x18
1c001a20:	69646172 	bltu	$r11,$r18,91232(0x16460) # 1c017e80 <_stack+0x5e10>
1c001a24:	20657461 	ll.w	$r1,$r3,25972(0x6574)
1c001a28:	69666665 	bltu	$r19,$r5,91748(0x16664) # 1c01808c <_stack+0x601c>
1c001a2c:	6e656963 	bgeu	$r11,$r3,-105112(0x26568) # 1bfe7f94 <data_size+0x1bfe72b0>
1c001a30:	20796c74 	ll.w	$r20,$r3,31084(0x796c)
1c001a34:	6f746e69 	bgeu	$r19,$r9,-35732(0x3746c) # 1bff8ea0 <data_size+0x1bff81bc>
1c001a38:	65726620 	bge	$r17,$r0,94820(0x17264) # 1c018c9c <_stack+0x6c2c>
1c001a3c:	00000065 	0x00000065
1c001a40:	63617073 	blt	$r3,$r19,-40592(0x36170) # 1bff7bb0 <data_size+0x1bff6ecc>
1c001a44:	54202e65 	bl	-107732948(0x994202c) # 15943a70 <data_size+0x15942d8c>
1c001a48:	20736968 	ll.w	$r8,$r11,29544(0x7368)
1c001a4c:	2077656e 	ll.w	$r14,$r11,30564(0x7764)
1c001a50:	6574616d 	bge	$r11,$r13,95328(0x17460) # 1c018eb0 <_stack+0x6e40>
1c001a54:	6c616972 	bgeu	$r11,$r18,24936(0x6168) # 1c007bbc <_heap+0x51bc>
1c001a58:	6574202c 	bge	$r1,$r12,95264(0x17420) # 1c018e78 <_stack+0x6e08>
1c001a5c:	64656d72 	bge	$r11,$r18,25964(0x656c) # 1c007fc8 <_heap+0x55c8>
1c001a60:	00006120 	rdtimel.w	$r0,$r9
1c001a64:	68676968 	bltu	$r11,$r8,26472(0x6768) # 1c0081cc <_heap+0x57cc>
1c001a68:	706d692d 	0x706d692d
1c001a6c:	6e616465 	bgeu	$r3,$r5,-106140(0x26164) # 1bfe7bd0 <data_size+0x1bfe6eec>
1c001a70:	73206563 	0x73206563
1c001a74:	61667275 	blt	$r19,$r21,91760(0x16670) # 1c0180e4 <_stack+0x6074>
1c001a78:	202c6563 	ll.w	$r3,$r11,11364(0x2c64)
1c001a7c:	766f7270 	0x766f7270
1c001a80:	73656469 	vssrani.wu.d	$vr9,$vr3,0x19
1c001a84:	00000000 	0x00000000
1c001a88:	73752061 	0x73752061
1c001a8c:	6c756665 	bgeu	$r19,$r5,30052(0x7564) # 1c008ff0 <_heap+0x65f0>
1c001a90:	77656e20 	xvssrani.wu.d	$xr0,$xr17,0x1b
1c001a94:	6f726720 	bgeu	$r25,$r0,-36252(0x37264) # 1bff8cf8 <data_size+0x1bff8014>
1c001a98:	20646e75 	ll.w	$r21,$r19,25708(0x646c)
1c001a9c:	6e616c70 	bgeu	$r3,$r16,-106132(0x2616c) # 1bfe7c08 <data_size+0x1bfe6f24>
1c001aa0:	6f662065 	bgeu	$r3,$r5,-39392(0x36620) # 1bff80c0 <data_size+0x1bff73dc>
1c001aa4:	6f6e2072 	bgeu	$r3,$r18,-37344(0x36e20) # 1bff88c4 <data_size+0x1bff7be0>
1c001aa8:	006c6576 	bstrins.w	$r22,$r11,0xc,0x19
1c001aac:	2d776f6c 	0x2d776f6c
1c001ab0:	666f7270 	bge	$r19,$r16,-102544(0x26f70) # 1bfe8a20 <data_size+0x1bfe7d3c>
1c001ab4:	20656c69 	ll.w	$r9,$r3,25964(0x656c)
1c001ab8:	65746e61 	bge	$r19,$r1,95340(0x1746c) # 1c018f24 <_stack+0x6eb4>
1c001abc:	73616e6e 	vssrani.w.d	$vr14,$vr19,0x1b
1c001ac0:	646e6120 	bge	$r9,$r0,28256(0x6e60) # 1c008920 <_heap+0x5f20>
1c001ac4:	68746f20 	bltu	$r25,$r0,29804(0x746c) # 1c008f30 <_heap+0x6530>
1c001ac8:	00007265 	0x00007265
1c001acc:	63656c65 	blt	$r3,$r5,-39572(0x3656c) # 1bff8038 <data_size+0x1bff7354>
1c001ad0:	6d6f7274 	bgeu	$r19,$r20,94064(0x16f70) # 1c018a40 <_stack+0x69d0>
1c001ad4:	656e6761 	bge	$r27,$r1,93796(0x16e64) # 1c018938 <_stack+0x68c8>
1c001ad8:	20636974 	ll.w	$r20,$r11,25448(0x6368)
1c001adc:	75727473 	0x75727473
1c001ae0:	72757463 	0x72757463
1c001ae4:	002e7365 	0x002e7365
1c001ae8:	20656854 	ll.w	$r20,$r2,25960(0x6568)
1c001aec:	65636572 	bge	$r11,$r18,90980(0x16364) # 1c017e50 <_stack+0x5de0>
1c001af0:	7020746e 	vsubwev.h.b	$vr14,$vr3,$vr29
1c001af4:	65746f72 	bge	$r27,$r18,95340(0x1746c) # 1c018f60 <_stack+0x6ef0>
1c001af8:	20737473 	ll.w	$r19,$r3,29556(0x7374)
1c001afc:	756f6261 	0x756f6261
1c001b00:	68742074 	bltu	$r3,$r20,29728(0x7420) # 1c008f20 <_heap+0x6520>
1c001b04:	694d2065 	bltu	$r3,$r5,85280(0x14d20) # 1c016824 <_stack+0x47b4>
1c001b08:	67696863 	bge	$r3,$r3,-38552(0x36968) # 1bff8470 <data_size+0x1bff778c>
1c001b0c:	61756d61 	blt	$r11,$r1,95596(0x1756c) # 1c019078 <_stack+0x7008>
1c001b10:	00000000 	0x00000000
1c001b14:	64757473 	bge	$r3,$r19,30068(0x7574) # 1c009088 <_heap+0x6688>
1c001b18:	20746e65 	ll.w	$r5,$r19,29804(0x746c)
1c001b1c:	6167726f 	blt	$r19,$r15,92016(0x16770) # 1c01828c <_stack+0x621c>
1c001b20:	617a696e 	blt	$r11,$r14,96872(0x17a68) # 1c019588 <_stack+0x7518>
1c001b24:	6e6f6974 	bgeu	$r11,$r20,-102552(0x26f68) # 1bfe8a8c <data_size+0x1bfe7da8>
1c001b28:	76616820 	0x76616820
1c001b2c:	61722065 	blt	$r3,$r5,94752(0x17220) # 1c018d4c <_stack+0x6cdc>
1c001b30:	64657369 	bge	$r27,$r9,25968(0x6570) # 1c0080a0 <_heap+0x56a0>
1c001b34:	006e6120 	bstrins.w	$r0,$r9,0xe,0x18
1c001b38:	6f706d69 	bgeu	$r11,$r9,-36756(0x3706c) # 1bff8ba4 <data_size+0x1bff7ec0>
1c001b3c:	6e617472 	bgeu	$r3,$r18,-106124(0x26174) # 1bfe7cb0 <data_size+0x1bfe6fcc>
1c001b40:	75712074 	0x75712074
1c001b44:	69747365 	bltu	$r27,$r5,95344(0x17470) # 1c018fb4 <_stack+0x6f44>
1c001b48:	61206e6f 	blt	$r19,$r15,73836(0x1206c) # 1c013bb4 <_stack+0x1b44>
1c001b4c:	6f742073 	bgeu	$r3,$r19,-35808(0x37420) # 1bff8f6c <data_size+0x1bff8288>
1c001b50:	65687420 	bge	$r1,$r0,92276(0x16874) # 1c0183c4 <_stack+0x6354>
1c001b54:	6f727020 	bgeu	$r1,$r0,-36240(0x37270) # 1bff8dc4 <data_size+0x1bff80e0>
1c001b58:	20726570 	ll.w	$r16,$r11,29284(0x7264)
1c001b5c:	7574616e 	0x7574616e
1c001b60:	00006572 	rdtimeh.w	$r18,$r11
1c001b64:	20646e61 	ll.w	$r1,$r19,25708(0x646c)
1c001b68:	706f6373 	0x706f6373
1c001b6c:	666f2065 	bge	$r3,$r5,-102624(0x26f20) # 1bfe8a8c <data_size+0x1bfe7da8>
1c001b70:	696e5520 	bltu	$r9,$r0,93780(0x16e54) # 1c0189c4 <_stack+0x6954>
1c001b74:	73726576 	0x73726576
1c001b78:	20797469 	ll.w	$r9,$r3,31092(0x7974)
1c001b7c:	6f766e69 	bgeu	$r19,$r9,-35220(0x3766c) # 1bff91e8 <data_size+0x1bff8504>
1c001b80:	6d65766c 	bgeu	$r19,$r12,91508(0x16574) # 1c0180f4 <_stack+0x6084>
1c001b84:	00746e65 	bstrins.w	$r5,$r19,0x14,0x1b
1c001b88:	68746977 	bltu	$r11,$r23,29800(0x7468) # 1c008ff0 <_heap+0x65f0>
1c001b8c:	75747320 	0x75747320
1c001b90:	746e6564 	0x746e6564
1c001b94:	67726f20 	bge	$r25,$r0,-36244(0x3726c) # 1bff8e00 <data_size+0x1bff811c>
1c001b98:	7a696e61 	0x7a696e61
1c001b9c:	6f697461 	bgeu	$r3,$r1,-38540(0x36974) # 1bff8510 <data_size+0x1bff782c>
1c001ba0:	202e736e 	ll.w	$r14,$r27,11888(0x2e70)
1c001ba4:	6f636341 	bgeu	$r26,$r1,-40096(0x36360) # 1bff7f04 <data_size+0x1bff7220>
1c001ba8:	6e696472 	bgeu	$r3,$r18,-104092(0x26964) # 1bfe850c <data_size+0x1bfe7828>
1c001bac:	00796c67 	bstrins.w	$r7,$r3,0x19,0x1b
1c001bb0:	20656874 	ll.w	$r20,$r3,25960(0x6568)
1c001bb4:	656e6170 	bge	$r11,$r16,93792(0x16e60) # 1c018a14 <_stack+0x69a4>
1c001bb8:	6564206c 	bge	$r3,$r12,91168(0x16420) # 1c017fd8 <_stack+0x5f68>
1c001bbc:	69726373 	bltu	$r27,$r19,94816(0x17260) # 1c018e1c <_stack+0x6dac>
1c001bc0:	20646562 	ll.w	$r2,$r11,25700(0x6464)
1c001bc4:	6d206e69 	bgeu	$r19,$r9,73836(0x1206c) # 1c013c30 <_stack+0x1bc0>
1c001bc8:	74532079 	0x74532079
1c001bcc:	6d657461 	bgeu	$r3,$r1,91508(0x16574) # 1c018140 <_stack+0x60d0>
1c001bd0:	20746e65 	ll.w	$r5,$r19,29804(0x746c)
1c001bd4:	0000666f 	rdtimeh.w	$r15,$r19
1c001bd8:	72626546 	0x72626546
1c001bdc:	79726175 	0x79726175
1c001be0:	2c353220 	vld	$vr0,$r17,-692(0xd4c)
1c001be4:	30303220 	0x30303220
1c001be8:	68742030 	bltu	$r1,$r16,29728(0x7420) # 1c009008 <_heap+0x6608>
1c001bec:	69207461 	bltu	$r3,$r1,73844(0x12074) # 1c013c60 <_stack+0x1bf0>
1c001bf0:	6f632073 	bgeu	$r3,$r19,-40160(0x36320) # 1bff7f10 <data_size+0x1bff722c>
1c001bf4:	6469736e 	bge	$r27,$r14,26992(0x6970) # 1c008564 <_heap+0x5b64>
1c001bf8:	6e697265 	bgeu	$r19,$r5,-104080(0x26970) # 1bfe8568 <data_size+0x1bfe7884>
1c001bfc:	68742067 	bltu	$r3,$r7,29728(0x7420) # 1c00901c <_heap+0x661c>
1c001c00:	00000065 	0x00000065
1c001c04:	73657571 	vssrani.wu.d	$vr17,$vr11,0x1d
1c001c08:	6e6f6974 	bgeu	$r11,$r20,-102552(0x26f68) # 1bfe8b70 <data_size+0x1bfe7e8c>
1c001c0c:	20666f20 	ll.w	$r0,$r25,26220(0x666c)
1c001c10:	76697270 	0x76697270
1c001c14:	67656c69 	bge	$r3,$r9,-39572(0x3656c) # 1bff8180 <data_size+0x1bff749c>
1c001c18:	73206465 	0x73206465
1c001c1c:	65636170 	bge	$r11,$r16,90976(0x16360) # 1c017f7c <_stack+0x5f0c>
1c001c20:	736c6120 	vssrarni.bu.h	$vr0,$vr9,0x8
1c001c24:	6977206f 	bltu	$r3,$r15,96032(0x17720) # 1c019344 <_stack+0x72d4>
1c001c28:	00006c6c 	cpucfg	$r12,$r3
1c001c2c:	736e6f63 	vssrarni.du.q	$vr3,$vr27,0x1b
1c001c30:	72656469 	0x72656469
1c001c34:	646e7520 	bge	$r9,$r0,28276(0x6e74) # 1c008aa8 <_heap+0x60a8>
1c001c38:	77207265 	0x77207265
1c001c3c:	20746168 	ll.w	$r8,$r11,29792(0x7460)
1c001c40:	63726963 	blt	$r11,$r3,-36248(0x37268) # 1bff8ea8 <data_size+0x1bff81c4>
1c001c44:	74736d75 	xvmin.w	$xr21,$xr11,$xr27
1c001c48:	65636e61 	bge	$r19,$r1,90988(0x1636c) # 1c017fb4 <_stack+0x5f44>
1c001c4c:	6e612073 	bgeu	$r3,$r19,-106208(0x26120) # 1bfe7d6c <data_size+0x1bfe7088>
1c001c50:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # 1bfe8570 <data_size+0x1bfe788c>
1c001c54:	00000000 	0x00000000
1c001c58:	74616877 	xvabsd.w	$xr23,$xr3,$xr26
1c001c5c:	79617720 	0x79617720
1c001c60:	68742073 	bltu	$r3,$r19,29728(0x7420) # 1c009080 <_heap+0x6680>
1c001c64:	6e552065 	bgeu	$r3,$r5,-109280(0x25520) # 1bfe7184 <data_size+0x1bfe64a0>
1c001c68:	72657669 	0x72657669
1c001c6c:	79746973 	0x79746973
1c001c70:	7469202c 	xvavgr.w	$xr12,$xr1,$xr8
1c001c74:	00000073 	0x00000073
1c001c78:	696d6461 	bltu	$r3,$r1,93540(0x16d64) # 1c0189dc <_stack+0x696c>
1c001c7c:	7473696e 	xvmin.w	$xr14,$xr11,$xr26
1c001c80:	6f746172 	bgeu	$r11,$r18,-35744(0x37460) # 1bff90e0 <data_size+0x1bff83fc>
1c001c84:	61207372 	blt	$r27,$r18,73840(0x12070) # 1c013cf4 <_stack+0x1c84>
1c001c88:	6620646e 	bge	$r3,$r14,-122780(0x22064) # 1bfe3cec <data_size+0x1bfe3008>
1c001c8c:	6c756361 	bgeu	$r27,$r1,30048(0x7560) # 1c0091ec <_heap+0x67ec>
1c001c90:	6d207974 	bgeu	$r11,$r20,73848(0x12078) # 1c013d08 <_stack+0x1c98>
1c001c94:	65626d65 	bge	$r11,$r5,90732(0x1626c) # 1c017f00 <_stack+0x5e90>
1c001c98:	73207372 	0x73207372
1c001c9c:	6c756f68 	bgeu	$r27,$r8,30060(0x756c) # 1c009208 <_heap+0x6808>
1c001ca0:	00000064 	0x00000064
1c001ca4:	61206562 	blt	$r11,$r2,73828(0x12064) # 1c013d08 <_stack+0x1c98>
1c001ca8:	636f7373 	blt	$r27,$r19,-37008(0x36f70) # 1bff8c18 <data_size+0x1bff7f34>
1c001cac:	65746169 	bge	$r11,$r9,95328(0x17460) # 1c01910c <_stack+0x709c>
1c001cb0:	69772064 	bltu	$r3,$r4,96032(0x17720) # 1c0193d0 <_stack+0x7360>
1c001cb4:	73206874 	0x73206874
1c001cb8:	20686375 	ll.w	$r21,$r27,26720(0x6860)
1c001cbc:	6167726f 	blt	$r19,$r15,92016(0x16770) # 1c01842c <_stack+0x63bc>
1c001cc0:	617a696e 	blt	$r11,$r14,96872(0x17a68) # 1c019728 <_stack+0x76b8>
1c001cc4:	6e6f6974 	bgeu	$r11,$r20,-102552(0x26f68) # 1bfe8c2c <data_size+0x1bfe7f48>
1c001cc8:	00000073 	0x00000073
1c001ccc:	20646e61 	ll.w	$r1,$r19,25708(0x646c)
1c001cd0:	77207469 	0x77207469
1c001cd4:	206c6c69 	ll.w	$r9,$r3,27756(0x6c6c)
1c001cd8:	6f636572 	bgeu	$r11,$r18,-40092(0x36364) # 1bff803c <data_size+0x1bff7358>
1c001cdc:	6e656d6d 	bgeu	$r11,$r13,-105108(0x2656c) # 1bfe8248 <data_size+0x1bfe7564>
1c001ce0:	75672064 	0x75672064
1c001ce4:	6e696469 	bgeu	$r3,$r9,-104092(0x26964) # 1bfe8648 <data_size+0x1bfe7964>
1c001ce8:	72702067 	0x72702067
1c001cec:	69636e69 	bltu	$r19,$r9,90988(0x1636c) # 1c018058 <_stack+0x5fe8>
1c001cf0:	73656c70 	vssrani.wu.d	$vr16,$vr3,0x1b
1c001cf4:	00000000 	0x00000000
1c001cf8:	74206e69 	xvsubwev.h.b	$xr9,$xr19,$xr27
1c001cfc:	20736968 	ll.w	$r8,$r11,29544(0x7368)
1c001d00:	61676572 	blt	$r11,$r18,92004(0x16764) # 1c018464 <_stack+0x63f4>
1c001d04:	202e6472 	ll.w	$r18,$r3,11876(0x2e64)
1c001d08:	20656854 	ll.w	$r20,$r2,25960(0x6568)
1c001d0c:	76696e55 	0x76696e55
1c001d10:	69737265 	bltu	$r19,$r5,95088(0x17370) # 1c019080 <_stack+0x7010>
1c001d14:	73277974 	0x73277974
1c001d18:	00000000 	0x00000000
1c001d1c:	63657845 	blt	$r2,$r5,-39560(0x36578) # 1bff8294 <data_size+0x1bff75b0>
1c001d20:	76697475 	0x76697475
1c001d24:	664f2065 	bge	$r3,$r5,-110816(0x24f20) # 1bfe6c44 <data_size+0x1bfe5f60>
1c001d28:	65636966 	bge	$r11,$r6,90984(0x16368) # 1c018090 <_stack+0x6020>
1c001d2c:	61207372 	blt	$r27,$r18,73840(0x12070) # 1c013d9c <_stack+0x1d2c>
1c001d30:	4920646e 	bceqz	$fcc3,3743844(0x392064) # 1c393d94 <_stack+0x381d24>
1c001d34:	6c697720 	bgeu	$r25,$r0,26996(0x6974) # 1c0086a8 <_heap+0x5ca8>
1c001d38:	6874206c 	bltu	$r3,$r12,29728(0x7420) # 1c009158 <_heap+0x6758>
1c001d3c:	64206e65 	bge	$r19,$r5,8300(0x206c) # 1c003da8 <_heap+0x13a8>
1c001d40:	64696365 	bge	$r27,$r5,26976(0x6960) # 1c0086a0 <_heap+0x5ca0>
1c001d44:	00000065 	0x00000065
1c001d48:	74656877 	xvavg.w	$xr23,$xr3,$xr26
1c001d4c:	20726568 	ll.w	$r8,$r11,29284(0x7264)
1c001d50:	20646e61 	ll.w	$r1,$r19,25708(0x646c)
1c001d54:	20776f68 	ll.w	$r8,$r27,30572(0x776c)
1c001d58:	69206f74 	bltu	$r27,$r20,73836(0x1206c) # 1c013dc4 <_stack+0x1d54>
1c001d5c:	656c706d 	bge	$r3,$r13,93296(0x16c70) # 1c0189cc <_stack+0x695c>
1c001d60:	746e656d 	0x746e656d
1c001d64:	63757320 	blt	$r25,$r0,-35472(0x37570) # 1bff92d4 <data_size+0x1bff85f0>
1c001d68:	00000068 	0x00000068
1c001d6c:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # 1bfe86dc <data_size+0x1bfe79f8>
1c001d70:	6c706963 	bgeu	$r11,$r3,28776(0x7068) # 1c008dd8 <_heap+0x63d8>
1c001d74:	002e7365 	0x002e7365
1c001d78:	1c001704 	pcaddu12i	$r4,184(0xb8)
1c001d7c:	1c00170c 	pcaddu12i	$r12,184(0xb8)
1c001d80:	1c001714 	pcaddu12i	$r20,184(0xb8)
1c001d84:	1c001724 	pcaddu12i	$r4,185(0xb9)
1c001d88:	1c001734 	pcaddu12i	$r20,185(0xb9)
1c001d8c:	1c00173c 	pcaddu12i	$r28,185(0xb9)
1c001d90:	1c00173c 	pcaddu12i	$r28,185(0xb9)
1c001d94:	1c00173c 	pcaddu12i	$r28,185(0xb9)
1c001d98:	1c00173c 	pcaddu12i	$r28,185(0xb9)
1c001d9c:	1c00173c 	pcaddu12i	$r28,185(0xb9)
1c001da0:	1c0014b8 	pcaddu12i	$r24,165(0xa5)
1c001da4:	1c0014bc 	pcaddu12i	$r28,165(0xa5)
1c001da8:	1c001744 	pcaddu12i	$r4,186(0xba)
1c001dac:	1c001748 	pcaddu12i	$r8,186(0xba)
1c001db0:	1c001770 	pcaddu12i	$r16,187(0xbb)
1c001db4:	1c001788 	pcaddu12i	$r8,188(0xbc)
1c001db8:	1c0017b0 	pcaddu12i	$r16,189(0xbd)
1c001dbc:	1c0017d0 	pcaddu12i	$r16,190(0xbe)
1c001dc0:	1c0017f4 	pcaddu12i	$r20,191(0xbf)
1c001dc4:	1c001810 	pcaddu12i	$r16,192(0xc0)
1c001dc8:	1c001834 	pcaddu12i	$r20,193(0xc1)
1c001dcc:	1c001850 	pcaddu12i	$r16,194(0xc2)
1c001dd0:	1c001874 	pcaddu12i	$r20,195(0xc3)
1c001dd4:	1c001898 	pcaddu12i	$r24,196(0xc4)
1c001dd8:	1c0018c4 	pcaddu12i	$r4,198(0xc6)
1c001ddc:	1c0018dc 	pcaddu12i	$r28,198(0xc6)
1c001de0:	1c001900 	pcaddu12i	$r0,200(0xc8)
1c001de4:	1c001924 	pcaddu12i	$r4,201(0xc9)
1c001de8:	1c00194c 	pcaddu12i	$r12,202(0xca)
1c001dec:	1c00196c 	pcaddu12i	$r12,203(0xcb)
1c001df0:	1c001994 	pcaddu12i	$r20,204(0xcc)
1c001df4:	1c0019b4 	pcaddu12i	$r20,205(0xcd)
1c001df8:	1c0019d8 	pcaddu12i	$r24,206(0xce)
1c001dfc:	1c0019fc 	pcaddu12i	$r28,207(0xcf)
1c001e00:	1c001a20 	pcaddu12i	$r0,209(0xd1)
1c001e04:	1c001a40 	pcaddu12i	$r0,210(0xd2)
1c001e08:	1c001a64 	pcaddu12i	$r4,211(0xd3)
1c001e0c:	1c001a88 	pcaddu12i	$r8,212(0xd4)
1c001e10:	1c001aac 	pcaddu12i	$r12,213(0xd5)
1c001e14:	1c001acc 	pcaddu12i	$r12,214(0xd6)
1c001e18:	1c001ae8 	pcaddu12i	$r8,215(0xd7)
1c001e1c:	1c001b14 	pcaddu12i	$r20,216(0xd8)
1c001e20:	1c001b38 	pcaddu12i	$r24,217(0xd9)
1c001e24:	1c001b64 	pcaddu12i	$r4,219(0xdb)
1c001e28:	1c001b88 	pcaddu12i	$r8,220(0xdc)
1c001e2c:	1c001bb0 	pcaddu12i	$r16,221(0xdd)
1c001e30:	1c001bd8 	pcaddu12i	$r24,222(0xde)
1c001e34:	1c001c04 	pcaddu12i	$r4,224(0xe0)
1c001e38:	1c001c2c 	pcaddu12i	$r12,225(0xe1)
1c001e3c:	1c001c58 	pcaddu12i	$r24,226(0xe2)
1c001e40:	1c001c78 	pcaddu12i	$r24,227(0xe3)
1c001e44:	1c001ca4 	pcaddu12i	$r4,229(0xe5)
1c001e48:	1c001ccc 	pcaddu12i	$r12,230(0xe6)
1c001e4c:	1c001cf8 	pcaddu12i	$r24,231(0xe7)
1c001e50:	1c001d1c 	pcaddu12i	$r28,232(0xe8)
1c001e54:	1c001d48 	pcaddu12i	$r8,234(0xea)
1c001e58:	1c001d6c 	pcaddu12i	$r12,235(0xeb)
1c001e5c:	00000001 	0x00000001
1c001e60:	00000001 	0x00000001
1c001e64:	00000000 	0x00000000
1c001e68:	00000001 	0x00000001
1c001e6c:	00000001 	0x00000001
1c001e70:	00000001 	0x00000001
1c001e74:	00000001 	0x00000001
1c001e78:	00000001 	0x00000001
1c001e7c:	00000001 	0x00000001
1c001e80:	00000000 	0x00000000
1c001e84:	00000001 	0x00000001
1c001e88:	00000001 	0x00000001
1c001e8c:	00000000 	0x00000000
1c001e90:	00000001 	0x00000001
1c001e94:	00000001 	0x00000001
1c001e98:	00000001 	0x00000001
1c001e9c:	00000001 	0x00000001
1c001ea0:	00000000 	0x00000000
1c001ea4:	00000001 	0x00000001
1c001ea8:	00000001 	0x00000001
	...
1c001eb4:	00000001 	0x00000001
1c001eb8:	00000001 	0x00000001
	...
1c001ec4:	00000001 	0x00000001
1c001ec8:	00000001 	0x00000001
1c001ecc:	00000001 	0x00000001
	...
1c001ed8:	00000001 	0x00000001
1c001edc:	00000001 	0x00000001
	...
1c001f1c:	00000001 	0x00000001
1c001f20:	00000001 	0x00000001
1c001f24:	00000001 	0x00000001
1c001f28:	00000001 	0x00000001
1c001f2c:	00000000 	0x00000000
1c001f30:	00000001 	0x00000001
1c001f34:	00000000 	0x00000000
1c001f38:	00000001 	0x00000001
1c001f3c:	00000000 	0x00000000
1c001f40:	1c000e60 	pcaddu12i	$r0,115(0x73)
1c001f44:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f48:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f4c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f50:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f54:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f58:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f5c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f60:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f64:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f68:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f6c:	1c000d44 	pcaddu12i	$r4,106(0x6a)
1c001f70:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001f74:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001f78:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001f7c:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001f80:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001f84:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001f88:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001f8c:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001f90:	1c000d50 	pcaddu12i	$r16,106(0x6a)
1c001f94:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f98:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001f9c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fa0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fa4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fa8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fac:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fb0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fb4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fb8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fbc:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fc0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fc4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fc8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fcc:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fd0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fd4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fd8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fdc:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fe0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fe4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fe8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001fec:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001ff0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001ff4:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001ff8:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c001ffc:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002000:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002004:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002008:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00200c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002010:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002014:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002018:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00201c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002020:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002024:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002028:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00202c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002030:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002034:	1c000d90 	pcaddu12i	$r16,108(0x6c)
1c002038:	1c000dac 	pcaddu12i	$r12,109(0x6d)
1c00203c:	1c000dc0 	pcaddu12i	$r0,110(0x6e)
1c002040:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002044:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002048:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00204c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002050:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002054:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002058:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00205c:	1c000ddc 	pcaddu12i	$r28,110(0x6e)
1c002060:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002064:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002068:	1c000df8 	pcaddu12i	$r24,111(0x6f)
1c00206c:	1c000e14 	pcaddu12i	$r20,112(0x70)
1c002070:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002074:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002078:	1c000e30 	pcaddu12i	$r16,113(0x71)
1c00207c:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002080:	1c000e44 	pcaddu12i	$r4,114(0x72)
1c002084:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c002088:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c00208c:	1c000e14 	pcaddu12i	$r20,112(0x70)

1c002090 <__CTOR_LIST__>:
	...

1c002098 <__CTOR_END__>:
	...

1c0020a0 <__DTOR_END__>:
__DTOR_END__():
1c0020a0:	00000000 	0x00000000
1c0020a4:	1c012070 	pcaddu12i	$r16,2307(0x903)

Disassembly of section .eh_frame:

1c0020a8 <.eh_frame>:
1c0020a8:	0000000c 	0x0000000c
1c0020ac:	00000000 	0x00000000
1c0020b0:	7c010003 	0x7c010003
1c0020b4:	00030c01 	0x00030c01
1c0020b8:	00000050 	0x00000050
1c0020bc:	00000014 	0x00000014
1c0020c0:	1c0003a0 	pcaddu12i	$r0,29(0x1d)
1c0020c4:	0000015c 	0x0000015c
1c0020c8:	00000404 	0x00000404
1c0020cc:	04200e00 	csrxchg	$r0,$r16,0x803
1c0020d0:	00000018 	0x00000018
1c0020d4:	04990181 	csrxchg	$r1,$r12,0x2640
1c0020d8:	0297059a 	addi.w	$r26,$r12,1473(0x5c1)
1c0020dc:	c0040398 	0xc0040398
1c0020e0:	0a000000 	0x0a000000
1c0020e4:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
1c0020e8:	04d70000 	csrrd	$r0,0x35c0
1c0020ec:	00000004 	0x00000004
1c0020f0:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
1c0020f4:	04d90000 	csrrd	$r0,0x3640
1c0020f8:	00000008 	0x00000008
1c0020fc:	000c04da 	bytepick.d	$r26,$r6,$r1,0x0
1c002100:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c002104:	00000404 	0x00000404
1c002108:	00000b00 	0x00000b00
1c00210c:	00000038 	0x00000038
1c002110:	00000068 	0x00000068
1c002114:	1c000500 	pcaddu12i	$r0,40(0x28)
1c002118:	00000234 	0x00000234
1c00211c:	00000404 	0x00000404
1c002120:	04100e00 	csrxchg	$r0,$r16,0x403
1c002124:	00000008 	0x00000008
1c002128:	01810297 	0x01810297
1c00212c:	0001f404 	0x0001f404
1c002130:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c002134:	00000010 	0x00000010
1c002138:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c00213c:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c002140:	00000404 	0x00000404
1c002144:	00000b00 	0x00000b00
1c002148:	00000074 	0x00000074
1c00214c:	000000a4 	0x000000a4
1c002150:	1c000740 	pcaddu12i	$r0,58(0x3a)
1c002154:	000000dc 	0x000000dc
1c002158:	00000404 	0x00000404
1c00215c:	04300e00 	csrxchg	$r0,$r16,0xc03
1c002160:	0000000c 	0x0000000c
1c002164:	2404089d 	ldptr.w	$r29,$r4,1032(0x408)
1c002168:	97000000 	0x97000000
1c00216c:	99039802 	0x99039802
1c002170:	9c059a04 	0x9c059a04
1c002174:	81099e07 	0x81099e07
1c002178:	04069b01 	csrxchg	$r1,$r24,0x1a6
1c00217c:	00000058 	0x00000058
1c002180:	0804c10a 	0x0804c10a
1c002184:	d7000000 	0xd7000000
1c002188:	00000404 	0x00000404
1c00218c:	0404d800 	csrrd	$r0,0x136
1c002190:	d9000000 	0xd9000000
1c002194:	00000404 	0x00000404
1c002198:	0404da00 	csrxchg	$r0,$r16,0x136
1c00219c:	db000000 	0xdb000000
1c0021a0:	00000404 	0x00000404
1c0021a4:	0404dc00 	csrrd	$r0,0x137
1c0021a8:	dd000000 	0xdd000000
1c0021ac:	00000404 	0x00000404
1c0021b0:	0404de00 	csrxchg	$r0,$r16,0x137
1c0021b4:	0e000000 	0x0e000000
1c0021b8:	00040400 	alsl.w	$r0,$r0,$r1,0x1
1c0021bc:	000b0000 	0x000b0000
1c0021c0:	000000c8 	0x000000c8
1c0021c4:	0000011c 	0x0000011c
1c0021c8:	1c000820 	pcaddu12i	$r0,65(0x41)
1c0021cc:	00000430 	0x00000430
1c0021d0:	00000404 	0x00000404
1c0021d4:	05f00e00 	0x05f00e00
1c0021d8:	00003c04 	revb.d	$r4,$r0
1c0021dc:	9f018100 	0x9f018100
1c0021e0:	9702960b 	0x9702960b
1c0021e4:	99049803 	0x99049803
1c0021e8:	9b069a05 	0x9b069a05
1c0021ec:	9d089c07 	0x9d089c07
1c0021f0:	040a9e09 	csrxchg	$r9,$r16,0x2a7
1c0021f4:	000002f0 	0x000002f0
1c0021f8:	0404c10a 	csrxchg	$r10,$r8,0x130
1c0021fc:	d6000000 	0xd6000000
1c002200:	00000804 	0x00000804
1c002204:	0404d700 	csrxchg	$r0,$r24,0x135
1c002208:	d8000000 	0xd8000000
1c00220c:	00000404 	0x00000404
1c002210:	0404d900 	csrxchg	$r0,$r8,0x136
1c002214:	da000000 	0xda000000
1c002218:	00000404 	0x00000404
1c00221c:	0404db00 	csrxchg	$r0,$r24,0x136
1c002220:	dc000000 	0xdc000000
1c002224:	00000404 	0x00000404
1c002228:	0404dd00 	csrxchg	$r0,$r8,0x137
1c00222c:	de000000 	0xde000000
1c002230:	00000404 	0x00000404
1c002234:	0404df00 	csrxchg	$r0,$r24,0x137
1c002238:	0e000000 	0x0e000000
1c00223c:	00040400 	alsl.w	$r0,$r0,$r1,0x1
1c002240:	040b0000 	csrrd	$r0,0x2c0
1c002244:	00000094 	0x00000094
1c002248:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
1c00224c:	04d60000 	csrrd	$r0,0x3580
1c002250:	0000000c 	0x0000000c
1c002254:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c002258:	04d80000 	csrrd	$r0,0x3600
1c00225c:	00000004 	0x00000004
1c002260:	000404d9 	alsl.w	$r25,$r6,$r1,0x1
1c002264:	04da0000 	csrrd	$r0,0x3680
1c002268:	00000004 	0x00000004
1c00226c:	000404db 	alsl.w	$r27,$r6,$r1,0x1
1c002270:	04dc0000 	csrrd	$r0,0x3700
1c002274:	00000004 	0x00000004
1c002278:	000404dd 	alsl.w	$r29,$r6,$r1,0x1
1c00227c:	04de0000 	csrrd	$r0,0x3780
1c002280:	00000004 	0x00000004
1c002284:	000404df 	alsl.w	$r31,$r6,$r1,0x1
1c002288:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c00228c:	00000060 	0x00000060
1c002290:	000001e8 	0x000001e8
1c002294:	1c000c50 	pcaddu12i	$r16,98(0x62)
1c002298:	0000022c 	0x0000022c
1c00229c:	00000404 	0x00000404
1c0022a0:	04600e00 	csrxchg	$r0,$r16,0x1803
1c0022a4:	0000001c 	0x0000001c
1c0022a8:	09810d9a 	0x09810d9a
1c0022ac:	0b980a97 	0x0b980a97
1c0022b0:	0e9b0c99 	0x0e9b0c99
1c0022b4:	b0040f9c 	0xb0040f9c
1c0022b8:	0a000000 	0x0a000000
1c0022bc:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
1c0022c0:	04d70000 	csrrd	$r0,0x35c0
1c0022c4:	00000004 	0x00000004
1c0022c8:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
1c0022cc:	04d90000 	csrrd	$r0,0x3640
1c0022d0:	00000004 	0x00000004
1c0022d4:	000404da 	alsl.w	$r26,$r6,$r1,0x1
1c0022d8:	04db0000 	csrrd	$r0,0x36c0
1c0022dc:	00000004 	0x00000004
1c0022e0:	000804dc 	bytepick.w	$r28,$r6,$r1,0x0
1c0022e4:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c0022e8:	00000404 	0x00000404
1c0022ec:	00000b00 	0x00000b00
1c0022f0:	00000028 	0x00000028
1c0022f4:	0000024c 	0x0000024c
1c0022f8:	1c000e7c 	pcaddu12i	$r28,115(0x73)
1c0022fc:	00000028 	0x00000028
1c002300:	00000404 	0x00000404
1c002304:	04100e00 	csrxchg	$r0,$r16,0x403
1c002308:	00000004 	0x00000004
1c00230c:	18040199 	pcaddi	$r25,8204(0x200c)
1c002310:	d9000000 	0xd9000000
1c002314:	00000404 	0x00000404
1c002318:	00000e00 	0x00000e00
1c00231c:	00000028 	0x00000028
1c002320:	00000278 	0x00000278
1c002324:	1c000ea4 	pcaddu12i	$r4,117(0x75)
1c002328:	00000024 	0x00000024
1c00232c:	00000404 	0x00000404
1c002330:	04100e00 	csrxchg	$r0,$r16,0x403
1c002334:	00000004 	0x00000004
1c002338:	14040199 	lu12i.w	$r25,8204(0x200c)
1c00233c:	d9000000 	0xd9000000
1c002340:	00000404 	0x00000404
1c002344:	00000e00 	0x00000e00
1c002348:	00000040 	0x00000040
1c00234c:	000002a4 	0x000002a4
1c002350:	1c000ec8 	pcaddu12i	$r8,118(0x76)
1c002354:	00000074 	0x00000074
1c002358:	00000404 	0x00000404
1c00235c:	04100e00 	csrxchg	$r0,$r16,0x403
1c002360:	00000010 	0x00000010
1c002364:	02970181 	addi.w	$r1,$r12,1472(0x5c0)
1c002368:	04990398 	csrxchg	$r24,$r28,0x2640
1c00236c:	00004804 	bitrev.4b	$r4,$r0
1c002370:	0404c100 	csrxchg	$r0,$r8,0x130
1c002374:	d7000000 	0xd7000000
1c002378:	00000404 	0x00000404
1c00237c:	0404d800 	csrrd	$r0,0x136
1c002380:	d9000000 	0xd9000000
1c002384:	00000804 	0x00000804
1c002388:	00000e00 	0x00000e00
1c00238c:	00000028 	0x00000028
1c002390:	000002e8 	0x000002e8
1c002394:	1c000f3c 	pcaddu12i	$r28,121(0x79)
1c002398:	0000002c 	0x0000002c
1c00239c:	00000404 	0x00000404
1c0023a0:	04100e00 	csrxchg	$r0,$r16,0x403
1c0023a4:	00000004 	0x00000004
1c0023a8:	18040181 	pcaddi	$r1,8204(0x200c)
1c0023ac:	c1000000 	0xc1000000
1c0023b0:	00000804 	0x00000804
1c0023b4:	00000e00 	0x00000e00
1c0023b8:	00000048 	0x00000048
1c0023bc:	00000314 	0x00000314
1c0023c0:	1c000f68 	pcaddu12i	$r8,123(0x7b)
1c0023c4:	000000e8 	0x000000e8
1c0023c8:	00000404 	0x00000404
1c0023cc:	04600e00 	csrxchg	$r0,$r16,0x1803
1c0023d0:	00000010 	0x00000010
1c0023d4:	01810297 	0x01810297
1c0023d8:	04990398 	csrxchg	$r24,$r28,0x2640
1c0023dc:	00008804 	0x00008804
1c0023e0:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c0023e4:	00000004 	0x00000004
1c0023e8:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c0023ec:	04d80000 	csrrd	$r0,0x3600
1c0023f0:	00000004 	0x00000004
1c0023f4:	000804d9 	bytepick.w	$r25,$r6,$r1,0x0
1c0023f8:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c0023fc:	00000404 	0x00000404
1c002400:	00000b00 	0x00000b00
1c002404:	0000000c 	0x0000000c
1c002408:	00000360 	0x00000360
1c00240c:	1c001050 	pcaddu12i	$r16,130(0x82)
1c002410:	00000030 	0x00000030
1c002414:	0000000c 	0x0000000c
1c002418:	00000370 	0x00000370
1c00241c:	1c001080 	pcaddu12i	$r0,132(0x84)
1c002420:	0000003c 	0x0000003c
1c002424:	0000000c 	0x0000000c
1c002428:	00000380 	0x00000380
1c00242c:	1c0010bc 	pcaddu12i	$r28,133(0x85)
1c002430:	0000001c 	0x0000001c
1c002434:	0000000c 	0x0000000c
1c002438:	00000390 	0x00000390
1c00243c:	1c0010d8 	pcaddu12i	$r24,134(0x86)
1c002440:	00000028 	0x00000028
1c002444:	0000001c 	0x0000001c
1c002448:	000003a0 	0x000003a0
1c00244c:	1c001100 	pcaddu12i	$r0,136(0x88)
1c002450:	00000068 	0x00000068
1c002454:	00004c04 	bitrev.8b	$r4,$r0
1c002458:	04100e00 	csrxchg	$r0,$r16,0x403
1c00245c:	00000014 	0x00000014
1c002460:	0000000e 	0x0000000e
1c002464:	0000000c 	0x0000000c
1c002468:	000003c0 	0x000003c0
1c00246c:	1c001168 	pcaddu12i	$r8,139(0x8b)
1c002470:	0000002c 	0x0000002c
1c002474:	0000000c 	0x0000000c
1c002478:	000003d0 	0x000003d0
1c00247c:	1c001194 	pcaddu12i	$r20,140(0x8c)
1c002480:	00000028 	0x00000028
1c002484:	0000000c 	0x0000000c
1c002488:	000003e0 	0x000003e0
1c00248c:	1c0011bc 	pcaddu12i	$r28,141(0x8d)
1c002490:	0000001c 	0x0000001c
1c002494:	0000000c 	0x0000000c
1c002498:	000003f0 	0x000003f0
1c00249c:	1c0011d8 	pcaddu12i	$r24,142(0x8e)
1c0024a0:	00000024 	0x00000024
1c0024a4:	0000000c 	0x0000000c
1c0024a8:	00000400 	0x00000400
1c0024ac:	1c0011fc 	pcaddu12i	$r28,143(0x8f)
1c0024b0:	00000054 	0x00000054
1c0024b4:	0000001c 	0x0000001c
1c0024b8:	00000410 	0x00000410
1c0024bc:	1c001250 	pcaddu12i	$r16,146(0x92)
1c0024c0:	00000058 	0x00000058
1c0024c4:	00003c04 	revb.d	$r4,$r0
1c0024c8:	04100e00 	csrxchg	$r0,$r16,0x403
1c0024cc:	00000014 	0x00000014
1c0024d0:	0000000e 	0x0000000e
1c0024d4:	0000000c 	0x0000000c
1c0024d8:	00000430 	0x00000430
1c0024dc:	1c0012a8 	pcaddu12i	$r8,149(0x95)
1c0024e0:	00000018 	0x00000018
1c0024e4:	00000028 	0x00000028
1c0024e8:	00000440 	0x00000440
1c0024ec:	1c0012c0 	pcaddu12i	$r0,150(0x96)
1c0024f0:	0000001c 	0x0000001c
1c0024f4:	00000404 	0x00000404
1c0024f8:	04100e00 	csrxchg	$r0,$r16,0x403
1c0024fc:	00000004 	0x00000004
1c002500:	0c040199 	0x0c040199
1c002504:	d9000000 	0xd9000000
1c002508:	00000404 	0x00000404
1c00250c:	00000e00 	0x00000e00
1c002510:	0000000c 	0x0000000c
1c002514:	0000046c 	0x0000046c
1c002518:	1c0012dc 	pcaddu12i	$r28,150(0x96)
1c00251c:	00000004 	0x00000004
1c002520:	0000000c 	0x0000000c
1c002524:	0000047c 	0x0000047c
1c002528:	1c0012e0 	pcaddu12i	$r0,151(0x97)
1c00252c:	00000008 	0x00000008
1c002530:	00000028 	0x00000028
1c002534:	0000048c 	0x0000048c
1c002538:	1c0012e8 	pcaddu12i	$r8,151(0x97)
1c00253c:	00000084 	0x00000084
1c002540:	00000404 	0x00000404
1c002544:	04100e00 	csrxchg	$r0,$r16,0x403
1c002548:	00000004 	0x00000004
1c00254c:	60040199 	blt	$r12,$r25,1024(0x400) # 1c00294c <table+0x380>
1c002550:	d9000000 	0xd9000000
1c002554:	00001804 	cto.w	$r4,$r0
1c002558:	00000e00 	0x00000e00
1c00255c:	0000000c 	0x0000000c
1c002560:	000004b8 	0x000004b8
1c002564:	1c00136c 	pcaddu12i	$r12,155(0x9b)
1c002568:	00000004 	0x00000004
1c00256c:	00000028 	0x00000028
1c002570:	000004c8 	0x000004c8
1c002574:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002578:	00000024 	0x00000024
1c00257c:	00000404 	0x00000404
1c002580:	04100e00 	csrxchg	$r0,$r16,0x403
1c002584:	00000004 	0x00000004
1c002588:	10040199 	addu16i.d	$r25,$r12,256(0x100)
1c00258c:	d9000000 	0xd9000000
1c002590:	00000804 	0x00000804
1c002594:	00000e00 	0x00000e00
1c002598:	00000028 	0x00000028
1c00259c:	000004f4 	0x000004f4
1c0025a0:	1c001394 	pcaddu12i	$r20,156(0x9c)
1c0025a4:	00000030 	0x00000030
1c0025a8:	00000404 	0x00000404
1c0025ac:	04100e00 	csrxchg	$r0,$r16,0x403
1c0025b0:	00000004 	0x00000004
1c0025b4:	10040199 	addu16i.d	$r25,$r12,256(0x100)
1c0025b8:	d9000000 	0xd9000000
1c0025bc:	00001404 	clz.w	$r4,$r0
1c0025c0:	00000e00 	0x00000e00

Disassembly of section .bss:

1c0025c4 <findme>:
1c0025c4:	00000000 	0x00000000

1c0025c8 <len>:
1c0025c8:	00000000 	0x00000000

1c0025cc <table>:
	...

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
  94:	00000270 	0x00000270
	...
  a0:	0000001c 	0x0000001c
  a4:	0ddd0002 	0x0ddd0002
  a8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  ac:	00000000 	0x00000000
  b0:	1c0012c0 	pcaddu12i	$r0,150(0x96)
  b4:	00000104 	0x00000104
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
 1c8:	0000000c 	0x0000000c
 1cc:	000001b8 	0x000001b8
 1d0:	1c001050 	pcaddu12i	$r16,130(0x82)
 1d4:	00000030 	0x00000030
 1d8:	0000000c 	0x0000000c
 1dc:	000001b8 	0x000001b8
 1e0:	1c001080 	pcaddu12i	$r0,132(0x84)
 1e4:	0000003c 	0x0000003c
 1e8:	0000000c 	0x0000000c
 1ec:	000001b8 	0x000001b8
 1f0:	1c0010bc 	pcaddu12i	$r28,133(0x85)
 1f4:	0000001c 	0x0000001c
 1f8:	0000000c 	0x0000000c
 1fc:	000001b8 	0x000001b8
 200:	1c0010d8 	pcaddu12i	$r24,134(0x86)
 204:	00000028 	0x00000028
 208:	0000001c 	0x0000001c
 20c:	000001b8 	0x000001b8
 210:	1c001100 	pcaddu12i	$r0,136(0x88)
 214:	00000068 	0x00000068
 218:	00004c04 	bitrev.8b	$r4,$r0
 21c:	04100e00 	csrxchg	$r0,$r16,0x403
 220:	00000014 	0x00000014
 224:	0000000e 	0x0000000e
 228:	0000000c 	0x0000000c
 22c:	000001b8 	0x000001b8
 230:	1c001168 	pcaddu12i	$r8,139(0x8b)
 234:	0000002c 	0x0000002c
 238:	0000000c 	0x0000000c
 23c:	000001b8 	0x000001b8
 240:	1c001194 	pcaddu12i	$r20,140(0x8c)
 244:	00000028 	0x00000028
 248:	0000000c 	0x0000000c
 24c:	000001b8 	0x000001b8
 250:	1c0011bc 	pcaddu12i	$r28,141(0x8d)
 254:	0000001c 	0x0000001c
 258:	0000000c 	0x0000000c
 25c:	000001b8 	0x000001b8
 260:	1c0011d8 	pcaddu12i	$r24,142(0x8e)
 264:	00000024 	0x00000024
 268:	0000000c 	0x0000000c
 26c:	000001b8 	0x000001b8
 270:	1c0011fc 	pcaddu12i	$r28,143(0x8f)
 274:	00000054 	0x00000054
 278:	0000001c 	0x0000001c
 27c:	000001b8 	0x000001b8
 280:	1c001250 	pcaddu12i	$r16,146(0x92)
 284:	00000058 	0x00000058
 288:	00003c04 	revb.d	$r4,$r0
 28c:	04100e00 	csrxchg	$r0,$r16,0x403
 290:	00000014 	0x00000014
 294:	0000000e 	0x0000000e
 298:	0000000c 	0x0000000c
 29c:	000001b8 	0x000001b8
 2a0:	1c0012a8 	pcaddu12i	$r8,149(0x95)
 2a4:	00000018 	0x00000018
 2a8:	0000000c 	0x0000000c
 2ac:	ffffffff 	0xffffffff
 2b0:	7c010003 	0x7c010003
 2b4:	00030c01 	0x00030c01
 2b8:	00000028 	0x00000028
 2bc:	000002a8 	0x000002a8
 2c0:	1c0012c0 	pcaddu12i	$r0,150(0x96)
 2c4:	0000001c 	0x0000001c
 2c8:	00000404 	0x00000404
 2cc:	04100e00 	csrxchg	$r0,$r16,0x403
 2d0:	00000004 	0x00000004
 2d4:	0c040199 	0x0c040199
 2d8:	d9000000 	0xd9000000
 2dc:	00000404 	0x00000404
 2e0:	00000e00 	0x00000e00
 2e4:	0000000c 	0x0000000c
 2e8:	000002a8 	0x000002a8
 2ec:	1c0012dc 	pcaddu12i	$r28,150(0x96)
 2f0:	00000004 	0x00000004
 2f4:	0000000c 	0x0000000c
 2f8:	000002a8 	0x000002a8
 2fc:	1c0012e0 	pcaddu12i	$r0,151(0x97)
 300:	00000008 	0x00000008
 304:	00000028 	0x00000028
 308:	000002a8 	0x000002a8
 30c:	1c0012e8 	pcaddu12i	$r8,151(0x97)
 310:	00000084 	0x00000084
 314:	00000404 	0x00000404
 318:	04100e00 	csrxchg	$r0,$r16,0x403
 31c:	00000004 	0x00000004
 320:	60040199 	blt	$r12,$r25,1024(0x400) # 720 <data_size-0x5c4>
 324:	d9000000 	0xd9000000
 328:	00001804 	cto.w	$r4,$r0
 32c:	00000e00 	0x00000e00
 330:	0000000c 	0x0000000c
 334:	000002a8 	0x000002a8
 338:	1c00136c 	pcaddu12i	$r12,155(0x9b)
 33c:	00000004 	0x00000004
 340:	00000028 	0x00000028
 344:	000002a8 	0x000002a8
 348:	1c001370 	pcaddu12i	$r16,155(0x9b)
 34c:	00000024 	0x00000024
 350:	00000404 	0x00000404
 354:	04100e00 	csrxchg	$r0,$r16,0x403
 358:	00000004 	0x00000004
 35c:	10040199 	addu16i.d	$r25,$r12,256(0x100)
 360:	d9000000 	0xd9000000
 364:	00000804 	0x00000804
 368:	00000e00 	0x00000e00
 36c:	00000028 	0x00000028
 370:	000002a8 	0x000002a8
 374:	1c001394 	pcaddu12i	$r20,156(0x9c)
 378:	00000030 	0x00000030
 37c:	00000404 	0x00000404
 380:	04100e00 	csrxchg	$r0,$r16,0x403
 384:	00000004 	0x00000004
 388:	10040199 	addu16i.d	$r25,$r12,256(0x100)
 38c:	d9000000 	0xd9000000
 390:	00001404 	clz.w	$r4,$r0
 394:	00000e00 	0x00000e00

Disassembly of section .debug_info:

00000000 <.debug_info>:
       0:	00000312 	0x00000312
       4:	00000004 	0x00000004
       8:	01040000 	0x01040000
       c:	20554e47 	ll.w	$r7,$r18,21836(0x554c)
      10:	20373143 	ll.w	$r3,$r10,14128(0x3730)
      14:	2e332e38 	0x2e332e38
      18:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 12d38 <data_size+0x12054>
      1c:	3d696261 	0x3d696261
      20:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
      24:	2d207332 	0x2d207332
      28:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7288 <_stack+0xe3fe5218>
      2c:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff6c68 <_stack+0xe3fe4bf8>
      30:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 1679c <data_size+0x15ab8>
      34:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
      38:	2d207232 	0x2d207232
      3c:	7570666d 	0x7570666d
      40:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe6fac <_stack+0xe3fd4f3c>
      44:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 12d64 <data_size+0x12080>
      48:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 6fb4 <data_size+0x62d0>
      4c:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe3db8 <_stack+0xe3fd1d48>
      50:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 16dc0 <data_size+0x160dc>
      54:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 12d74 <data_size+0x12090>
      58:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 16ecc <data_size+0x161e8>
      5c:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff6fc8 <_stack+0xe3fe4f58>
      60:	7261676e 	0x7261676e
      64:	32336863 	0x32336863
      68:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff2d88 <_stack+0xe3fe0d18>
      6c:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
      70:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe669c <_stack+0xe3fd462c>
      74:	75622d6f 	0x75622d6f
      78:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 174e4 <data_size+0x16800>
      7c:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe2d9c <_stack+0xe3fd0d2c>
      80:	702d6f6e 	0x702d6f6e
      84:	0c006369 	0x0c006369
      88:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe69f8 <_stack+0xe3fd4988>
      8c:	632e6674 	blt	$r19,$r20,-53660(0x32e64) # ffff2ef0 <_stack+0xe3fe0e80>
      90:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff68bc <_stack+0xe3fe484c>
      94:	772f656d 	0x772f656d
      98:	772f7477 	0x772f7477
      9c:	2f6b726f 	0x2f6b726f
      a0:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7304 <_stack+0xe3fd5294>
      a4:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7608 <_stack+0xe3fd5598>
      a8:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 16cd4 <data_size+0x15ff0>
      ac:	0c500062 	vfcmp.caf.s	$vr2,$vr3,$vr0
      b0:	022c1c00 	slti	$r0,$r0,-1273(0xb07)
      b4:	00000000 	0x00000000
      b8:	04020000 	csrrd	$r0,0x80
      bc:	75070403 	xvssran.hu.w	$xr3,$xr0,$xr1
      c0:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff6a30 <_stack+0xe3fe49c0>
      c4:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
      c8:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
      cc:	6c070403 	bgeu	$r0,$r3,1796(0x704) # 7d0 <data_size-0x514>
      d0:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
      d4:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17440 <data_size+0x1675c>
      d8:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6644 <data_size+0x5960>
      dc:	746e6920 	0x746e6920
      e0:	72700400 	0x72700400
      e4:	66746e69 	bge	$r19,$r9,-101268(0x2746c) # fffe7550 <_stack+0xe3fd54e0>
      e8:	05010100 	0x05010100
      ec:	000002d1 	0x000002d1
      f0:	1c000c50 	pcaddu12i	$r16,98(0x62)
      f4:	0000022c 	0x0000022c
      f8:	02d19c01 	addi.d	$r1,$r0,1127(0x467)
      fc:	66050000 	bge	$r0,$r0,-129792(0x20500) # fffe05fc <_stack+0xe3fce58c>
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
     158:	61676109 	blt	$r8,$r9,92000(0x16760) # 168b8 <data_size+0x15bd4>
     15c:	01006e69 	0x01006e69
     160:	0cfc0110 	0x0cfc0110
     164:	180a1c00 	pcaddi	$r0,20704(0x50e0)
     168:	79000000 	0x79000000
     16c:	0b000002 	0x0b000002
     170:	73747570 	0x73747570
     174:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe6ae4 <_stack+0xe3fd4a74>
     178:	14010067 	lu12i.w	$r7,2051(0x803)
     17c:	0002d105 	0x0002d105
     180:	00018700 	asrtgt.d	$r24,$r1
     184:	0c000600 	0x0c000600
     188:	00000000 	0x00000000
     18c:	d1051901 	0xd1051901
     190:	99000002 	0x99000002
     194:	06000001 	cacop	0x1,$r0,0
     198:	72700b00 	0x72700b00
     19c:	62746e69 	blt	$r19,$r9,-101268(0x2746c) # fffe7608 <_stack+0xe3fd5598>
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
     214:	57010e00 	bl	-134020852(0x803010c) # f8030320 <_stack+0xdc01e2b0>
     218:	0d003001 	fsel	$f1,$f0,$f12,$fcc0
     21c:	1c000e24 	pcaddu12i	$r4,113(0x71)
     220:	000002f1 	0x000002f1
     224:	00000233 	0x00000233
     228:	0156010e 	0x0156010e
     22c:	57010e40 	bl	-117243636(0x903010c) # f9030338 <_stack+0xdd01e2c8>
     230:	0f003001 	0x0f003001
     234:	1c000e40 	pcaddu12i	$r0,114(0x72)
     238:	00000309 	0x00000309
     23c:	000e540d 	bytepick.d	$r13,$r0,$r21,0x4
     240:	0002f11c 	0x0002f11c
     244:	00025400 	0x00025400
     248:	56010e00 	bl	-134086388(0x802010c) # f8020354 <_stack+0xdc00e2e4>
     24c:	010e3a01 	0x010e3a01
     250:	00300157 	0x00300157
     254:	000e680d 	bytepick.d	$r13,$r0,$r26,0x4
     258:	0002fd1c 	0x0002fd1c
     25c:	00026800 	0x00026800
     260:	54010e00 	bl	-134217460(0x800010c) # f800036c <_stack+0xdbfee2fc>
     264:	00250802 	crc.w.w.w	$r2,$r0,$r2
     268:	000e7810 	bytepick.d	$r16,$r0,$r30,0x4
     26c:	0002fd1c 	0x0002fd1c
     270:	54010e00 	bl	-134217460(0x800010c) # f800037c <_stack+0xdbfee30c>
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
     2e0:	61686306 	blt	$r24,$r6,92256(0x16860) # 16b40 <data_size+0x15e5c>
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
     330:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe649c <_stack+0xe3fd442c>
     334:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 6c70 <data_size+0x5f8c>
     338:	73323370 	0x73323370
     33c:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 17068 <data_size+0x16384>
     340:	3d686372 	0x3d686372
     344:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe72b0 <_stack+0xe3fd5240>
     348:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff75a8 <_stack+0xe3fe5538>
     34c:	72323368 	0x72323368
     350:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe707c <_stack+0xe3fd500c>
     354:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe40c8 <_stack+0xe3fd2058>
     358:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
     35c:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 166c8 <data_size+0x159e4>
     360:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 68c4 <data_size+0x5be0>
     364:	726f6e3d 	0x726f6e3d
     368:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
     36c:	75746d2d 	0x75746d2d
     370:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 40d4 <data_size+0x33f0>
     374:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff71e0 <_stack+0xe3fe5170>
     378:	68637261 	bltu	$r19,$r1,25456(0x6370) # 66e8 <data_size+0x5a04>
     37c:	20723233 	ll.w	$r19,$r17,29232(0x7230)
     380:	2d20672d 	0x2d20672d
     384:	2d20324f 	0x2d20324f
     388:	2d6f6e66 	0x2d6f6e66
     38c:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 6d00 <data_size+0x601c>
     390:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
     394:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff71f8 <_stack+0xe3fe5188>
     398:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff6d08 <_stack+0xe3fe4c98>
     39c:	75700c00 	0x75700c00
     3a0:	61686374 	blt	$r27,$r20,92256(0x16860) # 16c00 <data_size+0x15f1c>
     3a4:	00632e72 	bstrins.w	$r18,$r19,0x3,0xb
     3a8:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 17310 <data_size+0x1662c>
     3ac:	77772f65 	0x77772f65
     3b0:	6f772f74 	bgeu	$r27,$r20,-35028(0x3772c) # ffff7adc <_stack+0xe3fe5a6c>
     3b4:	702f6b72 	vaddwev.d.wu	$vr18,$vr27,$vr26
     3b8:	5f667265 	bne	$r19,$r5,-39312(0x36670) # ffff6a28 <_stack+0xe3fe49b8>
     3bc:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff7230 <_stack+0xe3fe51c0>
     3c0:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe6d2c <_stack+0xe3fd4cbc>
     3c4:	000e7c00 	bytepick.d	$r0,$r0,$r31,0x4
     3c8:	00004c1c 	bitrev.8b	$r28,$r0
     3cc:	00047500 	alsl.w	$r0,$r8,$r29,0x1
     3d0:	07040200 	0x07040200
     3d4:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17740 <data_size+0x16a5c>
     3d8:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6944 <data_size+0x5c60>
     3dc:	746e6920 	0x746e6920
     3e0:	07040200 	0x07040200
     3e4:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff7250 <_stack+0xe3fe51e0>
     3e8:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
     3ec:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 17250 <data_size+0x1656c>
     3f0:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe6d10 <_stack+0xe3fd4ca0>
     3f4:	1c030074 	pcaddu12i	$r20,6147(0x1803)
     3f8:	01000000 	0x01000000
     3fc:	f8010607 	0xf8010607
     400:	04000000 	csrrd	$r0,0x0
     404:	07010063 	0x07010063
     408:	0000f806 	0x0000f806
     40c:	04020000 	csrrd	$r0,0x80
     410:	746e6905 	0x746e6905
     414:	75700500 	0x75700500
     418:	61686374 	blt	$r27,$r20,92256(0x16860) # 16c78 <data_size+0x15f94>
     41c:	01010072 	fadd.d	$f18,$f3,$f0
     420:	0000f805 	0x0000f805
     424:	000e7c00 	bytepick.d	$r0,$r0,$r31,0x4
     428:	0000281c 	cto.d	$r28,$r0
     42c:	589c0100 	beq	$r8,$r0,39936(0x9c00) # a02c <data_size+0x9348>
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
     480:	54010000 	bl	256(0x100) # 580 <data_size-0x764>
     484:	02160000 	slti	$r0,$r0,1408(0x580)
     488:	00040000 	alsl.w	$r0,$r0,$r0,0x1
     48c:	000001df 	0x000001df
     490:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
     494:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
     498:	2e382037 	0x2e382037
     49c:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
     4a0:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe660c <_stack+0xe3fd459c>
     4a4:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 6de0 <data_size+0x60fc>
     4a8:	73323370 	0x73323370
     4ac:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 171d8 <data_size+0x164f4>
     4b0:	3d686372 	0x3d686372
     4b4:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7420 <_stack+0xe3fd53b0>
     4b8:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7718 <_stack+0xe3fe56a8>
     4bc:	72323368 	0x72323368
     4c0:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe71ec <_stack+0xe3fd517c>
     4c4:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe4238 <_stack+0xe3fd21c8>
     4c8:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
     4cc:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 16838 <data_size+0x15b54>
     4d0:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 6a34 <data_size+0x5d50>
     4d4:	726f6e3d 	0x726f6e3d
     4d8:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
     4dc:	75746d2d 	0x75746d2d
     4e0:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 4244 <data_size+0x3560>
     4e4:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7350 <_stack+0xe3fe52e0>
     4e8:	68637261 	bltu	$r19,$r1,25456(0x6370) # 6858 <data_size+0x5b74>
     4ec:	20723233 	ll.w	$r19,$r17,29232(0x7230)
     4f0:	2d20672d 	0x2d20672d
     4f4:	2d20324f 	0x2d20324f
     4f8:	2d6f6e66 	0x2d6f6e66
     4fc:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 6e70 <data_size+0x618c>
     500:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
     504:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff7368 <_stack+0xe3fe52f8>
     508:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff6e78 <_stack+0xe3fe4e08>
     50c:	75700c00 	0x75700c00
     510:	632e7374 	blt	$r27,$r20,-53648(0x32e70) # ffff3380 <_stack+0xe3fe1310>
     514:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff6d40 <_stack+0xe3fe4cd0>
     518:	772f656d 	0x772f656d
     51c:	772f7477 	0x772f7477
     520:	2f6b726f 	0x2f6b726f
     524:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7788 <_stack+0xe3fd5718>
     528:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7a8c <_stack+0xe3fd5a1c>
     52c:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 17158 <data_size+0x16474>
     530:	0ec80062 	0x0ec80062
     534:	00a01c00 	bstrins.d	$r0,$r0,0x20,0x7
     538:	05270000 	0x05270000
     53c:	04020000 	csrrd	$r0,0x80
     540:	736e7507 	vssrarni.du.q	$vr7,$vr8,0x1d
     544:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 173a8 <data_size+0x166c4>
     548:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe6e68 <_stack+0xe3fd4df8>
     54c:	04020074 	csrxchg	$r20,$r3,0x80
     550:	6e6f6c07 	bgeu	$r0,$r7,-102548(0x26f6c) # fffe74bc <_stack+0xe3fd544c>
     554:	6e752067 	bgeu	$r3,$r7,-101088(0x27520) # fffe7a74 <_stack+0xe3fd5a04>
     558:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6cc0 <_stack+0xe3fd4c50>
     55c:	69206465 	bltu	$r3,$r5,73828(0x12064) # 125c0 <data_size+0x118dc>
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
     59c:	48070006 	bceqz	$fcc0,1574656(0x180700) # 180c9c <data_size+0x17ffb8>
     5a0:	651c000f 	bge	$r0,$r15,72704(0x11c00) # 121a0 <data_size+0x114bc>
     5a4:	2d000001 	0x2d000001
     5a8:	08000001 	0x08000001
     5ac:	f3035401 	0xf3035401
     5b0:	07005401 	0x07005401
     5b4:	1c000f50 	pcaddu12i	$r16,122(0x7a)
     5b8:	0000020d 	0x0000020d
     5bc:	00000140 	0x00000140
     5c0:	01540108 	0x01540108
     5c4:	5809003d 	beq	$r1,$r29,2304(0x900) # ec4 <data_size+0x1e0>
     5c8:	0d1c000f 	vbitsel.v	$vr15,$vr0,$vr0,$vr24
     5cc:	08000002 	0x08000002
     5d0:	3a015401 	0x3a015401
     5d4:	04020000 	csrrd	$r0,0x80
     5d8:	746e6905 	0x746e6905
     5dc:	5d040a00 	bne	$r16,$r0,66568(0x10408) # 109e4 <data_size+0xfd00>
     5e0:	02000001 	slti	$r1,$r0,0
     5e4:	68630601 	bltu	$r16,$r1,25348(0x6304) # 68e8 <data_size+0x5c04>
     5e8:	03007261 	lu52i.d	$r1,$r19,28(0x1c)
     5ec:	73747570 	0x73747570
     5f0:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe6f60 <_stack+0xe3fd4ef0>
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
     61c:	5d060301 	bne	$r24,$r1,67072(0x10600) # 10c1c <data_size+0xff38>
     620:	68000001 	bltu	$r0,$r1,0 # 620 <data_size-0x6c4>
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
     650:	50100601 	b	-133951484(0x8041004) # f8041654 <_stack+0xdc02f5e4>
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
     6b8:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 133d8 <data_size+0x126f4>
     6bc:	3d696261 	0x3d696261
     6c0:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
     6c4:	2d207332 	0x2d207332
     6c8:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7928 <_stack+0xe3fe58b8>
     6cc:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff7308 <_stack+0xe3fe5298>
     6d0:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 16e3c <data_size+0x16158>
     6d4:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
     6d8:	2d207232 	0x2d207232
     6dc:	7570666d 	0x7570666d
     6e0:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe764c <_stack+0xe3fd55dc>
     6e4:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 13404 <data_size+0x12720>
     6e8:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 7654 <data_size+0x6970>
     6ec:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe4458 <_stack+0xe3fd23e8>
     6f0:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 17460 <data_size+0x1677c>
     6f4:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 13414 <data_size+0x12730>
     6f8:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 1756c <data_size+0x16888>
     6fc:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff7668 <_stack+0xe3fe55f8>
     700:	7261676e 	0x7261676e
     704:	32336863 	0x32336863
     708:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff3428 <_stack+0xe3fe13b8>
     70c:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
     710:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe6d3c <_stack+0xe3fd4ccc>
     714:	75622d6f 	0x75622d6f
     718:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 17b84 <data_size+0x16ea0>
     71c:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe343c <_stack+0xe3fd13cc>
     720:	702d6f6e 	0x702d6f6e
     724:	0c006369 	0x0c006369
     728:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe7098 <_stack+0xe3fd5028>
     72c:	73616274 	vssrani.w.d	$vr20,$vr19,0x18
     730:	00632e65 	bstrins.w	$r5,$r19,0x3,0xb
     734:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 1769c <data_size+0x169b8>
     738:	77772f65 	0x77772f65
     73c:	6f772f74 	bgeu	$r27,$r20,-35028(0x3772c) # ffff7e68 <_stack+0xe3fe5df8>
     740:	702f6b72 	vaddwev.d.wu	$vr18,$vr27,$vr26
     744:	5f667265 	bne	$r19,$r5,-39312(0x36670) # ffff6db4 <_stack+0xe3fe4d44>
     748:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff75bc <_stack+0xe3fe554c>
     74c:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe70b8 <_stack+0xe3fd5048>
     750:	000f6800 	bytepick.d	$r0,$r0,$r26,0x6
     754:	0000e81c 	0x0000e81c
     758:	00069000 	alsl.wu	$r0,$r0,$r4,0x2
     75c:	07040200 	0x07040200
     760:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17acc <data_size+0x16de8>
     764:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6cd0 <data_size+0x5fec>
     768:	746e6920 	0x746e6920
     76c:	07040200 	0x07040200
     770:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff75dc <_stack+0xe3fe556c>
     774:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
     778:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 175dc <data_size+0x168f8>
     77c:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe709c <_stack+0xe3fd502c>
     780:	70030074 	vsle.w	$vr20,$vr3,$vr0
     784:	746e6972 	0x746e6972
     788:	65736162 	bge	$r11,$r2,95072(0x17360) # 17ae8 <data_size+0x16e04>
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
     7bc:	62040000 	blt	$r0,$r0,-130048(0x20400) # fffe0bbc <_stack+0xe3fceb4c>
     7c0:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
     7c4:	e2200101 	0xe2200101
     7c8:	0f000001 	0x0f000001
     7cc:	04000003 	csrrd	$r3,0x0
     7d0:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6f38 <_stack+0xe3fd4ec8>
     7d4:	29010100 	st.b	$r0,$r8,64(0x40)
     7d8:	000001e2 	0x000001e2
     7dc:	00000353 	0x00000353
     7e0:	01006905 	0x01006905
     7e4:	01e20603 	0x01e20603
     7e8:	03980000 	ori	$r0,$r0,0x600
     7ec:	6a050000 	bltu	$r0,$r0,-129792(0x20500) # fffe0cec <_stack+0xe3fcec7c>
     7f0:	08030100 	0x08030100
     7f4:	000001e2 	0x000001e2
     7f8:	000003eb 	0x000003eb
     7fc:	01006305 	0x01006305
     800:	01e20604 	0x01e20604
     804:	04380000 	csrrd	$r0,0xe00
     808:	62060000 	blt	$r0,$r0,-129536(0x20600) # fffe0e08 <_stack+0xe3fced98>
     80c:	01006675 	0x01006675
     810:	01f50705 	0x01f50705
     814:	91030000 	0x91030000
     818:	76057fb0 	0x76057fb0
     81c:	65756c61 	bge	$r3,$r1,95596(0x1756c) # 17d88 <data_size+0x170a4>
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
     88c:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff76f8 <_stack+0xe3fe5688>
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
     8b8:	051f0002 	0x051f0002
     8bc:	00040000 	alsl.w	$r0,$r0,$r0,0x1
     8c0:	0000038f 	0x0000038f
     8c4:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
     8c8:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
     8cc:	2e382037 	0x2e382037
     8d0:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
     8d4:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe6a40 <_stack+0xe3fd49d0>
     8d8:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 7214 <data_size+0x6530>
     8dc:	73323370 	0x73323370
     8e0:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 1760c <data_size+0x16928>
     8e4:	3d686372 	0x3d686372
     8e8:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7854 <_stack+0xe3fd57e4>
     8ec:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7b4c <_stack+0xe3fe5adc>
     8f0:	72323368 	0x72323368
     8f4:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe7620 <_stack+0xe3fd55b0>
     8f8:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe466c <_stack+0xe3fd25fc>
     8fc:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
     900:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 16c6c <data_size+0x15f88>
     904:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 6e68 <data_size+0x6184>
     908:	726f6e3d 	0x726f6e3d
     90c:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
     910:	75746d2d 	0x75746d2d
     914:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 4678 <data_size+0x3994>
     918:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7784 <_stack+0xe3fe5714>
     91c:	68637261 	bltu	$r19,$r1,25456(0x6370) # 6c8c <data_size+0x5fa8>
     920:	20723233 	ll.w	$r19,$r17,29232(0x7230)
     924:	2d20672d 	0x2d20672d
     928:	2d20324f 	0x2d20324f
     92c:	2d6f6e66 	0x2d6f6e66
     930:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 72a4 <data_size+0x65c0>
     934:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
     938:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff779c <_stack+0xe3fe572c>
     93c:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff72ac <_stack+0xe3fe523c>
     940:	74730c00 	xvmin.w	$xr0,$xr0,$xr3
     944:	676e6972 	bge	$r11,$r18,-37272(0x36e68) # ffff77ac <_stack+0xe3fe573c>
     948:	2f00632e 	0x2f00632e
     94c:	656d6f68 	bge	$r27,$r8,93548(0x16d6c) # 176b8 <data_size+0x169d4>
     950:	7477772f 	xvmin.wu	$xr15,$xr25,$xr29
     954:	726f772f 	0x726f772f
     958:	65702f6b 	bge	$r27,$r11,94252(0x1702c) # 17984 <data_size+0x16ca0>
     95c:	665f6672 	bge	$r19,$r18,-106652(0x25f64) # fffe68c0 <_stack+0xe3fd4850>
     960:	2f636e75 	0x2f636e75
     964:	0062696c 	bstrins.w	$r12,$r11,0x2,0x1a
     968:	00000060 	0x00000060
     96c:	00000000 	0x00000000
     970:	00000853 	0x00000853
     974:	04030402 	csrrd	$r2,0xc1
     978:	736e7507 	vssrarni.du.q	$vr7,$vr8,0x1d
     97c:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 177e0 <data_size+0x16afc>
     980:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe72a0 <_stack+0xe3fd5230>
     984:	04030074 	csrxchg	$r20,$r3,0xc0
     988:	6e6f6c07 	bgeu	$r0,$r7,-102548(0x26f6c) # fffe78f4 <_stack+0xe3fd5884>
     98c:	6e752067 	bgeu	$r3,$r7,-101088(0x27520) # fffe7eac <_stack+0xe3fd5e3c>
     990:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe70f8 <_stack+0xe3fd5088>
     994:	69206465 	bltu	$r3,$r5,73828(0x12064) # 129f8 <data_size+0x11d14>
     998:	0400746e 	csrxchg	$r14,$r3,0x1d
     99c:	657a6973 	bge	$r11,$r19,96872(0x17a68) # 18404 <data_size+0x17720>
     9a0:	0200745f 	slti	$r31,$r2,29(0x1d)
     9a4:	00bc160f 	bstrins.d	$r15,$r16,0x3c,0x5
     9a8:	62050000 	blt	$r0,$r0,-129792(0x20500) # fffe0ea8 <_stack+0xe3fcee38>
     9ac:	6f72657a 	bgeu	$r11,$r26,-36252(0x37264) # ffff7c10 <_stack+0xe3fe5ba0>
     9b0:	01570100 	0x01570100
     9b4:	0012a806 	sltu	$r6,$r0,$r10
     9b8:	0000181c 	cto.w	$r28,$r0
     9bc:	639c0100 	blt	$r8,$r0,-25600(0x39c00) # ffffa5bc <_stack+0xe3fe854c>
     9c0:	06000001 	cacop	0x1,$r0,0
     9c4:	57010073 	bl	30343424(0x1cf0100) # 1cf0ac4 <data_size+0x1cefde0>
     9c8:	00ba1201 	bstrins.d	$r1,$r16,0x3a,0x4
     9cc:	04ab0000 	csrrd	$r0,0x2ac0
     9d0:	6e060000 	bgeu	$r0,$r0,-129536(0x20600) # fffe0fd0 <_stack+0xe3fcef60>
     9d4:	01570100 	0x01570100
     9d8:	0000e11c 	0x0000e11c
     9dc:	0004cc00 	alsl.w	$r0,$r0,$r19,0x2
     9e0:	02cd0700 	addi.d	$r0,$r24,833(0x341)
     9e4:	12a80000 	addu16i.d	$r0,$r0,-22016(0xaa00)
     9e8:	00141c00 	nor	$r0,$r0,$r7
     9ec:	58010000 	beq	$r0,$r0,256(0x100) # aec <data_size-0x1f8>
     9f0:	f5080201 	0xf5080201
     9f4:	ed000002 	0xed000002
     9f8:	09000004 	0x09000004
     9fc:	000002eb 	0x000002eb
     a00:	02e10800 	addi.d	$r0,$r0,-1982(0x842)
     a04:	05120000 	0x05120000
     a08:	a80a0000 	0xa80a0000
     a0c:	141c0012 	lu12i.w	$r18,57344(0xe000)
     a10:	0b000000 	0x0b000000
     a14:	000002ff 	0x000002ff
     a18:	00005401 	bitrev.d	$r1,$r0
     a1c:	656d0c00 	bge	$r0,$r0,93452(0x16d0c) # 17728 <data_size+0x16a44>
     a20:	706d636d 	0x706d636d
     a24:	014b0100 	0x014b0100
     a28:	0001cf01 	0x0001cf01
     a2c:	00125000 	slt	$r0,$r0,$r20
     a30:	0000581c 	ext.w.h	$r28,$r0
     a34:	cf9c0100 	0xcf9c0100
     a38:	06000001 	cacop	0x1,$r0,0
     a3c:	01003176 	0x01003176
     a40:	d614014b 	0xd614014b
     a44:	33000001 	0x33000001
     a48:	06000005 	cacop	0x5,$r0,0
     a4c:	01003276 	0x01003276
     a50:	d624014b 	0xd624014b
     a54:	54000001 	bl	262144(0x40000) # 40a54 <data_size+0x3fd70>
     a58:	06000005 	cacop	0x5,$r0,0
     a5c:	4b01006e 	bceqz	$fcc3,3866880(0x3b0100) # 3b0b5c <data_size+0x3afe78>
     a60:	00e12f01 	bstrpick.d	$r1,$r24,0x21,0xb
     a64:	05750000 	0x05750000
     a68:	730d0000 	vextl.qu.du	$vr0,$vr0
     a6c:	4c010031 	jirl	$r17,$r1,256(0x100)
     a70:	01dd1101 	0x01dd1101
     a74:	05a50000 	0x05a50000
     a78:	730e0000 	0x730e0000
     a7c:	4d010032 	jirl	$r18,$r1,65792(0x10100)
     a80:	01dd1101 	0x01dd1101
     a84:	55010000 	bl	65792(0x10100) # 10b84 <data_size+0xfea0>
     a88:	05040300 	0x05040300
     a8c:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
     a90:	01dc040f 	0x01dc040f
     a94:	0f100000 	0x0f100000
     a98:	0001eb04 	0x0001eb04
     a9c:	06010300 	cacop	0x0,$r24,64(0x40)
     aa0:	72616863 	0x72616863
     aa4:	01e31100 	0x01e31100
     aa8:	6d0c0000 	bgeu	$r0,$r0,68608(0x10c00) # 116a8 <data_size+0x109c4>
     aac:	6f6d6d65 	bgeu	$r11,$r5,-37524(0x36d6c) # ffff7818 <_stack+0xe3fe57a8>
     ab0:	01006576 	0x01006576
     ab4:	ba010128 	0xba010128
     ab8:	fc000000 	0xfc000000
     abc:	541c0011 	bl	4463616(0x441c00) # 4426bc <data_size+0x4419d8>
     ac0:	01000000 	0x01000000
     ac4:	00025d9c 	0x00025d9c
     ac8:	73641200 	0x73641200
     acc:	28010074 	ld.b	$r20,$r3,64(0x40)
     ad0:	00ba0f01 	bstrins.d	$r1,$r24,0x3a,0x3
     ad4:	54010000 	bl	256(0x100) # bd4 <data_size-0x110>
     ad8:	63727306 	blt	$r24,$r6,-36240(0x37270) # ffff7d48 <_stack+0xe3fe5cd8>
     adc:	01280100 	0x01280100
     ae0:	0001d620 	asrtgt.d	$r17,$r21
     ae4:	0005c300 	alsl.w	$r0,$r24,$r16,0x4
     ae8:	006e0600 	bstrins.w	$r0,$r16,0xe,0x1
     aec:	2c012801 	vld	$vr1,$r0,74(0x4a)
     af0:	000000e1 	0x000000e1
     af4:	000005ef 	0x000005ef
     af8:	0100730d 	0x0100730d
     afc:	dd11012c 	0xdd11012c
     b00:	1c000001 	pcaddu12i	$r1,0
     b04:	0d000006 	fsel	$f6,$f0,$f0,$fcc0
     b08:	2d010064 	0x2d010064
     b0c:	025d0b01 	sltui	$r1,$r24,1858(0x742)
     b10:	06500000 	0x06500000
     b14:	0f000000 	0x0f000000
     b18:	0001e304 	0x0001e304
     b1c:	656d0c00 	bge	$r0,$r0,93452(0x16d0c) # 17828 <data_size+0x16b44>
     b20:	7970636d 	0x7970636d
     b24:	01110100 	fscaleb.d	$f0,$f8,$f0
     b28:	0000ba01 	0x0000ba01
     b2c:	0011d800 	sub.d	$r0,$r0,$r22
     b30:	0000241c 	clz.d	$r28,$r0
     b34:	cd9c0100 	0xcd9c0100
     b38:	12000002 	addu16i.d	$r2,$r0,-32768(0x8000)
     b3c:	00747364 	bstrins.w	$r4,$r27,0x14,0x1c
     b40:	0e011101 	0x0e011101
     b44:	000000ba 	0x000000ba
     b48:	73065401 	0x73065401
     b4c:	01006372 	0x01006372
     b50:	d61f0111 	0xd61f0111
     b54:	8f000001 	0x8f000001
     b58:	06000006 	cacop	0x6,$r0,0
     b5c:	1101006e 	addu16i.d	$r14,$r3,16448(0x4040)
     b60:	00e12b01 	bstrpick.d	$r1,$r24,0x21,0xa
     b64:	06b00000 	0x06b00000
     b68:	730e0000 	0x730e0000
     b6c:	01150100 	0x01150100
     b70:	0001dd11 	0x0001dd11
     b74:	0d550100 	vshuf.b	$vr0,$vr8,$vr0,$vr10
     b78:	16010064 	lu32i.d	$r4,2051(0x803)
     b7c:	025d0b01 	sltui	$r1,$r24,1858(0x742)
     b80:	06e00000 	0x06e00000
     b84:	13000000 	addu16i.d	$r0,$r0,-16384(0xc000)
     b88:	736d656d 	vssrarni.wu.d	$vr13,$vr11,0x19
     b8c:	01007465 	0x01007465
     b90:	00ba01f6 	bstrins.d	$r22,$r15,0x3a,0x0
     b94:	0a010000 	0x0a010000
     b98:	14000003 	lu12i.w	$r3,0
     b9c:	f6010073 	0xf6010073
     ba0:	0000ba0e 	0x0000ba0e
     ba4:	00631400 	bstrins.w	$r0,$r0,0x3,0x5
     ba8:	e316f601 	0xe316f601
     bac:	14000001 	lu12i.w	$r1,0
     bb0:	f601006e 	0xf601006e
     bb4:	0000e120 	0x0000e120
     bb8:	00701500 	bstrins.w	$r0,$r8,0x10,0x5
     bbc:	5d0bfa01 	bne	$r16,$r1,68600(0x10bf8) # 117b4 <data_size+0x10ad0>
     bc0:	00000002 	0x00000002
     bc4:	72747316 	0x72747316
     bc8:	646e6966 	bge	$r11,$r6,28264(0x6e68) # 7a30 <data_size+0x6d4c>
     bcc:	01880100 	0x01880100
     bd0:	0000025d 	0x0000025d
     bd4:	1c001194 	pcaddu12i	$r20,140(0x8c)
     bd8:	00000028 	0x00000028
     bdc:	03439c01 	andi	$r1,$r0,0xe7
     be0:	73170000 	0x73170000
     be4:	15880100 	lu12i.w	$r0,-245752(0xc4008)
     be8:	000001dd 	0x000001dd
     bec:	000006fe 	0x000006fe
     bf0:	01006318 	0x01006318
     bf4:	01e31d88 	0x01e31d88
     bf8:	55010000 	bl	65792(0x10100) # 10cf8 <data_size+0x10014>
     bfc:	74731600 	xvmin.w	$xr0,$xr16,$xr5
     c00:	72686372 	0x72686372
     c04:	01740100 	0x01740100
     c08:	0000025d 	0x0000025d
     c0c:	1c001168 	pcaddu12i	$r8,139(0x8b)
     c10:	0000002c 	0x0000002c
     c14:	037b9c01 	andi	$r1,$r0,0xee7
     c18:	73170000 	0x73170000
     c1c:	14740100 	lu12i.w	$r0,237576(0x3a008)
     c20:	000001dd 	0x000001dd
     c24:	0000071c 	0x0000071c
     c28:	01006318 	0x01006318
     c2c:	01e31c74 	0x01e31c74
     c30:	55010000 	bl	65792(0x10100) # 10d30 <data_size+0x1004c>
     c34:	74731600 	xvmin.w	$xr0,$xr16,$xr5
     c38:	6d636e72 	bgeu	$r19,$r18,90988(0x1636c) # 16fa4 <data_size+0x162c0>
     c3c:	64010070 	bge	$r3,$r16,256(0x100) # d3c <data_size+0x58>
     c40:	0001cf01 	0x0001cf01
     c44:	00110000 	sub.w	$r0,$r0,$r0
     c48:	0000681c 	rdtime.d	$r28,$r0
     c4c:	c69c0100 	0xc69c0100
     c50:	17000003 	lu32i.d	$r3,-524288(0x80000)
     c54:	01003173 	0x01003173
     c58:	01dd1564 	0x01dd1564
     c5c:	07450000 	0x07450000
     c60:	73170000 	0x73170000
     c64:	64010032 	bge	$r1,$r18,256(0x100) # d64 <data_size+0x80>
     c68:	0001dd25 	0x0001dd25
     c6c:	00076e00 	alsl.wu	$r0,$r16,$r27,0x3
     c70:	006e1700 	bstrins.w	$r0,$r24,0xe,0x5
     c74:	e1306401 	0xe1306401
     c78:	ad000000 	0xad000000
     c7c:	00000007 	0x00000007
     c80:	72747316 	0x72747316
     c84:	7970636e 	0x7970636e
     c88:	014d0100 	0x014d0100
     c8c:	0000025d 	0x0000025d
     c90:	1c0010d8 	pcaddu12i	$r24,134(0x86)
     c94:	00000028 	0x00000028
     c98:	04219c01 	csrrd	$r1,0x867
     c9c:	64180000 	bge	$r0,$r0,6144(0x1800) # 249c <data_size+0x17b8>
     ca0:	01007473 	0x01007473
     ca4:	025d0f4d 	sltui	$r13,$r26,1859(0x743)
     ca8:	54010000 	bl	256(0x100) # da8 <data_size+0xc4>
     cac:	63727317 	blt	$r24,$r23,-36240(0x37270) # ffff7f1c <_stack+0xe3fe5eac>
     cb0:	204d0100 	ll.w	$r0,$r8,19712(0x4d00)
     cb4:	000001dd 	0x000001dd
     cb8:	000007ee 	0x000007ee
     cbc:	6e656c17 	bgeu	$r0,$r23,-105108(0x2656c) # fffe7228 <_stack+0xe3fd51b8>
     cc0:	2c4d0100 	vst	$vr0,$r8,832(0x340)
     cc4:	000000e1 	0x000000e1
     cc8:	0000080c 	0x0000080c
     ccc:	01007019 	0x01007019
     cd0:	025d0b4e 	sltui	$r14,$r26,1858(0x742)
     cd4:	086b0000 	fmsub.d	$f0,$f0,$f0,$f22
     cd8:	16000000 	lu32i.d	$r0,0
     cdc:	63727473 	blt	$r3,$r19,-36236(0x37274) # ffff7f50 <_stack+0xe3fe5ee0>
     ce0:	01007970 	0x01007970
     ce4:	025d0137 	sltui	$r23,$r9,1856(0x740)
     ce8:	10bc0000 	addu16i.d	$r0,$r0,12032(0x2f00)
     cec:	001c1c00 	mul.w	$r0,$r0,$r7
     cf0:	9c010000 	0x9c010000
     cf4:	0000046b 	0x0000046b
     cf8:	74736418 	xvmin.w	$xr24,$xr0,$xr25
     cfc:	0e370100 	0x0e370100
     d00:	0000025d 	0x0000025d
     d04:	73175401 	0x73175401
     d08:	01006372 	0x01006372
     d0c:	01dd1f37 	0x01dd1f37
     d10:	08a10000 	fnmadd.d	$f0,$f0,$f0,$f2
     d14:	70190000 	0x70190000
     d18:	0b3b0100 	0x0b3b0100
     d1c:	0000025d 	0x0000025d
     d20:	000008bf 	0x000008bf
     d24:	74731600 	xvmin.w	$xr0,$xr16,$xr5
     d28:	656c6e72 	bge	$r19,$r18,93292(0x16c6c) # 17994 <data_size+0x16cb0>
     d2c:	2201006e 	ll.d	$r14,$r3,256(0x100)
     d30:	0000e101 	0x0000e101
     d34:	00108000 	add.d	$r0,$r0,$r0
     d38:	00003c1c 	revb.d	$r28,$r0
     d3c:	b69c0100 	0xb69c0100
     d40:	17000004 	lu32i.d	$r4,-524288(0x80000)
     d44:	22010073 	ll.d	$r19,$r3,256(0x100)
     d48:	0001dd15 	0x0001dd15
     d4c:	0008dd00 	bytepick.w	$r0,$r8,$r23,0x1
     d50:	656c1800 	bge	$r0,$r0,93208(0x16c18) # 17968 <data_size+0x16c84>
     d54:	2201006e 	ll.d	$r14,$r3,256(0x100)
     d58:	0000e11f 	0x0000e11f
     d5c:	19550100 	pcaddi	$r0,-350200(0xaa808)
     d60:	00746e63 	bstrins.w	$r3,$r19,0x14,0x1b
     d64:	e10c2301 	0xe10c2301
     d68:	22000000 	ll.d	$r0,$r0,0
     d6c:	00000009 	0x00000009
     d70:	72747316 	0x72747316
     d74:	006e656c 	bstrins.w	$r12,$r11,0xe,0x19
     d78:	e1010c01 	0xe1010c01
     d7c:	50000000 	b	0 # d7c <data_size+0x98>
     d80:	301c0010 	0x301c0010
     d84:	01000000 	0x01000000
     d88:	0004f29c 	alsl.w	$r28,$r20,$r28,0x2
     d8c:	00731700 	bstrins.w	$r0,$r24,0x13,0x5
     d90:	dd140c01 	0xdd140c01
     d94:	4d000001 	jirl	$r1,$r0,65536(0x10000)
     d98:	19000009 	pcaddi	$r9,-524288(0x80000)
     d9c:	00746e63 	bstrins.w	$r3,$r19,0x14,0x1b
     da0:	e10c0d01 	0xe10c0d01
     da4:	af000000 	0xaf000000
     da8:	00000009 	0x00000009
     dac:	0002cd1a 	0x0002cd1a
     db0:	0011bc00 	sub.d	$r0,$r0,$r15
     db4:	00001c1c 	ctz.w	$r28,$r0
     db8:	1b9c0100 	pcalau12i	$r0,-204792(0xce008)
     dbc:	000002e1 	0x000002e1
     dc0:	eb1b5401 	0xeb1b5401
     dc4:	01000002 	0x01000002
     dc8:	02f50855 	addi.d	$r21,$r2,-702(0xd42)
     dcc:	09da0000 	vfnmsub.s	$vr0,$vr0,$vr0,$vr20
     dd0:	ff1c0000 	0xff1c0000
     dd4:	48000002 	bceqz	$fcc0,524288(0x80000) # 80dd4 <data_size+0x800f0>
     dd8:	0000000a 	0x0000000a
     ddc:	0002ff00 	0x0002ff00
     de0:	34000400 	0x34000400
     de4:	04000005 	csrrd	$r5,0x0
     de8:	554e4701 	bl	-66761148(0xc054e44) # fc055c2c <_stack+0xe0043bbc>
     dec:	37314320 	0x37314320
     df0:	332e3820 	xvstelm.w	$xr0,$r1,-456(0x238),0x3
     df4:	2d20302e 	0x2d20302e
     df8:	6962616d 	bltu	$r11,$r13,90720(0x16260) # 17058 <data_size+0x16374>
     dfc:	706c693d 	0x706c693d
     e00:	20733233 	ll.w	$r19,$r17,29488(0x7330)
     e04:	72616d2d 	0x72616d2d
     e08:	6c3d6863 	bgeu	$r3,$r3,15720(0x3d68) # 4b70 <data_size+0x3e8c>
     e0c:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7c78 <_stack+0xe3fe5c08>
     e10:	68637261 	bltu	$r19,$r1,25456(0x6370) # 7180 <data_size+0x649c>
     e14:	20723233 	ll.w	$r19,$r17,29232(0x7230)
     e18:	70666d2d 	vavg.bu	$vr13,$vr9,$vr27
     e1c:	6f6e3d75 	bgeu	$r11,$r21,-37316(0x36e3c) # ffff7c58 <_stack+0xe3fe5be8>
     e20:	2d20656e 	0x2d20656e
     e24:	6f6d636d 	bgeu	$r27,$r13,-37536(0x36d60) # ffff7b84 <_stack+0xe3fe5b14>
     e28:	3d6c6564 	0x3d6c6564
     e2c:	6d726f6e 	bgeu	$r27,$r14,94828(0x1726c) # 18098 <data_size+0x173b4>
     e30:	2d206c61 	0x2d206c61
     e34:	6e75746d 	bgeu	$r3,$r13,-101004(0x27574) # fffe83a8 <_stack+0xe3fd6338>
     e38:	6f6c3d65 	bgeu	$r11,$r5,-37828(0x36c3c) # ffff7a74 <_stack+0xe3fe5a04>
     e3c:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 175a8 <data_size+0x168c4>
     e40:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
     e44:	2d207232 	0x2d207232
     e48:	4f2d2067 	jirl	$r7,$r3,-53984(0x32d20)
     e4c:	662d2032 	bge	$r1,$r18,-119520(0x22d20) # fffe3b6c <_stack+0xe3fd1afc>
     e50:	622d6f6e 	blt	$r27,$r14,-119444(0x22d6c) # fffe3bbc <_stack+0xe3fd1b4c>
     e54:	746c6975 	0x746c6975
     e58:	2d206e69 	0x2d206e69
     e5c:	2d6f6e66 	0x2d6f6e66
     e60:	00636970 	bstrins.w	$r16,$r11,0x3,0x1a
     e64:	6d69740c 	bgeu	$r0,$r12,92532(0x16974) # 177d8 <data_size+0x16af4>
     e68:	00632e65 	bstrins.w	$r5,$r19,0x3,0xb
     e6c:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 17dd4 <data_size+0x170f0>
     e70:	77772f65 	0x77772f65
     e74:	6f772f74 	bgeu	$r27,$r20,-35028(0x3772c) # ffff85a0 <_stack+0xe3fe6530>
     e78:	702f6b72 	vaddwev.d.wu	$vr18,$vr27,$vr26
     e7c:	5f667265 	bne	$r19,$r5,-39312(0x36670) # ffff74ec <_stack+0xe3fe547c>
     e80:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff7cf4 <_stack+0xe3fe5c84>
     e84:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe77f0 <_stack+0xe3fd5780>
     e88:	0012c000 	sltu	$r0,$r0,$r16
     e8c:	0001041c 	0x0001041c
     e90:	00106000 	add.w	$r0,$r0,$r24
     e94:	07040200 	0x07040200
     e98:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 18204 <data_size+0x17520>
     e9c:	64656e67 	bge	$r19,$r7,25964(0x656c) # 7408 <data_size+0x6724>
     ea0:	746e6920 	0x746e6920
     ea4:	07040200 	0x07040200
     ea8:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff7d14 <_stack+0xe3fe5ca4>
     eac:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
     eb0:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 17d14 <data_size+0x17030>
     eb4:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe77d4 <_stack+0xe3fd5764>
     eb8:	5f030074 	bne	$r3,$r20,-64768(0x30300) # ffff11b8 <_stack+0xe3fdf148>
     ebc:	636f6c63 	blt	$r3,$r3,-37012(0x36f6c) # ffff7e28 <_stack+0xe3fe5db8>
     ec0:	00745f6b 	bstrins.w	$r11,$r27,0x14,0x17
     ec4:	c8170302 	0xc8170302
     ec8:	02000000 	slti	$r0,$r0,0
     ecc:	6e690504 	bgeu	$r8,$r4,-104188(0x26904) # fffe77d0 <_stack+0xe3fd5760>
     ed0:	74040074 	xvsle.bu	$xr20,$xr3,$xr0
     ed4:	73656d69 	vssrani.wu.d	$vr9,$vr11,0x1b
     ed8:	00636570 	bstrins.w	$r16,$r11,0x3,0x19
     edc:	081f0210 	fmadd.s	$f16,$f16,$f0,$f30
     ee0:	0000014b 	0x0000014b
     ee4:	5f767405 	bne	$r0,$r5,-35212(0x37674) # ffff8558 <_stack+0xe3fe64e8>
     ee8:	00636573 	bstrins.w	$r19,$r11,0x3,0x19
     eec:	dd0b2002 	0xdd0b2002
     ef0:	00000000 	0x00000000
     ef4:	5f767405 	bne	$r0,$r5,-35212(0x37674) # ffff8568 <_stack+0xe3fe64f8>
     ef8:	6365736e 	blt	$r27,$r14,-39568(0x36570) # ffff7468 <_stack+0xe3fe53f8>
     efc:	0b210200 	0x0b210200
     f00:	000000dd 	0x000000dd
     f04:	76740504 	0x76740504
     f08:	6573755f 	bge	$r10,$r31,95092(0x17374) # 1827c <data_size+0x17598>
     f0c:	22020063 	ll.d	$r3,$r3,512(0x200)
     f10:	0000dd0b 	0x0000dd0b
     f14:	74050800 	xvsle.wu	$xr0,$xr0,$xr2
     f18:	736d5f76 	vssrarni.wu.d	$vr22,$vr27,0x17
     f1c:	02006365 	slti	$r5,$r27,24(0x18)
     f20:	00dd0b23 	bstrpick.d	$r3,$r25,0x1d,0x2
     f24:	000c0000 	bytepick.d	$r0,$r0,$r0,0x0
     f28:	74656706 	xvavg.w	$xr6,$xr24,$xr25
     f2c:	0073755f 	bstrins.w	$r31,$r10,0x13,0x1d
     f30:	c80f3c01 	0xc80f3c01
     f34:	94000000 	0x94000000
     f38:	301c0013 	0x301c0013
     f3c:	01000000 	0x01000000
     f40:	0001939c 	0x0001939c
     f44:	006e0700 	bstrins.w	$r0,$r24,0xe,0x1
     f48:	c8133e01 	0xc8133e01
     f4c:	66000000 	bge	$r0,$r0,-131072(0x20000) # fffe0f4c <_stack+0xe3fceedc>
     f50:	0800000a 	0x0800000a
     f54:	000002dc 	0x000002dc
     f58:	1c001394 	pcaddu12i	$r20,156(0x9c)
     f5c:	000000b8 	0x000000b8
     f60:	09093f01 	0x09093f01
     f64:	000000b8 	0x000000b8
     f68:	0002f00a 	0x0002f00a
     f6c:	00000000 	0x00000000
     f70:	74656706 	xvavg.w	$xr6,$xr24,$xr25
     f74:	00736e5f 	bstrins.w	$r31,$r18,0x13,0x1b
     f78:	c80f3301 	0xc80f3301
     f7c:	70000000 	vseq.b	$vr0,$vr0,$vr0
     f80:	241c0013 	ldptr.w	$r19,$r0,7168(0x1c00)
     f84:	01000000 	0x01000000
     f88:	0001db9c 	0x0001db9c
     f8c:	006e0700 	bstrins.w	$r0,$r24,0xe,0x1
     f90:	c8133501 	0xc8133501
     f94:	9d000000 	0x9d000000
     f98:	0800000a 	0x0800000a
     f9c:	000002dc 	0x000002dc
     fa0:	1c001370 	pcaddu12i	$r16,155(0x9b)
     fa4:	000000a0 	0x000000a0
     fa8:	09093601 	0x09093601
     fac:	000000a0 	0x000000a0
     fb0:	0002f00a 	0x0002f00a
     fb4:	00000000 	0x00000000
     fb8:	7465670b 	xvavg.w	$xr11,$xr24,$xr25
     fbc:	6f6c635f 	bgeu	$r26,$r31,-37792(0x36c60) # ffff7c1c <_stack+0xe3fe5bac>
     fc0:	01006b63 	0x01006b63
     fc4:	00c80f2c 	bstrpick.d	$r12,$r25,0x8,0x3
     fc8:	01fc0000 	0x01fc0000
     fcc:	6e0c0000 	bgeu	$r0,$r0,-128000(0x20c00) # fffe1bcc <_stack+0xe3fcfb5c>
     fd0:	132e0100 	addu16i.d	$r0,$r8,-13440(0xcb80)
     fd4:	000000c8 	0x000000c8
     fd8:	6c630600 	bgeu	$r16,$r0,25348(0x6304) # 72dc <data_size+0x65f8>
     fdc:	5f6b636f 	bne	$r27,$r15,-38048(0x36b60) # ffff7b3c <_stack+0xe3fe5acc>
     fe0:	74746567 	xvmax.bu	$xr7,$xr11,$xr25
     fe4:	00656d69 	bstrins.w	$r9,$r11,0x5,0x1b
     fe8:	c80f2001 	0xc80f2001
     fec:	e8000000 	0xe8000000
     ff0:	841c0012 	0x841c0012
     ff4:	01000000 	0x01000000
     ff8:	0002699c 	0x0002699c
     ffc:	65730d00 	bge	$r8,$r0,94988(0x1730c) # 18308 <data_size+0x17624>
    1000:	2001006c 	ll.w	$r12,$r3,256(0x100)
    1004:	0000ee21 	0x0000ee21
    1008:	000acb00 	0x000acb00
    100c:	6d740e00 	bgeu	$r16,$r0,95244(0x1740c) # 18418 <data_size+0x17734>
    1010:	20010070 	ll.w	$r16,$r3,256(0x100)
    1014:	00026936 	0x00026936
    1018:	07550100 	0x07550100
    101c:	2201006e 	ll.d	$r14,$r3,256(0x100)
    1020:	0000c813 	0x0000c813
    1024:	000aec00 	0x000aec00
    1028:	02dc0800 	addi.d	$r0,$r0,1794(0x702)
    102c:	12e80000 	addu16i.d	$r0,$r0,-17920(0xba00)
    1030:	00881c00 	bstrins.d	$r0,$r0,0x8,0x7
    1034:	23010000 	sc.d	$r0,$r0,256(0x100)
    1038:	00880909 	bstrins.d	$r9,$r8,0x8,0x2
    103c:	f00a0000 	0xf00a0000
    1040:	00000002 	0x00000002
    1044:	040f0000 	csrrd	$r0,0x3c0
    1048:	000000f5 	0x000000f5
    104c:	74656710 	xvavg.w	$xr16,$xr24,$xr25
    1050:	756f635f 	0x756f635f
    1054:	6d5f746e 	bgeu	$r3,$r14,89972(0x15f74) # 16fc8 <data_size+0x162e4>
    1058:	16010079 	lu32i.d	$r25,2051(0x803)
    105c:	0000c80f 	0x0000c80f
    1060:	0012e000 	sltu	$r0,$r0,$r24
    1064:	0000081c 	0x0000081c
    1068:	9f9c0100 	0x9f9c0100
    106c:	11000002 	addu16i.d	$r2,$r0,16384(0x4000)
    1070:	1801006e 	pcaddi	$r14,2051(0x803)
    1074:	0000c813 	0x0000c813
    1078:	00540100 	0x00540100
    107c:	74656710 	xvavg.w	$xr16,$xr24,$xr25
    1080:	756f635f 	0x756f635f
    1084:	0100746e 	0x0100746e
    1088:	00c80f11 	bstrpick.d	$r17,$r24,0x8,0x3
    108c:	12c00000 	addu16i.d	$r0,$r0,-20480(0xb000)
    1090:	001c1c00 	mul.w	$r0,$r0,$r7
    1094:	9c010000 	0x9c010000
    1098:	000002dc 	0x000002dc
    109c:	0002dc08 	0x0002dc08
    10a0:	0012c000 	sltu	$r0,$r0,$r16
    10a4:	0000701c 	0x0000701c
    10a8:	0d130100 	vbitsel.v	$vr0,$vr8,$vr0,$vr6
    10ac:	00007009 	0x00007009
    10b0:	02f00a00 	addi.d	$r0,$r16,-1022(0xc02)
    10b4:	00000000 	0x00000000
    10b8:	675f1200 	bge	$r16,$r0,-41200(0x35f10) # ffff6fc8 <_stack+0xe3fe4f58>
    10bc:	635f7465 	blt	$r3,$r5,-41100(0x35f74) # ffff7030 <_stack+0xe3fe4fc0>
    10c0:	746e756f 	0x746e756f
    10c4:	0f040100 	0x0f040100
    10c8:	000000c8 	0x000000c8
    10cc:	635f0c01 	blt	$r0,$r1,-41204(0x35f0c) # ffff6fd8 <_stack+0xe3fe4f68>
    10d0:	76746e6f 	0x76746e6f
    10d4:	01006c61 	0x01006c61
    10d8:	00c81306 	bstrpick.d	$r6,$r24,0x8,0x4
    10dc:	00000000 	0x00000000

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
  ec:	55010b11 	bl	-62586616(0xc450108) # fc4501f4 <_stack+0xe043e184>
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
 174:	40061201 	beqz	$r16,263696(0x40610) # 40784 <data_size+0x3faa0>
 178:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 17c:	00001301 	clo.w	$r1,$r24
 180:	03000506 	lu52i.d	$r6,$r8,1(0x1)
 184:	3b0b3a08 	0x3b0b3a08
 188:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0cc0 <data_size+0x2cffdc>
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
 258:	42911802 	beqz	$r0,692504(0xa9118) # a9370 <data_size+0xa868c>
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
 284:	55010b0c 	bl	-63897336(0xc310108) # fc31038c <_stack+0xe02fe31c>
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
 310:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0e48 <data_size+0x2d0164>
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
 398:	1755081b 	lu32i.d	$r27,-350144(0xaa840)
 39c:	17100111 	lu32i.d	$r17,-491512(0x88008)
 3a0:	0f020000 	0x0f020000
 3a4:	000b0b00 	0x000b0b00
 3a8:	00240300 	crc.w.b.w	$r0,$r24,$r0
 3ac:	0b3e0b0b 	0x0b3e0b0b
 3b0:	00000803 	0x00000803
 3b4:	03001604 	lu52i.d	$r4,$r16,5(0x5)
 3b8:	3b0b3a08 	0x3b0b3a08
 3bc:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0ef4 <data_size+0x2d0210>
 3c0:	05000013 	0x05000013
 3c4:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 3c8:	0b3a0803 	0x0b3a0803
 3cc:	0b39053b 	0x0b39053b
 3d0:	01111927 	fscaleb.d	$f7,$f9,$f6
 3d4:	18400612 	pcaddi	$r18,131120(0x20030)
 3d8:	01194297 	0x01194297
 3dc:	06000013 	cacop	0x13,$r0,0
 3e0:	08030005 	0x08030005
 3e4:	053b0b3a 	0x053b0b3a
 3e8:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 3ec:	00001702 	clz.w	$r2,$r24
 3f0:	31011d07 	0x31011d07
 3f4:	12011113 	addu16i.d	$r19,$r8,-32700(0x8044)
 3f8:	590b5806 	beq	$r0,$r6,68440(0x10b58) # 10f50 <data_size+0x1026c>
 3fc:	000b5705 	0x000b5705
 400:	00050800 	alsl.w	$r0,$r0,$r2,0x3
 404:	17021331 	lu32i.d	$r17,-520039(0x81099)
 408:	05090000 	0x05090000
 40c:	1c133100 	pcaddu12i	$r0,39304(0x9988)
 410:	0a00000b 	0x0a00000b
 414:	0111010b 	fscaleb.d	$f11,$f8,$f0
 418:	00000612 	0x00000612
 41c:	3100340b 	0x3100340b
 420:	00180213 	sra.w	$r19,$r16,$r0
 424:	012e0c00 	0x012e0c00
 428:	0803193f 	0x0803193f
 42c:	053b0b3a 	0x053b0b3a
 430:	19270b39 	pcaddi	$r25,-444327(0x93859)
 434:	01111349 	fscaleb.d	$f9,$f26,$f4
 438:	18400612 	pcaddi	$r18,131120(0x20030)
 43c:	01194297 	0x01194297
 440:	0d000013 	fsel	$f19,$f0,$f0,$fcc0
 444:	08030034 	0x08030034
 448:	053b0b3a 	0x053b0b3a
 44c:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 450:	00001702 	clz.w	$r2,$r24
 454:	0300340e 	lu52i.d	$r14,$r0,13(0xd)
 458:	3b0b3a08 	0x3b0b3a08
 45c:	490b3905 	bcnez	$fcc0,1379128(0x150b38) # 150f94 <data_size+0x1502b0>
 460:	00180213 	sra.w	$r19,$r16,$r0
 464:	000f0f00 	bytepick.d	$r0,$r24,$r3,0x6
 468:	13490b0b 	addu16i.d	$r11,$r24,-11710(0xd242)
 46c:	26100000 	ldptr.d	$r0,$r0,4096(0x1000)
 470:	11000000 	addu16i.d	$r0,$r0,16384(0x4000)
 474:	13490026 	addu16i.d	$r6,$r1,-11712(0xd240)
 478:	05120000 	0x05120000
 47c:	3a080300 	0x3a080300
 480:	39053b0b 	0x39053b0b
 484:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 488:	13000018 	addu16i.d	$r24,$r0,-16384(0xc000)
 48c:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 490:	0b3a0803 	0x0b3a0803
 494:	0b390b3b 	0x0b390b3b
 498:	13491927 	addu16i.d	$r7,$r9,-11706(0xd246)
 49c:	13010b20 	addu16i.d	$r0,$r25,-16318(0xc042)
 4a0:	05140000 	0x05140000
 4a4:	3a080300 	0x3a080300
 4a8:	390b3b0b 	0x390b3b0b
 4ac:	0013490b 	maskeqz	$r11,$r8,$r18
 4b0:	00341500 	0x00341500
 4b4:	0b3a0803 	0x0b3a0803
 4b8:	0b390b3b 	0x0b390b3b
 4bc:	00001349 	clo.w	$r9,$r26
 4c0:	3f012e16 	0x3f012e16
 4c4:	3a080319 	0x3a080319
 4c8:	390b3b0b 	0x390b3b0b
 4cc:	4919270b 	0x4919270b
 4d0:	12011113 	addu16i.d	$r19,$r8,-32700(0x8044)
 4d4:	97184006 	0x97184006
 4d8:	13011942 	addu16i.d	$r2,$r10,-16314(0xc046)
 4dc:	05170000 	0x05170000
 4e0:	3a080300 	0x3a080300
 4e4:	390b3b0b 	0x390b3b0b
 4e8:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 4ec:	18000017 	pcaddi	$r23,0
 4f0:	08030005 	0x08030005
 4f4:	0b3b0b3a 	0x0b3b0b3a
 4f8:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 4fc:	00001802 	cto.w	$r2,$r0
 500:	03003419 	lu52i.d	$r25,$r0,13(0xd)
 504:	3b0b3a08 	0x3b0b3a08
 508:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d1040 <data_size+0x2d035c>
 50c:	00170213 	sll.w	$r19,$r16,$r0
 510:	012e1a00 	0x012e1a00
 514:	01111331 	fscaleb.d	$f17,$f25,$f4
 518:	18400612 	pcaddi	$r18,131120(0x20030)
 51c:	00194297 	srl.d	$r23,$r20,$r16
 520:	00051b00 	alsl.w	$r0,$r24,$r6,0x3
 524:	18021331 	pcaddi	$r17,4249(0x1099)
 528:	341c0000 	0x341c0000
 52c:	02133100 	slti	$r0,$r8,1228(0x4cc)
 530:	00000017 	0x00000017
 534:	25011101 	stptr.w	$r1,$r8,272(0x110)
 538:	030b1308 	lu52i.d	$r8,$r24,708(0x2c4)
 53c:	11081b08 	addu16i.d	$r8,$r24,16902(0x4206)
 540:	10061201 	addu16i.d	$r1,$r16,388(0x184)
 544:	02000017 	slti	$r23,$r0,0
 548:	0b0b0024 	0x0b0b0024
 54c:	08030b3e 	0x08030b3e
 550:	16030000 	lu32i.d	$r0,6144(0x1800)
 554:	3a080300 	0x3a080300
 558:	390b3b0b 	0x390b3b0b
 55c:	0013490b 	maskeqz	$r11,$r8,$r18
 560:	01130400 	fcopysign.d	$f0,$f0,$f1
 564:	0b0b0803 	0x0b0b0803
 568:	0b3b0b3a 	0x0b3b0b3a
 56c:	13010b39 	addu16i.d	$r25,$r25,-16318(0xc042)
 570:	0d050000 	0x0d050000
 574:	3a080300 	0x3a080300
 578:	390b3b0b 	0x390b3b0b
 57c:	3813490b 	0x3813490b
 580:	0600000b 	cacop	0xb,$r0,0
 584:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 588:	0b3a0803 	0x0b3a0803
 58c:	0b390b3b 	0x0b390b3b
 590:	13491927 	addu16i.d	$r7,$r9,-11706(0xd246)
 594:	06120111 	cacop	0x11,$r8,1152(0x480)
 598:	42971840 	beqz	$r2,169752(0x29718) # 29cb0 <data_size+0x28fcc>
 59c:	00130119 	maskeqz	$r25,$r8,$r0
 5a0:	00340700 	0x00340700
 5a4:	0b3a0803 	0x0b3a0803
 5a8:	0b390b3b 	0x0b390b3b
 5ac:	17021349 	lu32i.d	$r9,-520038(0x8109a)
 5b0:	1d080000 	pcaddu12i	$r0,-507904(0x84000)
 5b4:	52133101 	b	67506992(0x4061330) # 40618e4 <data_size+0x4060c00>
 5b8:	58175501 	beq	$r8,$r1,5972(0x1754) # 1d0c <data_size+0x1028>
 5bc:	570b590b 	bl	70191960(0x42f0b58) # 42f1114 <data_size+0x42f0430>
 5c0:	0900000b 	0x0900000b
 5c4:	1755010b 	lu32i.d	$r11,-350200(0xaa808)
 5c8:	340a0000 	0x340a0000
 5cc:	00133100 	maskeqz	$r0,$r8,$r12
 5d0:	012e0b00 	0x012e0b00
 5d4:	0803193f 	0x0803193f
 5d8:	0b3b0b3a 	0x0b3b0b3a
 5dc:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 5e0:	00001301 	clo.w	$r1,$r24
 5e4:	0300340c 	lu52i.d	$r12,$r0,13(0xd)
 5e8:	3b0b3a08 	0x3b0b3a08
 5ec:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d1124 <data_size+0x2d0440>
 5f0:	0d000013 	fsel	$f19,$f0,$f0,$fcc0
 5f4:	08030005 	0x08030005
 5f8:	0b3b0b3a 	0x0b3b0b3a
 5fc:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 600:	00001702 	clz.w	$r2,$r24
 604:	0300050e 	lu52i.d	$r14,$r8,1(0x1)
 608:	3b0b3a08 	0x3b0b3a08
 60c:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d1144 <data_size+0x2d0460>
 610:	00180213 	sra.w	$r19,$r16,$r0
 614:	000f0f00 	bytepick.d	$r0,$r24,$r3,0x6
 618:	13490b0b 	addu16i.d	$r11,$r24,-11710(0xd242)
 61c:	2e100000 	0x2e100000
 620:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 624:	3b0b3a08 	0x3b0b3a08
 628:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d1160 <data_size+0x2d047c>
 62c:	12011113 	addu16i.d	$r19,$r8,-32700(0x8044)
 630:	97184006 	0x97184006
 634:	13011942 	addu16i.d	$r2,$r10,-16314(0xc046)
 638:	34110000 	0x34110000
 63c:	3a080300 	0x3a080300
 640:	390b3b0b 	0x390b3b0b
 644:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 648:	12000018 	addu16i.d	$r24,$r0,-32768(0x8000)
 64c:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 650:	0b3a0803 	0x0b3a0803
 654:	0b390b3b 	0x0b390b3b
 658:	0b201349 	0x0b201349
 65c:	Address 0x000000000000065c is out of bounds.


Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	0x00000000
   4:	00000064 	0x00000064
   8:	64540001 	bge	$r0,$r1,21504(0x5400) # 5408 <data_size+0x4724>
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
  34:	48000000 	bceqz	$fcc0,0 # 34 <data_size-0xcb0>
  38:	64000000 	bge	$r0,$r0,0 # 38 <data_size-0xcac>
  3c:	02000000 	slti	$r0,$r0,0
  40:	649f3000 	bge	$r0,$r0,40752(0x9f30) # 9f70 <data_size+0x928c>
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
  74:	64000001 	bge	$r0,$r1,0 # 74 <data_size-0xc70>
  78:	01000001 	0x01000001
  7c:	01646800 	0x01646800
  80:	016c0000 	0x016c0000
  84:	00030000 	0x00030000
  88:	6c9f7f88 	bgeu	$r28,$r8,40828(0x9f7c) # a004 <data_size+0x9320>
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
  c8:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff00c8 <_stack+0xe3fde058>
  cc:	000000f4 	0x000000f4
  d0:	0000022c 	0x0000022c
  d4:	00670001 	bstrins.w	$r1,$r0,0x7,0x0
  d8:	00000000 	0x00000000
  dc:	48000000 	bceqz	$fcc0,0 # dc <data_size-0xc08>
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
 134:	55000100 	bl	67174400(0x4010000) # 4010134 <data_size+0x400f450>
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
 16c:	55000100 	bl	67174400(0x4010000) # 401016c <data_size+0x400f488>
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
 198:	55000100 	bl	67174400(0x4010000) # 4010198 <data_size+0x400f4b4>
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
 1c4:	55000100 	bl	67174400(0x4010000) # 40101c4 <data_size+0x400f4e0>
	...
 1d4:	0000001c 	0x0000001c
 1d8:	1c540001 	pcaddu12i	$r1,172032(0x2a000)
 1dc:	28000000 	ld.b	$r0,$r0,0
 1e0:	04000000 	csrrd	$r0,0x0
 1e4:	5401f300 	bl	-67108368(0xc0001f0) # fc0003d4 <_stack+0xdffee364>
 1e8:	0000009f 	0x0000009f
	...
 1f4:	00001800 	cto.w	$r0,$r0
 1f8:	54000100 	bl	67108864(0x4000000) # 40001f8 <data_size+0x3fff514>
	...
 204:	00000074 	0x00000074
 208:	0000007f 	0x0000007f
 20c:	7f540001 	0x7f540001
 210:	a0000000 	0xa0000000
 214:	04000000 	csrrd	$r0,0x0
 218:	5401f300 	bl	-67108368(0xc0001f0) # fc000408 <_stack+0xdffee398>
 21c:	0000009f 	0x0000009f
	...
 228:	00002800 	cto.d	$r0,$r0
 22c:	54000100 	bl	67108864(0x4000000) # 400022c <data_size+0x3fff548>
 230:	00000028 	0x00000028
 234:	00000030 	0x00000030
 238:	7f880003 	0x7f880003
 23c:	0000309f 	revb.2h	$r31,$r4
 240:	00003c00 	revb.d	$r0,$r0
 244:	68000100 	bltu	$r8,$r0,0 # 244 <data_size-0xaa0>
 248:	0000003c 	0x0000003c
 24c:	00000050 	0x00000050
 250:	7f880003 	0x7f880003
 254:	0000509f 	bitrev.w	$r31,$r4
 258:	00005800 	ext.w.h	$r0,$r0
 25c:	68000100 	bltu	$r8,$r0,0 # 25c <data_size-0xa88>
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
 380:	5701f300 	bl	-66911760(0xc0301f0) # fc030570 <_stack+0xe001e500>
 384:	0000dc9f 	0x0000dc9f
 388:	0000e800 	0x0000e800
 38c:	57000100 	bl	67305472(0x4030000) # 403038c <data_size+0x402f6a8>
	...
 398:	00000020 	0x00000020
 39c:	00000034 	0x00000034
 3a0:	9f300002 	0x9f300002
 3a4:	00000034 	0x00000034
 3a8:	00000038 	0x00000038
 3ac:	38680001 	ammin.wu	$r1,$r0,$r0
 3b0:	58000000 	beq	$r0,$r0,0 # 3b0 <data_size-0x934>
 3b4:	08000000 	0x08000000
 3b8:	91007c00 	0x91007c00
 3bc:	50231c00 	b	8988(0x231c) # 26d8 <data_size+0x19f4>
 3c0:	0000589f 	ext.w.h	$r31,$r4
 3c4:	00006400 	rdtimeh.w	$r0,$r0
 3c8:	68000100 	bltu	$r8,$r0,0 # 3c8 <data_size-0x91c>
 3cc:	000000b4 	0x000000b4
 3d0:	000000bc 	0x000000bc
 3d4:	d0680001 	0xd0680001
 3d8:	e8000000 	0xe8000000
 3dc:	02000000 	slti	$r0,$r0,0
 3e0:	009f3000 	bstrins.d	$r0,$r0,0x1f,0xc
 3e4:	00000000 	0x00000000
 3e8:	6c000000 	bgeu	$r0,$r0,0 # 3e8 <data_size-0x8fc>
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
 468:	5d000100 	bne	$r8,$r0,65536(0x10000) # 10468 <data_size+0xf784>
 46c:	00000038 	0x00000038
 470:	00000058 	0x00000058
 474:	58670001 	beq	$r0,$r1,26368(0x6700) # 6b74 <data_size+0x5e90>
 478:	64000000 	bge	$r0,$r0,0 # 478 <data_size-0x86c>
 47c:	01000000 	0x01000000
 480:	00b45d00 	bstrins.d	$r0,$r8,0x34,0x17
 484:	00bc0000 	bstrins.d	$r0,$r0,0x3c,0x0
 488:	00010000 	asrtle.d	$r0,$r0
 48c:	0000d05d 	0x0000d05d
 490:	0000dc00 	0x0000dc00
 494:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff0494 <_stack+0xe3fde424>
 498:	000000dc 	0x000000dc
 49c:	000000e8 	0x000000e8
 4a0:	00540001 	0x00540001
 4a4:	00000000 	0x00000000
 4a8:	a8000000 	0xa8000000
 4ac:	b01c0012 	0xb01c0012
 4b0:	011c0012 	0x011c0012
 4b4:	12b05400 	addu16i.d	$r0,$r0,-21483(0xac15)
 4b8:	12c01c00 	addu16i.d	$r0,$r0,-20473(0xb007)
 4bc:	00041c00 	alsl.w	$r0,$r0,$r7,0x1
 4c0:	9f5401f3 	0x9f5401f3
	...
 4cc:	1c0012a8 	pcaddu12i	$r8,149(0x95)
 4d0:	1c0012b0 	pcaddu12i	$r16,149(0x95)
 4d4:	b0550001 	0xb0550001
 4d8:	c01c0012 	0xc01c0012
 4dc:	041c0012 	csrrd	$r18,0x700
 4e0:	5501f300 	bl	-67042832(0xc0101f0) # fc0106d0 <_stack+0xdfffe660>
 4e4:	0000009f 	0x0000009f
 4e8:	00000000 	0x00000000
 4ec:	0012a800 	sltu	$r0,$r0,$r10
 4f0:	0012b01c 	sltu	$r28,$r0,$r12
 4f4:	7500031c 	0x7500031c
 4f8:	12b09f7f 	addu16i.d	$r31,$r27,-21465(0xac27)
 4fc:	12bc1c00 	addu16i.d	$r0,$r0,-20729(0xaf07)
 500:	00061c00 	alsl.wu	$r0,$r0,$r7,0x1
 504:	315501f3 	vstelm.h	$vr19,$r15,128(0x80),0x5
 508:	00009f1c 	0x00009f1c
 50c:	00000000 	0x00000000
 510:	12a80000 	addu16i.d	$r0,$r0,-22016(0xaa00)
 514:	12b01c00 	addu16i.d	$r0,$r0,-21497(0xac07)
 518:	00011c00 	asrtle.d	$r0,$r7
 51c:	0012b054 	sltu	$r20,$r2,$r12
 520:	0012c01c 	sltu	$r28,$r0,$r16
 524:	f300041c 	0xf300041c
 528:	009f5401 	bstrins.d	$r1,$r0,0x1f,0x15
 52c:	00000000 	0x00000000
 530:	50000000 	b	0 # 530 <data_size-0x7b4>
 534:	681c0012 	bltu	$r0,$r18,7168(0x1c00) # 2134 <data_size+0x1450>
 538:	011c0012 	0x011c0012
 53c:	12685400 	addu16i.d	$r0,$r0,-26091(0x9a15)
 540:	12a81c00 	addu16i.d	$r0,$r0,-22009(0xaa07)
 544:	00041c00 	alsl.w	$r0,$r0,$r7,0x1
 548:	9f5401f3 	0x9f5401f3
	...
 554:	1c001250 	pcaddu12i	$r16,146(0x92)
 558:	1c001268 	pcaddu12i	$r8,147(0x93)
 55c:	68550001 	bltu	$r0,$r1,21760(0x5500) # 5a5c <data_size+0x4d78>
 560:	a81c0012 	0xa81c0012
 564:	041c0012 	csrrd	$r18,0x700
 568:	5501f300 	bl	-67042832(0xc0101f0) # fc010758 <_stack+0xdfffe6e8>
 56c:	0000009f 	0x0000009f
 570:	00000000 	0x00000000
 574:	00125000 	slt	$r0,$r0,$r20
 578:	0012501c 	slt	$r28,$r0,$r20
 57c:	5600011c 	bl	74579968(0x4720000) # 472057c <data_size+0x471f898>
 580:	1c001250 	pcaddu12i	$r16,146(0x92)
 584:	1c001260 	pcaddu12i	$r0,147(0x93)
 588:	7f760003 	0x7f760003
 58c:	0012609f 	slt	$r31,$r4,$r24
 590:	0012801c 	sltu	$r28,$r0,$r0
 594:	f300061c 	0xf300061c
 598:	1c315601 	pcaddu12i	$r1,101040(0x18ab0)
 59c:	0000009f 	0x0000009f
 5a0:	00000000 	0x00000000
 5a4:	00125000 	slt	$r0,$r0,$r20
 5a8:	0012841c 	sltu	$r28,$r0,$r1
 5ac:	5400011c 	bl	74448896(0x4700000) # 47005ac <data_size+0x46ff8c8>
 5b0:	1c001288 	pcaddu12i	$r8,148(0x94)
 5b4:	1c00129c 	pcaddu12i	$r28,148(0x94)
 5b8:	00540001 	0x00540001
 5bc:	00000000 	0x00000000
 5c0:	fc000000 	0xfc000000
 5c4:	341c0011 	0x341c0011
 5c8:	011c0012 	0x011c0012
 5cc:	12345500 	addu16i.d	$r0,$r8,-29419(0x8d15)
 5d0:	124c1c00 	addu16i.d	$r0,$r0,-27897(0x9307)
 5d4:	00041c00 	alsl.w	$r0,$r0,$r7,0x1
 5d8:	9f5501f3 	0x9f5501f3
 5dc:	1c00124c 	pcaddu12i	$r12,146(0x92)
 5e0:	1c001250 	pcaddu12i	$r16,146(0x92)
 5e4:	00550001 	0x00550001
 5e8:	00000000 	0x00000000
 5ec:	fc000000 	0xfc000000
 5f0:	0c1c0011 	0x0c1c0011
 5f4:	011c0012 	0x011c0012
 5f8:	120c5600 	addu16i.d	$r0,$r16,-31979(0x8315)
 5fc:	12481c00 	addu16i.d	$r0,$r0,-28153(0x9207)
 600:	00031c00 	0x00031c00
 604:	4c9f7f76 	jirl	$r22,$r27,40828(0x9f7c)
 608:	501c0012 	b	4725760(0x481c00) # 482208 <data_size+0x481524>
 60c:	031c0012 	lu52i.d	$r18,$r0,1792(0x700)
 610:	9f7f7600 	0x9f7f7600
	...
 61c:	1c0011fc 	pcaddu12i	$r28,143(0x8f)
 620:	1c001208 	pcaddu12i	$r8,144(0x90)
 624:	08550001 	fmsub.s	$f1,$f0,$f0,$f10
 628:	281c0012 	ld.b	$r18,$r0,1792(0x700)
 62c:	011c0012 	0x011c0012
 630:	12285c00 	addu16i.d	$r0,$r0,-30185(0x8a17)
 634:	12481c00 	addu16i.d	$r0,$r0,-28153(0x9207)
 638:	00011c00 	asrtle.d	$r0,$r7
 63c:	00124c55 	slt	$r21,$r2,$r19
 640:	0012501c 	slt	$r28,$r0,$r20
 644:	5500011c 	bl	74514432(0x4710000) # 4710644 <data_size+0x470f960>
	...
 650:	1c0011fc 	pcaddu12i	$r28,143(0x8f)
 654:	1c00120c 	pcaddu12i	$r12,144(0x90)
 658:	0c540001 	vfcmp.cun.s	$vr1,$vr0,$vr0
 65c:	281c0012 	ld.b	$r18,$r0,1792(0x700)
 660:	011c0012 	0x011c0012
 664:	12285d00 	addu16i.d	$r0,$r8,-30185(0x8a17)
 668:	12341c00 	addu16i.d	$r0,$r0,-29433(0x8d07)
 66c:	00011c00 	asrtle.d	$r0,$r7
 670:	00123454 	slt	$r20,$r2,$r13
 674:	0012481c 	slt	$r28,$r0,$r18
 678:	5c00011c 	bne	$r8,$r28,0 # 678 <data_size-0x66c>
 67c:	1c00124c 	pcaddu12i	$r12,146(0x92)
 680:	1c001250 	pcaddu12i	$r16,146(0x92)
 684:	00540001 	0x00540001
 688:	00000000 	0x00000000
 68c:	d8000000 	0xd8000000
 690:	e41c0011 	0xe41c0011
 694:	011c0011 	0x011c0011
 698:	11e45500 	addu16i.d	$r0,$r8,30997(0x7915)
 69c:	11fc1c00 	addu16i.d	$r0,$r0,32519(0x7f07)
 6a0:	00041c00 	alsl.w	$r0,$r0,$r7,0x1
 6a4:	9f5501f3 	0x9f5501f3
	...
 6b0:	1c0011d8 	pcaddu12i	$r24,142(0x8e)
 6b4:	1c0011d8 	pcaddu12i	$r24,142(0x8e)
 6b8:	d8560001 	0xd8560001
 6bc:	e01c0011 	0xe01c0011
 6c0:	031c0011 	lu52i.d	$r17,$r0,1792(0x700)
 6c4:	9f7f7600 	0x9f7f7600
 6c8:	1c0011e0 	pcaddu12i	$r0,143(0x8f)
 6cc:	1c0011f8 	pcaddu12i	$r24,143(0x8f)
 6d0:	01f30006 	0x01f30006
 6d4:	9f1c3156 	0x9f1c3156
	...
 6e0:	1c0011d8 	pcaddu12i	$r24,142(0x8e)
 6e4:	1c0011e4 	pcaddu12i	$r4,143(0x8f)
 6e8:	e4540001 	0xe4540001
 6ec:	f81c0011 	0xf81c0011
 6f0:	011c0011 	0x011c0011
 6f4:	00005c00 	ext.w.b	$r0,$r0
 6f8:	00000000 	0x00000000
 6fc:	11940000 	addu16i.d	$r0,$r0,25856(0x6500)
 700:	11ac1c00 	addu16i.d	$r0,$r0,27399(0x6b07)
 704:	00011c00 	asrtle.d	$r0,$r7
 708:	0011ac54 	sub.d	$r20,$r2,$r11
 70c:	0011bc1c 	sub.d	$r28,$r0,$r15
 710:	5400011c 	bl	74448896(0x4700000) # 4700710 <data_size+0x46ffa2c>
	...
 71c:	1c001168 	pcaddu12i	$r8,139(0x8b)
 720:	1c001180 	pcaddu12i	$r0,140(0x8c)
 724:	80540001 	0x80540001
 728:	8c1c0011 	0x8c1c0011
 72c:	011c0011 	0x011c0011
 730:	11905400 	addu16i.d	$r0,$r0,25621(0x6415)
 734:	11941c00 	addu16i.d	$r0,$r0,25863(0x6507)
 738:	00011c00 	asrtle.d	$r0,$r7
 73c:	00000054 	0x00000054
 740:	00000000 	0x00000000
 744:	00110000 	sub.w	$r0,$r0,$r0
 748:	0011381c 	sub.w	$r28,$r0,$r14
 74c:	5400011c 	bl	74448896(0x4700000) # 470074c <data_size+0x46ffa68>
 750:	1c001138 	pcaddu12i	$r24,137(0x89)
 754:	1c001140 	pcaddu12i	$r0,138(0x8a)
 758:	44540001 	bnez	$r0,283648(0x45400) # 45b58 <data_size+0x44e74>
 75c:	5c1c0011 	bne	$r0,$r17,7168(0x1c00) # 235c <data_size+0x1678>
 760:	011c0011 	0x011c0011
 764:	00005400 	bitrev.d	$r0,$r0
 768:	00000000 	0x00000000
 76c:	11000000 	addu16i.d	$r0,$r0,16384(0x4000)
 770:	111c1c00 	addu16i.d	$r0,$r0,18183(0x4707)
 774:	00011c00 	asrtle.d	$r0,$r7
 778:	00111c55 	sub.w	$r21,$r2,$r7
 77c:	0011301c 	sub.w	$r28,$r0,$r12
 780:	5c00011c 	bne	$r8,$r28,0 # 780 <data_size-0x564>
 784:	1c001130 	pcaddu12i	$r16,137(0x89)
 788:	1c001138 	pcaddu12i	$r24,137(0x89)
 78c:	38550001 	0x38550001
 790:	3c1c0011 	0x3c1c0011
 794:	011c0011 	0x011c0011
 798:	11445c00 	addu16i.d	$r0,$r0,20759(0x5117)
 79c:	11481c00 	addu16i.d	$r0,$r0,20999(0x5207)
 7a0:	00011c00 	asrtle.d	$r0,$r7
 7a4:	0000005c 	0x0000005c
 7a8:	00000000 	0x00000000
 7ac:	00110000 	sub.w	$r0,$r0,$r0
 7b0:	0011181c 	sub.w	$r28,$r0,$r6
 7b4:	5600011c 	bl	74579968(0x4720000) # 47207b4 <data_size+0x471fad0>
 7b8:	1c001118 	pcaddu12i	$r24,136(0x88)
 7bc:	1c00111c 	pcaddu12i	$r28,136(0x88)
 7c0:	01f30004 	0x01f30004
 7c4:	111c9f56 	addu16i.d	$r22,$r26,18215(0x4727)
 7c8:	113c1c00 	addu16i.d	$r0,$r0,20231(0x4f07)
 7cc:	00061c00 	alsl.wu	$r0,$r0,$r7,0x1
 7d0:	315601f3 	vstelm.h	$vr19,$r15,-256(0x100),0x5
 7d4:	11449f1c 	addu16i.d	$r28,$r24,20775(0x5127)
 7d8:	11481c00 	addu16i.d	$r0,$r0,20999(0x5207)
 7dc:	00061c00 	alsl.wu	$r0,$r0,$r7,0x1
 7e0:	315601f3 	vstelm.h	$vr19,$r15,-256(0x100),0x5
 7e4:	00009f1c 	0x00009f1c
 7e8:	00000000 	0x00000000
 7ec:	10d80000 	addu16i.d	$r0,$r0,13824(0x3600)
 7f0:	10f81c00 	addu16i.d	$r0,$r0,15879(0x3e07)
 7f4:	00011c00 	asrtle.d	$r0,$r7
 7f8:	0010f855 	add.d	$r21,$r2,$r30
 7fc:	0011001c 	sub.w	$r28,$r0,$r0
 800:	5500011c 	bl	74514432(0x4710000) # 4710800 <data_size+0x470fb1c>
	...
 80c:	1c0010d8 	pcaddu12i	$r24,134(0x86)
 810:	1c0010e0 	pcaddu12i	$r0,135(0x87)
 814:	e0560001 	0xe0560001
 818:	e41c0010 	0xe41c0010
 81c:	041c0010 	csrrd	$r16,0x700
 820:	5601f300 	bl	-66977296(0xc0201f0) # fc020a10 <_stack+0xe000e9a0>
 824:	0010e49f 	add.d	$r31,$r4,$r25
 828:	0010ec1c 	add.d	$r28,$r0,$r27
 82c:	74000a1c 	xvseq.b	$xr28,$xr16,$xr2
 830:	1c007d00 	pcaddu12i	$r0,1000(0x3e8)
 834:	225601f3 	ll.d	$r19,$r15,22016(0x5600)
 838:	0010ec9f 	add.d	$r31,$r4,$r27
 83c:	0010f81c 	add.d	$r28,$r0,$r30
 840:	74000c1c 	xvseq.b	$xr28,$xr0,$xr3
 844:	1c007d00 	pcaddu12i	$r0,1000(0x3e8)
 848:	225601f3 	ll.d	$r19,$r15,22016(0x5600)
 84c:	f89f0123 	0xf89f0123
 850:	fc1c0010 	0xfc1c0010
 854:	0a1c0010 	xvfmadd.s	$xr16,$xr0,$xr0,$xr24
 858:	7d007400 	0x7d007400
 85c:	01f31c00 	0x01f31c00
 860:	009f2256 	bstrins.d	$r22,$r18,0x1f,0x8
 864:	00000000 	0x00000000
 868:	d8000000 	0xd8000000
 86c:	e41c0010 	0xe41c0010
 870:	011c0010 	0x011c0010
 874:	10e45400 	addu16i.d	$r0,$r0,14613(0x3915)
 878:	10ec1c00 	addu16i.d	$r0,$r0,15111(0x3b07)
 87c:	00011c00 	asrtle.d	$r0,$r7
 880:	0010ec5d 	add.d	$r29,$r2,$r27
 884:	0010f81c 	add.d	$r28,$r0,$r30
 888:	7d00031c 	0x7d00031c
 88c:	10f89f7f 	addu16i.d	$r31,$r27,15911(0x3e27)
 890:	10fc1c00 	addu16i.d	$r0,$r0,16135(0x3f07)
 894:	00011c00 	asrtle.d	$r0,$r7
 898:	0000005d 	0x0000005d
 89c:	00000000 	0x00000000
 8a0:	0010bc00 	add.d	$r0,$r0,$r15
 8a4:	0010c41c 	add.d	$r28,$r0,$r17
 8a8:	5500011c 	bl	74514432(0x4710000) # 47108a8 <data_size+0x470fbc4>
 8ac:	1c0010c4 	pcaddu12i	$r4,134(0x86)
 8b0:	1c0010d8 	pcaddu12i	$r24,134(0x86)
 8b4:	00550001 	0x00550001
 8b8:	00000000 	0x00000000
 8bc:	bc000000 	0xbc000000
 8c0:	c01c0010 	0xc01c0010
 8c4:	011c0010 	0x011c0010
 8c8:	10c05400 	addu16i.d	$r0,$r0,12309(0x3015)
 8cc:	10d81c00 	addu16i.d	$r0,$r0,13831(0x3607)
 8d0:	00011c00 	asrtle.d	$r0,$r7
 8d4:	0000005c 	0x0000005c
 8d8:	00000000 	0x00000000
 8dc:	00108000 	add.d	$r0,$r0,$r0
 8e0:	0010841c 	add.d	$r28,$r0,$r1
 8e4:	5400011c 	bl	74448896(0x4700000) # 47008e4 <data_size+0x46ffc00>
 8e8:	1c001084 	pcaddu12i	$r4,132(0x84)
 8ec:	1c001094 	pcaddu12i	$r20,132(0x84)
 8f0:	01740003 	0x01740003
 8f4:	0010949f 	add.d	$r31,$r4,$r5
 8f8:	0010ac1c 	add.d	$r28,$r0,$r11
 8fc:	7400081c 	xvseq.b	$xr28,$xr0,$xr2
 900:	22007c00 	ll.d	$r0,$r0,124(0x7c)
 904:	ac9f0123 	0xac9f0123
 908:	b01c0010 	0xb01c0010
 90c:	091c0010 	vfmadd.s	$vr16,$vr0,$vr0,$vr24
 910:	5401f300 	bl	-67108368(0xc0001f0) # fc000b00 <_stack+0xdffeea90>
 914:	2322007c 	sc.d	$r28,$r3,8704(0x2200)
 918:	00009f01 	0x00009f01
 91c:	00000000 	0x00000000
 920:	10800000 	addu16i.d	$r0,$r0,8192(0x2000)
 924:	10941c00 	addu16i.d	$r0,$r0,9479(0x2507)
 928:	00021c00 	0x00021c00
 92c:	10949f30 	addu16i.d	$r16,$r25,9511(0x2527)
 930:	10b01c00 	addu16i.d	$r0,$r0,11271(0x2c07)
 934:	00011c00 	asrtle.d	$r0,$r7
 938:	0010b05c 	add.d	$r28,$r2,$r12
 93c:	0010bc1c 	add.d	$r28,$r0,$r15
 940:	3000021c 	0x3000021c
 944:	0000009f 	0x0000009f
 948:	00000000 	0x00000000
 94c:	00105000 	add.w	$r0,$r0,$r20
 950:	0010501c 	add.w	$r28,$r0,$r20
 954:	5400011c 	bl	74448896(0x4700000) # 4700954 <data_size+0x46ffc70>
 958:	1c001050 	pcaddu12i	$r16,130(0x82)
 95c:	1c00105c 	pcaddu12i	$r28,130(0x82)
 960:	01740003 	0x01740003
 964:	00105c9f 	add.w	$r31,$r4,$r23
 968:	0010701c 	add.w	$r28,$r0,$r28
 96c:	7400081c 	xvseq.b	$xr28,$xr0,$xr2
 970:	22007c00 	ll.d	$r0,$r0,124(0x7c)
 974:	709f0123 	0x709f0123
 978:	741c0010 	0x741c0010
 97c:	091c0010 	vfmadd.s	$vr16,$vr0,$vr0,$vr24
 980:	5401f300 	bl	-67108368(0xc0001f0) # fc000b70 <_stack+0xdffeeb00>
 984:	2322007c 	sc.d	$r28,$r3,8704(0x2200)
 988:	10749f01 	addu16i.d	$r1,$r24,7463(0x1d27)
 98c:	107c1c00 	addu16i.d	$r0,$r0,7943(0x1f07)
 990:	00031c00 	0x00031c00
 994:	7c9f0174 	0x7c9f0174
 998:	801c0010 	0x801c0010
 99c:	061c0010 	cacop	0x10,$r0,1792(0x700)
 9a0:	5401f300 	bl	-67108368(0xc0001f0) # fc000b90 <_stack+0xdffeeb20>
 9a4:	009f0123 	bstrins.d	$r3,$r9,0x1f,0x0
 9a8:	00000000 	0x00000000
 9ac:	50000000 	b	0 # 9ac <data_size-0x338>
 9b0:	5c1c0010 	bne	$r0,$r16,7168(0x1c00) # 25b0 <data_size+0x18cc>
 9b4:	021c0010 	slti	$r16,$r0,1792(0x700)
 9b8:	5c9f3000 	bne	$r0,$r0,40752(0x9f30) # a8e8 <data_size+0x9c04>
 9bc:	741c0010 	0x741c0010
 9c0:	011c0010 	0x011c0010
 9c4:	10745c00 	addu16i.d	$r0,$r0,7447(0x1d17)
 9c8:	10801c00 	addu16i.d	$r0,$r0,8199(0x2007)
 9cc:	00021c00 	0x00021c00
 9d0:	00009f30 	0x00009f30
 9d4:	00000000 	0x00000000
 9d8:	11bc0000 	addu16i.d	$r0,$r0,28416(0x6f00)
 9dc:	11bc1c00 	addu16i.d	$r0,$r0,28423(0x6f07)
 9e0:	00011c00 	asrtle.d	$r0,$r7
 9e4:	0011bc56 	sub.d	$r22,$r2,$r15
 9e8:	0011c41c 	sub.d	$r28,$r0,$r17
 9ec:	7600031c 	0x7600031c
 9f0:	11c49f7f 	addu16i.d	$r31,$r27,28967(0x7127)
 9f4:	11c81c00 	addu16i.d	$r0,$r0,29191(0x7207)
 9f8:	00061c00 	alsl.wu	$r0,$r0,$r7,0x1
 9fc:	315601f3 	vstelm.h	$vr19,$r15,-256(0x100),0x5
 a00:	11c89f1c 	addu16i.d	$r28,$r24,29223(0x7227)
 a04:	11cc1c00 	addu16i.d	$r0,$r0,29447(0x7307)
 a08:	000b1c00 	0x000b1c00
 a0c:	f320007c 	0xf320007c
 a10:	74225601 	xvaddwod.h.b	$xr1,$xr16,$xr21
 a14:	cc9f2200 	0xcc9f2200
 a18:	d01c0011 	0xd01c0011
 a1c:	0a1c0011 	xvfmadd.s	$xr17,$xr0,$xr0,$xr24
 a20:	7c007400 	0x7c007400
 a24:	01f31c00 	0x01f31c00
 a28:	d09f2256 	0xd09f2256
 a2c:	d41c0011 	0xd41c0011
 a30:	0b1c0011 	0x0b1c0011
 a34:	20007c00 	ll.w	$r0,$r0,124(0x7c)
 a38:	225601f3 	ll.d	$r19,$r15,22016(0x5600)
 a3c:	9f220074 	0x9f220074
	...
 a48:	1c0011bc 	pcaddu12i	$r28,141(0x8d)
 a4c:	1c0011c8 	pcaddu12i	$r8,142(0x8e)
 a50:	c8540001 	0xc8540001
 a54:	d41c0011 	0xd41c0011
 a58:	011c0011 	0x011c0011
 a5c:	00005c00 	ext.w.b	$r0,$r0
 a60:	00000000 	0x00000000
 a64:	00d40000 	bstrpick.d	$r0,$r0,0x14,0x0
 a68:	00e40000 	bstrpick.d	$r0,$r0,0x24,0x0
 a6c:	00020000 	0x00020000
 a70:	00e49f30 	bstrpick.d	$r16,$r25,0x24,0x27
 a74:	00f80000 	bstrpick.d	$r0,$r0,0x38,0x0
 a78:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
 a7c:	b8f70074 	0xb8f70074
 a80:	f7640801 	0xf7640801
 a84:	f71b01b8 	0xf71b01b8
 a88:	00f89f00 	bstrpick.d	$r0,$r24,0x38,0x27
 a8c:	01040000 	0x01040000
 a90:	00010000 	asrtle.d	$r0,$r0
 a94:	0000005d 	0x0000005d
 a98:	00000000 	0x00000000
 a9c:	0000b000 	0x0000b000
 aa0:	0000c000 	0x0000c000
 aa4:	30000200 	0x30000200
 aa8:	0000c09f 	0x0000c09f
 aac:	0000cc00 	0x0000cc00
 ab0:	74000500 	xvseq.b	$xr0,$xr8,$xr1
 ab4:	9f1e3a00 	0x9f1e3a00
 ab8:	000000cc 	0x000000cc
 abc:	000000d4 	0x000000d4
 ac0:	00540001 	0x00540001
 ac4:	00000000 	0x00000000
 ac8:	28000000 	ld.b	$r0,$r0,0
 acc:	94000000 	0x94000000
 ad0:	01000000 	0x01000000
 ad4:	00945400 	bstrins.d	$r0,$r0,0x14,0x15
 ad8:	00ac0000 	bstrins.d	$r0,$r0,0x2c,0x0
 adc:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 ae0:	9f5401f3 	0x9f5401f3
	...
 aec:	00000028 	0x00000028
 af0:	00000038 	0x00000038
 af4:	9f300002 	0x9f300002
 af8:	00000038 	0x00000038
 afc:	000000ac 	0x000000ac
 b00:	005f0001 	0x005f0001
 b04:	00000000 	0x00000000
 b08:	Address 0x0000000000000b08 is out of bounds.


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
  60:	1c001050 	pcaddu12i	$r16,130(0x82)
  64:	1c0012c0 	pcaddu12i	$r0,150(0x96)
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

Disassembly of section .debug_line:

00000000 <.debug_line>:
       0:	00000471 	0x00000471
       4:	00200004 	div.w	$r4,$r0,$r0
       8:	01010000 	fadd.d	$f0,$f0,$f0
       c:	0df2f601 	0x0df2f601
      10:	01010100 	fadd.d	$f0,$f8,$f0
      14:	00000001 	0x00000001
      18:	01000001 	0x01000001
      1c:	69727000 	bltu	$r0,$r0,94832(0x17270) # 1728c <data_size+0x165a8>
      20:	2e66746e 	0x2e66746e
      24:	00000063 	0x00000063
      28:	05000000 	0x05000000
      2c:	000c5002 	bytepick.d	$r2,$r0,$r20,0x0
      30:	0105181c 	fmul.d	$f28,$f0,$f6
      34:	50020500 	b	67109380(0x4000204) # 4000238 <data_size+0x3fff554>
      38:	181c000c 	pcaddi	$r12,57344(0xe000)
      3c:	05000105 	0x05000105
      40:	000c5002 	bytepick.d	$r2,$r0,$r20,0x0
      44:	0105181c 	fmul.d	$f28,$f0,$f6
      48:	50020500 	b	67109380(0x4000204) # 400024c <data_size+0x3fff568>
      4c:	181c000c 	pcaddi	$r12,57344(0xe000)
      50:	05000105 	0x05000105
      54:	000c5002 	bytepick.d	$r2,$r0,$r20,0x0
      58:	0105181c 	fmul.d	$f28,$f0,$f6
      5c:	50020500 	b	67109380(0x4000204) # 4000260 <data_size+0x3fff57c>
      60:	181c000c 	pcaddi	$r12,57344(0xe000)
      64:	05000105 	0x05000105
      68:	000c5002 	bytepick.d	$r2,$r0,$r20,0x0
      6c:	0105181c 	fmul.d	$f28,$f0,$f6
      70:	50020500 	b	67109380(0x4000204) # 4000274 <data_size+0x3fff590>
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
      bc:	5d1c000c 	bne	$r0,$r12,72704(0x11c00) # 11cbc <data_size+0x10fd8>
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
     150:	4a1c000c 	bceqz	$fcc0,3283968(0x321c00) # 321d50 <data_size+0x32106c>
     154:	05000905 	0x05000905
     158:	000cfc02 	bytepick.d	$r2,$r0,$r31,0x1
     15c:	4d03061c 	jirl	$r28,$r16,66308(0x10304)
     160:	00030501 	0x00030501
     164:	0d1c0205 	vbitsel.v	$vr5,$vr16,$vr0,$vr24
     168:	5a061c00 	beq	$r0,$r0,-129508(0x2061c) # fffe0784 <_stack+0xe3fce714>
     16c:	05000105 	0x05000105
     170:	000d4402 	bytepick.d	$r2,$r0,$r17,0x2
     174:	6d03061c 	bgeu	$r16,$r28,66308(0x10304) # 10478 <data_size+0xf794>
     178:	00050501 	alsl.w	$r1,$r8,$r1,0x3
     17c:	0d4c0205 	0x0d4c0205
     180:	01061c00 	0x01061c00
     184:	05000605 	0x05000605
     188:	000d5002 	bytepick.d	$r2,$r0,$r20,0x2
     18c:	0402001c 	csrrd	$r28,0x80
     190:	1a051901 	pcalau12i	$r1,10440(0x28c8)
     194:	54020500 	bl	67109380(0x4000204) # 4000398 <data_size+0x3fff6b4>
     198:	011c000d 	0x011c000d
     19c:	05000505 	0x05000505
     1a0:	000d6402 	bytepick.d	$r2,$r0,$r25,0x2
     1a4:	0402001c 	csrrd	$r28,0x80
     1a8:	05180603 	0x05180603
     1ac:	02050006 	slti	$r6,$r0,320(0x140)
     1b0:	1c000d64 	pcaddu12i	$r4,107(0x6b)
     1b4:	09050106 	0x09050106
     1b8:	68020500 	bltu	$r8,$r0,516(0x204) # 3bc <data_size-0x928>
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
     254:	64031c00 	bge	$r0,$r0,796(0x31c) # 570 <data_size-0x774>
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
     3c4:	40020500 	beqz	$r8,516(0x204) # 5c8 <data_size-0x71c>
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
     418:	5c020500 	bne	$r8,$r0,516(0x204) # 61c <data_size-0x6c8>
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
     494:	61686374 	blt	$r27,$r20,92256(0x16860) # 16cf4 <data_size+0x16010>
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
     524:	65010100 	bge	$r8,$r0,65792(0x10100) # 10624 <data_size+0xf940>
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
     65c:	48020500 	bcnez	$fcc0,516(0x204) # 860 <data_size-0x484>
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
     6ac:	69727000 	bltu	$r0,$r0,94832(0x17270) # 1791c <data_size+0x16c38>
     6b0:	6162746e 	blt	$r3,$r14,90740(0x16274) # 16924 <data_size+0x15c40>
     6b4:	632e6573 	blt	$r11,$r19,-53660(0x32e64) # ffff3518 <_stack+0xe3fe14a8>
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
     850:	09010100 	0x09010100
     854:	04000008 	csrrd	$r8,0x0
     858:	00003700 	revb.4h	$r0,$r24
     85c:	01010100 	fadd.d	$f0,$f8,$f0
     860:	000df2f6 	bytepick.d	$r22,$r23,$r28,0x3
     864:	01010101 	fadd.d	$f1,$f8,$f0
     868:	01000000 	0x01000000
     86c:	2e010000 	0x2e010000
     870:	6e692f2e 	bgeu	$r25,$r14,-104148(0x2692c) # fffe719c <_stack+0xe3fd512c>
     874:	64756c63 	bge	$r3,$r3,30060(0x756c) # 7de0 <data_size+0x70fc>
     878:	73000065 	0x73000065
     87c:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe71ec <_stack+0xe3fd517c>
     880:	00632e67 	bstrins.w	$r7,$r19,0x3,0xb
     884:	63000000 	blt	$r0,$r0,-65536(0x30000) # ffff0884 <_stack+0xe3fde814>
     888:	6f6d6d6f 	bgeu	$r11,$r15,-37524(0x36d6c) # ffff75f4 <_stack+0xe3fe5584>
     88c:	00682e6e 	bstrins.w	$r14,$r19,0x8,0xb
     890:	00000001 	0x00000001
     894:	50020500 	b	67109380(0x4000204) # 4000a98 <data_size+0x3fffdb4>
     898:	221c0010 	ll.d	$r16,$r0,7168(0x1c00)
     89c:	05001705 	0x05001705
     8a0:	00105002 	add.w	$r2,$r0,$r20
     8a4:	0505181c 	0x0505181c
     8a8:	50020500 	b	67109380(0x4000204) # 4000aac <data_size+0x3fffdc8>
     8ac:	181c0010 	pcaddi	$r16,57344(0xe000)
     8b0:	05000505 	0x05000505
     8b4:	00105002 	add.w	$r2,$r0,$r20
     8b8:	0501061c 	0x0501061c
     8bc:	0205000b 	slti	$r11,$r0,320(0x140)
     8c0:	1c001058 	pcaddu12i	$r24,130(0x82)
     8c4:	000c0516 	bytepick.d	$r22,$r8,$r1,0x0
     8c8:	105c0205 	addu16i.d	$r5,$r16,5888(0x1700)
     8cc:	19061c00 	pcaddi	$r0,-511776(0x830e0)
     8d0:	05000905 	0x05000905
     8d4:	00105c02 	add.w	$r2,$r0,$r23
     8d8:	0501061c 	0x0501061c
     8dc:	0205000d 	slti	$r13,$r0,320(0x140)
     8e0:	1c001060 	pcaddu12i	$r0,131(0x83)
     8e4:	000c0516 	bytepick.d	$r22,$r8,$r1,0x0
     8e8:	10640205 	addu16i.d	$r5,$r16,6400(0x1900)
     8ec:	05011c00 	0x05011c00
     8f0:	0205000b 	slti	$r11,$r0,320(0x140)
     8f4:	1c00106c 	pcaddu12i	$r12,131(0x83)
     8f8:	0001051b 	0x0001051b
     8fc:	10740205 	addu16i.d	$r5,$r16,7424(0x1d00)
     900:	05121c00 	0x05121c00
     904:	0205000c 	slti	$r12,$r0,320(0x140)
     908:	1c001078 	pcaddu12i	$r24,131(0x83)
     90c:	05051b06 	0x05051b06
     910:	78020500 	0x78020500
     914:	061c0010 	cacop	0x10,$r0,1792(0x700)
     918:	00010518 	0x00010518
     91c:	10800205 	addu16i.d	$r5,$r16,8192(0x2000)
     920:	27061c00 	stptr.d	$r0,$r0,1564(0x61c)
     924:	05002405 	0x05002405
     928:	00108002 	add.d	$r2,$r0,$r0
     92c:	0505181c 	0x0505181c
     930:	80020500 	0x80020500
     934:	181c0010 	pcaddi	$r16,57344(0xe000)
     938:	05000505 	0x05000505
     93c:	00108002 	add.d	$r2,$r0,$r0
     940:	0501061c 	0x0501061c
     944:	0205000b 	slti	$r11,$r0,320(0x140)
     948:	1c001084 	pcaddu12i	$r4,132(0x84)
     94c:	00160501 	orn	$r1,$r8,$r1
     950:	108c0205 	addu16i.d	$r5,$r16,8960(0x2300)
     954:	05161c00 	0x05161c00
     958:	0205000c 	slti	$r12,$r0,320(0x140)
     95c:	1c001094 	pcaddu12i	$r20,132(0x84)
     960:	01040200 	0x01040200
     964:	00160518 	orn	$r24,$r8,$r1
     968:	109c0205 	addu16i.d	$r5,$r16,9984(0x2700)
     96c:	02001c00 	slti	$r0,$r0,7(0x7)
     970:	18060004 	pcaddi	$r4,12288(0x3000)
     974:	05000905 	0x05000905
     978:	00109c02 	add.d	$r2,$r0,$r7
     97c:	0501061c 	0x0501061c
     980:	0205000d 	slti	$r13,$r0,320(0x140)
     984:	1c0010a0 	pcaddu12i	$r0,133(0x85)
     988:	00190516 	srl.d	$r22,$r8,$r1
     98c:	10a40205 	addu16i.d	$r5,$r16,10496(0x2900)
     990:	05011c00 	0x05011c00
     994:	0205000b 	slti	$r11,$r0,320(0x140)
     998:	1c0010a8 	pcaddu12i	$r8,133(0x85)
     99c:	0001051b 	0x0001051b
     9a0:	10b00205 	addu16i.d	$r5,$r16,11264(0x2c00)
     9a4:	05121c00 	0x05121c00
     9a8:	0205000c 	slti	$r12,$r0,320(0x140)
     9ac:	1c0010b4 	pcaddu12i	$r20,133(0x85)
     9b0:	05051b06 	0x05051b06
     9b4:	b4020500 	0xb4020500
     9b8:	061c0010 	cacop	0x10,$r0,1792(0x700)
     9bc:	00010518 	0x00010518
     9c0:	10bc0205 	addu16i.d	$r5,$r16,12032(0x2f00)
     9c4:	26061c00 	ldptr.d	$r0,$r0,1564(0x61c)
     9c8:	05002405 	0x05002405
     9cc:	0010bc02 	add.d	$r2,$r0,$r15
     9d0:	05051b1c 	0x05051b1c
     9d4:	bc020500 	0xbc020500
     9d8:	181c0010 	pcaddi	$r16,57344(0xe000)
     9dc:	05000505 	0x05000505
     9e0:	0010bc02 	add.d	$r2,$r0,$r15
     9e4:	0516061c 	0x0516061c
     9e8:	0205000b 	slti	$r11,$r0,320(0x140)
     9ec:	1c0010c0 	pcaddu12i	$r0,134(0x86)
     9f0:	01040200 	0x01040200
     9f4:	16051906 	lu32i.d	$r6,10440(0x28c8)
     9f8:	c0020500 	0xc0020500
     9fc:	061c0010 	cacop	0x10,$r0,1792(0x700)
     a00:	001a0516 	0x001a0516
     a04:	10c40205 	addu16i.d	$r5,$r16,12544(0x3100)
     a08:	05011c00 	0x05011c00
     a0c:	02050015 	slti	$r21,$r0,320(0x140)
     a10:	1c0010c8 	pcaddu12i	$r8,134(0x86)
     a14:	00100501 	add.w	$r1,$r8,$r1
     a18:	10cc0205 	addu16i.d	$r5,$r16,13056(0x3300)
     a1c:	05011c00 	0x05011c00
     a20:	02050013 	slti	$r19,$r0,320(0x140)
     a24:	1c0010d0 	pcaddu12i	$r16,134(0x86)
     a28:	000b0501 	0x000b0501
     a2c:	10d40205 	addu16i.d	$r5,$r16,13568(0x3500)
     a30:	02001c00 	slti	$r0,$r0,7(0x7)
     a34:	051b0004 	0x051b0004
     a38:	02050001 	slti	$r1,$r0,320(0x140)
     a3c:	1c0010d8 	pcaddu12i	$r24,134(0x86)
     a40:	31052406 	0x31052406
     a44:	d8020500 	0xd8020500
     a48:	181c0010 	pcaddi	$r16,57344(0xe000)
     a4c:	05000505 	0x05000505
     a50:	0010d802 	add.d	$r2,$r0,$r22
     a54:	0505181c 	0x0505181c
     a58:	d8020500 	0xd8020500
     a5c:	061c0010 	cacop	0x10,$r0,1792(0x700)
     a60:	000b0501 	0x000b0501
     a64:	10e00205 	addu16i.d	$r5,$r16,14336(0x3800)
     a68:	05161c00 	0x05161c00
     a6c:	0205000b 	slti	$r11,$r0,320(0x140)
     a70:	1c0010e4 	pcaddu12i	$r4,135(0x87)
     a74:	09051906 	0x09051906
     a78:	e4020500 	0xe4020500
     a7c:	061c0010 	cacop	0x10,$r0,1792(0x700)
     a80:	00130501 	maskeqz	$r1,$r8,$r1
     a84:	10e80205 	addu16i.d	$r5,$r16,14848(0x3a00)
     a88:	051a1c00 	0x051a1c00
     a8c:	0205000b 	slti	$r11,$r0,320(0x140)
     a90:	1c0010ec 	pcaddu12i	$r12,135(0x87)
     a94:	00110514 	sub.w	$r20,$r8,$r1
     a98:	10f00205 	addu16i.d	$r5,$r16,15360(0x3c00)
     a9c:	05181c00 	0x05181c00
     aa0:	02050011 	slti	$r17,$r0,320(0x140)
     aa4:	1c0010f8 	pcaddu12i	$r24,135(0x87)
     aa8:	09051906 	0x09051906
     aac:	f8020500 	0xf8020500
     ab0:	061c0010 	cacop	0x10,$r0,1792(0x700)
     ab4:	000b0513 	0x000b0513
     ab8:	10fc0205 	addu16i.d	$r5,$r16,16128(0x3f00)
     abc:	1d061c00 	pcaddu12i	$r0,-511776(0x830e0)
     ac0:	05000505 	0x05000505
     ac4:	0010fc02 	add.d	$r2,$r0,$r31
     ac8:	0518061c 	0x0518061c
     acc:	02050001 	slti	$r1,$r0,320(0x140)
     ad0:	1c001100 	pcaddu12i	$r0,136(0x88)
     ad4:	33052506 	0x33052506
     ad8:	00020500 	0x00020500
     adc:	181c0011 	pcaddi	$r17,57344(0xe000)
     ae0:	05000505 	0x05000505
     ae4:	00110002 	sub.w	$r2,$r0,$r0
     ae8:	0501061c 	0x0501061c
     aec:	0205000b 	slti	$r11,$r0,320(0x140)
     af0:	1c001104 	pcaddu12i	$r4,136(0x88)
     af4:	00150501 	or	$r1,$r8,$r1
     af8:	110c0205 	addu16i.d	$r5,$r16,17152(0x4300)
     afc:	05011c00 	0x05011c00
     b00:	02050012 	slti	$r18,$r0,320(0x140)
     b04:	1c001110 	pcaddu12i	$r16,136(0x88)
     b08:	00210501 	div.wu	$r1,$r8,$r1
     b0c:	111c0205 	addu16i.d	$r5,$r16,18176(0x4700)
     b10:	02001c00 	slti	$r0,$r0,7(0x7)
     b14:	05010104 	0x05010104
     b18:	02050015 	slti	$r21,$r0,320(0x140)
     b1c:	1c001120 	pcaddu12i	$r0,137(0x89)
     b20:	00120501 	slt	$r1,$r8,$r1
     b24:	11240205 	addu16i.d	$r5,$r16,18688(0x4900)
     b28:	02001c00 	slti	$r0,$r0,7(0x7)
     b2c:	05010204 	0x05010204
     b30:	0205002b 	slti	$r11,$r1,320(0x140)
     b34:	1c00112c 	pcaddu12i	$r12,137(0x89)
     b38:	00210501 	div.wu	$r1,$r8,$r1
     b3c:	11300205 	addu16i.d	$r5,$r16,19456(0x4c00)
     b40:	02001c00 	slti	$r0,$r0,7(0x7)
     b44:	18060004 	pcaddi	$r4,12288(0x3000)
     b48:	05000905 	0x05000905
     b4c:	00113002 	sub.w	$r2,$r0,$r12
     b50:	0501061c 	0x0501061c
     b54:	02050019 	slti	$r25,$r0,320(0x140)
     b58:	1c001134 	pcaddu12i	$r20,137(0x89)
     b5c:	00120501 	slt	$r1,$r8,$r1
     b60:	11380205 	addu16i.d	$r5,$r16,19968(0x4e00)
     b64:	05161c00 	0x05161c00
     b68:	0205000b 	slti	$r11,$r0,320(0x140)
     b6c:	1c00113c 	pcaddu12i	$r28,137(0x89)
     b70:	0019051a 	srl.d	$r26,$r8,$r1
     b74:	11400205 	addu16i.d	$r5,$r16,20480(0x5000)
     b78:	05181c00 	0x05181c00
     b7c:	02050001 	slti	$r1,$r0,320(0x140)
     b80:	1c001148 	pcaddu12i	$r8,138(0x8a)
     b84:	05051606 	0x05051606
     b88:	48020500 	bcnez	$fcc0,516(0x204) # d8c <data_size+0xa8>
     b8c:	061c0011 	cacop	0x11,$r0,1792(0x700)
     b90:	00330513 	0x00330513
     b94:	114c0205 	addu16i.d	$r5,$r16,21248(0x5300)
     b98:	051b1c00 	0x051b1c00
     b9c:	02050021 	slti	$r1,$r1,320(0x140)
     ba0:	1c001154 	pcaddu12i	$r20,138(0x8a)
     ba4:	00360501 	0x00360501
     ba8:	115c0205 	addu16i.d	$r5,$r16,22272(0x5700)
     bac:	05181c00 	0x05181c00
     bb0:	02050001 	slti	$r1,$r0,320(0x140)
     bb4:	1c001160 	pcaddu12i	$r0,139(0x8b)
     bb8:	00190516 	srl.d	$r22,$r8,$r1
     bbc:	11640205 	addu16i.d	$r5,$r16,22784(0x5900)
     bc0:	05181c00 	0x05181c00
     bc4:	02050001 	slti	$r1,$r0,320(0x140)
     bc8:	1c001168 	pcaddu12i	$r8,139(0x8b)
     bcc:	1f052206 	pcaddu18i	$r6,-513776(0x82910)
     bd0:	68020500 	bltu	$r8,$r0,516(0x204) # dd4 <data_size+0xf0>
     bd4:	181c0011 	pcaddi	$r17,57344(0xe000)
     bd8:	05000505 	0x05000505
     bdc:	00116802 	sub.w	$r2,$r0,$r26
     be0:	0501061c 	0x0501061c
     be4:	0205000c 	slti	$r12,$r0,320(0x140)
     be8:	1c00116c 	pcaddu12i	$r12,139(0x8b)
     bec:	000b0501 	0x000b0501
     bf0:	11700205 	addu16i.d	$r5,$r16,23552(0x5c00)
     bf4:	18061c00 	pcaddi	$r0,12512(0x30e0)
     bf8:	05000905 	0x05000905
     bfc:	00117002 	sub.w	$r2,$r0,$r28
     c00:	0501061c 	0x0501061c
     c04:	0205000c 	slti	$r12,$r0,320(0x140)
     c08:	1c00117c 	pcaddu12i	$r28,139(0x8b)
     c0c:	09050106 	0x09050106
     c10:	7c020500 	0x7c020500
     c14:	1a1c0011 	pcalau12i	$r17,57344(0xe000)
     c18:	05000905 	0x05000905
     c1c:	00117c02 	sub.w	$r2,$r0,$r31
     c20:	0501061c 	0x0501061c
     c24:	0205000b 	slti	$r11,$r0,320(0x140)
     c28:	1c001180 	pcaddu12i	$r0,140(0x8c)
     c2c:	000c0513 	bytepick.d	$r19,$r8,$r1,0x0
     c30:	11840205 	addu16i.d	$r5,$r16,24832(0x6100)
     c34:	05011c00 	0x05011c00
     c38:	0205000b 	slti	$r11,$r0,320(0x140)
     c3c:	1c001188 	pcaddu12i	$r8,140(0x8c)
     c40:	000c051d 	bytepick.d	$r29,$r8,$r1,0x0
     c44:	118c0205 	addu16i.d	$r5,$r16,25344(0x6300)
     c48:	05181c00 	0x05181c00
     c4c:	02050001 	slti	$r1,$r0,320(0x140)
     c50:	1c001194 	pcaddu12i	$r20,140(0x8c)
     c54:	20052306 	ll.w	$r6,$r24,1312(0x520)
     c58:	94020500 	0x94020500
     c5c:	181c0011 	pcaddi	$r17,57344(0xe000)
     c60:	05000505 	0x05000505
     c64:	00119402 	sub.d	$r2,$r0,$r5
     c68:	0501061c 	0x0501061c
     c6c:	0205000c 	slti	$r12,$r0,320(0x140)
     c70:	1c001198 	pcaddu12i	$r24,140(0x8c)
     c74:	000b0501 	0x000b0501
     c78:	119c0205 	addu16i.d	$r5,$r16,26368(0x6700)
     c7c:	18061c00 	pcaddi	$r0,12512(0x30e0)
     c80:	05000905 	0x05000905
     c84:	00119c02 	sub.d	$r2,$r0,$r7
     c88:	0501061c 	0x0501061c
     c8c:	0205000c 	slti	$r12,$r0,320(0x140)
     c90:	1c0011a8 	pcaddu12i	$r8,141(0x8d)
     c94:	09050106 	0x09050106
     c98:	a8020500 	0xa8020500
     c9c:	1a1c0011 	pcalau12i	$r17,57344(0xe000)
     ca0:	05000905 	0x05000905
     ca4:	0011a802 	sub.d	$r2,$r0,$r10
     ca8:	0501061c 	0x0501061c
     cac:	0205000b 	slti	$r11,$r0,320(0x140)
     cb0:	1c0011ac 	pcaddu12i	$r12,141(0x8d)
     cb4:	000c0513 	bytepick.d	$r19,$r8,$r1,0x0
     cb8:	11b00205 	addu16i.d	$r5,$r16,27648(0x6c00)
     cbc:	05011c00 	0x05011c00
     cc0:	0205000b 	slti	$r11,$r0,320(0x140)
     cc4:	1c0011b4 	pcaddu12i	$r20,141(0x8d)
     cc8:	05051d06 	0x05051d06
     ccc:	b4020500 	0xb4020500
     cd0:	061c0011 	cacop	0x11,$r0,1792(0x700)
     cd4:	00010518 	0x00010518
     cd8:	11bc0205 	addu16i.d	$r5,$r16,28416(0x6f00)
     cdc:	7d061c00 	0x7d061c00
     ce0:	05002305 	0x05002305
     ce4:	0011bc02 	sub.d	$r2,$r0,$r15
     ce8:	05051b1c 	0x05051b1c
     cec:	bc020500 	0xbc020500
     cf0:	181c0011 	pcaddi	$r17,57344(0xe000)
     cf4:	05000505 	0x05000505
     cf8:	0011bc02 	sub.d	$r2,$r0,$r15
     cfc:	0501061c 	0x0501061c
     d00:	0205000b 	slti	$r11,$r0,320(0x140)
     d04:	1c0011c4 	pcaddu12i	$r4,142(0x8e)
     d08:	000b0516 	0x000b0516
     d0c:	11c80205 	addu16i.d	$r5,$r16,29184(0x7200)
     d10:	19061c00 	pcaddi	$r0,-511776(0x830e0)
     d14:	05000905 	0x05000905
     d18:	0011c802 	sub.d	$r2,$r0,$r18
     d1c:	0501061c 	0x0501061c
     d20:	0205000c 	slti	$r12,$r0,320(0x140)
     d24:	1c0011cc 	pcaddu12i	$r12,142(0x8e)
     d28:	000f0501 	bytepick.d	$r1,$r8,$r1,0x6
     d2c:	11d00205 	addu16i.d	$r5,$r16,29696(0x7400)
     d30:	05161c00 	0x05161c00
     d34:	0205000b 	slti	$r11,$r0,320(0x140)
     d38:	1c0011d4 	pcaddu12i	$r20,142(0x8e)
     d3c:	05051a06 	0x05051a06
     d40:	d4020500 	0xd4020500
     d44:	061c0011 	cacop	0x11,$r0,1792(0x700)
     d48:	00010519 	0x00010519
     d4c:	11d80205 	addu16i.d	$r5,$r16,30208(0x7600)
     d50:	28061c00 	ld.b	$r0,$r0,391(0x187)
     d54:	05002e05 	0x05002e05
     d58:	0011d802 	sub.d	$r2,$r0,$r22
     d5c:	05051b1c 	0x05051b1c
     d60:	d8020500 	0xd8020500
     d64:	181c0011 	pcaddi	$r17,57344(0xe000)
     d68:	05000505 	0x05000505
     d6c:	0011d802 	sub.d	$r2,$r0,$r22
     d70:	0505181c 	0x0505181c
     d74:	d8020500 	0xd8020500
     d78:	061c0011 	cacop	0x11,$r0,1792(0x700)
     d7c:	000b0501 	0x000b0501
     d80:	11e00205 	addu16i.d	$r5,$r16,30720(0x7800)
     d84:	05161c00 	0x05161c00
     d88:	0205000b 	slti	$r11,$r0,320(0x140)
     d8c:	1c0011e4 	pcaddu12i	$r4,143(0x8f)
     d90:	09051906 	0x09051906
     d94:	e4020500 	0xe4020500
     d98:	061c0011 	cacop	0x11,$r0,1792(0x700)
     d9c:	00140501 	nor	$r1,$r8,$r1
     da0:	11e80205 	addu16i.d	$r5,$r16,31232(0x7a00)
     da4:	05011c00 	0x05011c00
     da8:	02050011 	slti	$r17,$r0,320(0x140)
     dac:	1c0011ec 	pcaddu12i	$r12,143(0x8f)
     db0:	000c0501 	bytepick.d	$r1,$r8,$r1,0x0
     db4:	11f00205 	addu16i.d	$r5,$r16,31744(0x7c00)
     db8:	05011c00 	0x05011c00
     dbc:	0205000f 	slti	$r15,$r0,320(0x140)
     dc0:	1c0011f4 	pcaddu12i	$r20,143(0x8f)
     dc4:	000b0516 	0x000b0516
     dc8:	11f80205 	addu16i.d	$r5,$r16,32256(0x7e00)
     dcc:	1a061c00 	pcalau12i	$r0,12512(0x30e0)
     dd0:	05000505 	0x05000505
     dd4:	0011f802 	sub.d	$r2,$r0,$r30
     dd8:	0519061c 	0x0519061c
     ddc:	02050001 	slti	$r1,$r0,320(0x140)
     de0:	1c0011fc 	pcaddu12i	$r28,143(0x8f)
     de4:	2f052306 	0x2f052306
     de8:	fc020500 	0xfc020500
     dec:	1b1c0011 	pcalau12i	$r17,-466944(0x8e000)
     df0:	05000505 	0x05000505
     df4:	0011fc02 	sub.d	$r2,$r0,$r31
     df8:	0505181c 	0x0505181c
     dfc:	fc020500 	0xfc020500
     e00:	181c0011 	pcaddi	$r17,57344(0xe000)
     e04:	05000505 	0x05000505
     e08:	0011fc02 	sub.d	$r2,$r0,$r31
     e0c:	0501061c 	0x0501061c
     e10:	02050008 	slti	$r8,$r0,320(0x140)
     e14:	1c001200 	pcaddu12i	$r0,144(0x90)
     e18:	01040200 	0x01040200
     e1c:	00140501 	nor	$r1,$r8,$r1
     e20:	12040205 	addu16i.d	$r5,$r16,-32512(0x8100)
     e24:	05011c00 	0x05011c00
     e28:	0205000f 	slti	$r15,$r0,320(0x140)
     e2c:	1c001208 	pcaddu12i	$r8,144(0x90)
     e30:	00040200 	alsl.w	$r0,$r16,$r0,0x1
     e34:	09051806 	0x09051806
     e38:	08020500 	0x08020500
     e3c:	061c0012 	cacop	0x12,$r0,1792(0x700)
     e40:	00130501 	maskeqz	$r1,$r8,$r1
     e44:	120c0205 	addu16i.d	$r5,$r16,-32000(0x8300)
     e48:	18061c00 	pcaddi	$r0,12512(0x30e0)
     e4c:	05000905 	0x05000905
     e50:	00120c02 	slt	$r2,$r0,$r3
     e54:	0501061c 	0x0501061c
     e58:	0205000f 	slti	$r15,$r0,320(0x140)
     e5c:	1c001210 	pcaddu12i	$r16,144(0x90)
     e60:	0d051806 	0x0d051806
     e64:	10020500 	addu16i.d	$r0,$r8,129(0x81)
     e68:	061c0012 	cacop	0x12,$r0,1792(0x700)
     e6c:	00130501 	maskeqz	$r1,$r8,$r1
     e70:	12140205 	addu16i.d	$r5,$r16,-31488(0x8500)
     e74:	05011c00 	0x05011c00
     e78:	02050015 	slti	$r21,$r0,320(0x140)
     e7c:	1c001218 	pcaddu12i	$r24,144(0x90)
     e80:	00130501 	maskeqz	$r1,$r8,$r1
     e84:	12200205 	addu16i.d	$r5,$r16,-30720(0x8800)
     e88:	05161c00 	0x05161c00
     e8c:	0205000f 	slti	$r15,$r0,320(0x140)
     e90:	1c00122c 	pcaddu12i	$r12,145(0x91)
     e94:	000f051b 	bytepick.d	$r27,$r8,$r1,0x6
     e98:	12340205 	addu16i.d	$r5,$r16,-29440(0x8d00)
     e9c:	18061c00 	pcaddi	$r0,12512(0x30e0)
     ea0:	05000d05 	0x05000d05
     ea4:	00123402 	slt	$r2,$r0,$r13
     ea8:	0501061c 	0x0501061c
     eac:	02050018 	slti	$r24,$r0,320(0x140)
     eb0:	1c001238 	pcaddu12i	$r24,145(0x91)
     eb4:	00150501 	or	$r1,$r8,$r1
     eb8:	123c0205 	addu16i.d	$r5,$r16,-28928(0x8f00)
     ebc:	05011c00 	0x05011c00
     ec0:	02050010 	slti	$r16,$r0,320(0x140)
     ec4:	1c001240 	pcaddu12i	$r0,146(0x92)
     ec8:	00130501 	maskeqz	$r1,$r8,$r1
     ecc:	12440205 	addu16i.d	$r5,$r16,-28416(0x9100)
     ed0:	05161c00 	0x05161c00
     ed4:	0205000f 	slti	$r15,$r0,320(0x140)
     ed8:	1c001248 	pcaddu12i	$r8,146(0x92)
     edc:	0001051d 	0x0001051d
     ee0:	12500205 	addu16i.d	$r5,$r16,-27648(0x9400)
     ee4:	28061c00 	ld.b	$r0,$r0,391(0x187)
     ee8:	05003205 	0x05003205
     eec:	00125002 	slt	$r2,$r0,$r20
     ef0:	0505181c 	0x0505181c
     ef4:	50020500 	b	67109380(0x4000204) # 40010f8 <data_size+0x4000414>
     ef8:	181c0012 	pcaddi	$r18,57344(0xe000)
     efc:	05000505 	0x05000505
     f00:	00125002 	slt	$r2,$r0,$r20
     f04:	0505181c 	0x0505181c
     f08:	50020500 	b	67109380(0x4000204) # 400110c <data_size+0x4000428>
     f0c:	061c0012 	cacop	0x12,$r0,1792(0x700)
     f10:	000b0501 	0x000b0501
     f14:	12540205 	addu16i.d	$r5,$r16,-27392(0x9500)
     f18:	18061c00 	pcaddi	$r0,12512(0x30e0)
     f1c:	05000905 	0x05000905
     f20:	00125402 	slt	$r2,$r0,$r21
     f24:	0501061c 	0x0501061c
     f28:	0205000d 	slti	$r13,$r0,320(0x140)
     f2c:	1c001258 	pcaddu12i	$r24,146(0x92)
     f30:	00140501 	nor	$r1,$r8,$r1
     f34:	12600205 	addu16i.d	$r5,$r16,-26624(0x9800)
     f38:	05011c00 	0x05011c00
     f3c:	0205000c 	slti	$r12,$r0,320(0x140)
     f40:	1c001268 	pcaddu12i	$r8,147(0x93)
     f44:	000d0501 	bytepick.d	$r1,$r8,$r1,0x2
     f48:	126c0205 	addu16i.d	$r5,$r16,-25856(0x9b00)
     f4c:	05011c00 	0x05011c00
     f50:	02050014 	slti	$r20,$r0,320(0x140)
     f54:	1c001270 	pcaddu12i	$r16,147(0x93)
     f58:	000c0501 	bytepick.d	$r1,$r8,$r1,0x0
     f5c:	12740205 	addu16i.d	$r5,$r16,-25344(0x9d00)
     f60:	01061c00 	0x01061c00
     f64:	05000905 	0x05000905
     f68:	00127402 	slt	$r2,$r0,$r29
     f6c:	09051a1c 	0x09051a1c
     f70:	74020500 	xvsle.b	$xr0,$xr8,$xr1
     f74:	061c0012 	cacop	0x12,$r0,1792(0x700)
     f78:	000c0501 	bytepick.d	$r1,$r8,$r1,0x0
     f7c:	12780205 	addu16i.d	$r5,$r16,-25088(0x9e00)
     f80:	05011c00 	0x05011c00
     f84:	02050013 	slti	$r19,$r0,320(0x140)
     f88:	1c00127c 	pcaddu12i	$r28,147(0x93)
     f8c:	000b0513 	0x000b0513
     f90:	12800205 	addu16i.d	$r5,$r16,-24576(0xa000)
     f94:	051d1c00 	0x051d1c00
     f98:	0205000c 	slti	$r12,$r0,320(0x140)
     f9c:	1c001284 	pcaddu12i	$r4,148(0x94)
     fa0:	00010518 	0x00010518
     fa4:	12880205 	addu16i.d	$r5,$r16,-24064(0xa200)
     fa8:	12061c00 	addu16i.d	$r0,$r0,-32377(0x8187)
     fac:	05000d05 	0x05000d05
     fb0:	00128802 	sltu	$r2,$r0,$r2
     fb4:	0512061c 	0x0512061c
     fb8:	02050032 	slti	$r18,$r1,320(0x140)
     fbc:	1c00128c 	pcaddu12i	$r12,148(0x94)
     fc0:	001a051c 	0x001a051c
     fc4:	12940205 	addu16i.d	$r5,$r16,-23296(0xa500)
     fc8:	05011c00 	0x05011c00
     fcc:	0205002f 	slti	$r15,$r1,320(0x140)
     fd0:	1c00129c 	pcaddu12i	$r28,148(0x94)
     fd4:	0001051c 	0x0001051c
     fd8:	12a00205 	addu16i.d	$r5,$r16,-22528(0xa800)
     fdc:	05121c00 	0x05121c00
     fe0:	02050014 	slti	$r20,$r0,320(0x140)
     fe4:	1c0012a4 	pcaddu12i	$r4,149(0x95)
     fe8:	0001051c 	0x0001051c
     fec:	12a80205 	addu16i.d	$r5,$r16,-22016(0xaa00)
     ff0:	19061c00 	pcaddi	$r0,-511776(0x830e0)
     ff4:	05001e05 	0x05001e05
     ff8:	0012a802 	sltu	$r2,$r0,$r10
     ffc:	0205181c 	slti	$r28,$r0,326(0x146)
    1000:	a8020500 	0xa8020500
    1004:	031c0012 	lu52i.d	$r18,$r0,1792(0x700)
    1008:	05017fa2 	0x05017fa2
    100c:	02050005 	slti	$r5,$r0,320(0x140)
    1010:	1c0012a8 	pcaddu12i	$r8,149(0x95)
    1014:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1018:	12a80205 	addu16i.d	$r5,$r16,-22016(0xaa00)
    101c:	01061c00 	0x01061c00
    1020:	05000b05 	0x05000b05
    1024:	0012b002 	sltu	$r2,$r0,$r12
    1028:	0518061c 	0x0518061c
    102c:	02050009 	slti	$r9,$r0,320(0x140)
    1030:	1c0012b0 	pcaddu12i	$r16,149(0x95)
    1034:	0c050106 	0x0c050106
    1038:	b4020500 	0xb4020500
    103c:	011c0012 	0x011c0012
    1040:	05000f05 	0x05000f05
    1044:	0012b802 	sltu	$r2,$r0,$r14
    1048:	0b05161c 	0x0b05161c
    104c:	bc020500 	0xbc020500
    1050:	751c0012 	xvilvh.b	$xr18,$xr0,$xr0
    1054:	05000105 	0x05000105
    1058:	0012c002 	sltu	$r2,$r0,$r16
    105c:	0101001c 	fadd.d	$f28,$f0,$f0
    1060:	000002e6 	0x000002e6
    1064:	00330004 	0x00330004
    1068:	01010000 	fadd.d	$f0,$f0,$f0
    106c:	0df2f601 	0x0df2f601
    1070:	01010100 	fadd.d	$f0,$f8,$f0
    1074:	00000001 	0x00000001
    1078:	01000001 	0x01000001
    107c:	692f2e2e 	bltu	$r17,$r14,77612(0x12f2c) # 13fa8 <data_size+0x132c4>
    1080:	756c636e 	0x756c636e
    1084:	00006564 	rdtimeh.w	$r4,$r11
    1088:	656d6974 	bge	$r11,$r20,93544(0x16d68) # 17df0 <data_size+0x1710c>
    108c:	0000632e 	rdtimel.w	$r14,$r25
    1090:	69740000 	bltu	$r0,$r0,95232(0x17400) # 18490 <data_size+0x177ac>
    1094:	682e656d 	bltu	$r11,$r13,11876(0x2e64) # 3ef8 <data_size+0x3214>
    1098:	00000100 	0x00000100
    109c:	02050000 	slti	$r0,$r0,320(0x140)
    10a0:	1c0012c0 	pcaddu12i	$r0,150(0x96)
    10a4:	00010528 	0x00010528
    10a8:	12c00205 	addu16i.d	$r5,$r16,-20480(0xb000)
    10ac:	05181c00 	0x05181c00
    10b0:	02050005 	slti	$r5,$r0,320(0x140)
    10b4:	1c0012c0 	pcaddu12i	$r0,150(0x96)
    10b8:	05017303 	0x05017303
    10bc:	02050005 	slti	$r5,$r0,320(0x140)
    10c0:	1c0012c0 	pcaddu12i	$r0,150(0x96)
    10c4:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    10c8:	12c00205 	addu16i.d	$r5,$r16,-20480(0xb000)
    10cc:	22061c00 	ll.d	$r0,$r0,1564(0x61c)
    10d0:	05000105 	0x05000105
    10d4:	0012c802 	sltu	$r2,$r0,$r18
    10d8:	0175031c 	0x0175031c
    10dc:	05000505 	0x05000505
    10e0:	0012d002 	sltu	$r2,$r0,$r20
    10e4:	051e061c 	0x051e061c
    10e8:	02050005 	slti	$r5,$r0,320(0x140)
    10ec:	1c0012d0 	pcaddu12i	$r16,150(0x96)
    10f0:	01051d06 	fmul.d	$f6,$f8,$f7
    10f4:	e0020500 	0xe0020500
    10f8:	061c0012 	cacop	0x12,$r0,1792(0x700)
    10fc:	0001051a 	0x0001051a
    1100:	12e00205 	addu16i.d	$r5,$r16,-18432(0xb800)
    1104:	05181c00 	0x05181c00
    1108:	02050005 	slti	$r5,$r0,320(0x140)
    110c:	1c0012e0 	pcaddu12i	$r0,151(0x97)
    1110:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1114:	12e40205 	addu16i.d	$r5,$r16,-18176(0xb900)
    1118:	051b1c00 	0x051b1c00
    111c:	02050005 	slti	$r5,$r0,320(0x140)
    1120:	1c0012e4 	pcaddu12i	$r4,151(0x97)
    1124:	01051806 	fmul.d	$f6,$f0,$f6
    1128:	e8020500 	0xe8020500
    112c:	061c0012 	cacop	0x12,$r0,1792(0x700)
    1130:	0001051a 	0x0001051a
    1134:	12e80205 	addu16i.d	$r5,$r16,-17920(0xba00)
    1138:	05181c00 	0x05181c00
    113c:	02050005 	slti	$r5,$r0,320(0x140)
    1140:	1c0012e8 	pcaddu12i	$r8,151(0x97)
    1144:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1148:	12e80205 	addu16i.d	$r5,$r16,-17920(0xba00)
    114c:	63031c00 	blt	$r0,$r0,-64740(0x3031c) # ffff1468 <_stack+0xe3fdf3f8>
    1150:	00050501 	alsl.w	$r1,$r8,$r1,0x3
    1154:	12e80205 	addu16i.d	$r5,$r16,-17920(0xba00)
    1158:	05181c00 	0x05181c00
    115c:	02050005 	slti	$r5,$r0,320(0x140)
    1160:	1c0012e8 	pcaddu12i	$r8,151(0x97)
    1164:	01053106 	fmul.d	$f6,$f8,$f12
    1168:	f0020500 	0xf0020500
    116c:	031c0012 	lu52i.d	$r18,$r0,1792(0x700)
    1170:	05050166 	0x05050166
    1174:	f8020500 	0xf8020500
    1178:	061c0012 	cacop	0x12,$r0,1792(0x700)
    117c:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
    1180:	12f80205 	addu16i.d	$r5,$r16,-16896(0xbe00)
    1184:	052d1c00 	0x052d1c00
    1188:	02050005 	slti	$r5,$r0,320(0x140)
    118c:	1c0012f8 	pcaddu12i	$r24,151(0x97)
    1190:	15050106 	lu12i.w	$r6,-514040(0x82808)
    1194:	00020500 	0x00020500
    1198:	181c0013 	pcaddi	$r19,57344(0xe000)
    119c:	05001605 	0x05001605
    11a0:	00130402 	maskeqz	$r2,$r0,$r1
    11a4:	3605161c 	0x3605161c
    11a8:	08020500 	0x08020500
    11ac:	181c0013 	pcaddi	$r19,57344(0xe000)
    11b0:	05001605 	0x05001605
    11b4:	00131402 	maskeqz	$r2,$r0,$r5
    11b8:	2805011c 	ld.b	$r28,$r8,320(0x140)
    11bc:	20020500 	ll.w	$r0,$r8,516(0x204)
    11c0:	181c0013 	pcaddi	$r19,57344(0xe000)
    11c4:	05002705 	0x05002705
    11c8:	00133402 	maskeqz	$r2,$r0,$r13
    11cc:	3605011c 	0x3605011c
    11d0:	40020500 	beqz	$r8,516(0x204) # 13d4 <data_size+0x6f0>
    11d4:	161c0013 	lu32i.d	$r19,57344(0xe000)
    11d8:	05001205 	0x05001205
    11dc:	00134402 	maskeqz	$r2,$r0,$r17
    11e0:	1205181c 	addu16i.d	$r28,$r0,-32442(0x8146)
    11e4:	48020500 	bcnez	$fcc0,516(0x204) # 13e8 <data_size+0x704>
    11e8:	181c0013 	pcaddi	$r19,57344(0xe000)
    11ec:	05001205 	0x05001205
    11f0:	00134c02 	maskeqz	$r2,$r0,$r19
    11f4:	01051a1c 	fmul.d	$f28,$f16,$f6
    11f8:	54020500 	bl	67109380(0x4000204) # 40013fc <data_size+0x4000718>
    11fc:	111c0013 	addu16i.d	$r19,$r0,18176(0x4700)
    1200:	05003605 	0x05003605
    1204:	00136002 	maskeqz	$r2,$r0,$r24
    1208:	1205011c 	addu16i.d	$r28,$r8,-32448(0x8140)
    120c:	64020500 	bge	$r8,$r0,516(0x204) # 1410 <data_size+0x72c>
    1210:	061c0013 	cacop	0x13,$r0,1792(0x700)
    1214:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1218:	13640205 	addu16i.d	$r5,$r16,-9984(0xd900)
    121c:	05181c00 	0x05181c00
    1220:	02050005 	slti	$r5,$r0,320(0x140)
    1224:	1c001364 	pcaddu12i	$r4,155(0x9b)
    1228:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    122c:	13640205 	addu16i.d	$r5,$r16,-9984(0xd900)
    1230:	05191c00 	0x05191c00
    1234:	02050005 	slti	$r5,$r0,320(0x140)
    1238:	1c001364 	pcaddu12i	$r4,155(0x9b)
    123c:	01051806 	fmul.d	$f6,$f0,$f6
    1240:	70020500 	vsle.b	$vr0,$vr8,$vr1
    1244:	061c0013 	cacop	0x13,$r0,1792(0x700)
    1248:	00010521 	0x00010521
    124c:	13700205 	addu16i.d	$r5,$r16,-9216(0xdc00)
    1250:	05181c00 	0x05181c00
    1254:	02050005 	slti	$r5,$r0,320(0x140)
    1258:	1c001370 	pcaddu12i	$r16,155(0x9b)
    125c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    1260:	13700205 	addu16i.d	$r5,$r16,-9216(0xdc00)
    1264:	50031c00 	b	796(0x31c) # 1580 <data_size+0x89c>
    1268:	00050501 	alsl.w	$r1,$r8,$r1,0x3
    126c:	13700205 	addu16i.d	$r5,$r16,-9216(0xdc00)
    1270:	05181c00 	0x05181c00
    1274:	02050005 	slti	$r5,$r0,320(0x140)
    1278:	1c001370 	pcaddu12i	$r16,155(0x9b)
    127c:	01054406 	fmul.d	$f6,$f0,$f17
    1280:	78020500 	0x78020500
    1284:	031c0013 	lu52i.d	$r19,$r0,1792(0x700)
    1288:	05050153 	0x05050153
    128c:	80020500 	0x80020500
    1290:	061c0013 	cacop	0x13,$r0,1792(0x700)
    1294:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
    1298:	13800205 	addu16i.d	$r5,$r16,-8192(0xe000)
    129c:	05401c00 	0x05401c00
    12a0:	02050005 	slti	$r5,$r0,320(0x140)
    12a4:	1c001380 	pcaddu12i	$r0,156(0x9c)
    12a8:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    12ac:	13800205 	addu16i.d	$r5,$r16,-8192(0xe000)
    12b0:	16061c00 	lu32i.d	$r0,12512(0x30e0)
    12b4:	05000605 	0x05000605
    12b8:	00138402 	masknez	$r2,$r0,$r1
    12bc:	0105191c 	fmul.d	$f28,$f8,$f6
    12c0:	94020500 	0x94020500
    12c4:	061c0013 	cacop	0x13,$r0,1792(0x700)
    12c8:	0001051b 	0x0001051b
    12cc:	13940205 	addu16i.d	$r5,$r16,-6912(0xe500)
    12d0:	05181c00 	0x05181c00
    12d4:	02050005 	slti	$r5,$r0,320(0x140)
    12d8:	1c001394 	pcaddu12i	$r20,156(0x9c)
    12dc:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    12e0:	13940205 	addu16i.d	$r5,$r16,-6912(0xe500)
    12e4:	47031c00 	bnez	$r0,197404(0x3031c) # 31600 <data_size+0x3091c>
    12e8:	00050501 	alsl.w	$r1,$r8,$r1,0x3
    12ec:	13940205 	addu16i.d	$r5,$r16,-6912(0xe500)
    12f0:	05181c00 	0x05181c00
    12f4:	02050005 	slti	$r5,$r0,320(0x140)
    12f8:	1c001394 	pcaddu12i	$r20,156(0x9c)
    12fc:	01054d06 	fmul.d	$f6,$f8,$f19
    1300:	9c020500 	0x9c020500
    1304:	031c0013 	lu52i.d	$r19,$r0,1792(0x700)
    1308:	0505014a 	0x0505014a
    130c:	a4020500 	0xa4020500
    1310:	061c0013 	cacop	0x13,$r0,1792(0x700)
    1314:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
    1318:	13a40205 	addu16i.d	$r5,$r16,-5888(0xe900)
    131c:	05491c00 	0x05491c00
    1320:	02050005 	slti	$r5,$r0,320(0x140)
    1324:	1c0013a4 	pcaddu12i	$r4,157(0x9d)
    1328:	00050518 	alsl.w	$r24,$r8,$r1,0x3
    132c:	13a40205 	addu16i.d	$r5,$r16,-5888(0xe900)
    1330:	16061c00 	lu32i.d	$r0,12512(0x30e0)
    1334:	05000605 	0x05000605
    1338:	0013a802 	masknez	$r2,$r0,$r10
    133c:	0105191c 	fmul.d	$f28,$f8,$f6
    1340:	c4020500 	0xc4020500
    1344:	001c0013 	mul.w	$r19,$r0,$r0
    1348:	Address 0x0000000000001348 is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff7474 <_stack+0xe3fe5404>
   4:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
   8:	73747570 	0x73747570
   c:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe697c <_stack+0xe3fd490c>
  10:	72700067 	0x72700067
  14:	62746e69 	blt	$r19,$r9,-101268(0x2746c) # fffe7480 <_stack+0xe3fd5410>
  18:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
  1c:	5f746774 	bne	$r27,$r20,-35740(0x37464) # ffff7480 <_stack+0xe3fe5410>
  20:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff7494 <_stack+0xe3fe5424>
  24:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
  28:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff749c <_stack+0xe3fe542c>
  2c:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
  30:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff74a4 <_stack+0xe3fe5434>
  34:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
