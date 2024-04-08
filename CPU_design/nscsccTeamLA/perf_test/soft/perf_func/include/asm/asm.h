#ifndef _SYS_ASM_H
#define _SYS_ASM_H

#include "regdef.h"
#include "sysdep.h"

/** ecode defined in LA32r */
#define INT  0x0
#define PIL  0x1
#define PIS  0x2
#define PIF  0x3
#define PME  0x4
#define PPI  0x7
#define ADE  0x8
#define ALE  0x9
#define SYS  0xb
#define BRK  0xc
#define INE  0xd
#define IPE  0xe
#define FPD  0xf
#define FPE  0x12
#define TLBR 0x3f

#define ADEF_SUBCODE 0x0
#define ADEM_SUBCODE 0x1

/* Macros to handle different pointer/register sizes for 32/64-bit code.  */

# define PTRLOG 2
# define SZREG	4
# define SZFREG	4
# define REG_L ld.w
# define REG_S st.w
# define FREG_L fld.w
# define FREG_S fst.w


/* Declare leaf routine.  */
#define	LEAF(symbol)			\
	.text;				\
	.globl	symbol;			\
	.align	3;			\
	cfi_startproc ;			\
	.type	symbol, @function;	\
symbol:

# define ENTRY(symbol) LEAF(symbol)

/* Mark end of function.  */
#undef END
#define END(function)			\
	cfi_endproc ;			\
	.size	function,.-function;

/* Stack alignment.  */
#define ALMASK	~15

#endif /* sys/asm.h */
