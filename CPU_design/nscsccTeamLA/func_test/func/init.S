#include "asm.h"
#include "regdef.h"
#include "inst_test.h"

LEAF(test4_init)
  csrwr     zero, csr_prmd 
  csrwr     zero, csr_era 
  csrwr     zero, csr_eentry 

  li.w t0, 0x1c008000 
  csrwr t0, csr_eentry 
   
  jirl zero, ra, 0x0
END(test4_init)

LEAF(test5_init)
  csrwr     zero, csr_prmd 
  csrwr     zero, csr_era 
  csrwr     zero, csr_eentry 
  csrwr     zero, csr_badv 
  csrwr     zero, csr_save0 
  csrwr     zero, csr_save1
  csrwr     zero, csr_save2 
  csrwr     zero, csr_save3 
  csrwr     zero, csr_tcfg

  li.w t0, 0x1c008000 
  csrwr t0, csr_eentry

  jirl zero, ra, 0x0
END(test5_init)

LEAF(test6_init)
  csrwr     zero, csr_prmd 
  csrwr     zero, csr_era 
  csrwr     zero, csr_eentry 
  csrwr     zero, csr_badv 
  csrwr     zero, csr_save0 
  csrwr     zero, csr_save1
  csrwr     zero, csr_save2 
  csrwr     zero, csr_save3 
  csrwr     zero, csr_tcfg
  csrwr     zero, csr_tlbidx
  csrwr     zero, csr_tlbehi 
  csrwr     zero, csr_tlbelo0
  csrwr     zero, csr_tlbelo1 
  csrwr     zero, csr_asid
  csrwr     zero, csr_tlbrentry

  li.w      t0, 0x0 
  li.w      t1, 0x3 
  csrxchg t0, t1, csr_crmd 

  jirl zero, ra, 0x0
END(test6_init)

LEAF(test8_init)
  csrwr     zero, csr_prmd 
  csrwr     zero, csr_era 
  csrwr     zero, csr_eentry 
  csrwr     zero, csr_badv 
  csrwr     zero, csr_save0 
  csrwr     zero, csr_save1
  csrwr     zero, csr_save2 
  csrwr     zero, csr_save3 
  csrwr     zero, csr_tcfg
  csrwr     zero, csr_tlbidx
  csrwr     zero, csr_tlbehi 
  csrwr     zero, csr_tlbelo0
  csrwr     zero, csr_tlbelo1 
  csrwr     zero, csr_asid 
  csrwr     zero, csr_tlbrentry

  li.w        t0, 0x8 
  li.w        t1, 0x18 
  csrxchg   t0, t1, csr_crmd
  csrwr     zero, csr_dmw0 
  csrwr     zero, csr_dmw1  

  jirl zero, ra, 0x0
END(test8_init)

LEAF(tlb_init)
    
#    addi.w s0, s0 ,1
#    li.w   s2, 0x0

    li.w  t0, 0x0c000000            #index
    li.w  t2, 8<<13
    li.w  t3, 1<<13
    add.w t1, t2, t3                #VPN

    li.w  t2, 0x000000aa 
    csrwr t2, csr_asid

###TLB item 1 
    FILL_TLB(0x0034ab00, 0x00ffab00) 
###TLB item 2
    FILL_TLB(0x0035ab00, 0x0100ab00)
###TLB item 3
    FILL_TLB(0x0036ab00, 0x0101ab00)
###TLB item 4
    FILL_TLB(0x0037ab00, 0x0102ab00)
####TLB item 5
#    FILL_TLB(0x0038ab00, 0x0103ab00)
####TLB item 6
#    FILL_TLB(0x0039ab00, 0x0104ab00)
####TLB item 7
#    FILL_TLB(0x003aab00, 0x00ffab00)
####TLB item 8
#    FILL_TLB(0x0134ab00, 0x01ffab00)
####TLB item 9
#    FILL_TLB(0x0234ab00, 0x02ffab00)
####TLB item 10
#    FILL_TLB(0x0334ab00, 0x03ffab00)

    li.w  t2, 0x000000ab
    csrwr t2, csr_asid

###TLB item 5
    FILL_TLB(0x0038ab00, 0x0103ab00)
###TLB item 6
    FILL_TLB(0x0039ab00, 0x0104ab00)
###TLB item 7 
    FILL_TLB(0x003aab00, 0x00ffab00)
###TLB item 8
    FILL_TLB(0x0134ab00, 0x01ffab00)
####TLB item 15
#    FILL_TLB(0x0834ab00, 0x08ffab00)
####TLB item 16
#    FILL_TLB(0x0934ab00, 0x09ffab00)
####TLB item 17
#    FILL_TLB(0x0a34ab00, 0x0affab00)
####TLB item 18
#    FILL_TLB(0x0b34ab00, 0x0bffab00)
####TLB item 19
#    FILL_TLB(0x0c34ab00, 0x0cffab00)
####TLB item 20
#    FILL_TLB(0x0d34ab00, 0x0dffab00)
	
    li.w  t2, 0x000000ac
    csrwr t2, csr_asid

###TLB item 9
    FILL_TLB(0x0e34ab00, 0x0effab00)
###TLB item 10
    FILL_TLB(0x0f34ab00, 0x0fffab00)
###TLB item 11
    FILL_TLB(0x034ab100, 0x0ffab100)
###TLB item 12
    FILL_TLB(0x034ab200, 0x0ffab200)
####TLB item 25
#    FILL_TLB(0x034ab300, 0x0ffab300)
####TLB item 26
#    FILL_TLB(0x034ab400, 0x0ffab400)
####TLB item 27
#    FILL_TLB(0x034ab500, 0x0ffab500)
####TLB item 28
#    FILL_TLB(0x034ab600, 0x0ffab600)
####TLB item 29
#    FILL_TLB(0x034ab700, 0x0ffab700)
####TLB item 30
#    FILL_TLB(0x034ab800, 0x0ffab800)
	
    li.w  t2, 0x000000ad
    csrwr t2, csr_asid

###TLB item 13 G=1
    FILL_TLB(0x034ab940, 0x0ffab940)
###TLB item 14 G=1
    FILL_TLB(0x034aba40, 0x0ffaba40)
###TLB item 15 G=1
    FILL_TLB(0x034ab740, 0x0ffab740)
###TLB item 16 G=1
    FILL_TLB(0x034ab840, 0x0ffab840)

###clear tlb csr reg 
    csrwr  zero, csr_tlbehi
    csrwr  zero, csr_tlbelo0
    csrwr  zero, csr_tlbelo1 
    csrwr  zero, csr_tlbidx

    jirl zero, ra, 0x0

END(tlb_init)
