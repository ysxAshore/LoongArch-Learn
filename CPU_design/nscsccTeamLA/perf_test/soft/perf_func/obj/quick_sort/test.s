
obj/quick_sort/main.elf:     file format elf32-loongarch
obj/quick_sort/main.elf


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
1c00007c:	1c000063 	pcaddu12i	$r3,3(0x3)
1c000080:	289c6063 	ld.w	$r3,$r3,1816(0x718)
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
1c00038c:	54001400 	bl	20(0x14) # 1c0003a0 <shell6>
1c000390:	03400000 	andi	$r0,$r0,0x0

1c000394 <go_finish>:
go_finish():
1c000394:	53fd6fff 	b	-660(0xffffd6c) # 1c000100 <test_finish>
	...

1c0003a0 <shell6>:
shell6():
1c0003a0:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c0003a4:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c0003a8:	157f5fcc 	lu12i.w	$r12,-263426(0xbfafe)
1c0003ac:	2980707a 	st.w	$r26,$r3,28(0x1c)
1c0003b0:	2980607b 	st.w	$r27,$r3,24(0x18)
1c0003b4:	2980a077 	st.w	$r23,$r3,40(0x28)
1c0003b8:	29809078 	st.w	$r24,$r3,36(0x24)
1c0003bc:	29808079 	st.w	$r25,$r3,32(0x20)
1c0003c0:	2980507c 	st.w	$r28,$r3,20(0x14)
1c0003c4:	2980407d 	st.w	$r29,$r3,16(0x10)
1c0003c8:	2980307e 	st.w	$r30,$r3,12(0xc)
1c0003cc:	29800180 	st.w	$r0,$r12,0
1c0003d0:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0003d4:	028a1084 	addi.w	$r4,$r4,644(0x284)
1c0003d8:	54106400 	bl	4196(0x1064) # 1c00143c <puts>
1c0003dc:	54117400 	bl	4468(0x1174) # 1c001550 <get_count>
1c0003e0:	0015009a 	move	$r26,$r4
1c0003e4:	54118c00 	bl	4492(0x118c) # 1c001570 <get_count_my>
1c0003e8:	0015009b 	move	$r27,$r4
1c0003ec:	157f5fe4 	lu12i.w	$r4,-263425(0xbfaff)
1c0003f0:	03bc8085 	ori	$r5,$r4,0xf20
1c0003f4:	288000a6 	ld.w	$r6,$r5,0
1c0003f8:	5c01d0c0 	bne	$r6,$r0,464(0x1d0) # 1c0005c8 <shell6+0x228>
1c0003fc:	1c00003d 	pcaddu12i	$r29,1(0x1)
1c000400:	028bc3bd 	addi.w	$r29,$r29,752(0x2f0)
1c000404:	0280281c 	addi.w	$r28,$r0,10(0xa)
1c000408:	00150017 	move	$r23,$r0
1c00040c:	1c000059 	pcaddu12i	$r25,2(0x2)
1c000410:	028f4339 	addi.w	$r25,$r25,976(0x3d0)
1c000414:	03be8018 	ori	$r24,$r0,0xfa0
1c000418:	001503be 	move	$r30,$r29
1c00041c:	028fa005 	addi.w	$r5,$r0,1000(0x3e8)
1c000420:	00150324 	move	$r4,$r25
1c000424:	5408bc00 	bl	2236(0x8bc) # 1c000ce0 <quick_sort>
1c000428:	001063a8 	add.w	$r8,$r29,$r24
1c00042c:	00117887 	sub.w	$r7,$r4,$r30
1c000430:	1c00002c 	pcaddu12i	$r12,1(0x1)
1c000434:	028af18c 	addi.w	$r12,$r12,700(0x2bc)
1c000438:	001503dd 	move	$r29,$r30
1c00043c:	001030ed 	add.w	$r13,$r7,$r12
1c000440:	2880018e 	ld.w	$r14,$r12,0
1c000444:	288001a9 	ld.w	$r9,$r13,0
1c000448:	001501b0 	move	$r16,$r13
1c00044c:	001501b2 	move	$r18,$r13
1c000450:	001501b4 	move	$r20,$r13
1c000454:	001501a1 	move	$r1,$r13
1c000458:	5c01612e 	bne	$r9,$r14,352(0x160) # 1c0005b8 <shell6+0x218>
1c00045c:	2880118a 	ld.w	$r10,$r12,4(0x4)
1c000460:	288011ab 	ld.w	$r11,$r13,4(0x4)
1c000464:	5c01556a 	bne	$r11,$r10,340(0x154) # 1c0005b8 <shell6+0x218>
1c000468:	28802184 	ld.w	$r4,$r12,8(0x8)
1c00046c:	288021a5 	ld.w	$r5,$r13,8(0x8)
1c000470:	5c0148a4 	bne	$r5,$r4,328(0x148) # 1c0005b8 <shell6+0x218>
1c000474:	28803186 	ld.w	$r6,$r12,12(0xc)
1c000478:	288031ad 	ld.w	$r13,$r13,12(0xc)
1c00047c:	5c013da6 	bne	$r13,$r6,316(0x13c) # 1c0005b8 <shell6+0x218>
1c000480:	2880418f 	ld.w	$r15,$r12,16(0x10)
1c000484:	28804210 	ld.w	$r16,$r16,16(0x10)
1c000488:	5c01320f 	bne	$r16,$r15,304(0x130) # 1c0005b8 <shell6+0x218>
1c00048c:	28805191 	ld.w	$r17,$r12,20(0x14)
1c000490:	28805252 	ld.w	$r18,$r18,20(0x14)
1c000494:	5c012651 	bne	$r18,$r17,292(0x124) # 1c0005b8 <shell6+0x218>
1c000498:	28806193 	ld.w	$r19,$r12,24(0x18)
1c00049c:	28806294 	ld.w	$r20,$r20,24(0x18)
1c0004a0:	5c011a93 	bne	$r20,$r19,280(0x118) # 1c0005b8 <shell6+0x218>
1c0004a4:	28807189 	ld.w	$r9,$r12,28(0x1c)
1c0004a8:	28807021 	ld.w	$r1,$r1,28(0x1c)
1c0004ac:	0280818c 	addi.w	$r12,$r12,32(0x20)
1c0004b0:	5c010829 	bne	$r1,$r9,264(0x108) # 1c0005b8 <shell6+0x218>
1c0004b4:	5fff8988 	bne	$r12,$r8,-120(0x3ff88) # 1c00043c <shell6+0x9c>
1c0004b8:	02bfff9c 	addi.w	$r28,$r28,-1(0xfff)
1c0004bc:	5fff6380 	bne	$r28,$r0,-160(0x3ff60) # 1c00041c <shell6+0x7c>
1c0004c0:	5410b000 	bl	4272(0x10b0) # 1c001570 <get_count_my>
1c0004c4:	00150099 	move	$r25,$r4
1c0004c8:	54108800 	bl	4232(0x1088) # 1c001550 <get_count>
1c0004cc:	0011689a 	sub.w	$r26,$r4,$r26
1c0004d0:	00116f3b 	sub.w	$r27,$r25,$r27
1c0004d4:	5c00b2e0 	bne	$r23,$r0,176(0xb0) # 1c000584 <shell6+0x1e4>
1c0004d8:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0004dc:	02865084 	addi.w	$r4,$r4,404(0x194)
1c0004e0:	540f5c00 	bl	3932(0xf5c) # 1c00143c <puts>
1c0004e4:	157f5fe7 	lu12i.w	$r7,-263425(0xbfaff)
1c0004e8:	02800408 	addi.w	$r8,$r0,1(0x1)
1c0004ec:	038100eb 	ori	$r11,$r7,0x40
1c0004f0:	29800168 	st.w	$r8,$r11,0
1c0004f4:	0380c0e4 	ori	$r4,$r7,0x30
1c0004f8:	140001e6 	lu12i.w	$r6,15(0xf)
1c0004fc:	038080e5 	ori	$r5,$r7,0x20
1c000500:	29800088 	st.w	$r8,$r4,0
1c000504:	03bffcd1 	ori	$r17,$r6,0xfff
1c000508:	298000b1 	st.w	$r17,$r5,0
1c00050c:	157f5fe9 	lu12i.w	$r9,-263425(0xbfaff)
1c000510:	03814121 	ori	$r1,$r9,0x50
1c000514:	2980003b 	st.w	$r27,$r1,0
1c000518:	157f5f19 	lu12i.w	$r25,-263432(0xbfaf8)
1c00051c:	2980033b 	st.w	$r27,$r25,0
1c000520:	03804338 	ori	$r24,$r25,0x10
1c000524:	2980031a 	st.w	$r26,$r24,0
1c000528:	00150345 	move	$r5,$r26
1c00052c:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000530:	0285a084 	addi.w	$r4,$r4,360(0x168)
1c000534:	540c1c00 	bl	3100(0xc1c) # 1c001150 <printf>
1c000538:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c00053c:	2880a077 	ld.w	$r23,$r3,40(0x28)
1c000540:	28809078 	ld.w	$r24,$r3,36(0x24)
1c000544:	28808079 	ld.w	$r25,$r3,32(0x20)
1c000548:	2880707a 	ld.w	$r26,$r3,28(0x1c)
1c00054c:	2880507c 	ld.w	$r28,$r3,20(0x14)
1c000550:	2880407d 	ld.w	$r29,$r3,16(0x10)
1c000554:	2880307e 	ld.w	$r30,$r3,12(0xc)
1c000558:	00150365 	move	$r5,$r27
1c00055c:	2880607b 	ld.w	$r27,$r3,24(0x18)
1c000560:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000564:	02858084 	addi.w	$r4,$r4,352(0x160)
1c000568:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c00056c:	500be400 	b	3044(0xbe4) # 1c001150 <printf>
1c000570:	54100000 	bl	4096(0x1000) # 1c001570 <get_count_my>
1c000574:	0015009c 	move	$r28,$r4
1c000578:	540fd800 	bl	4056(0xfd8) # 1c001550 <get_count>
1c00057c:	0011689a 	sub.w	$r26,$r4,$r26
1c000580:	00116f9b 	sub.w	$r27,$r28,$r27
1c000584:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000588:	0283f084 	addi.w	$r4,$r4,252(0xfc)
1c00058c:	540eb000 	bl	3760(0xeb0) # 1c00143c <puts>
1c000590:	157f5fef 	lu12i.w	$r15,-263425(0xbfaff)
1c000594:	038101f0 	ori	$r16,$r15,0x40
1c000598:	02800413 	addi.w	$r19,$r0,1(0x1)
1c00059c:	29800213 	st.w	$r19,$r16,0
1c0005a0:	0380c1ed 	ori	$r13,$r15,0x30
1c0005a4:	02800814 	addi.w	$r20,$r0,2(0x2)
1c0005a8:	038081f2 	ori	$r18,$r15,0x20
1c0005ac:	298001b4 	st.w	$r20,$r13,0
1c0005b0:	29800240 	st.w	$r0,$r18,0
1c0005b4:	53ff5bff 	b	-168(0xfffff58) # 1c00050c <shell6+0x16c>
1c0005b8:	02bfff9c 	addi.w	$r28,$r28,-1(0xfff)
1c0005bc:	028006f7 	addi.w	$r23,$r23,1(0x1)
1c0005c0:	5ffe5f80 	bne	$r28,$r0,-420(0x3fe5c) # 1c00041c <shell6+0x7c>
1c0005c4:	53feffff 	b	-260(0xffffefc) # 1c0004c0 <shell6+0x120>
1c0005c8:	028fa005 	addi.w	$r5,$r0,1000(0x3e8)
1c0005cc:	1c000044 	pcaddu12i	$r4,2(0x2)
1c0005d0:	02884084 	addi.w	$r4,$r4,528(0x210)
1c0005d4:	54070c00 	bl	1804(0x70c) # 1c000ce0 <quick_sort>
1c0005d8:	1c000038 	pcaddu12i	$r24,1(0x1)
1c0005dc:	02845318 	addi.w	$r24,$r24,276(0x114)
1c0005e0:	03be801e 	ori	$r30,$r0,0xfa0
1c0005e4:	0015030c 	move	$r12,$r24
1c0005e8:	00107b07 	add.w	$r7,$r24,$r30
1c0005ec:	00116088 	sub.w	$r8,$r4,$r24
1c0005f0:	0010311d 	add.w	$r29,$r8,$r12
1c0005f4:	2880018f 	ld.w	$r15,$r12,0
1c0005f8:	288003ad 	ld.w	$r13,$r29,0
1c0005fc:	001503aa 	move	$r10,$r29
1c000600:	5fff71af 	bne	$r13,$r15,-144(0x3ff70) # 1c000570 <shell6+0x1d0>
1c000604:	28801190 	ld.w	$r16,$r12,4(0x4)
1c000608:	288013b2 	ld.w	$r18,$r29,4(0x4)
1c00060c:	5fff6650 	bne	$r18,$r16,-156(0x3ff64) # 1c000570 <shell6+0x1d0>
1c000610:	28802193 	ld.w	$r19,$r12,8(0x8)
1c000614:	288023b4 	ld.w	$r20,$r29,8(0x8)
1c000618:	5fff5a93 	bne	$r20,$r19,-168(0x3ff58) # 1c000570 <shell6+0x1d0>
1c00061c:	28803189 	ld.w	$r9,$r12,12(0xc)
1c000620:	288033a1 	ld.w	$r1,$r29,12(0xc)
1c000624:	5fff4c29 	bne	$r1,$r9,-180(0x3ff4c) # 1c000570 <shell6+0x1d0>
1c000628:	28804197 	ld.w	$r23,$r12,16(0x10)
1c00062c:	288043bc 	ld.w	$r28,$r29,16(0x10)
1c000630:	5fff4397 	bne	$r28,$r23,-192(0x3ff40) # 1c000570 <shell6+0x1d0>
1c000634:	28805199 	ld.w	$r25,$r12,20(0x14)
1c000638:	288053b8 	ld.w	$r24,$r29,20(0x14)
1c00063c:	5fff3719 	bne	$r24,$r25,-204(0x3ff34) # 1c000570 <shell6+0x1d0>
1c000640:	2880619e 	ld.w	$r30,$r12,24(0x18)
1c000644:	288063bd 	ld.w	$r29,$r29,24(0x18)
1c000648:	5fff2bbe 	bne	$r29,$r30,-216(0x3ff28) # 1c000570 <shell6+0x1d0>
1c00064c:	2880718e 	ld.w	$r14,$r12,28(0x1c)
1c000650:	2880714a 	ld.w	$r10,$r10,28(0x1c)
1c000654:	0280818c 	addi.w	$r12,$r12,32(0x20)
1c000658:	5fff194e 	bne	$r10,$r14,-232(0x3ff18) # 1c000570 <shell6+0x1d0>
1c00065c:	5fff94ec 	bne	$r7,$r12,-108(0x3ff94) # 1c0005f0 <shell6+0x250>
1c000660:	540f1000 	bl	3856(0xf10) # 1c001570 <get_count_my>
1c000664:	00150097 	move	$r23,$r4
1c000668:	540ee800 	bl	3816(0xee8) # 1c001550 <get_count>
1c00066c:	0011689a 	sub.w	$r26,$r4,$r26
1c000670:	00116efb 	sub.w	$r27,$r23,$r27
1c000674:	53fe67ff 	b	-412(0xffffe64) # 1c0004d8 <shell6+0x138>
1c000678:	03400000 	andi	$r0,$r0,0x0
1c00067c:	03400000 	andi	$r0,$r0,0x0

1c000680 <partition>:
partition():
1c000680:	004088ae 	slli.w	$r14,$r5,0x2
1c000684:	00103888 	add.w	$r8,$r4,$r14
1c000688:	28800112 	ld.w	$r18,$r8,0
1c00068c:	640310a6 	bge	$r5,$r6,784(0x310) # 1c00099c <partition+0x31c>
1c000690:	004088cd 	slli.w	$r13,$r6,0x2
1c000694:	0010348d 	add.w	$r13,$r4,$r13
1c000698:	288001ac 	ld.w	$r12,$r13,0
1c00069c:	00141410 	nor	$r16,$r0,$r5
1c0006a0:	00101a07 	add.w	$r7,$r16,$r6
1c0006a4:	03401ce8 	andi	$r8,$r7,0x7
1c0006a8:	001501a7 	move	$r7,$r13
1c0006ac:	6401aa4c 	bge	$r18,$r12,424(0x1a8) # 1c000854 <partition+0x1d4>
1c0006b0:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c0006b4:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c0006b8:	640174a6 	bge	$r5,$r6,372(0x174) # 1c00082c <partition+0x1ac>
1c0006bc:	5800c500 	beq	$r8,$r0,196(0xc4) # 1c000780 <partition+0x100>
1c0006c0:	0280040c 	addi.w	$r12,$r0,1(0x1)
1c0006c4:	5800a50c 	beq	$r8,$r12,164(0xa4) # 1c000768 <partition+0xe8>
1c0006c8:	02800809 	addi.w	$r9,$r0,2(0x2)
1c0006cc:	58008909 	beq	$r8,$r9,136(0x88) # 1c000754 <partition+0xd4>
1c0006d0:	02800c0a 	addi.w	$r10,$r0,3(0x3)
1c0006d4:	58006d0a 	beq	$r8,$r10,108(0x6c) # 1c000740 <partition+0xc0>
1c0006d8:	0280100b 	addi.w	$r11,$r0,4(0x4)
1c0006dc:	5800510b 	beq	$r8,$r11,80(0x50) # 1c00072c <partition+0xac>
1c0006e0:	0280140f 	addi.w	$r15,$r0,5(0x5)
1c0006e4:	5800350f 	beq	$r8,$r15,52(0x34) # 1c000718 <partition+0x98>
1c0006e8:	02801811 	addi.w	$r17,$r0,6(0x6)
1c0006ec:	58001911 	beq	$r8,$r17,24(0x18) # 1c000704 <partition+0x84>
1c0006f0:	288001ac 	ld.w	$r12,$r13,0
1c0006f4:	001501a7 	move	$r7,$r13
1c0006f8:	64015e4c 	bge	$r18,$r12,348(0x15c) # 1c000854 <partition+0x1d4>
1c0006fc:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c000700:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000704:	288001ac 	ld.w	$r12,$r13,0
1c000708:	001501a7 	move	$r7,$r13
1c00070c:	64014a4c 	bge	$r18,$r12,328(0x148) # 1c000854 <partition+0x1d4>
1c000710:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c000714:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000718:	288001ac 	ld.w	$r12,$r13,0
1c00071c:	001501a7 	move	$r7,$r13
1c000720:	6401364c 	bge	$r18,$r12,308(0x134) # 1c000854 <partition+0x1d4>
1c000724:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c000728:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c00072c:	288001ac 	ld.w	$r12,$r13,0
1c000730:	001501a7 	move	$r7,$r13
1c000734:	6401224c 	bge	$r18,$r12,288(0x120) # 1c000854 <partition+0x1d4>
1c000738:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c00073c:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000740:	288001ac 	ld.w	$r12,$r13,0
1c000744:	001501a7 	move	$r7,$r13
1c000748:	64010e4c 	bge	$r18,$r12,268(0x10c) # 1c000854 <partition+0x1d4>
1c00074c:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c000750:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000754:	288001ac 	ld.w	$r12,$r13,0
1c000758:	001501a7 	move	$r7,$r13
1c00075c:	6400fa4c 	bge	$r18,$r12,248(0xf8) # 1c000854 <partition+0x1d4>
1c000760:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c000764:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000768:	288001ac 	ld.w	$r12,$r13,0
1c00076c:	001501a7 	move	$r7,$r13
1c000770:	6400e64c 	bge	$r18,$r12,228(0xe4) # 1c000854 <partition+0x1d4>
1c000774:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c000778:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c00077c:	6400b0a6 	bge	$r5,$r6,176(0xb0) # 1c00082c <partition+0x1ac>
1c000780:	288001ac 	ld.w	$r12,$r13,0
1c000784:	001501a7 	move	$r7,$r13
1c000788:	6400ce4c 	bge	$r18,$r12,204(0xcc) # 1c000854 <partition+0x1d4>
1c00078c:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000790:	288001ac 	ld.w	$r12,$r13,0
1c000794:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c000798:	001501b3 	move	$r19,$r13
1c00079c:	001500d4 	move	$r20,$r6
1c0007a0:	001501a7 	move	$r7,$r13
1c0007a4:	6400b24c 	bge	$r18,$r12,176(0xb0) # 1c000854 <partition+0x1d4>
1c0007a8:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c0007ac:	288001ac 	ld.w	$r12,$r13,0
1c0007b0:	001501a7 	move	$r7,$r13
1c0007b4:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c0007b8:	64009e4c 	bge	$r18,$r12,156(0x9c) # 1c000854 <partition+0x1d4>
1c0007bc:	28bfe26c 	ld.w	$r12,$r19,-8(0xff8)
1c0007c0:	02bfe26d 	addi.w	$r13,$r19,-8(0xff8)
1c0007c4:	001501a7 	move	$r7,$r13
1c0007c8:	02bffa86 	addi.w	$r6,$r20,-2(0xffe)
1c0007cc:	64008a4c 	bge	$r18,$r12,136(0x88) # 1c000854 <partition+0x1d4>
1c0007d0:	28bfd26c 	ld.w	$r12,$r19,-12(0xff4)
1c0007d4:	02bfd26d 	addi.w	$r13,$r19,-12(0xff4)
1c0007d8:	001501a7 	move	$r7,$r13
1c0007dc:	02bff686 	addi.w	$r6,$r20,-3(0xffd)
1c0007e0:	6400764c 	bge	$r18,$r12,116(0x74) # 1c000854 <partition+0x1d4>
1c0007e4:	28bfc26c 	ld.w	$r12,$r19,-16(0xff0)
1c0007e8:	02bfc26d 	addi.w	$r13,$r19,-16(0xff0)
1c0007ec:	001501a7 	move	$r7,$r13
1c0007f0:	02bff286 	addi.w	$r6,$r20,-4(0xffc)
1c0007f4:	6400624c 	bge	$r18,$r12,96(0x60) # 1c000854 <partition+0x1d4>
1c0007f8:	28bfb26c 	ld.w	$r12,$r19,-20(0xfec)
1c0007fc:	02bfb26d 	addi.w	$r13,$r19,-20(0xfec)
1c000800:	001501a7 	move	$r7,$r13
1c000804:	02bfee86 	addi.w	$r6,$r20,-5(0xffb)
1c000808:	64004e4c 	bge	$r18,$r12,76(0x4c) # 1c000854 <partition+0x1d4>
1c00080c:	28bfa26c 	ld.w	$r12,$r19,-24(0xfe8)
1c000810:	02bfa26d 	addi.w	$r13,$r19,-24(0xfe8)
1c000814:	02bfea86 	addi.w	$r6,$r20,-6(0xffa)
1c000818:	001501a7 	move	$r7,$r13
1c00081c:	64003a4c 	bge	$r18,$r12,56(0x38) # 1c000854 <partition+0x1d4>
1c000820:	02bfe686 	addi.w	$r6,$r20,-7(0xff9)
1c000824:	02bf926d 	addi.w	$r13,$r19,-28(0xfe4)
1c000828:	63ff58a6 	blt	$r5,$r6,-168(0x3ff58) # 1c000780 <partition+0x100>
1c00082c:	004088c6 	slli.w	$r6,$r6,0x2
1c000830:	00101887 	add.w	$r7,$r4,$r6
1c000834:	288000ec 	ld.w	$r12,$r7,0
1c000838:	00103888 	add.w	$r8,$r4,$r14
1c00083c:	001500a6 	move	$r6,$r5
1c000840:	2980010c 	st.w	$r12,$r8,0
1c000844:	298000ec 	st.w	$r12,$r7,0
1c000848:	001500c4 	move	$r4,$r6
1c00084c:	29800112 	st.w	$r18,$r8,0
1c000850:	4c000020 	jirl	$r0,$r1,0
1c000854:	00103888 	add.w	$r8,$r4,$r14
1c000858:	2980010c 	st.w	$r12,$r8,0
1c00085c:	640138a6 	bge	$r5,$r6,312(0x138) # 1c000994 <partition+0x314>
1c000860:	00141410 	nor	$r16,$r0,$r5
1c000864:	00101a09 	add.w	$r9,$r16,$r6
1c000868:	028011ce 	addi.w	$r14,$r14,4(0x4)
1c00086c:	03401d2a 	andi	$r10,$r9,0x7
1c000870:	00103889 	add.w	$r9,$r4,$r14
1c000874:	5800a540 	beq	$r10,$r0,164(0xa4) # 1c000918 <partition+0x298>
1c000878:	2880012c 	ld.w	$r12,$r9,0
1c00087c:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c000880:	02801129 	addi.w	$r9,$r9,4(0x4)
1c000884:	6001064c 	blt	$r18,$r12,260(0x104) # 1c000988 <partition+0x308>
1c000888:	0280040b 	addi.w	$r11,$r0,1(0x1)
1c00088c:	58008d4b 	beq	$r10,$r11,140(0x8c) # 1c000918 <partition+0x298>
1c000890:	0280080f 	addi.w	$r15,$r0,2(0x2)
1c000894:	5800754f 	beq	$r10,$r15,116(0x74) # 1c000908 <partition+0x288>
1c000898:	02800c11 	addi.w	$r17,$r0,3(0x3)
1c00089c:	58005d51 	beq	$r10,$r17,92(0x5c) # 1c0008f8 <partition+0x278>
1c0008a0:	02801013 	addi.w	$r19,$r0,4(0x4)
1c0008a4:	58004553 	beq	$r10,$r19,68(0x44) # 1c0008e8 <partition+0x268>
1c0008a8:	02801414 	addi.w	$r20,$r0,5(0x5)
1c0008ac:	58002d54 	beq	$r10,$r20,44(0x2c) # 1c0008d8 <partition+0x258>
1c0008b0:	0280180c 	addi.w	$r12,$r0,6(0x6)
1c0008b4:	5800154c 	beq	$r10,$r12,20(0x14) # 1c0008c8 <partition+0x248>
1c0008b8:	2880012c 	ld.w	$r12,$r9,0
1c0008bc:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c0008c0:	02801129 	addi.w	$r9,$r9,4(0x4)
1c0008c4:	6000c64c 	blt	$r18,$r12,196(0xc4) # 1c000988 <partition+0x308>
1c0008c8:	2880012c 	ld.w	$r12,$r9,0
1c0008cc:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c0008d0:	02801129 	addi.w	$r9,$r9,4(0x4)
1c0008d4:	6000b64c 	blt	$r18,$r12,180(0xb4) # 1c000988 <partition+0x308>
1c0008d8:	2880012c 	ld.w	$r12,$r9,0
1c0008dc:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c0008e0:	02801129 	addi.w	$r9,$r9,4(0x4)
1c0008e4:	6000a64c 	blt	$r18,$r12,164(0xa4) # 1c000988 <partition+0x308>
1c0008e8:	2880012c 	ld.w	$r12,$r9,0
1c0008ec:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c0008f0:	02801129 	addi.w	$r9,$r9,4(0x4)
1c0008f4:	6000964c 	blt	$r18,$r12,148(0x94) # 1c000988 <partition+0x308>
1c0008f8:	2880012c 	ld.w	$r12,$r9,0
1c0008fc:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c000900:	02801129 	addi.w	$r9,$r9,4(0x4)
1c000904:	6000864c 	blt	$r18,$r12,132(0x84) # 1c000988 <partition+0x308>
1c000908:	2880012c 	ld.w	$r12,$r9,0
1c00090c:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c000910:	02801129 	addi.w	$r9,$r9,4(0x4)
1c000914:	6000764c 	blt	$r18,$r12,116(0x74) # 1c000988 <partition+0x308>
1c000918:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c00091c:	001500b0 	move	$r16,$r5
1c000920:	2880012c 	ld.w	$r12,$r9,0
1c000924:	00150128 	move	$r8,$r9
1c000928:	5bff1ca6 	beq	$r5,$r6,-228(0x3ff1c) # 1c000844 <partition+0x1c4>
1c00092c:	60005e4c 	blt	$r18,$r12,92(0x5c) # 1c000988 <partition+0x308>
1c000930:	2880112c 	ld.w	$r12,$r9,4(0x4)
1c000934:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c000938:	6000524c 	blt	$r18,$r12,80(0x50) # 1c000988 <partition+0x308>
1c00093c:	2880212c 	ld.w	$r12,$r9,8(0x8)
1c000940:	02800a05 	addi.w	$r5,$r16,2(0x2)
1c000944:	6000464c 	blt	$r18,$r12,68(0x44) # 1c000988 <partition+0x308>
1c000948:	2880312c 	ld.w	$r12,$r9,12(0xc)
1c00094c:	02800e05 	addi.w	$r5,$r16,3(0x3)
1c000950:	60003a4c 	blt	$r18,$r12,56(0x38) # 1c000988 <partition+0x308>
1c000954:	2880412c 	ld.w	$r12,$r9,16(0x10)
1c000958:	02801205 	addi.w	$r5,$r16,4(0x4)
1c00095c:	60002e4c 	blt	$r18,$r12,44(0x2c) # 1c000988 <partition+0x308>
1c000960:	2880512c 	ld.w	$r12,$r9,20(0x14)
1c000964:	02801605 	addi.w	$r5,$r16,5(0x5)
1c000968:	6000224c 	blt	$r18,$r12,32(0x20) # 1c000988 <partition+0x308>
1c00096c:	2880612c 	ld.w	$r12,$r9,24(0x18)
1c000970:	02801a05 	addi.w	$r5,$r16,6(0x6)
1c000974:	6000164c 	blt	$r18,$r12,20(0x14) # 1c000988 <partition+0x308>
1c000978:	2880712c 	ld.w	$r12,$r9,28(0x1c)
1c00097c:	02801e05 	addi.w	$r5,$r16,7(0x7)
1c000980:	02808129 	addi.w	$r9,$r9,32(0x20)
1c000984:	67ff964c 	bge	$r18,$r12,-108(0x3ff94) # 1c000918 <partition+0x298>
1c000988:	298001ac 	st.w	$r12,$r13,0
1c00098c:	004088ae 	slli.w	$r14,$r5,0x2
1c000990:	53fd03ff 	b	-768(0xffffd00) # 1c000690 <partition+0x10>
1c000994:	001500a6 	move	$r6,$r5
1c000998:	53feafff 	b	-340(0xffffeac) # 1c000844 <partition+0x1c4>
1c00099c:	001500a4 	move	$r4,$r5
1c0009a0:	29800112 	st.w	$r18,$r8,0
1c0009a4:	4c000020 	jirl	$r0,$r1,0
1c0009a8:	03400000 	andi	$r0,$r0,0x0
1c0009ac:	03400000 	andi	$r0,$r0,0x0

1c0009b0 <_quick_sort>:
_quick_sort():
1c0009b0:	640320a6 	bge	$r5,$r6,800(0x320) # 1c000cd0 <_quick_sort+0x320>
1c0009b4:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0009b8:	29805078 	st.w	$r24,$r3,20(0x14)
1c0009bc:	004088d8 	slli.w	$r24,$r6,0x2
1c0009c0:	29804079 	st.w	$r25,$r3,16(0x10)
1c0009c4:	2980307a 	st.w	$r26,$r3,12(0xc)
1c0009c8:	29807061 	st.w	$r1,$r3,28(0x1c)
1c0009cc:	29806077 	st.w	$r23,$r3,24(0x18)
1c0009d0:	001500da 	move	$r26,$r6
1c0009d4:	00150099 	move	$r25,$r4
1c0009d8:	00106098 	add.w	$r24,$r4,$r24
1c0009dc:	004088ac 	slli.w	$r12,$r5,0x2
1c0009e0:	00103321 	add.w	$r1,$r25,$r12
1c0009e4:	2880002e 	ld.w	$r14,$r1,0
1c0009e8:	2880030c 	ld.w	$r12,$r24,0
1c0009ec:	00150357 	move	$r23,$r26
1c0009f0:	001500a6 	move	$r6,$r5
1c0009f4:	640191cc 	bge	$r14,$r12,400(0x190) # 1c000b84 <_quick_sort+0x1d4>
1c0009f8:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c0009fc:	00408aed 	slli.w	$r13,$r23,0x2
1c000a00:	00103734 	add.w	$r20,$r25,$r13
1c000a04:	2880028c 	ld.w	$r12,$r20,0
1c000a08:	640134d7 	bge	$r6,$r23,308(0x134) # 1c000b3c <_quick_sort+0x18c>
1c000a0c:	00111aef 	sub.w	$r15,$r23,$r6
1c000a10:	02bff1a4 	addi.w	$r4,$r13,-4(0xffc)
1c000a14:	03401de7 	andi	$r7,$r15,0x7
1c000a18:	00101321 	add.w	$r1,$r25,$r4
1c000a1c:	5800ace0 	beq	$r7,$r0,172(0xac) # 1c000ac8 <_quick_sort+0x118>
1c000a20:	02800410 	addi.w	$r16,$r0,1(0x1)
1c000a24:	58008cf0 	beq	$r7,$r16,140(0x8c) # 1c000ab0 <_quick_sort+0x100>
1c000a28:	02800808 	addi.w	$r8,$r0,2(0x2)
1c000a2c:	580074e8 	beq	$r7,$r8,116(0x74) # 1c000aa0 <_quick_sort+0xf0>
1c000a30:	02800c09 	addi.w	$r9,$r0,3(0x3)
1c000a34:	58005ce9 	beq	$r7,$r9,92(0x5c) # 1c000a90 <_quick_sort+0xe0>
1c000a38:	0280100a 	addi.w	$r10,$r0,4(0x4)
1c000a3c:	580044ea 	beq	$r7,$r10,68(0x44) # 1c000a80 <_quick_sort+0xd0>
1c000a40:	0280140b 	addi.w	$r11,$r0,5(0x5)
1c000a44:	58002ceb 	beq	$r7,$r11,44(0x2c) # 1c000a70 <_quick_sort+0xc0>
1c000a48:	02801811 	addi.w	$r17,$r0,6(0x6)
1c000a4c:	580014f1 	beq	$r7,$r17,20(0x14) # 1c000a60 <_quick_sort+0xb0>
1c000a50:	640135cc 	bge	$r14,$r12,308(0x134) # 1c000b84 <_quick_sort+0x1d4>
1c000a54:	2880002c 	ld.w	$r12,$r1,0
1c000a58:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000a5c:	02bff021 	addi.w	$r1,$r1,-4(0xffc)
1c000a60:	640125cc 	bge	$r14,$r12,292(0x124) # 1c000b84 <_quick_sort+0x1d4>
1c000a64:	2880002c 	ld.w	$r12,$r1,0
1c000a68:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000a6c:	02bff021 	addi.w	$r1,$r1,-4(0xffc)
1c000a70:	640115cc 	bge	$r14,$r12,276(0x114) # 1c000b84 <_quick_sort+0x1d4>
1c000a74:	2880002c 	ld.w	$r12,$r1,0
1c000a78:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000a7c:	02bff021 	addi.w	$r1,$r1,-4(0xffc)
1c000a80:	640105cc 	bge	$r14,$r12,260(0x104) # 1c000b84 <_quick_sort+0x1d4>
1c000a84:	2880002c 	ld.w	$r12,$r1,0
1c000a88:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000a8c:	02bff021 	addi.w	$r1,$r1,-4(0xffc)
1c000a90:	6400f5cc 	bge	$r14,$r12,244(0xf4) # 1c000b84 <_quick_sort+0x1d4>
1c000a94:	2880002c 	ld.w	$r12,$r1,0
1c000a98:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000a9c:	02bff021 	addi.w	$r1,$r1,-4(0xffc)
1c000aa0:	6400e5cc 	bge	$r14,$r12,228(0xe4) # 1c000b84 <_quick_sort+0x1d4>
1c000aa4:	2880002c 	ld.w	$r12,$r1,0
1c000aa8:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000aac:	02bff021 	addi.w	$r1,$r1,-4(0xffc)
1c000ab0:	6400d5cc 	bge	$r14,$r12,212(0xd4) # 1c000b84 <_quick_sort+0x1d4>
1c000ab4:	00150034 	move	$r20,$r1
1c000ab8:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000abc:	02bff021 	addi.w	$r1,$r1,-4(0xffc)
1c000ac0:	2880102c 	ld.w	$r12,$r1,4(0x4)
1c000ac4:	58007ae6 	beq	$r23,$r6,120(0x78) # 1c000b3c <_quick_sort+0x18c>
1c000ac8:	02bf9032 	addi.w	$r18,$r1,-28(0xfe4)
1c000acc:	6400b9cc 	bge	$r14,$r12,184(0xb8) # 1c000b84 <_quick_sort+0x1d4>
1c000ad0:	2880002c 	ld.w	$r12,$r1,0
1c000ad4:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000ad8:	001502f3 	move	$r19,$r23
1c000adc:	6400a9cc 	bge	$r14,$r12,168(0xa8) # 1c000b84 <_quick_sort+0x1d4>
1c000ae0:	28bff02c 	ld.w	$r12,$r1,-4(0xffc)
1c000ae4:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000ae8:	00150254 	move	$r20,$r18
1c000aec:	640099cc 	bge	$r14,$r12,152(0x98) # 1c000b84 <_quick_sort+0x1d4>
1c000af0:	28bfe02c 	ld.w	$r12,$r1,-8(0xff8)
1c000af4:	02bffa77 	addi.w	$r23,$r19,-2(0xffe)
1c000af8:	64008dcc 	bge	$r14,$r12,140(0x8c) # 1c000b84 <_quick_sort+0x1d4>
1c000afc:	28bfd02c 	ld.w	$r12,$r1,-12(0xff4)
1c000b00:	02bff677 	addi.w	$r23,$r19,-3(0xffd)
1c000b04:	640081cc 	bge	$r14,$r12,128(0x80) # 1c000b84 <_quick_sort+0x1d4>
1c000b08:	28bfc02c 	ld.w	$r12,$r1,-16(0xff0)
1c000b0c:	02bff277 	addi.w	$r23,$r19,-4(0xffc)
1c000b10:	640075cc 	bge	$r14,$r12,116(0x74) # 1c000b84 <_quick_sort+0x1d4>
1c000b14:	28bfb02c 	ld.w	$r12,$r1,-20(0xfec)
1c000b18:	02bfee77 	addi.w	$r23,$r19,-5(0xffb)
1c000b1c:	02bf8021 	addi.w	$r1,$r1,-32(0xfe0)
1c000b20:	640065cc 	bge	$r14,$r12,100(0x64) # 1c000b84 <_quick_sort+0x1d4>
1c000b24:	2880124c 	ld.w	$r12,$r18,4(0x4)
1c000b28:	02bfea77 	addi.w	$r23,$r19,-6(0xffa)
1c000b2c:	640059cc 	bge	$r14,$r12,88(0x58) # 1c000b84 <_quick_sort+0x1d4>
1c000b30:	02bfe677 	addi.w	$r23,$r19,-7(0xff9)
1c000b34:	2880102c 	ld.w	$r12,$r1,4(0x4)
1c000b38:	5fff92e6 	bne	$r23,$r6,-112(0x3ff90) # 1c000ac8 <_quick_sort+0x118>
1c000b3c:	004088c4 	slli.w	$r4,$r6,0x2
1c000b40:	00101324 	add.w	$r4,$r25,$r4
1c000b44:	001500d7 	move	$r23,$r6
1c000b48:	2980008c 	st.w	$r12,$r4,0
1c000b4c:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c000b50:	2980028c 	st.w	$r12,$r20,0
1c000b54:	2980008e 	st.w	$r14,$r4,0
1c000b58:	00150324 	move	$r4,$r25
1c000b5c:	57fe57ff 	bl	-428(0xffffe54) # 1c0009b0 <_quick_sort>
1c000b60:	028006e5 	addi.w	$r5,$r23,1(0x1)
1c000b64:	63fe78ba 	blt	$r5,$r26,-392(0x3fe78) # 1c0009dc <_quick_sort+0x2c>
1c000b68:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c000b6c:	28806077 	ld.w	$r23,$r3,24(0x18)
1c000b70:	28805078 	ld.w	$r24,$r3,20(0x14)
1c000b74:	28804079 	ld.w	$r25,$r3,16(0x10)
1c000b78:	2880307a 	ld.w	$r26,$r3,12(0xc)
1c000b7c:	02808063 	addi.w	$r3,$r3,32(0x20)
1c000b80:	4c000020 	jirl	$r0,$r1,0
1c000b84:	004088cd 	slli.w	$r13,$r6,0x2
1c000b88:	00103724 	add.w	$r4,$r25,$r13
1c000b8c:	00408aef 	slli.w	$r15,$r23,0x2
1c000b90:	2980008c 	st.w	$r12,$r4,0
1c000b94:	00103f34 	add.w	$r20,$r25,$r15
1c000b98:	64013cd7 	bge	$r6,$r23,316(0x13c) # 1c000cd4 <_quick_sort+0x324>
1c000b9c:	0014180c 	nor	$r12,$r0,$r6
1c000ba0:	00105d87 	add.w	$r7,$r12,$r23
1c000ba4:	028011b0 	addi.w	$r16,$r13,4(0x4)
1c000ba8:	03401ce8 	andi	$r8,$r7,0x7
1c000bac:	0010432d 	add.w	$r13,$r25,$r16
1c000bb0:	5800a500 	beq	$r8,$r0,164(0xa4) # 1c000c54 <_quick_sort+0x2a4>
1c000bb4:	288001ac 	ld.w	$r12,$r13,0
1c000bb8:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c000bbc:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c000bc0:	600105cc 	blt	$r14,$r12,260(0x104) # 1c000cc4 <_quick_sort+0x314>
1c000bc4:	02800409 	addi.w	$r9,$r0,1(0x1)
1c000bc8:	58008d09 	beq	$r8,$r9,140(0x8c) # 1c000c54 <_quick_sort+0x2a4>
1c000bcc:	0280080a 	addi.w	$r10,$r0,2(0x2)
1c000bd0:	5800750a 	beq	$r8,$r10,116(0x74) # 1c000c44 <_quick_sort+0x294>
1c000bd4:	02800c0b 	addi.w	$r11,$r0,3(0x3)
1c000bd8:	58005d0b 	beq	$r8,$r11,92(0x5c) # 1c000c34 <_quick_sort+0x284>
1c000bdc:	02801011 	addi.w	$r17,$r0,4(0x4)
1c000be0:	58004511 	beq	$r8,$r17,68(0x44) # 1c000c24 <_quick_sort+0x274>
1c000be4:	02801412 	addi.w	$r18,$r0,5(0x5)
1c000be8:	58002d12 	beq	$r8,$r18,44(0x2c) # 1c000c14 <_quick_sort+0x264>
1c000bec:	02801813 	addi.w	$r19,$r0,6(0x6)
1c000bf0:	58001513 	beq	$r8,$r19,20(0x14) # 1c000c04 <_quick_sort+0x254>
1c000bf4:	288001ac 	ld.w	$r12,$r13,0
1c000bf8:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c000bfc:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c000c00:	6000c5cc 	blt	$r14,$r12,196(0xc4) # 1c000cc4 <_quick_sort+0x314>
1c000c04:	288001ac 	ld.w	$r12,$r13,0
1c000c08:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c000c0c:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c000c10:	6000b5cc 	blt	$r14,$r12,180(0xb4) # 1c000cc4 <_quick_sort+0x314>
1c000c14:	288001ac 	ld.w	$r12,$r13,0
1c000c18:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c000c1c:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c000c20:	6000a5cc 	blt	$r14,$r12,164(0xa4) # 1c000cc4 <_quick_sort+0x314>
1c000c24:	288001ac 	ld.w	$r12,$r13,0
1c000c28:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c000c2c:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c000c30:	600095cc 	blt	$r14,$r12,148(0x94) # 1c000cc4 <_quick_sort+0x314>
1c000c34:	288001ac 	ld.w	$r12,$r13,0
1c000c38:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c000c3c:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c000c40:	600085cc 	blt	$r14,$r12,132(0x84) # 1c000cc4 <_quick_sort+0x314>
1c000c44:	288001ac 	ld.w	$r12,$r13,0
1c000c48:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c000c4c:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c000c50:	600075cc 	blt	$r14,$r12,116(0x74) # 1c000cc4 <_quick_sort+0x314>
1c000c54:	028004c1 	addi.w	$r1,$r6,1(0x1)
1c000c58:	288001ac 	ld.w	$r12,$r13,0
1c000c5c:	001501a4 	move	$r4,$r13
1c000c60:	5bfef037 	beq	$r1,$r23,-272(0x3fef0) # 1c000b50 <_quick_sort+0x1a0>
1c000c64:	00150026 	move	$r6,$r1
1c000c68:	60005dcc 	blt	$r14,$r12,92(0x5c) # 1c000cc4 <_quick_sort+0x314>
1c000c6c:	288011ac 	ld.w	$r12,$r13,4(0x4)
1c000c70:	02800426 	addi.w	$r6,$r1,1(0x1)
1c000c74:	600051cc 	blt	$r14,$r12,80(0x50) # 1c000cc4 <_quick_sort+0x314>
1c000c78:	288021ac 	ld.w	$r12,$r13,8(0x8)
1c000c7c:	02800826 	addi.w	$r6,$r1,2(0x2)
1c000c80:	600045cc 	blt	$r14,$r12,68(0x44) # 1c000cc4 <_quick_sort+0x314>
1c000c84:	288031ac 	ld.w	$r12,$r13,12(0xc)
1c000c88:	02800c26 	addi.w	$r6,$r1,3(0x3)
1c000c8c:	600039cc 	blt	$r14,$r12,56(0x38) # 1c000cc4 <_quick_sort+0x314>
1c000c90:	288041ac 	ld.w	$r12,$r13,16(0x10)
1c000c94:	02801026 	addi.w	$r6,$r1,4(0x4)
1c000c98:	60002dcc 	blt	$r14,$r12,44(0x2c) # 1c000cc4 <_quick_sort+0x314>
1c000c9c:	288051ac 	ld.w	$r12,$r13,20(0x14)
1c000ca0:	02801426 	addi.w	$r6,$r1,5(0x5)
1c000ca4:	600021cc 	blt	$r14,$r12,32(0x20) # 1c000cc4 <_quick_sort+0x314>
1c000ca8:	288061ac 	ld.w	$r12,$r13,24(0x18)
1c000cac:	02801826 	addi.w	$r6,$r1,6(0x6)
1c000cb0:	600015cc 	blt	$r14,$r12,20(0x14) # 1c000cc4 <_quick_sort+0x314>
1c000cb4:	288071ac 	ld.w	$r12,$r13,28(0x1c)
1c000cb8:	02801c26 	addi.w	$r6,$r1,7(0x7)
1c000cbc:	028081ad 	addi.w	$r13,$r13,32(0x20)
1c000cc0:	67ff95cc 	bge	$r14,$r12,-108(0x3ff94) # 1c000c54 <_quick_sort+0x2a4>
1c000cc4:	2980028c 	st.w	$r12,$r20,0
1c000cc8:	53fd2fff 	b	-724(0xffffd2c) # 1c0009f4 <_quick_sort+0x44>
1c000ccc:	03400000 	andi	$r0,$r0,0x0
1c000cd0:	4c000020 	jirl	$r0,$r1,0
1c000cd4:	001500d7 	move	$r23,$r6
1c000cd8:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c000cdc:	53fe77ff 	b	-396(0xffffe74) # 1c000b50 <_quick_sort+0x1a0>

1c000ce0 <quick_sort>:
quick_sort():
1c000ce0:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c000ce4:	29807061 	st.w	$r1,$r3,28(0x1c)
1c000ce8:	29806077 	st.w	$r23,$r3,24(0x18)
1c000cec:	29805078 	st.w	$r24,$r3,20(0x14)
1c000cf0:	29804079 	st.w	$r25,$r3,16(0x10)
1c000cf4:	2980307a 	st.w	$r26,$r3,12(0xc)
1c000cf8:	2980207b 	st.w	$r27,$r3,8(0x8)
1c000cfc:	64043805 	bge	$r0,$r5,1080(0x438) # 1c001134 <quick_sort+0x454>
1c000d00:	004088ae 	slli.w	$r14,$r5,0x2
1c000d04:	02bff1cd 	addi.w	$r13,$r14,-4(0xffc)
1c000d08:	004489a1 	srli.w	$r1,$r13,0x2
1c000d0c:	02800426 	addi.w	$r6,$r1,1(0x1)
1c000d10:	1c00007a 	pcaddu12i	$r26,3(0x3)
1c000d14:	28aa035a 	ld.w	$r26,$r26,-1408(0xa80)
1c000d18:	03401cc7 	andi	$r7,$r6,0x7
1c000d1c:	0015034c 	move	$r12,$r26
1c000d20:	00103b48 	add.w	$r8,$r26,$r14
1c000d24:	580098e0 	beq	$r7,$r0,152(0x98) # 1c000dbc <quick_sort+0xdc>
1c000d28:	0280040f 	addi.w	$r15,$r0,1(0x1)
1c000d2c:	58007cef 	beq	$r7,$r15,124(0x7c) # 1c000da8 <quick_sort+0xc8>
1c000d30:	02800809 	addi.w	$r9,$r0,2(0x2)
1c000d34:	580064e9 	beq	$r7,$r9,100(0x64) # 1c000d98 <quick_sort+0xb8>
1c000d38:	02800c0a 	addi.w	$r10,$r0,3(0x3)
1c000d3c:	58004cea 	beq	$r7,$r10,76(0x4c) # 1c000d88 <quick_sort+0xa8>
1c000d40:	0280100b 	addi.w	$r11,$r0,4(0x4)
1c000d44:	580034eb 	beq	$r7,$r11,52(0x34) # 1c000d78 <quick_sort+0x98>
1c000d48:	02801410 	addi.w	$r16,$r0,5(0x5)
1c000d4c:	58001cf0 	beq	$r7,$r16,28(0x1c) # 1c000d68 <quick_sort+0x88>
1c000d50:	02801811 	addi.w	$r17,$r0,6(0x6)
1c000d54:	5c03ccf1 	bne	$r7,$r17,972(0x3cc) # 1c001120 <quick_sort+0x440>
1c000d58:	28800093 	ld.w	$r19,$r4,0
1c000d5c:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000d60:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000d64:	29bff193 	st.w	$r19,$r12,-4(0xffc)
1c000d68:	28800094 	ld.w	$r20,$r4,0
1c000d6c:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000d70:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000d74:	29bff194 	st.w	$r20,$r12,-4(0xffc)
1c000d78:	28800097 	ld.w	$r23,$r4,0
1c000d7c:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000d80:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000d84:	29bff197 	st.w	$r23,$r12,-4(0xffc)
1c000d88:	28800098 	ld.w	$r24,$r4,0
1c000d8c:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000d90:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000d94:	29bff198 	st.w	$r24,$r12,-4(0xffc)
1c000d98:	28800099 	ld.w	$r25,$r4,0
1c000d9c:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000da0:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000da4:	29bff199 	st.w	$r25,$r12,-4(0xffc)
1c000da8:	2880009b 	ld.w	$r27,$r4,0
1c000dac:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000db0:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000db4:	29bff19b 	st.w	$r27,$r12,-4(0xffc)
1c000db8:	5800510c 	beq	$r8,$r12,80(0x50) # 1c000e08 <quick_sort+0x128>
1c000dbc:	2880008e 	ld.w	$r14,$r4,0
1c000dc0:	0280818c 	addi.w	$r12,$r12,32(0x20)
1c000dc4:	02808084 	addi.w	$r4,$r4,32(0x20)
1c000dc8:	29bf818e 	st.w	$r14,$r12,-32(0xfe0)
1c000dcc:	28bf908d 	ld.w	$r13,$r4,-28(0xfe4)
1c000dd0:	29bf918d 	st.w	$r13,$r12,-28(0xfe4)
1c000dd4:	28bfa081 	ld.w	$r1,$r4,-24(0xfe8)
1c000dd8:	29bfa181 	st.w	$r1,$r12,-24(0xfe8)
1c000ddc:	28bfb086 	ld.w	$r6,$r4,-20(0xfec)
1c000de0:	29bfb186 	st.w	$r6,$r12,-20(0xfec)
1c000de4:	28bfc087 	ld.w	$r7,$r4,-16(0xff0)
1c000de8:	29bfc187 	st.w	$r7,$r12,-16(0xff0)
1c000dec:	28bfd08f 	ld.w	$r15,$r4,-12(0xff4)
1c000df0:	29bfd18f 	st.w	$r15,$r12,-12(0xff4)
1c000df4:	28bfe089 	ld.w	$r9,$r4,-8(0xff8)
1c000df8:	29bfe189 	st.w	$r9,$r12,-8(0xff8)
1c000dfc:	28bff08a 	ld.w	$r10,$r4,-4(0xffc)
1c000e00:	29bff18a 	st.w	$r10,$r12,-4(0xffc)
1c000e04:	5fffb90c 	bne	$r8,$r12,-72(0x3ffb8) # 1c000dbc <quick_sort+0xdc>
1c000e08:	02bffcbb 	addi.w	$r27,$r5,-1(0xfff)
1c000e0c:	6401a41b 	bge	$r0,$r27,420(0x1a4) # 1c000fb0 <quick_sort+0x2d0>
1c000e10:	00408b64 	slli.w	$r4,$r27,0x2
1c000e14:	00101358 	add.w	$r24,$r26,$r4
1c000e18:	00150005 	move	$r5,$r0
1c000e1c:	1c000079 	pcaddu12i	$r25,3(0x3)
1c000e20:	28a5d339 	ld.w	$r25,$r25,-1676(0x974)
1c000e24:	004088a8 	slli.w	$r8,$r5,0x2
1c000e28:	0010234b 	add.w	$r11,$r26,$r8
1c000e2c:	2880016e 	ld.w	$r14,$r11,0
1c000e30:	2880030c 	ld.w	$r12,$r24,0
1c000e34:	00150377 	move	$r23,$r27
1c000e38:	001500a6 	move	$r6,$r5
1c000e3c:	64019dcc 	bge	$r14,$r12,412(0x19c) # 1c000fd8 <quick_sort+0x2f8>
1c000e40:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000e44:	00408af1 	slli.w	$r17,$r23,0x2
1c000e48:	0010474b 	add.w	$r11,$r26,$r17
1c000e4c:	2880016c 	ld.w	$r12,$r11,0
1c000e50:	640134d7 	bge	$r6,$r23,308(0x134) # 1c000f84 <quick_sort+0x2a4>
1c000e54:	00111af0 	sub.w	$r16,$r23,$r6
1c000e58:	02bff232 	addi.w	$r18,$r17,-4(0xffc)
1c000e5c:	03401e13 	andi	$r19,$r16,0x7
1c000e60:	00104b4d 	add.w	$r13,$r26,$r18
1c000e64:	5800ae60 	beq	$r19,$r0,172(0xac) # 1c000f10 <quick_sort+0x230>
1c000e68:	02800414 	addi.w	$r20,$r0,1(0x1)
1c000e6c:	58008e74 	beq	$r19,$r20,140(0x8c) # 1c000ef8 <quick_sort+0x218>
1c000e70:	02800801 	addi.w	$r1,$r0,2(0x2)
1c000e74:	58007661 	beq	$r19,$r1,116(0x74) # 1c000ee8 <quick_sort+0x208>
1c000e78:	02800c07 	addi.w	$r7,$r0,3(0x3)
1c000e7c:	58005e67 	beq	$r19,$r7,92(0x5c) # 1c000ed8 <quick_sort+0x1f8>
1c000e80:	0280100f 	addi.w	$r15,$r0,4(0x4)
1c000e84:	5800466f 	beq	$r19,$r15,68(0x44) # 1c000ec8 <quick_sort+0x1e8>
1c000e88:	02801409 	addi.w	$r9,$r0,5(0x5)
1c000e8c:	58002e69 	beq	$r19,$r9,44(0x2c) # 1c000eb8 <quick_sort+0x1d8>
1c000e90:	0280180a 	addi.w	$r10,$r0,6(0x6)
1c000e94:	5800166a 	beq	$r19,$r10,20(0x14) # 1c000ea8 <quick_sort+0x1c8>
1c000e98:	640141cc 	bge	$r14,$r12,320(0x140) # 1c000fd8 <quick_sort+0x2f8>
1c000e9c:	288001ac 	ld.w	$r12,$r13,0
1c000ea0:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000ea4:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000ea8:	640131cc 	bge	$r14,$r12,304(0x130) # 1c000fd8 <quick_sort+0x2f8>
1c000eac:	288001ac 	ld.w	$r12,$r13,0
1c000eb0:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000eb4:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000eb8:	640121cc 	bge	$r14,$r12,288(0x120) # 1c000fd8 <quick_sort+0x2f8>
1c000ebc:	288001ac 	ld.w	$r12,$r13,0
1c000ec0:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000ec4:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000ec8:	640111cc 	bge	$r14,$r12,272(0x110) # 1c000fd8 <quick_sort+0x2f8>
1c000ecc:	288001ac 	ld.w	$r12,$r13,0
1c000ed0:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000ed4:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000ed8:	640101cc 	bge	$r14,$r12,256(0x100) # 1c000fd8 <quick_sort+0x2f8>
1c000edc:	288001ac 	ld.w	$r12,$r13,0
1c000ee0:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000ee4:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000ee8:	6400f1cc 	bge	$r14,$r12,240(0xf0) # 1c000fd8 <quick_sort+0x2f8>
1c000eec:	288001ac 	ld.w	$r12,$r13,0
1c000ef0:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000ef4:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000ef8:	6400e1cc 	bge	$r14,$r12,224(0xe0) # 1c000fd8 <quick_sort+0x2f8>
1c000efc:	001501ab 	move	$r11,$r13
1c000f00:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000f04:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c000f08:	288011ac 	ld.w	$r12,$r13,4(0x4)
1c000f0c:	58007ae6 	beq	$r23,$r6,120(0x78) # 1c000f84 <quick_sort+0x2a4>
1c000f10:	02bf91a4 	addi.w	$r4,$r13,-28(0xfe4)
1c000f14:	6400c5cc 	bge	$r14,$r12,196(0xc4) # 1c000fd8 <quick_sort+0x2f8>
1c000f18:	288001ac 	ld.w	$r12,$r13,0
1c000f1c:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000f20:	001502e8 	move	$r8,$r23
1c000f24:	6400b5cc 	bge	$r14,$r12,180(0xb4) # 1c000fd8 <quick_sort+0x2f8>
1c000f28:	28bff1ac 	ld.w	$r12,$r13,-4(0xffc)
1c000f2c:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000f30:	0015008b 	move	$r11,$r4
1c000f34:	6400a5cc 	bge	$r14,$r12,164(0xa4) # 1c000fd8 <quick_sort+0x2f8>
1c000f38:	28bfe1ac 	ld.w	$r12,$r13,-8(0xff8)
1c000f3c:	02bff917 	addi.w	$r23,$r8,-2(0xffe)
1c000f40:	640099cc 	bge	$r14,$r12,152(0x98) # 1c000fd8 <quick_sort+0x2f8>
1c000f44:	28bfd1ac 	ld.w	$r12,$r13,-12(0xff4)
1c000f48:	02bff517 	addi.w	$r23,$r8,-3(0xffd)
1c000f4c:	64008dcc 	bge	$r14,$r12,140(0x8c) # 1c000fd8 <quick_sort+0x2f8>
1c000f50:	28bfc1ac 	ld.w	$r12,$r13,-16(0xff0)
1c000f54:	02bff117 	addi.w	$r23,$r8,-4(0xffc)
1c000f58:	640081cc 	bge	$r14,$r12,128(0x80) # 1c000fd8 <quick_sort+0x2f8>
1c000f5c:	28bfb1ac 	ld.w	$r12,$r13,-20(0xfec)
1c000f60:	02bfed17 	addi.w	$r23,$r8,-5(0xffb)
1c000f64:	02bf81ad 	addi.w	$r13,$r13,-32(0xfe0)
1c000f68:	640071cc 	bge	$r14,$r12,112(0x70) # 1c000fd8 <quick_sort+0x2f8>
1c000f6c:	2880108c 	ld.w	$r12,$r4,4(0x4)
1c000f70:	02bfe917 	addi.w	$r23,$r8,-6(0xffa)
1c000f74:	640065cc 	bge	$r14,$r12,100(0x64) # 1c000fd8 <quick_sort+0x2f8>
1c000f78:	02bfe517 	addi.w	$r23,$r8,-7(0xff9)
1c000f7c:	288011ac 	ld.w	$r12,$r13,4(0x4)
1c000f80:	5fff92e6 	bne	$r23,$r6,-112(0x3ff90) # 1c000f10 <quick_sort+0x230>
1c000f84:	004088d1 	slli.w	$r17,$r6,0x2
1c000f88:	00104751 	add.w	$r17,$r26,$r17
1c000f8c:	001500d7 	move	$r23,$r6
1c000f90:	2980022c 	st.w	$r12,$r17,0
1c000f94:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c000f98:	2980016c 	st.w	$r12,$r11,0
1c000f9c:	00150324 	move	$r4,$r25
1c000fa0:	2980022e 	st.w	$r14,$r17,0
1c000fa4:	57fa0fff 	bl	-1524(0xffffa0c) # 1c0009b0 <_quick_sort>
1c000fa8:	028006e5 	addi.w	$r5,$r23,1(0x1)
1c000fac:	63fe78bb 	blt	$r5,$r27,-392(0x3fe78) # 1c000e24 <quick_sort+0x144>
1c000fb0:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c000fb4:	28806077 	ld.w	$r23,$r3,24(0x18)
1c000fb8:	28805078 	ld.w	$r24,$r3,20(0x14)
1c000fbc:	28804079 	ld.w	$r25,$r3,16(0x10)
1c000fc0:	2880307a 	ld.w	$r26,$r3,12(0xc)
1c000fc4:	2880207b 	ld.w	$r27,$r3,8(0x8)
1c000fc8:	1c000044 	pcaddu12i	$r4,2(0x2)
1c000fcc:	289f2084 	ld.w	$r4,$r4,1992(0x7c8)
1c000fd0:	02808063 	addi.w	$r3,$r3,32(0x20)
1c000fd4:	4c000020 	jirl	$r0,$r1,0
1c000fd8:	004088d2 	slli.w	$r18,$r6,0x2
1c000fdc:	00104b51 	add.w	$r17,$r26,$r18
1c000fe0:	00408af0 	slli.w	$r16,$r23,0x2
1c000fe4:	2980022c 	st.w	$r12,$r17,0
1c000fe8:	0010434b 	add.w	$r11,$r26,$r16
1c000fec:	640154d7 	bge	$r6,$r23,340(0x154) # 1c001140 <quick_sort+0x460>
1c000ff0:	0014180c 	nor	$r12,$r0,$r6
1c000ff4:	00105d93 	add.w	$r19,$r12,$r23
1c000ff8:	02801254 	addi.w	$r20,$r18,4(0x4)
1c000ffc:	03401e61 	andi	$r1,$r19,0x7
1c001000:	0010534d 	add.w	$r13,$r26,$r20
1c001004:	5800a420 	beq	$r1,$r0,164(0xa4) # 1c0010a8 <quick_sort+0x3c8>
1c001008:	288001ac 	ld.w	$r12,$r13,0
1c00100c:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c001010:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c001014:	600105cc 	blt	$r14,$r12,260(0x104) # 1c001118 <quick_sort+0x438>
1c001018:	02800407 	addi.w	$r7,$r0,1(0x1)
1c00101c:	58008c27 	beq	$r1,$r7,140(0x8c) # 1c0010a8 <quick_sort+0x3c8>
1c001020:	0280080f 	addi.w	$r15,$r0,2(0x2)
1c001024:	5800742f 	beq	$r1,$r15,116(0x74) # 1c001098 <quick_sort+0x3b8>
1c001028:	02800c09 	addi.w	$r9,$r0,3(0x3)
1c00102c:	58005c29 	beq	$r1,$r9,92(0x5c) # 1c001088 <quick_sort+0x3a8>
1c001030:	0280100a 	addi.w	$r10,$r0,4(0x4)
1c001034:	5800442a 	beq	$r1,$r10,68(0x44) # 1c001078 <quick_sort+0x398>
1c001038:	02801404 	addi.w	$r4,$r0,5(0x5)
1c00103c:	58002c24 	beq	$r1,$r4,44(0x2c) # 1c001068 <quick_sort+0x388>
1c001040:	02801808 	addi.w	$r8,$r0,6(0x6)
1c001044:	58001428 	beq	$r1,$r8,20(0x14) # 1c001058 <quick_sort+0x378>
1c001048:	288001ac 	ld.w	$r12,$r13,0
1c00104c:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c001050:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c001054:	6000c5cc 	blt	$r14,$r12,196(0xc4) # 1c001118 <quick_sort+0x438>
1c001058:	288001ac 	ld.w	$r12,$r13,0
1c00105c:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c001060:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c001064:	6000b5cc 	blt	$r14,$r12,180(0xb4) # 1c001118 <quick_sort+0x438>
1c001068:	288001ac 	ld.w	$r12,$r13,0
1c00106c:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c001070:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c001074:	6000a5cc 	blt	$r14,$r12,164(0xa4) # 1c001118 <quick_sort+0x438>
1c001078:	288001ac 	ld.w	$r12,$r13,0
1c00107c:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c001080:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c001084:	600095cc 	blt	$r14,$r12,148(0x94) # 1c001118 <quick_sort+0x438>
1c001088:	288001ac 	ld.w	$r12,$r13,0
1c00108c:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c001090:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c001094:	600085cc 	blt	$r14,$r12,132(0x84) # 1c001118 <quick_sort+0x438>
1c001098:	288001ac 	ld.w	$r12,$r13,0
1c00109c:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c0010a0:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c0010a4:	600075cc 	blt	$r14,$r12,116(0x74) # 1c001118 <quick_sort+0x438>
1c0010a8:	028004d2 	addi.w	$r18,$r6,1(0x1)
1c0010ac:	288001ac 	ld.w	$r12,$r13,0
1c0010b0:	001501b1 	move	$r17,$r13
1c0010b4:	5bfee657 	beq	$r18,$r23,-284(0x3fee4) # 1c000f98 <quick_sort+0x2b8>
1c0010b8:	00150246 	move	$r6,$r18
1c0010bc:	60005dcc 	blt	$r14,$r12,92(0x5c) # 1c001118 <quick_sort+0x438>
1c0010c0:	288011ac 	ld.w	$r12,$r13,4(0x4)
1c0010c4:	02800646 	addi.w	$r6,$r18,1(0x1)
1c0010c8:	600051cc 	blt	$r14,$r12,80(0x50) # 1c001118 <quick_sort+0x438>
1c0010cc:	288021ac 	ld.w	$r12,$r13,8(0x8)
1c0010d0:	02800a46 	addi.w	$r6,$r18,2(0x2)
1c0010d4:	600045cc 	blt	$r14,$r12,68(0x44) # 1c001118 <quick_sort+0x438>
1c0010d8:	288031ac 	ld.w	$r12,$r13,12(0xc)
1c0010dc:	02800e46 	addi.w	$r6,$r18,3(0x3)
1c0010e0:	600039cc 	blt	$r14,$r12,56(0x38) # 1c001118 <quick_sort+0x438>
1c0010e4:	288041ac 	ld.w	$r12,$r13,16(0x10)
1c0010e8:	02801246 	addi.w	$r6,$r18,4(0x4)
1c0010ec:	60002dcc 	blt	$r14,$r12,44(0x2c) # 1c001118 <quick_sort+0x438>
1c0010f0:	288051ac 	ld.w	$r12,$r13,20(0x14)
1c0010f4:	02801646 	addi.w	$r6,$r18,5(0x5)
1c0010f8:	600021cc 	blt	$r14,$r12,32(0x20) # 1c001118 <quick_sort+0x438>
1c0010fc:	288061ac 	ld.w	$r12,$r13,24(0x18)
1c001100:	02801a46 	addi.w	$r6,$r18,6(0x6)
1c001104:	600015cc 	blt	$r14,$r12,20(0x14) # 1c001118 <quick_sort+0x438>
1c001108:	288071ac 	ld.w	$r12,$r13,28(0x1c)
1c00110c:	02801e46 	addi.w	$r6,$r18,7(0x7)
1c001110:	028081ad 	addi.w	$r13,$r13,32(0x20)
1c001114:	67ff95cc 	bge	$r14,$r12,-108(0x3ff94) # 1c0010a8 <quick_sort+0x3c8>
1c001118:	2980016c 	st.w	$r12,$r11,0
1c00111c:	53fd23ff 	b	-736(0xffffd20) # 1c000e3c <quick_sort+0x15c>
1c001120:	28800092 	ld.w	$r18,$r4,0
1c001124:	0280134c 	addi.w	$r12,$r26,4(0x4)
1c001128:	02801084 	addi.w	$r4,$r4,4(0x4)
1c00112c:	29800352 	st.w	$r18,$r26,0
1c001130:	53fc2bff 	b	-984(0xffffc28) # 1c000d58 <quick_sort+0x78>
1c001134:	1c00005a 	pcaddu12i	$r26,2(0x2)
1c001138:	2899735a 	ld.w	$r26,$r26,1628(0x65c)
1c00113c:	53fccfff 	b	-820(0xffffccc) # 1c000e08 <quick_sort+0x128>
1c001140:	001500d7 	move	$r23,$r6
1c001144:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c001148:	53fe53ff 	b	-432(0xffffe50) # 1c000f98 <quick_sort+0x2b8>
1c00114c:	03400000 	andi	$r0,$r0,0x0

1c001150 <printf>:
printf():
/home/wwt/work/perf_func/lib/printf.c:2
1c001150:	02be8063 	addi.w	$r3,$r3,-96(0xfa0)
1c001154:	2980b07a 	st.w	$r26,$r3,44(0x2c)
1c001158:	2980f061 	st.w	$r1,$r3,60(0x3c)
1c00115c:	2980e077 	st.w	$r23,$r3,56(0x38)
1c001160:	2980d078 	st.w	$r24,$r3,52(0x34)
1c001164:	2980c079 	st.w	$r25,$r3,48(0x30)
1c001168:	2980a07b 	st.w	$r27,$r3,40(0x28)
1c00116c:	2980907c 	st.w	$r28,$r3,36(0x24)
/home/wwt/work/perf_func/lib/printf.c:10
1c001170:	28000097 	ld.b	$r23,$r4,0
/home/wwt/work/perf_func/lib/printf.c:8
1c001174:	0281107a 	addi.w	$r26,$r3,68(0x44)
/home/wwt/work/perf_func/lib/printf.c:2
1c001178:	29811065 	st.w	$r5,$r3,68(0x44)
1c00117c:	29812066 	st.w	$r6,$r3,72(0x48)
1c001180:	29813067 	st.w	$r7,$r3,76(0x4c)
1c001184:	29814068 	st.w	$r8,$r3,80(0x50)
1c001188:	29815069 	st.w	$r9,$r3,84(0x54)
1c00118c:	2981606a 	st.w	$r10,$r3,88(0x58)
1c001190:	2981706b 	st.w	$r11,$r3,92(0x5c)
/home/wwt/work/perf_func/lib/printf.c:8
1c001194:	2980707a 	st.w	$r26,$r3,28(0x1c)
/home/wwt/work/perf_func/lib/printf.c:10
1c001198:	580086e0 	beq	$r23,$r0,132(0x84) # 1c00121c <printf+0xcc>
1c00119c:	00150099 	move	$r25,$r4
1c0011a0:	00150018 	move	$r24,$r0
1c0011a4:	1c00003c 	pcaddu12i	$r28,1(0x1)
1c0011a8:	0293a39c 	addi.w	$r28,$r28,1256(0x4e8)
1c0011ac:	0280201b 	addi.w	$r27,$r0,8(0x8)
1c0011b0:	50001c00 	b	28(0x1c) # 1c0011cc <printf+0x7c>
/home/wwt/work/perf_func/lib/printf.c:80
1c0011b4:	001502e4 	move	$r4,$r23
1c0011b8:	5401c400 	bl	452(0x1c4) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/printf.c:10 (discriminator 2)
1c0011bc:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:10
1c0011c0:	0010632c 	add.w	$r12,$r25,$r24
1c0011c4:	28000197 	ld.b	$r23,$r12,0
1c0011c8:	580056e0 	beq	$r23,$r0,84(0x54) # 1c00121c <printf+0xcc>
/home/wwt/work/perf_func/lib/printf.c:13
1c0011cc:	0280940c 	addi.w	$r12,$r0,37(0x25)
1c0011d0:	58001aec 	beq	$r23,$r12,24(0x18) # 1c0011e8 <printf+0x98>
/home/wwt/work/perf_func/lib/printf.c:79
1c0011d4:	0280280c 	addi.w	$r12,$r0,10(0xa)
1c0011d8:	5fffdeec 	bne	$r23,$r12,-36(0x3ffdc) # 1c0011b4 <printf+0x64>
/home/wwt/work/perf_func/lib/printf.c:79 (discriminator 1)
1c0011dc:	02803404 	addi.w	$r4,$r0,13(0xd)
1c0011e0:	54019c00 	bl	412(0x19c) # 1c00137c <putchar>
1c0011e4:	53ffd3ff 	b	-48(0xfffffd0) # 1c0011b4 <printf+0x64>
1c0011e8:	0010632c 	add.w	$r12,$r25,$r24
1c0011ec:	2800058d 	ld.b	$r13,$r12,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:15
1c0011f0:	02800405 	addi.w	$r5,$r0,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:17
1c0011f4:	02814c10 	addi.w	$r16,$r0,83(0x53)
/home/wwt/work/perf_func/lib/printf.c:68
1c0011f8:	0280280f 	addi.w	$r15,$r0,10(0xa)
/home/wwt/work/perf_func/lib/printf.c:17
1c0011fc:	02bf6dac 	addi.w	$r12,$r13,-37(0xfdb)
1c001200:	2980306c 	st.w	$r12,$r3,12(0xc)
1c001204:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c001208:	68016a0c 	bltu	$r16,$r12,360(0x168) # 1c001370 <printf+0x220>
1c00120c:	0040898c 	slli.w	$r12,$r12,0x2
1c001210:	0010338c 	add.w	$r12,$r28,$r12
1c001214:	2880018c 	ld.w	$r12,$r12,0
1c001218:	4c000180 	jirl	$r0,$r12,0
/home/wwt/work/perf_func/lib/printf.c:84
1c00121c:	2880f061 	ld.w	$r1,$r3,60(0x3c)
1c001220:	2880e077 	ld.w	$r23,$r3,56(0x38)
1c001224:	2880d078 	ld.w	$r24,$r3,52(0x34)
1c001228:	2880c079 	ld.w	$r25,$r3,48(0x30)
1c00122c:	2880b07a 	ld.w	$r26,$r3,44(0x2c)
1c001230:	2880a07b 	ld.w	$r27,$r3,40(0x28)
1c001234:	2880907c 	ld.w	$r28,$r3,36(0x24)
1c001238:	00150004 	move	$r4,$r0
1c00123c:	02818063 	addi.w	$r3,$r3,96(0x60)
1c001240:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/printf.c:65
1c001244:	0010632c 	add.w	$r12,$r25,$r24
1c001248:	2800098d 	ld.b	$r13,$r12,2(0x2)
1c00124c:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:67 (discriminator 1)
1c001250:	02bf3dac 	addi.w	$r12,$r13,-49(0xfcf)
/home/wwt/work/perf_func/lib/printf.c:67
1c001254:	2980306c 	st.w	$r12,$r3,12(0xc)
1c001258:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c00125c:	00150005 	move	$r5,$r0
1c001260:	6bff9f6c 	bltu	$r27,$r12,-100(0x3ff9c) # 1c0011fc <printf+0xac>
/home/wwt/work/perf_func/lib/printf.c:68
1c001264:	001c3ca5 	mul.w	$r5,$r5,$r15
/home/wwt/work/perf_func/lib/printf.c:67
1c001268:	02800718 	addi.w	$r24,$r24,1(0x1)
1c00126c:	0010632c 	add.w	$r12,$r25,$r24
/home/wwt/work/perf_func/lib/printf.c:68
1c001270:	02bf41ae 	addi.w	$r14,$r13,-48(0xfd0)
/home/wwt/work/perf_func/lib/printf.c:67
1c001274:	2800058d 	ld.b	$r13,$r12,1(0x1)
1c001278:	02bf3dac 	addi.w	$r12,$r13,-49(0xfcf)
1c00127c:	2980306c 	st.w	$r12,$r3,12(0xc)
1c001280:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
/home/wwt/work/perf_func/lib/printf.c:68
1c001284:	001015c5 	add.w	$r5,$r14,$r5
/home/wwt/work/perf_func/lib/printf.c:67
1c001288:	6fffdf6c 	bgeu	$r27,$r12,-36(0x3ffdc) # 1c001264 <printf+0x114>
1c00128c:	53ff73ff 	b	-144(0xfffff70) # 1c0011fc <printf+0xac>
/home/wwt/work/perf_func/lib/printf.c:50
1c001290:	28800344 	ld.w	$r4,$r26,0
1c001294:	00150007 	move	$r7,$r0
1c001298:	02800806 	addi.w	$r6,$r0,2(0x2)
1c00129c:	5401cc00 	bl	460(0x1cc) # 1c001468 <printbase>
/home/wwt/work/perf_func/lib/printf.c:51
1c0012a0:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:52
1c0012a4:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:53
1c0012a8:	53ff17ff 	b	-236(0xfffff14) # 1c0011bc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:25
1c0012ac:	28800344 	ld.w	$r4,$r26,0
/home/wwt/work/perf_func/lib/printf.c:27
1c0012b0:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:26
1c0012b4:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:25
1c0012b8:	5400c400 	bl	196(0xc4) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/printf.c:28
1c0012bc:	53ff03ff 	b	-256(0xfffff00) # 1c0011bc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:35
1c0012c0:	28800344 	ld.w	$r4,$r26,0
1c0012c4:	02800407 	addi.w	$r7,$r0,1(0x1)
1c0012c8:	02802806 	addi.w	$r6,$r0,10(0xa)
1c0012cc:	54019c00 	bl	412(0x19c) # 1c001468 <printbase>
/home/wwt/work/perf_func/lib/printf.c:36
1c0012d0:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:37
1c0012d4:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:38
1c0012d8:	53fee7ff 	b	-284(0xffffee4) # 1c0011bc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:40
1c0012dc:	28800344 	ld.w	$r4,$r26,0
1c0012e0:	00150007 	move	$r7,$r0
1c0012e4:	02802806 	addi.w	$r6,$r0,10(0xa)
1c0012e8:	54018000 	bl	384(0x180) # 1c001468 <printbase>
/home/wwt/work/perf_func/lib/printf.c:41
1c0012ec:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:42
1c0012f0:	02800b18 	addi.w	$r24,$r24,2(0x2)
/home/wwt/work/perf_func/lib/printf.c:43
1c0012f4:	53fecbff 	b	-312(0xffffec8) # 1c0011bc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:45
1c0012f8:	28800344 	ld.w	$r4,$r26,0
1c0012fc:	00150007 	move	$r7,$r0
1c001300:	02802006 	addi.w	$r6,$r0,8(0x8)
1c001304:	54016400 	bl	356(0x164) # 1c001468 <printbase>
/home/wwt/work/perf_func/lib/printf.c:46
1c001308:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:47
1c00130c:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:48
1c001310:	53feafff 	b	-340(0xffffeac) # 1c0011bc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:56
1c001314:	28800344 	ld.w	$r4,$r26,0
1c001318:	00150007 	move	$r7,$r0
1c00131c:	02804006 	addi.w	$r6,$r0,16(0x10)
1c001320:	54014800 	bl	328(0x148) # 1c001468 <printbase>
/home/wwt/work/perf_func/lib/printf.c:57
1c001324:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:58
1c001328:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:59
1c00132c:	53fe93ff 	b	-368(0xffffe90) # 1c0011bc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:20
1c001330:	28800344 	ld.w	$r4,$r26,0
/home/wwt/work/perf_func/lib/printf.c:22
1c001334:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:21
1c001338:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:20
1c00133c:	54008c00 	bl	140(0x8c) # 1c0013c8 <putstring>
/home/wwt/work/perf_func/lib/printf.c:23
1c001340:	53fe7fff 	b	-388(0xffffe7c) # 1c0011bc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:30
1c001344:	28800344 	ld.w	$r4,$r26,0
1c001348:	00150007 	move	$r7,$r0
1c00134c:	02802806 	addi.w	$r6,$r0,10(0xa)
1c001350:	54011800 	bl	280(0x118) # 1c001468 <printbase>
/home/wwt/work/perf_func/lib/printf.c:31
1c001354:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:32
1c001358:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:33
1c00135c:	53fe63ff 	b	-416(0xffffe60) # 1c0011bc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:61
1c001360:	02809404 	addi.w	$r4,$r0,37(0x25)
1c001364:	54001800 	bl	24(0x18) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/printf.c:62
1c001368:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:63
1c00136c:	53fe53ff 	b	-432(0xffffe50) # 1c0011bc <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:73
1c001370:	02809404 	addi.w	$r4,$r0,37(0x25)
1c001374:	54000800 	bl	8(0x8) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/printf.c:74
1c001378:	53fe47ff 	b	-444(0xffffe44) # 1c0011bc <printf+0x6c>

1c00137c <putchar>:
putchar():
/home/wwt/work/perf_func/lib/putchar.c:2
1c00137c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001380:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/putchar.c:9
1c001384:	157f5ff9 	lu12i.w	$r25,-263425(0xbfaff)
1c001388:	03bc4339 	ori	$r25,$r25,0xf10
1c00138c:	29000324 	st.b	$r4,$r25,0
1c001390:	03400000 	andi	$r0,$r0,0x0
/home/wwt/work/perf_func/lib/putchar.c:5
1c001394:	00150004 	move	$r4,$r0
1c001398:	28803079 	ld.w	$r25,$r3,12(0xc)
1c00139c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0013a0:	4c000020 	jirl	$r0,$r1,0

1c0013a4 <tgt_putchar>:
tgt_putchar():
/home/wwt/work/perf_func/lib/putchar.c:8
1c0013a4:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0013a8:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/putchar.c:9
1c0013ac:	157f5ff9 	lu12i.w	$r25,-263425(0xbfaff)
1c0013b0:	03bc4339 	ori	$r25,$r25,0xf10
1c0013b4:	29000324 	st.b	$r4,$r25,0
1c0013b8:	03400000 	andi	$r0,$r0,0x0
/home/wwt/work/perf_func/lib/putchar.c:16
1c0013bc:	28803079 	ld.w	$r25,$r3,12(0xc)
1c0013c0:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0013c4:	4c000020 	jirl	$r0,$r1,0

1c0013c8 <putstring>:
putstring():
/home/wwt/work/perf_func/lib/puts.c:2
1c0013c8:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0013cc:	29803061 	st.w	$r1,$r3,12(0xc)
1c0013d0:	29802077 	st.w	$r23,$r3,8(0x8)
1c0013d4:	29801078 	st.w	$r24,$r3,4(0x4)
1c0013d8:	29800079 	st.w	$r25,$r3,0
/home/wwt/work/perf_func/lib/puts.c:4
1c0013dc:	28000097 	ld.b	$r23,$r4,0
1c0013e0:	580042e0 	beq	$r23,$r0,64(0x40) # 1c001420 <putstring+0x58>
1c0013e4:	00150098 	move	$r24,$r4
/home/wwt/work/perf_func/lib/puts.c:6
1c0013e8:	02802819 	addi.w	$r25,$r0,10(0xa)
1c0013ec:	50001400 	b	20(0x14) # 1c001400 <putstring+0x38>
/home/wwt/work/perf_func/lib/puts.c:7
1c0013f0:	001502e4 	move	$r4,$r23
1c0013f4:	57ff8bff 	bl	-120(0xfffff88) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/puts.c:4
1c0013f8:	28000317 	ld.b	$r23,$r24,0
1c0013fc:	580026e0 	beq	$r23,$r0,36(0x24) # 1c001420 <putstring+0x58>
/home/wwt/work/perf_func/lib/puts.c:8
1c001400:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/puts.c:6
1c001404:	5fffeef9 	bne	$r23,$r25,-20(0x3ffec) # 1c0013f0 <putstring+0x28>
/home/wwt/work/perf_func/lib/puts.c:6 (discriminator 1)
1c001408:	02803404 	addi.w	$r4,$r0,13(0xd)
1c00140c:	57ff73ff 	bl	-144(0xfffff70) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/puts.c:7
1c001410:	001502e4 	move	$r4,$r23
1c001414:	57ff6bff 	bl	-152(0xfffff68) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/puts.c:4
1c001418:	28000317 	ld.b	$r23,$r24,0
1c00141c:	5fffe6e0 	bne	$r23,$r0,-28(0x3ffe4) # 1c001400 <putstring+0x38>
/home/wwt/work/perf_func/lib/puts.c:11
1c001420:	28803061 	ld.w	$r1,$r3,12(0xc)
1c001424:	28802077 	ld.w	$r23,$r3,8(0x8)
1c001428:	28801078 	ld.w	$r24,$r3,4(0x4)
1c00142c:	28800079 	ld.w	$r25,$r3,0
1c001430:	00150004 	move	$r4,$r0
1c001434:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001438:	4c000020 	jirl	$r0,$r1,0

1c00143c <puts>:
puts():
/home/wwt/work/perf_func/lib/puts.c:15
1c00143c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001440:	29803061 	st.w	$r1,$r3,12(0xc)
/home/wwt/work/perf_func/lib/puts.c:16
1c001444:	57ff87ff 	bl	-124(0xfffff84) # 1c0013c8 <putstring>
/home/wwt/work/perf_func/lib/puts.c:17
1c001448:	02803404 	addi.w	$r4,$r0,13(0xd)
1c00144c:	57ff33ff 	bl	-208(0xfffff30) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/puts.c:18
1c001450:	02802804 	addi.w	$r4,$r0,10(0xa)
1c001454:	57ff2bff 	bl	-216(0xfffff28) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/puts.c:20
1c001458:	28803061 	ld.w	$r1,$r3,12(0xc)
1c00145c:	00150004 	move	$r4,$r0
1c001460:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001464:	4c000020 	jirl	$r0,$r1,0

1c001468 <printbase>:
printbase():
/home/wwt/work/perf_func/lib/printbase.c:2
1c001468:	02be8063 	addi.w	$r3,$r3,-96(0xfa0)
1c00146c:	29816077 	st.w	$r23,$r3,88(0x58)
1c001470:	29817061 	st.w	$r1,$r3,92(0x5c)
1c001474:	29815078 	st.w	$r24,$r3,84(0x54)
1c001478:	29814079 	st.w	$r25,$r3,80(0x50)
1c00147c:	00150097 	move	$r23,$r4
/home/wwt/work/perf_func/lib/printbase.c:7
1c001480:	580008e0 	beq	$r7,$r0,8(0x8) # 1c001488 <printbase+0x20>
/home/wwt/work/perf_func/lib/printbase.c:7 (discriminator 1)
1c001484:	6000a080 	blt	$r4,$r0,160(0xa0) # 1c001524 <printbase+0xbc>
/home/wwt/work/perf_func/lib/printbase.c:14
1c001488:	5800bee0 	beq	$r23,$r0,188(0xbc) # 1c001544 <printbase+0xdc>
1c00148c:	0280406c 	addi.w	$r12,$r3,16(0x10)
1c001490:	0280040e 	addi.w	$r14,$r0,1(0x1)
1c001494:	001131ce 	sub.w	$r14,$r14,$r12
1c001498:	50000800 	b	8(0x8) # 1c0014a0 <printbase+0x38>
/home/wwt/work/perf_func/lib/printbase.c:17
1c00149c:	001501b7 	move	$r23,$r13
/home/wwt/work/perf_func/lib/printbase.c:16
1c0014a0:	00219aed 	mod.wu	$r13,$r23,$r6
1c0014a4:	5c0008c0 	bne	$r6,$r0,8(0x8) # 1c0014ac <printbase+0x44>
1c0014a8:	002a0007 	break	0x7
1c0014ac:	2900018d 	st.b	$r13,$r12,0
/home/wwt/work/perf_func/lib/printbase.c:17
1c0014b0:	001031d8 	add.w	$r24,$r14,$r12
1c0014b4:	00211aed 	div.wu	$r13,$r23,$r6
1c0014b8:	5c0008c0 	bne	$r6,$r0,8(0x8) # 1c0014c0 <printbase+0x58>
1c0014bc:	002a0007 	break	0x7
1c0014c0:	0280058c 	addi.w	$r12,$r12,1(0x1)
/home/wwt/work/perf_func/lib/printbase.c:14
1c0014c4:	6fffdae6 	bgeu	$r23,$r6,-40(0x3ffd8) # 1c00149c <printbase+0x34>
/home/wwt/work/perf_func/lib/printbase.c:22
1c0014c8:	600054b8 	blt	$r5,$r24,84(0x54) # 1c00151c <printbase+0xb4>
1c0014cc:	001500b7 	move	$r23,$r5
/home/wwt/work/perf_func/lib/printbase.c:25
1c0014d0:	02802419 	addi.w	$r25,$r0,9(0x9)
/home/wwt/work/perf_func/lib/printbase.c:24
1c0014d4:	0280406c 	addi.w	$r12,$r3,16(0x10)
1c0014d8:	00105d8c 	add.w	$r12,$r12,$r23
1c0014dc:	0280c004 	addi.w	$r4,$r0,48(0x30)
1c0014e0:	60001717 	blt	$r24,$r23,20(0x14) # 1c0014f4 <printbase+0x8c>
1c0014e4:	283ffd8c 	ld.b	$r12,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/printbase.c:25 (discriminator 1)
1c0014e8:	02815d84 	addi.w	$r4,$r12,87(0x57)
1c0014ec:	60000b2c 	blt	$r25,$r12,8(0x8) # 1c0014f4 <printbase+0x8c>
1c0014f0:	0280c184 	addi.w	$r4,$r12,48(0x30)
1c0014f4:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c0014f8:	57fe87ff 	bl	-380(0xffffe84) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/printbase.c:22 (discriminator 4)
1c0014fc:	5fffdae0 	bne	$r23,$r0,-40(0x3ffd8) # 1c0014d4 <printbase+0x6c>
/home/wwt/work/perf_func/lib/printbase.c:28
1c001500:	28817061 	ld.w	$r1,$r3,92(0x5c)
1c001504:	28816077 	ld.w	$r23,$r3,88(0x58)
1c001508:	28815078 	ld.w	$r24,$r3,84(0x54)
1c00150c:	28814079 	ld.w	$r25,$r3,80(0x50)
1c001510:	00150004 	move	$r4,$r0
1c001514:	02818063 	addi.w	$r3,$r3,96(0x60)
1c001518:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/printbase.c:22
1c00151c:	00150305 	move	$r5,$r24
1c001520:	53ffafff 	b	-84(0xfffffac) # 1c0014cc <printbase+0x64>
/home/wwt/work/perf_func/lib/printbase.c:10
1c001524:	0280b404 	addi.w	$r4,$r0,45(0x2d)
1c001528:	29803066 	st.w	$r6,$r3,12(0xc)
1c00152c:	29802065 	st.w	$r5,$r3,8(0x8)
1c001530:	57fe4fff 	bl	-436(0xffffe4c) # 1c00137c <putchar>
/home/wwt/work/perf_func/lib/printbase.c:9
1c001534:	00115c17 	sub.w	$r23,$r0,$r23
/home/wwt/work/perf_func/lib/printbase.c:10
1c001538:	28802065 	ld.w	$r5,$r3,8(0x8)
1c00153c:	28803066 	ld.w	$r6,$r3,12(0xc)
1c001540:	53ff4fff 	b	-180(0xfffff4c) # 1c00148c <printbase+0x24>
/home/wwt/work/perf_func/lib/printbase.c:22
1c001544:	67ffbc05 	bge	$r0,$r5,-68(0x3ffbc) # 1c001500 <printbase+0x98>
1c001548:	00150018 	move	$r24,$r0
1c00154c:	53ff83ff 	b	-128(0xfffff80) # 1c0014cc <printbase+0x64>

1c001550 <get_count>:
get_count():
/home/wwt/work/perf_func/lib/time.c:18
1c001550:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001554:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/time.c:7
1c001558:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c00155c:	28800324 	ld.w	$r4,$r25,0
/home/wwt/work/perf_func/lib/time.c:20
1c001560:	28803079 	ld.w	$r25,$r3,12(0xc)
1c001564:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001568:	4c000020 	jirl	$r0,$r1,0

1c00156c <_get_count>:
_get_count():
/home/wwt/work/perf_func/lib/time.c:20
1c00156c:	53ffe7ff 	b	-28(0xfffffe4) # 1c001550 <get_count>

1c001570 <get_count_my>:
get_count_my():
/home/wwt/work/perf_func/lib/time.c:25
1c001570:	00006004 	rdtimel.w	$r4,$r0
/home/wwt/work/perf_func/lib/time.c:30
1c001574:	4c000020 	jirl	$r0,$r1,0

1c001578 <clock_gettime>:
clock_gettime():
/home/wwt/work/perf_func/lib/time.c:33
1c001578:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c00157c:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c001580:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c001584:	2880032f 	ld.w	$r15,$r25,0
clock_gettime():
/home/wwt/work/perf_func/lib/time.c:36
1c001588:	0280280d 	addi.w	$r13,$r0,10(0xa)
1c00158c:	001c35ed 	mul.w	$r13,$r15,$r13
/home/wwt/work/perf_func/lib/time.c:37
1c001590:	02819010 	addi.w	$r16,$r0,100(0x64)
/home/wwt/work/perf_func/lib/time.c:36
1c001594:	028fa00c 	addi.w	$r12,$r0,1000(0x3e8)
/home/wwt/work/perf_func/lib/time.c:37
1c001598:	002141ee 	div.wu	$r14,$r15,$r16
1c00159c:	5c000a00 	bne	$r16,$r0,8(0x8) # 1c0015a4 <clock_gettime+0x2c>
1c0015a0:	002a0007 	break	0x7
1c0015a4:	0021b1d1 	mod.wu	$r17,$r14,$r12
1c0015a8:	5c000980 	bne	$r12,$r0,8(0x8) # 1c0015b0 <clock_gettime+0x38>
1c0015ac:	002a0007 	break	0x7
/home/wwt/work/perf_func/lib/time.c:38
1c0015b0:	1400030e 	lu12i.w	$r14,24(0x18)
1c0015b4:	039a81ce 	ori	$r14,$r14,0x6a0
1c0015b8:	002139f0 	div.wu	$r16,$r15,$r14
1c0015bc:	5c0009c0 	bne	$r14,$r0,8(0x8) # 1c0015c4 <clock_gettime+0x4c>
1c0015c0:	002a0007 	break	0x7
1c0015c4:	0021b20e 	mod.wu	$r14,$r16,$r12
1c0015c8:	5c000980 	bne	$r12,$r0,8(0x8) # 1c0015d0 <clock_gettime+0x58>
1c0015cc:	002a0007 	break	0x7
/home/wwt/work/perf_func/lib/time.c:37
1c0015d0:	298020b1 	st.w	$r17,$r5,8(0x8)
/home/wwt/work/perf_func/lib/time.c:38
1c0015d4:	298030ae 	st.w	$r14,$r5,12(0xc)
/home/wwt/work/perf_func/lib/time.c:39
1c0015d8:	298000a0 	st.w	$r0,$r5,0
/home/wwt/work/perf_func/lib/time.c:42
1c0015dc:	28803079 	ld.w	$r25,$r3,12(0xc)
1c0015e0:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/time.c:36
1c0015e4:	0021b1ae 	mod.wu	$r14,$r13,$r12
1c0015e8:	5c000980 	bne	$r12,$r0,8(0x8) # 1c0015f0 <clock_gettime+0x78>
1c0015ec:	002a0007 	break	0x7
1c0015f0:	298010ae 	st.w	$r14,$r5,4(0x4)
/home/wwt/work/perf_func/lib/time.c:42
1c0015f4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0015f8:	4c000020 	jirl	$r0,$r1,0

1c0015fc <get_clock>:
get_clock():
/home/wwt/work/perf_func/lib/time.c:42
1c0015fc:	53ff57ff 	b	-172(0xfffff54) # 1c001550 <get_count>

1c001600 <get_ns>:
get_ns():
/home/wwt/work/perf_func/lib/time.c:52
1c001600:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001604:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c001608:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c00160c:	28800324 	ld.w	$r4,$r25,0
get_ns():
/home/wwt/work/perf_func/lib/time.c:55
1c001610:	0280280c 	addi.w	$r12,$r0,10(0xa)
/home/wwt/work/perf_func/lib/time.c:57
1c001614:	28803079 	ld.w	$r25,$r3,12(0xc)
1c001618:	001c3084 	mul.w	$r4,$r4,$r12
1c00161c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001620:	4c000020 	jirl	$r0,$r1,0

1c001624 <get_us>:
get_us():
/home/wwt/work/perf_func/lib/time.c:61
1c001624:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c001628:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c00162c:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c001630:	28800324 	ld.w	$r4,$r25,0
get_us():
/home/wwt/work/perf_func/lib/time.c:64
1c001634:	0281900c 	addi.w	$r12,$r0,100(0x64)
/home/wwt/work/perf_func/lib/time.c:66
1c001638:	28803079 	ld.w	$r25,$r3,12(0xc)
1c00163c:	0021308d 	div.wu	$r13,$r4,$r12
1c001640:	5c000980 	bne	$r12,$r0,8(0x8) # 1c001648 <get_us+0x24>
1c001644:	002a0007 	break	0x7
1c001648:	001501a4 	move	$r4,$r13
1c00164c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c001650:	4c000020 	jirl	$r0,$r1,0

Disassembly of section .data:

1c001654 <a_ref-0x98>:
1c001654:	63697571 	blt	$r11,$r17,-38540(0x36974) # 1bff7fc8 <data_size+0x1bff5e84>
1c001658:	6f73206b 	bgeu	$r3,$r11,-36064(0x37320) # 1bff8978 <data_size+0x1bff6834>
1c00165c:	74207472 	xvsubwev.h.b	$xr18,$xr3,$xr29
1c001660:	20747365 	ll.w	$r5,$r27,29808(0x7470)
1c001664:	69676562 	bltu	$r11,$r2,92004(0x16764) # 1c017dc8 <_stack+0x560c>
1c001668:	00002e6e 	ctz.d	$r14,$r19
1c00166c:	63697571 	blt	$r11,$r17,-38540(0x36974) # 1bff7fe0 <data_size+0x1bff5e9c>
1c001670:	6f73206b 	bgeu	$r3,$r11,-36064(0x37320) # 1bff8990 <data_size+0x1bff684c>
1c001674:	50207472 	b	29892724(0x1c82074) # 1dc836e8 <_stack+0x1c70f2c>
1c001678:	21535341 	sc.w	$r1,$r26,21328(0x5350)
1c00167c:	00000000 	0x00000000
1c001680:	63697571 	blt	$r11,$r17,-38540(0x36974) # 1bff7ff4 <data_size+0x1bff5eb0>
1c001684:	6f73206b 	bgeu	$r3,$r11,-36064(0x37320) # 1bff89a4 <data_size+0x1bff6860>
1c001688:	45207472 	bnez	$r3,-3596172(0x492074) # 1bc936fc <data_size+0x1bc915b8>
1c00168c:	524f5252 	b	-112570544(0x94a4f50) # 154a65dc <data_size+0x154a4498>
1c001690:	00212121 	div.wu	$r1,$r9,$r8
1c001694:	63697571 	blt	$r11,$r17,-38540(0x36974) # 1bff8008 <data_size+0x1bff5ec4>
1c001698:	6f73206b 	bgeu	$r3,$r11,-36064(0x37320) # 1bff89b8 <data_size+0x1bff6874>
1c00169c:	203a7472 	ll.w	$r18,$r3,14964(0x3a74)
1c0016a0:	61746f54 	blt	$r26,$r20,95340(0x1746c) # 1c018b0c <_stack+0x6350>
1c0016a4:	6f43206c 	bgeu	$r3,$r12,-48352(0x34320) # 1bff59c4 <data_size+0x1bff3880>
1c0016a8:	28746e75 	ld.h	$r21,$r19,-741(0xd1b)
1c0016ac:	20436f53 	ll.w	$r19,$r26,17260(0x436c)
1c0016b0:	6e756f63 	bgeu	$r27,$r3,-101012(0x2756c) # 1bfe8c1c <data_size+0x1bfe6ad8>
1c0016b4:	3d202974 	0x3d202974
1c0016b8:	25783020 	stptr.w	$r0,$r1,30768(0x7830)
1c0016bc:	00000a78 	0x00000a78
1c0016c0:	63697571 	blt	$r11,$r17,-38540(0x36974) # 1bff8034 <data_size+0x1bff5ef0>
1c0016c4:	6f73206b 	bgeu	$r3,$r11,-36064(0x37320) # 1bff89e4 <data_size+0x1bff68a0>
1c0016c8:	203a7472 	ll.w	$r18,$r3,14964(0x3a74)
1c0016cc:	61746f54 	blt	$r26,$r20,95340(0x1746c) # 1c018b38 <_stack+0x637c>
1c0016d0:	6f43206c 	bgeu	$r3,$r12,-48352(0x34320) # 1bff59f0 <data_size+0x1bff38ac>
1c0016d4:	28746e75 	ld.h	$r21,$r19,-741(0xd1b)
1c0016d8:	20555043 	ll.w	$r3,$r2,21840(0x5550)
1c0016dc:	6e756f63 	bgeu	$r27,$r3,-101012(0x2756c) # 1bfe8c48 <data_size+0x1bfe6b04>
1c0016e0:	3d202974 	0x3d202974
1c0016e4:	25783020 	stptr.w	$r0,$r1,30768(0x7830)
1c0016e8:	00000a78 	0x00000a78

1c0016ec <a_ref>:
1c0016ec:	00000008 	0x00000008
1c0016f0:	00000014 	0x00000014
1c0016f4:	0000001c 	0x0000001c
1c0016f8:	0000002a 	0x0000002a
1c0016fc:	00000048 	0x00000048
1c001700:	0000008c 	0x0000008c
1c001704:	000000ab 	0x000000ab
1c001708:	000000e3 	0x000000e3
1c00170c:	00000128 	0x00000128
1c001710:	0000014b 	0x0000014b
1c001714:	0000014f 	0x0000014f
1c001718:	0000015b 	0x0000015b
1c00171c:	00000164 	0x00000164
1c001720:	00000183 	0x00000183
1c001724:	000001c9 	0x000001c9
1c001728:	000001cb 	0x000001cb
1c00172c:	0000021f 	0x0000021f
1c001730:	00000255 	0x00000255
1c001734:	00000257 	0x00000257
1c001738:	0000026b 	0x0000026b
1c00173c:	000002e5 	0x000002e5
1c001740:	000002f8 	0x000002f8
1c001744:	00000317 	0x00000317
1c001748:	0000031d 	0x0000031d
1c00174c:	0000036d 	0x0000036d
1c001750:	00000381 	0x00000381
1c001754:	000003a9 	0x000003a9
1c001758:	0000041f 	0x0000041f
1c00175c:	00000431 	0x00000431
1c001760:	0000045e 	0x0000045e
1c001764:	000004ae 	0x000004ae
1c001768:	0000055c 	0x0000055c
1c00176c:	000005c8 	0x000005c8
1c001770:	000005da 	0x000005da
1c001774:	000005f0 	0x000005f0
1c001778:	000005f4 	0x000005f4
1c00177c:	0000060b 	0x0000060b
1c001780:	0000062f 	0x0000062f
1c001784:	00000639 	0x00000639
1c001788:	00000652 	0x00000652
1c00178c:	0000067a 	0x0000067a
1c001790:	00000736 	0x00000736
1c001794:	00000772 	0x00000772
1c001798:	00000781 	0x00000781
1c00179c:	00000783 	0x00000783
1c0017a0:	0000079e 	0x0000079e
1c0017a4:	000007a0 	0x000007a0
1c0017a8:	000007b8 	0x000007b8
1c0017ac:	000007b9 	0x000007b9
1c0017b0:	000007c0 	0x000007c0
1c0017b4:	00000801 	0x00000801
1c0017b8:	00000810 	0x00000810
1c0017bc:	0000081f 	0x0000081f
1c0017c0:	00000826 	0x00000826
1c0017c4:	00000841 	0x00000841
1c0017c8:	00000859 	0x00000859
1c0017cc:	00000867 	0x00000867
1c0017d0:	0000089a 	0x0000089a
1c0017d4:	000008a4 	0x000008a4
1c0017d8:	000008a5 	0x000008a5
1c0017dc:	000008af 	0x000008af
1c0017e0:	000008c9 	0x000008c9
1c0017e4:	0000090b 	0x0000090b
1c0017e8:	0000090e 	0x0000090e
1c0017ec:	00000940 	0x00000940
1c0017f0:	0000096c 	0x0000096c
1c0017f4:	000009ef 	0x000009ef
1c0017f8:	000009f0 	0x000009f0
1c0017fc:	00000a16 	0x00000a16
1c001800:	00000a2b 	0x00000a2b
1c001804:	00000ab0 	0x00000ab0
1c001808:	00000abb 	0x00000abb
1c00180c:	00000abd 	0x00000abd
1c001810:	00000ac8 	0x00000ac8
1c001814:	00000afb 	0x00000afb
1c001818:	00000afd 	0x00000afd
1c00181c:	00000b1a 	0x00000b1a
1c001820:	00000b21 	0x00000b21
1c001824:	00000b30 	0x00000b30
1c001828:	00000b33 	0x00000b33
1c00182c:	00000b65 	0x00000b65
1c001830:	00000b77 	0x00000b77
1c001834:	00000ba4 	0x00000ba4
1c001838:	00000bf8 	0x00000bf8
1c00183c:	00000c07 	0x00000c07
1c001840:	00000c49 	0x00000c49
1c001844:	00000c71 	0x00000c71
1c001848:	00000c77 	0x00000c77
1c00184c:	00000ca2 	0x00000ca2
1c001850:	00000ca5 	0x00000ca5
1c001854:	00000cc0 	0x00000cc0
1c001858:	00000cc6 	0x00000cc6
1c00185c:	00000ce5 	0x00000ce5
1c001860:	00000ce9 	0x00000ce9
1c001864:	00000ce9 	0x00000ce9
1c001868:	00000d0c 	0x00000d0c
1c00186c:	00000d42 	0x00000d42
1c001870:	00000d44 	0x00000d44
1c001874:	00000d62 	0x00000d62
1c001878:	00000dab 	0x00000dab
1c00187c:	00000df7 	0x00000df7
1c001880:	00000e1f 	0x00000e1f
1c001884:	00000e61 	0x00000e61
1c001888:	00000e61 	0x00000e61
1c00188c:	00000e75 	0x00000e75
1c001890:	00000e80 	0x00000e80
1c001894:	00000eae 	0x00000eae
1c001898:	00000ed0 	0x00000ed0
1c00189c:	00000ed9 	0x00000ed9
1c0018a0:	00000f3e 	0x00000f3e
1c0018a4:	00000f43 	0x00000f43
1c0018a8:	00000f71 	0x00000f71
1c0018ac:	00000f72 	0x00000f72
1c0018b0:	00000faf 	0x00000faf
1c0018b4:	00000faf 	0x00000faf
1c0018b8:	00000fd0 	0x00000fd0
1c0018bc:	00001019 	clo.w	$r25,$r0
1c0018c0:	00001039 	clo.w	$r25,$r1
1c0018c4:	00001040 	clo.w	$r0,$r2
1c0018c8:	00001045 	clo.w	$r5,$r2
1c0018cc:	0000104e 	clo.w	$r14,$r2
1c0018d0:	0000106a 	clo.w	$r10,$r3
1c0018d4:	00001079 	clo.w	$r25,$r3
1c0018d8:	0000107a 	clo.w	$r26,$r3
1c0018dc:	0000107d 	clo.w	$r29,$r3
1c0018e0:	000010a4 	clo.w	$r4,$r5
1c0018e4:	000010b2 	clo.w	$r18,$r5
1c0018e8:	000010bc 	clo.w	$r28,$r5
1c0018ec:	000010ca 	clo.w	$r10,$r6
1c0018f0:	000010cc 	clo.w	$r12,$r6
1c0018f4:	000010cd 	clo.w	$r13,$r6
1c0018f8:	000010d0 	clo.w	$r16,$r6
1c0018fc:	000010f1 	clo.w	$r17,$r7
1c001900:	000010f8 	clo.w	$r24,$r7
1c001904:	0000111a 	clo.w	$r26,$r8
1c001908:	00001156 	clo.w	$r22,$r10
1c00190c:	00001170 	clo.w	$r16,$r11
1c001910:	0000117b 	clo.w	$r27,$r11
1c001914:	00001227 	clo.w	$r7,$r17
1c001918:	00001254 	clo.w	$r20,$r18
1c00191c:	00001261 	clo.w	$r1,$r19
1c001920:	00001269 	clo.w	$r9,$r19
1c001924:	00001274 	clo.w	$r20,$r19
1c001928:	000012a0 	clo.w	$r0,$r21
1c00192c:	000012ff 	clo.w	$r31,$r23
1c001930:	00001338 	clo.w	$r24,$r25
1c001934:	00001351 	clo.w	$r17,$r26
1c001938:	0000135f 	clo.w	$r31,$r26
1c00193c:	00001375 	clo.w	$r21,$r27
1c001940:	0000139e 	clo.w	$r30,$r28
1c001944:	000013bb 	clo.w	$r27,$r29
1c001948:	000013ea 	clo.w	$r10,$r31
1c00194c:	000013ed 	clo.w	$r13,$r31
1c001950:	0000140a 	clz.w	$r10,$r0
1c001954:	00001460 	clz.w	$r0,$r3
1c001958:	00001473 	clz.w	$r19,$r3
1c00195c:	0000147a 	clz.w	$r26,$r3
1c001960:	0000149a 	clz.w	$r26,$r4
1c001964:	000014b5 	clz.w	$r21,$r5
1c001968:	000014d3 	clz.w	$r19,$r6
1c00196c:	000014f3 	clz.w	$r19,$r7
1c001970:	000014fd 	clz.w	$r29,$r7
1c001974:	00001514 	clz.w	$r20,$r8
1c001978:	0000154c 	clz.w	$r12,$r10
1c00197c:	00001557 	clz.w	$r23,$r10
1c001980:	0000155c 	clz.w	$r28,$r10
1c001984:	00001575 	clz.w	$r21,$r11
1c001988:	00001587 	clz.w	$r7,$r12
1c00198c:	000015e2 	clz.w	$r2,$r15
1c001990:	000015f1 	clz.w	$r17,$r15
1c001994:	000015f4 	clz.w	$r20,$r15
1c001998:	000015f8 	clz.w	$r24,$r15
1c00199c:	000015fb 	clz.w	$r27,$r15
1c0019a0:	00001628 	clz.w	$r8,$r17
1c0019a4:	00001642 	clz.w	$r2,$r18
1c0019a8:	00001646 	clz.w	$r6,$r18
1c0019ac:	000016de 	clz.w	$r30,$r22
1c0019b0:	00001702 	clz.w	$r2,$r24
1c0019b4:	0000170b 	clz.w	$r11,$r24
1c0019b8:	00001749 	clz.w	$r9,$r26
1c0019bc:	0000174b 	clz.w	$r11,$r26
1c0019c0:	0000177c 	clz.w	$r28,$r27
1c0019c4:	000017a6 	clz.w	$r6,$r29
1c0019c8:	000017b7 	clz.w	$r23,$r29
1c0019cc:	000017be 	clz.w	$r30,$r29
1c0019d0:	000017c4 	clz.w	$r4,$r30
1c0019d4:	000017da 	clz.w	$r26,$r30
1c0019d8:	000017df 	clz.w	$r31,$r30
1c0019dc:	000017df 	clz.w	$r31,$r30
1c0019e0:	000017f3 	clz.w	$r19,$r31
1c0019e4:	00001815 	cto.w	$r21,$r0
1c0019e8:	00001824 	cto.w	$r4,$r1
1c0019ec:	00001828 	cto.w	$r8,$r1
1c0019f0:	00001846 	cto.w	$r6,$r2
1c0019f4:	00001863 	cto.w	$r3,$r3
1c0019f8:	00001878 	cto.w	$r24,$r3
1c0019fc:	000018f0 	cto.w	$r16,$r7
1c001a00:	00001903 	cto.w	$r3,$r8
1c001a04:	0000191a 	cto.w	$r26,$r8
1c001a08:	0000195c 	cto.w	$r28,$r10
1c001a0c:	00001962 	cto.w	$r2,$r11
1c001a10:	000019cd 	cto.w	$r13,$r14
1c001a14:	000019d5 	cto.w	$r21,$r14
1c001a18:	000019f9 	cto.w	$r25,$r15
1c001a1c:	00001a22 	cto.w	$r2,$r17
1c001a20:	00001a75 	cto.w	$r21,$r19
1c001a24:	00001a7e 	cto.w	$r30,$r19
1c001a28:	00001a98 	cto.w	$r24,$r20
1c001a2c:	00001a9d 	cto.w	$r29,$r20
1c001a30:	00001ab4 	cto.w	$r20,$r21
1c001a34:	00001ac0 	cto.w	$r0,$r22
1c001a38:	00001afe 	cto.w	$r30,$r23
1c001a3c:	00001b60 	cto.w	$r0,$r27
1c001a40:	00001b6b 	cto.w	$r11,$r27
1c001a44:	00001b8c 	cto.w	$r12,$r28
1c001a48:	00001bb2 	cto.w	$r18,$r29
1c001a4c:	00001bd8 	cto.w	$r24,$r30
1c001a50:	00001c09 	ctz.w	$r9,$r0
1c001a54:	00001c0b 	ctz.w	$r11,$r0
1c001a58:	00001c32 	ctz.w	$r18,$r1
1c001a5c:	00001c32 	ctz.w	$r18,$r1
1c001a60:	00001c75 	ctz.w	$r21,$r3
1c001a64:	00001c89 	ctz.w	$r9,$r4
1c001a68:	00001ccc 	ctz.w	$r12,$r6
1c001a6c:	00001cd7 	ctz.w	$r23,$r6
1c001a70:	00001d05 	ctz.w	$r5,$r8
1c001a74:	00001d14 	ctz.w	$r20,$r8
1c001a78:	00001d46 	ctz.w	$r6,$r10
1c001a7c:	00001d84 	ctz.w	$r4,$r12
1c001a80:	00001d8d 	ctz.w	$r13,$r12
1c001a84:	00001d8d 	ctz.w	$r13,$r12
1c001a88:	00001d92 	ctz.w	$r18,$r12
1c001a8c:	00001daf 	ctz.w	$r15,$r13
1c001a90:	00001dca 	ctz.w	$r10,$r14
1c001a94:	00001dcd 	ctz.w	$r13,$r14
1c001a98:	00001dcf 	ctz.w	$r15,$r14
1c001a9c:	00001e1e 	ctz.w	$r30,$r16
1c001aa0:	00001e4f 	ctz.w	$r15,$r18
1c001aa4:	00001e5a 	ctz.w	$r26,$r18
1c001aa8:	00001ec3 	ctz.w	$r3,$r22
1c001aac:	00001ecc 	ctz.w	$r12,$r22
1c001ab0:	00001ed8 	ctz.w	$r24,$r22
1c001ab4:	00001eed 	ctz.w	$r13,$r23
1c001ab8:	00001fc5 	ctz.w	$r5,$r30
1c001abc:	00002054 	clo.d	$r20,$r2
1c001ac0:	0000206f 	clo.d	$r15,$r3
1c001ac4:	000020ad 	clo.d	$r13,$r5
1c001ac8:	000020d5 	clo.d	$r21,$r6
1c001acc:	000020fe 	clo.d	$r30,$r7
1c001ad0:	00002156 	clo.d	$r22,$r10
1c001ad4:	00002165 	clo.d	$r5,$r11
1c001ad8:	0000216d 	clo.d	$r13,$r11
1c001adc:	00002179 	clo.d	$r25,$r11
1c001ae0:	000021d3 	clo.d	$r19,$r14
1c001ae4:	0000221e 	clo.d	$r30,$r16
1c001ae8:	00002224 	clo.d	$r4,$r17
1c001aec:	00002236 	clo.d	$r22,$r17
1c001af0:	00002237 	clo.d	$r23,$r17
1c001af4:	00002258 	clo.d	$r24,$r18
1c001af8:	0000226c 	clo.d	$r12,$r19
1c001afc:	0000226d 	clo.d	$r13,$r19
1c001b00:	00002275 	clo.d	$r21,$r19
1c001b04:	000022b1 	clo.d	$r17,$r21
1c001b08:	000022f6 	clo.d	$r22,$r23
1c001b0c:	00002314 	clo.d	$r20,$r24
1c001b10:	00002345 	clo.d	$r5,$r26
1c001b14:	000023a9 	clo.d	$r9,$r29
1c001b18:	000023d2 	clo.d	$r18,$r30
1c001b1c:	000023d5 	clo.d	$r21,$r30
1c001b20:	0000243f 	clz.d	$r31,$r1
1c001b24:	00002442 	clz.d	$r2,$r2
1c001b28:	00002444 	clz.d	$r4,$r2
1c001b2c:	00002457 	clz.d	$r23,$r2
1c001b30:	00002468 	clz.d	$r8,$r3
1c001b34:	000024ac 	clz.d	$r12,$r5
1c001b38:	000024be 	clz.d	$r30,$r5
1c001b3c:	000024ca 	clz.d	$r10,$r6
1c001b40:	000024ca 	clz.d	$r10,$r6
1c001b44:	000024ec 	clz.d	$r12,$r7
1c001b48:	00002503 	clz.d	$r3,$r8
1c001b4c:	00002504 	clz.d	$r4,$r8
1c001b50:	0000250e 	clz.d	$r14,$r8
1c001b54:	00002510 	clz.d	$r16,$r8
1c001b58:	0000253a 	clz.d	$r26,$r9
1c001b5c:	00002550 	clz.d	$r16,$r10
1c001b60:	0000255b 	clz.d	$r27,$r10
1c001b64:	00002560 	clz.d	$r0,$r11
1c001b68:	00002563 	clz.d	$r3,$r11
1c001b6c:	0000259c 	clz.d	$r28,$r12
1c001b70:	000025a3 	clz.d	$r3,$r13
1c001b74:	000025ed 	clz.d	$r13,$r15
1c001b78:	00002610 	clz.d	$r16,$r16
1c001b7c:	0000263a 	clz.d	$r26,$r17
1c001b80:	0000263e 	clz.d	$r30,$r17
1c001b84:	00002644 	clz.d	$r4,$r18
1c001b88:	0000265d 	clz.d	$r29,$r18
1c001b8c:	000026a7 	clz.d	$r7,$r21
1c001b90:	000026ab 	clz.d	$r11,$r21
1c001b94:	000026cd 	clz.d	$r13,$r22
1c001b98:	00002704 	clz.d	$r4,$r24
1c001b9c:	00002726 	clz.d	$r6,$r25
1c001ba0:	0000273a 	clz.d	$r26,$r25
1c001ba4:	0000273f 	clz.d	$r31,$r25
1c001ba8:	0000274c 	clz.d	$r12,$r26
1c001bac:	000027b9 	clz.d	$r25,$r29
1c001bb0:	000027bc 	clz.d	$r28,$r29
1c001bb4:	00002823 	cto.d	$r3,$r1
1c001bb8:	0000282b 	cto.d	$r11,$r1
1c001bbc:	0000283a 	cto.d	$r26,$r1
1c001bc0:	0000285b 	cto.d	$r27,$r2
1c001bc4:	000028bc 	cto.d	$r28,$r5
1c001bc8:	000028ea 	cto.d	$r10,$r7
1c001bcc:	0000290a 	cto.d	$r10,$r8
1c001bd0:	0000295c 	cto.d	$r28,$r10
1c001bd4:	00002979 	cto.d	$r25,$r11
1c001bd8:	00002985 	cto.d	$r5,$r12
1c001bdc:	00002986 	cto.d	$r6,$r12
1c001be0:	0000299f 	cto.d	$r31,$r12
1c001be4:	000029b7 	cto.d	$r23,$r13
1c001be8:	000029e4 	cto.d	$r4,$r15
1c001bec:	00002a0d 	cto.d	$r13,$r16
1c001bf0:	00002a2d 	cto.d	$r13,$r17
1c001bf4:	00002a32 	cto.d	$r18,$r17
1c001bf8:	00002a34 	cto.d	$r20,$r17
1c001bfc:	00002a3c 	cto.d	$r28,$r17
1c001c00:	00002a5b 	cto.d	$r27,$r18
1c001c04:	00002b00 	cto.d	$r0,$r24
1c001c08:	00002b5d 	cto.d	$r29,$r26
1c001c0c:	00002b7e 	cto.d	$r30,$r27
1c001c10:	00002b87 	cto.d	$r7,$r28
1c001c14:	00002b89 	cto.d	$r9,$r28
1c001c18:	00002bcd 	cto.d	$r13,$r30
1c001c1c:	00002bf5 	cto.d	$r21,$r31
1c001c20:	00002c3d 	ctz.d	$r29,$r1
1c001c24:	00002c44 	ctz.d	$r4,$r2
1c001c28:	00002c47 	ctz.d	$r7,$r2
1c001c2c:	00002c57 	ctz.d	$r23,$r2
1c001c30:	00002c82 	ctz.d	$r2,$r4
1c001c34:	00002c8e 	ctz.d	$r14,$r4
1c001c38:	00002c93 	ctz.d	$r19,$r4
1c001c3c:	00002cdd 	ctz.d	$r29,$r6
1c001c40:	00002cf5 	ctz.d	$r21,$r7
1c001c44:	00002d18 	ctz.d	$r24,$r8
1c001c48:	00002d25 	ctz.d	$r5,$r9
1c001c4c:	00002d36 	ctz.d	$r22,$r9
1c001c50:	00002d65 	ctz.d	$r5,$r11
1c001c54:	00002d7b 	ctz.d	$r27,$r11
1c001c58:	00002d99 	ctz.d	$r25,$r12
1c001c5c:	00002dda 	ctz.d	$r26,$r14
1c001c60:	00002e0f 	ctz.d	$r15,$r16
1c001c64:	00002e14 	ctz.d	$r20,$r16
1c001c68:	00002e2b 	ctz.d	$r11,$r17
1c001c6c:	00002e9f 	ctz.d	$r31,$r20
1c001c70:	00002efd 	ctz.d	$r29,$r23
1c001c74:	00002f18 	ctz.d	$r24,$r24
1c001c78:	00002f1c 	ctz.d	$r28,$r24
1c001c7c:	00002f2a 	ctz.d	$r10,$r25
1c001c80:	00002f34 	ctz.d	$r20,$r25
1c001c84:	00002f52 	ctz.d	$r18,$r26
1c001c88:	00002f60 	ctz.d	$r0,$r27
1c001c8c:	00002f69 	ctz.d	$r9,$r27
1c001c90:	00002f79 	ctz.d	$r25,$r27
1c001c94:	00002f79 	ctz.d	$r25,$r27
1c001c98:	00002f95 	ctz.d	$r21,$r28
1c001c9c:	00002fb8 	ctz.d	$r24,$r29
1c001ca0:	00002fea 	ctz.d	$r10,$r31
1c001ca4:	00003016 	revb.2h	$r22,$r0
1c001ca8:	0000303f 	revb.2h	$r31,$r1
1c001cac:	000030af 	revb.2h	$r15,$r5
1c001cb0:	000030e4 	revb.2h	$r4,$r7
1c001cb4:	0000314b 	revb.2h	$r11,$r10
1c001cb8:	00003164 	revb.2h	$r4,$r11
1c001cbc:	0000316d 	revb.2h	$r13,$r11
1c001cc0:	0000316d 	revb.2h	$r13,$r11
1c001cc4:	00003193 	revb.2h	$r19,$r12
1c001cc8:	00003197 	revb.2h	$r23,$r12
1c001ccc:	000031f6 	revb.2h	$r22,$r15
1c001cd0:	000031fa 	revb.2h	$r26,$r15
1c001cd4:	0000321b 	revb.2h	$r27,$r16
1c001cd8:	00003231 	revb.2h	$r17,$r17
1c001cdc:	0000323f 	revb.2h	$r31,$r17
1c001ce0:	0000326d 	revb.2h	$r13,$r19
1c001ce4:	00003277 	revb.2h	$r23,$r19
1c001ce8:	00003280 	revb.2h	$r0,$r20
1c001cec:	000032bc 	revb.2h	$r28,$r21
1c001cf0:	000032ec 	revb.2h	$r12,$r23
1c001cf4:	000032ee 	revb.2h	$r14,$r23
1c001cf8:	000032fc 	revb.2h	$r28,$r23
1c001cfc:	00003316 	revb.2h	$r22,$r24
1c001d00:	00003374 	revb.2h	$r20,$r27
1c001d04:	0000339a 	revb.2h	$r26,$r28
1c001d08:	00003440 	revb.4h	$r0,$r2
1c001d0c:	0000347b 	revb.4h	$r27,$r3
1c001d10:	00003516 	revb.4h	$r22,$r8
1c001d14:	00003548 	revb.4h	$r8,$r10
1c001d18:	0000354f 	revb.4h	$r15,$r10
1c001d1c:	00003581 	revb.4h	$r1,$r12
1c001d20:	000035a9 	revb.4h	$r9,$r13
1c001d24:	000035b9 	revb.4h	$r25,$r13
1c001d28:	000035bf 	revb.4h	$r31,$r13
1c001d2c:	000035d6 	revb.4h	$r22,$r14
1c001d30:	000035d9 	revb.4h	$r25,$r14
1c001d34:	000036ad 	revb.4h	$r13,$r21
1c001d38:	000036d4 	revb.4h	$r20,$r22
1c001d3c:	000036e1 	revb.4h	$r1,$r23
1c001d40:	00003709 	revb.4h	$r9,$r24
1c001d44:	00003727 	revb.4h	$r7,$r25
1c001d48:	00003730 	revb.4h	$r16,$r25
1c001d4c:	00003734 	revb.4h	$r20,$r25
1c001d50:	0000377e 	revb.4h	$r30,$r27
1c001d54:	00003792 	revb.4h	$r18,$r28
1c001d58:	000037c5 	revb.4h	$r5,$r30
1c001d5c:	000037c5 	revb.4h	$r5,$r30
1c001d60:	000037d5 	revb.4h	$r21,$r30
1c001d64:	000037ed 	revb.4h	$r13,$r31
1c001d68:	00003825 	revb.2w	$r5,$r1
1c001d6c:	00003863 	revb.2w	$r3,$r3
1c001d70:	0000389c 	revb.2w	$r28,$r4
1c001d74:	000038a4 	revb.2w	$r4,$r5
1c001d78:	000038bc 	revb.2w	$r28,$r5
1c001d7c:	000038be 	revb.2w	$r30,$r5
1c001d80:	000038cc 	revb.2w	$r12,$r6
1c001d84:	000038d8 	revb.2w	$r24,$r6
1c001d88:	000038ed 	revb.2w	$r13,$r7
1c001d8c:	000038f4 	revb.2w	$r20,$r7
1c001d90:	00003912 	revb.2w	$r18,$r8
1c001d94:	00003951 	revb.2w	$r17,$r10
1c001d98:	0000399c 	revb.2w	$r28,$r12
1c001d9c:	000039e1 	revb.2w	$r1,$r15
1c001da0:	000039eb 	revb.2w	$r11,$r15
1c001da4:	000039eb 	revb.2w	$r11,$r15
1c001da8:	000039ec 	revb.2w	$r12,$r15
1c001dac:	00003a01 	revb.2w	$r1,$r16
1c001db0:	00003a22 	revb.2w	$r2,$r17
1c001db4:	00003a2d 	revb.2w	$r13,$r17
1c001db8:	00003a3d 	revb.2w	$r29,$r17
1c001dbc:	00003a68 	revb.2w	$r8,$r19
1c001dc0:	00003a70 	revb.2w	$r16,$r19
1c001dc4:	00003a9a 	revb.2w	$r26,$r20
1c001dc8:	00003ac9 	revb.2w	$r9,$r22
1c001dcc:	00003afe 	revb.2w	$r30,$r23
1c001dd0:	00003b03 	revb.2w	$r3,$r24
1c001dd4:	00003b73 	revb.2w	$r19,$r27
1c001dd8:	00003b77 	revb.2w	$r23,$r27
1c001ddc:	00003bb5 	revb.2w	$r21,$r29
1c001de0:	00003bd5 	revb.2w	$r21,$r30
1c001de4:	00003bf9 	revb.2w	$r25,$r31
1c001de8:	00003c03 	revb.d	$r3,$r0
1c001dec:	00003c4f 	revb.d	$r15,$r2
1c001df0:	00003c5f 	revb.d	$r31,$r2
1c001df4:	00003cb1 	revb.d	$r17,$r5
1c001df8:	00003cd3 	revb.d	$r19,$r6
1c001dfc:	00003cdf 	revb.d	$r31,$r6
1c001e00:	00003cee 	revb.d	$r14,$r7
1c001e04:	00003d22 	revb.d	$r2,$r9
1c001e08:	00003d3c 	revb.d	$r28,$r9
1c001e0c:	00003d5e 	revb.d	$r30,$r10
1c001e10:	00003d65 	revb.d	$r5,$r11
1c001e14:	00003d80 	revb.d	$r0,$r12
1c001e18:	00003db9 	revb.d	$r25,$r13
1c001e1c:	00003dbb 	revb.d	$r27,$r13
1c001e20:	00003dd7 	revb.d	$r23,$r14
1c001e24:	00003e10 	revb.d	$r16,$r16
1c001e28:	00003e33 	revb.d	$r19,$r17
1c001e2c:	00003e44 	revb.d	$r4,$r18
1c001e30:	00003e4e 	revb.d	$r14,$r18
1c001e34:	00003e6b 	revb.d	$r11,$r19
1c001e38:	00003e78 	revb.d	$r24,$r19
1c001e3c:	00003e8a 	revb.d	$r10,$r20
1c001e40:	00003e8f 	revb.d	$r15,$r20
1c001e44:	00003eae 	revb.d	$r14,$r21
1c001e48:	00003ec5 	revb.d	$r5,$r22
1c001e4c:	00003ec9 	revb.d	$r9,$r22
1c001e50:	00003ed8 	revb.d	$r24,$r22
1c001e54:	00003efe 	revb.d	$r30,$r23
1c001e58:	00003f32 	revb.d	$r18,$r25
1c001e5c:	00003f40 	revb.d	$r0,$r26
1c001e60:	00003fb6 	revb.d	$r22,$r29
1c001e64:	00003fb7 	revb.d	$r23,$r29
1c001e68:	00003fea 	revb.d	$r10,$r31
1c001e6c:	00003ffa 	revb.d	$r26,$r31
1c001e70:	00004020 	revh.2w	$r0,$r1
1c001e74:	0000403e 	revh.2w	$r30,$r1
1c001e78:	00004059 	revh.2w	$r25,$r2
1c001e7c:	00004061 	revh.2w	$r1,$r3
1c001e80:	000040e4 	revh.2w	$r4,$r7
1c001e84:	000040f0 	revh.2w	$r16,$r7
1c001e88:	00004107 	revh.2w	$r7,$r8
1c001e8c:	00004138 	revh.2w	$r24,$r9
1c001e90:	0000416e 	revh.2w	$r14,$r11
1c001e94:	0000418d 	revh.2w	$r13,$r12
1c001e98:	00004190 	revh.2w	$r16,$r12
1c001e9c:	000041ac 	revh.2w	$r12,$r13
1c001ea0:	000041b2 	revh.2w	$r18,$r13
1c001ea4:	000041c0 	revh.2w	$r0,$r14
1c001ea8:	00004220 	revh.2w	$r0,$r17
1c001eac:	0000428a 	revh.2w	$r10,$r20
1c001eb0:	0000429a 	revh.2w	$r26,$r20
1c001eb4:	000042b6 	revh.2w	$r22,$r21
1c001eb8:	000042df 	revh.2w	$r31,$r22
1c001ebc:	000042ff 	revh.2w	$r31,$r23
1c001ec0:	00004367 	revh.2w	$r7,$r27
1c001ec4:	000043a7 	revh.2w	$r7,$r29
1c001ec8:	000043c8 	revh.2w	$r8,$r30
1c001ecc:	000043f0 	revh.2w	$r16,$r31
1c001ed0:	0000441a 	revh.d	$r26,$r0
1c001ed4:	0000443e 	revh.d	$r30,$r1
1c001ed8:	0000445a 	revh.d	$r26,$r2
1c001edc:	0000447a 	revh.d	$r26,$r3
1c001ee0:	0000447f 	revh.d	$r31,$r3
1c001ee4:	00004487 	revh.d	$r7,$r4
1c001ee8:	0000448e 	revh.d	$r14,$r4
1c001eec:	0000449f 	revh.d	$r31,$r4
1c001ef0:	000044ad 	revh.d	$r13,$r5
1c001ef4:	000044b6 	revh.d	$r22,$r5
1c001ef8:	000044b7 	revh.d	$r23,$r5
1c001efc:	000044e3 	revh.d	$r3,$r7
1c001f00:	000044f8 	revh.d	$r24,$r7
1c001f04:	00004501 	revh.d	$r1,$r8
1c001f08:	00004515 	revh.d	$r21,$r8
1c001f0c:	0000455c 	revh.d	$r28,$r10
1c001f10:	0000459c 	revh.d	$r28,$r12
1c001f14:	000045cc 	revh.d	$r12,$r14
1c001f18:	000045f3 	revh.d	$r19,$r15
1c001f1c:	00004611 	revh.d	$r17,$r16
1c001f20:	0000463c 	revh.d	$r28,$r17
1c001f24:	00004665 	revh.d	$r5,$r19
1c001f28:	00004680 	revh.d	$r0,$r20
1c001f2c:	0000469d 	revh.d	$r29,$r20
1c001f30:	000046c6 	revh.d	$r6,$r22
1c001f34:	000046f1 	revh.d	$r17,$r23
1c001f38:	000046fe 	revh.d	$r30,$r23
1c001f3c:	00004706 	revh.d	$r6,$r24
1c001f40:	00004723 	revh.d	$r3,$r25
1c001f44:	0000472e 	revh.d	$r14,$r25
1c001f48:	0000475a 	revh.d	$r26,$r26
1c001f4c:	0000476d 	revh.d	$r13,$r27
1c001f50:	00004772 	revh.d	$r18,$r27
1c001f54:	0000477e 	revh.d	$r30,$r27
1c001f58:	0000479b 	revh.d	$r27,$r28
1c001f5c:	000047b9 	revh.d	$r25,$r29
1c001f60:	000047d5 	revh.d	$r21,$r30
1c001f64:	000047e1 	revh.d	$r1,$r31
1c001f68:	00004821 	bitrev.4b	$r1,$r1
1c001f6c:	00004856 	bitrev.4b	$r22,$r2
1c001f70:	0000485b 	bitrev.4b	$r27,$r2
1c001f74:	0000487f 	bitrev.4b	$r31,$r3
1c001f78:	00004882 	bitrev.4b	$r2,$r4
1c001f7c:	000048b8 	bitrev.4b	$r24,$r5
1c001f80:	000048bc 	bitrev.4b	$r28,$r5
1c001f84:	000048cd 	bitrev.4b	$r13,$r6
1c001f88:	000048cf 	bitrev.4b	$r15,$r6
1c001f8c:	00004902 	bitrev.4b	$r2,$r8
1c001f90:	0000491b 	bitrev.4b	$r27,$r8
1c001f94:	0000495d 	bitrev.4b	$r29,$r10
1c001f98:	0000495e 	bitrev.4b	$r30,$r10
1c001f9c:	0000498a 	bitrev.4b	$r10,$r12
1c001fa0:	00004990 	bitrev.4b	$r16,$r12
1c001fa4:	00004998 	bitrev.4b	$r24,$r12
1c001fa8:	000049c7 	bitrev.4b	$r7,$r14
1c001fac:	00004a13 	bitrev.4b	$r19,$r16
1c001fb0:	00004a74 	bitrev.4b	$r20,$r19
1c001fb4:	00004a83 	bitrev.4b	$r3,$r20
1c001fb8:	00004a84 	bitrev.4b	$r4,$r20
1c001fbc:	00004a8e 	bitrev.4b	$r14,$r20
1c001fc0:	00004a8f 	bitrev.4b	$r15,$r20
1c001fc4:	00004a9c 	bitrev.4b	$r28,$r20
1c001fc8:	00004abc 	bitrev.4b	$r28,$r21
1c001fcc:	00004acf 	bitrev.4b	$r15,$r22
1c001fd0:	00004add 	bitrev.4b	$r29,$r22
1c001fd4:	00004ae4 	bitrev.4b	$r4,$r23
1c001fd8:	00004af6 	bitrev.4b	$r22,$r23
1c001fdc:	00004b11 	bitrev.4b	$r17,$r24
1c001fe0:	00004b21 	bitrev.4b	$r1,$r25
1c001fe4:	00004b31 	bitrev.4b	$r17,$r25
1c001fe8:	00004b7e 	bitrev.4b	$r30,$r27
1c001fec:	00004b89 	bitrev.4b	$r9,$r28
1c001ff0:	00004bb4 	bitrev.4b	$r20,$r29
1c001ff4:	00004bca 	bitrev.4b	$r10,$r30
1c001ff8:	00004bcc 	bitrev.4b	$r12,$r30
1c001ffc:	00004c07 	bitrev.8b	$r7,$r0
1c002000:	00004c21 	bitrev.8b	$r1,$r1
1c002004:	00004c2b 	bitrev.8b	$r11,$r1
1c002008:	00004c4f 	bitrev.8b	$r15,$r2
1c00200c:	00004c6f 	bitrev.8b	$r15,$r3
1c002010:	00004c89 	bitrev.8b	$r9,$r4
1c002014:	00004c8f 	bitrev.8b	$r15,$r4
1c002018:	00004cae 	bitrev.8b	$r14,$r5
1c00201c:	00004caf 	bitrev.8b	$r15,$r5
1c002020:	00004cde 	bitrev.8b	$r30,$r6
1c002024:	00004d02 	bitrev.8b	$r2,$r8
1c002028:	00004d3d 	bitrev.8b	$r29,$r9
1c00202c:	00004d80 	bitrev.8b	$r0,$r12
1c002030:	00004d99 	bitrev.8b	$r25,$r12
1c002034:	00004dbc 	bitrev.8b	$r28,$r13
1c002038:	00004df9 	bitrev.8b	$r25,$r15
1c00203c:	00004e0c 	bitrev.8b	$r12,$r16
1c002040:	00004e68 	bitrev.8b	$r8,$r19
1c002044:	00004ea7 	bitrev.8b	$r7,$r21
1c002048:	00004f1e 	bitrev.8b	$r30,$r24
1c00204c:	00004f26 	bitrev.8b	$r6,$r25
1c002050:	00004f5a 	bitrev.8b	$r26,$r26
1c002054:	00004f5b 	bitrev.8b	$r27,$r26
1c002058:	00004f93 	bitrev.8b	$r19,$r28
1c00205c:	00004fa2 	bitrev.8b	$r2,$r29
1c002060:	00004fa6 	bitrev.8b	$r6,$r29
1c002064:	00004fb2 	bitrev.8b	$r18,$r29
1c002068:	00004fe1 	bitrev.8b	$r1,$r31
1c00206c:	00005012 	bitrev.w	$r18,$r0
1c002070:	00005046 	bitrev.w	$r6,$r2
1c002074:	0000504b 	bitrev.w	$r11,$r2
1c002078:	00005075 	bitrev.w	$r21,$r3
1c00207c:	0000507e 	bitrev.w	$r30,$r3
1c002080:	00005083 	bitrev.w	$r3,$r4
1c002084:	0000508d 	bitrev.w	$r13,$r4
1c002088:	000050a2 	bitrev.w	$r2,$r5
1c00208c:	000050b6 	bitrev.w	$r22,$r5
1c002090:	000050bb 	bitrev.w	$r27,$r5
1c002094:	000050ee 	bitrev.w	$r14,$r7
1c002098:	000050ff 	bitrev.w	$r31,$r7
1c00209c:	0000511a 	bitrev.w	$r26,$r8
1c0020a0:	00005124 	bitrev.w	$r4,$r9
1c0020a4:	00005130 	bitrev.w	$r16,$r9
1c0020a8:	00005135 	bitrev.w	$r21,$r9
1c0020ac:	00005198 	bitrev.w	$r24,$r12
1c0020b0:	000051a4 	bitrev.w	$r4,$r13
1c0020b4:	000051ba 	bitrev.w	$r26,$r13
1c0020b8:	000051d5 	bitrev.w	$r21,$r14
1c0020bc:	000051fd 	bitrev.w	$r29,$r15
1c0020c0:	00005201 	bitrev.w	$r1,$r16
1c0020c4:	00005222 	bitrev.w	$r2,$r17
1c0020c8:	0000524a 	bitrev.w	$r10,$r18
1c0020cc:	0000526e 	bitrev.w	$r14,$r19
1c0020d0:	000052a0 	bitrev.w	$r0,$r21
1c0020d4:	000052a6 	bitrev.w	$r6,$r21
1c0020d8:	000052ae 	bitrev.w	$r14,$r21
1c0020dc:	000052af 	bitrev.w	$r15,$r21
1c0020e0:	000052c0 	bitrev.w	$r0,$r22
1c0020e4:	0000532f 	bitrev.w	$r15,$r25
1c0020e8:	0000533b 	bitrev.w	$r27,$r25
1c0020ec:	00005341 	bitrev.w	$r1,$r26
1c0020f0:	0000534c 	bitrev.w	$r12,$r26
1c0020f4:	00005354 	bitrev.w	$r20,$r26
1c0020f8:	0000536f 	bitrev.w	$r15,$r27
1c0020fc:	000053d8 	bitrev.w	$r24,$r30
1c002100:	00005431 	bitrev.d	$r17,$r1
1c002104:	00005444 	bitrev.d	$r4,$r2
1c002108:	00005445 	bitrev.d	$r5,$r2
1c00210c:	00005447 	bitrev.d	$r7,$r2
1c002110:	00005490 	bitrev.d	$r16,$r4
1c002114:	00005493 	bitrev.d	$r19,$r4
1c002118:	000054b6 	bitrev.d	$r22,$r5
1c00211c:	000054c4 	bitrev.d	$r4,$r6
1c002120:	00005539 	bitrev.d	$r25,$r9
1c002124:	00005553 	bitrev.d	$r19,$r10
1c002128:	00005580 	bitrev.d	$r0,$r12
1c00212c:	000055a9 	bitrev.d	$r9,$r13
1c002130:	000055b7 	bitrev.d	$r23,$r13
1c002134:	000055c0 	bitrev.d	$r0,$r14
1c002138:	000055cd 	bitrev.d	$r13,$r14
1c00213c:	000055f0 	bitrev.d	$r16,$r15
1c002140:	0000560b 	bitrev.d	$r11,$r16
1c002144:	00005629 	bitrev.d	$r9,$r17
1c002148:	000056fc 	bitrev.d	$r28,$r23
1c00214c:	00005703 	bitrev.d	$r3,$r24
1c002150:	0000573b 	bitrev.d	$r27,$r25
1c002154:	0000576a 	bitrev.d	$r10,$r27
1c002158:	00005773 	bitrev.d	$r19,$r27
1c00215c:	00005792 	bitrev.d	$r18,$r28
1c002160:	000057c7 	bitrev.d	$r7,$r30
1c002164:	000057c8 	bitrev.d	$r8,$r30
1c002168:	000057da 	bitrev.d	$r26,$r30
1c00216c:	000057ff 	bitrev.d	$r31,$r31
1c002170:	00005802 	ext.w.h	$r2,$r0
1c002174:	0000581a 	ext.w.h	$r26,$r0
1c002178:	0000583b 	ext.w.h	$r27,$r1
1c00217c:	00005858 	ext.w.h	$r24,$r2
1c002180:	0000585a 	ext.w.h	$r26,$r2
1c002184:	00005873 	ext.w.h	$r19,$r3
1c002188:	00005899 	ext.w.h	$r25,$r4
1c00218c:	000058b2 	ext.w.h	$r18,$r5
1c002190:	000058c7 	ext.w.h	$r7,$r6
1c002194:	000058eb 	ext.w.h	$r11,$r7
1c002198:	00005950 	ext.w.h	$r16,$r10
1c00219c:	0000597e 	ext.w.h	$r30,$r11
1c0021a0:	00005989 	ext.w.h	$r9,$r12
1c0021a4:	000059dd 	ext.w.h	$r29,$r14
1c0021a8:	000059ea 	ext.w.h	$r10,$r15
1c0021ac:	00005a27 	ext.w.h	$r7,$r17
1c0021b0:	00005ad8 	ext.w.h	$r24,$r22
1c0021b4:	00005ae1 	ext.w.h	$r1,$r23
1c0021b8:	00005b06 	ext.w.h	$r6,$r24
1c0021bc:	00005b12 	ext.w.h	$r18,$r24
1c0021c0:	00005b14 	ext.w.h	$r20,$r24
1c0021c4:	00005b21 	ext.w.h	$r1,$r25
1c0021c8:	00005b3b 	ext.w.h	$r27,$r25
1c0021cc:	00005b3d 	ext.w.h	$r29,$r25
1c0021d0:	00005b4a 	ext.w.h	$r10,$r26
1c0021d4:	00005b53 	ext.w.h	$r19,$r26
1c0021d8:	00005b76 	ext.w.h	$r22,$r27
1c0021dc:	00005b83 	ext.w.h	$r3,$r28
1c0021e0:	00005b9a 	ext.w.h	$r26,$r28
1c0021e4:	00005ba5 	ext.w.h	$r5,$r29
1c0021e8:	00005bae 	ext.w.h	$r14,$r29
1c0021ec:	00005be1 	ext.w.h	$r1,$r31
1c0021f0:	00005c0b 	ext.w.b	$r11,$r0
1c0021f4:	00005c47 	ext.w.b	$r7,$r2
1c0021f8:	00005c7f 	ext.w.b	$r31,$r3
1c0021fc:	00005cb2 	ext.w.b	$r18,$r5
1c002200:	00005cb7 	ext.w.b	$r23,$r5
1c002204:	00005cb9 	ext.w.b	$r25,$r5
1c002208:	00005cda 	ext.w.b	$r26,$r6
1c00220c:	00005cdc 	ext.w.b	$r28,$r6
1c002210:	00005cdc 	ext.w.b	$r28,$r6
1c002214:	00005ce1 	ext.w.b	$r1,$r7
1c002218:	00005ce6 	ext.w.b	$r6,$r7
1c00221c:	00005cf0 	ext.w.b	$r16,$r7
1c002220:	00005d0c 	ext.w.b	$r12,$r8
1c002224:	00005d1d 	ext.w.b	$r29,$r8
1c002228:	00005d23 	ext.w.b	$r3,$r9
1c00222c:	00005d80 	ext.w.b	$r0,$r12
1c002230:	00005dbb 	ext.w.b	$r27,$r13
1c002234:	00005dc6 	ext.w.b	$r6,$r14
1c002238:	00005de5 	ext.w.b	$r5,$r15
1c00223c:	00005e0c 	ext.w.b	$r12,$r16
1c002240:	00005e2e 	ext.w.b	$r14,$r17
1c002244:	00005e2f 	ext.w.b	$r15,$r17
1c002248:	00005e40 	ext.w.b	$r0,$r18
1c00224c:	00005e57 	ext.w.b	$r23,$r18
1c002250:	00005e67 	ext.w.b	$r7,$r19
1c002254:	00005e84 	ext.w.b	$r4,$r20
1c002258:	00005e9f 	ext.w.b	$r31,$r20
1c00225c:	00005eac 	ext.w.b	$r12,$r21
1c002260:	00005ec1 	ext.w.b	$r1,$r22
1c002264:	00005ef0 	ext.w.b	$r16,$r23
1c002268:	00005f16 	ext.w.b	$r22,$r24
1c00226c:	00005f20 	ext.w.b	$r0,$r25
1c002270:	00005f25 	ext.w.b	$r5,$r25
1c002274:	00005f33 	ext.w.b	$r19,$r25
1c002278:	00005f36 	ext.w.b	$r22,$r25
1c00227c:	00005f4f 	ext.w.b	$r15,$r26
1c002280:	00005f75 	ext.w.b	$r21,$r27
1c002284:	00005f90 	ext.w.b	$r16,$r28
1c002288:	00005fbc 	ext.w.b	$r28,$r29
1c00228c:	00005fd7 	ext.w.b	$r23,$r30
1c002290:	00006032 	rdtimel.w	$r18,$r1
1c002294:	00006096 	rdtimel.w	$r22,$r4
1c002298:	000060ae 	rdtimel.w	$r14,$r5
1c00229c:	000060f0 	rdtimel.w	$r16,$r7
1c0022a0:	0000610c 	rdtimel.w	$r12,$r8
1c0022a4:	0000610e 	rdtimel.w	$r14,$r8
1c0022a8:	00006121 	rdtimel.w	$r1,$r9
1c0022ac:	00006140 	rdtimel.w	$r0,$r10
1c0022b0:	00006154 	rdtimel.w	$r20,$r10
1c0022b4:	0000618b 	rdtimel.w	$r11,$r12
1c0022b8:	000061f1 	rdtimel.w	$r17,$r15
1c0022bc:	00006249 	rdtimel.w	$r9,$r18
1c0022c0:	0000628d 	rdtimel.w	$r13,$r20
1c0022c4:	000062a3 	rdtimel.w	$r3,$r21
1c0022c8:	000062ba 	rdtimel.w	$r26,$r21
1c0022cc:	000062d8 	rdtimel.w	$r24,$r22
1c0022d0:	000062f3 	rdtimel.w	$r19,$r23
1c0022d4:	000062fe 	rdtimel.w	$r30,$r23
1c0022d8:	00006302 	rdtimel.w	$r2,$r24
1c0022dc:	00006335 	rdtimel.w	$r21,$r25
1c0022e0:	00006346 	rdtimel.w	$r6,$r26
1c0022e4:	00006358 	rdtimel.w	$r24,$r26
1c0022e8:	0000636f 	rdtimel.w	$r15,$r27
1c0022ec:	00006372 	rdtimel.w	$r18,$r27
1c0022f0:	0000640d 	rdtimeh.w	$r13,$r0
1c0022f4:	0000643d 	rdtimeh.w	$r29,$r1
1c0022f8:	00006457 	rdtimeh.w	$r23,$r2
1c0022fc:	00006496 	rdtimeh.w	$r22,$r4
1c002300:	000064a6 	rdtimeh.w	$r6,$r5
1c002304:	000064ad 	rdtimeh.w	$r13,$r5
1c002308:	000064b4 	rdtimeh.w	$r20,$r5
1c00230c:	000064b8 	rdtimeh.w	$r24,$r5
1c002310:	000064de 	rdtimeh.w	$r30,$r6
1c002314:	000064f8 	rdtimeh.w	$r24,$r7
1c002318:	00006503 	rdtimeh.w	$r3,$r8
1c00231c:	00006529 	rdtimeh.w	$r9,$r9
1c002320:	00006537 	rdtimeh.w	$r23,$r9
1c002324:	00006556 	rdtimeh.w	$r22,$r10
1c002328:	00006594 	rdtimeh.w	$r20,$r12
1c00232c:	0000659e 	rdtimeh.w	$r30,$r12
1c002330:	0000659e 	rdtimeh.w	$r30,$r12
1c002334:	000065b0 	rdtimeh.w	$r16,$r13
1c002338:	000065c3 	rdtimeh.w	$r3,$r14
1c00233c:	000065d7 	rdtimeh.w	$r23,$r14
1c002340:	000065f6 	rdtimeh.w	$r22,$r15
1c002344:	000065f8 	rdtimeh.w	$r24,$r15
1c002348:	00006614 	rdtimeh.w	$r20,$r16
1c00234c:	0000664b 	rdtimeh.w	$r11,$r18
1c002350:	0000667c 	rdtimeh.w	$r28,$r19
1c002354:	00006692 	rdtimeh.w	$r18,$r20
1c002358:	00006697 	rdtimeh.w	$r23,$r20
1c00235c:	000066ad 	rdtimeh.w	$r13,$r21
1c002360:	000066c8 	rdtimeh.w	$r8,$r22
1c002364:	0000670c 	rdtimeh.w	$r12,$r24
1c002368:	00006730 	rdtimeh.w	$r16,$r25
1c00236c:	00006734 	rdtimeh.w	$r20,$r25
1c002370:	00006747 	rdtimeh.w	$r7,$r26
1c002374:	0000676a 	rdtimeh.w	$r10,$r27
1c002378:	00006790 	rdtimeh.w	$r16,$r28
1c00237c:	000067ba 	rdtimeh.w	$r26,$r29
1c002380:	000067bb 	rdtimeh.w	$r27,$r29
1c002384:	000067dc 	rdtimeh.w	$r28,$r30
1c002388:	000067de 	rdtimeh.w	$r30,$r30
1c00238c:	000067e5 	rdtimeh.w	$r5,$r31
1c002390:	000067e7 	rdtimeh.w	$r7,$r31
1c002394:	000067fa 	rdtimeh.w	$r26,$r31
1c002398:	00006815 	rdtime.d	$r21,$r0
1c00239c:	0000685a 	rdtime.d	$r26,$r2
1c0023a0:	000068ef 	rdtime.d	$r15,$r7
1c0023a4:	0000690f 	rdtime.d	$r15,$r8
1c0023a8:	00006935 	rdtime.d	$r21,$r9
1c0023ac:	00006944 	rdtime.d	$r4,$r10
1c0023b0:	0000695e 	rdtime.d	$r30,$r10
1c0023b4:	000069ab 	rdtime.d	$r11,$r13
1c0023b8:	000069bc 	rdtime.d	$r28,$r13
1c0023bc:	00006a06 	rdtime.d	$r6,$r16
1c0023c0:	00006a52 	rdtime.d	$r18,$r18
1c0023c4:	00006a54 	rdtime.d	$r20,$r18
1c0023c8:	00006a72 	rdtime.d	$r18,$r19
1c0023cc:	00006a89 	rdtime.d	$r9,$r20
1c0023d0:	00006a9a 	rdtime.d	$r26,$r20
1c0023d4:	00006aad 	rdtime.d	$r13,$r21
1c0023d8:	00006ab2 	rdtime.d	$r18,$r21
1c0023dc:	00006abb 	rdtime.d	$r27,$r21
1c0023e0:	00006acf 	rdtime.d	$r15,$r22
1c0023e4:	00006ad0 	rdtime.d	$r16,$r22
1c0023e8:	00006ad8 	rdtime.d	$r24,$r22
1c0023ec:	00006ae7 	rdtime.d	$r7,$r23
1c0023f0:	00006ae8 	rdtime.d	$r8,$r23
1c0023f4:	00006b00 	rdtime.d	$r0,$r24
1c0023f8:	00006b07 	rdtime.d	$r7,$r24
1c0023fc:	00006b36 	rdtime.d	$r22,$r25
1c002400:	00006b4b 	rdtime.d	$r11,$r26
1c002404:	00006b4d 	rdtime.d	$r13,$r26
1c002408:	00006b6a 	rdtime.d	$r10,$r27
1c00240c:	00006b8c 	rdtime.d	$r12,$r28
1c002410:	00006b9d 	rdtime.d	$r29,$r28
1c002414:	00006b9d 	rdtime.d	$r29,$r28
1c002418:	00006bb2 	rdtime.d	$r18,$r29
1c00241c:	00006bd7 	rdtime.d	$r23,$r30
1c002420:	00006bff 	rdtime.d	$r31,$r31
1c002424:	00006c0c 	cpucfg	$r12,$r0
1c002428:	00006c27 	cpucfg	$r7,$r1
1c00242c:	00006c45 	cpucfg	$r5,$r2
1c002430:	00006c7e 	cpucfg	$r30,$r3
1c002434:	00006c91 	cpucfg	$r17,$r4
1c002438:	00006caf 	cpucfg	$r15,$r5
1c00243c:	00006cb6 	cpucfg	$r22,$r5
1c002440:	00006cbb 	cpucfg	$r27,$r5
1c002444:	00006cc8 	cpucfg	$r8,$r6
1c002448:	00006cf0 	cpucfg	$r16,$r7
1c00244c:	00006d04 	cpucfg	$r4,$r8
1c002450:	00006d1e 	cpucfg	$r30,$r8
1c002454:	00006d30 	cpucfg	$r16,$r9
1c002458:	00006d49 	cpucfg	$r9,$r10
1c00245c:	00006d62 	cpucfg	$r2,$r11
1c002460:	00006d69 	cpucfg	$r9,$r11
1c002464:	00006d79 	cpucfg	$r25,$r11
1c002468:	00006d87 	cpucfg	$r7,$r12
1c00246c:	00006d9f 	cpucfg	$r31,$r12
1c002470:	00006dff 	cpucfg	$r31,$r15
1c002474:	00006e01 	cpucfg	$r1,$r16
1c002478:	00006e21 	cpucfg	$r1,$r17
1c00247c:	00006e6c 	cpucfg	$r12,$r19
1c002480:	00006e96 	cpucfg	$r22,$r20
1c002484:	00006ea0 	cpucfg	$r0,$r21
1c002488:	00006ead 	cpucfg	$r13,$r21
1c00248c:	00006ec4 	cpucfg	$r4,$r22
1c002490:	00006ee0 	cpucfg	$r0,$r23
1c002494:	00006ee3 	cpucfg	$r3,$r23
1c002498:	00006f0e 	cpucfg	$r14,$r24
1c00249c:	00006f1f 	cpucfg	$r31,$r24
1c0024a0:	00006f30 	cpucfg	$r16,$r25
1c0024a4:	00006f32 	cpucfg	$r18,$r25
1c0024a8:	00006f55 	cpucfg	$r21,$r26
1c0024ac:	00006f66 	cpucfg	$r6,$r27
1c0024b0:	00006f69 	cpucfg	$r9,$r27
1c0024b4:	00006f6a 	cpucfg	$r10,$r27
1c0024b8:	00006f95 	cpucfg	$r21,$r28
1c0024bc:	00006fab 	cpucfg	$r11,$r29
1c0024c0:	00006fb6 	cpucfg	$r22,$r29
1c0024c4:	00007018 	0x00007018
1c0024c8:	0000701d 	0x0000701d
1c0024cc:	0000701f 	0x0000701f
1c0024d0:	00007029 	0x00007029
1c0024d4:	00007048 	0x00007048
1c0024d8:	00007065 	0x00007065
1c0024dc:	00007066 	0x00007066
1c0024e0:	00007072 	0x00007072
1c0024e4:	00007080 	0x00007080
1c0024e8:	000070c1 	0x000070c1
1c0024ec:	00007134 	0x00007134
1c0024f0:	00007162 	0x00007162
1c0024f4:	00007173 	0x00007173
1c0024f8:	0000717c 	0x0000717c
1c0024fc:	0000717e 	0x0000717e
1c002500:	00007197 	0x00007197
1c002504:	000071a1 	0x000071a1
1c002508:	000071bb 	0x000071bb
1c00250c:	000071e6 	0x000071e6
1c002510:	0000722f 	0x0000722f
1c002514:	00007235 	0x00007235
1c002518:	0000724b 	0x0000724b
1c00251c:	0000724d 	0x0000724d
1c002520:	0000725c 	0x0000725c
1c002524:	0000726d 	0x0000726d
1c002528:	00007301 	0x00007301
1c00252c:	0000732c 	0x0000732c
1c002530:	0000732d 	0x0000732d
1c002534:	00007366 	0x00007366
1c002538:	0000736b 	0x0000736b
1c00253c:	00007376 	0x00007376
1c002540:	0000739e 	0x0000739e
1c002544:	00007452 	0x00007452
1c002548:	000074c3 	0x000074c3
1c00254c:	000074d3 	0x000074d3
1c002550:	000074d9 	0x000074d9
1c002554:	000074e7 	0x000074e7
1c002558:	000074f5 	0x000074f5
1c00255c:	00007532 	0x00007532
1c002560:	0000753a 	0x0000753a
1c002564:	0000755d 	0x0000755d
1c002568:	00007574 	0x00007574
1c00256c:	00007595 	0x00007595
1c002570:	000075fa 	0x000075fa
1c002574:	00007620 	0x00007620
1c002578:	00007647 	0x00007647
1c00257c:	0000764a 	0x0000764a
1c002580:	0000768b 	0x0000768b
1c002584:	000076b4 	0x000076b4
1c002588:	00007729 	0x00007729
1c00258c:	0000772b 	0x0000772b
1c002590:	00007746 	0x00007746
1c002594:	00007765 	0x00007765
1c002598:	00007773 	0x00007773
1c00259c:	000077cd 	0x000077cd
1c0025a0:	0000783c 	0x0000783c
1c0025a4:	00007862 	0x00007862
1c0025a8:	0000787a 	0x0000787a
1c0025ac:	000078bb 	0x000078bb
1c0025b0:	000078c2 	0x000078c2
1c0025b4:	000078d6 	0x000078d6
1c0025b8:	00007925 	0x00007925
1c0025bc:	00007935 	0x00007935
1c0025c0:	00007969 	0x00007969
1c0025c4:	0000797c 	0x0000797c
1c0025c8:	00007996 	0x00007996
1c0025cc:	000079e1 	0x000079e1
1c0025d0:	000079f6 	0x000079f6
1c0025d4:	00007a18 	0x00007a18
1c0025d8:	00007a46 	0x00007a46
1c0025dc:	00007a61 	0x00007a61
1c0025e0:	00007a8e 	0x00007a8e
1c0025e4:	00007a91 	0x00007a91
1c0025e8:	00007a96 	0x00007a96
1c0025ec:	00007ac8 	0x00007ac8
1c0025f0:	00007ae7 	0x00007ae7
1c0025f4:	00007af5 	0x00007af5
1c0025f8:	00007b05 	0x00007b05
1c0025fc:	00007b31 	0x00007b31
1c002600:	00007b3f 	0x00007b3f
1c002604:	00007b5d 	0x00007b5d
1c002608:	00007b78 	0x00007b78
1c00260c:	00007b86 	0x00007b86
1c002610:	00007b88 	0x00007b88
1c002614:	00007b90 	0x00007b90
1c002618:	00007ba5 	0x00007ba5
1c00261c:	00007bde 	0x00007bde
1c002620:	00007c8e 	0x00007c8e
1c002624:	00007c9f 	0x00007c9f
1c002628:	00007cae 	0x00007cae
1c00262c:	00007cc0 	0x00007cc0
1c002630:	00007cca 	0x00007cca
1c002634:	00007d53 	0x00007d53
1c002638:	00007d65 	0x00007d65
1c00263c:	00007da2 	0x00007da2
1c002640:	00007dd1 	0x00007dd1
1c002644:	00007dd3 	0x00007dd3
1c002648:	00007e1b 	0x00007e1b
1c00264c:	00007e27 	0x00007e27
1c002650:	00007e90 	0x00007e90
1c002654:	00007ea0 	0x00007ea0
1c002658:	00007eb6 	0x00007eb6
1c00265c:	00007ec6 	0x00007ec6
1c002660:	00007ec9 	0x00007ec9
1c002664:	00007edf 	0x00007edf
1c002668:	00007f27 	0x00007f27
1c00266c:	00007f68 	0x00007f68
1c002670:	00007f69 	0x00007f69
1c002674:	00007f93 	0x00007f93
1c002678:	00007f97 	0x00007f97
1c00267c:	00007f98 	0x00007f98
1c002680:	00007f9e 	0x00007f9e
1c002684:	00007fd6 	0x00007fd6
1c002688:	00007ff2 	0x00007ff2
1c00268c:	1c001360 	pcaddu12i	$r0,155(0x9b)
1c002690:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002694:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002698:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c00269c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026a0:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026a4:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026a8:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026ac:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026b0:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026b4:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026b8:	1c001244 	pcaddu12i	$r4,146(0x92)
1c0026bc:	1c001250 	pcaddu12i	$r16,146(0x92)
1c0026c0:	1c001250 	pcaddu12i	$r16,146(0x92)
1c0026c4:	1c001250 	pcaddu12i	$r16,146(0x92)
1c0026c8:	1c001250 	pcaddu12i	$r16,146(0x92)
1c0026cc:	1c001250 	pcaddu12i	$r16,146(0x92)
1c0026d0:	1c001250 	pcaddu12i	$r16,146(0x92)
1c0026d4:	1c001250 	pcaddu12i	$r16,146(0x92)
1c0026d8:	1c001250 	pcaddu12i	$r16,146(0x92)
1c0026dc:	1c001250 	pcaddu12i	$r16,146(0x92)
1c0026e0:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026e4:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026e8:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026ec:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026f0:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026f4:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026f8:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0026fc:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002700:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002704:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002708:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c00270c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002710:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002714:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002718:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c00271c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002720:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002724:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002728:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c00272c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002730:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002734:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002738:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c00273c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002740:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002744:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002748:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c00274c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002750:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002754:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002758:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c00275c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002760:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002764:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002768:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c00276c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002770:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002774:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002778:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c00277c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002780:	1c001290 	pcaddu12i	$r16,148(0x94)
1c002784:	1c0012ac 	pcaddu12i	$r12,149(0x95)
1c002788:	1c0012c0 	pcaddu12i	$r0,150(0x96)
1c00278c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002790:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002794:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c002798:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c00279c:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0027a0:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0027a4:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0027a8:	1c0012dc 	pcaddu12i	$r28,150(0x96)
1c0027ac:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0027b0:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0027b4:	1c0012f8 	pcaddu12i	$r24,151(0x97)
1c0027b8:	1c001314 	pcaddu12i	$r20,152(0x98)
1c0027bc:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0027c0:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0027c4:	1c001330 	pcaddu12i	$r16,153(0x99)
1c0027c8:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0027cc:	1c001344 	pcaddu12i	$r4,154(0x9a)
1c0027d0:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0027d4:	1c001370 	pcaddu12i	$r16,155(0x9b)
1c0027d8:	1c001314 	pcaddu12i	$r20,152(0x98)

1c0027dc <_fdata>:
_fdata():
1c0027dc:	000047b9 	revh.d	$r25,$r29
1c0027e0:	000064b8 	rdtimeh.w	$r24,$r5
1c0027e4:	000019cd 	cto.w	$r13,$r14
1c0027e8:	000067de 	rdtimeh.w	$r30,$r30
1c0027ec:	0000585a 	ext.w.h	$r26,$r2
1c0027f0:	00003bb5 	revb.2w	$r21,$r29
1c0027f4:	00006bff 	rdtime.d	$r31,$r31
1c0027f8:	00005d23 	ext.w.b	$r3,$r9
1c0027fc:	00003fea 	revb.d	$r10,$r31
1c002800:	0000273f 	clz.d	$r31,$r25
1c002804:	0000416e 	revh.2w	$r14,$r11
1c002808:	0000295c 	cto.d	$r28,$r10
1c00280c:	00006c91 	cpucfg	$r17,$r4
1c002810:	00005198 	bitrev.w	$r24,$r12
1c002814:	00006ad8 	rdtime.d	$r24,$r22
1c002818:	000019d5 	cto.w	$r21,$r14
1c00281c:	0000191a 	cto.w	$r26,$r8
1c002820:	00002503 	clz.d	$r3,$r8
1c002824:	000004ae 	0x000004ae
1c002828:	0000447a 	revh.d	$r26,$r3
1c00282c:	00005b21 	ext.w.h	$r1,$r25
1c002830:	00007cca 	0x00007cca
1c002834:	00004487 	revh.d	$r7,$r4
1c002838:	0000002a 	0x0000002a
1c00283c:	000054c4 	bitrev.d	$r4,$r6
1c002840:	00002179 	clo.d	$r25,$r11
1c002844:	00003a9a 	revb.2w	$r26,$r20
1c002848:	00001261 	clo.w	$r1,$r19
1c00284c:	000032bc 	revb.2h	$r28,$r21
1c002850:	00006b9d 	rdtime.d	$r29,$r28
1c002854:	00004a83 	bitrev.4b	$r3,$r20
1c002858:	00005f20 	ext.w.b	$r0,$r25
1c00285c:	00004c21 	bitrev.8b	$r1,$r1
1c002860:	0000449f 	revh.d	$r31,$r4
1c002864:	00003016 	revb.2h	$r22,$r0
1c002868:	000014f3 	clz.w	$r19,$r7
1c00286c:	0000768b 	0x0000768b
1c002870:	0000428a 	revh.2w	$r10,$r20
1c002874:	00007935 	0x00007935
1c002878:	00002275 	clo.d	$r21,$r19
1c00287c:	00006b07 	rdtime.d	$r7,$r24
1c002880:	00003951 	revb.2w	$r17,$r10
1c002884:	00001460 	clz.w	$r0,$r3
1c002888:	00003e6b 	revb.d	$r11,$r19
1c00288c:	00006747 	rdtimeh.w	$r7,$r26
1c002890:	000074c3 	0x000074c3
1c002894:	00006249 	rdtimel.w	$r9,$r18
1c002898:	000038bc 	revb.2w	$r28,$r5
1c00289c:	0000487f 	bitrev.4b	$r31,$r3
1c0028a0:	000032ec 	revb.2h	$r12,$r23
1c0028a4:	0000263e 	clz.d	$r30,$r17
1c0028a8:	000047e1 	revh.d	$r1,$r31
1c0028ac:	000008af 	0x000008af
1c0028b0:	00003ec5 	revb.d	$r5,$r22
1c0028b4:	00001eed 	ctz.w	$r13,$r23
1c0028b8:	000010bc 	clo.w	$r28,$r5
1c0028bc:	00002726 	clz.d	$r6,$r25
1c0028c0:	000065f8 	rdtimeh.w	$r24,$r15
1c0028c4:	000039eb 	revb.2w	$r11,$r15
1c0028c8:	00000b33 	0x00000b33
1c0028cc:	0000476d 	revh.d	$r13,$r27
1c0028d0:	00000431 	0x00000431
1c0028d4:	0000667c 	rdtimeh.w	$r28,$r19
1c0028d8:	00005e2e 	ext.w.b	$r14,$r17
1c0028dc:	0000290a 	cto.d	$r10,$r8
1c0028e0:	000060f0 	rdtimel.w	$r16,$r7
1c0028e4:	0000610e 	rdtimel.w	$r14,$r8
1c0028e8:	00001a9d 	cto.w	$r29,$r20
1c0028ec:	00005222 	bitrev.w	$r2,$r17
1c0028f0:	00006b6a 	rdtime.d	$r10,$r27
1c0028f4:	00000652 	0x00000652
1c0028f8:	000023d5 	clo.d	$r21,$r30
1c0028fc:	00000cc0 	0x00000cc0
1c002900:	00004f26 	bitrev.8b	$r6,$r25
1c002904:	00006f6a 	cpucfg	$r10,$r27
1c002908:	00002644 	clz.d	$r4,$r18
1c00290c:	000056fc 	bitrev.d	$r28,$r23
1c002910:	00005c7f 	ext.w.b	$r31,$r3
1c002914:	0000534c 	bitrev.w	$r12,$r26
1c002918:	00003a22 	revb.2w	$r2,$r17
1c00291c:	00004c8f 	bitrev.8b	$r15,$r4
1c002920:	000052a6 	bitrev.w	$r6,$r21
1c002924:	00002f95 	ctz.d	$r21,$r28
1c002928:	000013ed 	clo.w	$r13,$r31
1c00292c:	00006346 	rdtimel.w	$r6,$r26
1c002930:	00001a98 	cto.w	$r24,$r20
1c002934:	00002156 	clo.d	$r22,$r10
1c002938:	00002442 	clz.d	$r2,$r2
1c00293c:	00002a32 	cto.d	$r18,$r17
1c002940:	00006cbb 	cpucfg	$r27,$r5
1c002944:	00006fb6 	cpucfg	$r22,$r29
1c002948:	0000285b 	cto.d	$r27,$r2
1c00294c:	00000faf 	0x00000faf
1c002950:	00004cae 	bitrev.8b	$r14,$r5
1c002954:	00005135 	bitrev.w	$r21,$r9
1c002958:	00007f98 	0x00007f98
1c00295c:	00005899 	ext.w.h	$r25,$r4
1c002960:	00002c93 	ctz.d	$r19,$r4
1c002964:	000074d9 	0x000074d9
1c002968:	0000628d 	rdtimel.w	$r13,$r20
1c00296c:	00001815 	cto.w	$r21,$r0
1c002970:	00000d62 	0x00000d62
1c002974:	0000447f 	revh.d	$r31,$r3
1c002978:	00007b90 	0x00007b90
1c00297c:	00004c89 	bitrev.8b	$r9,$r4
1c002980:	00007729 	0x00007729
1c002984:	00003b77 	revb.2w	$r23,$r27
1c002988:	0000090e 	0x0000090e
1c00298c:	000036d4 	revb.4h	$r20,$r22
1c002990:	000051a4 	bitrev.w	$r4,$r13
1c002994:	00001d84 	ctz.w	$r4,$r12
1c002998:	00006358 	rdtimel.w	$r24,$r26
1c00299c:	00003e8f 	revb.d	$r15,$r20
1c0029a0:	00002236 	clo.d	$r22,$r17
1c0029a4:	00001269 	clo.w	$r9,$r19
1c0029a8:	0000664b 	rdtimeh.w	$r11,$r18
1c0029ac:	00004dbc 	bitrev.8b	$r28,$r13
1c0029b0:	0000140a 	clz.w	$r10,$r0
1c0029b4:	00004059 	revh.2w	$r25,$r2
1c0029b8:	00004caf 	bitrev.8b	$r15,$r5
1c0029bc:	00007f9e 	0x00007f9e
1c0029c0:	00005fbc 	ext.w.b	$r28,$r29
1c0029c4:	00004f5a 	bitrev.8b	$r26,$r26
1c0029c8:	00001dcf 	ctz.w	$r15,$r14
1c0029cc:	000035d9 	revb.4h	$r25,$r14
1c0029d0:	00003efe 	revb.d	$r30,$r23
1c0029d4:	00004fe1 	bitrev.8b	$r1,$r31
1c0029d8:	00006f66 	cpucfg	$r6,$r27
1c0029dc:	0000265d 	clz.d	$r29,$r18
1c0029e0:	00003dd7 	revb.d	$r23,$r14
1c0029e4:	00000ca2 	0x00000ca2
1c0029e8:	00007773 	0x00007773
1c0029ec:	00004c4f 	bitrev.8b	$r15,$r2
1c0029f0:	000058b2 	ext.w.h	$r18,$r5
1c0029f4:	000012a0 	clo.w	$r0,$r21
1c0029f8:	00000783 	0x00000783
1c0029fc:	000048b8 	bitrev.4b	$r24,$r5
1c002a00:	0000347b 	revb.4h	$r27,$r3
1c002a04:	00007e27 	0x00007e27
1c002a08:	00006f0e 	cpucfg	$r14,$r24
1c002a0c:	0000021f 	0x0000021f
1c002a10:	00007595 	0x00007595
1c002a14:	0000106a 	clo.w	$r10,$r3
1c002a18:	00003e78 	revb.d	$r24,$r19
1c002a1c:	00007029 	0x00007029
1c002a20:	00005075 	bitrev.w	$r21,$r3
1c002a24:	00003a2d 	revb.2w	$r13,$r17
1c002a28:	00006d04 	cpucfg	$r4,$r8
1c002a2c:	00004fa2 	bitrev.8b	$r2,$r29
1c002a30:	00002510 	clz.d	$r16,$r8
1c002a34:	00006d49 	cpucfg	$r9,$r10
1c002a38:	00006b9d 	rdtime.d	$r29,$r28
1c002a3c:	00002457 	clz.d	$r23,$r2
1c002a40:	00006121 	rdtimel.w	$r1,$r9
1c002a44:	000061f1 	rdtimel.w	$r17,$r15
1c002a48:	00004b89 	bitrev.4b	$r9,$r28
1c002a4c:	00002c3d 	ctz.d	$r29,$r1
1c002a50:	000014b5 	clz.w	$r21,$r5
1c002a54:	0000314b 	revb.2h	$r11,$r10
1c002a58:	00005e67 	ext.w.b	$r7,$r19
1c002a5c:	00005ba5 	ext.w.h	$r5,$r29
1c002a60:	00005539 	bitrev.d	$r25,$r9
1c002a64:	000020d5 	clo.d	$r21,$r6
1c002a68:	00001019 	clo.w	$r25,$r0
1c002a6c:	0000717c 	0x0000717c
1c002a70:	000017df 	clz.w	$r31,$r30
1c002a74:	0000610c 	rdtimel.w	$r12,$r8
1c002a78:	00005f75 	ext.w.b	$r21,$r27
1c002a7c:	00007b3f 	0x00007b3f
1c002a80:	00000f43 	0x00000f43
1c002a84:	000023d2 	clo.d	$r18,$r30
1c002a88:	00004107 	revh.2w	$r7,$r8
1c002a8c:	00006a54 	rdtime.d	$r20,$r18
1c002a90:	00003afe 	revb.2w	$r30,$r23
1c002a94:	0000253a 	clz.d	$r26,$r9
1c002a98:	000008c9 	0x000008c9
1c002a9c:	00005f4f 	ext.w.b	$r15,$r26
1c002aa0:	00004821 	bitrev.4b	$r1,$r1
1c002aa4:	00001575 	clz.w	$r21,$r11
1c002aa8:	000042df 	revh.2w	$r31,$r22
1c002aac:	00005083 	bitrev.w	$r3,$r4
1c002ab0:	00004fa6 	bitrev.8b	$r6,$r29
1c002ab4:	00004d3d 	bitrev.8b	$r29,$r9
1c002ab8:	0000001c 	0x0000001c
1c002abc:	000046f1 	revh.d	$r17,$r23
1c002ac0:	00001903 	cto.w	$r3,$r8
1c002ac4:	0000323f 	revb.2h	$r31,$r17
1c002ac8:	00000639 	0x00000639
1c002acc:	00002a5b 	cto.d	$r27,$r18
1c002ad0:	0000597e 	ext.w.h	$r30,$r11
1c002ad4:	00001274 	clo.w	$r20,$r19
1c002ad8:	00002b7e 	cto.d	$r30,$r27
1c002adc:	00001039 	clo.w	$r25,$r1
1c002ae0:	0000154c 	clz.w	$r12,$r10
1c002ae4:	00004902 	bitrev.4b	$r2,$r8
1c002ae8:	00004020 	revh.2w	$r0,$r1
1c002aec:	00000772 	0x00000772
1c002af0:	00005fd7 	ext.w.b	$r23,$r30
1c002af4:	0000403e 	revh.2w	$r30,$r1
1c002af8:	00005d0c 	ext.w.b	$r12,$r8
1c002afc:	00004a9c 	bitrev.4b	$r28,$r20
1c002b00:	00006f69 	cpucfg	$r9,$r27
1c002b04:	00006c7e 	cpucfg	$r30,$r3
1c002b08:	000050ee 	bitrev.w	$r14,$r7
1c002b0c:	000039eb 	revb.2w	$r11,$r15
1c002b10:	000030af 	revb.2h	$r15,$r5
1c002b14:	000059dd 	ext.w.h	$r29,$r14
1c002b18:	00006457 	rdtimeh.w	$r23,$r2
1c002b1c:	00003e8a 	revb.d	$r10,$r20
1c002b20:	00007162 	0x00007162
1c002b24:	000062fe 	rdtimel.w	$r30,$r23
1c002b28:	0000155c 	clz.w	$r28,$r10
1c002b2c:	0000701f 	0x0000701f
1c002b30:	00003d5e 	revb.d	$r30,$r10
1c002b34:	00006cc8 	cpucfg	$r8,$r6
1c002b38:	00007e1b 	0x00007e1b
1c002b3c:	00006734 	rdtimeh.w	$r20,$r25
1c002b40:	00003bd5 	revb.2w	$r21,$r30
1c002b44:	000048cf 	bitrev.4b	$r15,$r6
1c002b48:	000055b7 	bitrev.d	$r23,$r13
1c002b4c:	00004d80 	bitrev.8b	$r0,$r12
1c002b50:	00004367 	revh.2w	$r7,$r27
1c002b54:	00007018 	0x00007018
1c002b58:	00005f25 	ext.w.b	$r5,$r25
1c002b5c:	0000507e 	bitrev.w	$r30,$r3
1c002b60:	0000250e 	clz.d	$r14,$r8
1c002b64:	000003a9 	0x000003a9
1c002b68:	00001040 	clo.w	$r0,$r2
1c002b6c:	00001375 	clo.w	$r21,$r27
1c002b70:	00001b6b 	cto.w	$r11,$r27
1c002b74:	000055f0 	bitrev.d	$r16,$r15
1c002b78:	00004501 	revh.d	$r1,$r8
1c002b7c:	00007925 	0x00007925
1c002b80:	000010a4 	clo.w	$r4,$r5
1c002b84:	00002979 	cto.d	$r25,$r11
1c002b88:	00007862 	0x00007862
1c002b8c:	00004706 	revh.d	$r6,$r24
1c002b90:	00001d8d 	ctz.w	$r13,$r12
1c002b94:	000041c0 	revh.2w	$r0,$r14
1c002b98:	00005012 	bitrev.w	$r18,$r0
1c002b9c:	00001c09 	ctz.w	$r9,$r0
1c002ba0:	000037d5 	revb.4h	$r21,$r30
1c002ba4:	00004df9 	bitrev.8b	$r25,$r15
1c002ba8:	00005e9f 	ext.w.b	$r31,$r20
1c002bac:	00004856 	bitrev.4b	$r22,$r2
1c002bb0:	000064de 	rdtimeh.w	$r30,$r6
1c002bb4:	000057c7 	bitrev.d	$r7,$r30
1c002bb8:	00000008 	0x00000008
1c002bbc:	00004bb4 	bitrev.4b	$r20,$r29
1c002bc0:	00005c47 	ext.w.b	$r7,$r2
1c002bc4:	0000089a 	0x0000089a
1c002bc8:	000055cd 	bitrev.d	$r13,$r14
1c002bcc:	0000526e 	bitrev.w	$r14,$r19
1c002bd0:	0000690f 	rdtime.d	$r15,$r8
1c002bd4:	00001d05 	ctz.w	$r5,$r8
1c002bd8:	00007574 	0x00007574
1c002bdc:	00005490 	bitrev.d	$r16,$r4
1c002be0:	00000ba4 	0x00000ba4
1c002be4:	0000014f 	0x0000014f
1c002be8:	000013ea 	clo.w	$r10,$r31
1c002bec:	00001a22 	cto.w	$r2,$r17
1c002bf0:	0000722f 	0x0000722f
1c002bf4:	0000177c 	clz.w	$r28,$r27
1c002bf8:	0000243f 	clz.d	$r31,$r1
1c002bfc:	00000164 	0x00000164
1c002c00:	0000753a 	0x0000753a
1c002c04:	00007a91 	0x00007a91
1c002c08:	00001fc5 	ctz.w	$r5,$r30
1c002c0c:	00006ee3 	cpucfg	$r3,$r23
1c002c10:	0000495e 	bitrev.4b	$r30,$r10
1c002c14:	00000ac8 	0x00000ac8
1c002c18:	000024ec 	clz.d	$r12,$r7
1c002c1c:	00005d1d 	ext.w.b	$r29,$r8
1c002c20:	0000448e 	revh.d	$r14,$r4
1c002c24:	00007235 	0x00007235
1c002c28:	00001ccc 	ctz.w	$r12,$r6
1c002c2c:	000050a2 	bitrev.w	$r2,$r5
1c002c30:	00000dab 	0x00000dab
1c002c34:	00007e90 	0x00007e90
1c002c38:	00003f40 	revb.d	$r0,$r26
1c002c3c:	0000316d 	revb.2h	$r13,$r11
1c002c40:	00003231 	revb.2h	$r17,$r17
1c002c44:	00005444 	bitrev.d	$r4,$r2
1c002c48:	00007765 	0x00007765
1c002c4c:	000049c7 	bitrev.4b	$r7,$r14
1c002c50:	0000581a 	ext.w.h	$r26,$r0
1c002c54:	000052a0 	bitrev.w	$r0,$r21
1c002c58:	00003cee 	revb.d	$r14,$r7
1c002c5c:	00005629 	bitrev.d	$r9,$r17
1c002c60:	000078d6 	0x000078d6
1c002c64:	00005ce1 	ext.w.b	$r1,$r7
1c002c68:	00005de5 	ext.w.b	$r5,$r15
1c002c6c:	000015e2 	clz.w	$r2,$r15
1c002c70:	00006140 	rdtimel.w	$r0,$r10
1c002c74:	0000583b 	ext.w.h	$r27,$r1
1c002c78:	00003cd3 	revb.d	$r19,$r6
1c002c7c:	00001d92 	ctz.w	$r18,$r12
1c002c80:	00002258 	clo.d	$r24,$r18
1c002c84:	00006cb6 	cpucfg	$r22,$r5
1c002c88:	00006f30 	cpucfg	$r16,$r25
1c002c8c:	00000841 	0x00000841
1c002c90:	0000149a 	clz.w	$r26,$r4
1c002c94:	00004ae4 	bitrev.4b	$r4,$r23
1c002c98:	000067e5 	rdtimeh.w	$r5,$r31
1c002c9c:	00000fd0 	0x00000fd0
1c002ca0:	00007b31 	0x00007b31
1c002ca4:	0000764a 	0x0000764a
1c002ca8:	00003792 	revb.4h	$r18,$r28
1c002cac:	0000174b 	clz.w	$r11,$r26
1c002cb0:	00000df7 	0x00000df7
1c002cb4:	00007da2 	0x00007da2
1c002cb8:	00003db9 	revb.d	$r25,$r13
1c002cbc:	00006f1f 	cpucfg	$r31,$r24
1c002cc0:	0000008c 	0x0000008c
1c002cc4:	00003863 	revb.2w	$r3,$r3
1c002cc8:	00000abb 	0x00000abb
1c002ccc:	00003e44 	revb.d	$r4,$r18
1c002cd0:	000010ca 	clo.w	$r10,$r6
1c002cd4:	00006e21 	cpucfg	$r1,$r17
1c002cd8:	00005cb2 	ext.w.b	$r18,$r5
1c002cdc:	000058eb 	ext.w.h	$r11,$r7
1c002ce0:	00005950 	ext.w.h	$r16,$r10
1c002ce4:	00007066 	0x00007066
1c002ce8:	00006697 	rdtimeh.w	$r23,$r20
1c002cec:	00000f3e 	0x00000f3e
1c002cf0:	00006ae8 	rdtime.d	$r8,$r23
1c002cf4:	00004cde 	bitrev.8b	$r30,$r6
1c002cf8:	00004a13 	bitrev.4b	$r19,$r16
1c002cfc:	000053d8 	bitrev.w	$r24,$r30
1c002d00:	00003374 	revb.2h	$r20,$r27
1c002d04:	000029b7 	cto.d	$r23,$r13
1c002d08:	00005dbb 	ext.w.b	$r27,$r13
1c002d0c:	0000676a 	rdtimeh.w	$r10,$r27
1c002d10:	00000736 	0x00000736
1c002d14:	00002237 	clo.d	$r23,$r17
1c002d18:	000008a4 	0x000008a4
1c002d1c:	00007f27 	0x00007f27
1c002d20:	00000257 	0x00000257
1c002d24:	00005e2f 	ext.w.b	$r15,$r17
1c002d28:	000038ed 	revb.2w	$r13,$r7
1c002d2c:	00002560 	clz.d	$r0,$r11
1c002d30:	00007ff2 	0x00007ff2
1c002d34:	00000e1f 	0x00000e1f
1c002d38:	0000354f 	revb.4h	$r15,$r10
1c002d3c:	000015f8 	clz.w	$r24,$r15
1c002d40:	00000cc6 	0x00000cc6
1c002d44:	0000618b 	rdtimel.w	$r11,$r12
1c002d48:	0000096c 	0x0000096c
1c002d4c:	00005b9a 	ext.w.h	$r26,$r28
1c002d50:	00007a46 	0x00007a46
1c002d54:	000035a9 	revb.4h	$r9,$r13
1c002d58:	0000273a 	clz.d	$r26,$r25
1c002d5c:	000010f8 	clo.w	$r24,$r7
1c002d60:	00005cf0 	ext.w.b	$r16,$r7
1c002d64:	00005493 	bitrev.d	$r19,$r4
1c002d68:	00002610 	clz.d	$r16,$r16
1c002d6c:	0000045e 	0x0000045e
1c002d70:	000058c7 	ext.w.h	$r7,$r6
1c002d74:	000024ca 	clz.d	$r10,$r6
1c002d78:	00006a52 	rdtime.d	$r18,$r18
1c002d7c:	00006ee0 	cpucfg	$r0,$r23
1c002d80:	000002e5 	0x000002e5
1c002d84:	00002550 	clz.d	$r16,$r10
1c002d88:	00005eac 	ext.w.b	$r12,$r21
1c002d8c:	00001079 	clo.w	$r25,$r3
1c002d90:	0000479b 	revh.d	$r27,$r28
1c002d94:	00006944 	rdtime.d	$r4,$r10
1c002d98:	0000475a 	revh.d	$r26,$r26
1c002d9c:	00001e4f 	ctz.w	$r15,$r18
1c002da0:	000017c4 	clz.w	$r4,$r30
1c002da4:	0000725c 	0x0000725c
1c002da8:	000043a7 	revh.2w	$r7,$r29
1c002dac:	000044b7 	revh.d	$r23,$r5
1c002db0:	00001b60 	cto.w	$r0,$r27
1c002db4:	00000bf8 	0x00000bf8
1c002db8:	0000732c 	0x0000732c
1c002dbc:	000020ad 	clo.d	$r13,$r5
1c002dc0:	000071a1 	0x000071a1
1c002dc4:	0000399c 	revb.2w	$r28,$r12
1c002dc8:	0000511a 	bitrev.w	$r26,$r8
1c002dcc:	00004f93 	bitrev.8b	$r19,$r28
1c002dd0:	000079f6 	0x000079f6
1c002dd4:	000048cd 	bitrev.4b	$r13,$r6
1c002dd8:	0000299f 	cto.d	$r31,$r12
1c002ddc:	00002f79 	ctz.d	$r25,$r27
1c002de0:	00006537 	rdtimeh.w	$r23,$r9
1c002de4:	000039e1 	revb.2w	$r1,$r15
1c002de8:	000002f8 	0x000002f8
1c002dec:	00001863 	cto.w	$r3,$r3
1c002df0:	000067e7 	rdtimeh.w	$r7,$r31
1c002df4:	000014fd 	clz.w	$r29,$r7
1c002df8:	00003b73 	revb.2w	$r19,$r27
1c002dfc:	00002b87 	cto.d	$r7,$r28
1c002e00:	00007647 	0x00007647
1c002e04:	00005ce6 	ext.w.b	$r6,$r7
1c002e08:	00002985 	cto.d	$r5,$r12
1c002e0c:	000005da 	0x000005da
1c002e10:	00000a16 	0x00000a16
1c002e14:	00006d30 	cpucfg	$r16,$r9
1c002e18:	00001254 	clo.w	$r20,$r18
1c002e1c:	0000695e 	rdtime.d	$r30,$r10
1c002e20:	00006372 	rdtimel.w	$r18,$r27
1c002e24:	00001824 	cto.w	$r4,$r1
1c002e28:	00000e75 	0x00000e75
1c002e2c:	00007f93 	0x00007f93
1c002e30:	000044e3 	revh.d	$r3,$r7
1c002e34:	00004fb2 	bitrev.8b	$r18,$r29
1c002e38:	00000b21 	0x00000b21
1c002e3c:	000062ba 	rdtimel.w	$r26,$r21
1c002e40:	00005ef0 	ext.w.b	$r16,$r23
1c002e44:	000024be 	clz.d	$r30,$r5
1c002e48:	00005b3d 	ext.w.h	$r29,$r25
1c002e4c:	00004882 	bitrev.4b	$r2,$r4
1c002e50:	0000701d 	0x0000701d
1c002e54:	00001e1e 	ctz.w	$r30,$r16
1c002e58:	000064b4 	rdtimeh.w	$r20,$r5
1c002e5c:	000005f4 	0x000005f4
1c002e60:	00000859 	0x00000859
1c002e64:	00002c57 	ctz.d	$r23,$r2
1c002e68:	000050ff 	bitrev.w	$r31,$r7
1c002e6c:	00003440 	revb.4h	$r0,$r2
1c002e70:	000074d3 	0x000074d3
1c002e74:	00001daf 	ctz.w	$r15,$r13
1c002e78:	0000739e 	0x0000739e
1c002e7c:	00005cdc 	ext.w.b	$r28,$r6
1c002e80:	0000498a 	bitrev.4b	$r10,$r12
1c002e84:	000050b6 	bitrev.w	$r22,$r5
1c002e88:	00003a01 	revb.2w	$r1,$r16
1c002e8c:	0000508d 	bitrev.w	$r13,$r4
1c002e90:	00001646 	clz.w	$r6,$r18
1c002e94:	00002314 	clo.d	$r20,$r24
1c002e98:	00002d18 	ctz.d	$r24,$r8
1c002e9c:	000041ac 	revh.2w	$r12,$r13
1c002ea0:	000038f4 	revb.2w	$r20,$r7
1c002ea4:	000078c2 	0x000078c2
1c002ea8:	00005f36 	ext.w.b	$r22,$r25
1c002eac:	0000274c 	clz.d	$r12,$r26
1c002eb0:	00003197 	revb.2h	$r23,$r12
1c002eb4:	00007620 	0x00007620
1c002eb8:	00006935 	rdtime.d	$r21,$r9
1c002ebc:	00005ae1 	ext.w.h	$r1,$r23
1c002ec0:	00003d80 	revb.d	$r0,$r12
1c002ec4:	000043c8 	revh.2w	$r8,$r30
1c002ec8:	0000445a 	revh.d	$r26,$r2
1c002ecc:	00004ea7 	bitrev.8b	$r7,$r21
1c002ed0:	000010d0 	clo.w	$r16,$r6
1c002ed4:	00000014 	0x00000014
1c002ed8:	0000469d 	revh.d	$r29,$r20
1c002edc:	000040f0 	revh.2w	$r16,$r7
1c002ee0:	00000ce5 	0x00000ce5
1c002ee4:	00006730 	rdtimeh.w	$r16,$r25
1c002ee8:	00002a0d 	cto.d	$r13,$r16
1c002eec:	00001473 	clz.w	$r19,$r3
1c002ef0:	00003d22 	revb.d	$r2,$r9
1c002ef4:	000039ec 	revb.2w	$r12,$r15
1c002ef8:	000079e1 	0x000079e1
1c002efc:	00007065 	0x00007065
1c002f00:	00003c03 	revb.d	$r3,$r0
1c002f04:	00002f2a 	ctz.d	$r10,$r25
1c002f08:	00002bcd 	cto.d	$r13,$r30
1c002f0c:	00004c07 	bitrev.8b	$r7,$r0
1c002f10:	00002fb8 	ctz.d	$r24,$r29
1c002f14:	00001dca 	ctz.w	$r10,$r14
1c002f18:	00006ead 	cpucfg	$r13,$r21
1c002f1c:	000044f8 	revh.d	$r24,$r7
1c002f20:	00004c6f 	bitrev.8b	$r15,$r3
1c002f24:	00004723 	revh.d	$r3,$r25
1c002f28:	000008a5 	0x000008a5
1c002f2c:	000041b2 	revh.2w	$r18,$r13
1c002f30:	00004611 	revh.d	$r17,$r16
1c002f34:	00004998 	bitrev.4b	$r24,$r12
1c002f38:	00005e84 	ext.w.b	$r4,$r20
1c002f3c:	000071bb 	0x000071bb
1c002f40:	00004a8e 	bitrev.4b	$r14,$r20
1c002f44:	00000c49 	0x00000c49
1c002f48:	00005792 	bitrev.d	$r18,$r28
1c002f4c:	00000eae 	0x00000eae
1c002f50:	0000014b 	0x0000014b
1c002f54:	000022b1 	clo.d	$r17,$r21
1c002f58:	000069ab 	rdtime.d	$r11,$r13
1c002f5c:	000035b9 	revb.4h	$r25,$r13
1c002f60:	0000389c 	revb.2w	$r28,$r4
1c002f64:	000054b6 	bitrev.d	$r22,$r5
1c002f68:	000015f4 	clz.w	$r20,$r15
1c002f6c:	00007366 	0x00007366
1c002f70:	00000afb 	0x00000afb
1c002f74:	000036e1 	revb.4h	$r1,$r23
1c002f78:	00002e0f 	ctz.d	$r15,$r16
1c002f7c:	00007a8e 	0x00007a8e
1c002f80:	000020fe 	clo.d	$r30,$r7
1c002f84:	0000532f 	bitrev.w	$r15,$r25
1c002f88:	000000ab 	0x000000ab
1c002f8c:	00002c8e 	ctz.d	$r14,$r4
1c002f90:	00006594 	rdtimeh.w	$r20,$r12
1c002f94:	0000135f 	clo.w	$r31,$r26
1c002f98:	00007af5 	0x00007af5
1c002f9c:	000026a7 	clz.d	$r7,$r21
1c002fa0:	00006c45 	cpucfg	$r5,$r2
1c002fa4:	0000659e 	rdtimeh.w	$r30,$r12
1c002fa8:	00002986 	cto.d	$r6,$r12
1c002fac:	0000783c 	0x0000783c
1c002fb0:	0000081f 	0x0000081f
1c002fb4:	00006f32 	cpucfg	$r18,$r25
1c002fb8:	0000685a 	rdtime.d	$r26,$r2
1c002fbc:	000017da 	clz.w	$r26,$r30
1c002fc0:	000044b6 	revh.d	$r22,$r5
1c002fc4:	00005f16 	ext.w.b	$r22,$r24
1c002fc8:	00007173 	0x00007173
1c002fcc:	000007b8 	0x000007b8
1c002fd0:	000062f3 	rdtimel.w	$r19,$r23
1c002fd4:	000071e6 	0x000071e6
1c002fd8:	0000062f 	0x0000062f
1c002fdc:	00003280 	revb.2h	$r0,$r20
1c002fe0:	000017b7 	clz.w	$r23,$r29
1c002fe4:	000044ad 	revh.d	$r13,$r5
1c002fe8:	000070c1 	0x000070c1
1c002fec:	0000339a 	revb.2h	$r26,$r28
1c002ff0:	00006d69 	cpucfg	$r9,$r11
1c002ff4:	00005130 	bitrev.w	$r16,$r9
1c002ff8:	00006aad 	rdtime.d	$r13,$r21
1c002ffc:	00004c2b 	bitrev.8b	$r11,$r1
1c003000:	00006302 	rdtimel.w	$r2,$r24
1c003004:	00005989 	ext.w.h	$r9,$r12
1c003008:	00006f95 	cpucfg	$r21,$r28
1c00300c:	00005f33 	ext.w.b	$r19,$r25
1c003010:	000051fd 	bitrev.w	$r29,$r15
1c003014:	0000643d 	rdtimeh.w	$r29,$r1
1c003018:	00002f69 	ctz.d	$r9,$r27
1c00301c:	0000441a 	revh.d	$r26,$r0
1c003020:	00004220 	revh.2w	$r0,$r17
1c003024:	00000810 	0x00000810
1c003028:	00001cd7 	ctz.w	$r23,$r6
1c00302c:	0000418d 	revh.2w	$r13,$r12
1c003030:	0000560b 	bitrev.d	$r11,$r16
1c003034:	00000d44 	0x00000d44
1c003038:	00001170 	clo.w	$r16,$r11
1c00303c:	000017a6 	clz.w	$r6,$r29
1c003040:	00003277 	revb.2h	$r23,$r19
1c003044:	00004bca 	bitrev.4b	$r10,$r30
1c003048:	00000e80 	0x00000e80
1c00304c:	00001a7e 	cto.w	$r30,$r19
1c003050:	00007d53 	0x00007d53
1c003054:	000024ca 	clz.d	$r10,$r6
1c003058:	00007edf 	0x00007edf
1c00305c:	00000ce9 	0x00000ce9
1c003060:	00006096 	rdtimel.w	$r22,$r4
1c003064:	00004a74 	bitrev.4b	$r20,$r19
1c003068:	0000326d 	revb.2h	$r13,$r19
1c00306c:	000051ba 	bitrev.w	$r26,$r13
1c003070:	00004af6 	bitrev.4b	$r22,$r23
1c003074:	00002fea 	ctz.d	$r10,$r31
1c003078:	00007b78 	0x00007b78
1c00307c:	00004bcc 	bitrev.4b	$r12,$r30
1c003080:	00007b5d 	0x00007b5d
1c003084:	0000573b 	bitrev.d	$r27,$r25
1c003088:	00000f72 	0x00000f72
1c00308c:	00005b76 	ext.w.h	$r22,$r27
1c003090:	00006fab 	cpucfg	$r11,$r29
1c003094:	00006ab2 	rdtime.d	$r18,$r21
1c003098:	000017f3 	clz.w	$r19,$r31
1c00309c:	00001587 	clz.w	$r7,$r12
1c0030a0:	0000724d 	0x0000724d
1c0030a4:	00004add 	bitrev.4b	$r29,$r22
1c0030a8:	000042ff 	revh.2w	$r31,$r23
1c0030ac:	000031f6 	revb.2h	$r22,$r15
1c0030b0:	000050bb 	bitrev.w	$r27,$r5
1c0030b4:	00004e68 	bitrev.8b	$r8,$r19
1c0030b8:	00005f90 	ext.w.b	$r16,$r28
1c0030bc:	00002165 	clo.d	$r5,$r11
1c0030c0:	0000221e 	clo.d	$r30,$r16
1c0030c4:	0000255b 	clz.d	$r27,$r10
1c0030c8:	00003581 	revb.4h	$r1,$r12
1c0030cc:	00005b4a 	ext.w.h	$r10,$r26
1c0030d0:	00001c89 	ctz.w	$r9,$r4
1c0030d4:	000010f1 	clo.w	$r17,$r7
1c0030d8:	000014d3 	clz.w	$r19,$r6
1c0030dc:	00007d65 	0x00007d65
1c0030e0:	000015fb 	clz.w	$r27,$r15
1c0030e4:	000065b0 	rdtimeh.w	$r16,$r13
1c0030e8:	000051d5 	bitrev.w	$r21,$r14
1c0030ec:	000025a3 	clz.d	$r3,$r13
1c0030f0:	00001d46 	ctz.w	$r6,$r10
1c0030f4:	000005c8 	0x000005c8
1c0030f8:	0000536f 	bitrev.w	$r15,$r27
1c0030fc:	00007048 	0x00007048
1c003100:	00005ad8 	ext.w.h	$r24,$r22
1c003104:	0000636f 	rdtimel.w	$r15,$r27
1c003108:	00005b53 	ext.w.h	$r19,$r26
1c00310c:	00000048 	0x00000048
1c003110:	0000216d 	clo.d	$r13,$r11
1c003114:	00004f5b 	bitrev.8b	$r27,$r26
1c003118:	000017df 	clz.w	$r31,$r30
1c00311c:	00007072 	0x00007072
1c003120:	00006caf 	cpucfg	$r15,$r5
1c003124:	00007fd6 	0x00007fd6
1c003128:	00001702 	clz.w	$r2,$r24
1c00312c:	00005d80 	ext.w.b	$r0,$r12
1c003130:	00003d3c 	revb.d	$r28,$r9
1c003134:	00006614 	rdtimeh.w	$r20,$r16
1c003138:	00005be1 	ext.w.h	$r1,$r31
1c00313c:	000055c0 	bitrev.d	$r0,$r14
1c003140:	00005354 	bitrev.w	$r20,$r26
1c003144:	000059ea 	ext.w.h	$r10,$r15
1c003148:	0000640d 	rdtimeh.w	$r13,$r0
1c00314c:	000057da 	bitrev.d	$r26,$r30
1c003150:	00004e0c 	bitrev.8b	$r12,$r16
1c003154:	000046fe 	revh.d	$r30,$r23
1c003158:	0000724b 	0x0000724b
1c00315c:	000055a9 	bitrev.d	$r9,$r13
1c003160:	00007f97 	0x00007f97
1c003164:	00006acf 	rdtime.d	$r15,$r22
1c003168:	0000787a 	0x0000787a
1c00316c:	000038d8 	revb.2w	$r24,$r6
1c003170:	000016de 	clz.w	$r30,$r22
1c003174:	00001749 	clz.w	$r9,$r26
1c003178:	000010cd 	clo.w	$r13,$r6
1c00317c:	0000533b 	bitrev.w	$r27,$r25
1c003180:	0000139e 	clo.w	$r30,$r28
1c003184:	00000f71 	0x00000f71
1c003188:	00000867 	0x00000867
1c00318c:	00005703 	bitrev.d	$r3,$r24
1c003190:	00002a2d 	cto.d	$r13,$r17
1c003194:	0000107a 	clo.w	$r26,$r3
1c003198:	00006b4b 	rdtime.d	$r11,$r26
1c00319c:	00002a3c 	cto.d	$r28,$r17
1c0031a0:	00007cc0 	0x00007cc0
1c0031a4:	00006815 	rdtime.d	$r21,$r0
1c0031a8:	00007197 	0x00007197
1c0031ac:	00003825 	revb.2w	$r5,$r1
1c0031b0:	00002704 	clz.d	$r4,$r24
1c0031b4:	0000303f 	revb.2h	$r31,$r1
1c0031b8:	00003730 	revb.4h	$r16,$r25
1c0031bc:	00006503 	rdtimeh.w	$r3,$r8
1c0031c0:	0000504b 	bitrev.w	$r11,$r2
1c0031c4:	00003164 	revb.2h	$r4,$r11
1c0031c8:	00005a27 	ext.w.h	$r7,$r17
1c0031cc:	000078bb 	0x000078bb
1c0031d0:	00007ec9 	0x00007ec9
1c0031d4:	00000940 	0x00000940
1c0031d8:	00007b86 	0x00007b86
1c0031dc:	00006496 	rdtimeh.w	$r22,$r4
1c0031e0:	00007cae 	0x00007cae
1c0031e4:	00002dda 	ctz.d	$r26,$r14
1c0031e8:	00000781 	0x00000781
1c0031ec:	00007dd1 	0x00007dd1
1c0031f0:	00007ae7 	0x00007ae7
1c0031f4:	0000226c 	clo.d	$r12,$r19
1c0031f8:	00000faf 	0x00000faf
1c0031fc:	0000726d 	0x0000726d
1c003200:	00002c44 	ctz.d	$r4,$r2
1c003204:	00004b31 	bitrev.4b	$r17,$r25
1c003208:	00001e5a 	ctz.w	$r26,$r18
1c00320c:	00006b00 	rdtime.d	$r0,$r24
1c003210:	00006e6c 	cpucfg	$r12,$r19
1c003214:	000026ab 	clz.d	$r11,$r21
1c003218:	0000755d 	0x0000755d
1c00321c:	00004b11 	bitrev.4b	$r17,$r24
1c003220:	00000ed9 	0x00000ed9
1c003224:	00006d62 	cpucfg	$r2,$r11
1c003228:	00007f68 	0x00007f68
1c00322c:	000024ac 	clz.d	$r12,$r5
1c003230:	00006d87 	cpucfg	$r7,$r12
1c003234:	00005cdc 	ext.w.b	$r28,$r6
1c003238:	000027b9 	clz.d	$r25,$r29
1c00323c:	000005f0 	0x000005f0
1c003240:	00007c8e 	0x00007c8e
1c003244:	0000079e 	0x0000079e
1c003248:	00003e10 	revb.d	$r16,$r16
1c00324c:	00003727 	revb.4h	$r7,$r25
1c003250:	00001628 	clz.w	$r8,$r17
1c003254:	00005c0b 	ext.w.b	$r11,$r0
1c003258:	000009ef 	0x000009ef
1c00325c:	000052af 	bitrev.w	$r15,$r21
1c003260:	00000c71 	0x00000c71
1c003264:	00002a34 	cto.d	$r20,$r17
1c003268:	00006a06 	rdtime.d	$r6,$r16
1c00326c:	000066c8 	rdtimeh.w	$r8,$r22
1c003270:	0000015b 	0x0000015b
1c003274:	000047d5 	revh.d	$r21,$r30
1c003278:	000012ff 	clo.w	$r31,$r23
1c00327c:	000052c0 	bitrev.w	$r0,$r22
1c003280:	0000670c 	rdtimeh.w	$r12,$r24
1c003284:	00000b30 	0x00000b30
1c003288:	00001c75 	ctz.w	$r21,$r3
1c00328c:	00001ecc 	ctz.w	$r12,$r22
1c003290:	00002504 	clz.d	$r4,$r8
1c003294:	0000736b 	0x0000736b
1c003298:	00002d25 	ctz.d	$r5,$r9
1c00329c:	00001bd8 	cto.w	$r24,$r30
1c0032a0:	000057c8 	bitrev.d	$r8,$r30
1c0032a4:	00004138 	revh.2w	$r24,$r9
1c0032a8:	000060ae 	rdtimel.w	$r14,$r5
1c0032ac:	00007ac8 	0x00007ac8
1c0032b0:	00003734 	revb.4h	$r20,$r25
1c0032b4:	00006ad0 	rdtime.d	$r16,$r22
1c0032b8:	000028bc 	cto.d	$r28,$r5
1c0032bc:	000001c9 	0x000001c9
1c0032c0:	00007a18 	0x00007a18
1c0032c4:	00005e0c 	ext.w.b	$r12,$r16
1c0032c8:	0000104e 	clo.w	$r14,$r2
1c0032cc:	0000491b 	bitrev.4b	$r27,$r8
1c0032d0:	0000377e 	revb.4h	$r30,$r27
1c0032d4:	0000090b 	0x0000090b
1c0032d8:	000067dc 	rdtimeh.w	$r28,$r30
1c0032dc:	00005201 	bitrev.w	$r1,$r16
1c0032e0:	00006335 	rdtimel.w	$r21,$r25
1c0032e4:	00007c9f 	0x00007c9f
1c0032e8:	00007746 	0x00007746
1c0032ec:	000062d8 	rdtimel.w	$r24,$r22
1c0032f0:	000030e4 	revb.2h	$r4,$r7
1c0032f4:	000007c0 	0x000007c0
1c0032f8:	00001557 	clz.w	$r23,$r10
1c0032fc:	00002444 	clz.d	$r4,$r2
1c003300:	00004b21 	bitrev.4b	$r1,$r25
1c003304:	00002f1c 	ctz.d	$r28,$r24
1c003308:	00007dd3 	0x00007dd3
1c00330c:	00005873 	ext.w.h	$r19,$r3
1c003310:	00003316 	revb.2h	$r22,$r24
1c003314:	000026cd 	clz.d	$r13,$r22
1c003318:	00000d0c 	0x00000d0c
1c00331c:	00005773 	bitrev.d	$r19,$r27
1c003320:	00001b8c 	cto.w	$r12,$r28
1c003324:	000027bc 	clz.d	$r28,$r29
1c003328:	00007376 	0x00007376
1c00332c:	00001ec3 	ctz.w	$r3,$r22
1c003330:	00006e01 	cpucfg	$r1,$r16
1c003334:	00005cb9 	ext.w.b	$r25,$r5
1c003338:	00001a75 	cto.w	$r21,$r19
1c00333c:	00003ed8 	revb.d	$r24,$r22
1c003340:	00001dcd 	ctz.w	$r13,$r14
1c003344:	000025ed 	clz.d	$r13,$r15
1c003348:	00001c32 	ctz.w	$r18,$r1
1c00334c:	00003a68 	revb.2w	$r8,$r19
1c003350:	00004b7e 	bitrev.4b	$r30,$r27
1c003354:	0000060b 	0x0000060b
1c003358:	00006bb2 	rdtime.d	$r18,$r29
1c00335c:	00001d8d 	ctz.w	$r13,$r12
1c003360:	00004a84 	bitrev.4b	$r4,$r20
1c003364:	00005b3b 	ext.w.h	$r27,$r25
1c003368:	000042b6 	revh.2w	$r22,$r21
1c00336c:	00000ab0 	0x00000ab0
1c003370:	00006d79 	cpucfg	$r25,$r11
1c003374:	00006cf0 	cpucfg	$r16,$r7
1c003378:	00002054 	clo.d	$r20,$r2
1c00337c:	0000443e 	revh.d	$r30,$r1
1c003380:	00001ab4 	cto.w	$r20,$r21
1c003384:	00003fb7 	revb.d	$r23,$r29
1c003388:	00004f1e 	bitrev.8b	$r30,$r24
1c00338c:	0000111a 	clo.w	$r26,$r8
1c003390:	00006c27 	cpucfg	$r7,$r1
1c003394:	00001afe 	cto.w	$r30,$r23
1c003398:	00003e4e 	revb.d	$r14,$r18
1c00339c:	00001d14 	ctz.w	$r20,$r8
1c0033a0:	00003a3d 	revb.2w	$r29,$r17
1c0033a4:	00002468 	clz.d	$r8,$r3
1c0033a8:	0000772b 	0x0000772b
1c0033ac:	00000381 	0x00000381
1c0033b0:	00003709 	revb.4h	$r9,$r24
1c0033b4:	00000d42 	0x00000d42
1c0033b8:	00002b5d 	cto.d	$r29,$r26
1c0033bc:	00001227 	clo.w	$r7,$r17
1c0033c0:	00007eb6 	0x00007eb6
1c0033c4:	000037ed 	revb.4h	$r13,$r31
1c0033c8:	000065d7 	rdtimeh.w	$r23,$r14
1c0033cc:	00002e2b 	ctz.d	$r11,$r17
1c0033d0:	00002f18 	ctz.d	$r24,$r24
1c0033d4:	00002efd 	ctz.d	$r29,$r23
1c0033d8:	00000abd 	0x00000abd
1c0033dc:	000048bc 	bitrev.4b	$r28,$r5
1c0033e0:	000067bb 	rdtimeh.w	$r27,$r29
1c0033e4:	00005341 	bitrev.w	$r1,$r26
1c0033e8:	0000170b 	clz.w	$r11,$r24
1c0033ec:	000074e7 	0x000074e7
1c0033f0:	00000e61 	0x00000e61
1c0033f4:	0000495d 	bitrev.4b	$r29,$r10
1c0033f8:	0000195c 	cto.w	$r28,$r10
1c0033fc:	000017be 	clz.w	$r30,$r29
1c003400:	000069bc 	rdtime.d	$r28,$r13
1c003404:	00006556 	rdtimeh.w	$r22,$r10
1c003408:	00003193 	revb.2h	$r19,$r12
1c00340c:	00000128 	0x00000128
1c003410:	00000c77 	0x00000c77
1c003414:	000000e3 	0x000000e3
1c003418:	00000183 	0x00000183
1c00341c:	00006154 	rdtimel.w	$r20,$r10
1c003420:	000010b2 	clo.w	$r18,$r5
1c003424:	00004190 	revh.2w	$r16,$r12
1c003428:	0000226d 	clo.d	$r13,$r19
1c00342c:	00004990 	bitrev.4b	$r16,$r12
1c003430:	00003eae 	revb.d	$r14,$r21
1c003434:	000038be 	revb.2w	$r30,$r5
1c003438:	00000ca5 	0x00000ca5
1c00343c:	00006ea0 	cpucfg	$r0,$r21
1c003440:	000019f9 	cto.w	$r25,$r15
1c003444:	00006ec4 	cpucfg	$r4,$r22
1c003448:	00005b06 	ext.w.h	$r6,$r24
1c00344c:	00002224 	clo.d	$r4,$r17
1c003450:	00003bf9 	revb.2w	$r25,$r31
1c003454:	00007969 	0x00007969
1c003458:	00001156 	clo.w	$r22,$r10
1c00345c:	00000255 	0x00000255
1c003460:	00005858 	ext.w.h	$r24,$r2
1c003464:	00004d02 	bitrev.8b	$r2,$r8
1c003468:	000013bb 	clo.w	$r27,$r29
1c00346c:	00007ba5 	0x00007ba5
1c003470:	00006790 	rdtimeh.w	$r16,$r28
1c003474:	000067fa 	rdtimeh.w	$r26,$r31
1c003478:	00006f55 	cpucfg	$r21,$r26
1c00347c:	00005e57 	ext.w.b	$r23,$r18
1c003480:	00005cb7 	ext.w.b	$r23,$r5
1c003484:	0000263a 	clz.d	$r26,$r17
1c003488:	00005802 	ext.w.h	$r2,$r0
1c00348c:	00002f52 	ctz.d	$r18,$r26
1c003490:	00007a61 	0x00007a61
1c003494:	00002f34 	ctz.d	$r20,$r25
1c003498:	00003fb6 	revb.d	$r22,$r29
1c00349c:	00001878 	cto.w	$r24,$r3
1c0034a0:	00000b77 	0x00000b77
1c0034a4:	000065f6 	rdtimeh.w	$r22,$r15
1c0034a8:	000046c6 	revh.d	$r6,$r22
1c0034ac:	00002f60 	ctz.d	$r0,$r27
1c0034b0:	00007452 	0x00007452
1c0034b4:	000077cd 	0x000077cd
1c0034b8:	000068ef 	rdtime.d	$r15,$r7
1c0034bc:	00007532 	0x00007532
1c0034c0:	00006d9f 	cpucfg	$r31,$r12
1c0034c4:	00003cb1 	revb.d	$r17,$r5
1c0034c8:	00002bf5 	cto.d	$r21,$r31
1c0034cc:	0000031d 	0x0000031d
1c0034d0:	000007b9 	0x000007b9
1c0034d4:	000031fa 	revb.2h	$r26,$r15
1c0034d8:	0000524a 	bitrev.w	$r10,$r18
1c0034dc:	00001ed8 	ctz.w	$r24,$r22
1c0034e0:	0000316d 	revb.2h	$r13,$r11
1c0034e4:	00001045 	clo.w	$r5,$r2
1c0034e8:	000064f8 	rdtimeh.w	$r24,$r7
1c0034ec:	0000117b 	clo.w	$r27,$r11
1c0034f0:	0000576a 	bitrev.d	$r10,$r27
1c0034f4:	00001846 	cto.w	$r6,$r2
1c0034f8:	000057ff 	bitrev.d	$r31,$r31
1c0034fc:	000045cc 	revh.d	$r12,$r14
1c003500:	0000282b 	cto.d	$r11,$r1
1c003504:	00007bde 	0x00007bde
1c003508:	00000317 	0x00000317
1c00350c:	00002d36 	ctz.d	$r22,$r9
1c003510:	00005dc6 	ext.w.b	$r6,$r14
1c003514:	000022f6 	clo.d	$r22,$r23
1c003518:	000009f0 	0x000009f0
1c00351c:	000021d3 	clo.d	$r19,$r14
1c003520:	00004a8f 	bitrev.4b	$r15,$r20
1c003524:	00001338 	clo.w	$r24,$r25
1c003528:	00001828 	cto.w	$r8,$r1
1c00352c:	00003516 	revb.4h	$r22,$r8
1c003530:	000064a6 	rdtimeh.w	$r6,$r5
1c003534:	00000afd 	0x00000afd
1c003538:	00003b03 	revb.2w	$r3,$r24
1c00353c:	00000801 	0x00000801
1c003540:	0000459c 	revh.d	$r28,$r12
1c003544:	00006032 	rdtimel.w	$r18,$r1
1c003548:	00000ed0 	0x00000ed0
1c00354c:	00004061 	revh.2w	$r1,$r3
1c003550:	00003e33 	revb.d	$r19,$r17
1c003554:	00002f79 	ctz.d	$r25,$r27
1c003558:	00005580 	bitrev.d	$r0,$r12
1c00355c:	0000026b 	0x0000026b
1c003560:	00006bd7 	rdtime.d	$r23,$r30
1c003564:	00002c47 	ctz.d	$r7,$r2
1c003568:	00002563 	clz.d	$r3,$r11
1c00356c:	00002cf5 	ctz.d	$r21,$r7
1c003570:	00003cdf 	revb.d	$r31,$r6
1c003574:	00007ea0 	0x00007ea0
1c003578:	00006692 	rdtimeh.w	$r18,$r20
1c00357c:	00001962 	cto.w	$r2,$r11
1c003580:	000029e4 	cto.d	$r4,$r15
1c003584:	00007b05 	0x00007b05
1c003588:	00005cda 	ext.w.b	$r26,$r6
1c00358c:	0000429a 	revh.2w	$r26,$r20
1c003590:	00003ec9 	revb.d	$r9,$r22
1c003594:	00003548 	revb.4h	$r8,$r10
1c003598:	00003a70 	revb.2w	$r16,$r19
1c00359c:	000036ad 	revb.4h	$r13,$r21
1c0035a0:	00003c5f 	revb.d	$r31,$r2
1c0035a4:	000038a4 	revb.2w	$r4,$r5
1c0035a8:	000037c5 	revb.4h	$r5,$r30
1c0035ac:	00001c0b 	ctz.w	$r11,$r0
1c0035b0:	000067ba 	rdtimeh.w	$r26,$r29
1c0035b4:	000001cb 	0x000001cb
1c0035b8:	000075fa 	0x000075fa
1c0035bc:	00002d7b 	ctz.d	$r27,$r11
1c0035c0:	000007a0 	0x000007a0
1c0035c4:	00004515 	revh.d	$r21,$r8
1c0035c8:	00000c07 	0x00000c07
1c0035cc:	00005447 	bitrev.d	$r7,$r2
1c0035d0:	00004abc 	bitrev.4b	$r28,$r21
1c0035d4:	00003912 	revb.2w	$r18,$r8
1c0035d8:	00007b88 	0x00007b88
1c0035dc:	000062a3 	rdtimel.w	$r3,$r21
1c0035e0:	00005bae 	ext.w.h	$r14,$r29
1c0035e4:	000032ee 	revb.2h	$r14,$r23
1c0035e8:	00005b12 	ext.w.h	$r18,$r24
1c0035ec:	000035d6 	revb.4h	$r22,$r14
1c0035f0:	00003ffa 	revb.d	$r26,$r31
1c0035f4:	00005431 	bitrev.d	$r17,$r1
1c0035f8:	00002345 	clo.d	$r5,$r26
1c0035fc:	00002e9f 	ctz.d	$r31,$r20
1c003600:	00000a2b 	0x00000a2b
1c003604:	00005e40 	ext.w.b	$r0,$r18
1c003608:	000066ad 	rdtimeh.w	$r13,$r21
1c00360c:	0000067a 	0x0000067a
1c003610:	00007301 	0x00007301
1c003614:	00000e61 	0x00000e61
1c003618:	000038cc 	revb.2w	$r12,$r6
1c00361c:	00007a96 	0x00007a96
1c003620:	00005ec1 	ext.w.b	$r1,$r22
1c003624:	0000107d 	clo.w	$r29,$r3
1c003628:	000035bf 	revb.4h	$r31,$r13
1c00362c:	00003ac9 	revb.2w	$r9,$r22
1c003630:	0000041f 	0x0000041f
1c003634:	00005b14 	ext.w.h	$r20,$r24
1c003638:	00003dbb 	revb.d	$r27,$r13
1c00363c:	00007f69 	0x00007f69
1c003640:	000064ad 	rdtimeh.w	$r13,$r5
1c003644:	0000455c 	revh.d	$r28,$r10
1c003648:	00006b4d 	rdtime.d	$r13,$r26
1c00364c:	00004665 	revh.d	$r5,$r19
1c003650:	00003d65 	revb.d	$r5,$r11
1c003654:	00006b36 	rdtime.d	$r22,$r25
1c003658:	000052ae 	bitrev.w	$r14,$r21
1c00365c:	0000659e 	rdtimeh.w	$r30,$r12
1c003660:	000028ea 	cto.d	$r10,$r7
1c003664:	00006a9a 	rdtime.d	$r26,$r20
1c003668:	0000732d 	0x0000732d
1c00366c:	00004680 	revh.d	$r0,$r20
1c003670:	00002e14 	ctz.d	$r20,$r16
1c003674:	00006b8c 	rdtime.d	$r12,$r28
1c003678:	0000717e 	0x0000717e
1c00367c:	0000283a 	cto.d	$r26,$r1
1c003680:	000018f0 	cto.w	$r16,$r7
1c003684:	00006a89 	rdtime.d	$r9,$r20
1c003688:	00001c32 	ctz.w	$r18,$r1
1c00368c:	0000485b 	bitrev.4b	$r27,$r2
1c003690:	00007ec6 	0x00007ec6
1c003694:	00002b89 	cto.d	$r9,$r28
1c003698:	00005046 	bitrev.w	$r6,$r2
1c00369c:	0000797c 	0x0000797c
1c0036a0:	00001351 	clo.w	$r17,$r26
1c0036a4:	00005b83 	ext.w.h	$r3,$r28
1c0036a8:	00002d65 	ctz.d	$r5,$r11
1c0036ac:	000076b4 	0x000076b4
1c0036b0:	00004acf 	bitrev.4b	$r15,$r22
1c0036b4:	00002cdd 	ctz.d	$r29,$r6
1c0036b8:	00000b1a 	0x00000b1a
1c0036bc:	00000826 	0x00000826
1c0036c0:	0000472e 	revh.d	$r14,$r25
1c0036c4:	00006c0c 	cpucfg	$r12,$r0
1c0036c8:	00005124 	bitrev.w	$r4,$r9
1c0036cc:	000045f3 	revh.d	$r19,$r15
1c0036d0:	0000036d 	0x0000036d
1c0036d4:	000040e4 	revh.2w	$r4,$r7
1c0036d8:	000010cc 	clo.w	$r12,$r6
1c0036dc:	00007134 	0x00007134
1c0036e0:	0000321b 	revb.2h	$r27,$r16
1c0036e4:	00004d99 	bitrev.8b	$r25,$r12
1c0036e8:	000032fc 	revb.2h	$r28,$r23
1c0036ec:	00001ac0 	cto.w	$r0,$r22
1c0036f0:	00006dff 	cpucfg	$r31,$r15
1c0036f4:	000043f0 	revh.2w	$r16,$r31
1c0036f8:	00006d1e 	cpucfg	$r30,$r8
1c0036fc:	00000ce9 	0x00000ce9
1c003700:	00005553 	bitrev.d	$r19,$r10
1c003704:	00006abb 	rdtime.d	$r27,$r21
1c003708:	00007080 	0x00007080
1c00370c:	00003f32 	revb.d	$r18,$r25
1c003710:	00001bb2 	cto.w	$r18,$r29
1c003714:	00006ae7 	rdtime.d	$r7,$r23
1c003718:	00000b65 	0x00000b65
1c00371c:	000065c3 	rdtimeh.w	$r3,$r14
1c003720:	00002823 	cto.d	$r3,$r1
1c003724:	00006e96 	cpucfg	$r22,$r20
1c003728:	00006529 	rdtimeh.w	$r9,$r9
1c00372c:	000037c5 	revb.4h	$r5,$r30
1c003730:	0000147a 	clz.w	$r26,$r3
1c003734:	00001642 	clz.w	$r2,$r18
1c003738:	000015f1 	clz.w	$r17,$r15
1c00373c:	000023a9 	clo.d	$r9,$r29
1c003740:	00006a72 	rdtime.d	$r18,$r19
1c003744:	0000055c 	0x0000055c
1c003748:	00001514 	clz.w	$r20,$r8
1c00374c:	00007996 	0x00007996
1c003750:	0000206f 	clo.d	$r15,$r3
1c003754:	000074f5 	0x000074f5
1c003758:	00003c4f 	revb.d	$r15,$r2
1c00375c:	0000259c 	clz.d	$r28,$r12
1c003760:	00005445 	bitrev.d	$r5,$r2
1c003764:	0000477e 	revh.d	$r30,$r27
1c003768:	0000463c 	revh.d	$r28,$r17
1c00376c:	00002d99 	ctz.d	$r25,$r12
1c003770:	00004772 	revh.d	$r18,$r27
1c003774:	00002c82 	ctz.d	$r2,$r4
1c003778:	00002b00 	cto.d	$r0,$r24

1c00377c <__CTOR_LIST__>:
	...

1c003784 <__CTOR_END__>:
	...

1c00378c <__DTOR_END__>:
__DTOR_END__():
1c00378c:	00000000 	0x00000000
1c003790:	1c003b54 	pcaddu12i	$r20,474(0x1da)
1c003794:	1c0127bc 	pcaddu12i	$r28,2365(0x93d)

Disassembly of section .eh_frame:

1c003798 <.eh_frame>:
1c003798:	0000000c 	0x0000000c
1c00379c:	00000000 	0x00000000
1c0037a0:	7c010003 	0x7c010003
1c0037a4:	00030c01 	0x00030c01
1c0037a8:	00000070 	0x00000070
1c0037ac:	00000014 	0x00000014
1c0037b0:	1c0003a0 	pcaddu12i	$r0,29(0x1d)
1c0037b4:	000002d8 	0x000002d8
1c0037b8:	00000404 	0x00000404
1c0037bc:	04300e00 	csrxchg	$r0,$r16,0xc03
1c0037c0:	00000028 	0x00000028
1c0037c4:	059a0181 	0x059a0181
1c0037c8:	0297069b 	addi.w	$r27,$r20,1473(0x5c1)
1c0037cc:	04990398 	csrxchg	$r24,$r28,0x2640
1c0037d0:	089d079c 	fnmadd.s	$f28,$f28,$f1,$f26
1c0037d4:	7004099e 	vsle.bu	$vr30,$vr12,$vr2
1c0037d8:	0a000001 	0x0a000001
1c0037dc:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
1c0037e0:	04d70000 	csrrd	$r0,0x35c0
1c0037e4:	00000004 	0x00000004
1c0037e8:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
1c0037ec:	04d90000 	csrrd	$r0,0x3640
1c0037f0:	00000004 	0x00000004
1c0037f4:	000404da 	alsl.w	$r26,$r6,$r1,0x1
1c0037f8:	04dc0000 	csrrd	$r0,0x3700
1c0037fc:	00000004 	0x00000004
1c003800:	000404dd 	alsl.w	$r29,$r6,$r1,0x1
1c003804:	04de0000 	csrrd	$r0,0x3780
1c003808:	00000008 	0x00000008
1c00380c:	000c04db 	bytepick.d	$r27,$r6,$r1,0x0
1c003810:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c003814:	00000404 	0x00000404
1c003818:	00000b00 	0x00000b00
1c00381c:	0000000c 	0x0000000c
1c003820:	00000088 	0x00000088
1c003824:	1c000680 	pcaddu12i	$r0,52(0x34)
1c003828:	00000328 	0x00000328
1c00382c:	00000070 	0x00000070
1c003830:	00000098 	0x00000098
1c003834:	1c0009b0 	pcaddu12i	$r16,77(0x4d)
1c003838:	00000330 	0x00000330
1c00383c:	00000804 	0x00000804
1c003840:	04200e00 	csrxchg	$r0,$r16,0x803
1c003844:	00000004 	0x00000004
1c003848:	14040398 	lu12i.w	$r24,8220(0x201c)
1c00384c:	99000000 	0x99000000
1c003850:	81059a04 	0x81059a04
1c003854:	04029701 	csrxchg	$r1,$r24,0xa5
1c003858:	0000019c 	0x0000019c
1c00385c:	0404c10a 	csrxchg	$r10,$r8,0x130
1c003860:	d7000000 	0xd7000000
1c003864:	00000404 	0x00000404
1c003868:	0404d800 	csrrd	$r0,0x136
1c00386c:	d9000000 	0xd9000000
1c003870:	00000404 	0x00000404
1c003874:	0404da00 	csrxchg	$r0,$r16,0x136
1c003878:	0e000000 	0x0e000000
1c00387c:	00040400 	alsl.w	$r0,$r0,$r1,0x1
1c003880:	040b0000 	csrrd	$r0,0x2c0
1c003884:	0000014c 	0x0000014c
1c003888:	d7c1000e 	0xd7c1000e
1c00388c:	04dad9d8 	csrxchg	$r24,$r14,0x36b6
1c003890:	00000004 	0x00000004
1c003894:	0181200e 	0x0181200e
1c003898:	03980297 	ori	$r23,$r20,0x600
1c00389c:	059a0499 	0x059a0499
1c0038a0:	00000058 	0x00000058
1c0038a4:	0000010c 	0x0000010c
1c0038a8:	1c000ce0 	pcaddu12i	$r0,103(0x67)
1c0038ac:	0000046c 	0x0000046c
1c0038b0:	00000404 	0x00000404
1c0038b4:	04200e00 	csrxchg	$r0,$r16,0x803
1c0038b8:	00000018 	0x00000018
1c0038bc:	02970181 	addi.w	$r1,$r12,1472(0x5c0)
1c0038c0:	04990398 	csrxchg	$r24,$r28,0x2640
1c0038c4:	069b059a 	0x069b059a
1c0038c8:	0002b804 	0x0002b804
1c0038cc:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c0038d0:	00000004 	0x00000004
1c0038d4:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c0038d8:	04d80000 	csrrd	$r0,0x3600
1c0038dc:	00000004 	0x00000004
1c0038e0:	000404d9 	alsl.w	$r25,$r6,$r1,0x1
1c0038e4:	04da0000 	csrrd	$r0,0x3680
1c0038e8:	00000004 	0x00000004
1c0038ec:	000c04db 	bytepick.d	$r27,$r6,$r1,0x0
1c0038f0:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c0038f4:	00000404 	0x00000404
1c0038f8:	00000b00 	0x00000b00
1c0038fc:	00000060 	0x00000060
1c003900:	00000168 	0x00000168
1c003904:	1c001150 	pcaddu12i	$r16,138(0x8a)
1c003908:	0000022c 	0x0000022c
1c00390c:	00000404 	0x00000404
1c003910:	04600e00 	csrxchg	$r0,$r16,0x1803
1c003914:	0000001c 	0x0000001c
1c003918:	09810d9a 	0x09810d9a
1c00391c:	0b980a97 	0x0b980a97
1c003920:	0e9b0c99 	0x0e9b0c99
1c003924:	b0040f9c 	0xb0040f9c
1c003928:	0a000000 	0x0a000000
1c00392c:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
1c003930:	04d70000 	csrrd	$r0,0x35c0
1c003934:	00000004 	0x00000004
1c003938:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
1c00393c:	04d90000 	csrrd	$r0,0x3640
1c003940:	00000004 	0x00000004
1c003944:	000404da 	alsl.w	$r26,$r6,$r1,0x1
1c003948:	04db0000 	csrrd	$r0,0x36c0
1c00394c:	00000004 	0x00000004
1c003950:	000804dc 	bytepick.w	$r28,$r6,$r1,0x0
1c003954:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c003958:	00000404 	0x00000404
1c00395c:	00000b00 	0x00000b00
1c003960:	00000028 	0x00000028
1c003964:	000001cc 	0x000001cc
1c003968:	1c00137c 	pcaddu12i	$r28,155(0x9b)
1c00396c:	00000028 	0x00000028
1c003970:	00000404 	0x00000404
1c003974:	04100e00 	csrxchg	$r0,$r16,0x403
1c003978:	00000004 	0x00000004
1c00397c:	18040199 	pcaddi	$r25,8204(0x200c)
1c003980:	d9000000 	0xd9000000
1c003984:	00000404 	0x00000404
1c003988:	00000e00 	0x00000e00
1c00398c:	00000028 	0x00000028
1c003990:	000001f8 	0x000001f8
1c003994:	1c0013a4 	pcaddu12i	$r4,157(0x9d)
1c003998:	00000024 	0x00000024
1c00399c:	00000404 	0x00000404
1c0039a0:	04100e00 	csrxchg	$r0,$r16,0x403
1c0039a4:	00000004 	0x00000004
1c0039a8:	14040199 	lu12i.w	$r25,8204(0x200c)
1c0039ac:	d9000000 	0xd9000000
1c0039b0:	00000404 	0x00000404
1c0039b4:	00000e00 	0x00000e00
1c0039b8:	00000040 	0x00000040
1c0039bc:	00000224 	0x00000224
1c0039c0:	1c0013c8 	pcaddu12i	$r8,158(0x9e)
1c0039c4:	00000074 	0x00000074
1c0039c8:	00000404 	0x00000404
1c0039cc:	04100e00 	csrxchg	$r0,$r16,0x403
1c0039d0:	00000010 	0x00000010
1c0039d4:	02970181 	addi.w	$r1,$r12,1472(0x5c0)
1c0039d8:	04990398 	csrxchg	$r24,$r28,0x2640
1c0039dc:	00004804 	bitrev.4b	$r4,$r0
1c0039e0:	0404c100 	csrxchg	$r0,$r8,0x130
1c0039e4:	d7000000 	0xd7000000
1c0039e8:	00000404 	0x00000404
1c0039ec:	0404d800 	csrrd	$r0,0x136
1c0039f0:	d9000000 	0xd9000000
1c0039f4:	00000804 	0x00000804
1c0039f8:	00000e00 	0x00000e00
1c0039fc:	00000028 	0x00000028
1c003a00:	00000268 	0x00000268
1c003a04:	1c00143c 	pcaddu12i	$r28,161(0xa1)
1c003a08:	0000002c 	0x0000002c
1c003a0c:	00000404 	0x00000404
1c003a10:	04100e00 	csrxchg	$r0,$r16,0x403
1c003a14:	00000004 	0x00000004
1c003a18:	18040181 	pcaddi	$r1,8204(0x200c)
1c003a1c:	c1000000 	0xc1000000
1c003a20:	00000804 	0x00000804
1c003a24:	00000e00 	0x00000e00
1c003a28:	00000048 	0x00000048
1c003a2c:	00000294 	0x00000294
1c003a30:	1c001468 	pcaddu12i	$r8,163(0xa3)
1c003a34:	000000e8 	0x000000e8
1c003a38:	00000404 	0x00000404
1c003a3c:	04600e00 	csrxchg	$r0,$r16,0x1803
1c003a40:	00000010 	0x00000010
1c003a44:	01810297 	0x01810297
1c003a48:	04990398 	csrxchg	$r24,$r28,0x2640
1c003a4c:	00008804 	0x00008804
1c003a50:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c003a54:	00000004 	0x00000004
1c003a58:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c003a5c:	04d80000 	csrrd	$r0,0x3600
1c003a60:	00000004 	0x00000004
1c003a64:	000804d9 	bytepick.w	$r25,$r6,$r1,0x0
1c003a68:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c003a6c:	00000404 	0x00000404
1c003a70:	00000b00 	0x00000b00
1c003a74:	00000028 	0x00000028
1c003a78:	000002e0 	0x000002e0
1c003a7c:	1c001550 	pcaddu12i	$r16,170(0xaa)
1c003a80:	0000001c 	0x0000001c
1c003a84:	00000404 	0x00000404
1c003a88:	04100e00 	csrxchg	$r0,$r16,0x403
1c003a8c:	00000004 	0x00000004
1c003a90:	0c040199 	0x0c040199
1c003a94:	d9000000 	0xd9000000
1c003a98:	00000404 	0x00000404
1c003a9c:	00000e00 	0x00000e00
1c003aa0:	0000000c 	0x0000000c
1c003aa4:	0000030c 	0x0000030c
1c003aa8:	1c00156c 	pcaddu12i	$r12,171(0xab)
1c003aac:	00000004 	0x00000004
1c003ab0:	0000000c 	0x0000000c
1c003ab4:	0000031c 	0x0000031c
1c003ab8:	1c001570 	pcaddu12i	$r16,171(0xab)
1c003abc:	00000008 	0x00000008
1c003ac0:	00000028 	0x00000028
1c003ac4:	0000032c 	0x0000032c
1c003ac8:	1c001578 	pcaddu12i	$r24,171(0xab)
1c003acc:	00000084 	0x00000084
1c003ad0:	00000404 	0x00000404
1c003ad4:	04100e00 	csrxchg	$r0,$r16,0x403
1c003ad8:	00000004 	0x00000004
1c003adc:	60040199 	blt	$r12,$r25,1024(0x400) # 1c003edc <result+0x388>
1c003ae0:	d9000000 	0xd9000000
1c003ae4:	00001804 	cto.w	$r4,$r0
1c003ae8:	00000e00 	0x00000e00
1c003aec:	0000000c 	0x0000000c
1c003af0:	00000358 	0x00000358
1c003af4:	1c0015fc 	pcaddu12i	$r28,175(0xaf)
1c003af8:	00000004 	0x00000004
1c003afc:	00000028 	0x00000028
1c003b00:	00000368 	0x00000368
1c003b04:	1c001600 	pcaddu12i	$r0,176(0xb0)
1c003b08:	00000024 	0x00000024
1c003b0c:	00000404 	0x00000404
1c003b10:	04100e00 	csrxchg	$r0,$r16,0x403
1c003b14:	00000004 	0x00000004
1c003b18:	10040199 	addu16i.d	$r25,$r12,256(0x100)
1c003b1c:	d9000000 	0xd9000000
1c003b20:	00000804 	0x00000804
1c003b24:	00000e00 	0x00000e00
1c003b28:	00000028 	0x00000028
1c003b2c:	00000394 	0x00000394
1c003b30:	1c001624 	pcaddu12i	$r4,177(0xb1)
1c003b34:	00000030 	0x00000030
1c003b38:	00000404 	0x00000404
1c003b3c:	04100e00 	csrxchg	$r0,$r16,0x403
1c003b40:	00000004 	0x00000004
1c003b44:	10040199 	addu16i.d	$r25,$r12,256(0x100)
1c003b48:	d9000000 	0xd9000000
1c003b4c:	00001404 	clz.w	$r4,$r0
1c003b50:	00000e00 	0x00000e00

Disassembly of section .bss:

1c003b54 <result>:
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	0x0000001c
   4:	00000002 	0x00000002
   8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
   c:	00000000 	0x00000000
  10:	1c001150 	pcaddu12i	$r16,138(0x8a)
  14:	0000022c 	0x0000022c
	...
  20:	0000001c 	0x0000001c
  24:	03160002 	lu52i.d	$r2,$r0,1408(0x580)
  28:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  2c:	00000000 	0x00000000
  30:	1c00137c 	pcaddu12i	$r28,155(0x9b)
  34:	0000004c 	0x0000004c
	...
  40:	0000001c 	0x0000001c
  44:	04860002 	csrrd	$r2,0x2180
  48:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  4c:	00000000 	0x00000000
  50:	1c0013c8 	pcaddu12i	$r8,158(0x9e)
  54:	000000a0 	0x000000a0
	...
  60:	0000001c 	0x0000001c
  64:	06a00002 	0x06a00002
  68:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  6c:	00000000 	0x00000000
  70:	1c001468 	pcaddu12i	$r8,163(0xa3)
  74:	000000e8 	0x000000e8
	...
  80:	0000001c 	0x0000001c
  84:	08ba0002 	0x08ba0002
  88:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  8c:	00000000 	0x00000000
  90:	1c001550 	pcaddu12i	$r16,170(0xaa)
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
  18:	1c001150 	pcaddu12i	$r16,138(0x8a)
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
  8c:	1c00137c 	pcaddu12i	$r28,155(0x9b)
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
  b8:	1c0013a4 	pcaddu12i	$r4,157(0x9d)
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
  f4:	1c0013c8 	pcaddu12i	$r8,158(0x9e)
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
 138:	1c00143c 	pcaddu12i	$r28,161(0xa1)
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
 174:	1c001468 	pcaddu12i	$r8,163(0xa3)
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
 1d0:	1c001550 	pcaddu12i	$r16,170(0xaa)
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
 1fc:	1c00156c 	pcaddu12i	$r12,171(0xab)
 200:	00000004 	0x00000004
 204:	0000000c 	0x0000000c
 208:	000001b8 	0x000001b8
 20c:	1c001570 	pcaddu12i	$r16,171(0xab)
 210:	00000008 	0x00000008
 214:	00000028 	0x00000028
 218:	000001b8 	0x000001b8
 21c:	1c001578 	pcaddu12i	$r24,171(0xab)
 220:	00000084 	0x00000084
 224:	00000404 	0x00000404
 228:	04100e00 	csrxchg	$r0,$r16,0x403
 22c:	00000004 	0x00000004
 230:	60040199 	blt	$r12,$r25,1024(0x400) # 630 <data_size-0x1b14>
 234:	d9000000 	0xd9000000
 238:	00001804 	cto.w	$r4,$r0
 23c:	00000e00 	0x00000e00
 240:	0000000c 	0x0000000c
 244:	000001b8 	0x000001b8
 248:	1c0015fc 	pcaddu12i	$r28,175(0xaf)
 24c:	00000004 	0x00000004
 250:	00000028 	0x00000028
 254:	000001b8 	0x000001b8
 258:	1c001600 	pcaddu12i	$r0,176(0xb0)
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
 284:	1c001624 	pcaddu12i	$r4,177(0xb1)
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
  18:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 12d38 <data_size+0x10bf4>
  1c:	3d696261 	0x3d696261
  20:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
  24:	2d207332 	0x2d207332
  28:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7288 <_stack+0xe3fe4acc>
  2c:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff6c68 <_stack+0xe3fe44ac>
  30:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 1679c <data_size+0x14658>
  34:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
  38:	2d207232 	0x2d207232
  3c:	7570666d 	0x7570666d
  40:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe6fac <_stack+0xe3fd47f0>
  44:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 12d64 <data_size+0x10c20>
  48:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 6fb4 <data_size+0x4e70>
  4c:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe3db8 <_stack+0xe3fd15fc>
  50:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 16dc0 <data_size+0x14c7c>
  54:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 12d74 <data_size+0x10c30>
  58:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 16ecc <data_size+0x14d88>
  5c:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff6fc8 <_stack+0xe3fe480c>
  60:	7261676e 	0x7261676e
  64:	32336863 	0x32336863
  68:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff2d88 <_stack+0xe3fe05cc>
  6c:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
  70:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe669c <_stack+0xe3fd3ee0>
  74:	75622d6f 	0x75622d6f
  78:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 174e4 <data_size+0x153a0>
  7c:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe2d9c <_stack+0xe3fd05e0>
  80:	702d6f6e 	0x702d6f6e
  84:	0c006369 	0x0c006369
  88:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe69f8 <_stack+0xe3fd423c>
  8c:	632e6674 	blt	$r19,$r20,-53660(0x32e64) # ffff2ef0 <_stack+0xe3fe0734>
  90:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff68bc <_stack+0xe3fe4100>
  94:	772f656d 	0x772f656d
  98:	772f7477 	0x772f7477
  9c:	2f6b726f 	0x2f6b726f
  a0:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7304 <_stack+0xe3fd4b48>
  a4:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7608 <_stack+0xe3fd4e4c>
  a8:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 16cd4 <data_size+0x14b90>
  ac:	11500062 	addu16i.d	$r2,$r3,21504(0x5400)
  b0:	022c1c00 	slti	$r0,$r0,-1273(0xb07)
  b4:	00000000 	0x00000000
  b8:	04020000 	csrrd	$r0,0x80
  bc:	75070403 	xvssran.hu.w	$xr3,$xr0,$xr1
  c0:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff6a30 <_stack+0xe3fe4274>
  c4:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
  c8:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
  cc:	6c070403 	bgeu	$r0,$r3,1796(0x704) # 7d0 <data_size-0x1974>
  d0:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
  d4:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17440 <data_size+0x152fc>
  d8:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6644 <data_size+0x4500>
  dc:	746e6920 	0x746e6920
  e0:	72700400 	0x72700400
  e4:	66746e69 	bge	$r19,$r9,-101268(0x2746c) # fffe7550 <_stack+0xe3fd4d94>
  e8:	05010100 	0x05010100
  ec:	000002d1 	0x000002d1
  f0:	1c001150 	pcaddu12i	$r16,138(0x8a)
  f4:	0000022c 	0x0000022c
  f8:	02d19c01 	addi.d	$r1,$r0,1127(0x467)
  fc:	66050000 	bge	$r0,$r0,-129792(0x20500) # fffe05fc <_stack+0xe3fcde40>
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
 158:	61676109 	blt	$r8,$r9,92000(0x16760) # 168b8 <data_size+0x14774>
 15c:	01006e69 	0x01006e69
 160:	11fc0110 	addu16i.d	$r16,$r8,32512(0x7f00)
 164:	180a1c00 	pcaddi	$r0,20704(0x50e0)
 168:	79000000 	0x79000000
 16c:	0b000002 	0x0b000002
 170:	73747570 	0x73747570
 174:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe6ae4 <_stack+0xe3fd4328>
 178:	14010067 	lu12i.w	$r7,2051(0x803)
 17c:	0002d105 	0x0002d105
 180:	00018700 	asrtgt.d	$r24,$r1
 184:	0c000600 	0x0c000600
 188:	00000000 	0x00000000
 18c:	d1051901 	0xd1051901
 190:	99000002 	0x99000002
 194:	06000001 	cacop	0x1,$r0,0
 198:	72700b00 	0x72700b00
 19c:	62746e69 	blt	$r19,$r9,-101268(0x2746c) # fffe7608 <_stack+0xe3fd4e4c>
 1a0:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
 1a4:	d1051e01 	0xd1051e01
 1a8:	b1000002 	0xb1000002
 1ac:	06000001 	cacop	0x1,$r0,0
 1b0:	12a00d00 	addu16i.d	$r0,$r8,-22525(0xa803)
 1b4:	02f11c00 	addi.d	$r0,$r0,-953(0xc47)
 1b8:	01c90000 	0x01c90000
 1bc:	010e0000 	0x010e0000
 1c0:	0e320156 	0x0e320156
 1c4:	30015701 	0x30015701
 1c8:	12bc0f00 	addu16i.d	$r0,$r24,-20733(0xaf03)
 1cc:	02fd1c00 	addi.d	$r0,$r0,-185(0xf47)
 1d0:	d00d0000 	0xd00d0000
 1d4:	f11c0012 	0xf11c0012
 1d8:	ea000002 	0xea000002
 1dc:	0e000001 	0x0e000001
 1e0:	3a015601 	0x3a015601
 1e4:	0157010e 	0x0157010e
 1e8:	ec0d0031 	0xec0d0031
 1ec:	f11c0012 	0xf11c0012
 1f0:	02000002 	slti	$r2,$r0,0
 1f4:	0e000002 	0x0e000002
 1f8:	3a015601 	0x3a015601
 1fc:	0157010e 	0x0157010e
 200:	080d0030 	0x080d0030
 204:	f11c0013 	0xf11c0013
 208:	1b000002 	pcalau12i	$r2,-524288(0x80000)
 20c:	0e000002 	0x0e000002
 210:	8b025601 	0x8b025601
 214:	57010e00 	bl	-134020852(0x803010c) # f8030320 <_stack+0xdc01db64>
 218:	0d003001 	fsel	$f1,$f0,$f12,$fcc0
 21c:	1c001324 	pcaddu12i	$r4,153(0x99)
 220:	000002f1 	0x000002f1
 224:	00000233 	0x00000233
 228:	0156010e 	0x0156010e
 22c:	57010e40 	bl	-117243636(0x903010c) # f9030338 <_stack+0xdd01db7c>
 230:	0f003001 	0x0f003001
 234:	1c001340 	pcaddu12i	$r0,154(0x9a)
 238:	00000309 	0x00000309
 23c:	0013540d 	maskeqz	$r13,$r0,$r21
 240:	0002f11c 	0x0002f11c
 244:	00025400 	0x00025400
 248:	56010e00 	bl	-134086388(0x802010c) # f8020354 <_stack+0xdc00db98>
 24c:	010e3a01 	0x010e3a01
 250:	00300157 	0x00300157
 254:	0013680d 	maskeqz	$r13,$r0,$r26
 258:	0002fd1c 	0x0002fd1c
 25c:	00026800 	0x00026800
 260:	54010e00 	bl	-134217460(0x800010c) # f800036c <_stack+0xdbfedbb0>
 264:	00250802 	crc.w.w.w	$r2,$r0,$r2
 268:	00137810 	maskeqz	$r16,$r0,$r30
 26c:	0002fd1c 	0x0002fd1c
 270:	54010e00 	bl	-134217460(0x800010c) # f800037c <_stack+0xdbfedbc0>
 274:	00250802 	crc.w.w.w	$r2,$r0,$r2
 278:	00001100 	clo.w	$r0,$r8
 27c:	000c0000 	bytepick.d	$r0,$r0,$r0,0x0
 280:	01000000 	0x01000000
 284:	02d10519 	addi.d	$r25,$r8,1089(0x441)
 288:	02900000 	addi.w	$r0,$r0,1024(0x400)
 28c:	00060000 	alsl.wu	$r0,$r0,$r0,0x1
 290:	0011dc12 	sub.d	$r18,$r0,$r23
 294:	0000141c 	clz.w	$r28,$r0
 298:	0002bf00 	0x0002bf00
 29c:	00000c00 	0x00000c00
 2a0:	19010000 	pcaddi	$r0,-522240(0x80800)
 2a4:	0002d105 	0x0002d105
 2a8:	0002af00 	0x0002af00
 2ac:	10000600 	addu16i.d	$r0,$r16,1(0x1)
 2b0:	1c0011e4 	pcaddu12i	$r4,143(0x8f)
 2b4:	000002fd 	0x000002fd
 2b8:	0154010e 	0x0154010e
 2bc:	1000003d 	addu16i.d	$r29,$r1,0
 2c0:	1c0011bc 	pcaddu12i	$r28,141(0x8d)
 2c4:	000002fd 	0x000002fd
 2c8:	0254010e 	sltui	$r14,$r8,1280(0x500)
 2cc:	00000087 	0x00000087
 2d0:	05040300 	0x05040300
 2d4:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
 2d8:	02e60413 	addi.d	$r19,$r0,-1663(0x981)
 2dc:	01030000 	fsub.d	$f0,$f0,$f0
 2e0:	61686306 	blt	$r24,$r6,92256(0x16860) # 16b40 <data_size+0x149fc>
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
 330:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe649c <_stack+0xe3fd3ce0>
 334:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 6c70 <data_size+0x4b2c>
 338:	73323370 	0x73323370
 33c:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 17068 <data_size+0x14f24>
 340:	3d686372 	0x3d686372
 344:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe72b0 <_stack+0xe3fd4af4>
 348:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff75a8 <_stack+0xe3fe4dec>
 34c:	72323368 	0x72323368
 350:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe707c <_stack+0xe3fd48c0>
 354:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe40c8 <_stack+0xe3fd190c>
 358:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
 35c:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 166c8 <data_size+0x14584>
 360:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 68c4 <data_size+0x4780>
 364:	726f6e3d 	0x726f6e3d
 368:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
 36c:	75746d2d 	0x75746d2d
 370:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 40d4 <data_size+0x1f90>
 374:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff71e0 <_stack+0xe3fe4a24>
 378:	68637261 	bltu	$r19,$r1,25456(0x6370) # 66e8 <data_size+0x45a4>
 37c:	20723233 	ll.w	$r19,$r17,29232(0x7230)
 380:	2d20672d 	0x2d20672d
 384:	2d20324f 	0x2d20324f
 388:	2d6f6e66 	0x2d6f6e66
 38c:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 6d00 <data_size+0x4bbc>
 390:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
 394:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff71f8 <_stack+0xe3fe4a3c>
 398:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff6d08 <_stack+0xe3fe454c>
 39c:	75700c00 	0x75700c00
 3a0:	61686374 	blt	$r27,$r20,92256(0x16860) # 16c00 <data_size+0x14abc>
 3a4:	00632e72 	bstrins.w	$r18,$r19,0x3,0xb
 3a8:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 17310 <data_size+0x151cc>
 3ac:	77772f65 	0x77772f65
 3b0:	6f772f74 	bgeu	$r27,$r20,-35028(0x3772c) # ffff7adc <_stack+0xe3fe5320>
 3b4:	702f6b72 	vaddwev.d.wu	$vr18,$vr27,$vr26
 3b8:	5f667265 	bne	$r19,$r5,-39312(0x36670) # ffff6a28 <_stack+0xe3fe426c>
 3bc:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff7230 <_stack+0xe3fe4a74>
 3c0:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe6d2c <_stack+0xe3fd4570>
 3c4:	00137c00 	maskeqz	$r0,$r0,$r31
 3c8:	00004c1c 	bitrev.8b	$r28,$r0
 3cc:	00047500 	alsl.w	$r0,$r8,$r29,0x1
 3d0:	07040200 	0x07040200
 3d4:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17740 <data_size+0x155fc>
 3d8:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6944 <data_size+0x4800>
 3dc:	746e6920 	0x746e6920
 3e0:	07040200 	0x07040200
 3e4:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff7250 <_stack+0xe3fe4a94>
 3e8:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
 3ec:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 17250 <data_size+0x1510c>
 3f0:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe6d10 <_stack+0xe3fd4554>
 3f4:	1c030074 	pcaddu12i	$r20,6147(0x1803)
 3f8:	01000000 	0x01000000
 3fc:	f8010607 	0xf8010607
 400:	04000000 	csrrd	$r0,0x0
 404:	07010063 	0x07010063
 408:	0000f806 	0x0000f806
 40c:	04020000 	csrrd	$r0,0x80
 410:	746e6905 	0x746e6905
 414:	75700500 	0x75700500
 418:	61686374 	blt	$r27,$r20,92256(0x16860) # 16c78 <data_size+0x14b34>
 41c:	01010072 	fadd.d	$f18,$f3,$f0
 420:	0000f805 	0x0000f805
 424:	00137c00 	maskeqz	$r0,$r0,$r31
 428:	0000281c 	cto.d	$r28,$r0
 42c:	589c0100 	beq	$r8,$r0,39936(0x9c00) # a02c <data_size+0x7ee8>
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
 458:	1c00137c 	pcaddu12i	$r28,155(0x9b)
 45c:	00000030 	0x00000030
 460:	0a010301 	0x0a010301
 464:	000000ed 	0x000000ed
 468:	000001f1 	0x000001f1
 46c:	e00b0000 	0xe00b0000
 470:	a4000000 	0xa4000000
 474:	241c0013 	ldptr.w	$r19,$r0,7168(0x1c00)
 478:	01000000 	0x01000000
 47c:	00ed0c9c 	bstrpick.d	$r28,$r4,0x2d,0x3
 480:	54010000 	bl	256(0x100) # 580 <data_size-0x1bc4>
 484:	02160000 	slti	$r0,$r0,1408(0x580)
 488:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 48c:	000001df 	0x000001df
 490:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
 494:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
 498:	2e382037 	0x2e382037
 49c:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
 4a0:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe660c <_stack+0xe3fd3e50>
 4a4:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 6de0 <data_size+0x4c9c>
 4a8:	73323370 	0x73323370
 4ac:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 171d8 <data_size+0x15094>
 4b0:	3d686372 	0x3d686372
 4b4:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7420 <_stack+0xe3fd4c64>
 4b8:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7718 <_stack+0xe3fe4f5c>
 4bc:	72323368 	0x72323368
 4c0:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe71ec <_stack+0xe3fd4a30>
 4c4:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe4238 <_stack+0xe3fd1a7c>
 4c8:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
 4cc:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 16838 <data_size+0x146f4>
 4d0:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 6a34 <data_size+0x48f0>
 4d4:	726f6e3d 	0x726f6e3d
 4d8:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
 4dc:	75746d2d 	0x75746d2d
 4e0:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 4244 <data_size+0x2100>
 4e4:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7350 <_stack+0xe3fe4b94>
 4e8:	68637261 	bltu	$r19,$r1,25456(0x6370) # 6858 <data_size+0x4714>
 4ec:	20723233 	ll.w	$r19,$r17,29232(0x7230)
 4f0:	2d20672d 	0x2d20672d
 4f4:	2d20324f 	0x2d20324f
 4f8:	2d6f6e66 	0x2d6f6e66
 4fc:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 6e70 <data_size+0x4d2c>
 500:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
 504:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff7368 <_stack+0xe3fe4bac>
 508:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff6e78 <_stack+0xe3fe46bc>
 50c:	75700c00 	0x75700c00
 510:	632e7374 	blt	$r27,$r20,-53648(0x32e70) # ffff3380 <_stack+0xe3fe0bc4>
 514:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff6d40 <_stack+0xe3fe4584>
 518:	772f656d 	0x772f656d
 51c:	772f7477 	0x772f7477
 520:	2f6b726f 	0x2f6b726f
 524:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7788 <_stack+0xe3fd4fcc>
 528:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7a8c <_stack+0xe3fd52d0>
 52c:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 17158 <data_size+0x15014>
 530:	13c80062 	addu16i.d	$r2,$r3,-3584(0xf200)
 534:	00a01c00 	bstrins.d	$r0,$r0,0x20,0x7
 538:	05270000 	0x05270000
 53c:	04020000 	csrrd	$r0,0x80
 540:	736e7507 	vssrarni.du.q	$vr7,$vr8,0x1d
 544:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 173a8 <data_size+0x15264>
 548:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe6e68 <_stack+0xe3fd46ac>
 54c:	04020074 	csrxchg	$r20,$r3,0x80
 550:	6e6f6c07 	bgeu	$r0,$r7,-102548(0x26f6c) # fffe74bc <_stack+0xe3fd4d00>
 554:	6e752067 	bgeu	$r3,$r7,-101088(0x27520) # fffe7a74 <_stack+0xe3fd52b8>
 558:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6cc0 <_stack+0xe3fd4504>
 55c:	69206465 	bltu	$r3,$r5,73828(0x12064) # 125c0 <data_size+0x1047c>
 560:	0300746e 	lu52i.d	$r14,$r3,29(0x1d)
 564:	73747570 	0x73747570
 568:	050e0100 	0x050e0100
 56c:	00000150 	0x00000150
 570:	1c00143c 	pcaddu12i	$r28,161(0xa1)
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
 59c:	48070006 	bceqz	$fcc0,1574656(0x180700) # 180c9c <data_size+0x17eb58>
 5a0:	651c0014 	bge	$r0,$r20,72704(0x11c00) # 121a0 <data_size+0x1005c>
 5a4:	2d000001 	0x2d000001
 5a8:	08000001 	0x08000001
 5ac:	f3035401 	0xf3035401
 5b0:	07005401 	0x07005401
 5b4:	1c001450 	pcaddu12i	$r16,162(0xa2)
 5b8:	0000020d 	0x0000020d
 5bc:	00000140 	0x00000140
 5c0:	01540108 	0x01540108
 5c4:	5809003d 	beq	$r1,$r29,2304(0x900) # ec4 <data_size-0x1280>
 5c8:	0d1c0014 	vbitsel.v	$vr20,$vr0,$vr0,$vr24
 5cc:	08000002 	0x08000002
 5d0:	3a015401 	0x3a015401
 5d4:	04020000 	csrrd	$r0,0x80
 5d8:	746e6905 	0x746e6905
 5dc:	5d040a00 	bne	$r16,$r0,66568(0x10408) # 109e4 <data_size+0xe8a0>
 5e0:	02000001 	slti	$r1,$r0,0
 5e4:	68630601 	bltu	$r16,$r1,25348(0x6304) # 68e8 <data_size+0x47a4>
 5e8:	03007261 	lu52i.d	$r1,$r19,28(0x1c)
 5ec:	73747570 	0x73747570
 5f0:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe6f60 <_stack+0xe3fd47a4>
 5f4:	01010067 	fadd.d	$f7,$f3,$f0
 5f8:	00015005 	0x00015005
 5fc:	0013c800 	masknez	$r0,$r0,$r18
 600:	0000741c 	0x0000741c
 604:	0d9c0100 	0x0d9c0100
 608:	04000002 	csrrd	$r2,0x0
 60c:	01010073 	fadd.d	$f19,$f3,$f0
 610:	00015715 	0x00015715
 614:	00022500 	0x00022500
 618:	00630b00 	bstrins.w	$r0,$r24,0x3,0x2
 61c:	5d060301 	bne	$r24,$r1,67072(0x10600) # 10c1c <data_size+0xead8>
 620:	68000001 	bltu	$r0,$r1,0 # 620 <data_size-0x1b24>
 624:	0c000002 	0x0c000002
 628:	00000048 	0x00000048
 62c:	00002805 	cto.d	$r5,$r0
 630:	10060100 	addu16i.d	$r0,$r8,384(0x180)
 634:	00000150 	0x00000150
 638:	000001b8 	0x000001b8
 63c:	080d0006 	0x080d0006
 640:	081c0014 	fmadd.s	$f20,$f0,$f0,$f24
 644:	e7000000 	0xe7000000
 648:	05000001 	0x05000001
 64c:	00000028 	0x00000028
 650:	50100601 	b	-133951484(0x8041004) # f8041654 <_stack+0xdc02ee98>
 654:	d7000001 	0xd7000001
 658:	06000001 	cacop	0x1,$r0,0
 65c:	14100900 	lu12i.w	$r0,32840(0x8048)
 660:	020d1c00 	slti	$r0,$r0,839(0x347)
 664:	01080000 	0x01080000
 668:	003d0154 	0x003d0154
 66c:	13f80700 	addu16i.d	$r0,$r24,-511(0xfe01)
 670:	020d1c00 	slti	$r0,$r0,839(0x347)
 674:	01fb0000 	0x01fb0000
 678:	01080000 	0x01080000
 67c:	00870254 	bstrins.d	$r20,$r18,0x7,0x0
 680:	14180900 	lu12i.w	$r0,49224(0xc048)
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
 6b8:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 133d8 <data_size+0x11294>
 6bc:	3d696261 	0x3d696261
 6c0:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
 6c4:	2d207332 	0x2d207332
 6c8:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7928 <_stack+0xe3fe516c>
 6cc:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff7308 <_stack+0xe3fe4b4c>
 6d0:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 16e3c <data_size+0x14cf8>
 6d4:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
 6d8:	2d207232 	0x2d207232
 6dc:	7570666d 	0x7570666d
 6e0:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe764c <_stack+0xe3fd4e90>
 6e4:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 13404 <data_size+0x112c0>
 6e8:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 7654 <data_size+0x5510>
 6ec:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe4458 <_stack+0xe3fd1c9c>
 6f0:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 17460 <data_size+0x1531c>
 6f4:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 13414 <data_size+0x112d0>
 6f8:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 1756c <data_size+0x15428>
 6fc:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff7668 <_stack+0xe3fe4eac>
 700:	7261676e 	0x7261676e
 704:	32336863 	0x32336863
 708:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff3428 <_stack+0xe3fe0c6c>
 70c:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
 710:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe6d3c <_stack+0xe3fd4580>
 714:	75622d6f 	0x75622d6f
 718:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 17b84 <data_size+0x15a40>
 71c:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe343c <_stack+0xe3fd0c80>
 720:	702d6f6e 	0x702d6f6e
 724:	0c006369 	0x0c006369
 728:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe7098 <_stack+0xe3fd48dc>
 72c:	73616274 	vssrani.w.d	$vr20,$vr19,0x18
 730:	00632e65 	bstrins.w	$r5,$r19,0x3,0xb
 734:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 1769c <data_size+0x15558>
 738:	77772f65 	0x77772f65
 73c:	6f772f74 	bgeu	$r27,$r20,-35028(0x3772c) # ffff7e68 <_stack+0xe3fe56ac>
 740:	702f6b72 	vaddwev.d.wu	$vr18,$vr27,$vr26
 744:	5f667265 	bne	$r19,$r5,-39312(0x36670) # ffff6db4 <_stack+0xe3fe45f8>
 748:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff75bc <_stack+0xe3fe4e00>
 74c:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe70b8 <_stack+0xe3fd48fc>
 750:	00146800 	nor	$r0,$r0,$r26
 754:	0000e81c 	0x0000e81c
 758:	00069000 	alsl.wu	$r0,$r0,$r4,0x2
 75c:	07040200 	0x07040200
 760:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17acc <data_size+0x15988>
 764:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6cd0 <data_size+0x4b8c>
 768:	746e6920 	0x746e6920
 76c:	07040200 	0x07040200
 770:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff75dc <_stack+0xe3fe4e20>
 774:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
 778:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 175dc <data_size+0x15498>
 77c:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe709c <_stack+0xe3fd48e0>
 780:	70030074 	vsle.w	$vr20,$vr3,$vr0
 784:	746e6972 	0x746e6972
 788:	65736162 	bge	$r11,$r2,95072(0x17360) # 17ae8 <data_size+0x159a4>
 78c:	05010100 	0x05010100
 790:	000001e2 	0x000001e2
 794:	1c001468 	pcaddu12i	$r8,163(0xa3)
 798:	000000e8 	0x000000e8
 79c:	01e29c01 	0x01e29c01
 7a0:	76040000 	0x76040000
 7a4:	14010100 	lu12i.w	$r0,2056(0x808)
 7a8:	000001e9 	0x000001e9
 7ac:	0000027b 	0x0000027b
 7b0:	01007704 	0x01007704
 7b4:	01e21a01 	0x01e21a01
 7b8:	02cb0000 	addi.d	$r0,$r0,704(0x2c0)
 7bc:	62040000 	blt	$r0,$r0,-130048(0x20400) # fffe0bbc <_stack+0xe3fce400>
 7c0:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
 7c4:	e2200101 	0xe2200101
 7c8:	0f000001 	0x0f000001
 7cc:	04000003 	csrrd	$r3,0x0
 7d0:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6f38 <_stack+0xe3fd477c>
 7d4:	29010100 	st.b	$r0,$r8,64(0x40)
 7d8:	000001e2 	0x000001e2
 7dc:	00000353 	0x00000353
 7e0:	01006905 	0x01006905
 7e4:	01e20603 	0x01e20603
 7e8:	03980000 	ori	$r0,$r0,0x600
 7ec:	6a050000 	bltu	$r0,$r0,-129792(0x20500) # fffe0cec <_stack+0xe3fce530>
 7f0:	08030100 	0x08030100
 7f4:	000001e2 	0x000001e2
 7f8:	000003eb 	0x000003eb
 7fc:	01006305 	0x01006305
 800:	01e20604 	0x01e20604
 804:	04380000 	csrrd	$r0,0xe00
 808:	62060000 	blt	$r0,$r0,-129536(0x20600) # fffe0e08 <_stack+0xe3fce64c>
 80c:	01006675 	0x01006675
 810:	01f50705 	0x01f50705
 814:	91030000 	0x91030000
 818:	76057fb0 	0x76057fb0
 81c:	65756c61 	bge	$r3,$r1,95596(0x1756c) # 17d88 <data_size+0x15c44>
 820:	10060100 	addu16i.d	$r0,$r8,384(0x180)
 824:	000000cd 	0x000000cd
 828:	0000044b 	0x0000044b
 82c:	00152407 	or	$r7,$r0,$r9
 830:	0000201c 	clo.d	$r28,$r0
 834:	0001bc00 	asrtgt.d	$r0,$r15
 838:	00300800 	0x00300800
 83c:	0a010000 	0x0a010000
 840:	0001e202 	0x0001e202
 844:	0001ab00 	asrtgt.d	$r24,$r10
 848:	0a000900 	0x0a000900
 84c:	1c001534 	pcaddu12i	$r20,169(0xa9)
 850:	0000020d 	0x0000020d
 854:	0254010b 	sltui	$r11,$r8,1280(0x500)
 858:	00002d08 	ctz.d	$r8,$r8
 85c:	0014d00c 	and	$r12,$r0,$r20
 860:	00002c1c 	ctz.d	$r28,$r0
 864:	00300800 	0x00300800
 868:	0a010000 	0x0a010000
 86c:	0001e202 	0x0001e202
 870:	0001d700 	asrtgt.d	$r24,$r21
 874:	0d000900 	fsel	$f0,$f8,$f2,$fcc0
 878:	1c0014fc 	pcaddu12i	$r28,167(0xa7)
 87c:	0000020d 	0x0000020d
 880:	04020000 	csrrd	$r0,0x80
 884:	746e6905 	0x746e6905
 888:	05040200 	0x05040200
 88c:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff76f8 <_stack+0xe3fe4f3c>
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
 8d4:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe6a40 <_stack+0xe3fd4284>
 8d8:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 7214 <data_size+0x50d0>
 8dc:	73323370 	0x73323370
 8e0:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 1760c <data_size+0x154c8>
 8e4:	3d686372 	0x3d686372
 8e8:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7854 <_stack+0xe3fd5098>
 8ec:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7b4c <_stack+0xe3fe5390>
 8f0:	72323368 	0x72323368
 8f4:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe7620 <_stack+0xe3fd4e64>
 8f8:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe466c <_stack+0xe3fd1eb0>
 8fc:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
 900:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 16c6c <data_size+0x14b28>
 904:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 6e68 <data_size+0x4d24>
 908:	726f6e3d 	0x726f6e3d
 90c:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
 910:	75746d2d 	0x75746d2d
 914:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 4678 <data_size+0x2534>
 918:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7784 <_stack+0xe3fe4fc8>
 91c:	68637261 	bltu	$r19,$r1,25456(0x6370) # 6c8c <data_size+0x4b48>
 920:	20723233 	ll.w	$r19,$r17,29232(0x7230)
 924:	2d20672d 	0x2d20672d
 928:	2d20324f 	0x2d20324f
 92c:	2d6f6e66 	0x2d6f6e66
 930:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 72a4 <data_size+0x5160>
 934:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
 938:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff779c <_stack+0xe3fe4fe0>
 93c:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff72ac <_stack+0xe3fe4af0>
 940:	69740c00 	bltu	$r0,$r0,95244(0x1740c) # 17d4c <data_size+0x15c08>
 944:	632e656d 	blt	$r11,$r13,-53660(0x32e64) # ffff37a8 <_stack+0xe3fe0fec>
 948:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff7174 <_stack+0xe3fe49b8>
 94c:	772f656d 	0x772f656d
 950:	772f7477 	0x772f7477
 954:	2f6b726f 	0x2f6b726f
 958:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7bbc <_stack+0xe3fd5400>
 95c:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7ec0 <_stack+0xe3fd5704>
 960:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 1758c <data_size+0x15448>
 964:	15500062 	lu12i.w	$r2,-360445(0xa8003)
 968:	01041c00 	0x01041c00
 96c:	08530000 	fmsub.s	$f0,$f0,$f0,$f6
 970:	04020000 	csrrd	$r0,0x80
 974:	736e7507 	vssrarni.du.q	$vr7,$vr8,0x1d
 978:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 177dc <data_size+0x15698>
 97c:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe729c <_stack+0xe3fd4ae0>
 980:	04020074 	csrxchg	$r20,$r3,0x80
 984:	6e6f6c07 	bgeu	$r0,$r7,-102548(0x26f6c) # fffe78f0 <_stack+0xe3fd5134>
 988:	6e752067 	bgeu	$r3,$r7,-101088(0x27520) # fffe7ea8 <_stack+0xe3fd56ec>
 98c:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe70f4 <_stack+0xe3fd4938>
 990:	69206465 	bltu	$r3,$r5,73828(0x12064) # 129f4 <data_size+0x108b0>
 994:	0300746e 	lu52i.d	$r14,$r3,29(0x1d)
 998:	6f6c635f 	bgeu	$r26,$r31,-37792(0x36c60) # ffff75f8 <_stack+0xe3fe4e3c>
 99c:	745f6b63 	0x745f6b63
 9a0:	17030200 	lu32i.d	$r0,-518128(0x81810)
 9a4:	000000c8 	0x000000c8
 9a8:	69050402 	bltu	$r0,$r2,66820(0x10504) # 10eac <data_size+0xed68>
 9ac:	0400746e 	csrxchg	$r14,$r3,0x1d
 9b0:	656d6974 	bge	$r11,$r20,93544(0x16d68) # 17718 <data_size+0x155d4>
 9b4:	63657073 	blt	$r3,$r19,-39568(0x36570) # ffff6f24 <_stack+0xe3fe4768>
 9b8:	1f021000 	pcaddu18i	$r0,-520064(0x81080)
 9bc:	00014b08 	0x00014b08
 9c0:	76740500 	0x76740500
 9c4:	6365735f 	blt	$r26,$r31,-39568(0x36570) # ffff6f34 <_stack+0xe3fe4778>
 9c8:	0b200200 	0x0b200200
 9cc:	000000dd 	0x000000dd
 9d0:	76740500 	0x76740500
 9d4:	65736e5f 	bge	$r18,$r31,95084(0x1736c) # 17d40 <data_size+0x15bfc>
 9d8:	21020063 	sc.w	$r3,$r3,512(0x200)
 9dc:	0000dd0b 	0x0000dd0b
 9e0:	74050400 	xvsle.wu	$xr0,$xr0,$xr1
 9e4:	73755f76 	0x73755f76
 9e8:	02006365 	slti	$r5,$r27,24(0x18)
 9ec:	00dd0b22 	bstrpick.d	$r2,$r25,0x1d,0x2
 9f0:	05080000 	0x05080000
 9f4:	6d5f7674 	bgeu	$r19,$r20,89972(0x15f74) # 16968 <data_size+0x14824>
 9f8:	00636573 	bstrins.w	$r19,$r11,0x3,0x19
 9fc:	dd0b2302 	0xdd0b2302
 a00:	0c000000 	0x0c000000
 a04:	65670600 	bge	$r16,$r0,91908(0x16704) # 17108 <data_size+0x14fc4>
 a08:	73755f74 	0x73755f74
 a0c:	0f3c0100 	0x0f3c0100
 a10:	000000c8 	0x000000c8
 a14:	1c001624 	pcaddu12i	$r4,177(0xb1)
 a18:	00000030 	0x00000030
 a1c:	01939c01 	0x01939c01
 a20:	6e070000 	bgeu	$r0,$r0,-129280(0x20700) # fffe1120 <_stack+0xe3fce964>
 a24:	133e0100 	addu16i.d	$r0,$r8,-12416(0xcf80)
 a28:	000000c8 	0x000000c8
 a2c:	000004ab 	0x000004ab
 a30:	0002dc08 	0x0002dc08
 a34:	00162400 	orn	$r0,$r0,$r9
 a38:	0000a81c 	0x0000a81c
 a3c:	093f0100 	0x093f0100
 a40:	0000a809 	0x0000a809
 a44:	02f00a00 	addi.d	$r0,$r16,-1022(0xc02)
 a48:	00000000 	0x00000000
 a4c:	65670600 	bge	$r16,$r0,91908(0x16704) # 17150 <data_size+0x1500c>
 a50:	736e5f74 	vssrarni.du.q	$vr20,$vr27,0x17
 a54:	0f330100 	0x0f330100
 a58:	000000c8 	0x000000c8
 a5c:	1c001600 	pcaddu12i	$r0,176(0xb0)
 a60:	00000024 	0x00000024
 a64:	01db9c01 	0x01db9c01
 a68:	6e070000 	bgeu	$r0,$r0,-129280(0x20700) # fffe1168 <_stack+0xe3fce9ac>
 a6c:	13350100 	addu16i.d	$r0,$r8,-12992(0xcd40)
 a70:	000000c8 	0x000000c8
 a74:	000004e2 	0x000004e2
 a78:	0002dc08 	0x0002dc08
 a7c:	00160000 	orn	$r0,$r0,$r0
 a80:	0000901c 	0x0000901c
 a84:	09360100 	0x09360100
 a88:	00009009 	0x00009009
 a8c:	02f00a00 	addi.d	$r0,$r16,-1022(0xc02)
 a90:	00000000 	0x00000000
 a94:	65670b00 	bge	$r24,$r0,91912(0x16708) # 1719c <data_size+0x15058>
 a98:	6c635f74 	bgeu	$r27,$r20,25436(0x635c) # 6df4 <data_size+0x4cb0>
 a9c:	006b636f 	bstrins.w	$r15,$r27,0xb,0x18
 aa0:	c80f2c01 	0xc80f2c01
 aa4:	fc000000 	0xfc000000
 aa8:	0c000001 	0x0c000001
 aac:	2e01006e 	0x2e01006e
 ab0:	0000c813 	0x0000c813
 ab4:	63060000 	blt	$r0,$r0,-64000(0x30600) # ffff10b4 <_stack+0xe3fde8f8>
 ab8:	6b636f6c 	bltu	$r27,$r12,-40084(0x3636c) # ffff6e24 <_stack+0xe3fe4668>
 abc:	7465675f 	xvavg.w	$xr31,$xr26,$xr25
 ac0:	656d6974 	bge	$r11,$r20,93544(0x16d68) # 17828 <data_size+0x156e4>
 ac4:	0f200100 	0x0f200100
 ac8:	000000c8 	0x000000c8
 acc:	1c001578 	pcaddu12i	$r24,171(0xab)
 ad0:	00000084 	0x00000084
 ad4:	02699c01 	sltui	$r1,$r0,-1433(0xa67)
 ad8:	730d0000 	vextl.qu.du	$vr0,$vr0
 adc:	01006c65 	0x01006c65
 ae0:	00ee2120 	bstrpick.d	$r0,$r9,0x2e,0x8
 ae4:	05100000 	0x05100000
 ae8:	740e0000 	0x740e0000
 aec:	0100706d 	0x0100706d
 af0:	02693620 	sltui	$r0,$r17,-1459(0xa4d)
 af4:	55010000 	bl	65792(0x10100) # 10bf4 <data_size+0xeab0>
 af8:	01006e07 	0x01006e07
 afc:	00c81322 	bstrpick.d	$r2,$r25,0x8,0x4
 b00:	05310000 	0x05310000
 b04:	dc080000 	0xdc080000
 b08:	78000002 	0x78000002
 b0c:	781c0015 	0x781c0015
 b10:	01000000 	0x01000000
 b14:	78090923 	0x78090923
 b18:	0a000000 	0x0a000000
 b1c:	000002f0 	0x000002f0
 b20:	0f000000 	0x0f000000
 b24:	0000f504 	0x0000f504
 b28:	65671000 	bge	$r0,$r0,91920(0x16710) # 17238 <data_size+0x150f4>
 b2c:	6f635f74 	bgeu	$r27,$r20,-40100(0x3635c) # ffff6e88 <_stack+0xe3fe46cc>
 b30:	5f746e75 	bne	$r19,$r21,-35732(0x3746c) # ffff7f9c <_stack+0xe3fe57e0>
 b34:	0100796d 	0x0100796d
 b38:	00c80f16 	bstrpick.d	$r22,$r24,0x8,0x3
 b3c:	15700000 	lu12i.w	$r0,-294912(0xb8000)
 b40:	00081c00 	bytepick.w	$r0,$r0,$r7,0x0
 b44:	9c010000 	0x9c010000
 b48:	0000029f 	0x0000029f
 b4c:	01006e11 	0x01006e11
 b50:	00c81318 	bstrpick.d	$r24,$r24,0x8,0x4
 b54:	54010000 	bl	256(0x100) # c54 <data_size-0x14f0>
 b58:	65671000 	bge	$r0,$r0,91920(0x16710) # 17268 <data_size+0x15124>
 b5c:	6f635f74 	bgeu	$r27,$r20,-40100(0x3635c) # ffff6eb8 <_stack+0xe3fe46fc>
 b60:	00746e75 	bstrins.w	$r21,$r19,0x14,0x1b
 b64:	c80f1101 	0xc80f1101
 b68:	50000000 	b	0 # b68 <data_size-0x15dc>
 b6c:	1c1c0015 	pcaddu12i	$r21,57344(0xe000)
 b70:	01000000 	0x01000000
 b74:	0002dc9c 	0x0002dc9c
 b78:	02dc0800 	addi.d	$r0,$r0,1794(0x702)
 b7c:	15500000 	lu12i.w	$r0,-360448(0xa8000)
 b80:	00601c00 	bstrins.w	$r0,$r0,0x0,0x7
 b84:	13010000 	addu16i.d	$r0,$r0,-16320(0xc040)
 b88:	0060090d 	bstrins.w	$r13,$r8,0x0,0x2
 b8c:	f00a0000 	0xf00a0000
 b90:	00000002 	0x00000002
 b94:	5f120000 	bne	$r0,$r0,-60928(0x31200) # ffff1d94 <_stack+0xe3fdf5d8>
 b98:	5f746567 	bne	$r11,$r7,-35740(0x37464) # ffff7ffc <_stack+0xe3fe5840>
 b9c:	6e756f63 	bgeu	$r27,$r3,-101012(0x2756c) # fffe8108 <_stack+0xe3fd594c>
 ba0:	04010074 	csrxchg	$r20,$r3,0x40
 ba4:	0000c80f 	0x0000c80f
 ba8:	5f0c0100 	bne	$r8,$r0,-62464(0x30c00) # ffff17a8 <_stack+0xe3fdefec>
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
  ec:	55010b11 	bl	-62586616(0xc450108) # fc4501f4 <_stack+0xe043da38>
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
 174:	40061201 	beqz	$r16,263696(0x40610) # 40784 <data_size+0x3e640>
 178:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 17c:	00001301 	clo.w	$r1,$r24
 180:	03000506 	lu52i.d	$r6,$r8,1(0x1)
 184:	3b0b3a08 	0x3b0b3a08
 188:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0cc0 <data_size+0x2ceb7c>
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
 258:	42911802 	beqz	$r0,692504(0xa9118) # a9370 <data_size+0xa722c>
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
 284:	55010b0c 	bl	-63897336(0xc310108) # fc31038c <_stack+0xe02fdbd0>
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
 310:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0e48 <data_size+0x2ced04>
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
 3f0:	40061201 	beqz	$r16,263696(0x40610) # 40a00 <data_size+0x3e8bc>
 3f4:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 3f8:	00001301 	clo.w	$r1,$r24
 3fc:	03003407 	lu52i.d	$r7,$r0,13(0xd)
 400:	3b0b3a08 	0x3b0b3a08
 404:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0f3c <data_size+0x2cedf8>
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
 48c:	42971840 	beqz	$r2,169752(0x29718) # 29ba4 <data_size+0x27a60>
 490:	00130119 	maskeqz	$r25,$r8,$r0
 494:	00341100 	0x00341100
 498:	0b3a0803 	0x0b3a0803
 49c:	0b390b3b 	0x0b390b3b
 4a0:	18021349 	pcaddi	$r9,4250(0x109a)
 4a4:	2e120000 	0x2e120000
 4a8:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 4ac:	3b0b3a08 	0x3b0b3a08
 4b0:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0fe8 <data_size+0x2ceea4>
 4b4:	000b2013 	0x000b2013
	...

Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	0x00000000
   4:	00000064 	0x00000064
   8:	64540001 	bge	$r0,$r1,21504(0x5400) # 5408 <data_size+0x32c4>
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
  34:	48000000 	bceqz	$fcc0,0 # 34 <data_size-0x2110>
  38:	64000000 	bge	$r0,$r0,0 # 38 <data_size-0x210c>
  3c:	02000000 	slti	$r0,$r0,0
  40:	649f3000 	bge	$r0,$r0,40752(0x9f30) # 9f70 <data_size+0x7e2c>
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
  74:	64000001 	bge	$r0,$r1,0 # 74 <data_size-0x20d0>
  78:	01000001 	0x01000001
  7c:	01646800 	0x01646800
  80:	016c0000 	0x016c0000
  84:	00030000 	0x00030000
  88:	6c9f7f88 	bgeu	$r28,$r8,40828(0x9f7c) # a004 <data_size+0x7ec0>
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
  c8:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff00c8 <_stack+0xe3fdd90c>
  cc:	000000f4 	0x000000f4
  d0:	0000022c 	0x0000022c
  d4:	00670001 	bstrins.w	$r1,$r0,0x7,0x0
  d8:	00000000 	0x00000000
  dc:	48000000 	bceqz	$fcc0,0 # dc <data_size-0x2068>
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
 134:	55000100 	bl	67174400(0x4010000) # 4010134 <data_size+0x400dff0>
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
 16c:	55000100 	bl	67174400(0x4010000) # 401016c <data_size+0x400e028>
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
 198:	55000100 	bl	67174400(0x4010000) # 4010198 <data_size+0x400e054>
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
 1c4:	55000100 	bl	67174400(0x4010000) # 40101c4 <data_size+0x400e080>
	...
 1d4:	0000001c 	0x0000001c
 1d8:	1c540001 	pcaddu12i	$r1,172032(0x2a000)
 1dc:	28000000 	ld.b	$r0,$r0,0
 1e0:	04000000 	csrrd	$r0,0x0
 1e4:	5401f300 	bl	-67108368(0xc0001f0) # fc0003d4 <_stack+0xdffedc18>
 1e8:	0000009f 	0x0000009f
	...
 1f4:	00001800 	cto.w	$r0,$r0
 1f8:	54000100 	bl	67108864(0x4000000) # 40001f8 <data_size+0x3ffe0b4>
	...
 204:	00000074 	0x00000074
 208:	0000007f 	0x0000007f
 20c:	7f540001 	0x7f540001
 210:	a0000000 	0xa0000000
 214:	04000000 	csrrd	$r0,0x0
 218:	5401f300 	bl	-67108368(0xc0001f0) # fc000408 <_stack+0xdffedc4c>
 21c:	0000009f 	0x0000009f
	...
 228:	00002800 	cto.d	$r0,$r0
 22c:	54000100 	bl	67108864(0x4000000) # 400022c <data_size+0x3ffe0e8>
 230:	00000028 	0x00000028
 234:	00000030 	0x00000030
 238:	7f880003 	0x7f880003
 23c:	0000309f 	revb.2h	$r31,$r4
 240:	00003c00 	revb.d	$r0,$r0
 244:	68000100 	bltu	$r8,$r0,0 # 244 <data_size-0x1f00>
 248:	0000003c 	0x0000003c
 24c:	00000050 	0x00000050
 250:	7f880003 	0x7f880003
 254:	0000509f 	bitrev.w	$r31,$r4
 258:	00005800 	ext.w.h	$r0,$r0
 25c:	68000100 	bltu	$r8,$r0,0 # 25c <data_size-0x1ee8>
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
 380:	5701f300 	bl	-66911760(0xc0301f0) # fc030570 <_stack+0xe001ddb4>
 384:	0000dc9f 	0x0000dc9f
 388:	0000e800 	0x0000e800
 38c:	57000100 	bl	67305472(0x4030000) # 403038c <data_size+0x402e248>
	...
 398:	00000020 	0x00000020
 39c:	00000034 	0x00000034
 3a0:	9f300002 	0x9f300002
 3a4:	00000034 	0x00000034
 3a8:	00000038 	0x00000038
 3ac:	38680001 	ammin.wu	$r1,$r0,$r0
 3b0:	58000000 	beq	$r0,$r0,0 # 3b0 <data_size-0x1d94>
 3b4:	08000000 	0x08000000
 3b8:	91007c00 	0x91007c00
 3bc:	50231c00 	b	8988(0x231c) # 26d8 <data_size+0x594>
 3c0:	0000589f 	ext.w.h	$r31,$r4
 3c4:	00006400 	rdtimeh.w	$r0,$r0
 3c8:	68000100 	bltu	$r8,$r0,0 # 3c8 <data_size-0x1d7c>
 3cc:	000000b4 	0x000000b4
 3d0:	000000bc 	0x000000bc
 3d4:	d0680001 	0xd0680001
 3d8:	e8000000 	0xe8000000
 3dc:	02000000 	slti	$r0,$r0,0
 3e0:	009f3000 	bstrins.d	$r0,$r0,0x1f,0xc
 3e4:	00000000 	0x00000000
 3e8:	6c000000 	bgeu	$r0,$r0,0 # 3e8 <data_size-0x1d5c>
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
 468:	5d000100 	bne	$r8,$r0,65536(0x10000) # 10468 <data_size+0xe324>
 46c:	00000038 	0x00000038
 470:	00000058 	0x00000058
 474:	58670001 	beq	$r0,$r1,26368(0x6700) # 6b74 <data_size+0x4a30>
 478:	64000000 	bge	$r0,$r0,0 # 478 <data_size-0x1ccc>
 47c:	01000000 	0x01000000
 480:	00b45d00 	bstrins.d	$r0,$r8,0x34,0x17
 484:	00bc0000 	bstrins.d	$r0,$r0,0x3c,0x0
 488:	00010000 	asrtle.d	$r0,$r0
 48c:	0000d05d 	0x0000d05d
 490:	0000dc00 	0x0000dc00
 494:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff0494 <_stack+0xe3fddcd8>
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
 4c4:	640801b8 	bge	$r13,$r24,2048(0x800) # cc4 <data_size-0x1480>
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
 504:	54000100 	bl	67108864(0x4000000) # 4000504 <data_size+0x3ffe3c0>
	...
 510:	00000028 	0x00000028
 514:	00000094 	0x00000094
 518:	94540001 	0x94540001
 51c:	ac000000 	0xac000000
 520:	04000000 	csrrd	$r0,0x0
 524:	5401f300 	bl	-67108368(0xc0001f0) # fc000714 <_stack+0xdffedf58>
 528:	0000009f 	0x0000009f
 52c:	00000000 	0x00000000
 530:	00002800 	cto.d	$r0,$r0
 534:	00003800 	revb.2w	$r0,$r0
 538:	30000200 	0x30000200
 53c:	0000389f 	revb.2w	$r31,$r4
 540:	0000ac00 	0x0000ac00
 544:	5f000100 	bne	$r8,$r0,-65536(0x30000) # ffff0544 <_stack+0xe3fddd88>
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
  1c:	69727000 	bltu	$r0,$r0,94832(0x17270) # 1728c <data_size+0x15148>
  20:	2e66746e 	0x2e66746e
  24:	00000063 	0x00000063
  28:	05000000 	0x05000000
  2c:	00115002 	sub.w	$r2,$r0,$r20
  30:	0105181c 	fmul.d	$f28,$f0,$f6
  34:	50020500 	b	67109380(0x4000204) # 4000238 <data_size+0x3ffe0f4>
  38:	181c0011 	pcaddi	$r17,57344(0xe000)
  3c:	05000105 	0x05000105
  40:	00115002 	sub.w	$r2,$r0,$r20
  44:	0105181c 	fmul.d	$f28,$f0,$f6
  48:	50020500 	b	67109380(0x4000204) # 400024c <data_size+0x3ffe108>
  4c:	181c0011 	pcaddi	$r17,57344(0xe000)
  50:	05000105 	0x05000105
  54:	00115002 	sub.w	$r2,$r0,$r20
  58:	0105181c 	fmul.d	$f28,$f0,$f6
  5c:	50020500 	b	67109380(0x4000204) # 4000260 <data_size+0x3ffe11c>
  60:	181c0011 	pcaddi	$r17,57344(0xe000)
  64:	05000105 	0x05000105
  68:	00115002 	sub.w	$r2,$r0,$r20
  6c:	0105181c 	fmul.d	$f28,$f0,$f6
  70:	50020500 	b	67109380(0x4000204) # 4000274 <data_size+0x3ffe130>
  74:	061c0011 	cacop	0x11,$r0,1792(0x700)
  78:	00010511 	0x00010511
  7c:	11700205 	addu16i.d	$r5,$r16,23552(0x5c00)
  80:	051f1c00 	0x051f1c00
  84:	0205000c 	slti	$r12,$r0,320(0x140)
  88:	1c001174 	pcaddu12i	$r20,139(0x8b)
  8c:	00010515 	0x00010515
  90:	11780205 	addu16i.d	$r5,$r16,24064(0x5e00)
  94:	05111c00 	0x05111c00
  98:	02050001 	slti	$r1,$r0,320(0x140)
  9c:	1c001194 	pcaddu12i	$r20,140(0x8c)
  a0:	0001051d 	0x0001051d
  a4:	11980205 	addu16i.d	$r5,$r16,26112(0x6600)
  a8:	18061c00 	pcaddi	$r0,12512(0x30e0)
  ac:	05000105 	0x05000105
  b0:	00119802 	sub.d	$r2,$r0,$r6
  b4:	0105181c 	fmul.d	$f28,$f0,$f6
  b8:	b4020500 	0xb4020500
  bc:	5d1c0011 	bne	$r0,$r17,72704(0x11c00) # 11cbc <data_size+0xfb78>
  c0:	05000305 	0x05000305
  c4:	0011bc02 	sub.d	$r2,$r0,$r15
  c8:	0402001c 	csrrd	$r28,0x80
  cc:	ba030602 	0xba030602
  d0:	1105017f 	addu16i.d	$r31,$r11,16704(0x4140)
  d4:	c0020500 	0xc0020500
  d8:	011c0011 	0x011c0011
  dc:	05000c05 	0x05000c05
  e0:	0011c802 	sub.d	$r2,$r0,$r18
  e4:	0105011c 	fmul.d	$f28,$f8,$f0
  e8:	cc020500 	0xcc020500
  ec:	001c0011 	mul.w	$r17,$r0,$r0
  f0:	06000402 	cacop	0x2,$r0,1(0x1)
  f4:	00020519 	0x00020519
  f8:	11cc0205 	addu16i.d	$r5,$r16,29440(0x7300)
  fc:	05181c00 	0x05181c00
 100:	02050002 	slti	$r2,$r0,320(0x140)
 104:	1c0011cc 	pcaddu12i	$r12,142(0x8e)
 108:	04050106 	csrxchg	$r6,$r8,0x140
 10c:	d4020500 	0xd4020500
 110:	061c0011 	cacop	0x11,$r0,1792(0x700)
 114:	00030559 	0x00030559
 118:	11d40205 	addu16i.d	$r5,$r16,29952(0x7500)
 11c:	01061c00 	0x01061c00
 120:	05000505 	0x05000505
 124:	0011dc02 	sub.d	$r2,$r0,$r23
 128:	0402001c 	csrrd	$r28,0x80
 12c:	05010601 	0x05010601
 130:	0205000f 	slti	$r15,$r0,320(0x140)
 134:	1c0011f0 	pcaddu12i	$r16,143(0x8f)
 138:	00040200 	alsl.w	$r0,$r16,$r0,0x1
 13c:	01400306 	0x01400306
 140:	05000405 	0x05000405
 144:	0011f402 	sub.d	$r2,$r0,$r29
 148:	0305191c 	lu52i.d	$r28,$r8,326(0x146)
 14c:	f8020500 	0xf8020500
 150:	4a1c0011 	bceqz	$fcc0,-3793920(0x461c00) # ffc61d50 <_stack+0xe3c4f594>
 154:	05000905 	0x05000905
 158:	0011fc02 	sub.d	$r2,$r0,$r31
 15c:	4d03061c 	jirl	$r28,$r16,66308(0x10304)
 160:	00030501 	0x00030501
 164:	121c0205 	addu16i.d	$r5,$r16,-30976(0x8700)
 168:	5a061c00 	beq	$r0,$r0,-129508(0x2061c) # fffe0784 <_stack+0xe3fcdfc8>
 16c:	05000105 	0x05000105
 170:	00124402 	slt	$r2,$r0,$r17
 174:	6d03061c 	bgeu	$r16,$r28,66308(0x10304) # 10478 <data_size+0xe334>
 178:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 17c:	124c0205 	addu16i.d	$r5,$r16,-27904(0x9300)
 180:	01061c00 	0x01061c00
 184:	05000605 	0x05000605
 188:	00125002 	slt	$r2,$r0,$r20
 18c:	0402001c 	csrrd	$r28,0x80
 190:	1a051901 	pcalau12i	$r1,10440(0x28c8)
 194:	54020500 	bl	67109380(0x4000204) # 4000398 <data_size+0x3ffe254>
 198:	011c0012 	0x011c0012
 19c:	05000505 	0x05000505
 1a0:	00126402 	slt	$r2,$r0,$r25
 1a4:	0402001c 	csrrd	$r28,0x80
 1a8:	05180603 	0x05180603
 1ac:	02050006 	slti	$r6,$r0,320(0x140)
 1b0:	1c001264 	pcaddu12i	$r4,147(0x93)
 1b4:	09050106 	0x09050106
 1b8:	68020500 	bltu	$r8,$r0,516(0x204) # 3bc <data_size-0x1d88>
 1bc:	161c0012 	lu32i.d	$r18,57344(0xe000)
 1c0:	05002c05 	0x05002c05
 1c4:	00126c02 	slt	$r2,$r0,$r27
 1c8:	1005011c 	addu16i.d	$r28,$r8,320(0x140)
 1cc:	70020500 	vsle.b	$vr0,$vr8,$vr1
 1d0:	181c0012 	pcaddi	$r18,57344(0xe000)
 1d4:	05001605 	0x05001605
 1d8:	00127402 	slt	$r2,$r0,$r29
 1dc:	1005161c 	addu16i.d	$r28,$r16,325(0x145)
 1e0:	78020500 	0x78020500
 1e4:	011c0012 	0x011c0012
 1e8:	05001a05 	0x05001a05
 1ec:	00127c02 	slt	$r2,$r0,$r31
 1f0:	0505011c 	0x0505011c
 1f4:	84020500 	0x84020500
 1f8:	181c0012 	pcaddi	$r18,57344(0xe000)
 1fc:	05000705 	0x05000705
 200:	00128802 	sltu	$r2,$r0,$r2
 204:	0505161c 	0x0505161c
 208:	90020500 	0x90020500
 20c:	001c0012 	mul.w	$r18,$r0,$r0
 210:	06000402 	cacop	0x2,$r0,1(0x1)
 214:	05016f03 	0x05016f03
 218:	02050005 	slti	$r5,$r0,320(0x140)
 21c:	1c0012a0 	pcaddu12i	$r0,149(0x95)
 220:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 224:	12a00205 	addu16i.d	$r5,$r16,-22528(0xa800)
 228:	01061c00 	0x01061c00
 22c:	05000805 	0x05000805
 230:	0012a402 	sltu	$r2,$r0,$r9
 234:	0518061c 	0x0518061c
 238:	02050005 	slti	$r5,$r0,320(0x140)
 23c:	1c0012a4 	pcaddu12i	$r4,149(0x95)
 240:	06050106 	cacop	0x6,$r8,320(0x140)
 244:	a8020500 	0xa8020500
 248:	061c0012 	cacop	0x12,$r0,1792(0x700)
 24c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 250:	12ac0205 	addu16i.d	$r5,$r16,-21760(0xab00)
 254:	64031c00 	bge	$r0,$r0,796(0x31c) # 570 <data_size-0x1bd4>
 258:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 25c:	12b00205 	addu16i.d	$r5,$r16,-21504(0xac00)
 260:	19061c00 	pcaddi	$r0,-511776(0x830e0)
 264:	05000605 	0x05000605
 268:	0012b402 	sltu	$r2,$r0,$r13
 26c:	0805161c 	0x0805161c
 270:	b8020500 	0xb8020500
 274:	161c0012 	lu32i.d	$r18,57344(0xe000)
 278:	05000505 	0x05000505
 27c:	0012bc02 	sltu	$r2,$r0,$r15
 280:	0518061c 	0x0518061c
 284:	02050005 	slti	$r5,$r0,320(0x140)
 288:	1c0012bc 	pcaddu12i	$r28,149(0x95)
 28c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 290:	12bc0205 	addu16i.d	$r5,$r16,-20736(0xaf00)
 294:	05181c00 	0x05181c00
 298:	02050005 	slti	$r5,$r0,320(0x140)
 29c:	1c0012c0 	pcaddu12i	$r0,150(0x96)
 2a0:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
 2a4:	12d00205 	addu16i.d	$r5,$r16,-19456(0xb400)
 2a8:	05181c00 	0x05181c00
 2ac:	02050005 	slti	$r5,$r0,320(0x140)
 2b0:	1c0012d0 	pcaddu12i	$r16,150(0x96)
 2b4:	08050106 	0x08050106
 2b8:	d4020500 	0xd4020500
 2bc:	061c0012 	cacop	0x12,$r0,1792(0x700)
 2c0:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 2c4:	12d40205 	addu16i.d	$r5,$r16,-19200(0xb500)
 2c8:	01061c00 	0x01061c00
 2cc:	05000605 	0x05000605
 2d0:	0012d802 	sltu	$r2,$r0,$r22
 2d4:	0518061c 	0x0518061c
 2d8:	02050005 	slti	$r5,$r0,320(0x140)
 2dc:	1c0012dc 	pcaddu12i	$r28,150(0x96)
 2e0:	00110519 	sub.w	$r25,$r8,$r1
 2e4:	12ec0205 	addu16i.d	$r5,$r16,-17664(0xbb00)
 2e8:	05181c00 	0x05181c00
 2ec:	02050011 	slti	$r17,$r0,320(0x140)
 2f0:	1c0012ec 	pcaddu12i	$r12,151(0x97)
 2f4:	14050106 	lu12i.w	$r6,10248(0x2808)
 2f8:	f0020500 	0xf0020500
 2fc:	061c0012 	cacop	0x12,$r0,1792(0x700)
 300:	00110518 	sub.w	$r24,$r8,$r1
 304:	12f00205 	addu16i.d	$r5,$r16,-17408(0xbc00)
 308:	01061c00 	0x01061c00
 30c:	05001205 	0x05001205
 310:	0012f402 	sltu	$r2,$r0,$r29
 314:	0518061c 	0x0518061c
 318:	02050011 	slti	$r17,$r0,320(0x140)
 31c:	1c0012f8 	pcaddu12i	$r24,151(0x97)
 320:	00050519 	alsl.w	$r25,$r8,$r1,0x3
 324:	13080205 	addu16i.d	$r5,$r16,-15872(0xc200)
 328:	05181c00 	0x05181c00
 32c:	02050005 	slti	$r5,$r0,320(0x140)
 330:	1c001308 	pcaddu12i	$r8,152(0x98)
 334:	08050106 	0x08050106
 338:	0c020500 	0x0c020500
 33c:	061c0013 	cacop	0x13,$r0,1792(0x700)
 340:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 344:	130c0205 	addu16i.d	$r5,$r16,-15616(0xc300)
 348:	01061c00 	0x01061c00
 34c:	05000605 	0x05000605
 350:	00131002 	maskeqz	$r2,$r0,$r4
 354:	0518061c 	0x0518061c
 358:	02050005 	slti	$r5,$r0,320(0x140)
 35c:	1c001314 	pcaddu12i	$r20,152(0x98)
 360:	0005051f 	alsl.w	$r31,$r8,$r1,0x3
 364:	13240205 	addu16i.d	$r5,$r16,-14080(0xc900)
 368:	05181c00 	0x05181c00
 36c:	02050005 	slti	$r5,$r0,320(0x140)
 370:	1c001324 	pcaddu12i	$r4,153(0x99)
 374:	08050106 	0x08050106
 378:	28020500 	ld.b	$r0,$r8,129(0x81)
 37c:	061c0013 	cacop	0x13,$r0,1792(0x700)
 380:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 384:	13280205 	addu16i.d	$r5,$r16,-13824(0xca00)
 388:	01061c00 	0x01061c00
 38c:	05000605 	0x05000605
 390:	00132c02 	maskeqz	$r2,$r0,$r11
 394:	0518061c 	0x0518061c
 398:	02050005 	slti	$r5,$r0,320(0x140)
 39c:	1c001330 	pcaddu12i	$r16,153(0x99)
 3a0:	05015903 	0x05015903
 3a4:	02050005 	slti	$r5,$r0,320(0x140)
 3a8:	1c001334 	pcaddu12i	$r20,153(0x99)
 3ac:	06051906 	cacop	0x6,$r8,326(0x146)
 3b0:	38020500 	0x38020500
 3b4:	161c0013 	lu32i.d	$r19,57344(0xe000)
 3b8:	05000805 	0x05000805
 3bc:	00133c02 	maskeqz	$r2,$r0,$r15
 3c0:	0505161c 	0x0505161c
 3c4:	40020500 	beqz	$r8,516(0x204) # 5c8 <data_size-0x1b7c>
 3c8:	061c0013 	cacop	0x13,$r0,1792(0x700)
 3cc:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 3d0:	13400205 	addu16i.d	$r5,$r16,-12288(0xd000)
 3d4:	05181c00 	0x05181c00
 3d8:	02050005 	slti	$r5,$r0,320(0x140)
 3dc:	1c001340 	pcaddu12i	$r0,154(0x9a)
 3e0:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 3e4:	13440205 	addu16i.d	$r5,$r16,-12032(0xd100)
 3e8:	051e1c00 	0x051e1c00
 3ec:	02050005 	slti	$r5,$r0,320(0x140)
 3f0:	1c001354 	pcaddu12i	$r20,154(0x9a)
 3f4:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 3f8:	13540205 	addu16i.d	$r5,$r16,-11008(0xd500)
 3fc:	01061c00 	0x01061c00
 400:	05000805 	0x05000805
 404:	00135802 	maskeqz	$r2,$r0,$r22
 408:	0518061c 	0x0518061c
 40c:	02050005 	slti	$r5,$r0,320(0x140)
 410:	1c001358 	pcaddu12i	$r24,154(0x9a)
 414:	06050106 	cacop	0x6,$r8,320(0x140)
 418:	5c020500 	bne	$r8,$r0,516(0x204) # 61c <data_size-0x1b28>
 41c:	061c0013 	cacop	0x13,$r0,1792(0x700)
 420:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 424:	13600205 	addu16i.d	$r5,$r16,-10240(0xd800)
 428:	05331c00 	0x05331c00
 42c:	02050005 	slti	$r5,$r0,320(0x140)
 430:	1c001368 	pcaddu12i	$r8,155(0x9b)
 434:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 438:	13680205 	addu16i.d	$r5,$r16,-9728(0xda00)
 43c:	01061c00 	0x01061c00
 440:	05000605 	0x05000605
 444:	00136c02 	maskeqz	$r2,$r0,$r27
 448:	0518061c 	0x0518061c
 44c:	02050005 	slti	$r5,$r0,320(0x140)
 450:	1c001370 	pcaddu12i	$r16,155(0x9b)
 454:	0006051e 	alsl.wu	$r30,$r8,$r1,0x1
 458:	13700205 	addu16i.d	$r5,$r16,-9216(0xdc00)
 45c:	051a1c00 	0x051a1c00
 460:	02050005 	slti	$r5,$r0,320(0x140)
 464:	1c001378 	pcaddu12i	$r24,155(0x9b)
 468:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 46c:	137c0205 	addu16i.d	$r5,$r16,-8448(0xdf00)
 470:	01001c00 	0x01001c00
 474:	0000ae01 	0x0000ae01
 478:	21000400 	sc.w	$r0,$r0,4(0x4)
 47c:	01000000 	0x01000000
 480:	f2f60101 	0xf2f60101
 484:	0101000d 	fadd.d	$f13,$f0,$f0
 488:	00000101 	0x00000101
 48c:	00000100 	0x00000100
 490:	75700001 	0x75700001
 494:	61686374 	blt	$r27,$r20,92256(0x16860) # 16cf4 <data_size+0x14bb0>
 498:	00632e72 	bstrins.w	$r18,$r19,0x3,0xb
 49c:	00000000 	0x00000000
 4a0:	7c020500 	0x7c020500
 4a4:	181c0013 	pcaddi	$r19,57344(0xe000)
 4a8:	05000105 	0x05000105
 4ac:	00137c02 	maskeqz	$r2,$r0,$r31
 4b0:	0105181c 	fmul.d	$f28,$f0,$f6
 4b4:	7c020500 	0x7c020500
 4b8:	1d1c0013 	pcaddu12i	$r19,-466944(0x8e000)
 4bc:	05000505 	0x05000505
 4c0:	00137c02 	maskeqz	$r2,$r0,$r31
 4c4:	0510061c 	0x0510061c
 4c8:	02050001 	slti	$r1,$r0,320(0x140)
 4cc:	1c001384 	pcaddu12i	$r4,156(0x9c)
 4d0:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
 4d4:	13940205 	addu16i.d	$r5,$r16,-6912(0xe500)
 4d8:	12061c00 	addu16i.d	$r0,$r0,-32377(0x8187)
 4dc:	05000105 	0x05000105
 4e0:	00139402 	masknez	$r2,$r0,$r5
 4e4:	0518061c 	0x0518061c
 4e8:	02050001 	slti	$r1,$r0,320(0x140)
 4ec:	1c0013a4 	pcaddu12i	$r4,157(0x9d)
 4f0:	01051a06 	fmul.d	$f6,$f16,$f6
 4f4:	a4020500 	0xa4020500
 4f8:	181c0013 	pcaddi	$r19,57344(0xe000)
 4fc:	05000505 	0x05000505
 500:	0013a402 	masknez	$r2,$r0,$r9
 504:	0516061c 	0x0516061c
 508:	02050001 	slti	$r1,$r0,320(0x140)
 50c:	1c0013ac 	pcaddu12i	$r12,157(0x9d)
 510:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 514:	13bc0205 	addu16i.d	$r5,$r16,-4352(0xef00)
 518:	051e1c00 	0x051e1c00
 51c:	02050001 	slti	$r1,$r0,320(0x140)
 520:	1c0013c8 	pcaddu12i	$r8,158(0x9e)
 524:	65010100 	bge	$r8,$r0,65792(0x10100) # 10624 <data_size+0xe4e0>
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
 550:	13c80205 	addu16i.d	$r5,$r16,-3584(0xf200)
 554:	05181c00 	0x05181c00
 558:	02050001 	slti	$r1,$r0,320(0x140)
 55c:	1c0013c8 	pcaddu12i	$r8,158(0x9e)
 560:	00010518 	0x00010518
 564:	13c80205 	addu16i.d	$r5,$r16,-3584(0xf200)
 568:	05181c00 	0x05181c00
 56c:	02050001 	slti	$r1,$r0,320(0x140)
 570:	1c0013c8 	pcaddu12i	$r8,158(0x9e)
 574:	01051506 	fmul.d	$f6,$f8,$f5
 578:	dc020500 	0xdc020500
 57c:	191c0013 	pcaddi	$r19,-466944(0x8e000)
 580:	05000905 	0x05000905
 584:	0013e002 	masknez	$r2,$r0,$r24
 588:	0605011c 	cacop	0x1c,$r8,320(0x140)
 58c:	e8020500 	0xe8020500
 590:	191c0013 	pcaddi	$r19,-466944(0x8e000)
 594:	05000405 	0x05000405
 598:	0013f002 	masknez	$r2,$r0,$r28
 59c:	0518061c 	0x0518061c
 5a0:	02050002 	slti	$r2,$r0,320(0x140)
 5a4:	1c0013f8 	pcaddu12i	$r24,159(0x9f)
 5a8:	00020518 	0x00020518
 5ac:	13f80205 	addu16i.d	$r5,$r16,-512(0xfe00)
 5b0:	13061c00 	addu16i.d	$r0,$r0,-15993(0xc187)
 5b4:	05000905 	0x05000905
 5b8:	0013fc02 	masknez	$r2,$r0,$r31
 5bc:	0605011c 	cacop	0x1c,$r8,320(0x140)
 5c0:	00020500 	0x00020500
 5c4:	061c0014 	cacop	0x14,$r0,1792(0x700)
 5c8:	00020519 	0x00020519
 5cc:	14000205 	lu12i.w	$r5,16(0x10)
 5d0:	19061c00 	pcaddi	$r0,-511776(0x830e0)
 5d4:	05000305 	0x05000305
 5d8:	00140402 	nor	$r2,$r0,$r1
 5dc:	0405151c 	csrxchg	$r28,$r8,0x145
 5e0:	08020500 	0x08020500
 5e4:	001c0014 	mul.w	$r20,$r0,$r0
 5e8:	06010402 	cacop	0x2,$r0,65(0x41)
 5ec:	00100501 	add.w	$r1,$r8,$r1
 5f0:	14100205 	lu12i.w	$r5,32784(0x8010)
 5f4:	05181c00 	0x05181c00
 5f8:	02050002 	slti	$r2,$r0,320(0x140)
 5fc:	1c001418 	pcaddu12i	$r24,160(0xa0)
 600:	00020518 	0x00020518
 604:	14180205 	lu12i.w	$r5,49168(0xc010)
 608:	13061c00 	addu16i.d	$r0,$r0,-15993(0xc187)
 60c:	05000905 	0x05000905
 610:	00141c02 	nor	$r2,$r0,$r7
 614:	0605011c 	cacop	0x1c,$r8,320(0x140)
 618:	20020500 	ll.w	$r0,$r8,516(0x204)
 61c:	001c0014 	mul.w	$r20,$r0,$r0
 620:	06000402 	cacop	0x2,$r0,1(0x1)
 624:	0001051d 	0x0001051d
 628:	14200205 	lu12i.w	$r5,65552(0x10010)
 62c:	18061c00 	pcaddi	$r0,12512(0x30e0)
 630:	05000105 	0x05000105
 634:	00143c02 	nor	$r2,$r0,$r15
 638:	051b061c 	0x051b061c
 63c:	02050001 	slti	$r1,$r0,320(0x140)
 640:	1c00143c 	pcaddu12i	$r28,161(0xa1)
 644:	00010518 	0x00010518
 648:	143c0205 	lu12i.w	$r5,122896(0x1e010)
 64c:	16061c00 	lu32i.d	$r0,12512(0x30e0)
 650:	05000105 	0x05000105
 654:	00144402 	nor	$r2,$r0,$r17
 658:	0105181c 	fmul.d	$f28,$f0,$f6
 65c:	48020500 	bcnez	$fcc0,516(0x204) # 860 <data_size-0x18e4>
 660:	061c0014 	cacop	0x14,$r0,1792(0x700)
 664:	00010518 	0x00010518
 668:	14500205 	lu12i.w	$r5,163856(0x28010)
 66c:	05181c00 	0x05181c00
 670:	02050001 	slti	$r1,$r0,320(0x140)
 674:	1c001458 	pcaddu12i	$r24,162(0xa2)
 678:	00010518 	0x00010518
 67c:	14580205 	lu12i.w	$r5,180240(0x2c010)
 680:	18061c00 	pcaddi	$r0,12512(0x30e0)
 684:	05000105 	0x05000105
 688:	00146802 	nor	$r2,$r0,$r26
 68c:	0101001c 	fadd.d	$f28,$f0,$f0
 690:	000001bf 	0x000001bf
 694:	00230004 	div.du	$r4,$r0,$r0
 698:	01010000 	fadd.d	$f0,$f0,$f0
 69c:	0df2f601 	0x0df2f601
 6a0:	01010100 	fadd.d	$f0,$f8,$f0
 6a4:	00000001 	0x00000001
 6a8:	01000001 	0x01000001
 6ac:	69727000 	bltu	$r0,$r0,94832(0x17270) # 1791c <data_size+0x157d8>
 6b0:	6162746e 	blt	$r3,$r14,90740(0x16274) # 16924 <data_size+0x147e0>
 6b4:	632e6573 	blt	$r11,$r19,-53660(0x32e64) # ffff3518 <_stack+0xe3fe0d5c>
 6b8:	00000000 	0x00000000
 6bc:	02050000 	slti	$r0,$r0,320(0x140)
 6c0:	1c001468 	pcaddu12i	$r8,163(0xa3)
 6c4:	00010518 	0x00010518
 6c8:	14680205 	lu12i.w	$r5,213008(0x34010)
 6cc:	05181c00 	0x05181c00
 6d0:	02050002 	slti	$r2,$r0,320(0x140)
 6d4:	1c001468 	pcaddu12i	$r8,163(0xa3)
 6d8:	00020518 	0x00020518
 6dc:	14680205 	lu12i.w	$r5,213008(0x34010)
 6e0:	05181c00 	0x05181c00
 6e4:	02050002 	slti	$r2,$r0,320(0x140)
 6e8:	1c001468 	pcaddu12i	$r8,163(0xa3)
 6ec:	00020518 	0x00020518
 6f0:	14680205 	lu12i.w	$r5,213008(0x34010)
 6f4:	05181c00 	0x05181c00
 6f8:	02050002 	slti	$r2,$r0,320(0x140)
 6fc:	1c001468 	pcaddu12i	$r8,163(0xa3)
 700:	01051206 	fmul.d	$f6,$f16,$f4
 704:	7c020500 	0x7c020500
 708:	011c0014 	0x011c0014
 70c:	05000105 	0x05000105
 710:	00148002 	and	$r2,$r0,$r0
 714:	04051c1c 	csrrd	$r28,0x147
 718:	84020500 	0x84020500
 71c:	001c0014 	mul.w	$r20,$r0,$r0
 720:	01010402 	fadd.d	$f2,$f0,$f1
 724:	05000a05 	0x05000a05
 728:	00148802 	and	$r2,$r0,$r2
 72c:	0402001c 	csrrd	$r28,0x80
 730:	051c0600 	0x051c0600
 734:	02050007 	slti	$r7,$r0,320(0x140)
 738:	1c001488 	pcaddu12i	$r8,164(0xa4)
 73c:	02051906 	slti	$r6,$r8,326(0x146)
 740:	9c020500 	0x9c020500
 744:	1a1c0014 	pcalau12i	$r20,57344(0xe000)
 748:	05000705 	0x05000705
 74c:	0014a002 	and	$r2,$r0,$r8
 750:	0402001c 	csrrd	$r28,0x80
 754:	05160603 	0x05160603
 758:	02050002 	slti	$r2,$r0,320(0x140)
 75c:	1c0014a0 	pcaddu12i	$r0,165(0xa5)
 760:	0e050106 	0x0e050106
 764:	ac020500 	0xac020500
 768:	011c0014 	0x011c0014
 76c:	05000805 	0x05000805
 770:	0014b002 	and	$r2,$r0,$r12
 774:	0518061c 	0x0518061c
 778:	02050002 	slti	$r2,$r0,320(0x140)
 77c:	1c0014b4 	pcaddu12i	$r20,165(0xa5)
 780:	07050106 	0x07050106
 784:	c4020500 	0xc4020500
 788:	141c0014 	lu12i.w	$r20,57344(0xe000)
 78c:	05000205 	0x05000205
 790:	0014c802 	and	$r2,$r0,$r18
 794:	0402001c 	csrrd	$r28,0x80
 798:	051f0600 	0x051f0600
 79c:	02050002 	slti	$r2,$r0,320(0x140)
 7a0:	1c0014c8 	pcaddu12i	$r8,166(0xa6)
 7a4:	07050106 	0x07050106
 7a8:	d0020500 	0xd0020500
 7ac:	1a1c0014 	pcalau12i	$r20,57344(0xe000)
 7b0:	05000305 	0x05000305
 7b4:	0014d402 	and	$r2,$r0,$r21
 7b8:	0516061c 	0x0516061c
 7bc:	02050003 	slti	$r3,$r0,320(0x140)
 7c0:	1c0014d4 	pcaddu12i	$r20,166(0xa6)
 7c4:	0e050106 	0x0e050106
 7c8:	e0020500 	0xe0020500
 7cc:	011c0014 	0x011c0014
 7d0:	05000a05 	0x05000a05
 7d4:	0014e802 	and	$r2,$r0,$r26
 7d8:	0402001c 	csrrd	$r28,0x80
 7dc:	05180601 	0x05180601
 7e0:	02050003 	slti	$r3,$r0,320(0x140)
 7e4:	1c0014fc 	pcaddu12i	$r28,167(0xa7)
 7e8:	04040200 	csrxchg	$r0,$r16,0x100
 7ec:	02051406 	slti	$r6,$r0,325(0x145)
 7f0:	00020500 	0x00020500
 7f4:	001c0015 	mul.w	$r21,$r0,$r0
 7f8:	1d000402 	pcaddu12i	$r2,-524256(0x80020)
 7fc:	05000105 	0x05000105
 800:	00151c02 	or	$r2,$r0,$r7
 804:	0705111c 	0x0705111c
 808:	24020500 	ldptr.w	$r0,$r8,516(0x204)
 80c:	031c0015 	lu52i.d	$r21,$r0,1792(0x700)
 810:	02050174 	slti	$r20,$r11,320(0x140)
 814:	30020500 	0x30020500
 818:	061c0015 	cacop	0x15,$r0,1792(0x700)
 81c:	00020516 	0x00020516
 820:	15300205 	lu12i.w	$r5,-425968(0x98010)
 824:	18061c00 	pcaddi	$r0,12512(0x30e0)
 828:	05000205 	0x05000205
 82c:	00153402 	or	$r2,$r0,$r13
 830:	0a05161c 	0x0a05161c
 834:	38020500 	0x38020500
 838:	061c0015 	cacop	0x15,$r0,1792(0x700)
 83c:	00020518 	0x00020518
 840:	15440205 	lu12i.w	$r5,-385008(0xa2010)
 844:	05231c00 	0x05231c00
 848:	02050002 	slti	$r2,$r0,320(0x140)
 84c:	1c001550 	pcaddu12i	$r16,170(0xaa)
 850:	e6010100 	0xe6010100
 854:	04000002 	csrrd	$r2,0x0
 858:	00003300 	revb.2h	$r0,$r24
 85c:	01010100 	fadd.d	$f0,$f8,$f0
 860:	000df2f6 	bytepick.d	$r22,$r23,$r28,0x3
 864:	01010101 	fadd.d	$f1,$f8,$f0
 868:	01000000 	0x01000000
 86c:	2e010000 	0x2e010000
 870:	6e692f2e 	bgeu	$r25,$r14,-104148(0x2692c) # fffe719c <_stack+0xe3fd49e0>
 874:	64756c63 	bge	$r3,$r3,30060(0x756c) # 7de0 <data_size+0x5c9c>
 878:	74000065 	xvseq.b	$xr5,$xr3,$xr0
 87c:	2e656d69 	0x2e656d69
 880:	00000063 	0x00000063
 884:	6d697400 	bgeu	$r0,$r0,92532(0x16974) # 171f8 <data_size+0x150b4>
 888:	00682e65 	bstrins.w	$r5,$r19,0x8,0xb
 88c:	00000001 	0x00000001
 890:	50020500 	b	67109380(0x4000204) # 4000a94 <data_size+0x3ffe950>
 894:	281c0015 	ld.b	$r21,$r0,1792(0x700)
 898:	05000105 	0x05000105
 89c:	00155002 	or	$r2,$r0,$r20
 8a0:	0505181c 	0x0505181c
 8a4:	50020500 	b	67109380(0x4000204) # 4000aa8 <data_size+0x3ffe964>
 8a8:	031c0015 	lu52i.d	$r21,$r0,1792(0x700)
 8ac:	05050173 	0x05050173
 8b0:	50020500 	b	67109380(0x4000204) # 4000ab4 <data_size+0x3ffe970>
 8b4:	181c0015 	pcaddi	$r21,57344(0xe000)
 8b8:	05000505 	0x05000505
 8bc:	00155002 	or	$r2,$r0,$r20
 8c0:	0522061c 	0x0522061c
 8c4:	02050001 	slti	$r1,$r0,320(0x140)
 8c8:	1c001558 	pcaddu12i	$r24,170(0xaa)
 8cc:	05017503 	0x05017503
 8d0:	02050005 	slti	$r5,$r0,320(0x140)
 8d4:	1c001560 	pcaddu12i	$r0,171(0xab)
 8d8:	05051e06 	0x05051e06
 8dc:	60020500 	blt	$r8,$r0,516(0x204) # ae0 <data_size-0x1664>
 8e0:	061c0015 	cacop	0x15,$r0,1792(0x700)
 8e4:	0001051d 	0x0001051d
 8e8:	15700205 	lu12i.w	$r5,-294896(0xb8010)
 8ec:	1a061c00 	pcalau12i	$r0,12512(0x30e0)
 8f0:	05000105 	0x05000105
 8f4:	00157002 	or	$r2,$r0,$r28
 8f8:	0505181c 	0x0505181c
 8fc:	70020500 	vsle.b	$vr0,$vr8,$vr1
 900:	181c0015 	pcaddi	$r21,57344(0xe000)
 904:	05000505 	0x05000505
 908:	00157402 	or	$r2,$r0,$r29
 90c:	05051b1c 	0x05051b1c
 910:	74020500 	xvsle.b	$xr0,$xr8,$xr1
 914:	061c0015 	cacop	0x15,$r0,1792(0x700)
 918:	00010518 	0x00010518
 91c:	15780205 	lu12i.w	$r5,-278512(0xbc010)
 920:	1a061c00 	pcalau12i	$r0,12512(0x30e0)
 924:	05000105 	0x05000105
 928:	00157802 	or	$r2,$r0,$r30
 92c:	0505181c 	0x0505181c
 930:	78020500 	0x78020500
 934:	181c0015 	pcaddi	$r21,57344(0xe000)
 938:	05000505 	0x05000505
 93c:	00157802 	or	$r2,$r0,$r30
 940:	0163031c 	0x0163031c
 944:	05000505 	0x05000505
 948:	00157802 	or	$r2,$r0,$r30
 94c:	0505181c 	0x0505181c
 950:	78020500 	0x78020500
 954:	061c0015 	cacop	0x15,$r0,1792(0x700)
 958:	00010531 	0x00010531
 95c:	15800205 	lu12i.w	$r5,-262128(0xc0010)
 960:	66031c00 	bge	$r0,$r0,-130276(0x2031c) # fffe0c7c <_stack+0xe3fce4c0>
 964:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 968:	15880205 	lu12i.w	$r5,-245744(0xc4010)
 96c:	1e061c00 	pcaddu18i	$r0,12512(0x30e0)
 970:	05000505 	0x05000505
 974:	00158802 	xor	$r2,$r0,$r2
 978:	05052d1c 	0x05052d1c
 97c:	88020500 	0x88020500
 980:	061c0015 	cacop	0x15,$r0,1792(0x700)
 984:	00150501 	or	$r1,$r8,$r1
 988:	15900205 	lu12i.w	$r5,-229360(0xc8010)
 98c:	05181c00 	0x05181c00
 990:	02050016 	slti	$r22,$r0,320(0x140)
 994:	1c001594 	pcaddu12i	$r20,172(0xac)
 998:	00360516 	0x00360516
 99c:	15980205 	lu12i.w	$r5,-212976(0xcc010)
 9a0:	05181c00 	0x05181c00
 9a4:	02050016 	slti	$r22,$r0,320(0x140)
 9a8:	1c0015a4 	pcaddu12i	$r4,173(0xad)
 9ac:	00280501 	0x00280501
 9b0:	15b00205 	lu12i.w	$r5,-163824(0xd8010)
 9b4:	05181c00 	0x05181c00
 9b8:	02050027 	slti	$r7,$r1,320(0x140)
 9bc:	1c0015c4 	pcaddu12i	$r4,174(0xae)
 9c0:	00360501 	0x00360501
 9c4:	15d00205 	lu12i.w	$r5,-98288(0xe8010)
 9c8:	05161c00 	0x05161c00
 9cc:	02050012 	slti	$r18,$r0,320(0x140)
 9d0:	1c0015d4 	pcaddu12i	$r20,174(0xae)
 9d4:	00120518 	slt	$r24,$r8,$r1
 9d8:	15d80205 	lu12i.w	$r5,-81904(0xec010)
 9dc:	05181c00 	0x05181c00
 9e0:	02050012 	slti	$r18,$r0,320(0x140)
 9e4:	1c0015dc 	pcaddu12i	$r28,174(0xae)
 9e8:	0001051a 	0x0001051a
 9ec:	15e40205 	lu12i.w	$r5,-57328(0xf2010)
 9f0:	05111c00 	0x05111c00
 9f4:	02050036 	slti	$r22,$r1,320(0x140)
 9f8:	1c0015f0 	pcaddu12i	$r16,175(0xaf)
 9fc:	00120501 	slt	$r1,$r8,$r1
 a00:	15f40205 	lu12i.w	$r5,-24560(0xfa010)
 a04:	18061c00 	pcaddi	$r0,12512(0x30e0)
 a08:	05000505 	0x05000505
 a0c:	0015f402 	xor	$r2,$r0,$r29
 a10:	0505181c 	0x0505181c
 a14:	f4020500 	0xf4020500
 a18:	181c0015 	pcaddi	$r21,57344(0xe000)
 a1c:	05000505 	0x05000505
 a20:	0015f402 	xor	$r2,$r0,$r29
 a24:	0505191c 	0x0505191c
 a28:	f4020500 	0xf4020500
 a2c:	061c0015 	cacop	0x15,$r0,1792(0x700)
 a30:	00010518 	0x00010518
 a34:	16000205 	lu32i.d	$r5,16(0x10)
 a38:	21061c00 	sc.w	$r0,$r0,1564(0x61c)
 a3c:	05000105 	0x05000105
 a40:	00160002 	orn	$r2,$r0,$r0
 a44:	0505181c 	0x0505181c
 a48:	00020500 	0x00020500
 a4c:	181c0016 	pcaddi	$r22,57344(0xe000)
 a50:	05000505 	0x05000505
 a54:	00160002 	orn	$r2,$r0,$r0
 a58:	0150031c 	0x0150031c
 a5c:	05000505 	0x05000505
 a60:	00160002 	orn	$r2,$r0,$r0
 a64:	0505181c 	0x0505181c
 a68:	00020500 	0x00020500
 a6c:	061c0016 	cacop	0x16,$r0,1792(0x700)
 a70:	00010544 	0x00010544
 a74:	16080205 	lu32i.d	$r5,16400(0x4010)
 a78:	53031c00 	b	197404(0x3031c) # 30d94 <data_size+0x2ec50>
 a7c:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 a80:	16100205 	lu32i.d	$r5,32784(0x8010)
 a84:	1e061c00 	pcaddu18i	$r0,12512(0x30e0)
 a88:	05000505 	0x05000505
 a8c:	00161002 	orn	$r2,$r0,$r4
 a90:	0505401c 	0x0505401c
 a94:	10020500 	addu16i.d	$r0,$r8,129(0x81)
 a98:	181c0016 	pcaddi	$r22,57344(0xe000)
 a9c:	05000505 	0x05000505
 aa0:	00161002 	orn	$r2,$r0,$r4
 aa4:	0516061c 	0x0516061c
 aa8:	02050006 	slti	$r6,$r0,320(0x140)
 aac:	1c001614 	pcaddu12i	$r20,176(0xb0)
 ab0:	00010519 	0x00010519
 ab4:	16240205 	lu32i.d	$r5,73744(0x12010)
 ab8:	1b061c00 	pcalau12i	$r0,-511776(0x830e0)
 abc:	05000105 	0x05000105
 ac0:	00162402 	orn	$r2,$r0,$r9
 ac4:	0505181c 	0x0505181c
 ac8:	24020500 	ldptr.w	$r0,$r8,516(0x204)
 acc:	181c0016 	pcaddi	$r22,57344(0xe000)
 ad0:	05000505 	0x05000505
 ad4:	00162402 	orn	$r2,$r0,$r9
 ad8:	0147031c 	0x0147031c
 adc:	05000505 	0x05000505
 ae0:	00162402 	orn	$r2,$r0,$r9
 ae4:	0505181c 	0x0505181c
 ae8:	24020500 	ldptr.w	$r0,$r8,516(0x204)
 aec:	061c0016 	cacop	0x16,$r0,1792(0x700)
 af0:	0001054d 	0x0001054d
 af4:	162c0205 	lu32i.d	$r5,90128(0x16010)
 af8:	4a031c00 	bceqz	$fcc0,131868(0x2031c) # 20e14 <data_size+0x1ecd0>
 afc:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 b00:	16340205 	lu32i.d	$r5,106512(0x1a010)
 b04:	1e061c00 	pcaddu18i	$r0,12512(0x30e0)
 b08:	05000505 	0x05000505
 b0c:	00163402 	orn	$r2,$r0,$r13
 b10:	0505491c 	0x0505491c
 b14:	34020500 	0x34020500
 b18:	181c0016 	pcaddi	$r22,57344(0xe000)
 b1c:	05000505 	0x05000505
 b20:	00163402 	orn	$r2,$r0,$r13
 b24:	0516061c 	0x0516061c
 b28:	02050006 	slti	$r6,$r0,320(0x140)
 b2c:	1c001638 	pcaddu12i	$r24,177(0xb1)
 b30:	00010519 	0x00010519
 b34:	16540205 	lu32i.d	$r5,172048(0x2a010)
 b38:	01001c00 	0x01001c00
 b3c:	Address 0x0000000000000b3c is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff7474 <_stack+0xe3fe4cb8>
   4:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
   8:	73747570 	0x73747570
   c:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe697c <_stack+0xe3fd41c0>
  10:	72700067 	0x72700067
  14:	62746e69 	blt	$r19,$r9,-101268(0x2746c) # fffe7480 <_stack+0xe3fd4cc4>
  18:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
  1c:	5f746774 	bne	$r27,$r20,-35740(0x37464) # ffff7480 <_stack+0xe3fe4cc4>
  20:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff7494 <_stack+0xe3fe4cd8>
  24:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
  28:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff749c <_stack+0xe3fe4ce0>
  2c:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
  30:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff74a4 <_stack+0xe3fe4ce8>
  34:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
