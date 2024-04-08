
obj/select_sort/main.elf:     file format elf32-loongarch
obj/select_sort/main.elf


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
1c000080:	289a3063 	ld.w	$r3,$r3,1676(0x68c)
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
1c00038c:	54001400 	bl	20(0x14) # 1c0003a0 <shell7>
1c000390:	03400000 	andi	$r0,$r0,0x0

1c000394 <go_finish>:
go_finish():
1c000394:	53fd6fff 	b	-660(0xffffd6c) # 1c000100 <test_finish>
	...

1c0003a0 <shell7>:
shell7():
1c0003a0:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0003a4:	29807061 	st.w	$r1,$r3,28(0x1c)
1c0003a8:	157f5fcc 	lu12i.w	$r12,-263426(0xbfafe)
1c0003ac:	2980207b 	st.w	$r27,$r3,8(0x8)
1c0003b0:	2980107c 	st.w	$r28,$r3,4(0x4)
1c0003b4:	29806077 	st.w	$r23,$r3,24(0x18)
1c0003b8:	29805078 	st.w	$r24,$r3,20(0x14)
1c0003bc:	29804079 	st.w	$r25,$r3,16(0x10)
1c0003c0:	2980307a 	st.w	$r26,$r3,12(0xc)
1c0003c4:	2980007d 	st.w	$r29,$r3,0
1c0003c8:	29800180 	st.w	$r0,$r12,0
1c0003cc:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0003d0:	02abe084 	addi.w	$r4,$r4,-1288(0xaf8)
1c0003d4:	5408d800 	bl	2264(0x8d8) # 1c000cac <puts>
1c0003d8:	5409e800 	bl	2536(0x9e8) # 1c000dc0 <get_count>
1c0003dc:	0015009b 	move	$r27,$r4
1c0003e0:	540a0000 	bl	2560(0xa00) # 1c000de0 <get_count_my>
1c0003e4:	0015009c 	move	$r28,$r4
1c0003e8:	157f5fe4 	lu12i.w	$r4,-263425(0xbfaff)
1c0003ec:	03bc8085 	ori	$r5,$r4,0xf20
1c0003f0:	288000a6 	ld.w	$r6,$r5,0
1c0003f4:	5c01c0c0 	bne	$r6,$r0,448(0x1c0) # 1c0005b4 <shell7+0x214>
1c0003f8:	1c000039 	pcaddu12i	$r25,1(0x1)
1c0003fc:	02ada339 	addi.w	$r25,$r25,-1176(0xb68)
1c000400:	0280281d 	addi.w	$r29,$r0,10(0xa)
1c000404:	00150017 	move	$r23,$r0
1c000408:	028c8338 	addi.w	$r24,$r25,800(0x320)
1c00040c:	1c00003a 	pcaddu12i	$r26,1(0x1)
1c000410:	02bf135a 	addi.w	$r26,$r26,-60(0xfc4)
1c000414:	02832005 	addi.w	$r5,$r0,200(0xc8)
1c000418:	00150344 	move	$r4,$r26
1c00041c:	54025400 	bl	596(0x254) # 1c000670 <select_sort>
1c000420:	00116487 	sub.w	$r7,$r4,$r25
1c000424:	1c00002c 	pcaddu12i	$r12,1(0x1)
1c000428:	02acf18c 	addi.w	$r12,$r12,-1220(0xb3c)
1c00042c:	001030ed 	add.w	$r13,$r7,$r12
1c000430:	2880018e 	ld.w	$r14,$r12,0
1c000434:	288001a8 	ld.w	$r8,$r13,0
1c000438:	001501af 	move	$r15,$r13
1c00043c:	001501b1 	move	$r17,$r13
1c000440:	001501b3 	move	$r19,$r13
1c000444:	001501a1 	move	$r1,$r13
1c000448:	5c015d0e 	bne	$r8,$r14,348(0x15c) # 1c0005a4 <shell7+0x204>
1c00044c:	28801189 	ld.w	$r9,$r12,4(0x4)
1c000450:	288011aa 	ld.w	$r10,$r13,4(0x4)
1c000454:	5c015149 	bne	$r10,$r9,336(0x150) # 1c0005a4 <shell7+0x204>
1c000458:	2880218b 	ld.w	$r11,$r12,8(0x8)
1c00045c:	288021a4 	ld.w	$r4,$r13,8(0x8)
1c000460:	5c01448b 	bne	$r4,$r11,324(0x144) # 1c0005a4 <shell7+0x204>
1c000464:	28803185 	ld.w	$r5,$r12,12(0xc)
1c000468:	288031a6 	ld.w	$r6,$r13,12(0xc)
1c00046c:	5c0138c5 	bne	$r6,$r5,312(0x138) # 1c0005a4 <shell7+0x204>
1c000470:	2880418d 	ld.w	$r13,$r12,16(0x10)
1c000474:	288041ef 	ld.w	$r15,$r15,16(0x10)
1c000478:	5c012ded 	bne	$r15,$r13,300(0x12c) # 1c0005a4 <shell7+0x204>
1c00047c:	28805190 	ld.w	$r16,$r12,20(0x14)
1c000480:	28805231 	ld.w	$r17,$r17,20(0x14)
1c000484:	5c012230 	bne	$r17,$r16,288(0x120) # 1c0005a4 <shell7+0x204>
1c000488:	28806192 	ld.w	$r18,$r12,24(0x18)
1c00048c:	28806273 	ld.w	$r19,$r19,24(0x18)
1c000490:	5c011672 	bne	$r19,$r18,276(0x114) # 1c0005a4 <shell7+0x204>
1c000494:	28807194 	ld.w	$r20,$r12,28(0x1c)
1c000498:	28807021 	ld.w	$r1,$r1,28(0x1c)
1c00049c:	0280818c 	addi.w	$r12,$r12,32(0x20)
1c0004a0:	5c010434 	bne	$r1,$r20,260(0x104) # 1c0005a4 <shell7+0x204>
1c0004a4:	5fff8b0c 	bne	$r24,$r12,-120(0x3ff88) # 1c00042c <shell7+0x8c>
1c0004a8:	02bfffbd 	addi.w	$r29,$r29,-1(0xfff)
1c0004ac:	5fff6ba0 	bne	$r29,$r0,-152(0x3ff68) # 1c000414 <shell7+0x74>
1c0004b0:	54093000 	bl	2352(0x930) # 1c000de0 <get_count_my>
1c0004b4:	00150099 	move	$r25,$r4
1c0004b8:	54090800 	bl	2312(0x908) # 1c000dc0 <get_count>
1c0004bc:	00116c9b 	sub.w	$r27,$r4,$r27
1c0004c0:	0011733c 	sub.w	$r28,$r25,$r28
1c0004c4:	5c00aee0 	bne	$r23,$r0,172(0xac) # 1c000570 <shell7+0x1d0>
1c0004c8:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0004cc:	02a85084 	addi.w	$r4,$r4,-1516(0xa14)
1c0004d0:	5407dc00 	bl	2012(0x7dc) # 1c000cac <puts>
1c0004d4:	157f5fe7 	lu12i.w	$r7,-263425(0xbfaff)
1c0004d8:	0280040b 	addi.w	$r11,$r0,1(0x1)
1c0004dc:	038100e4 	ori	$r4,$r7,0x40
1c0004e0:	2980008b 	st.w	$r11,$r4,0
1c0004e4:	0380c0e5 	ori	$r5,$r7,0x30
1c0004e8:	140001ef 	lu12i.w	$r15,15(0xf)
1c0004ec:	038080e6 	ori	$r6,$r7,0x20
1c0004f0:	298000ab 	st.w	$r11,$r5,0
1c0004f4:	03bffded 	ori	$r13,$r15,0xfff
1c0004f8:	298000cd 	st.w	$r13,$r6,0
1c0004fc:	157f5fe1 	lu12i.w	$r1,-263425(0xbfaff)
1c000500:	03814039 	ori	$r25,$r1,0x50
1c000504:	2980033c 	st.w	$r28,$r25,0
1c000508:	157f5f18 	lu12i.w	$r24,-263432(0xbfaf8)
1c00050c:	2980031c 	st.w	$r28,$r24,0
1c000510:	0380430e 	ori	$r14,$r24,0x10
1c000514:	00150365 	move	$r5,$r27
1c000518:	298001db 	st.w	$r27,$r14,0
1c00051c:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000520:	02a7b084 	addi.w	$r4,$r4,-1556(0x9ec)
1c000524:	54049c00 	bl	1180(0x49c) # 1c0009c0 <printf>
1c000528:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c00052c:	28806077 	ld.w	$r23,$r3,24(0x18)
1c000530:	28805078 	ld.w	$r24,$r3,20(0x14)
1c000534:	28804079 	ld.w	$r25,$r3,16(0x10)
1c000538:	2880307a 	ld.w	$r26,$r3,12(0xc)
1c00053c:	2880207b 	ld.w	$r27,$r3,8(0x8)
1c000540:	2880007d 	ld.w	$r29,$r3,0
1c000544:	00150385 	move	$r5,$r28
1c000548:	2880107c 	ld.w	$r28,$r3,4(0x4)
1c00054c:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000550:	02a7a084 	addi.w	$r4,$r4,-1560(0x9e8)
1c000554:	02808063 	addi.w	$r3,$r3,32(0x20)
1c000558:	50046800 	b	1128(0x468) # 1c0009c0 <printf>
1c00055c:	54088400 	bl	2180(0x884) # 1c000de0 <get_count_my>
1c000560:	00150097 	move	$r23,$r4
1c000564:	54085c00 	bl	2140(0x85c) # 1c000dc0 <get_count>
1c000568:	00116c9b 	sub.w	$r27,$r4,$r27
1c00056c:	001172fc 	sub.w	$r28,$r23,$r28
1c000570:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000574:	02a60084 	addi.w	$r4,$r4,-1664(0x980)
1c000578:	54073400 	bl	1844(0x734) # 1c000cac <puts>
1c00057c:	157f5ff0 	lu12i.w	$r16,-263425(0xbfaff)
1c000580:	03810211 	ori	$r17,$r16,0x40
1c000584:	02800414 	addi.w	$r20,$r0,1(0x1)
1c000588:	29800234 	st.w	$r20,$r17,0
1c00058c:	0380c212 	ori	$r18,$r16,0x30
1c000590:	0280081d 	addi.w	$r29,$r0,2(0x2)
1c000594:	03808213 	ori	$r19,$r16,0x20
1c000598:	2980025d 	st.w	$r29,$r18,0
1c00059c:	29800260 	st.w	$r0,$r19,0
1c0005a0:	53ff5fff 	b	-164(0xfffff5c) # 1c0004fc <shell7+0x15c>
1c0005a4:	02bfffbd 	addi.w	$r29,$r29,-1(0xfff)
1c0005a8:	028006f7 	addi.w	$r23,$r23,1(0x1)
1c0005ac:	5ffe6ba0 	bne	$r29,$r0,-408(0x3fe68) # 1c000414 <shell7+0x74>
1c0005b0:	53ff03ff 	b	-256(0xfffff00) # 1c0004b0 <shell7+0x110>
1c0005b4:	02832005 	addi.w	$r5,$r0,200(0xc8)
1c0005b8:	1c000024 	pcaddu12i	$r4,1(0x1)
1c0005bc:	02b86084 	addi.w	$r4,$r4,-488(0xe18)
1c0005c0:	1c000038 	pcaddu12i	$r24,1(0x1)
1c0005c4:	02a68318 	addi.w	$r24,$r24,-1632(0x9a0)
1c0005c8:	5400a800 	bl	168(0xa8) # 1c000670 <select_sort>
1c0005cc:	0015030c 	move	$r12,$r24
1c0005d0:	028c831a 	addi.w	$r26,$r24,800(0x320)
1c0005d4:	00116087 	sub.w	$r7,$r4,$r24
1c0005d8:	001030ee 	add.w	$r14,$r7,$r12
1c0005dc:	2880018f 	ld.w	$r15,$r12,0
1c0005e0:	288001cd 	ld.w	$r13,$r14,0
1c0005e4:	001501c8 	move	$r8,$r14
1c0005e8:	001501ca 	move	$r10,$r14
1c0005ec:	5fff71af 	bne	$r13,$r15,-144(0x3ff70) # 1c00055c <shell7+0x1bc>
1c0005f0:	28801190 	ld.w	$r16,$r12,4(0x4)
1c0005f4:	288011d1 	ld.w	$r17,$r14,4(0x4)
1c0005f8:	5fff6630 	bne	$r17,$r16,-156(0x3ff64) # 1c00055c <shell7+0x1bc>
1c0005fc:	28802192 	ld.w	$r18,$r12,8(0x8)
1c000600:	288021d3 	ld.w	$r19,$r14,8(0x8)
1c000604:	5fff5a72 	bne	$r19,$r18,-168(0x3ff58) # 1c00055c <shell7+0x1bc>
1c000608:	28803194 	ld.w	$r20,$r12,12(0xc)
1c00060c:	288031c1 	ld.w	$r1,$r14,12(0xc)
1c000610:	5fff4c34 	bne	$r1,$r20,-180(0x3ff4c) # 1c00055c <shell7+0x1bc>
1c000614:	28804197 	ld.w	$r23,$r12,16(0x10)
1c000618:	288041dd 	ld.w	$r29,$r14,16(0x10)
1c00061c:	5fff43b7 	bne	$r29,$r23,-192(0x3ff40) # 1c00055c <shell7+0x1bc>
1c000620:	28805199 	ld.w	$r25,$r12,20(0x14)
1c000624:	288051d8 	ld.w	$r24,$r14,20(0x14)
1c000628:	5fff3719 	bne	$r24,$r25,-204(0x3ff34) # 1c00055c <shell7+0x1bc>
1c00062c:	2880618e 	ld.w	$r14,$r12,24(0x18)
1c000630:	28806108 	ld.w	$r8,$r8,24(0x18)
1c000634:	5fff290e 	bne	$r8,$r14,-216(0x3ff28) # 1c00055c <shell7+0x1bc>
1c000638:	28807189 	ld.w	$r9,$r12,28(0x1c)
1c00063c:	2880714a 	ld.w	$r10,$r10,28(0x1c)
1c000640:	0280818c 	addi.w	$r12,$r12,32(0x20)
1c000644:	5fff1949 	bne	$r10,$r9,-232(0x3ff18) # 1c00055c <shell7+0x1bc>
1c000648:	5fff934c 	bne	$r26,$r12,-112(0x3ff90) # 1c0005d8 <shell7+0x238>
1c00064c:	54079400 	bl	1940(0x794) # 1c000de0 <get_count_my>
1c000650:	0015009a 	move	$r26,$r4
1c000654:	54076c00 	bl	1900(0x76c) # 1c000dc0 <get_count>
1c000658:	00116c9b 	sub.w	$r27,$r4,$r27
1c00065c:	0011735c 	sub.w	$r28,$r26,$r28
1c000660:	53fe6bff 	b	-408(0xffffe68) # 1c0004c8 <shell7+0x128>
1c000664:	03400000 	andi	$r0,$r0,0x0
1c000668:	03400000 	andi	$r0,$r0,0x0
1c00066c:	03400000 	andi	$r0,$r0,0x0

1c000670 <select_sort>:
select_sort():
1c000670:	60033ca0 	blt	$r5,$r0,828(0x33c) # 1c0009ac <select_sort+0x33c>
1c000674:	0280108f 	addi.w	$r15,$r4,4(0x4)
1c000678:	004088ae 	slli.w	$r14,$r5,0x2
1c00067c:	001039e6 	add.w	$r6,$r15,$r14
1c000680:	001110cd 	sub.w	$r13,$r6,$r4
1c000684:	02bff1a7 	addi.w	$r7,$r13,-4(0xffc)
1c000688:	004488e8 	srli.w	$r8,$r7,0x2
1c00068c:	02800509 	addi.w	$r9,$r8,1(0x1)
1c000690:	1c000034 	pcaddu12i	$r20,1(0x1)
1c000694:	2881d294 	ld.w	$r20,$r20,116(0x74)
1c000698:	03401d2a 	andi	$r10,$r9,0x7
1c00069c:	0015028c 	move	$r12,$r20
1c0006a0:	58009940 	beq	$r10,$r0,152(0x98) # 1c000738 <select_sort+0xc8>
1c0006a4:	02800410 	addi.w	$r16,$r0,1(0x1)
1c0006a8:	58007d50 	beq	$r10,$r16,124(0x7c) # 1c000724 <select_sort+0xb4>
1c0006ac:	0280080b 	addi.w	$r11,$r0,2(0x2)
1c0006b0:	5800654b 	beq	$r10,$r11,100(0x64) # 1c000714 <select_sort+0xa4>
1c0006b4:	02800c11 	addi.w	$r17,$r0,3(0x3)
1c0006b8:	58004d51 	beq	$r10,$r17,76(0x4c) # 1c000704 <select_sort+0x94>
1c0006bc:	02801012 	addi.w	$r18,$r0,4(0x4)
1c0006c0:	58003552 	beq	$r10,$r18,52(0x34) # 1c0006f4 <select_sort+0x84>
1c0006c4:	02801413 	addi.w	$r19,$r0,5(0x5)
1c0006c8:	58001d53 	beq	$r10,$r19,28(0x1c) # 1c0006e4 <select_sort+0x74>
1c0006cc:	0280180e 	addi.w	$r14,$r0,6(0x6)
1c0006d0:	5c02c94e 	bne	$r10,$r14,712(0x2c8) # 1c000998 <select_sort+0x328>
1c0006d4:	2880008f 	ld.w	$r15,$r4,0
1c0006d8:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c0006dc:	02801084 	addi.w	$r4,$r4,4(0x4)
1c0006e0:	29bff18f 	st.w	$r15,$r12,-4(0xffc)
1c0006e4:	28800087 	ld.w	$r7,$r4,0
1c0006e8:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c0006ec:	02801084 	addi.w	$r4,$r4,4(0x4)
1c0006f0:	29bff187 	st.w	$r7,$r12,-4(0xffc)
1c0006f4:	28800088 	ld.w	$r8,$r4,0
1c0006f8:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c0006fc:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000700:	29bff188 	st.w	$r8,$r12,-4(0xffc)
1c000704:	28800089 	ld.w	$r9,$r4,0
1c000708:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c00070c:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000710:	29bff189 	st.w	$r9,$r12,-4(0xffc)
1c000714:	2880008a 	ld.w	$r10,$r4,0
1c000718:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c00071c:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000720:	29bff18a 	st.w	$r10,$r12,-4(0xffc)
1c000724:	28800090 	ld.w	$r16,$r4,0
1c000728:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c00072c:	02801084 	addi.w	$r4,$r4,4(0x4)
1c000730:	29bff190 	st.w	$r16,$r12,-4(0xffc)
1c000734:	58005086 	beq	$r4,$r6,80(0x50) # 1c000784 <select_sort+0x114>
1c000738:	2880008b 	ld.w	$r11,$r4,0
1c00073c:	0280818c 	addi.w	$r12,$r12,32(0x20)
1c000740:	02808084 	addi.w	$r4,$r4,32(0x20)
1c000744:	29bf818b 	st.w	$r11,$r12,-32(0xfe0)
1c000748:	28bf9091 	ld.w	$r17,$r4,-28(0xfe4)
1c00074c:	29bf9191 	st.w	$r17,$r12,-28(0xfe4)
1c000750:	28bfa092 	ld.w	$r18,$r4,-24(0xfe8)
1c000754:	29bfa192 	st.w	$r18,$r12,-24(0xfe8)
1c000758:	28bfb093 	ld.w	$r19,$r4,-20(0xfec)
1c00075c:	29bfb193 	st.w	$r19,$r12,-20(0xfec)
1c000760:	28bfc08e 	ld.w	$r14,$r4,-16(0xff0)
1c000764:	29bfc18e 	st.w	$r14,$r12,-16(0xff0)
1c000768:	28bfd08d 	ld.w	$r13,$r4,-12(0xff4)
1c00076c:	29bfd18d 	st.w	$r13,$r12,-12(0xff4)
1c000770:	28bfe08f 	ld.w	$r15,$r4,-8(0xff8)
1c000774:	29bfe18f 	st.w	$r15,$r12,-8(0xff8)
1c000778:	28bff087 	ld.w	$r7,$r4,-4(0xffc)
1c00077c:	29bff187 	st.w	$r7,$r12,-4(0xffc)
1c000780:	5fffb886 	bne	$r4,$r6,-72(0x3ffb8) # 1c000738 <select_sort+0xc8>
1c000784:	02800404 	addi.w	$r4,$r0,1(0x1)
1c000788:	6401d485 	bge	$r4,$r5,468(0x1d4) # 1c00095c <select_sort+0x2ec>
1c00078c:	1c000031 	pcaddu12i	$r17,1(0x1)
1c000790:	28bde231 	ld.w	$r17,$r17,-136(0xf78)
1c000794:	02bffca6 	addi.w	$r6,$r5,-1(0xfff)
1c000798:	0015000f 	move	$r15,$r0
1c00079c:	028005e8 	addi.w	$r8,$r15,1(0x1)
1c0007a0:	28800229 	ld.w	$r9,$r17,0
1c0007a4:	6401c505 	bge	$r8,$r5,452(0x1c4) # 1c000968 <select_sort+0x2f8>
1c0007a8:	001120aa 	sub.w	$r10,$r5,$r8
1c0007ac:	03401d50 	andi	$r16,$r10,0x7
1c0007b0:	0015022c 	move	$r12,$r17
1c0007b4:	0015012e 	move	$r14,$r9
1c0007b8:	0015010d 	move	$r13,$r8
1c0007bc:	5800da00 	beq	$r16,$r0,216(0xd8) # 1c000894 <select_sort+0x224>
1c0007c0:	0280040b 	addi.w	$r11,$r0,1(0x1)
1c0007c4:	5800b60b 	beq	$r16,$r11,180(0xb4) # 1c000878 <select_sort+0x208>
1c0007c8:	02800812 	addi.w	$r18,$r0,2(0x2)
1c0007cc:	58009612 	beq	$r16,$r18,148(0x94) # 1c000860 <select_sort+0x1f0>
1c0007d0:	02800c13 	addi.w	$r19,$r0,3(0x3)
1c0007d4:	58007613 	beq	$r16,$r19,116(0x74) # 1c000848 <select_sort+0x1d8>
1c0007d8:	02801007 	addi.w	$r7,$r0,4(0x4)
1c0007dc:	58005607 	beq	$r16,$r7,84(0x54) # 1c000830 <select_sort+0x1c0>
1c0007e0:	02801404 	addi.w	$r4,$r0,5(0x5)
1c0007e4:	58003604 	beq	$r16,$r4,52(0x34) # 1c000818 <select_sort+0x1a8>
1c0007e8:	0280180a 	addi.w	$r10,$r0,6(0x6)
1c0007ec:	5800160a 	beq	$r16,$r10,20(0x14) # 1c000800 <select_sort+0x190>
1c0007f0:	2880122c 	ld.w	$r12,$r17,4(0x4)
1c0007f4:	60019989 	blt	$r12,$r9,408(0x198) # 1c00098c <select_sort+0x31c>
1c0007f8:	0280050d 	addi.w	$r13,$r8,1(0x1)
1c0007fc:	0280122c 	addi.w	$r12,$r17,4(0x4)
1c000800:	28801190 	ld.w	$r16,$r12,4(0x4)
1c000804:	64000e0e 	bge	$r16,$r14,12(0xc) # 1c000810 <select_sort+0x1a0>
1c000808:	0015020e 	move	$r14,$r16
1c00080c:	001501af 	move	$r15,$r13
1c000810:	028005ad 	addi.w	$r13,$r13,1(0x1)
1c000814:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000818:	2880118b 	ld.w	$r11,$r12,4(0x4)
1c00081c:	64000d6e 	bge	$r11,$r14,12(0xc) # 1c000828 <select_sort+0x1b8>
1c000820:	0015016e 	move	$r14,$r11
1c000824:	001501af 	move	$r15,$r13
1c000828:	028005ad 	addi.w	$r13,$r13,1(0x1)
1c00082c:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000830:	28801192 	ld.w	$r18,$r12,4(0x4)
1c000834:	64000e4e 	bge	$r18,$r14,12(0xc) # 1c000840 <select_sort+0x1d0>
1c000838:	0015024e 	move	$r14,$r18
1c00083c:	001501af 	move	$r15,$r13
1c000840:	028005ad 	addi.w	$r13,$r13,1(0x1)
1c000844:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000848:	28801193 	ld.w	$r19,$r12,4(0x4)
1c00084c:	64000e6e 	bge	$r19,$r14,12(0xc) # 1c000858 <select_sort+0x1e8>
1c000850:	0015026e 	move	$r14,$r19
1c000854:	001501af 	move	$r15,$r13
1c000858:	028005ad 	addi.w	$r13,$r13,1(0x1)
1c00085c:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000860:	28801187 	ld.w	$r7,$r12,4(0x4)
1c000864:	64000cee 	bge	$r7,$r14,12(0xc) # 1c000870 <select_sort+0x200>
1c000868:	001500ee 	move	$r14,$r7
1c00086c:	001501af 	move	$r15,$r13
1c000870:	028005ad 	addi.w	$r13,$r13,1(0x1)
1c000874:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000878:	28801184 	ld.w	$r4,$r12,4(0x4)
1c00087c:	64000c8e 	bge	$r4,$r14,12(0xc) # 1c000888 <select_sort+0x218>
1c000880:	0015008e 	move	$r14,$r4
1c000884:	001501af 	move	$r15,$r13
1c000888:	028005ad 	addi.w	$r13,$r13,1(0x1)
1c00088c:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000890:	5800b1a5 	beq	$r13,$r5,176(0xb0) # 1c000940 <select_sort+0x2d0>
1c000894:	2880118a 	ld.w	$r10,$r12,4(0x4)
1c000898:	64000d4e 	bge	$r10,$r14,12(0xc) # 1c0008a4 <select_sort+0x234>
1c00089c:	0015014e 	move	$r14,$r10
1c0008a0:	001501af 	move	$r15,$r13
1c0008a4:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c0008a8:	28801190 	ld.w	$r16,$r12,4(0x4)
1c0008ac:	028005ad 	addi.w	$r13,$r13,1(0x1)
1c0008b0:	64000e0e 	bge	$r16,$r14,12(0xc) # 1c0008bc <select_sort+0x24c>
1c0008b4:	0015020e 	move	$r14,$r16
1c0008b8:	001501af 	move	$r15,$r13
1c0008bc:	2880218b 	ld.w	$r11,$r12,8(0x8)
1c0008c0:	028005b2 	addi.w	$r18,$r13,1(0x1)
1c0008c4:	64000d6e 	bge	$r11,$r14,12(0xc) # 1c0008d0 <select_sort+0x260>
1c0008c8:	0015016e 	move	$r14,$r11
1c0008cc:	0015024f 	move	$r15,$r18
1c0008d0:	28803193 	ld.w	$r19,$r12,12(0xc)
1c0008d4:	028009a7 	addi.w	$r7,$r13,2(0x2)
1c0008d8:	64000e6e 	bge	$r19,$r14,12(0xc) # 1c0008e4 <select_sort+0x274>
1c0008dc:	0015026e 	move	$r14,$r19
1c0008e0:	001500ef 	move	$r15,$r7
1c0008e4:	2880418a 	ld.w	$r10,$r12,16(0x10)
1c0008e8:	02800da4 	addi.w	$r4,$r13,3(0x3)
1c0008ec:	64000d4e 	bge	$r10,$r14,12(0xc) # 1c0008f8 <select_sort+0x288>
1c0008f0:	0015014e 	move	$r14,$r10
1c0008f4:	0015008f 	move	$r15,$r4
1c0008f8:	28805190 	ld.w	$r16,$r12,20(0x14)
1c0008fc:	028011ab 	addi.w	$r11,$r13,4(0x4)
1c000900:	64000e0e 	bge	$r16,$r14,12(0xc) # 1c00090c <select_sort+0x29c>
1c000904:	0015020e 	move	$r14,$r16
1c000908:	0015016f 	move	$r15,$r11
1c00090c:	28806192 	ld.w	$r18,$r12,24(0x18)
1c000910:	028015b3 	addi.w	$r19,$r13,5(0x5)
1c000914:	64000e4e 	bge	$r18,$r14,12(0xc) # 1c000920 <select_sort+0x2b0>
1c000918:	0015024e 	move	$r14,$r18
1c00091c:	0015026f 	move	$r15,$r19
1c000920:	28807187 	ld.w	$r7,$r12,28(0x1c)
1c000924:	028019aa 	addi.w	$r10,$r13,6(0x6)
1c000928:	64000cee 	bge	$r7,$r14,12(0xc) # 1c000934 <select_sort+0x2c4>
1c00092c:	001500ee 	move	$r14,$r7
1c000930:	0015014f 	move	$r15,$r10
1c000934:	02801dad 	addi.w	$r13,$r13,7(0x7)
1c000938:	0280718c 	addi.w	$r12,$r12,28(0x1c)
1c00093c:	5fff59a5 	bne	$r13,$r5,-168(0x3ff58) # 1c000894 <select_sort+0x224>
1c000940:	004089e4 	slli.w	$r4,$r15,0x2
1c000944:	2980022e 	st.w	$r14,$r17,0
1c000948:	00101290 	add.w	$r16,$r20,$r4
1c00094c:	29800209 	st.w	$r9,$r16,0
1c000950:	0015010f 	move	$r15,$r8
1c000954:	02801231 	addi.w	$r17,$r17,4(0x4)
1c000958:	5ffe44c8 	bne	$r6,$r8,-444(0x3fe44) # 1c00079c <select_sort+0x12c>
1c00095c:	1c000024 	pcaddu12i	$r4,1(0x1)
1c000960:	28b6a084 	ld.w	$r4,$r4,-600(0xda8)
1c000964:	4c000020 	jirl	$r0,$r1,0
1c000968:	004089e4 	slli.w	$r4,$r15,0x2
1c00096c:	0015012e 	move	$r14,$r9
1c000970:	2980022e 	st.w	$r14,$r17,0
1c000974:	00101290 	add.w	$r16,$r20,$r4
1c000978:	29800209 	st.w	$r9,$r16,0
1c00097c:	0015010f 	move	$r15,$r8
1c000980:	02801231 	addi.w	$r17,$r17,4(0x4)
1c000984:	5ffe18c8 	bne	$r6,$r8,-488(0x3fe18) # 1c00079c <select_sort+0x12c>
1c000988:	53ffd7ff 	b	-44(0xfffffd4) # 1c00095c <select_sort+0x2ec>
1c00098c:	0015018e 	move	$r14,$r12
1c000990:	0015010f 	move	$r15,$r8
1c000994:	53fe67ff 	b	-412(0xffffe64) # 1c0007f8 <select_sort+0x188>
1c000998:	2880008d 	ld.w	$r13,$r4,0
1c00099c:	0280128c 	addi.w	$r12,$r20,4(0x4)
1c0009a0:	001501e4 	move	$r4,$r15
1c0009a4:	2980028d 	st.w	$r13,$r20,0
1c0009a8:	53fd2fff 	b	-724(0xffffd2c) # 1c0006d4 <select_sort+0x64>
1c0009ac:	1c000034 	pcaddu12i	$r20,1(0x1)
1c0009b0:	28b56294 	ld.w	$r20,$r20,-680(0xd58)
1c0009b4:	53fdd3ff 	b	-560(0xffffdd0) # 1c000784 <select_sort+0x114>
1c0009b8:	03400000 	andi	$r0,$r0,0x0
1c0009bc:	03400000 	andi	$r0,$r0,0x0

1c0009c0 <printf>:
printf():
/home/wwt/work/perf_func/lib/printf.c:2
1c0009c0:	02be8063 	addi.w	$r3,$r3,-96(0xfa0)
1c0009c4:	2980b07a 	st.w	$r26,$r3,44(0x2c)
1c0009c8:	2980f061 	st.w	$r1,$r3,60(0x3c)
1c0009cc:	2980e077 	st.w	$r23,$r3,56(0x38)
1c0009d0:	2980d078 	st.w	$r24,$r3,52(0x34)
1c0009d4:	2980c079 	st.w	$r25,$r3,48(0x30)
1c0009d8:	2980a07b 	st.w	$r27,$r3,40(0x28)
1c0009dc:	2980907c 	st.w	$r28,$r3,36(0x24)
/home/wwt/work/perf_func/lib/printf.c:10
1c0009e0:	28000097 	ld.b	$r23,$r4,0
/home/wwt/work/perf_func/lib/printf.c:8
1c0009e4:	0281107a 	addi.w	$r26,$r3,68(0x44)
/home/wwt/work/perf_func/lib/printf.c:2
1c0009e8:	29811065 	st.w	$r5,$r3,68(0x44)
1c0009ec:	29812066 	st.w	$r6,$r3,72(0x48)
1c0009f0:	29813067 	st.w	$r7,$r3,76(0x4c)
1c0009f4:	29814068 	st.w	$r8,$r3,80(0x50)
1c0009f8:	29815069 	st.w	$r9,$r3,84(0x54)
1c0009fc:	2981606a 	st.w	$r10,$r3,88(0x58)
1c000a00:	2981706b 	st.w	$r11,$r3,92(0x5c)
/home/wwt/work/perf_func/lib/printf.c:8
1c000a04:	2980707a 	st.w	$r26,$r3,28(0x1c)
/home/wwt/work/perf_func/lib/printf.c:10
1c000a08:	580086e0 	beq	$r23,$r0,132(0x84) # 1c000a8c <printf+0xcc>
1c000a0c:	00150099 	move	$r25,$r4
1c000a10:	00150018 	move	$r24,$r0
1c000a14:	1c00003c 	pcaddu12i	$r28,1(0x1)
1c000a18:	02a1b39c 	addi.w	$r28,$r28,-1940(0x86c)
1c000a1c:	0280201b 	addi.w	$r27,$r0,8(0x8)
1c000a20:	50001c00 	b	28(0x1c) # 1c000a3c <printf+0x7c>
/home/wwt/work/perf_func/lib/printf.c:80
1c000a24:	001502e4 	move	$r4,$r23
1c000a28:	5401c400 	bl	452(0x1c4) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/printf.c:10 (discriminator 2)
1c000a2c:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:10
1c000a30:	0010632c 	add.w	$r12,$r25,$r24
1c000a34:	28000197 	ld.b	$r23,$r12,0
1c000a38:	580056e0 	beq	$r23,$r0,84(0x54) # 1c000a8c <printf+0xcc>
/home/wwt/work/perf_func/lib/printf.c:13
1c000a3c:	0280940c 	addi.w	$r12,$r0,37(0x25)
1c000a40:	58001aec 	beq	$r23,$r12,24(0x18) # 1c000a58 <printf+0x98>
/home/wwt/work/perf_func/lib/printf.c:79
1c000a44:	0280280c 	addi.w	$r12,$r0,10(0xa)
1c000a48:	5fffdeec 	bne	$r23,$r12,-36(0x3ffdc) # 1c000a24 <printf+0x64>
/home/wwt/work/perf_func/lib/printf.c:79 (discriminator 1)
1c000a4c:	02803404 	addi.w	$r4,$r0,13(0xd)
1c000a50:	54019c00 	bl	412(0x19c) # 1c000bec <putchar>
1c000a54:	53ffd3ff 	b	-48(0xfffffd0) # 1c000a24 <printf+0x64>
1c000a58:	0010632c 	add.w	$r12,$r25,$r24
1c000a5c:	2800058d 	ld.b	$r13,$r12,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:15
1c000a60:	02800405 	addi.w	$r5,$r0,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:17
1c000a64:	02814c10 	addi.w	$r16,$r0,83(0x53)
/home/wwt/work/perf_func/lib/printf.c:68
1c000a68:	0280280f 	addi.w	$r15,$r0,10(0xa)
/home/wwt/work/perf_func/lib/printf.c:17
1c000a6c:	02bf6dac 	addi.w	$r12,$r13,-37(0xfdb)
1c000a70:	2980306c 	st.w	$r12,$r3,12(0xc)
1c000a74:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c000a78:	68016a0c 	bltu	$r16,$r12,360(0x168) # 1c000be0 <printf+0x220>
1c000a7c:	0040898c 	slli.w	$r12,$r12,0x2
1c000a80:	0010338c 	add.w	$r12,$r28,$r12
1c000a84:	2880018c 	ld.w	$r12,$r12,0
1c000a88:	4c000180 	jirl	$r0,$r12,0
/home/wwt/work/perf_func/lib/printf.c:84
1c000a8c:	2880f061 	ld.w	$r1,$r3,60(0x3c)
1c000a90:	2880e077 	ld.w	$r23,$r3,56(0x38)
1c000a94:	2880d078 	ld.w	$r24,$r3,52(0x34)
1c000a98:	2880c079 	ld.w	$r25,$r3,48(0x30)
1c000a9c:	2880b07a 	ld.w	$r26,$r3,44(0x2c)
1c000aa0:	2880a07b 	ld.w	$r27,$r3,40(0x28)
1c000aa4:	2880907c 	ld.w	$r28,$r3,36(0x24)
1c000aa8:	00150004 	move	$r4,$r0
1c000aac:	02818063 	addi.w	$r3,$r3,96(0x60)
1c000ab0:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/printf.c:65
1c000ab4:	0010632c 	add.w	$r12,$r25,$r24
1c000ab8:	2800098d 	ld.b	$r13,$r12,2(0x2)
1c000abc:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:67 (discriminator 1)
1c000ac0:	02bf3dac 	addi.w	$r12,$r13,-49(0xfcf)
/home/wwt/work/perf_func/lib/printf.c:67
1c000ac4:	2980306c 	st.w	$r12,$r3,12(0xc)
1c000ac8:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
1c000acc:	00150005 	move	$r5,$r0
1c000ad0:	6bff9f6c 	bltu	$r27,$r12,-100(0x3ff9c) # 1c000a6c <printf+0xac>
/home/wwt/work/perf_func/lib/printf.c:68
1c000ad4:	001c3ca5 	mul.w	$r5,$r5,$r15
/home/wwt/work/perf_func/lib/printf.c:67
1c000ad8:	02800718 	addi.w	$r24,$r24,1(0x1)
1c000adc:	0010632c 	add.w	$r12,$r25,$r24
/home/wwt/work/perf_func/lib/printf.c:68
1c000ae0:	02bf41ae 	addi.w	$r14,$r13,-48(0xfd0)
/home/wwt/work/perf_func/lib/printf.c:67
1c000ae4:	2800058d 	ld.b	$r13,$r12,1(0x1)
1c000ae8:	02bf3dac 	addi.w	$r12,$r13,-49(0xfcf)
1c000aec:	2980306c 	st.w	$r12,$r3,12(0xc)
1c000af0:	2a00306c 	ld.bu	$r12,$r3,12(0xc)
/home/wwt/work/perf_func/lib/printf.c:68
1c000af4:	001015c5 	add.w	$r5,$r14,$r5
/home/wwt/work/perf_func/lib/printf.c:67
1c000af8:	6fffdf6c 	bgeu	$r27,$r12,-36(0x3ffdc) # 1c000ad4 <printf+0x114>
1c000afc:	53ff73ff 	b	-144(0xfffff70) # 1c000a6c <printf+0xac>
/home/wwt/work/perf_func/lib/printf.c:50
1c000b00:	28800344 	ld.w	$r4,$r26,0
1c000b04:	00150007 	move	$r7,$r0
1c000b08:	02800806 	addi.w	$r6,$r0,2(0x2)
1c000b0c:	5401cc00 	bl	460(0x1cc) # 1c000cd8 <printbase>
/home/wwt/work/perf_func/lib/printf.c:51
1c000b10:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:52
1c000b14:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:53
1c000b18:	53ff17ff 	b	-236(0xfffff14) # 1c000a2c <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:25
1c000b1c:	28800344 	ld.w	$r4,$r26,0
/home/wwt/work/perf_func/lib/printf.c:27
1c000b20:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:26
1c000b24:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:25
1c000b28:	5400c400 	bl	196(0xc4) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/printf.c:28
1c000b2c:	53ff03ff 	b	-256(0xfffff00) # 1c000a2c <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:35
1c000b30:	28800344 	ld.w	$r4,$r26,0
1c000b34:	02800407 	addi.w	$r7,$r0,1(0x1)
1c000b38:	02802806 	addi.w	$r6,$r0,10(0xa)
1c000b3c:	54019c00 	bl	412(0x19c) # 1c000cd8 <printbase>
/home/wwt/work/perf_func/lib/printf.c:36
1c000b40:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:37
1c000b44:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:38
1c000b48:	53fee7ff 	b	-284(0xffffee4) # 1c000a2c <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:40
1c000b4c:	28800344 	ld.w	$r4,$r26,0
1c000b50:	00150007 	move	$r7,$r0
1c000b54:	02802806 	addi.w	$r6,$r0,10(0xa)
1c000b58:	54018000 	bl	384(0x180) # 1c000cd8 <printbase>
/home/wwt/work/perf_func/lib/printf.c:41
1c000b5c:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:42
1c000b60:	02800b18 	addi.w	$r24,$r24,2(0x2)
/home/wwt/work/perf_func/lib/printf.c:43
1c000b64:	53fecbff 	b	-312(0xffffec8) # 1c000a2c <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:45
1c000b68:	28800344 	ld.w	$r4,$r26,0
1c000b6c:	00150007 	move	$r7,$r0
1c000b70:	02802006 	addi.w	$r6,$r0,8(0x8)
1c000b74:	54016400 	bl	356(0x164) # 1c000cd8 <printbase>
/home/wwt/work/perf_func/lib/printf.c:46
1c000b78:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:47
1c000b7c:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:48
1c000b80:	53feafff 	b	-340(0xffffeac) # 1c000a2c <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:56
1c000b84:	28800344 	ld.w	$r4,$r26,0
1c000b88:	00150007 	move	$r7,$r0
1c000b8c:	02804006 	addi.w	$r6,$r0,16(0x10)
1c000b90:	54014800 	bl	328(0x148) # 1c000cd8 <printbase>
/home/wwt/work/perf_func/lib/printf.c:57
1c000b94:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:58
1c000b98:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:59
1c000b9c:	53fe93ff 	b	-368(0xffffe90) # 1c000a2c <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:20
1c000ba0:	28800344 	ld.w	$r4,$r26,0
/home/wwt/work/perf_func/lib/printf.c:22
1c000ba4:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:21
1c000ba8:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:20
1c000bac:	54008c00 	bl	140(0x8c) # 1c000c38 <putstring>
/home/wwt/work/perf_func/lib/printf.c:23
1c000bb0:	53fe7fff 	b	-388(0xffffe7c) # 1c000a2c <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:30
1c000bb4:	28800344 	ld.w	$r4,$r26,0
1c000bb8:	00150007 	move	$r7,$r0
1c000bbc:	02802806 	addi.w	$r6,$r0,10(0xa)
1c000bc0:	54011800 	bl	280(0x118) # 1c000cd8 <printbase>
/home/wwt/work/perf_func/lib/printf.c:31
1c000bc4:	0280135a 	addi.w	$r26,$r26,4(0x4)
/home/wwt/work/perf_func/lib/printf.c:32
1c000bc8:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:33
1c000bcc:	53fe63ff 	b	-416(0xffffe60) # 1c000a2c <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:61
1c000bd0:	02809404 	addi.w	$r4,$r0,37(0x25)
1c000bd4:	54001800 	bl	24(0x18) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/printf.c:62
1c000bd8:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/printf.c:63
1c000bdc:	53fe53ff 	b	-432(0xffffe50) # 1c000a2c <printf+0x6c>
/home/wwt/work/perf_func/lib/printf.c:73
1c000be0:	02809404 	addi.w	$r4,$r0,37(0x25)
1c000be4:	54000800 	bl	8(0x8) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/printf.c:74
1c000be8:	53fe47ff 	b	-444(0xffffe44) # 1c000a2c <printf+0x6c>

1c000bec <putchar>:
putchar():
/home/wwt/work/perf_func/lib/putchar.c:2
1c000bec:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000bf0:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/putchar.c:9
1c000bf4:	157f5ff9 	lu12i.w	$r25,-263425(0xbfaff)
1c000bf8:	03bc4339 	ori	$r25,$r25,0xf10
1c000bfc:	29000324 	st.b	$r4,$r25,0
1c000c00:	03400000 	andi	$r0,$r0,0x0
/home/wwt/work/perf_func/lib/putchar.c:5
1c000c04:	00150004 	move	$r4,$r0
1c000c08:	28803079 	ld.w	$r25,$r3,12(0xc)
1c000c0c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000c10:	4c000020 	jirl	$r0,$r1,0

1c000c14 <tgt_putchar>:
tgt_putchar():
/home/wwt/work/perf_func/lib/putchar.c:8
1c000c14:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000c18:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/putchar.c:9
1c000c1c:	157f5ff9 	lu12i.w	$r25,-263425(0xbfaff)
1c000c20:	03bc4339 	ori	$r25,$r25,0xf10
1c000c24:	29000324 	st.b	$r4,$r25,0
1c000c28:	03400000 	andi	$r0,$r0,0x0
/home/wwt/work/perf_func/lib/putchar.c:16
1c000c2c:	28803079 	ld.w	$r25,$r3,12(0xc)
1c000c30:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000c34:	4c000020 	jirl	$r0,$r1,0

1c000c38 <putstring>:
putstring():
/home/wwt/work/perf_func/lib/puts.c:2
1c000c38:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000c3c:	29803061 	st.w	$r1,$r3,12(0xc)
1c000c40:	29802077 	st.w	$r23,$r3,8(0x8)
1c000c44:	29801078 	st.w	$r24,$r3,4(0x4)
1c000c48:	29800079 	st.w	$r25,$r3,0
/home/wwt/work/perf_func/lib/puts.c:4
1c000c4c:	28000097 	ld.b	$r23,$r4,0
1c000c50:	580042e0 	beq	$r23,$r0,64(0x40) # 1c000c90 <putstring+0x58>
1c000c54:	00150098 	move	$r24,$r4
/home/wwt/work/perf_func/lib/puts.c:6
1c000c58:	02802819 	addi.w	$r25,$r0,10(0xa)
1c000c5c:	50001400 	b	20(0x14) # 1c000c70 <putstring+0x38>
/home/wwt/work/perf_func/lib/puts.c:7
1c000c60:	001502e4 	move	$r4,$r23
1c000c64:	57ff8bff 	bl	-120(0xfffff88) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/puts.c:4
1c000c68:	28000317 	ld.b	$r23,$r24,0
1c000c6c:	580026e0 	beq	$r23,$r0,36(0x24) # 1c000c90 <putstring+0x58>
/home/wwt/work/perf_func/lib/puts.c:8
1c000c70:	02800718 	addi.w	$r24,$r24,1(0x1)
/home/wwt/work/perf_func/lib/puts.c:6
1c000c74:	5fffeef9 	bne	$r23,$r25,-20(0x3ffec) # 1c000c60 <putstring+0x28>
/home/wwt/work/perf_func/lib/puts.c:6 (discriminator 1)
1c000c78:	02803404 	addi.w	$r4,$r0,13(0xd)
1c000c7c:	57ff73ff 	bl	-144(0xfffff70) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/puts.c:7
1c000c80:	001502e4 	move	$r4,$r23
1c000c84:	57ff6bff 	bl	-152(0xfffff68) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/puts.c:4
1c000c88:	28000317 	ld.b	$r23,$r24,0
1c000c8c:	5fffe6e0 	bne	$r23,$r0,-28(0x3ffe4) # 1c000c70 <putstring+0x38>
/home/wwt/work/perf_func/lib/puts.c:11
1c000c90:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000c94:	28802077 	ld.w	$r23,$r3,8(0x8)
1c000c98:	28801078 	ld.w	$r24,$r3,4(0x4)
1c000c9c:	28800079 	ld.w	$r25,$r3,0
1c000ca0:	00150004 	move	$r4,$r0
1c000ca4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000ca8:	4c000020 	jirl	$r0,$r1,0

1c000cac <puts>:
puts():
/home/wwt/work/perf_func/lib/puts.c:15
1c000cac:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000cb0:	29803061 	st.w	$r1,$r3,12(0xc)
/home/wwt/work/perf_func/lib/puts.c:16
1c000cb4:	57ff87ff 	bl	-124(0xfffff84) # 1c000c38 <putstring>
/home/wwt/work/perf_func/lib/puts.c:17
1c000cb8:	02803404 	addi.w	$r4,$r0,13(0xd)
1c000cbc:	57ff33ff 	bl	-208(0xfffff30) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/puts.c:18
1c000cc0:	02802804 	addi.w	$r4,$r0,10(0xa)
1c000cc4:	57ff2bff 	bl	-216(0xfffff28) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/puts.c:20
1c000cc8:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000ccc:	00150004 	move	$r4,$r0
1c000cd0:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000cd4:	4c000020 	jirl	$r0,$r1,0

1c000cd8 <printbase>:
printbase():
/home/wwt/work/perf_func/lib/printbase.c:2
1c000cd8:	02be8063 	addi.w	$r3,$r3,-96(0xfa0)
1c000cdc:	29816077 	st.w	$r23,$r3,88(0x58)
1c000ce0:	29817061 	st.w	$r1,$r3,92(0x5c)
1c000ce4:	29815078 	st.w	$r24,$r3,84(0x54)
1c000ce8:	29814079 	st.w	$r25,$r3,80(0x50)
1c000cec:	00150097 	move	$r23,$r4
/home/wwt/work/perf_func/lib/printbase.c:7
1c000cf0:	580008e0 	beq	$r7,$r0,8(0x8) # 1c000cf8 <printbase+0x20>
/home/wwt/work/perf_func/lib/printbase.c:7 (discriminator 1)
1c000cf4:	6000a080 	blt	$r4,$r0,160(0xa0) # 1c000d94 <printbase+0xbc>
/home/wwt/work/perf_func/lib/printbase.c:14
1c000cf8:	5800bee0 	beq	$r23,$r0,188(0xbc) # 1c000db4 <printbase+0xdc>
1c000cfc:	0280406c 	addi.w	$r12,$r3,16(0x10)
1c000d00:	0280040e 	addi.w	$r14,$r0,1(0x1)
1c000d04:	001131ce 	sub.w	$r14,$r14,$r12
1c000d08:	50000800 	b	8(0x8) # 1c000d10 <printbase+0x38>
/home/wwt/work/perf_func/lib/printbase.c:17
1c000d0c:	001501b7 	move	$r23,$r13
/home/wwt/work/perf_func/lib/printbase.c:16
1c000d10:	00219aed 	mod.wu	$r13,$r23,$r6
1c000d14:	5c0008c0 	bne	$r6,$r0,8(0x8) # 1c000d1c <printbase+0x44>
1c000d18:	002a0007 	break	0x7
1c000d1c:	2900018d 	st.b	$r13,$r12,0
/home/wwt/work/perf_func/lib/printbase.c:17
1c000d20:	001031d8 	add.w	$r24,$r14,$r12
1c000d24:	00211aed 	div.wu	$r13,$r23,$r6
1c000d28:	5c0008c0 	bne	$r6,$r0,8(0x8) # 1c000d30 <printbase+0x58>
1c000d2c:	002a0007 	break	0x7
1c000d30:	0280058c 	addi.w	$r12,$r12,1(0x1)
/home/wwt/work/perf_func/lib/printbase.c:14
1c000d34:	6fffdae6 	bgeu	$r23,$r6,-40(0x3ffd8) # 1c000d0c <printbase+0x34>
/home/wwt/work/perf_func/lib/printbase.c:22
1c000d38:	600054b8 	blt	$r5,$r24,84(0x54) # 1c000d8c <printbase+0xb4>
1c000d3c:	001500b7 	move	$r23,$r5
/home/wwt/work/perf_func/lib/printbase.c:25
1c000d40:	02802419 	addi.w	$r25,$r0,9(0x9)
/home/wwt/work/perf_func/lib/printbase.c:24
1c000d44:	0280406c 	addi.w	$r12,$r3,16(0x10)
1c000d48:	00105d8c 	add.w	$r12,$r12,$r23
1c000d4c:	0280c004 	addi.w	$r4,$r0,48(0x30)
1c000d50:	60001717 	blt	$r24,$r23,20(0x14) # 1c000d64 <printbase+0x8c>
1c000d54:	283ffd8c 	ld.b	$r12,$r12,-1(0xfff)
/home/wwt/work/perf_func/lib/printbase.c:25 (discriminator 1)
1c000d58:	02815d84 	addi.w	$r4,$r12,87(0x57)
1c000d5c:	60000b2c 	blt	$r25,$r12,8(0x8) # 1c000d64 <printbase+0x8c>
1c000d60:	0280c184 	addi.w	$r4,$r12,48(0x30)
1c000d64:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c000d68:	57fe87ff 	bl	-380(0xffffe84) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/printbase.c:22 (discriminator 4)
1c000d6c:	5fffdae0 	bne	$r23,$r0,-40(0x3ffd8) # 1c000d44 <printbase+0x6c>
/home/wwt/work/perf_func/lib/printbase.c:28
1c000d70:	28817061 	ld.w	$r1,$r3,92(0x5c)
1c000d74:	28816077 	ld.w	$r23,$r3,88(0x58)
1c000d78:	28815078 	ld.w	$r24,$r3,84(0x54)
1c000d7c:	28814079 	ld.w	$r25,$r3,80(0x50)
1c000d80:	00150004 	move	$r4,$r0
1c000d84:	02818063 	addi.w	$r3,$r3,96(0x60)
1c000d88:	4c000020 	jirl	$r0,$r1,0
/home/wwt/work/perf_func/lib/printbase.c:22
1c000d8c:	00150305 	move	$r5,$r24
1c000d90:	53ffafff 	b	-84(0xfffffac) # 1c000d3c <printbase+0x64>
/home/wwt/work/perf_func/lib/printbase.c:10
1c000d94:	0280b404 	addi.w	$r4,$r0,45(0x2d)
1c000d98:	29803066 	st.w	$r6,$r3,12(0xc)
1c000d9c:	29802065 	st.w	$r5,$r3,8(0x8)
1c000da0:	57fe4fff 	bl	-436(0xffffe4c) # 1c000bec <putchar>
/home/wwt/work/perf_func/lib/printbase.c:9
1c000da4:	00115c17 	sub.w	$r23,$r0,$r23
/home/wwt/work/perf_func/lib/printbase.c:10
1c000da8:	28802065 	ld.w	$r5,$r3,8(0x8)
1c000dac:	28803066 	ld.w	$r6,$r3,12(0xc)
1c000db0:	53ff4fff 	b	-180(0xfffff4c) # 1c000cfc <printbase+0x24>
/home/wwt/work/perf_func/lib/printbase.c:22
1c000db4:	67ffbc05 	bge	$r0,$r5,-68(0x3ffbc) # 1c000d70 <printbase+0x98>
1c000db8:	00150018 	move	$r24,$r0
1c000dbc:	53ff83ff 	b	-128(0xfffff80) # 1c000d3c <printbase+0x64>

1c000dc0 <get_count>:
get_count():
/home/wwt/work/perf_func/lib/time.c:18
1c000dc0:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000dc4:	29803079 	st.w	$r25,$r3,12(0xc)
/home/wwt/work/perf_func/lib/time.c:7
1c000dc8:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c000dcc:	28800324 	ld.w	$r4,$r25,0
/home/wwt/work/perf_func/lib/time.c:20
1c000dd0:	28803079 	ld.w	$r25,$r3,12(0xc)
1c000dd4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000dd8:	4c000020 	jirl	$r0,$r1,0

1c000ddc <_get_count>:
_get_count():
/home/wwt/work/perf_func/lib/time.c:20
1c000ddc:	53ffe7ff 	b	-28(0xfffffe4) # 1c000dc0 <get_count>

1c000de0 <get_count_my>:
get_count_my():
/home/wwt/work/perf_func/lib/time.c:25
1c000de0:	00006004 	rdtimel.w	$r4,$r0
/home/wwt/work/perf_func/lib/time.c:30
1c000de4:	4c000020 	jirl	$r0,$r1,0

1c000de8 <clock_gettime>:
clock_gettime():
/home/wwt/work/perf_func/lib/time.c:33
1c000de8:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000dec:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c000df0:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c000df4:	2880032f 	ld.w	$r15,$r25,0
clock_gettime():
/home/wwt/work/perf_func/lib/time.c:36
1c000df8:	0280280d 	addi.w	$r13,$r0,10(0xa)
1c000dfc:	001c35ed 	mul.w	$r13,$r15,$r13
/home/wwt/work/perf_func/lib/time.c:37
1c000e00:	02819010 	addi.w	$r16,$r0,100(0x64)
/home/wwt/work/perf_func/lib/time.c:36
1c000e04:	028fa00c 	addi.w	$r12,$r0,1000(0x3e8)
/home/wwt/work/perf_func/lib/time.c:37
1c000e08:	002141ee 	div.wu	$r14,$r15,$r16
1c000e0c:	5c000a00 	bne	$r16,$r0,8(0x8) # 1c000e14 <clock_gettime+0x2c>
1c000e10:	002a0007 	break	0x7
1c000e14:	0021b1d1 	mod.wu	$r17,$r14,$r12
1c000e18:	5c000980 	bne	$r12,$r0,8(0x8) # 1c000e20 <clock_gettime+0x38>
1c000e1c:	002a0007 	break	0x7
/home/wwt/work/perf_func/lib/time.c:38
1c000e20:	1400030e 	lu12i.w	$r14,24(0x18)
1c000e24:	039a81ce 	ori	$r14,$r14,0x6a0
1c000e28:	002139f0 	div.wu	$r16,$r15,$r14
1c000e2c:	5c0009c0 	bne	$r14,$r0,8(0x8) # 1c000e34 <clock_gettime+0x4c>
1c000e30:	002a0007 	break	0x7
1c000e34:	0021b20e 	mod.wu	$r14,$r16,$r12
1c000e38:	5c000980 	bne	$r12,$r0,8(0x8) # 1c000e40 <clock_gettime+0x58>
1c000e3c:	002a0007 	break	0x7
/home/wwt/work/perf_func/lib/time.c:37
1c000e40:	298020b1 	st.w	$r17,$r5,8(0x8)
/home/wwt/work/perf_func/lib/time.c:38
1c000e44:	298030ae 	st.w	$r14,$r5,12(0xc)
/home/wwt/work/perf_func/lib/time.c:39
1c000e48:	298000a0 	st.w	$r0,$r5,0
/home/wwt/work/perf_func/lib/time.c:42
1c000e4c:	28803079 	ld.w	$r25,$r3,12(0xc)
1c000e50:	00150004 	move	$r4,$r0
/home/wwt/work/perf_func/lib/time.c:36
1c000e54:	0021b1ae 	mod.wu	$r14,$r13,$r12
1c000e58:	5c000980 	bne	$r12,$r0,8(0x8) # 1c000e60 <clock_gettime+0x78>
1c000e5c:	002a0007 	break	0x7
1c000e60:	298010ae 	st.w	$r14,$r5,4(0x4)
/home/wwt/work/perf_func/lib/time.c:42
1c000e64:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000e68:	4c000020 	jirl	$r0,$r1,0

1c000e6c <get_clock>:
get_clock():
/home/wwt/work/perf_func/lib/time.c:42
1c000e6c:	53ff57ff 	b	-172(0xfffff54) # 1c000dc0 <get_count>

1c000e70 <get_ns>:
get_ns():
/home/wwt/work/perf_func/lib/time.c:52
1c000e70:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000e74:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c000e78:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c000e7c:	28800324 	ld.w	$r4,$r25,0
get_ns():
/home/wwt/work/perf_func/lib/time.c:55
1c000e80:	0280280c 	addi.w	$r12,$r0,10(0xa)
/home/wwt/work/perf_func/lib/time.c:57
1c000e84:	28803079 	ld.w	$r25,$r3,12(0xc)
1c000e88:	001c3084 	mul.w	$r4,$r4,$r12
1c000e8c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000e90:	4c000020 	jirl	$r0,$r1,0

1c000e94 <get_us>:
get_us():
/home/wwt/work/perf_func/lib/time.c:61
1c000e94:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000e98:	29803079 	st.w	$r25,$r3,12(0xc)
_get_count():
/home/wwt/work/perf_func/lib/time.c:7
1c000e9c:	157f5fd9 	lu12i.w	$r25,-263426(0xbfafe)
1c000ea0:	28800324 	ld.w	$r4,$r25,0
get_us():
/home/wwt/work/perf_func/lib/time.c:64
1c000ea4:	0281900c 	addi.w	$r12,$r0,100(0x64)
/home/wwt/work/perf_func/lib/time.c:66
1c000ea8:	28803079 	ld.w	$r25,$r3,12(0xc)
1c000eac:	0021308d 	div.wu	$r13,$r4,$r12
1c000eb0:	5c000980 	bne	$r12,$r0,8(0x8) # 1c000eb8 <get_us+0x24>
1c000eb4:	002a0007 	break	0x7
1c000eb8:	001501a4 	move	$r4,$r13
1c000ebc:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000ec0:	4c000020 	jirl	$r0,$r1,0

Disassembly of section .data:

1c000ec4 <a_ref-0x9c>:
1c000ec4:	656c6573 	bge	$r11,$r19,93284(0x16c64) # 1c017b28 <_stack+0x6778>
1c000ec8:	73207463 	0x73207463
1c000ecc:	2074726f 	ll.w	$r15,$r19,29808(0x7470)
1c000ed0:	74736574 	xvmin.w	$xr20,$xr11,$xr25
1c000ed4:	67656220 	bge	$r17,$r0,-39584(0x36560) # 1bff7434 <data_size+0x1bff6bec>
1c000ed8:	002e6e69 	0x002e6e69
1c000edc:	656c6573 	bge	$r11,$r19,93284(0x16c64) # 1c017b40 <_stack+0x6790>
1c000ee0:	73207463 	0x73207463
1c000ee4:	2074726f 	ll.w	$r15,$r19,29808(0x7470)
1c000ee8:	53534150 	b	88298304(0x5435340) # 21436228 <_stack+0x5424e78>
1c000eec:	00000021 	0x00000021
1c000ef0:	656c6573 	bge	$r11,$r19,93284(0x16c64) # 1c017b54 <_stack+0x67a4>
1c000ef4:	73207463 	0x73207463
1c000ef8:	2074726f 	ll.w	$r15,$r19,29808(0x7470)
1c000efc:	4f525245 	jirl	$r5,$r18,-44464(0x35250)
1c000f00:	21212152 	sc.w	$r18,$r10,8480(0x2120)
1c000f04:	00000000 	0x00000000
1c000f08:	656c6573 	bge	$r11,$r19,93284(0x16c64) # 1c017b6c <_stack+0x67bc>
1c000f0c:	73207463 	0x73207463
1c000f10:	3a74726f 	0x3a74726f
1c000f14:	746f5420 	0x746f5420
1c000f18:	43206c61 	beqz	$r3,467052(0x7206c) # 1c072f84 <_stack+0x61bd4>
1c000f1c:	746e756f 	0x746e756f
1c000f20:	436f5328 	beqz	$r25,2322256(0x236f50) # 1c237e70 <_stack+0x226ac0>
1c000f24:	756f6320 	0x756f6320
1c000f28:	2029746e 	ll.w	$r14,$r3,10612(0x2974)
1c000f2c:	7830203d 	0x7830203d
1c000f30:	000a7825 	0x000a7825
1c000f34:	656c6573 	bge	$r11,$r19,93284(0x16c64) # 1c017b98 <_stack+0x67e8>
1c000f38:	73207463 	0x73207463
1c000f3c:	3a74726f 	0x3a74726f
1c000f40:	746f5420 	0x746f5420
1c000f44:	43206c61 	beqz	$r3,467052(0x7206c) # 1c072fb0 <_stack+0x61c00>
1c000f48:	746e756f 	0x746e756f
1c000f4c:	55504328 	bl	-56537024(0xca15040) # 18a15f8c <data_size+0x18a15744>
1c000f50:	756f6320 	0x756f6320
1c000f54:	2029746e 	ll.w	$r14,$r3,10612(0x2974)
1c000f58:	7830203d 	0x7830203d
1c000f5c:	000a7825 	0x000a7825

1c000f60 <a_ref>:
1c000f60:	00000014 	0x00000014
1c000f64:	000000ab 	0x000000ab
1c000f68:	0000014b 	0x0000014b
1c000f6c:	00000257 	0x00000257
1c000f70:	000002e5 	0x000002e5
1c000f74:	000002f8 	0x000002f8
1c000f78:	0000045e 	0x0000045e
1c000f7c:	000005da 	0x000005da
1c000f80:	000005f4 	0x000005f4
1c000f84:	0000062f 	0x0000062f
1c000f88:	00000736 	0x00000736
1c000f8c:	000007b8 	0x000007b8
1c000f90:	00000810 	0x00000810
1c000f94:	0000081f 	0x0000081f
1c000f98:	00000859 	0x00000859
1c000f9c:	000008a4 	0x000008a4
1c000fa0:	000008a5 	0x000008a5
1c000fa4:	0000096c 	0x0000096c
1c000fa8:	00000a16 	0x00000a16
1c000fac:	00000afb 	0x00000afb
1c000fb0:	00000b21 	0x00000b21
1c000fb4:	00000bf8 	0x00000bf8
1c000fb8:	00000c49 	0x00000c49
1c000fbc:	00000cc6 	0x00000cc6
1c000fc0:	00000ce5 	0x00000ce5
1c000fc4:	00000e1f 	0x00000e1f
1c000fc8:	00000e75 	0x00000e75
1c000fcc:	00000eae 	0x00000eae
1c000fd0:	00001079 	clo.w	$r25,$r3
1c000fd4:	000010d0 	clo.w	$r16,$r6
1c000fd8:	000010f8 	clo.w	$r24,$r7
1c000fdc:	00001254 	clo.w	$r20,$r18
1c000fe0:	0000135f 	clo.w	$r31,$r26
1c000fe4:	00001473 	clz.w	$r19,$r3
1c000fe8:	000014fd 	clz.w	$r29,$r7
1c000fec:	000015f4 	clz.w	$r20,$r15
1c000ff0:	000015f8 	clz.w	$r24,$r15
1c000ff4:	00001646 	clz.w	$r6,$r18
1c000ff8:	000017b7 	clz.w	$r23,$r29
1c000ffc:	000017c4 	clz.w	$r4,$r30
1c001000:	000017da 	clz.w	$r26,$r30
1c001004:	00001824 	cto.w	$r4,$r1
1c001008:	00001863 	cto.w	$r3,$r3
1c00100c:	00001b60 	cto.w	$r0,$r27
1c001010:	00001cd7 	ctz.w	$r23,$r6
1c001014:	00001daf 	ctz.w	$r15,$r13
1c001018:	00001dca 	ctz.w	$r10,$r14
1c00101c:	00001e1e 	ctz.w	$r30,$r16
1c001020:	00001e4f 	ctz.w	$r15,$r18
1c001024:	000020ad 	clo.d	$r13,$r5
1c001028:	000020fe 	clo.d	$r30,$r7
1c00102c:	00002237 	clo.d	$r23,$r17
1c001030:	000022b1 	clo.d	$r17,$r21
1c001034:	00002314 	clo.d	$r20,$r24
1c001038:	000024be 	clz.d	$r30,$r5
1c00103c:	000024ca 	clz.d	$r10,$r6
1c001040:	00002550 	clz.d	$r16,$r10
1c001044:	00002560 	clz.d	$r0,$r11
1c001048:	00002610 	clz.d	$r16,$r16
1c00104c:	000026a7 	clz.d	$r7,$r21
1c001050:	0000273a 	clz.d	$r26,$r25
1c001054:	0000274c 	clz.d	$r12,$r26
1c001058:	00002985 	cto.d	$r5,$r12
1c00105c:	00002986 	cto.d	$r6,$r12
1c001060:	0000299f 	cto.d	$r31,$r12
1c001064:	00002a0d 	cto.d	$r13,$r16
1c001068:	00002b87 	cto.d	$r7,$r28
1c00106c:	00002bcd 	cto.d	$r13,$r30
1c001070:	00002c57 	ctz.d	$r23,$r2
1c001074:	00002c8e 	ctz.d	$r14,$r4
1c001078:	00002d18 	ctz.d	$r24,$r8
1c00107c:	00002e0f 	ctz.d	$r15,$r16
1c001080:	00002f2a 	ctz.d	$r10,$r25
1c001084:	00002f69 	ctz.d	$r9,$r27
1c001088:	00002f79 	ctz.d	$r25,$r27
1c00108c:	00002fb8 	ctz.d	$r24,$r29
1c001090:	00003197 	revb.2h	$r23,$r12
1c001094:	00003280 	revb.2h	$r0,$r20
1c001098:	0000339a 	revb.2h	$r26,$r28
1c00109c:	00003440 	revb.4h	$r0,$r2
1c0010a0:	0000354f 	revb.4h	$r15,$r10
1c0010a4:	000035a9 	revb.4h	$r9,$r13
1c0010a8:	000035b9 	revb.4h	$r25,$r13
1c0010ac:	000036e1 	revb.4h	$r1,$r23
1c0010b0:	0000389c 	revb.2w	$r28,$r4
1c0010b4:	000038ed 	revb.2w	$r13,$r7
1c0010b8:	000038f4 	revb.2w	$r20,$r7
1c0010bc:	0000399c 	revb.2w	$r28,$r12
1c0010c0:	000039e1 	revb.2w	$r1,$r15
1c0010c4:	000039ec 	revb.2w	$r12,$r15
1c0010c8:	00003a01 	revb.2w	$r1,$r16
1c0010cc:	00003b73 	revb.2w	$r19,$r27
1c0010d0:	00003c03 	revb.d	$r3,$r0
1c0010d4:	00003d22 	revb.d	$r2,$r9
1c0010d8:	00003d80 	revb.d	$r0,$r12
1c0010dc:	000040f0 	revh.2w	$r16,$r7
1c0010e0:	0000418d 	revh.2w	$r13,$r12
1c0010e4:	000041ac 	revh.2w	$r12,$r13
1c0010e8:	000041b2 	revh.2w	$r18,$r13
1c0010ec:	00004220 	revh.2w	$r0,$r17
1c0010f0:	000043a7 	revh.2w	$r7,$r29
1c0010f4:	000043c8 	revh.2w	$r8,$r30
1c0010f8:	0000441a 	revh.d	$r26,$r0
1c0010fc:	0000445a 	revh.d	$r26,$r2
1c001100:	000044ad 	revh.d	$r13,$r5
1c001104:	000044b6 	revh.d	$r22,$r5
1c001108:	000044b7 	revh.d	$r23,$r5
1c00110c:	000044e3 	revh.d	$r3,$r7
1c001110:	000044f8 	revh.d	$r24,$r7
1c001114:	00004611 	revh.d	$r17,$r16
1c001118:	0000469d 	revh.d	$r29,$r20
1c00111c:	00004723 	revh.d	$r3,$r25
1c001120:	0000475a 	revh.d	$r26,$r26
1c001124:	0000479b 	revh.d	$r27,$r28
1c001128:	00004882 	bitrev.4b	$r2,$r4
1c00112c:	000048cd 	bitrev.4b	$r13,$r6
1c001130:	0000498a 	bitrev.4b	$r10,$r12
1c001134:	00004998 	bitrev.4b	$r24,$r12
1c001138:	00004a8e 	bitrev.4b	$r14,$r20
1c00113c:	00004c07 	bitrev.8b	$r7,$r0
1c001140:	00004c2b 	bitrev.8b	$r11,$r1
1c001144:	00004c6f 	bitrev.8b	$r15,$r3
1c001148:	00004ea7 	bitrev.8b	$r7,$r21
1c00114c:	00004f93 	bitrev.8b	$r19,$r28
1c001150:	00004fb2 	bitrev.8b	$r18,$r29
1c001154:	0000508d 	bitrev.w	$r13,$r4
1c001158:	000050b6 	bitrev.w	$r22,$r5
1c00115c:	000050ff 	bitrev.w	$r31,$r7
1c001160:	0000511a 	bitrev.w	$r26,$r8
1c001164:	00005130 	bitrev.w	$r16,$r9
1c001168:	000051fd 	bitrev.w	$r29,$r15
1c00116c:	0000532f 	bitrev.w	$r15,$r25
1c001170:	00005493 	bitrev.d	$r19,$r4
1c001174:	000054b6 	bitrev.d	$r22,$r5
1c001178:	00005792 	bitrev.d	$r18,$r28
1c00117c:	000058c7 	ext.w.h	$r7,$r6
1c001180:	00005989 	ext.w.h	$r9,$r12
1c001184:	00005ae1 	ext.w.h	$r1,$r23
1c001188:	00005b3d 	ext.w.h	$r29,$r25
1c00118c:	00005b9a 	ext.w.h	$r26,$r28
1c001190:	00005cdc 	ext.w.b	$r28,$r6
1c001194:	00005ce6 	ext.w.b	$r6,$r7
1c001198:	00005cf0 	ext.w.b	$r16,$r7
1c00119c:	00005e2f 	ext.w.b	$r15,$r17
1c0011a0:	00005e84 	ext.w.b	$r4,$r20
1c0011a4:	00005eac 	ext.w.b	$r12,$r21
1c0011a8:	00005ef0 	ext.w.b	$r16,$r23
1c0011ac:	00005f16 	ext.w.b	$r22,$r24
1c0011b0:	00005f33 	ext.w.b	$r19,$r25
1c0011b4:	00005f36 	ext.w.b	$r22,$r25
1c0011b8:	0000618b 	rdtimel.w	$r11,$r12
1c0011bc:	000062ba 	rdtimel.w	$r26,$r21
1c0011c0:	000062f3 	rdtimel.w	$r19,$r23
1c0011c4:	00006302 	rdtimel.w	$r2,$r24
1c0011c8:	00006372 	rdtimel.w	$r18,$r27
1c0011cc:	0000643d 	rdtimeh.w	$r29,$r1
1c0011d0:	000064b4 	rdtimeh.w	$r20,$r5
1c0011d4:	00006537 	rdtimeh.w	$r23,$r9
1c0011d8:	00006594 	rdtimeh.w	$r20,$r12
1c0011dc:	0000659e 	rdtimeh.w	$r30,$r12
1c0011e0:	00006730 	rdtimeh.w	$r16,$r25
1c0011e4:	000067e7 	rdtimeh.w	$r7,$r31
1c0011e8:	0000685a 	rdtime.d	$r26,$r2
1c0011ec:	00006935 	rdtime.d	$r21,$r9
1c0011f0:	00006944 	rdtime.d	$r4,$r10
1c0011f4:	0000695e 	rdtime.d	$r30,$r10
1c0011f8:	000069ab 	rdtime.d	$r11,$r13
1c0011fc:	00006a52 	rdtime.d	$r18,$r18
1c001200:	00006aad 	rdtime.d	$r13,$r21
1c001204:	00006c45 	cpucfg	$r5,$r2
1c001208:	00006d30 	cpucfg	$r16,$r9
1c00120c:	00006d69 	cpucfg	$r9,$r11
1c001210:	00006ead 	cpucfg	$r13,$r21
1c001214:	00006ee0 	cpucfg	$r0,$r23
1c001218:	00006f32 	cpucfg	$r18,$r25
1c00121c:	00006f95 	cpucfg	$r21,$r28
1c001220:	0000701d 	0x0000701d
1c001224:	00007065 	0x00007065
1c001228:	000070c1 	0x000070c1
1c00122c:	00007173 	0x00007173
1c001230:	000071a1 	0x000071a1
1c001234:	000071bb 	0x000071bb
1c001238:	000071e6 	0x000071e6
1c00123c:	0000725c 	0x0000725c
1c001240:	0000732c 	0x0000732c
1c001244:	00007366 	0x00007366
1c001248:	0000739e 	0x0000739e
1c00124c:	000074d3 	0x000074d3
1c001250:	00007620 	0x00007620
1c001254:	00007647 	0x00007647
1c001258:	0000783c 	0x0000783c
1c00125c:	000078c2 	0x000078c2
1c001260:	000079e1 	0x000079e1
1c001264:	000079f6 	0x000079f6
1c001268:	00007a46 	0x00007a46
1c00126c:	00007a8e 	0x00007a8e
1c001270:	00007af5 	0x00007af5
1c001274:	00007f27 	0x00007f27
1c001278:	00007f93 	0x00007f93
1c00127c:	00007ff2 	0x00007ff2
1c001280:	1c000bd0 	pcaddu12i	$r16,94(0x5e)
1c001284:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001288:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00128c:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001290:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001294:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001298:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00129c:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012a0:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012a4:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012a8:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012ac:	1c000ab4 	pcaddu12i	$r20,85(0x55)
1c0012b0:	1c000ac0 	pcaddu12i	$r0,86(0x56)
1c0012b4:	1c000ac0 	pcaddu12i	$r0,86(0x56)
1c0012b8:	1c000ac0 	pcaddu12i	$r0,86(0x56)
1c0012bc:	1c000ac0 	pcaddu12i	$r0,86(0x56)
1c0012c0:	1c000ac0 	pcaddu12i	$r0,86(0x56)
1c0012c4:	1c000ac0 	pcaddu12i	$r0,86(0x56)
1c0012c8:	1c000ac0 	pcaddu12i	$r0,86(0x56)
1c0012cc:	1c000ac0 	pcaddu12i	$r0,86(0x56)
1c0012d0:	1c000ac0 	pcaddu12i	$r0,86(0x56)
1c0012d4:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012d8:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012dc:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012e0:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012e4:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012e8:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012ec:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012f0:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012f4:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012f8:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0012fc:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001300:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001304:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001308:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00130c:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001310:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001314:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001318:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00131c:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001320:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001324:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001328:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00132c:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001330:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001334:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001338:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00133c:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001340:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001344:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001348:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00134c:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001350:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001354:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001358:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00135c:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001360:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001364:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001368:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00136c:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001370:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001374:	1c000b00 	pcaddu12i	$r0,88(0x58)
1c001378:	1c000b1c 	pcaddu12i	$r28,88(0x58)
1c00137c:	1c000b30 	pcaddu12i	$r16,89(0x59)
1c001380:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001384:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001388:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00138c:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001390:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001394:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c001398:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c00139c:	1c000b4c 	pcaddu12i	$r12,90(0x5a)
1c0013a0:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0013a4:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0013a8:	1c000b68 	pcaddu12i	$r8,91(0x5b)
1c0013ac:	1c000b84 	pcaddu12i	$r4,92(0x5c)
1c0013b0:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0013b4:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0013b8:	1c000ba0 	pcaddu12i	$r0,93(0x5d)
1c0013bc:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0013c0:	1c000bb4 	pcaddu12i	$r20,93(0x5d)
1c0013c4:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0013c8:	1c000be0 	pcaddu12i	$r0,95(0x5f)
1c0013cc:	1c000b84 	pcaddu12i	$r4,92(0x5c)

1c0013d0 <_fdata>:
_fdata():
1c0013d0:	00000736 	0x00000736
1c0013d4:	00002237 	clo.d	$r23,$r17
1c0013d8:	000008a4 	0x000008a4
1c0013dc:	00007f27 	0x00007f27
1c0013e0:	00000257 	0x00000257
1c0013e4:	00005e2f 	ext.w.b	$r15,$r17
1c0013e8:	000038ed 	revb.2w	$r13,$r7
1c0013ec:	00002560 	clz.d	$r0,$r11
1c0013f0:	00007ff2 	0x00007ff2
1c0013f4:	00000e1f 	0x00000e1f
1c0013f8:	0000354f 	revb.4h	$r15,$r10
1c0013fc:	000015f8 	clz.w	$r24,$r15
1c001400:	00000cc6 	0x00000cc6
1c001404:	0000618b 	rdtimel.w	$r11,$r12
1c001408:	0000096c 	0x0000096c
1c00140c:	00005b9a 	ext.w.h	$r26,$r28
1c001410:	00007a46 	0x00007a46
1c001414:	000035a9 	revb.4h	$r9,$r13
1c001418:	0000273a 	clz.d	$r26,$r25
1c00141c:	000010f8 	clo.w	$r24,$r7
1c001420:	00005cf0 	ext.w.b	$r16,$r7
1c001424:	00005493 	bitrev.d	$r19,$r4
1c001428:	00002610 	clz.d	$r16,$r16
1c00142c:	0000045e 	0x0000045e
1c001430:	000058c7 	ext.w.h	$r7,$r6
1c001434:	000024ca 	clz.d	$r10,$r6
1c001438:	00006a52 	rdtime.d	$r18,$r18
1c00143c:	00006ee0 	cpucfg	$r0,$r23
1c001440:	000002e5 	0x000002e5
1c001444:	00002550 	clz.d	$r16,$r10
1c001448:	00005eac 	ext.w.b	$r12,$r21
1c00144c:	00001079 	clo.w	$r25,$r3
1c001450:	0000479b 	revh.d	$r27,$r28
1c001454:	00006944 	rdtime.d	$r4,$r10
1c001458:	0000475a 	revh.d	$r26,$r26
1c00145c:	00001e4f 	ctz.w	$r15,$r18
1c001460:	000017c4 	clz.w	$r4,$r30
1c001464:	0000725c 	0x0000725c
1c001468:	000043a7 	revh.2w	$r7,$r29
1c00146c:	000044b7 	revh.d	$r23,$r5
1c001470:	00001b60 	cto.w	$r0,$r27
1c001474:	00000bf8 	0x00000bf8
1c001478:	0000732c 	0x0000732c
1c00147c:	000020ad 	clo.d	$r13,$r5
1c001480:	000071a1 	0x000071a1
1c001484:	0000399c 	revb.2w	$r28,$r12
1c001488:	0000511a 	bitrev.w	$r26,$r8
1c00148c:	00004f93 	bitrev.8b	$r19,$r28
1c001490:	000079f6 	0x000079f6
1c001494:	000048cd 	bitrev.4b	$r13,$r6
1c001498:	0000299f 	cto.d	$r31,$r12
1c00149c:	00002f79 	ctz.d	$r25,$r27
1c0014a0:	00006537 	rdtimeh.w	$r23,$r9
1c0014a4:	000039e1 	revb.2w	$r1,$r15
1c0014a8:	000002f8 	0x000002f8
1c0014ac:	00001863 	cto.w	$r3,$r3
1c0014b0:	000067e7 	rdtimeh.w	$r7,$r31
1c0014b4:	000014fd 	clz.w	$r29,$r7
1c0014b8:	00003b73 	revb.2w	$r19,$r27
1c0014bc:	00002b87 	cto.d	$r7,$r28
1c0014c0:	00007647 	0x00007647
1c0014c4:	00005ce6 	ext.w.b	$r6,$r7
1c0014c8:	00002985 	cto.d	$r5,$r12
1c0014cc:	000005da 	0x000005da
1c0014d0:	00000a16 	0x00000a16
1c0014d4:	00006d30 	cpucfg	$r16,$r9
1c0014d8:	00001254 	clo.w	$r20,$r18
1c0014dc:	0000695e 	rdtime.d	$r30,$r10
1c0014e0:	00006372 	rdtimel.w	$r18,$r27
1c0014e4:	00001824 	cto.w	$r4,$r1
1c0014e8:	00000e75 	0x00000e75
1c0014ec:	00007f93 	0x00007f93
1c0014f0:	000044e3 	revh.d	$r3,$r7
1c0014f4:	00004fb2 	bitrev.8b	$r18,$r29
1c0014f8:	00000b21 	0x00000b21
1c0014fc:	000062ba 	rdtimel.w	$r26,$r21
1c001500:	00005ef0 	ext.w.b	$r16,$r23
1c001504:	000024be 	clz.d	$r30,$r5
1c001508:	00005b3d 	ext.w.h	$r29,$r25
1c00150c:	00004882 	bitrev.4b	$r2,$r4
1c001510:	0000701d 	0x0000701d
1c001514:	00001e1e 	ctz.w	$r30,$r16
1c001518:	000064b4 	rdtimeh.w	$r20,$r5
1c00151c:	000005f4 	0x000005f4
1c001520:	00000859 	0x00000859
1c001524:	00002c57 	ctz.d	$r23,$r2
1c001528:	000050ff 	bitrev.w	$r31,$r7
1c00152c:	00003440 	revb.4h	$r0,$r2
1c001530:	000074d3 	0x000074d3
1c001534:	00001daf 	ctz.w	$r15,$r13
1c001538:	0000739e 	0x0000739e
1c00153c:	00005cdc 	ext.w.b	$r28,$r6
1c001540:	0000498a 	bitrev.4b	$r10,$r12
1c001544:	000050b6 	bitrev.w	$r22,$r5
1c001548:	00003a01 	revb.2w	$r1,$r16
1c00154c:	0000508d 	bitrev.w	$r13,$r4
1c001550:	00001646 	clz.w	$r6,$r18
1c001554:	00002314 	clo.d	$r20,$r24
1c001558:	00002d18 	ctz.d	$r24,$r8
1c00155c:	000041ac 	revh.2w	$r12,$r13
1c001560:	000038f4 	revb.2w	$r20,$r7
1c001564:	000078c2 	0x000078c2
1c001568:	00005f36 	ext.w.b	$r22,$r25
1c00156c:	0000274c 	clz.d	$r12,$r26
1c001570:	00003197 	revb.2h	$r23,$r12
1c001574:	00007620 	0x00007620
1c001578:	00006935 	rdtime.d	$r21,$r9
1c00157c:	00005ae1 	ext.w.h	$r1,$r23
1c001580:	00003d80 	revb.d	$r0,$r12
1c001584:	000043c8 	revh.2w	$r8,$r30
1c001588:	0000445a 	revh.d	$r26,$r2
1c00158c:	00004ea7 	bitrev.8b	$r7,$r21
1c001590:	000010d0 	clo.w	$r16,$r6
1c001594:	00000014 	0x00000014
1c001598:	0000469d 	revh.d	$r29,$r20
1c00159c:	000040f0 	revh.2w	$r16,$r7
1c0015a0:	00000ce5 	0x00000ce5
1c0015a4:	00006730 	rdtimeh.w	$r16,$r25
1c0015a8:	00002a0d 	cto.d	$r13,$r16
1c0015ac:	00001473 	clz.w	$r19,$r3
1c0015b0:	00003d22 	revb.d	$r2,$r9
1c0015b4:	000039ec 	revb.2w	$r12,$r15
1c0015b8:	000079e1 	0x000079e1
1c0015bc:	00007065 	0x00007065
1c0015c0:	00003c03 	revb.d	$r3,$r0
1c0015c4:	00002f2a 	ctz.d	$r10,$r25
1c0015c8:	00002bcd 	cto.d	$r13,$r30
1c0015cc:	00004c07 	bitrev.8b	$r7,$r0
1c0015d0:	00002fb8 	ctz.d	$r24,$r29
1c0015d4:	00001dca 	ctz.w	$r10,$r14
1c0015d8:	00006ead 	cpucfg	$r13,$r21
1c0015dc:	000044f8 	revh.d	$r24,$r7
1c0015e0:	00004c6f 	bitrev.8b	$r15,$r3
1c0015e4:	00004723 	revh.d	$r3,$r25
1c0015e8:	000008a5 	0x000008a5
1c0015ec:	000041b2 	revh.2w	$r18,$r13
1c0015f0:	00004611 	revh.d	$r17,$r16
1c0015f4:	00004998 	bitrev.4b	$r24,$r12
1c0015f8:	00005e84 	ext.w.b	$r4,$r20
1c0015fc:	000071bb 	0x000071bb
1c001600:	00004a8e 	bitrev.4b	$r14,$r20
1c001604:	00000c49 	0x00000c49
1c001608:	00005792 	bitrev.d	$r18,$r28
1c00160c:	00000eae 	0x00000eae
1c001610:	0000014b 	0x0000014b
1c001614:	000022b1 	clo.d	$r17,$r21
1c001618:	000069ab 	rdtime.d	$r11,$r13
1c00161c:	000035b9 	revb.4h	$r25,$r13
1c001620:	0000389c 	revb.2w	$r28,$r4
1c001624:	000054b6 	bitrev.d	$r22,$r5
1c001628:	000015f4 	clz.w	$r20,$r15
1c00162c:	00007366 	0x00007366
1c001630:	00000afb 	0x00000afb
1c001634:	000036e1 	revb.4h	$r1,$r23
1c001638:	00002e0f 	ctz.d	$r15,$r16
1c00163c:	00007a8e 	0x00007a8e
1c001640:	000020fe 	clo.d	$r30,$r7
1c001644:	0000532f 	bitrev.w	$r15,$r25
1c001648:	000000ab 	0x000000ab
1c00164c:	00002c8e 	ctz.d	$r14,$r4
1c001650:	00006594 	rdtimeh.w	$r20,$r12
1c001654:	0000135f 	clo.w	$r31,$r26
1c001658:	00007af5 	0x00007af5
1c00165c:	000026a7 	clz.d	$r7,$r21
1c001660:	00006c45 	cpucfg	$r5,$r2
1c001664:	0000659e 	rdtimeh.w	$r30,$r12
1c001668:	00002986 	cto.d	$r6,$r12
1c00166c:	0000783c 	0x0000783c
1c001670:	0000081f 	0x0000081f
1c001674:	00006f32 	cpucfg	$r18,$r25
1c001678:	0000685a 	rdtime.d	$r26,$r2
1c00167c:	000017da 	clz.w	$r26,$r30
1c001680:	000044b6 	revh.d	$r22,$r5
1c001684:	00005f16 	ext.w.b	$r22,$r24
1c001688:	00007173 	0x00007173
1c00168c:	000007b8 	0x000007b8
1c001690:	000062f3 	rdtimel.w	$r19,$r23
1c001694:	000071e6 	0x000071e6
1c001698:	0000062f 	0x0000062f
1c00169c:	00003280 	revb.2h	$r0,$r20
1c0016a0:	000017b7 	clz.w	$r23,$r29
1c0016a4:	000044ad 	revh.d	$r13,$r5
1c0016a8:	000070c1 	0x000070c1
1c0016ac:	0000339a 	revb.2h	$r26,$r28
1c0016b0:	00006d69 	cpucfg	$r9,$r11
1c0016b4:	00005130 	bitrev.w	$r16,$r9
1c0016b8:	00006aad 	rdtime.d	$r13,$r21
1c0016bc:	00004c2b 	bitrev.8b	$r11,$r1
1c0016c0:	00006302 	rdtimel.w	$r2,$r24
1c0016c4:	00005989 	ext.w.h	$r9,$r12
1c0016c8:	00006f95 	cpucfg	$r21,$r28
1c0016cc:	00005f33 	ext.w.b	$r19,$r25
1c0016d0:	000051fd 	bitrev.w	$r29,$r15
1c0016d4:	0000643d 	rdtimeh.w	$r29,$r1
1c0016d8:	00002f69 	ctz.d	$r9,$r27
1c0016dc:	0000441a 	revh.d	$r26,$r0
1c0016e0:	00004220 	revh.2w	$r0,$r17
1c0016e4:	00000810 	0x00000810
1c0016e8:	00001cd7 	ctz.w	$r23,$r6
1c0016ec:	0000418d 	revh.2w	$r13,$r12

1c0016f0 <__CTOR_LIST__>:
	...

1c0016f8 <__CTOR_END__>:
	...

1c001700 <__DTOR_END__>:
__DTOR_END__():
1c001700:	00000000 	0x00000000
1c001704:	1c0019f0 	pcaddu12i	$r16,207(0xcf)
1c001708:	1c0113b0 	pcaddu12i	$r16,2205(0x89d)

Disassembly of section .eh_frame:

1c00170c <.eh_frame>:
1c00170c:	0000000c 	0x0000000c
1c001710:	00000000 	0x00000000
1c001714:	7c010003 	0x7c010003
1c001718:	00030c01 	0x00030c01
1c00171c:	00000068 	0x00000068
1c001720:	00000014 	0x00000014
1c001724:	1c0003a0 	pcaddu12i	$r0,29(0x1d)
1c001728:	000002c4 	0x000002c4
1c00172c:	00000404 	0x00000404
1c001730:	04200e00 	csrxchg	$r0,$r16,0x803
1c001734:	00000024 	0x00000024
1c001738:	069b0181 	0x069b0181
1c00173c:	0297079c 	addi.w	$r28,$r28,1473(0x5c1)
1c001740:	04990398 	csrxchg	$r24,$r28,0x2640
1c001744:	089d059a 	fnmadd.s	$f26,$f12,$f1,$f26
1c001748:	00016404 	0x00016404
1c00174c:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c001750:	00000004 	0x00000004
1c001754:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c001758:	04d80000 	csrrd	$r0,0x3600
1c00175c:	00000004 	0x00000004
1c001760:	000404d9 	alsl.w	$r25,$r6,$r1,0x1
1c001764:	04da0000 	csrrd	$r0,0x3680
1c001768:	00000004 	0x00000004
1c00176c:	000404db 	alsl.w	$r27,$r6,$r1,0x1
1c001770:	04dd0000 	csrrd	$r0,0x3740
1c001774:	00000008 	0x00000008
1c001778:	000c04dc 	bytepick.d	$r28,$r6,$r1,0x0
1c00177c:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c001780:	00000404 	0x00000404
1c001784:	00000b00 	0x00000b00
1c001788:	0000000c 	0x0000000c
1c00178c:	00000080 	0x00000080
1c001790:	1c000670 	pcaddu12i	$r16,51(0x33)
1c001794:	00000348 	0x00000348
1c001798:	00000060 	0x00000060
1c00179c:	00000090 	0x00000090
1c0017a0:	1c0009c0 	pcaddu12i	$r0,78(0x4e)
1c0017a4:	0000022c 	0x0000022c
1c0017a8:	00000404 	0x00000404
1c0017ac:	04600e00 	csrxchg	$r0,$r16,0x1803
1c0017b0:	0000001c 	0x0000001c
1c0017b4:	09810d9a 	0x09810d9a
1c0017b8:	0b980a97 	0x0b980a97
1c0017bc:	0e9b0c99 	0x0e9b0c99
1c0017c0:	b0040f9c 	0xb0040f9c
1c0017c4:	0a000000 	0x0a000000
1c0017c8:	000404c1 	alsl.w	$r1,$r6,$r1,0x1
1c0017cc:	04d70000 	csrrd	$r0,0x35c0
1c0017d0:	00000004 	0x00000004
1c0017d4:	000404d8 	alsl.w	$r24,$r6,$r1,0x1
1c0017d8:	04d90000 	csrrd	$r0,0x3640
1c0017dc:	00000004 	0x00000004
1c0017e0:	000404da 	alsl.w	$r26,$r6,$r1,0x1
1c0017e4:	04db0000 	csrrd	$r0,0x36c0
1c0017e8:	00000004 	0x00000004
1c0017ec:	000804dc 	bytepick.w	$r28,$r6,$r1,0x0
1c0017f0:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c0017f4:	00000404 	0x00000404
1c0017f8:	00000b00 	0x00000b00
1c0017fc:	00000028 	0x00000028
1c001800:	000000f4 	0x000000f4
1c001804:	1c000bec 	pcaddu12i	$r12,95(0x5f)
1c001808:	00000028 	0x00000028
1c00180c:	00000404 	0x00000404
1c001810:	04100e00 	csrxchg	$r0,$r16,0x403
1c001814:	00000004 	0x00000004
1c001818:	18040199 	pcaddi	$r25,8204(0x200c)
1c00181c:	d9000000 	0xd9000000
1c001820:	00000404 	0x00000404
1c001824:	00000e00 	0x00000e00
1c001828:	00000028 	0x00000028
1c00182c:	00000120 	0x00000120
1c001830:	1c000c14 	pcaddu12i	$r20,96(0x60)
1c001834:	00000024 	0x00000024
1c001838:	00000404 	0x00000404
1c00183c:	04100e00 	csrxchg	$r0,$r16,0x403
1c001840:	00000004 	0x00000004
1c001844:	14040199 	lu12i.w	$r25,8204(0x200c)
1c001848:	d9000000 	0xd9000000
1c00184c:	00000404 	0x00000404
1c001850:	00000e00 	0x00000e00
1c001854:	00000040 	0x00000040
1c001858:	0000014c 	0x0000014c
1c00185c:	1c000c38 	pcaddu12i	$r24,97(0x61)
1c001860:	00000074 	0x00000074
1c001864:	00000404 	0x00000404
1c001868:	04100e00 	csrxchg	$r0,$r16,0x403
1c00186c:	00000010 	0x00000010
1c001870:	02970181 	addi.w	$r1,$r12,1472(0x5c0)
1c001874:	04990398 	csrxchg	$r24,$r28,0x2640
1c001878:	00004804 	bitrev.4b	$r4,$r0
1c00187c:	0404c100 	csrxchg	$r0,$r8,0x130
1c001880:	d7000000 	0xd7000000
1c001884:	00000404 	0x00000404
1c001888:	0404d800 	csrrd	$r0,0x136
1c00188c:	d9000000 	0xd9000000
1c001890:	00000804 	0x00000804
1c001894:	00000e00 	0x00000e00
1c001898:	00000028 	0x00000028
1c00189c:	00000190 	0x00000190
1c0018a0:	1c000cac 	pcaddu12i	$r12,101(0x65)
1c0018a4:	0000002c 	0x0000002c
1c0018a8:	00000404 	0x00000404
1c0018ac:	04100e00 	csrxchg	$r0,$r16,0x403
1c0018b0:	00000004 	0x00000004
1c0018b4:	18040181 	pcaddi	$r1,8204(0x200c)
1c0018b8:	c1000000 	0xc1000000
1c0018bc:	00000804 	0x00000804
1c0018c0:	00000e00 	0x00000e00
1c0018c4:	00000048 	0x00000048
1c0018c8:	000001bc 	0x000001bc
1c0018cc:	1c000cd8 	pcaddu12i	$r24,102(0x66)
1c0018d0:	000000e8 	0x000000e8
1c0018d4:	00000404 	0x00000404
1c0018d8:	04600e00 	csrxchg	$r0,$r16,0x1803
1c0018dc:	00000010 	0x00000010
1c0018e0:	01810297 	0x01810297
1c0018e4:	04990398 	csrxchg	$r24,$r28,0x2640
1c0018e8:	00008804 	0x00008804
1c0018ec:	04c10a00 	csrxchg	$r0,$r16,0x3042
1c0018f0:	00000004 	0x00000004
1c0018f4:	000404d7 	alsl.w	$r23,$r6,$r1,0x1
1c0018f8:	04d80000 	csrrd	$r0,0x3600
1c0018fc:	00000004 	0x00000004
1c001900:	000804d9 	bytepick.w	$r25,$r6,$r1,0x0
1c001904:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
1c001908:	00000404 	0x00000404
1c00190c:	00000b00 	0x00000b00
1c001910:	00000028 	0x00000028
1c001914:	00000208 	0x00000208
1c001918:	1c000dc0 	pcaddu12i	$r0,110(0x6e)
1c00191c:	0000001c 	0x0000001c
1c001920:	00000404 	0x00000404
1c001924:	04100e00 	csrxchg	$r0,$r16,0x403
1c001928:	00000004 	0x00000004
1c00192c:	0c040199 	0x0c040199
1c001930:	d9000000 	0xd9000000
1c001934:	00000404 	0x00000404
1c001938:	00000e00 	0x00000e00
1c00193c:	0000000c 	0x0000000c
1c001940:	00000234 	0x00000234
1c001944:	1c000ddc 	pcaddu12i	$r28,110(0x6e)
1c001948:	00000004 	0x00000004
1c00194c:	0000000c 	0x0000000c
1c001950:	00000244 	0x00000244
1c001954:	1c000de0 	pcaddu12i	$r0,111(0x6f)
1c001958:	00000008 	0x00000008
1c00195c:	00000028 	0x00000028
1c001960:	00000254 	0x00000254
1c001964:	1c000de8 	pcaddu12i	$r8,111(0x6f)
1c001968:	00000084 	0x00000084
1c00196c:	00000404 	0x00000404
1c001970:	04100e00 	csrxchg	$r0,$r16,0x403
1c001974:	00000004 	0x00000004
1c001978:	60040199 	blt	$r12,$r25,1024(0x400) # 1c001d78 <result+0x388>
1c00197c:	d9000000 	0xd9000000
1c001980:	00001804 	cto.w	$r4,$r0
1c001984:	00000e00 	0x00000e00
1c001988:	0000000c 	0x0000000c
1c00198c:	00000280 	0x00000280
1c001990:	1c000e6c 	pcaddu12i	$r12,115(0x73)
1c001994:	00000004 	0x00000004
1c001998:	00000028 	0x00000028
1c00199c:	00000290 	0x00000290
1c0019a0:	1c000e70 	pcaddu12i	$r16,115(0x73)
1c0019a4:	00000024 	0x00000024
1c0019a8:	00000404 	0x00000404
1c0019ac:	04100e00 	csrxchg	$r0,$r16,0x403
1c0019b0:	00000004 	0x00000004
1c0019b4:	10040199 	addu16i.d	$r25,$r12,256(0x100)
1c0019b8:	d9000000 	0xd9000000
1c0019bc:	00000804 	0x00000804
1c0019c0:	00000e00 	0x00000e00
1c0019c4:	00000028 	0x00000028
1c0019c8:	000002bc 	0x000002bc
1c0019cc:	1c000e94 	pcaddu12i	$r20,116(0x74)
1c0019d0:	00000030 	0x00000030
1c0019d4:	00000404 	0x00000404
1c0019d8:	04100e00 	csrxchg	$r0,$r16,0x403
1c0019dc:	00000004 	0x00000004
1c0019e0:	10040199 	addu16i.d	$r25,$r12,256(0x100)
1c0019e4:	d9000000 	0xd9000000
1c0019e8:	00001404 	clz.w	$r4,$r0
1c0019ec:	00000e00 	0x00000e00

Disassembly of section .bss:

1c0019f0 <result>:
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	0x0000001c
   4:	00000002 	0x00000002
   8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
   c:	00000000 	0x00000000
  10:	1c0009c0 	pcaddu12i	$r0,78(0x4e)
  14:	0000022c 	0x0000022c
	...
  20:	0000001c 	0x0000001c
  24:	03160002 	lu52i.d	$r2,$r0,1408(0x580)
  28:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  2c:	00000000 	0x00000000
  30:	1c000bec 	pcaddu12i	$r12,95(0x5f)
  34:	0000004c 	0x0000004c
	...
  40:	0000001c 	0x0000001c
  44:	04860002 	csrrd	$r2,0x2180
  48:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  4c:	00000000 	0x00000000
  50:	1c000c38 	pcaddu12i	$r24,97(0x61)
  54:	000000a0 	0x000000a0
	...
  60:	0000001c 	0x0000001c
  64:	06a00002 	0x06a00002
  68:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  6c:	00000000 	0x00000000
  70:	1c000cd8 	pcaddu12i	$r24,102(0x66)
  74:	000000e8 	0x000000e8
	...
  80:	0000001c 	0x0000001c
  84:	08ba0002 	0x08ba0002
  88:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  8c:	00000000 	0x00000000
  90:	1c000dc0 	pcaddu12i	$r0,110(0x6e)
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
  18:	1c0009c0 	pcaddu12i	$r0,78(0x4e)
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
  8c:	1c000bec 	pcaddu12i	$r12,95(0x5f)
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
  b8:	1c000c14 	pcaddu12i	$r20,96(0x60)
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
  f4:	1c000c38 	pcaddu12i	$r24,97(0x61)
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
 138:	1c000cac 	pcaddu12i	$r12,101(0x65)
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
 174:	1c000cd8 	pcaddu12i	$r24,102(0x66)
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
 1d0:	1c000dc0 	pcaddu12i	$r0,110(0x6e)
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
 1fc:	1c000ddc 	pcaddu12i	$r28,110(0x6e)
 200:	00000004 	0x00000004
 204:	0000000c 	0x0000000c
 208:	000001b8 	0x000001b8
 20c:	1c000de0 	pcaddu12i	$r0,111(0x6f)
 210:	00000008 	0x00000008
 214:	00000028 	0x00000028
 218:	000001b8 	0x000001b8
 21c:	1c000de8 	pcaddu12i	$r8,111(0x6f)
 220:	00000084 	0x00000084
 224:	00000404 	0x00000404
 228:	04100e00 	csrxchg	$r0,$r16,0x403
 22c:	00000004 	0x00000004
 230:	60040199 	blt	$r12,$r25,1024(0x400) # 630 <data_size-0x218>
 234:	d9000000 	0xd9000000
 238:	00001804 	cto.w	$r4,$r0
 23c:	00000e00 	0x00000e00
 240:	0000000c 	0x0000000c
 244:	000001b8 	0x000001b8
 248:	1c000e6c 	pcaddu12i	$r12,115(0x73)
 24c:	00000004 	0x00000004
 250:	00000028 	0x00000028
 254:	000001b8 	0x000001b8
 258:	1c000e70 	pcaddu12i	$r16,115(0x73)
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
 284:	1c000e94 	pcaddu12i	$r20,116(0x74)
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
  18:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 12d38 <data_size+0x124f0>
  1c:	3d696261 	0x3d696261
  20:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
  24:	2d207332 	0x2d207332
  28:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7288 <_stack+0xe3fe5ed8>
  2c:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff6c68 <_stack+0xe3fe58b8>
  30:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 1679c <data_size+0x15f54>
  34:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
  38:	2d207232 	0x2d207232
  3c:	7570666d 	0x7570666d
  40:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe6fac <_stack+0xe3fd5bfc>
  44:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 12d64 <data_size+0x1251c>
  48:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 6fb4 <data_size+0x676c>
  4c:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe3db8 <_stack+0xe3fd2a08>
  50:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 16dc0 <data_size+0x16578>
  54:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 12d74 <data_size+0x1252c>
  58:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 16ecc <data_size+0x16684>
  5c:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff6fc8 <_stack+0xe3fe5c18>
  60:	7261676e 	0x7261676e
  64:	32336863 	0x32336863
  68:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff2d88 <_stack+0xe3fe19d8>
  6c:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
  70:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe669c <_stack+0xe3fd52ec>
  74:	75622d6f 	0x75622d6f
  78:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 174e4 <data_size+0x16c9c>
  7c:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe2d9c <_stack+0xe3fd19ec>
  80:	702d6f6e 	0x702d6f6e
  84:	0c006369 	0x0c006369
  88:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe69f8 <_stack+0xe3fd5648>
  8c:	632e6674 	blt	$r19,$r20,-53660(0x32e64) # ffff2ef0 <_stack+0xe3fe1b40>
  90:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff68bc <_stack+0xe3fe550c>
  94:	772f656d 	0x772f656d
  98:	772f7477 	0x772f7477
  9c:	2f6b726f 	0x2f6b726f
  a0:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7304 <_stack+0xe3fd5f54>
  a4:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7608 <_stack+0xe3fd6258>
  a8:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 16cd4 <data_size+0x1648c>
  ac:	09c00062 	0x09c00062
  b0:	022c1c00 	slti	$r0,$r0,-1273(0xb07)
  b4:	00000000 	0x00000000
  b8:	04020000 	csrrd	$r0,0x80
  bc:	75070403 	xvssran.hu.w	$xr3,$xr0,$xr1
  c0:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff6a30 <_stack+0xe3fe5680>
  c4:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
  c8:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
  cc:	6c070403 	bgeu	$r0,$r3,1796(0x704) # 7d0 <data_size-0x78>
  d0:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
  d4:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17440 <data_size+0x16bf8>
  d8:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6644 <data_size+0x5dfc>
  dc:	746e6920 	0x746e6920
  e0:	72700400 	0x72700400
  e4:	66746e69 	bge	$r19,$r9,-101268(0x2746c) # fffe7550 <_stack+0xe3fd61a0>
  e8:	05010100 	0x05010100
  ec:	000002d1 	0x000002d1
  f0:	1c0009c0 	pcaddu12i	$r0,78(0x4e)
  f4:	0000022c 	0x0000022c
  f8:	02d19c01 	addi.d	$r1,$r0,1127(0x467)
  fc:	66050000 	bge	$r0,$r0,-129792(0x20500) # fffe05fc <_stack+0xe3fcf24c>
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
 158:	61676109 	blt	$r8,$r9,92000(0x16760) # 168b8 <data_size+0x16070>
 15c:	01006e69 	0x01006e69
 160:	0a6c0110 	xvfmsub.d	$xr16,$xr8,$xr0,$xr24
 164:	180a1c00 	pcaddi	$r0,20704(0x50e0)
 168:	79000000 	0x79000000
 16c:	0b000002 	0x0b000002
 170:	73747570 	0x73747570
 174:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe6ae4 <_stack+0xe3fd5734>
 178:	14010067 	lu12i.w	$r7,2051(0x803)
 17c:	0002d105 	0x0002d105
 180:	00018700 	asrtgt.d	$r24,$r1
 184:	0c000600 	0x0c000600
 188:	00000000 	0x00000000
 18c:	d1051901 	0xd1051901
 190:	99000002 	0x99000002
 194:	06000001 	cacop	0x1,$r0,0
 198:	72700b00 	0x72700b00
 19c:	62746e69 	blt	$r19,$r9,-101268(0x2746c) # fffe7608 <_stack+0xe3fd6258>
 1a0:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
 1a4:	d1051e01 	0xd1051e01
 1a8:	b1000002 	0xb1000002
 1ac:	06000001 	cacop	0x1,$r0,0
 1b0:	0b100d00 	0x0b100d00
 1b4:	02f11c00 	addi.d	$r0,$r0,-953(0xc47)
 1b8:	01c90000 	0x01c90000
 1bc:	010e0000 	0x010e0000
 1c0:	0e320156 	0x0e320156
 1c4:	30015701 	0x30015701
 1c8:	0b2c0f00 	0x0b2c0f00
 1cc:	02fd1c00 	addi.d	$r0,$r0,-185(0xf47)
 1d0:	400d0000 	beqz	$r0,3328(0xd00) # ed0 <data_size+0x688>
 1d4:	f11c000b 	0xf11c000b
 1d8:	ea000002 	0xea000002
 1dc:	0e000001 	0x0e000001
 1e0:	3a015601 	0x3a015601
 1e4:	0157010e 	0x0157010e
 1e8:	5c0d0031 	bne	$r1,$r17,3328(0xd00) # ee8 <data_size+0x6a0>
 1ec:	f11c000b 	0xf11c000b
 1f0:	02000002 	slti	$r2,$r0,0
 1f4:	0e000002 	0x0e000002
 1f8:	3a015601 	0x3a015601
 1fc:	0157010e 	0x0157010e
 200:	780d0030 	0x780d0030
 204:	f11c000b 	0xf11c000b
 208:	1b000002 	pcalau12i	$r2,-524288(0x80000)
 20c:	0e000002 	0x0e000002
 210:	8b025601 	0x8b025601
 214:	57010e00 	bl	-134020852(0x803010c) # f8030320 <_stack+0xdc01ef70>
 218:	0d003001 	fsel	$f1,$f0,$f12,$fcc0
 21c:	1c000b94 	pcaddu12i	$r20,92(0x5c)
 220:	000002f1 	0x000002f1
 224:	00000233 	0x00000233
 228:	0156010e 	0x0156010e
 22c:	57010e40 	bl	-117243636(0x903010c) # f9030338 <_stack+0xdd01ef88>
 230:	0f003001 	0x0f003001
 234:	1c000bb0 	pcaddu12i	$r16,93(0x5d)
 238:	00000309 	0x00000309
 23c:	000bc40d 	0x000bc40d
 240:	0002f11c 	0x0002f11c
 244:	00025400 	0x00025400
 248:	56010e00 	bl	-134086388(0x802010c) # f8020354 <_stack+0xdc00efa4>
 24c:	010e3a01 	0x010e3a01
 250:	00300157 	0x00300157
 254:	000bd80d 	0x000bd80d
 258:	0002fd1c 	0x0002fd1c
 25c:	00026800 	0x00026800
 260:	54010e00 	bl	-134217460(0x800010c) # f800036c <_stack+0xdbfeefbc>
 264:	00250802 	crc.w.w.w	$r2,$r0,$r2
 268:	000be810 	0x000be810
 26c:	0002fd1c 	0x0002fd1c
 270:	54010e00 	bl	-134217460(0x800010c) # f800037c <_stack+0xdbfeefcc>
 274:	00250802 	crc.w.w.w	$r2,$r0,$r2
 278:	00001100 	clo.w	$r0,$r8
 27c:	000c0000 	bytepick.d	$r0,$r0,$r0,0x0
 280:	01000000 	0x01000000
 284:	02d10519 	addi.d	$r25,$r8,1089(0x441)
 288:	02900000 	addi.w	$r0,$r0,1024(0x400)
 28c:	00060000 	alsl.wu	$r0,$r0,$r0,0x1
 290:	000a4c12 	0x000a4c12
 294:	0000141c 	clz.w	$r28,$r0
 298:	0002bf00 	0x0002bf00
 29c:	00000c00 	0x00000c00
 2a0:	19010000 	pcaddi	$r0,-522240(0x80800)
 2a4:	0002d105 	0x0002d105
 2a8:	0002af00 	0x0002af00
 2ac:	10000600 	addu16i.d	$r0,$r16,1(0x1)
 2b0:	1c000a54 	pcaddu12i	$r20,82(0x52)
 2b4:	000002fd 	0x000002fd
 2b8:	0154010e 	0x0154010e
 2bc:	1000003d 	addu16i.d	$r29,$r1,0
 2c0:	1c000a2c 	pcaddu12i	$r12,81(0x51)
 2c4:	000002fd 	0x000002fd
 2c8:	0254010e 	sltui	$r14,$r8,1280(0x500)
 2cc:	00000087 	0x00000087
 2d0:	05040300 	0x05040300
 2d4:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
 2d8:	02e60413 	addi.d	$r19,$r0,-1663(0x981)
 2dc:	01030000 	fsub.d	$f0,$f0,$f0
 2e0:	61686306 	blt	$r24,$r6,92256(0x16860) # 16b40 <data_size+0x162f8>
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
 330:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe649c <_stack+0xe3fd50ec>
 334:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 6c70 <data_size+0x6428>
 338:	73323370 	0x73323370
 33c:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 17068 <data_size+0x16820>
 340:	3d686372 	0x3d686372
 344:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe72b0 <_stack+0xe3fd5f00>
 348:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff75a8 <_stack+0xe3fe61f8>
 34c:	72323368 	0x72323368
 350:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe707c <_stack+0xe3fd5ccc>
 354:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe40c8 <_stack+0xe3fd2d18>
 358:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
 35c:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 166c8 <data_size+0x15e80>
 360:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 68c4 <data_size+0x607c>
 364:	726f6e3d 	0x726f6e3d
 368:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
 36c:	75746d2d 	0x75746d2d
 370:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 40d4 <data_size+0x388c>
 374:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff71e0 <_stack+0xe3fe5e30>
 378:	68637261 	bltu	$r19,$r1,25456(0x6370) # 66e8 <data_size+0x5ea0>
 37c:	20723233 	ll.w	$r19,$r17,29232(0x7230)
 380:	2d20672d 	0x2d20672d
 384:	2d20324f 	0x2d20324f
 388:	2d6f6e66 	0x2d6f6e66
 38c:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 6d00 <data_size+0x64b8>
 390:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
 394:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff71f8 <_stack+0xe3fe5e48>
 398:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff6d08 <_stack+0xe3fe5958>
 39c:	75700c00 	0x75700c00
 3a0:	61686374 	blt	$r27,$r20,92256(0x16860) # 16c00 <data_size+0x163b8>
 3a4:	00632e72 	bstrins.w	$r18,$r19,0x3,0xb
 3a8:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 17310 <data_size+0x16ac8>
 3ac:	77772f65 	0x77772f65
 3b0:	6f772f74 	bgeu	$r27,$r20,-35028(0x3772c) # ffff7adc <_stack+0xe3fe672c>
 3b4:	702f6b72 	vaddwev.d.wu	$vr18,$vr27,$vr26
 3b8:	5f667265 	bne	$r19,$r5,-39312(0x36670) # ffff6a28 <_stack+0xe3fe5678>
 3bc:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff7230 <_stack+0xe3fe5e80>
 3c0:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe6d2c <_stack+0xe3fd597c>
 3c4:	000bec00 	0x000bec00
 3c8:	00004c1c 	bitrev.8b	$r28,$r0
 3cc:	00047500 	alsl.w	$r0,$r8,$r29,0x1
 3d0:	07040200 	0x07040200
 3d4:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17740 <data_size+0x16ef8>
 3d8:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6944 <data_size+0x60fc>
 3dc:	746e6920 	0x746e6920
 3e0:	07040200 	0x07040200
 3e4:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff7250 <_stack+0xe3fe5ea0>
 3e8:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
 3ec:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 17250 <data_size+0x16a08>
 3f0:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe6d10 <_stack+0xe3fd5960>
 3f4:	1c030074 	pcaddu12i	$r20,6147(0x1803)
 3f8:	01000000 	0x01000000
 3fc:	f8010607 	0xf8010607
 400:	04000000 	csrrd	$r0,0x0
 404:	07010063 	0x07010063
 408:	0000f806 	0x0000f806
 40c:	04020000 	csrrd	$r0,0x80
 410:	746e6905 	0x746e6905
 414:	75700500 	0x75700500
 418:	61686374 	blt	$r27,$r20,92256(0x16860) # 16c78 <data_size+0x16430>
 41c:	01010072 	fadd.d	$f18,$f3,$f0
 420:	0000f805 	0x0000f805
 424:	000bec00 	0x000bec00
 428:	0000281c 	cto.d	$r28,$r0
 42c:	589c0100 	beq	$r8,$r0,39936(0x9c00) # a02c <data_size+0x97e4>
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
 458:	1c000bec 	pcaddu12i	$r12,95(0x5f)
 45c:	00000030 	0x00000030
 460:	0a010301 	0x0a010301
 464:	000000ed 	0x000000ed
 468:	000001f1 	0x000001f1
 46c:	e00b0000 	0xe00b0000
 470:	14000000 	lu12i.w	$r0,0
 474:	241c000c 	ldptr.w	$r12,$r0,7168(0x1c00)
 478:	01000000 	0x01000000
 47c:	00ed0c9c 	bstrpick.d	$r28,$r4,0x2d,0x3
 480:	54010000 	bl	256(0x100) # 580 <data_size-0x2c8>
 484:	02160000 	slti	$r0,$r0,1408(0x580)
 488:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 48c:	000001df 	0x000001df
 490:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
 494:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
 498:	2e382037 	0x2e382037
 49c:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
 4a0:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe660c <_stack+0xe3fd525c>
 4a4:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 6de0 <data_size+0x6598>
 4a8:	73323370 	0x73323370
 4ac:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 171d8 <data_size+0x16990>
 4b0:	3d686372 	0x3d686372
 4b4:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7420 <_stack+0xe3fd6070>
 4b8:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7718 <_stack+0xe3fe6368>
 4bc:	72323368 	0x72323368
 4c0:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe71ec <_stack+0xe3fd5e3c>
 4c4:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe4238 <_stack+0xe3fd2e88>
 4c8:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
 4cc:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 16838 <data_size+0x15ff0>
 4d0:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 6a34 <data_size+0x61ec>
 4d4:	726f6e3d 	0x726f6e3d
 4d8:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
 4dc:	75746d2d 	0x75746d2d
 4e0:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 4244 <data_size+0x39fc>
 4e4:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7350 <_stack+0xe3fe5fa0>
 4e8:	68637261 	bltu	$r19,$r1,25456(0x6370) # 6858 <data_size+0x6010>
 4ec:	20723233 	ll.w	$r19,$r17,29232(0x7230)
 4f0:	2d20672d 	0x2d20672d
 4f4:	2d20324f 	0x2d20324f
 4f8:	2d6f6e66 	0x2d6f6e66
 4fc:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 6e70 <data_size+0x6628>
 500:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
 504:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff7368 <_stack+0xe3fe5fb8>
 508:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff6e78 <_stack+0xe3fe5ac8>
 50c:	75700c00 	0x75700c00
 510:	632e7374 	blt	$r27,$r20,-53648(0x32e70) # ffff3380 <_stack+0xe3fe1fd0>
 514:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff6d40 <_stack+0xe3fe5990>
 518:	772f656d 	0x772f656d
 51c:	772f7477 	0x772f7477
 520:	2f6b726f 	0x2f6b726f
 524:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7788 <_stack+0xe3fd63d8>
 528:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7a8c <_stack+0xe3fd66dc>
 52c:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 17158 <data_size+0x16910>
 530:	0c380062 	0x0c380062
 534:	00a01c00 	bstrins.d	$r0,$r0,0x20,0x7
 538:	05270000 	0x05270000
 53c:	04020000 	csrrd	$r0,0x80
 540:	736e7507 	vssrarni.du.q	$vr7,$vr8,0x1d
 544:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 173a8 <data_size+0x16b60>
 548:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe6e68 <_stack+0xe3fd5ab8>
 54c:	04020074 	csrxchg	$r20,$r3,0x80
 550:	6e6f6c07 	bgeu	$r0,$r7,-102548(0x26f6c) # fffe74bc <_stack+0xe3fd610c>
 554:	6e752067 	bgeu	$r3,$r7,-101088(0x27520) # fffe7a74 <_stack+0xe3fd66c4>
 558:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6cc0 <_stack+0xe3fd5910>
 55c:	69206465 	bltu	$r3,$r5,73828(0x12064) # 125c0 <data_size+0x11d78>
 560:	0300746e 	lu52i.d	$r14,$r3,29(0x1d)
 564:	73747570 	0x73747570
 568:	050e0100 	0x050e0100
 56c:	00000150 	0x00000150
 570:	1c000cac 	pcaddu12i	$r12,101(0x65)
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
 59c:	b8070006 	0xb8070006
 5a0:	651c000c 	bge	$r0,$r12,72704(0x11c00) # 121a0 <data_size+0x11958>
 5a4:	2d000001 	0x2d000001
 5a8:	08000001 	0x08000001
 5ac:	f3035401 	0xf3035401
 5b0:	07005401 	0x07005401
 5b4:	1c000cc0 	pcaddu12i	$r0,102(0x66)
 5b8:	0000020d 	0x0000020d
 5bc:	00000140 	0x00000140
 5c0:	01540108 	0x01540108
 5c4:	c809003d 	0xc809003d
 5c8:	0d1c000c 	vbitsel.v	$vr12,$vr0,$vr0,$vr24
 5cc:	08000002 	0x08000002
 5d0:	3a015401 	0x3a015401
 5d4:	04020000 	csrrd	$r0,0x80
 5d8:	746e6905 	0x746e6905
 5dc:	5d040a00 	bne	$r16,$r0,66568(0x10408) # 109e4 <data_size+0x1019c>
 5e0:	02000001 	slti	$r1,$r0,0
 5e4:	68630601 	bltu	$r16,$r1,25348(0x6304) # 68e8 <data_size+0x60a0>
 5e8:	03007261 	lu52i.d	$r1,$r19,28(0x1c)
 5ec:	73747570 	0x73747570
 5f0:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe6f60 <_stack+0xe3fd5bb0>
 5f4:	01010067 	fadd.d	$f7,$f3,$f0
 5f8:	00015005 	0x00015005
 5fc:	000c3800 	bytepick.d	$r0,$r0,$r14,0x0
 600:	0000741c 	0x0000741c
 604:	0d9c0100 	0x0d9c0100
 608:	04000002 	csrrd	$r2,0x0
 60c:	01010073 	fadd.d	$f19,$f3,$f0
 610:	00015715 	0x00015715
 614:	00022500 	0x00022500
 618:	00630b00 	bstrins.w	$r0,$r24,0x3,0x2
 61c:	5d060301 	bne	$r24,$r1,67072(0x10600) # 10c1c <data_size+0x103d4>
 620:	68000001 	bltu	$r0,$r1,0 # 620 <data_size-0x228>
 624:	0c000002 	0x0c000002
 628:	00000048 	0x00000048
 62c:	00002805 	cto.d	$r5,$r0
 630:	10060100 	addu16i.d	$r0,$r8,384(0x180)
 634:	00000150 	0x00000150
 638:	000001b8 	0x000001b8
 63c:	780d0006 	0x780d0006
 640:	081c000c 	fmadd.s	$f12,$f0,$f0,$f24
 644:	e7000000 	0xe7000000
 648:	05000001 	0x05000001
 64c:	00000028 	0x00000028
 650:	50100601 	b	-133951484(0x8041004) # f8041654 <_stack+0xdc0302a4>
 654:	d7000001 	0xd7000001
 658:	06000001 	cacop	0x1,$r0,0
 65c:	0c800900 	0x0c800900
 660:	020d1c00 	slti	$r0,$r0,839(0x347)
 664:	01080000 	0x01080000
 668:	003d0154 	0x003d0154
 66c:	0c680700 	vfcmp.cne.d	$vr0,$vr24,$vr1
 670:	020d1c00 	slti	$r0,$r0,839(0x347)
 674:	01fb0000 	0x01fb0000
 678:	01080000 	0x01080000
 67c:	00870254 	bstrins.d	$r20,$r18,0x7,0x0
 680:	0c880900 	0x0c880900
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
 6b8:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 133d8 <data_size+0x12b90>
 6bc:	3d696261 	0x3d696261
 6c0:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
 6c4:	2d207332 	0x2d207332
 6c8:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff7928 <_stack+0xe3fe6578>
 6cc:	6f6c3d68 	bgeu	$r11,$r8,-37828(0x36c3c) # ffff7308 <_stack+0xe3fe5f58>
 6d0:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 16e3c <data_size+0x165f4>
 6d4:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
 6d8:	2d207232 	0x2d207232
 6dc:	7570666d 	0x7570666d
 6e0:	6e6f6e3d 	bgeu	$r17,$r29,-102548(0x26f6c) # fffe764c <_stack+0xe3fd629c>
 6e4:	6d2d2065 	bgeu	$r3,$r5,77088(0x12d20) # 13404 <data_size+0x12bbc>
 6e8:	646f6d63 	bge	$r11,$r3,28524(0x6f6c) # 7654 <data_size+0x6e0c>
 6ec:	6e3d6c65 	bgeu	$r3,$r5,-115348(0x23d6c) # fffe4458 <_stack+0xe3fd30a8>
 6f0:	616d726f 	blt	$r19,$r15,93552(0x16d70) # 17460 <data_size+0x16c18>
 6f4:	6d2d206c 	bgeu	$r3,$r12,77088(0x12d20) # 13414 <data_size+0x12bcc>
 6f8:	656e7574 	bge	$r11,$r20,93812(0x16e74) # 1756c <data_size+0x16d24>
 6fc:	6f6f6c3d 	bgeu	$r1,$r29,-37012(0x36f6c) # ffff7668 <_stack+0xe3fe62b8>
 700:	7261676e 	0x7261676e
 704:	32336863 	0x32336863
 708:	672d2072 	bge	$r3,$r18,-53984(0x32d20) # ffff3428 <_stack+0xe3fe2078>
 70c:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
 710:	6e662d20 	bgeu	$r9,$r0,-104916(0x2662c) # fffe6d3c <_stack+0xe3fd598c>
 714:	75622d6f 	0x75622d6f
 718:	69746c69 	bltu	$r3,$r9,95340(0x1746c) # 17b84 <data_size+0x1733c>
 71c:	662d206e 	bge	$r3,$r14,-119520(0x22d20) # fffe343c <_stack+0xe3fd208c>
 720:	702d6f6e 	0x702d6f6e
 724:	0c006369 	0x0c006369
 728:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe7098 <_stack+0xe3fd5ce8>
 72c:	73616274 	vssrani.w.d	$vr20,$vr19,0x18
 730:	00632e65 	bstrins.w	$r5,$r19,0x3,0xb
 734:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 1769c <data_size+0x16e54>
 738:	77772f65 	0x77772f65
 73c:	6f772f74 	bgeu	$r27,$r20,-35028(0x3772c) # ffff7e68 <_stack+0xe3fe6ab8>
 740:	702f6b72 	vaddwev.d.wu	$vr18,$vr27,$vr26
 744:	5f667265 	bne	$r19,$r5,-39312(0x36670) # ffff6db4 <_stack+0xe3fe5a04>
 748:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff75bc <_stack+0xe3fe620c>
 74c:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe70b8 <_stack+0xe3fd5d08>
 750:	000cd800 	bytepick.d	$r0,$r0,$r22,0x1
 754:	0000e81c 	0x0000e81c
 758:	00069000 	alsl.wu	$r0,$r0,$r4,0x2
 75c:	07040200 	0x07040200
 760:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17acc <data_size+0x17284>
 764:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6cd0 <data_size+0x6488>
 768:	746e6920 	0x746e6920
 76c:	07040200 	0x07040200
 770:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff75dc <_stack+0xe3fe622c>
 774:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
 778:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 175dc <data_size+0x16d94>
 77c:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe709c <_stack+0xe3fd5cec>
 780:	70030074 	vsle.w	$vr20,$vr3,$vr0
 784:	746e6972 	0x746e6972
 788:	65736162 	bge	$r11,$r2,95072(0x17360) # 17ae8 <data_size+0x172a0>
 78c:	05010100 	0x05010100
 790:	000001e2 	0x000001e2
 794:	1c000cd8 	pcaddu12i	$r24,102(0x66)
 798:	000000e8 	0x000000e8
 79c:	01e29c01 	0x01e29c01
 7a0:	76040000 	0x76040000
 7a4:	14010100 	lu12i.w	$r0,2056(0x808)
 7a8:	000001e9 	0x000001e9
 7ac:	0000027b 	0x0000027b
 7b0:	01007704 	0x01007704
 7b4:	01e21a01 	0x01e21a01
 7b8:	02cb0000 	addi.d	$r0,$r0,704(0x2c0)
 7bc:	62040000 	blt	$r0,$r0,-130048(0x20400) # fffe0bbc <_stack+0xe3fcf80c>
 7c0:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
 7c4:	e2200101 	0xe2200101
 7c8:	0f000001 	0x0f000001
 7cc:	04000003 	csrrd	$r3,0x0
 7d0:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe6f38 <_stack+0xe3fd5b88>
 7d4:	29010100 	st.b	$r0,$r8,64(0x40)
 7d8:	000001e2 	0x000001e2
 7dc:	00000353 	0x00000353
 7e0:	01006905 	0x01006905
 7e4:	01e20603 	0x01e20603
 7e8:	03980000 	ori	$r0,$r0,0x600
 7ec:	6a050000 	bltu	$r0,$r0,-129792(0x20500) # fffe0cec <_stack+0xe3fcf93c>
 7f0:	08030100 	0x08030100
 7f4:	000001e2 	0x000001e2
 7f8:	000003eb 	0x000003eb
 7fc:	01006305 	0x01006305
 800:	01e20604 	0x01e20604
 804:	04380000 	csrrd	$r0,0xe00
 808:	62060000 	blt	$r0,$r0,-129536(0x20600) # fffe0e08 <_stack+0xe3fcfa58>
 80c:	01006675 	0x01006675
 810:	01f50705 	0x01f50705
 814:	91030000 	0x91030000
 818:	76057fb0 	0x76057fb0
 81c:	65756c61 	bge	$r3,$r1,95596(0x1756c) # 17d88 <data_size+0x17540>
 820:	10060100 	addu16i.d	$r0,$r8,384(0x180)
 824:	000000cd 	0x000000cd
 828:	0000044b 	0x0000044b
 82c:	000d9407 	bytepick.d	$r7,$r0,$r5,0x3
 830:	0000201c 	clo.d	$r28,$r0
 834:	0001bc00 	asrtgt.d	$r0,$r15
 838:	00300800 	0x00300800
 83c:	0a010000 	0x0a010000
 840:	0001e202 	0x0001e202
 844:	0001ab00 	asrtgt.d	$r24,$r10
 848:	0a000900 	0x0a000900
 84c:	1c000da4 	pcaddu12i	$r4,109(0x6d)
 850:	0000020d 	0x0000020d
 854:	0254010b 	sltui	$r11,$r8,1280(0x500)
 858:	00002d08 	ctz.d	$r8,$r8
 85c:	000d400c 	bytepick.d	$r12,$r0,$r16,0x2
 860:	00002c1c 	ctz.d	$r28,$r0
 864:	00300800 	0x00300800
 868:	0a010000 	0x0a010000
 86c:	0001e202 	0x0001e202
 870:	0001d700 	asrtgt.d	$r24,$r21
 874:	0d000900 	fsel	$f0,$f8,$f2,$fcc0
 878:	1c000d6c 	pcaddu12i	$r12,107(0x6b)
 87c:	0000020d 	0x0000020d
 880:	04020000 	csrrd	$r0,0x80
 884:	746e6905 	0x746e6905
 888:	05040200 	0x05040200
 88c:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff76f8 <_stack+0xe3fe6348>
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
 8d4:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe6a40 <_stack+0xe3fd5690>
 8d8:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 7214 <data_size+0x69cc>
 8dc:	73323370 	0x73323370
 8e0:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 1760c <data_size+0x16dc4>
 8e4:	3d686372 	0x3d686372
 8e8:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7854 <_stack+0xe3fd64a4>
 8ec:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7b4c <_stack+0xe3fe679c>
 8f0:	72323368 	0x72323368
 8f4:	666d2d20 	bge	$r9,$r0,-103124(0x26d2c) # fffe7620 <_stack+0xe3fd6270>
 8f8:	6e3d7570 	bgeu	$r11,$r16,-115340(0x23d74) # fffe466c <_stack+0xe3fd32bc>
 8fc:	20656e6f 	ll.w	$r15,$r19,25964(0x656c)
 900:	6d636d2d 	bgeu	$r9,$r13,90988(0x1636c) # 16c6c <data_size+0x16424>
 904:	6c65646f 	bgeu	$r3,$r15,25956(0x6564) # 6e68 <data_size+0x6620>
 908:	726f6e3d 	0x726f6e3d
 90c:	206c616d 	ll.w	$r13,$r11,27744(0x6c60)
 910:	75746d2d 	0x75746d2d
 914:	6c3d656e 	bgeu	$r11,$r14,15716(0x3d64) # 4678 <data_size+0x3e30>
 918:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7784 <_stack+0xe3fe63d4>
 91c:	68637261 	bltu	$r19,$r1,25456(0x6370) # 6c8c <data_size+0x6444>
 920:	20723233 	ll.w	$r19,$r17,29232(0x7230)
 924:	2d20672d 	0x2d20672d
 928:	2d20324f 	0x2d20324f
 92c:	2d6f6e66 	0x2d6f6e66
 930:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 72a4 <data_size+0x6a5c>
 934:	206e6974 	ll.w	$r20,$r11,28264(0x6e68)
 938:	6f6e662d 	bgeu	$r17,$r13,-37276(0x36e64) # ffff779c <_stack+0xe3fe63ec>
 93c:	6369702d 	blt	$r1,$r13,-38544(0x36970) # ffff72ac <_stack+0xe3fe5efc>
 940:	69740c00 	bltu	$r0,$r0,95244(0x1740c) # 17d4c <data_size+0x17504>
 944:	632e656d 	blt	$r11,$r13,-53660(0x32e64) # ffff37a8 <_stack+0xe3fe23f8>
 948:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff7174 <_stack+0xe3fe5dc4>
 94c:	772f656d 	0x772f656d
 950:	772f7477 	0x772f7477
 954:	2f6b726f 	0x2f6b726f
 958:	66726570 	bge	$r11,$r16,-101788(0x27264) # fffe7bbc <_stack+0xe3fd680c>
 95c:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe7ec0 <_stack+0xe3fd6b10>
 960:	696c2f63 	bltu	$r27,$r3,93228(0x16c2c) # 1758c <data_size+0x16d44>
 964:	0dc00062 	0x0dc00062
 968:	01041c00 	0x01041c00
 96c:	08530000 	fmsub.s	$f0,$f0,$f0,$f6
 970:	04020000 	csrrd	$r0,0x80
 974:	736e7507 	vssrarni.du.q	$vr7,$vr8,0x1d
 978:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 177dc <data_size+0x16f94>
 97c:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe729c <_stack+0xe3fd5eec>
 980:	04020074 	csrxchg	$r20,$r3,0x80
 984:	6e6f6c07 	bgeu	$r0,$r7,-102548(0x26f6c) # fffe78f0 <_stack+0xe3fd6540>
 988:	6e752067 	bgeu	$r3,$r7,-101088(0x27520) # fffe7ea8 <_stack+0xe3fd6af8>
 98c:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe70f4 <_stack+0xe3fd5d44>
 990:	69206465 	bltu	$r3,$r5,73828(0x12064) # 129f4 <data_size+0x121ac>
 994:	0300746e 	lu52i.d	$r14,$r3,29(0x1d)
 998:	6f6c635f 	bgeu	$r26,$r31,-37792(0x36c60) # ffff75f8 <_stack+0xe3fe6248>
 99c:	745f6b63 	0x745f6b63
 9a0:	17030200 	lu32i.d	$r0,-518128(0x81810)
 9a4:	000000c8 	0x000000c8
 9a8:	69050402 	bltu	$r0,$r2,66820(0x10504) # 10eac <data_size+0x10664>
 9ac:	0400746e 	csrxchg	$r14,$r3,0x1d
 9b0:	656d6974 	bge	$r11,$r20,93544(0x16d68) # 17718 <data_size+0x16ed0>
 9b4:	63657073 	blt	$r3,$r19,-39568(0x36570) # ffff6f24 <_stack+0xe3fe5b74>
 9b8:	1f021000 	pcaddu18i	$r0,-520064(0x81080)
 9bc:	00014b08 	0x00014b08
 9c0:	76740500 	0x76740500
 9c4:	6365735f 	blt	$r26,$r31,-39568(0x36570) # ffff6f34 <_stack+0xe3fe5b84>
 9c8:	0b200200 	0x0b200200
 9cc:	000000dd 	0x000000dd
 9d0:	76740500 	0x76740500
 9d4:	65736e5f 	bge	$r18,$r31,95084(0x1736c) # 17d40 <data_size+0x174f8>
 9d8:	21020063 	sc.w	$r3,$r3,512(0x200)
 9dc:	0000dd0b 	0x0000dd0b
 9e0:	74050400 	xvsle.wu	$xr0,$xr0,$xr1
 9e4:	73755f76 	0x73755f76
 9e8:	02006365 	slti	$r5,$r27,24(0x18)
 9ec:	00dd0b22 	bstrpick.d	$r2,$r25,0x1d,0x2
 9f0:	05080000 	0x05080000
 9f4:	6d5f7674 	bgeu	$r19,$r20,89972(0x15f74) # 16968 <data_size+0x16120>
 9f8:	00636573 	bstrins.w	$r19,$r11,0x3,0x19
 9fc:	dd0b2302 	0xdd0b2302
 a00:	0c000000 	0x0c000000
 a04:	65670600 	bge	$r16,$r0,91908(0x16704) # 17108 <data_size+0x168c0>
 a08:	73755f74 	0x73755f74
 a0c:	0f3c0100 	0x0f3c0100
 a10:	000000c8 	0x000000c8
 a14:	1c000e94 	pcaddu12i	$r20,116(0x74)
 a18:	00000030 	0x00000030
 a1c:	01939c01 	0x01939c01
 a20:	6e070000 	bgeu	$r0,$r0,-129280(0x20700) # fffe1120 <_stack+0xe3fcfd70>
 a24:	133e0100 	addu16i.d	$r0,$r8,-12416(0xcf80)
 a28:	000000c8 	0x000000c8
 a2c:	000004ab 	0x000004ab
 a30:	0002dc08 	0x0002dc08
 a34:	000e9400 	bytepick.d	$r0,$r0,$r5,0x5
 a38:	0000a81c 	0x0000a81c
 a3c:	093f0100 	0x093f0100
 a40:	0000a809 	0x0000a809
 a44:	02f00a00 	addi.d	$r0,$r16,-1022(0xc02)
 a48:	00000000 	0x00000000
 a4c:	65670600 	bge	$r16,$r0,91908(0x16704) # 17150 <data_size+0x16908>
 a50:	736e5f74 	vssrarni.du.q	$vr20,$vr27,0x17
 a54:	0f330100 	0x0f330100
 a58:	000000c8 	0x000000c8
 a5c:	1c000e70 	pcaddu12i	$r16,115(0x73)
 a60:	00000024 	0x00000024
 a64:	01db9c01 	0x01db9c01
 a68:	6e070000 	bgeu	$r0,$r0,-129280(0x20700) # fffe1168 <_stack+0xe3fcfdb8>
 a6c:	13350100 	addu16i.d	$r0,$r8,-12992(0xcd40)
 a70:	000000c8 	0x000000c8
 a74:	000004e2 	0x000004e2
 a78:	0002dc08 	0x0002dc08
 a7c:	000e7000 	bytepick.d	$r0,$r0,$r28,0x4
 a80:	0000901c 	0x0000901c
 a84:	09360100 	0x09360100
 a88:	00009009 	0x00009009
 a8c:	02f00a00 	addi.d	$r0,$r16,-1022(0xc02)
 a90:	00000000 	0x00000000
 a94:	65670b00 	bge	$r24,$r0,91912(0x16708) # 1719c <data_size+0x16954>
 a98:	6c635f74 	bgeu	$r27,$r20,25436(0x635c) # 6df4 <data_size+0x65ac>
 a9c:	006b636f 	bstrins.w	$r15,$r27,0xb,0x18
 aa0:	c80f2c01 	0xc80f2c01
 aa4:	fc000000 	0xfc000000
 aa8:	0c000001 	0x0c000001
 aac:	2e01006e 	0x2e01006e
 ab0:	0000c813 	0x0000c813
 ab4:	63060000 	blt	$r0,$r0,-64000(0x30600) # ffff10b4 <_stack+0xe3fdfd04>
 ab8:	6b636f6c 	bltu	$r27,$r12,-40084(0x3636c) # ffff6e24 <_stack+0xe3fe5a74>
 abc:	7465675f 	xvavg.w	$xr31,$xr26,$xr25
 ac0:	656d6974 	bge	$r11,$r20,93544(0x16d68) # 17828 <data_size+0x16fe0>
 ac4:	0f200100 	0x0f200100
 ac8:	000000c8 	0x000000c8
 acc:	1c000de8 	pcaddu12i	$r8,111(0x6f)
 ad0:	00000084 	0x00000084
 ad4:	02699c01 	sltui	$r1,$r0,-1433(0xa67)
 ad8:	730d0000 	vextl.qu.du	$vr0,$vr0
 adc:	01006c65 	0x01006c65
 ae0:	00ee2120 	bstrpick.d	$r0,$r9,0x2e,0x8
 ae4:	05100000 	0x05100000
 ae8:	740e0000 	0x740e0000
 aec:	0100706d 	0x0100706d
 af0:	02693620 	sltui	$r0,$r17,-1459(0xa4d)
 af4:	55010000 	bl	65792(0x10100) # 10bf4 <data_size+0x103ac>
 af8:	01006e07 	0x01006e07
 afc:	00c81322 	bstrpick.d	$r2,$r25,0x8,0x4
 b00:	05310000 	0x05310000
 b04:	dc080000 	0xdc080000
 b08:	e8000002 	0xe8000002
 b0c:	781c000d 	0x781c000d
 b10:	01000000 	0x01000000
 b14:	78090923 	0x78090923
 b18:	0a000000 	0x0a000000
 b1c:	000002f0 	0x000002f0
 b20:	0f000000 	0x0f000000
 b24:	0000f504 	0x0000f504
 b28:	65671000 	bge	$r0,$r0,91920(0x16710) # 17238 <data_size+0x169f0>
 b2c:	6f635f74 	bgeu	$r27,$r20,-40100(0x3635c) # ffff6e88 <_stack+0xe3fe5ad8>
 b30:	5f746e75 	bne	$r19,$r21,-35732(0x3746c) # ffff7f9c <_stack+0xe3fe6bec>
 b34:	0100796d 	0x0100796d
 b38:	00c80f16 	bstrpick.d	$r22,$r24,0x8,0x3
 b3c:	0de00000 	0x0de00000
 b40:	00081c00 	bytepick.w	$r0,$r0,$r7,0x0
 b44:	9c010000 	0x9c010000
 b48:	0000029f 	0x0000029f
 b4c:	01006e11 	0x01006e11
 b50:	00c81318 	bstrpick.d	$r24,$r24,0x8,0x4
 b54:	54010000 	bl	256(0x100) # c54 <data_size+0x40c>
 b58:	65671000 	bge	$r0,$r0,91920(0x16710) # 17268 <data_size+0x16a20>
 b5c:	6f635f74 	bgeu	$r27,$r20,-40100(0x3635c) # ffff6eb8 <_stack+0xe3fe5b08>
 b60:	00746e75 	bstrins.w	$r21,$r19,0x14,0x1b
 b64:	c80f1101 	0xc80f1101
 b68:	c0000000 	0xc0000000
 b6c:	1c1c000d 	pcaddu12i	$r13,57344(0xe000)
 b70:	01000000 	0x01000000
 b74:	0002dc9c 	0x0002dc9c
 b78:	02dc0800 	addi.d	$r0,$r0,1794(0x702)
 b7c:	0dc00000 	0x0dc00000
 b80:	00601c00 	bstrins.w	$r0,$r0,0x0,0x7
 b84:	13010000 	addu16i.d	$r0,$r0,-16320(0xc040)
 b88:	0060090d 	bstrins.w	$r13,$r8,0x0,0x2
 b8c:	f00a0000 	0xf00a0000
 b90:	00000002 	0x00000002
 b94:	5f120000 	bne	$r0,$r0,-60928(0x31200) # ffff1d94 <_stack+0xe3fe09e4>
 b98:	5f746567 	bne	$r11,$r7,-35740(0x37464) # ffff7ffc <_stack+0xe3fe6c4c>
 b9c:	6e756f63 	bgeu	$r27,$r3,-101012(0x2756c) # fffe8108 <_stack+0xe3fd6d58>
 ba0:	04010074 	csrxchg	$r20,$r3,0x40
 ba4:	0000c80f 	0x0000c80f
 ba8:	5f0c0100 	bne	$r8,$r0,-62464(0x30c00) # ffff17a8 <_stack+0xe3fe03f8>
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
  ec:	55010b11 	bl	-62586616(0xc450108) # fc4501f4 <_stack+0xe043ee44>
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
 174:	40061201 	beqz	$r16,263696(0x40610) # 40784 <data_size+0x3ff3c>
 178:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 17c:	00001301 	clo.w	$r1,$r24
 180:	03000506 	lu52i.d	$r6,$r8,1(0x1)
 184:	3b0b3a08 	0x3b0b3a08
 188:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0cc0 <data_size+0x2d0478>
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
 258:	42911802 	beqz	$r0,692504(0xa9118) # a9370 <data_size+0xa8b28>
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
 284:	55010b0c 	bl	-63897336(0xc310108) # fc31038c <_stack+0xe02fefdc>
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
 310:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0e48 <data_size+0x2d0600>
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
 3f0:	40061201 	beqz	$r16,263696(0x40610) # 40a00 <data_size+0x401b8>
 3f4:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 3f8:	00001301 	clo.w	$r1,$r24
 3fc:	03003407 	lu52i.d	$r7,$r0,13(0xd)
 400:	3b0b3a08 	0x3b0b3a08
 404:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0f3c <data_size+0x2d06f4>
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
 48c:	42971840 	beqz	$r2,169752(0x29718) # 29ba4 <data_size+0x2935c>
 490:	00130119 	maskeqz	$r25,$r8,$r0
 494:	00341100 	0x00341100
 498:	0b3a0803 	0x0b3a0803
 49c:	0b390b3b 	0x0b390b3b
 4a0:	18021349 	pcaddi	$r9,4250(0x109a)
 4a4:	2e120000 	0x2e120000
 4a8:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 4ac:	3b0b3a08 	0x3b0b3a08
 4b0:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0fe8 <data_size+0x2d07a0>
 4b4:	000b2013 	0x000b2013
	...

Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	0x00000000
   4:	00000064 	0x00000064
   8:	64540001 	bge	$r0,$r1,21504(0x5400) # 5408 <data_size+0x4bc0>
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
  34:	48000000 	bceqz	$fcc0,0 # 34 <data_size-0x814>
  38:	64000000 	bge	$r0,$r0,0 # 38 <data_size-0x810>
  3c:	02000000 	slti	$r0,$r0,0
  40:	649f3000 	bge	$r0,$r0,40752(0x9f30) # 9f70 <data_size+0x9728>
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
  74:	64000001 	bge	$r0,$r1,0 # 74 <data_size-0x7d4>
  78:	01000001 	0x01000001
  7c:	01646800 	0x01646800
  80:	016c0000 	0x016c0000
  84:	00030000 	0x00030000
  88:	6c9f7f88 	bgeu	$r28,$r8,40828(0x9f7c) # a004 <data_size+0x97bc>
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
  c8:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff00c8 <_stack+0xe3fded18>
  cc:	000000f4 	0x000000f4
  d0:	0000022c 	0x0000022c
  d4:	00670001 	bstrins.w	$r1,$r0,0x7,0x0
  d8:	00000000 	0x00000000
  dc:	48000000 	bceqz	$fcc0,0 # dc <data_size-0x76c>
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
 134:	55000100 	bl	67174400(0x4010000) # 4010134 <data_size+0x400f8ec>
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
 16c:	55000100 	bl	67174400(0x4010000) # 401016c <data_size+0x400f924>
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
 198:	55000100 	bl	67174400(0x4010000) # 4010198 <data_size+0x400f950>
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
 1c4:	55000100 	bl	67174400(0x4010000) # 40101c4 <data_size+0x400f97c>
	...
 1d4:	0000001c 	0x0000001c
 1d8:	1c540001 	pcaddu12i	$r1,172032(0x2a000)
 1dc:	28000000 	ld.b	$r0,$r0,0
 1e0:	04000000 	csrrd	$r0,0x0
 1e4:	5401f300 	bl	-67108368(0xc0001f0) # fc0003d4 <_stack+0xdffef024>
 1e8:	0000009f 	0x0000009f
	...
 1f4:	00001800 	cto.w	$r0,$r0
 1f8:	54000100 	bl	67108864(0x4000000) # 40001f8 <data_size+0x3fff9b0>
	...
 204:	00000074 	0x00000074
 208:	0000007f 	0x0000007f
 20c:	7f540001 	0x7f540001
 210:	a0000000 	0xa0000000
 214:	04000000 	csrrd	$r0,0x0
 218:	5401f300 	bl	-67108368(0xc0001f0) # fc000408 <_stack+0xdffef058>
 21c:	0000009f 	0x0000009f
	...
 228:	00002800 	cto.d	$r0,$r0
 22c:	54000100 	bl	67108864(0x4000000) # 400022c <data_size+0x3fff9e4>
 230:	00000028 	0x00000028
 234:	00000030 	0x00000030
 238:	7f880003 	0x7f880003
 23c:	0000309f 	revb.2h	$r31,$r4
 240:	00003c00 	revb.d	$r0,$r0
 244:	68000100 	bltu	$r8,$r0,0 # 244 <data_size-0x604>
 248:	0000003c 	0x0000003c
 24c:	00000050 	0x00000050
 250:	7f880003 	0x7f880003
 254:	0000509f 	bitrev.w	$r31,$r4
 258:	00005800 	ext.w.h	$r0,$r0
 25c:	68000100 	bltu	$r8,$r0,0 # 25c <data_size-0x5ec>
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
 380:	5701f300 	bl	-66911760(0xc0301f0) # fc030570 <_stack+0xe001f1c0>
 384:	0000dc9f 	0x0000dc9f
 388:	0000e800 	0x0000e800
 38c:	57000100 	bl	67305472(0x4030000) # 403038c <data_size+0x402fb44>
	...
 398:	00000020 	0x00000020
 39c:	00000034 	0x00000034
 3a0:	9f300002 	0x9f300002
 3a4:	00000034 	0x00000034
 3a8:	00000038 	0x00000038
 3ac:	38680001 	ammin.wu	$r1,$r0,$r0
 3b0:	58000000 	beq	$r0,$r0,0 # 3b0 <data_size-0x498>
 3b4:	08000000 	0x08000000
 3b8:	91007c00 	0x91007c00
 3bc:	50231c00 	b	8988(0x231c) # 26d8 <data_size+0x1e90>
 3c0:	0000589f 	ext.w.h	$r31,$r4
 3c4:	00006400 	rdtimeh.w	$r0,$r0
 3c8:	68000100 	bltu	$r8,$r0,0 # 3c8 <data_size-0x480>
 3cc:	000000b4 	0x000000b4
 3d0:	000000bc 	0x000000bc
 3d4:	d0680001 	0xd0680001
 3d8:	e8000000 	0xe8000000
 3dc:	02000000 	slti	$r0,$r0,0
 3e0:	009f3000 	bstrins.d	$r0,$r0,0x1f,0xc
 3e4:	00000000 	0x00000000
 3e8:	6c000000 	bgeu	$r0,$r0,0 # 3e8 <data_size-0x460>
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
 468:	5d000100 	bne	$r8,$r0,65536(0x10000) # 10468 <data_size+0xfc20>
 46c:	00000038 	0x00000038
 470:	00000058 	0x00000058
 474:	58670001 	beq	$r0,$r1,26368(0x6700) # 6b74 <data_size+0x632c>
 478:	64000000 	bge	$r0,$r0,0 # 478 <data_size-0x3d0>
 47c:	01000000 	0x01000000
 480:	00b45d00 	bstrins.d	$r0,$r8,0x34,0x17
 484:	00bc0000 	bstrins.d	$r0,$r0,0x3c,0x0
 488:	00010000 	asrtle.d	$r0,$r0
 48c:	0000d05d 	0x0000d05d
 490:	0000dc00 	0x0000dc00
 494:	67000100 	bge	$r8,$r0,-65536(0x30000) # ffff0494 <_stack+0xe3fdf0e4>
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
 4c4:	640801b8 	bge	$r13,$r24,2048(0x800) # cc4 <data_size+0x47c>
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
 504:	54000100 	bl	67108864(0x4000000) # 4000504 <data_size+0x3fffcbc>
	...
 510:	00000028 	0x00000028
 514:	00000094 	0x00000094
 518:	94540001 	0x94540001
 51c:	ac000000 	0xac000000
 520:	04000000 	csrrd	$r0,0x0
 524:	5401f300 	bl	-67108368(0xc0001f0) # fc000714 <_stack+0xdffef364>
 528:	0000009f 	0x0000009f
 52c:	00000000 	0x00000000
 530:	00002800 	cto.d	$r0,$r0
 534:	00003800 	revb.2w	$r0,$r0
 538:	30000200 	0x30000200
 53c:	0000389f 	revb.2w	$r31,$r4
 540:	0000ac00 	0x0000ac00
 544:	5f000100 	bne	$r8,$r0,-65536(0x30000) # ffff0544 <_stack+0xe3fdf194>
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
  1c:	69727000 	bltu	$r0,$r0,94832(0x17270) # 1728c <data_size+0x16a44>
  20:	2e66746e 	0x2e66746e
  24:	00000063 	0x00000063
  28:	05000000 	0x05000000
  2c:	0009c002 	bytepick.w	$r2,$r0,$r16,0x3
  30:	0105181c 	fmul.d	$f28,$f0,$f6
  34:	c0020500 	0xc0020500
  38:	181c0009 	pcaddi	$r9,57344(0xe000)
  3c:	05000105 	0x05000105
  40:	0009c002 	bytepick.w	$r2,$r0,$r16,0x3
  44:	0105181c 	fmul.d	$f28,$f0,$f6
  48:	c0020500 	0xc0020500
  4c:	181c0009 	pcaddi	$r9,57344(0xe000)
  50:	05000105 	0x05000105
  54:	0009c002 	bytepick.w	$r2,$r0,$r16,0x3
  58:	0105181c 	fmul.d	$f28,$f0,$f6
  5c:	c0020500 	0xc0020500
  60:	181c0009 	pcaddi	$r9,57344(0xe000)
  64:	05000105 	0x05000105
  68:	0009c002 	bytepick.w	$r2,$r0,$r16,0x3
  6c:	0105181c 	fmul.d	$f28,$f0,$f6
  70:	c0020500 	0xc0020500
  74:	061c0009 	cacop	0x9,$r0,1792(0x700)
  78:	00010511 	0x00010511
  7c:	09e00205 	vfnmsub.d	$vr5,$vr16,$vr0,$vr0
  80:	051f1c00 	0x051f1c00
  84:	0205000c 	slti	$r12,$r0,320(0x140)
  88:	1c0009e4 	pcaddu12i	$r4,79(0x4f)
  8c:	00010515 	0x00010515
  90:	09e80205 	vfnmsub.d	$vr5,$vr16,$vr0,$vr16
  94:	05111c00 	0x05111c00
  98:	02050001 	slti	$r1,$r0,320(0x140)
  9c:	1c000a04 	pcaddu12i	$r4,80(0x50)
  a0:	0001051d 	0x0001051d
  a4:	0a080205 	0x0a080205
  a8:	18061c00 	pcaddi	$r0,12512(0x30e0)
  ac:	05000105 	0x05000105
  b0:	000a0802 	0x000a0802
  b4:	0105181c 	fmul.d	$f28,$f0,$f6
  b8:	24020500 	ldptr.w	$r0,$r8,516(0x204)
  bc:	5d1c000a 	bne	$r0,$r10,72704(0x11c00) # 11cbc <data_size+0x11474>
  c0:	05000305 	0x05000305
  c4:	000a2c02 	0x000a2c02
  c8:	0402001c 	csrrd	$r28,0x80
  cc:	ba030602 	0xba030602
  d0:	1105017f 	addu16i.d	$r31,$r11,16704(0x4140)
  d4:	30020500 	0x30020500
  d8:	011c000a 	0x011c000a
  dc:	05000c05 	0x05000c05
  e0:	000a3802 	0x000a3802
  e4:	0105011c 	fmul.d	$f28,$f8,$f0
  e8:	3c020500 	0x3c020500
  ec:	001c000a 	mul.w	$r10,$r0,$r0
  f0:	06000402 	cacop	0x2,$r0,1(0x1)
  f4:	00020519 	0x00020519
  f8:	0a3c0205 	0x0a3c0205
  fc:	05181c00 	0x05181c00
 100:	02050002 	slti	$r2,$r0,320(0x140)
 104:	1c000a3c 	pcaddu12i	$r28,81(0x51)
 108:	04050106 	csrxchg	$r6,$r8,0x140
 10c:	44020500 	bnez	$r8,516(0x204) # 310 <data_size-0x538>
 110:	061c000a 	cacop	0xa,$r0,1792(0x700)
 114:	00030559 	0x00030559
 118:	0a440205 	0x0a440205
 11c:	01061c00 	0x01061c00
 120:	05000505 	0x05000505
 124:	000a4c02 	0x000a4c02
 128:	0402001c 	csrrd	$r28,0x80
 12c:	05010601 	0x05010601
 130:	0205000f 	slti	$r15,$r0,320(0x140)
 134:	1c000a60 	pcaddu12i	$r0,83(0x53)
 138:	00040200 	alsl.w	$r0,$r16,$r0,0x1
 13c:	01400306 	0x01400306
 140:	05000405 	0x05000405
 144:	000a6402 	0x000a6402
 148:	0305191c 	lu52i.d	$r28,$r8,326(0x146)
 14c:	68020500 	bltu	$r8,$r0,516(0x204) # 350 <data_size-0x4f8>
 150:	4a1c000a 	bceqz	$fcc0,2759680(0x2a1c00) # 2a1d50 <data_size+0x2a1508>
 154:	05000905 	0x05000905
 158:	000a6c02 	0x000a6c02
 15c:	4d03061c 	jirl	$r28,$r16,66308(0x10304)
 160:	00030501 	0x00030501
 164:	0a8c0205 	0x0a8c0205
 168:	5a061c00 	beq	$r0,$r0,-129508(0x2061c) # fffe0784 <_stack+0xe3fcf3d4>
 16c:	05000105 	0x05000105
 170:	000ab402 	0x000ab402
 174:	6d03061c 	bgeu	$r16,$r28,66308(0x10304) # 10478 <data_size+0xfc30>
 178:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 17c:	0abc0205 	0x0abc0205
 180:	01061c00 	0x01061c00
 184:	05000605 	0x05000605
 188:	000ac002 	0x000ac002
 18c:	0402001c 	csrrd	$r28,0x80
 190:	1a051901 	pcalau12i	$r1,10440(0x28c8)
 194:	c4020500 	0xc4020500
 198:	011c000a 	0x011c000a
 19c:	05000505 	0x05000505
 1a0:	000ad402 	0x000ad402
 1a4:	0402001c 	csrrd	$r28,0x80
 1a8:	05180603 	0x05180603
 1ac:	02050006 	slti	$r6,$r0,320(0x140)
 1b0:	1c000ad4 	pcaddu12i	$r20,86(0x56)
 1b4:	09050106 	0x09050106
 1b8:	d8020500 	0xd8020500
 1bc:	161c000a 	lu32i.d	$r10,57344(0xe000)
 1c0:	05002c05 	0x05002c05
 1c4:	000adc02 	0x000adc02
 1c8:	1005011c 	addu16i.d	$r28,$r8,320(0x140)
 1cc:	e0020500 	0xe0020500
 1d0:	181c000a 	pcaddi	$r10,57344(0xe000)
 1d4:	05001605 	0x05001605
 1d8:	000ae402 	0x000ae402
 1dc:	1005161c 	addu16i.d	$r28,$r16,325(0x145)
 1e0:	e8020500 	0xe8020500
 1e4:	011c000a 	0x011c000a
 1e8:	05001a05 	0x05001a05
 1ec:	000aec02 	0x000aec02
 1f0:	0505011c 	0x0505011c
 1f4:	f4020500 	0xf4020500
 1f8:	181c000a 	pcaddi	$r10,57344(0xe000)
 1fc:	05000705 	0x05000705
 200:	000af802 	0x000af802
 204:	0505161c 	0x0505161c
 208:	00020500 	0x00020500
 20c:	001c000b 	mul.w	$r11,$r0,$r0
 210:	06000402 	cacop	0x2,$r0,1(0x1)
 214:	05016f03 	0x05016f03
 218:	02050005 	slti	$r5,$r0,320(0x140)
 21c:	1c000b10 	pcaddu12i	$r16,88(0x58)
 220:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 224:	0b100205 	0x0b100205
 228:	01061c00 	0x01061c00
 22c:	05000805 	0x05000805
 230:	000b1402 	0x000b1402
 234:	0518061c 	0x0518061c
 238:	02050005 	slti	$r5,$r0,320(0x140)
 23c:	1c000b14 	pcaddu12i	$r20,88(0x58)
 240:	06050106 	cacop	0x6,$r8,320(0x140)
 244:	18020500 	pcaddi	$r0,4136(0x1028)
 248:	061c000b 	cacop	0xb,$r0,1792(0x700)
 24c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 250:	0b1c0205 	0x0b1c0205
 254:	64031c00 	bge	$r0,$r0,796(0x31c) # 570 <data_size-0x2d8>
 258:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 25c:	0b200205 	0x0b200205
 260:	19061c00 	pcaddi	$r0,-511776(0x830e0)
 264:	05000605 	0x05000605
 268:	000b2402 	0x000b2402
 26c:	0805161c 	0x0805161c
 270:	28020500 	ld.b	$r0,$r8,129(0x81)
 274:	161c000b 	lu32i.d	$r11,57344(0xe000)
 278:	05000505 	0x05000505
 27c:	000b2c02 	0x000b2c02
 280:	0518061c 	0x0518061c
 284:	02050005 	slti	$r5,$r0,320(0x140)
 288:	1c000b2c 	pcaddu12i	$r12,89(0x59)
 28c:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 290:	0b2c0205 	0x0b2c0205
 294:	05181c00 	0x05181c00
 298:	02050005 	slti	$r5,$r0,320(0x140)
 29c:	1c000b30 	pcaddu12i	$r16,89(0x59)
 2a0:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
 2a4:	0b400205 	0x0b400205
 2a8:	05181c00 	0x05181c00
 2ac:	02050005 	slti	$r5,$r0,320(0x140)
 2b0:	1c000b40 	pcaddu12i	$r0,90(0x5a)
 2b4:	08050106 	0x08050106
 2b8:	44020500 	bnez	$r8,516(0x204) # 4bc <data_size-0x38c>
 2bc:	061c000b 	cacop	0xb,$r0,1792(0x700)
 2c0:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 2c4:	0b440205 	0x0b440205
 2c8:	01061c00 	0x01061c00
 2cc:	05000605 	0x05000605
 2d0:	000b4802 	0x000b4802
 2d4:	0518061c 	0x0518061c
 2d8:	02050005 	slti	$r5,$r0,320(0x140)
 2dc:	1c000b4c 	pcaddu12i	$r12,90(0x5a)
 2e0:	00110519 	sub.w	$r25,$r8,$r1
 2e4:	0b5c0205 	0x0b5c0205
 2e8:	05181c00 	0x05181c00
 2ec:	02050011 	slti	$r17,$r0,320(0x140)
 2f0:	1c000b5c 	pcaddu12i	$r28,90(0x5a)
 2f4:	14050106 	lu12i.w	$r6,10248(0x2808)
 2f8:	60020500 	blt	$r8,$r0,516(0x204) # 4fc <data_size-0x34c>
 2fc:	061c000b 	cacop	0xb,$r0,1792(0x700)
 300:	00110518 	sub.w	$r24,$r8,$r1
 304:	0b600205 	0x0b600205
 308:	01061c00 	0x01061c00
 30c:	05001205 	0x05001205
 310:	000b6402 	0x000b6402
 314:	0518061c 	0x0518061c
 318:	02050011 	slti	$r17,$r0,320(0x140)
 31c:	1c000b68 	pcaddu12i	$r8,91(0x5b)
 320:	00050519 	alsl.w	$r25,$r8,$r1,0x3
 324:	0b780205 	0x0b780205
 328:	05181c00 	0x05181c00
 32c:	02050005 	slti	$r5,$r0,320(0x140)
 330:	1c000b78 	pcaddu12i	$r24,91(0x5b)
 334:	08050106 	0x08050106
 338:	7c020500 	0x7c020500
 33c:	061c000b 	cacop	0xb,$r0,1792(0x700)
 340:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 344:	0b7c0205 	0x0b7c0205
 348:	01061c00 	0x01061c00
 34c:	05000605 	0x05000605
 350:	000b8002 	0x000b8002
 354:	0518061c 	0x0518061c
 358:	02050005 	slti	$r5,$r0,320(0x140)
 35c:	1c000b84 	pcaddu12i	$r4,92(0x5c)
 360:	0005051f 	alsl.w	$r31,$r8,$r1,0x3
 364:	0b940205 	0x0b940205
 368:	05181c00 	0x05181c00
 36c:	02050005 	slti	$r5,$r0,320(0x140)
 370:	1c000b94 	pcaddu12i	$r20,92(0x5c)
 374:	08050106 	0x08050106
 378:	98020500 	0x98020500
 37c:	061c000b 	cacop	0xb,$r0,1792(0x700)
 380:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 384:	0b980205 	0x0b980205
 388:	01061c00 	0x01061c00
 38c:	05000605 	0x05000605
 390:	000b9c02 	0x000b9c02
 394:	0518061c 	0x0518061c
 398:	02050005 	slti	$r5,$r0,320(0x140)
 39c:	1c000ba0 	pcaddu12i	$r0,93(0x5d)
 3a0:	05015903 	0x05015903
 3a4:	02050005 	slti	$r5,$r0,320(0x140)
 3a8:	1c000ba4 	pcaddu12i	$r4,93(0x5d)
 3ac:	06051906 	cacop	0x6,$r8,326(0x146)
 3b0:	a8020500 	0xa8020500
 3b4:	161c000b 	lu32i.d	$r11,57344(0xe000)
 3b8:	05000805 	0x05000805
 3bc:	000bac02 	0x000bac02
 3c0:	0505161c 	0x0505161c
 3c4:	b0020500 	0xb0020500
 3c8:	061c000b 	cacop	0xb,$r0,1792(0x700)
 3cc:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 3d0:	0bb00205 	0x0bb00205
 3d4:	05181c00 	0x05181c00
 3d8:	02050005 	slti	$r5,$r0,320(0x140)
 3dc:	1c000bb0 	pcaddu12i	$r16,93(0x5d)
 3e0:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 3e4:	0bb40205 	0x0bb40205
 3e8:	051e1c00 	0x051e1c00
 3ec:	02050005 	slti	$r5,$r0,320(0x140)
 3f0:	1c000bc4 	pcaddu12i	$r4,94(0x5e)
 3f4:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 3f8:	0bc40205 	0x0bc40205
 3fc:	01061c00 	0x01061c00
 400:	05000805 	0x05000805
 404:	000bc802 	0x000bc802
 408:	0518061c 	0x0518061c
 40c:	02050005 	slti	$r5,$r0,320(0x140)
 410:	1c000bc8 	pcaddu12i	$r8,94(0x5e)
 414:	06050106 	cacop	0x6,$r8,320(0x140)
 418:	cc020500 	0xcc020500
 41c:	061c000b 	cacop	0xb,$r0,1792(0x700)
 420:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 424:	0bd00205 	0x0bd00205
 428:	05331c00 	0x05331c00
 42c:	02050005 	slti	$r5,$r0,320(0x140)
 430:	1c000bd8 	pcaddu12i	$r24,94(0x5e)
 434:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 438:	0bd80205 	0x0bd80205
 43c:	01061c00 	0x01061c00
 440:	05000605 	0x05000605
 444:	000bdc02 	0x000bdc02
 448:	0518061c 	0x0518061c
 44c:	02050005 	slti	$r5,$r0,320(0x140)
 450:	1c000be0 	pcaddu12i	$r0,95(0x5f)
 454:	0006051e 	alsl.wu	$r30,$r8,$r1,0x1
 458:	0be00205 	0x0be00205
 45c:	051a1c00 	0x051a1c00
 460:	02050005 	slti	$r5,$r0,320(0x140)
 464:	1c000be8 	pcaddu12i	$r8,95(0x5f)
 468:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 46c:	0bec0205 	0x0bec0205
 470:	01001c00 	0x01001c00
 474:	0000ae01 	0x0000ae01
 478:	21000400 	sc.w	$r0,$r0,4(0x4)
 47c:	01000000 	0x01000000
 480:	f2f60101 	0xf2f60101
 484:	0101000d 	fadd.d	$f13,$f0,$f0
 488:	00000101 	0x00000101
 48c:	00000100 	0x00000100
 490:	75700001 	0x75700001
 494:	61686374 	blt	$r27,$r20,92256(0x16860) # 16cf4 <data_size+0x164ac>
 498:	00632e72 	bstrins.w	$r18,$r19,0x3,0xb
 49c:	00000000 	0x00000000
 4a0:	ec020500 	0xec020500
 4a4:	181c000b 	pcaddi	$r11,57344(0xe000)
 4a8:	05000105 	0x05000105
 4ac:	000bec02 	0x000bec02
 4b0:	0105181c 	fmul.d	$f28,$f0,$f6
 4b4:	ec020500 	0xec020500
 4b8:	1d1c000b 	pcaddu12i	$r11,-466944(0x8e000)
 4bc:	05000505 	0x05000505
 4c0:	000bec02 	0x000bec02
 4c4:	0510061c 	0x0510061c
 4c8:	02050001 	slti	$r1,$r0,320(0x140)
 4cc:	1c000bf4 	pcaddu12i	$r20,95(0x5f)
 4d0:	0005051e 	alsl.w	$r30,$r8,$r1,0x3
 4d4:	0c040205 	0x0c040205
 4d8:	12061c00 	addu16i.d	$r0,$r0,-32377(0x8187)
 4dc:	05000105 	0x05000105
 4e0:	000c0402 	bytepick.d	$r2,$r0,$r1,0x0
 4e4:	0518061c 	0x0518061c
 4e8:	02050001 	slti	$r1,$r0,320(0x140)
 4ec:	1c000c14 	pcaddu12i	$r20,96(0x60)
 4f0:	01051a06 	fmul.d	$f6,$f16,$f6
 4f4:	14020500 	lu12i.w	$r0,4136(0x1028)
 4f8:	181c000c 	pcaddi	$r12,57344(0xe000)
 4fc:	05000505 	0x05000505
 500:	000c1402 	bytepick.d	$r2,$r0,$r5,0x0
 504:	0516061c 	0x0516061c
 508:	02050001 	slti	$r1,$r0,320(0x140)
 50c:	1c000c1c 	pcaddu12i	$r28,96(0x60)
 510:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 514:	0c2c0205 	fcmp.cune.d	$fcc5,$f16,$f0
 518:	051e1c00 	0x051e1c00
 51c:	02050001 	slti	$r1,$r0,320(0x140)
 520:	1c000c38 	pcaddu12i	$r24,97(0x61)
 524:	65010100 	bge	$r8,$r0,65792(0x10100) # 10624 <data_size+0xfddc>
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
 550:	0c380205 	0x0c380205
 554:	05181c00 	0x05181c00
 558:	02050001 	slti	$r1,$r0,320(0x140)
 55c:	1c000c38 	pcaddu12i	$r24,97(0x61)
 560:	00010518 	0x00010518
 564:	0c380205 	0x0c380205
 568:	05181c00 	0x05181c00
 56c:	02050001 	slti	$r1,$r0,320(0x140)
 570:	1c000c38 	pcaddu12i	$r24,97(0x61)
 574:	01051506 	fmul.d	$f6,$f8,$f5
 578:	4c020500 	jirl	$r0,$r8,516(0x204)
 57c:	191c000c 	pcaddi	$r12,-466944(0x8e000)
 580:	05000905 	0x05000905
 584:	000c5002 	bytepick.d	$r2,$r0,$r20,0x0
 588:	0605011c 	cacop	0x1c,$r8,320(0x140)
 58c:	58020500 	beq	$r8,$r0,516(0x204) # 790 <data_size-0xb8>
 590:	191c000c 	pcaddi	$r12,-466944(0x8e000)
 594:	05000405 	0x05000405
 598:	000c6002 	bytepick.d	$r2,$r0,$r24,0x0
 59c:	0518061c 	0x0518061c
 5a0:	02050002 	slti	$r2,$r0,320(0x140)
 5a4:	1c000c68 	pcaddu12i	$r8,99(0x63)
 5a8:	00020518 	0x00020518
 5ac:	0c680205 	vfcmp.cne.d	$vr5,$vr16,$vr0
 5b0:	13061c00 	addu16i.d	$r0,$r0,-15993(0xc187)
 5b4:	05000905 	0x05000905
 5b8:	000c6c02 	bytepick.d	$r2,$r0,$r27,0x0
 5bc:	0605011c 	cacop	0x1c,$r8,320(0x140)
 5c0:	70020500 	vsle.b	$vr0,$vr8,$vr1
 5c4:	061c000c 	cacop	0xc,$r0,1792(0x700)
 5c8:	00020519 	0x00020519
 5cc:	0c700205 	0x0c700205
 5d0:	19061c00 	pcaddi	$r0,-511776(0x830e0)
 5d4:	05000305 	0x05000305
 5d8:	000c7402 	bytepick.d	$r2,$r0,$r29,0x0
 5dc:	0405151c 	csrxchg	$r28,$r8,0x145
 5e0:	78020500 	0x78020500
 5e4:	001c000c 	mul.w	$r12,$r0,$r0
 5e8:	06010402 	cacop	0x2,$r0,65(0x41)
 5ec:	00100501 	add.w	$r1,$r8,$r1
 5f0:	0c800205 	0x0c800205
 5f4:	05181c00 	0x05181c00
 5f8:	02050002 	slti	$r2,$r0,320(0x140)
 5fc:	1c000c88 	pcaddu12i	$r8,100(0x64)
 600:	00020518 	0x00020518
 604:	0c880205 	0x0c880205
 608:	13061c00 	addu16i.d	$r0,$r0,-15993(0xc187)
 60c:	05000905 	0x05000905
 610:	000c8c02 	bytepick.d	$r2,$r0,$r3,0x1
 614:	0605011c 	cacop	0x1c,$r8,320(0x140)
 618:	90020500 	0x90020500
 61c:	001c000c 	mul.w	$r12,$r0,$r0
 620:	06000402 	cacop	0x2,$r0,1(0x1)
 624:	0001051d 	0x0001051d
 628:	0c900205 	xvfcmp.caf.s	$xr5,$xr16,$xr0
 62c:	18061c00 	pcaddi	$r0,12512(0x30e0)
 630:	05000105 	0x05000105
 634:	000cac02 	bytepick.d	$r2,$r0,$r11,0x1
 638:	051b061c 	0x051b061c
 63c:	02050001 	slti	$r1,$r0,320(0x140)
 640:	1c000cac 	pcaddu12i	$r12,101(0x65)
 644:	00010518 	0x00010518
 648:	0cac0205 	xvfcmp.cune.d	$xr5,$xr16,$xr0
 64c:	16061c00 	lu32i.d	$r0,12512(0x30e0)
 650:	05000105 	0x05000105
 654:	000cb402 	bytepick.d	$r2,$r0,$r13,0x1
 658:	0105181c 	fmul.d	$f28,$f0,$f6
 65c:	b8020500 	0xb8020500
 660:	061c000c 	cacop	0xc,$r0,1792(0x700)
 664:	00010518 	0x00010518
 668:	0cc00205 	0x0cc00205
 66c:	05181c00 	0x05181c00
 670:	02050001 	slti	$r1,$r0,320(0x140)
 674:	1c000cc8 	pcaddu12i	$r8,102(0x66)
 678:	00010518 	0x00010518
 67c:	0cc80205 	0x0cc80205
 680:	18061c00 	pcaddi	$r0,12512(0x30e0)
 684:	05000105 	0x05000105
 688:	000cd802 	bytepick.d	$r2,$r0,$r22,0x1
 68c:	0101001c 	fadd.d	$f28,$f0,$f0
 690:	000001bf 	0x000001bf
 694:	00230004 	div.du	$r4,$r0,$r0
 698:	01010000 	fadd.d	$f0,$f0,$f0
 69c:	0df2f601 	0x0df2f601
 6a0:	01010100 	fadd.d	$f0,$f8,$f0
 6a4:	00000001 	0x00000001
 6a8:	01000001 	0x01000001
 6ac:	69727000 	bltu	$r0,$r0,94832(0x17270) # 1791c <data_size+0x170d4>
 6b0:	6162746e 	blt	$r3,$r14,90740(0x16274) # 16924 <data_size+0x160dc>
 6b4:	632e6573 	blt	$r11,$r19,-53660(0x32e64) # ffff3518 <_stack+0xe3fe2168>
 6b8:	00000000 	0x00000000
 6bc:	02050000 	slti	$r0,$r0,320(0x140)
 6c0:	1c000cd8 	pcaddu12i	$r24,102(0x66)
 6c4:	00010518 	0x00010518
 6c8:	0cd80205 	0x0cd80205
 6cc:	05181c00 	0x05181c00
 6d0:	02050002 	slti	$r2,$r0,320(0x140)
 6d4:	1c000cd8 	pcaddu12i	$r24,102(0x66)
 6d8:	00020518 	0x00020518
 6dc:	0cd80205 	0x0cd80205
 6e0:	05181c00 	0x05181c00
 6e4:	02050002 	slti	$r2,$r0,320(0x140)
 6e8:	1c000cd8 	pcaddu12i	$r24,102(0x66)
 6ec:	00020518 	0x00020518
 6f0:	0cd80205 	0x0cd80205
 6f4:	05181c00 	0x05181c00
 6f8:	02050002 	slti	$r2,$r0,320(0x140)
 6fc:	1c000cd8 	pcaddu12i	$r24,102(0x66)
 700:	01051206 	fmul.d	$f6,$f16,$f4
 704:	ec020500 	0xec020500
 708:	011c000c 	0x011c000c
 70c:	05000105 	0x05000105
 710:	000cf002 	bytepick.d	$r2,$r0,$r28,0x1
 714:	04051c1c 	csrrd	$r28,0x147
 718:	f4020500 	0xf4020500
 71c:	001c000c 	mul.w	$r12,$r0,$r0
 720:	01010402 	fadd.d	$f2,$f0,$f1
 724:	05000a05 	0x05000a05
 728:	000cf802 	bytepick.d	$r2,$r0,$r30,0x1
 72c:	0402001c 	csrrd	$r28,0x80
 730:	051c0600 	0x051c0600
 734:	02050007 	slti	$r7,$r0,320(0x140)
 738:	1c000cf8 	pcaddu12i	$r24,103(0x67)
 73c:	02051906 	slti	$r6,$r8,326(0x146)
 740:	0c020500 	0x0c020500
 744:	1a1c000d 	pcalau12i	$r13,57344(0xe000)
 748:	05000705 	0x05000705
 74c:	000d1002 	bytepick.d	$r2,$r0,$r4,0x2
 750:	0402001c 	csrrd	$r28,0x80
 754:	05160603 	0x05160603
 758:	02050002 	slti	$r2,$r0,320(0x140)
 75c:	1c000d10 	pcaddu12i	$r16,104(0x68)
 760:	0e050106 	0x0e050106
 764:	1c020500 	pcaddu12i	$r0,4136(0x1028)
 768:	011c000d 	0x011c000d
 76c:	05000805 	0x05000805
 770:	000d2002 	bytepick.d	$r2,$r0,$r8,0x2
 774:	0518061c 	0x0518061c
 778:	02050002 	slti	$r2,$r0,320(0x140)
 77c:	1c000d24 	pcaddu12i	$r4,105(0x69)
 780:	07050106 	0x07050106
 784:	34020500 	0x34020500
 788:	141c000d 	lu12i.w	$r13,57344(0xe000)
 78c:	05000205 	0x05000205
 790:	000d3802 	bytepick.d	$r2,$r0,$r14,0x2
 794:	0402001c 	csrrd	$r28,0x80
 798:	051f0600 	0x051f0600
 79c:	02050002 	slti	$r2,$r0,320(0x140)
 7a0:	1c000d38 	pcaddu12i	$r24,105(0x69)
 7a4:	07050106 	0x07050106
 7a8:	40020500 	beqz	$r8,516(0x204) # 9ac <data_size+0x164>
 7ac:	1a1c000d 	pcalau12i	$r13,57344(0xe000)
 7b0:	05000305 	0x05000305
 7b4:	000d4402 	bytepick.d	$r2,$r0,$r17,0x2
 7b8:	0516061c 	0x0516061c
 7bc:	02050003 	slti	$r3,$r0,320(0x140)
 7c0:	1c000d44 	pcaddu12i	$r4,106(0x6a)
 7c4:	0e050106 	0x0e050106
 7c8:	50020500 	b	67109380(0x4000204) # 40009cc <data_size+0x4000184>
 7cc:	011c000d 	0x011c000d
 7d0:	05000a05 	0x05000a05
 7d4:	000d5802 	bytepick.d	$r2,$r0,$r22,0x2
 7d8:	0402001c 	csrrd	$r28,0x80
 7dc:	05180601 	0x05180601
 7e0:	02050003 	slti	$r3,$r0,320(0x140)
 7e4:	1c000d6c 	pcaddu12i	$r12,107(0x6b)
 7e8:	04040200 	csrxchg	$r0,$r16,0x100
 7ec:	02051406 	slti	$r6,$r0,325(0x145)
 7f0:	70020500 	vsle.b	$vr0,$vr8,$vr1
 7f4:	001c000d 	mul.w	$r13,$r0,$r0
 7f8:	1d000402 	pcaddu12i	$r2,-524256(0x80020)
 7fc:	05000105 	0x05000105
 800:	000d8c02 	bytepick.d	$r2,$r0,$r3,0x3
 804:	0705111c 	0x0705111c
 808:	94020500 	0x94020500
 80c:	031c000d 	lu52i.d	$r13,$r0,1792(0x700)
 810:	02050174 	slti	$r20,$r11,320(0x140)
 814:	a0020500 	0xa0020500
 818:	061c000d 	cacop	0xd,$r0,1792(0x700)
 81c:	00020516 	0x00020516
 820:	0da00205 	0x0da00205
 824:	18061c00 	pcaddi	$r0,12512(0x30e0)
 828:	05000205 	0x05000205
 82c:	000da402 	bytepick.d	$r2,$r0,$r9,0x3
 830:	0a05161c 	0x0a05161c
 834:	a8020500 	0xa8020500
 838:	061c000d 	cacop	0xd,$r0,1792(0x700)
 83c:	00020518 	0x00020518
 840:	0db40205 	0x0db40205
 844:	05231c00 	0x05231c00
 848:	02050002 	slti	$r2,$r0,320(0x140)
 84c:	1c000dc0 	pcaddu12i	$r0,110(0x6e)
 850:	e6010100 	0xe6010100
 854:	04000002 	csrrd	$r2,0x0
 858:	00003300 	revb.2h	$r0,$r24
 85c:	01010100 	fadd.d	$f0,$f8,$f0
 860:	000df2f6 	bytepick.d	$r22,$r23,$r28,0x3
 864:	01010101 	fadd.d	$f1,$f8,$f0
 868:	01000000 	0x01000000
 86c:	2e010000 	0x2e010000
 870:	6e692f2e 	bgeu	$r25,$r14,-104148(0x2692c) # fffe719c <_stack+0xe3fd5dec>
 874:	64756c63 	bge	$r3,$r3,30060(0x756c) # 7de0 <data_size+0x7598>
 878:	74000065 	xvseq.b	$xr5,$xr3,$xr0
 87c:	2e656d69 	0x2e656d69
 880:	00000063 	0x00000063
 884:	6d697400 	bgeu	$r0,$r0,92532(0x16974) # 171f8 <data_size+0x169b0>
 888:	00682e65 	bstrins.w	$r5,$r19,0x8,0xb
 88c:	00000001 	0x00000001
 890:	c0020500 	0xc0020500
 894:	281c000d 	ld.b	$r13,$r0,1792(0x700)
 898:	05000105 	0x05000105
 89c:	000dc002 	bytepick.d	$r2,$r0,$r16,0x3
 8a0:	0505181c 	0x0505181c
 8a4:	c0020500 	0xc0020500
 8a8:	031c000d 	lu52i.d	$r13,$r0,1792(0x700)
 8ac:	05050173 	0x05050173
 8b0:	c0020500 	0xc0020500
 8b4:	181c000d 	pcaddi	$r13,57344(0xe000)
 8b8:	05000505 	0x05000505
 8bc:	000dc002 	bytepick.d	$r2,$r0,$r16,0x3
 8c0:	0522061c 	0x0522061c
 8c4:	02050001 	slti	$r1,$r0,320(0x140)
 8c8:	1c000dc8 	pcaddu12i	$r8,110(0x6e)
 8cc:	05017503 	0x05017503
 8d0:	02050005 	slti	$r5,$r0,320(0x140)
 8d4:	1c000dd0 	pcaddu12i	$r16,110(0x6e)
 8d8:	05051e06 	0x05051e06
 8dc:	d0020500 	0xd0020500
 8e0:	061c000d 	cacop	0xd,$r0,1792(0x700)
 8e4:	0001051d 	0x0001051d
 8e8:	0de00205 	0x0de00205
 8ec:	1a061c00 	pcalau12i	$r0,12512(0x30e0)
 8f0:	05000105 	0x05000105
 8f4:	000de002 	bytepick.d	$r2,$r0,$r24,0x3
 8f8:	0505181c 	0x0505181c
 8fc:	e0020500 	0xe0020500
 900:	181c000d 	pcaddi	$r13,57344(0xe000)
 904:	05000505 	0x05000505
 908:	000de402 	bytepick.d	$r2,$r0,$r25,0x3
 90c:	05051b1c 	0x05051b1c
 910:	e4020500 	0xe4020500
 914:	061c000d 	cacop	0xd,$r0,1792(0x700)
 918:	00010518 	0x00010518
 91c:	0de80205 	0x0de80205
 920:	1a061c00 	pcalau12i	$r0,12512(0x30e0)
 924:	05000105 	0x05000105
 928:	000de802 	bytepick.d	$r2,$r0,$r26,0x3
 92c:	0505181c 	0x0505181c
 930:	e8020500 	0xe8020500
 934:	181c000d 	pcaddi	$r13,57344(0xe000)
 938:	05000505 	0x05000505
 93c:	000de802 	bytepick.d	$r2,$r0,$r26,0x3
 940:	0163031c 	0x0163031c
 944:	05000505 	0x05000505
 948:	000de802 	bytepick.d	$r2,$r0,$r26,0x3
 94c:	0505181c 	0x0505181c
 950:	e8020500 	0xe8020500
 954:	061c000d 	cacop	0xd,$r0,1792(0x700)
 958:	00010531 	0x00010531
 95c:	0df00205 	0x0df00205
 960:	66031c00 	bge	$r0,$r0,-130276(0x2031c) # fffe0c7c <_stack+0xe3fcf8cc>
 964:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 968:	0df80205 	0x0df80205
 96c:	1e061c00 	pcaddu18i	$r0,12512(0x30e0)
 970:	05000505 	0x05000505
 974:	000df802 	bytepick.d	$r2,$r0,$r30,0x3
 978:	05052d1c 	0x05052d1c
 97c:	f8020500 	0xf8020500
 980:	061c000d 	cacop	0xd,$r0,1792(0x700)
 984:	00150501 	or	$r1,$r8,$r1
 988:	0e000205 	0x0e000205
 98c:	05181c00 	0x05181c00
 990:	02050016 	slti	$r22,$r0,320(0x140)
 994:	1c000e04 	pcaddu12i	$r4,112(0x70)
 998:	00360516 	0x00360516
 99c:	0e080205 	0x0e080205
 9a0:	05181c00 	0x05181c00
 9a4:	02050016 	slti	$r22,$r0,320(0x140)
 9a8:	1c000e14 	pcaddu12i	$r20,112(0x70)
 9ac:	00280501 	0x00280501
 9b0:	0e200205 	0x0e200205
 9b4:	05181c00 	0x05181c00
 9b8:	02050027 	slti	$r7,$r1,320(0x140)
 9bc:	1c000e34 	pcaddu12i	$r20,113(0x71)
 9c0:	00360501 	0x00360501
 9c4:	0e400205 	0x0e400205
 9c8:	05161c00 	0x05161c00
 9cc:	02050012 	slti	$r18,$r0,320(0x140)
 9d0:	1c000e44 	pcaddu12i	$r4,114(0x72)
 9d4:	00120518 	slt	$r24,$r8,$r1
 9d8:	0e480205 	0x0e480205
 9dc:	05181c00 	0x05181c00
 9e0:	02050012 	slti	$r18,$r0,320(0x140)
 9e4:	1c000e4c 	pcaddu12i	$r12,114(0x72)
 9e8:	0001051a 	0x0001051a
 9ec:	0e540205 	0x0e540205
 9f0:	05111c00 	0x05111c00
 9f4:	02050036 	slti	$r22,$r1,320(0x140)
 9f8:	1c000e60 	pcaddu12i	$r0,115(0x73)
 9fc:	00120501 	slt	$r1,$r8,$r1
 a00:	0e640205 	0x0e640205
 a04:	18061c00 	pcaddi	$r0,12512(0x30e0)
 a08:	05000505 	0x05000505
 a0c:	000e6402 	bytepick.d	$r2,$r0,$r25,0x4
 a10:	0505181c 	0x0505181c
 a14:	64020500 	bge	$r8,$r0,516(0x204) # c18 <data_size+0x3d0>
 a18:	181c000e 	pcaddi	$r14,57344(0xe000)
 a1c:	05000505 	0x05000505
 a20:	000e6402 	bytepick.d	$r2,$r0,$r25,0x4
 a24:	0505191c 	0x0505191c
 a28:	64020500 	bge	$r8,$r0,516(0x204) # c2c <data_size+0x3e4>
 a2c:	061c000e 	cacop	0xe,$r0,1792(0x700)
 a30:	00010518 	0x00010518
 a34:	0e700205 	0x0e700205
 a38:	21061c00 	sc.w	$r0,$r0,1564(0x61c)
 a3c:	05000105 	0x05000105
 a40:	000e7002 	bytepick.d	$r2,$r0,$r28,0x4
 a44:	0505181c 	0x0505181c
 a48:	70020500 	vsle.b	$vr0,$vr8,$vr1
 a4c:	181c000e 	pcaddi	$r14,57344(0xe000)
 a50:	05000505 	0x05000505
 a54:	000e7002 	bytepick.d	$r2,$r0,$r28,0x4
 a58:	0150031c 	0x0150031c
 a5c:	05000505 	0x05000505
 a60:	000e7002 	bytepick.d	$r2,$r0,$r28,0x4
 a64:	0505181c 	0x0505181c
 a68:	70020500 	vsle.b	$vr0,$vr8,$vr1
 a6c:	061c000e 	cacop	0xe,$r0,1792(0x700)
 a70:	00010544 	0x00010544
 a74:	0e780205 	0x0e780205
 a78:	53031c00 	b	197404(0x3031c) # 30d94 <data_size+0x3054c>
 a7c:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 a80:	0e800205 	0x0e800205
 a84:	1e061c00 	pcaddu18i	$r0,12512(0x30e0)
 a88:	05000505 	0x05000505
 a8c:	000e8002 	bytepick.d	$r2,$r0,$r0,0x5
 a90:	0505401c 	0x0505401c
 a94:	80020500 	0x80020500
 a98:	181c000e 	pcaddi	$r14,57344(0xe000)
 a9c:	05000505 	0x05000505
 aa0:	000e8002 	bytepick.d	$r2,$r0,$r0,0x5
 aa4:	0516061c 	0x0516061c
 aa8:	02050006 	slti	$r6,$r0,320(0x140)
 aac:	1c000e84 	pcaddu12i	$r4,116(0x74)
 ab0:	00010519 	0x00010519
 ab4:	0e940205 	0x0e940205
 ab8:	1b061c00 	pcalau12i	$r0,-511776(0x830e0)
 abc:	05000105 	0x05000105
 ac0:	000e9402 	bytepick.d	$r2,$r0,$r5,0x5
 ac4:	0505181c 	0x0505181c
 ac8:	94020500 	0x94020500
 acc:	181c000e 	pcaddi	$r14,57344(0xe000)
 ad0:	05000505 	0x05000505
 ad4:	000e9402 	bytepick.d	$r2,$r0,$r5,0x5
 ad8:	0147031c 	0x0147031c
 adc:	05000505 	0x05000505
 ae0:	000e9402 	bytepick.d	$r2,$r0,$r5,0x5
 ae4:	0505181c 	0x0505181c
 ae8:	94020500 	0x94020500
 aec:	061c000e 	cacop	0xe,$r0,1792(0x700)
 af0:	0001054d 	0x0001054d
 af4:	0e9c0205 	0x0e9c0205
 af8:	4a031c00 	bceqz	$fcc0,131868(0x2031c) # 20e14 <data_size+0x205cc>
 afc:	00050501 	alsl.w	$r1,$r8,$r1,0x3
 b00:	0ea40205 	0x0ea40205
 b04:	1e061c00 	pcaddu18i	$r0,12512(0x30e0)
 b08:	05000505 	0x05000505
 b0c:	000ea402 	bytepick.d	$r2,$r0,$r9,0x5
 b10:	0505491c 	0x0505491c
 b14:	a4020500 	0xa4020500
 b18:	181c000e 	pcaddi	$r14,57344(0xe000)
 b1c:	05000505 	0x05000505
 b20:	000ea402 	bytepick.d	$r2,$r0,$r9,0x5
 b24:	0516061c 	0x0516061c
 b28:	02050006 	slti	$r6,$r0,320(0x140)
 b2c:	1c000ea8 	pcaddu12i	$r8,117(0x75)
 b30:	00010519 	0x00010519
 b34:	0ec40205 	0x0ec40205
 b38:	01001c00 	0x01001c00
 b3c:	Address 0x0000000000000b3c is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff7474 <_stack+0xe3fe60c4>
   4:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
   8:	73747570 	0x73747570
   c:	6e697274 	bgeu	$r19,$r20,-104080(0x26970) # fffe697c <_stack+0xe3fd55cc>
  10:	72700067 	0x72700067
  14:	62746e69 	blt	$r19,$r9,-101268(0x2746c) # fffe7480 <_stack+0xe3fd60d0>
  18:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
  1c:	5f746774 	bne	$r27,$r20,-35740(0x37464) # ffff7480 <_stack+0xe3fe60d0>
  20:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff7494 <_stack+0xe3fe60e4>
  24:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
  28:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff749c <_stack+0xe3fe60ec>
  2c:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
  30:	63747570 	blt	$r11,$r16,-35724(0x37474) # ffff74a4 <_stack+0xe3fe60f4>
  34:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
