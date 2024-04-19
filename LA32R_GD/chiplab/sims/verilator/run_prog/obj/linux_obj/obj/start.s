
start.o:     file format elf32-loongarch


Disassembly of section .text:

00000000 <_boot>:
   0:	143fc00d 	lu12i.w	$r13,130560(0x1fe00)
   4:	038781ad 	ori	$r13,$r13,0x1e0
   8:	03811c0e 	ori	$r14,$r0,0x47
   c:	290009ae 	st.b	$r14,$r13,2(0x2)
  10:	0382000e 	ori	$r14,$r0,0x80
  14:	29000dae 	st.b	$r14,$r13,3(0x3)
  18:	0380040e 	ori	$r14,$r0,0x1
  1c:	290001ae 	st.b	$r14,$r13,0
  20:	0015000e 	move	$r14,$r0
  24:	290005ae 	st.b	$r14,$r13,1(0x1)
  28:	03800c0e 	ori	$r14,$r0,0x3
  2c:	29000dae 	st.b	$r14,$r13,3(0x3)
  30:	0015000e 	move	$r14,$r0
  34:	290011ae 	st.b	$r14,$r13,4(0x4)
  38:	0380400f 	ori	$r15,$r0,0x10

0000003c <test_loop>:
  3c:	280015ae 	ld.b	$r14,$r13,5(0x5)
  40:	034005ce 	andi	$r14,$r14,0x1
  44:	58001dc0 	beq	$r14,$r0,28(0x1c) # 60 <test_loop_end>

00000048 <read_loop>:
  48:	280015ae 	ld.b	$r14,$r13,5(0x5)
  4c:	034005ce 	andi	$r14,$r14,0x1
  50:	5bfff9c0 	beq	$r14,$r0,-8(0x3fff8) # 48 <read_loop>
  54:	280001ae 	ld.b	$r14,$r13,0
  58:	02bffdef 	addi.w	$r15,$r15,-1(0xfff)
  5c:	5fffe1e0 	bne	$r15,$r0,-32(0x3ffe0) # 3c <test_loop>

00000060 <test_loop_end>:
  60:	03818410 	ori	$r16,$r0,0x61
  64:	0380280f 	ori	$r15,$r0,0xa

00000068 <write_loop1>:
  68:	280015ae 	ld.b	$r14,$r13,5(0x5)
  6c:	034081ce 	andi	$r14,$r14,0x20
  70:	5bfff9c0 	beq	$r14,$r0,-8(0x3fff8) # 68 <write_loop1>
  74:	290001b0 	st.b	$r16,$r13,0
  78:	02800610 	addi.w	$r16,$r16,1(0x1)
  7c:	02bffdef 	addi.w	$r15,$r15,-1(0xfff)
  80:	5fffe9e0 	bne	$r15,$r0,-24(0x3ffe8) # 68 <write_loop1>
  84:	03802811 	ori	$r17,$r0,0xa
  88:	54009800 	bl	152(0x98) # 120 <loop>
  8c:	0381d411 	ori	$r17,$r0,0x75
  90:	54009000 	bl	144(0x90) # 120 <loop>
  94:	03818411 	ori	$r17,$r0,0x61
  98:	54008800 	bl	136(0x88) # 120 <loop>
  9c:	0381c811 	ori	$r17,$r0,0x72
  a0:	54008000 	bl	128(0x80) # 120 <loop>
  a4:	0381d011 	ori	$r17,$r0,0x74
  a8:	54007800 	bl	120(0x78) # 120 <loop>
  ac:	03808011 	ori	$r17,$r0,0x20
  b0:	54007000 	bl	112(0x70) # 120 <loop>
  b4:	0381dc11 	ori	$r17,$r0,0x77
  b8:	54006800 	bl	104(0x68) # 120 <loop>
  bc:	0381bc11 	ori	$r17,$r0,0x6f
  c0:	54006000 	bl	96(0x60) # 120 <loop>
  c4:	0381c811 	ori	$r17,$r0,0x72
  c8:	54005800 	bl	88(0x58) # 120 <loop>
  cc:	0381ac11 	ori	$r17,$r0,0x6b
  d0:	54005000 	bl	80(0x50) # 120 <loop>
  d4:	03808411 	ori	$r17,$r0,0x21
  d8:	54004800 	bl	72(0x48) # 120 <loop>
  dc:	03802811 	ori	$r17,$r0,0xa
  e0:	54004000 	bl	64(0x40) # 120 <loop>
  e4:	1540000c 	lu12i.w	$r12,-393216(0xa0000)
  e8:	0380058c 	ori	$r12,$r12,0x1
  ec:	0406002c 	csrwr	$r12,0x180
  f0:	0380040c 	ori	$r12,$r0,0x1
  f4:	0406042c 	csrwr	$r12,0x181
  f8:	0380400c 	ori	$r12,$r0,0x10
  fc:	0380600d 	ori	$r13,$r0,0x18
 100:	040001ac 	csrxchg	$r12,$r13,0x0
 104:	1540f60c 	lu12i.w	$r12,-391248(0xa07b0)
 108:	039b818c 	ori	$r12,$r12,0x6e0
 10c:	03800804 	ori	$r4,$r0,0x2
 110:	154be005 	lu12i.w	$r5,-368896(0xa5f00)
 114:	154be006 	lu12i.w	$r6,-368896(0xa5f00)
 118:	038200c6 	ori	$r6,$r6,0x80
 11c:	4c000180 	jirl	$r0,$r12,0

00000120 <loop>:
 120:	280015ae 	ld.b	$r14,$r13,5(0x5)
 124:	034081ce 	andi	$r14,$r14,0x20
 128:	5bfff9c0 	beq	$r14,$r0,-8(0x3fff8) # 120 <loop>
 12c:	290001b1 	st.b	$r17,$r13,0
 130:	4c000020 	jirl	$r0,$r1,0
