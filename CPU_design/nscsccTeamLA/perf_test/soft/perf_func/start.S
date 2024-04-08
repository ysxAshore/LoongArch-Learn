
#ifndef _KERNEL
#define _KERNEL
#endif

#include <asm/asm.h>
#include <asm/regdef.h>
#include <machine.h>




	.globl	_start
	.globl	start
	.globl	__main
_start:
start:
    #disable_trace_cmp_s
    li.w $r25, 0xbfaf8ffc
    st.w $r0, $r25, 0

    li.w $r25, 0xbfafff30  #OPEN_TRACE_ADDR
    st.w $r0, $r25, 0

    li.w $r25, 0xbfaf8ffc
    st.w $r0, $r25, 0

    #disable_num_monitor_s
    li.w $r25, 0xbfaf8ffc
    st.w $r0, $r25, 0

    li.w $r25, 0xbfafff40  #NUM_MONITOR_ADDR
    st.w $r0, $r25, 0

    li.w $r25, 0xbfaf8ffc
    st.w $r0, $r25, 0


    csrwr	$r0,0x180
    csrwr	$r0,0x181
    ori	    $r12,$r0,0x19
    csrwr	$r12,0x180

    li.w    $r12,0xa0000009
    csrwr	$r12,0x181
    ori	    $r12,$r0,0x10

    ori	    $r13,$r0,0x18
    csrxchg	$r12,$r13,0x0

    lu12i.w	$r12,114688
    ori	    $r12,$r12,0x380
    csrwr	$r12,0xc


	la	sp, _stack

    
    b run_test    #####          


.org 0x100
test_finish:
    addi.w    t0, t0, 1
    li.w      t2, UART_ADDR
    st.w      zero, t2, 0

1:
    li.w      t0, SWITCH_ADDR
    ld.w      t0, t0, 0
    andi      t0, t0, 0x80 #swith, up:0, down:1
    beq       zero, t0, 2f
    nop

    li.w     t0, CONFREG_CR0 # CPU count
    ld.w     t1, t0, 0
    b        3f
    nop
2:
    li.w     t0, CONFREG_CR1 # SoC COUNT
    ld.w     t1, t0, 0

3:
    li.w     t0, NUM_ADDR
    st.w     t1, t0, 0
    b        1b
    nop
##avoid cpu run error
    lu12i.w   t0, -0x80000
    addi.w    t1, t1, 1
    or        t2, t0, zero
    add.w     t3, t5, t6
    ld.w      t4, t0, 0

/*
 *  exception handle
 */
.org 0x380
1:  
    addi.w t0, t0, 1
    b 1b
    nop

run_test:
#if CMP_FUNC==1
	bl	shell1
	nop
#elif CMP_FUNC==2
	bl	shell2
	nop
#elif CMP_FUNC==3
	bl	shell3
	nop
#elif CMP_FUNC==4
	bl	shell4
	nop
#elif CMP_FUNC==5
	bl	shell5
	nop
#elif CMP_FUNC==6
	bl	shell6
	nop
#elif CMP_FUNC==7
	bl	shell7
	nop
#elif CMP_FUNC==8
	bl	shell8
	nop
#elif CMP_FUNC==9
	bl	shell9
	nop
#elif CMP_FUNC==10
	bl	shell10
	nop
#else
    li.w t0, SWITCH_ADDR
    ld.w t0, t0, 0
    andi t0, t0, 0xf #swith, up:0, down:1
    xori t0, t0, 0xf
1:
    li.w t1, 0x1
    bne t0, t1, 2f
	nop
    bl shell1
    nop
    b go_finish
    nop
2:
    li.w t1, 0x2
    bne t0, t1, 3f
	nop
    bl shell2
    nop
    b go_finish
    nop
3:
    li.w t1, 0x3
    bne t0, t1, 4f
	nop
    bl shell3
    nop
    b go_finish
    nop
4:
    li.w t1, 0x4
    bne t0, t1, 5f
	nop
    bl shell4
    nop
    b go_finish
    nop
5:
    li.w t1, 0x5
    bne t0, t1, 6f
	nop
    bl shell5
    nop
    b go_finish
    nop
6:
    li.w t1, 0x6
    bne t0, t1, 7f
	nop
    bl shell6
    nop
    b go_finish
    nop
7:
    li.w t1, 0x7
    bne t0, t1, 8f
	nop
    bl shell7
    nop
    b go_finish
    nop
8:
    li.w t1, 0x8
    bne t0, t1, 9f
	nop
    bl shell8
    nop
    b go_finish
    nop
9:
    li.w t1, 0x9
    bne t0, t1, 10f
	nop
    bl shell9
    nop
    b go_finish
    nop
10:
    li.w t1, 0xa
    bne t0, t1, 11f
	nop
    bl shell10
    nop
11:
    b go_finish
    nop
#endif
go_finish:
    b  test_finish

