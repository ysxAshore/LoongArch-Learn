# 1 "n1_lu12i_w.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "n1_lu12i_w.S"
# 1 "../include/asm.h" 1



# 1 "../include/regdef.h" 1
# 5 "../include/asm.h" 2
# 1 "../include/sysdep.h" 1
# 6 "../include/asm.h" 2
# 2 "n1_lu12i_w.S" 2
# 1 "../include/regdef.h" 1
# 3 "n1_lu12i_w.S" 2
# 1 "../include/inst_test.h" 1
# 1 "../include/cpu_cde.h" 1
# 1 "../include/lab_config.h" 1
# 2 "../include/cpu_cde.h" 2
# 2 "../include/inst_test.h" 2
# 1 "../include/test_define.h" 1
# 3 "../include/inst_test.h" 2
# 4 "n1_lu12i_w.S" 2

.text; .globl n1_lu12i_w_test; .align 3; .cfi_startproc ; .type n1_lu12i_w_test, @function; n1_lu12i_w_test:

    addi.w $r23, $r23 ,1
    addi.w $r25, $r0, 0x0
    lu12i.w $r14, 0x1
###test inst
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x00000&0x80000?0x00000 -0x100000:0x00000; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x00001&0x80000?0x00001 -0x100000:0x00001; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x00002&0x80000?0x00002 -0x100000:0x00002; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x00003&0x80000?0x00003 -0x100000:0x00003; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x00004&0x80000?0x00004 -0x100000:0x00004; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x00005&0x80000?0x00005 -0x100000:0x00005; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x00006&0x80000?0x00006 -0x100000:0x00006; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x00007&0x80000?0x00007 -0x100000:0x00007; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x00008&0x80000?0x00008 -0x100000:0x00008; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x00009&0x80000?0x00009 -0x100000:0x00009; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x0000a&0x80000?0x0000a -0x100000:0x0000a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x0000b&0x80000?0x0000b -0x100000:0x0000b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x0000c&0x80000?0x0000c -0x100000:0x0000c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x0000d&0x80000?0x0000d -0x100000:0x0000d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x0000e&0x80000?0x0000e -0x100000:0x0000e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x00000&0x80000?0x00000 -0x100000:0x00000; lu12i.w $r12, 0x0000f&0x80000?0x0000f -0x100000:0x0000f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x11010&0x80000?0x11010 -0x100000:0x11010; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x11011&0x80000?0x11011 -0x100000:0x11011; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x11012&0x80000?0x11012 -0x100000:0x11012; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x11013&0x80000?0x11013 -0x100000:0x11013; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x11014&0x80000?0x11014 -0x100000:0x11014; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x11015&0x80000?0x11015 -0x100000:0x11015; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x11016&0x80000?0x11016 -0x100000:0x11016; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x11017&0x80000?0x11017 -0x100000:0x11017; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x11018&0x80000?0x11018 -0x100000:0x11018; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x11019&0x80000?0x11019 -0x100000:0x11019; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x1101a&0x80000?0x1101a -0x100000:0x1101a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x1101b&0x80000?0x1101b -0x100000:0x1101b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x1101c&0x80000?0x1101c -0x100000:0x1101c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x1101d&0x80000?0x1101d -0x100000:0x1101d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x1101e&0x80000?0x1101e -0x100000:0x1101e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x11010&0x80000?0x11010 -0x100000:0x11010; lu12i.w $r12, 0x1101f&0x80000?0x1101f -0x100000:0x1101f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x22020&0x80000?0x22020 -0x100000:0x22020; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x22021&0x80000?0x22021 -0x100000:0x22021; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x22022&0x80000?0x22022 -0x100000:0x22022; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x22023&0x80000?0x22023 -0x100000:0x22023; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x22024&0x80000?0x22024 -0x100000:0x22024; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x22025&0x80000?0x22025 -0x100000:0x22025; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x22026&0x80000?0x22026 -0x100000:0x22026; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x22027&0x80000?0x22027 -0x100000:0x22027; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x22028&0x80000?0x22028 -0x100000:0x22028; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x22029&0x80000?0x22029 -0x100000:0x22029; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x2202a&0x80000?0x2202a -0x100000:0x2202a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x2202b&0x80000?0x2202b -0x100000:0x2202b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x2202c&0x80000?0x2202c -0x100000:0x2202c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x2202d&0x80000?0x2202d -0x100000:0x2202d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x2202e&0x80000?0x2202e -0x100000:0x2202e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x22020&0x80000?0x22020 -0x100000:0x22020; lu12i.w $r12, 0x2202f&0x80000?0x2202f -0x100000:0x2202f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;

    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x33030&0x80000?0x33030 -0x100000:0x33030; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x33031&0x80000?0x33031 -0x100000:0x33031; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x33032&0x80000?0x33032 -0x100000:0x33032; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x33033&0x80000?0x33033 -0x100000:0x33033; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x33034&0x80000?0x33034 -0x100000:0x33034; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x33035&0x80000?0x33035 -0x100000:0x33035; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x33036&0x80000?0x33036 -0x100000:0x33036; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x33037&0x80000?0x33037 -0x100000:0x33037; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x33038&0x80000?0x33038 -0x100000:0x33038; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x33039&0x80000?0x33039 -0x100000:0x33039; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x3303a&0x80000?0x3303a -0x100000:0x3303a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x3303b&0x80000?0x3303b -0x100000:0x3303b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x3303c&0x80000?0x3303c -0x100000:0x3303c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x3303d&0x80000?0x3303d -0x100000:0x3303d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x3303e&0x80000?0x3303e -0x100000:0x3303e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x33030&0x80000?0x33030 -0x100000:0x33030; lu12i.w $r12, 0x3303f&0x80000?0x3303f -0x100000:0x3303f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x44040&0x80000?0x44040 -0x100000:0x44040; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x44041&0x80000?0x44041 -0x100000:0x44041; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x44042&0x80000?0x44042 -0x100000:0x44042; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x44043&0x80000?0x44043 -0x100000:0x44043; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x44044&0x80000?0x44044 -0x100000:0x44044; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x44045&0x80000?0x44045 -0x100000:0x44045; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x44046&0x80000?0x44046 -0x100000:0x44046; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x44047&0x80000?0x44047 -0x100000:0x44047; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x44048&0x80000?0x44048 -0x100000:0x44048; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x44049&0x80000?0x44049 -0x100000:0x44049; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x4404a&0x80000?0x4404a -0x100000:0x4404a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x4404b&0x80000?0x4404b -0x100000:0x4404b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x4404c&0x80000?0x4404c -0x100000:0x4404c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x4404d&0x80000?0x4404d -0x100000:0x4404d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x4404e&0x80000?0x4404e -0x100000:0x4404e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x44040&0x80000?0x44040 -0x100000:0x44040; lu12i.w $r12, 0x4404f&0x80000?0x4404f -0x100000:0x4404f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x55040&0x80000?0x55040 -0x100000:0x55040; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x55041&0x80000?0x55041 -0x100000:0x55041; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x55042&0x80000?0x55042 -0x100000:0x55042; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x55043&0x80000?0x55043 -0x100000:0x55043; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x55044&0x80000?0x55044 -0x100000:0x55044; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x55045&0x80000?0x55045 -0x100000:0x55045; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x55046&0x80000?0x55046 -0x100000:0x55046; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x55047&0x80000?0x55047 -0x100000:0x55047; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x55048&0x80000?0x55048 -0x100000:0x55048; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x55049&0x80000?0x55049 -0x100000:0x55049; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x5504a&0x80000?0x5504a -0x100000:0x5504a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x5504b&0x80000?0x5504b -0x100000:0x5504b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x5504c&0x80000?0x5504c -0x100000:0x5504c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x5504d&0x80000?0x5504d -0x100000:0x5504d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x5504e&0x80000?0x5504e -0x100000:0x5504e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x55040&0x80000?0x55040 -0x100000:0x55040; lu12i.w $r12, 0x5504f&0x80000?0x5504f -0x100000:0x5504f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x66050&0x80000?0x66050 -0x100000:0x66050; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x66051&0x80000?0x66051 -0x100000:0x66051; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x66052&0x80000?0x66052 -0x100000:0x66052; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x66053&0x80000?0x66053 -0x100000:0x66053; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x66054&0x80000?0x66054 -0x100000:0x66054; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x66055&0x80000?0x66055 -0x100000:0x66055; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x66056&0x80000?0x66056 -0x100000:0x66056; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x66057&0x80000?0x66057 -0x100000:0x66057; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x66058&0x80000?0x66058 -0x100000:0x66058; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x66059&0x80000?0x66059 -0x100000:0x66059; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x6605a&0x80000?0x6605a -0x100000:0x6605a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x6605b&0x80000?0x6605b -0x100000:0x6605b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x6605c&0x80000?0x6605c -0x100000:0x6605c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x6605d&0x80000?0x6605d -0x100000:0x6605d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x6605e&0x80000?0x6605e -0x100000:0x6605e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x66050&0x80000?0x66050 -0x100000:0x66050; lu12i.w $r12, 0x6605f&0x80000?0x6605f -0x100000:0x6605f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x88060&0x80000?0x88060 -0x100000:0x88060; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x88061&0x80000?0x88061 -0x100000:0x88061; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x88062&0x80000?0x88062 -0x100000:0x88062; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x88063&0x80000?0x88063 -0x100000:0x88063; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x88064&0x80000?0x88064 -0x100000:0x88064; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x88065&0x80000?0x88065 -0x100000:0x88065; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x88066&0x80000?0x88066 -0x100000:0x88066; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x88067&0x80000?0x88067 -0x100000:0x88067; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x88068&0x80000?0x88068 -0x100000:0x88068; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x88069&0x80000?0x88069 -0x100000:0x88069; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x8806a&0x80000?0x8806a -0x100000:0x8806a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x8806b&0x80000?0x8806b -0x100000:0x8806b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x8806c&0x80000?0x8806c -0x100000:0x8806c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x8806d&0x80000?0x8806d -0x100000:0x8806d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x8806e&0x80000?0x8806e -0x100000:0x8806e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0x88060&0x80000?0x88060 -0x100000:0x88060; lu12i.w $r12, 0x8806f&0x80000?0x8806f -0x100000:0x8806f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa071&0x80000?0xaa071 -0x100000:0xaa071; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa072&0x80000?0xaa072 -0x100000:0xaa072; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa073&0x80000?0xaa073 -0x100000:0xaa073; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa074&0x80000?0xaa074 -0x100000:0xaa074; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa075&0x80000?0xaa075 -0x100000:0xaa075; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa076&0x80000?0xaa076 -0x100000:0xaa076; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa077&0x80000?0xaa077 -0x100000:0xaa077; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa078&0x80000?0xaa078 -0x100000:0xaa078; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa079&0x80000?0xaa079 -0x100000:0xaa079; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa07a&0x80000?0xaa07a -0x100000:0xaa07a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa07b&0x80000?0xaa07b -0x100000:0xaa07b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa07c&0x80000?0xaa07c -0x100000:0xaa07c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa07d&0x80000?0xaa07d -0x100000:0xaa07d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa07e&0x80000?0xaa07e -0x100000:0xaa07e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xaa070&0x80000?0xaa070 -0x100000:0xaa070; lu12i.w $r12, 0xaa07f&0x80000?0xaa07f -0x100000:0xaa07f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc081&0x80000?0xcc081 -0x100000:0xcc081; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc082&0x80000?0xcc082 -0x100000:0xcc082; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc083&0x80000?0xcc083 -0x100000:0xcc083; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc084&0x80000?0xcc084 -0x100000:0xcc084; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc085&0x80000?0xcc085 -0x100000:0xcc085; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc086&0x80000?0xcc086 -0x100000:0xcc086; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc087&0x80000?0xcc087 -0x100000:0xcc087; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc088&0x80000?0xcc088 -0x100000:0xcc088; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc089&0x80000?0xcc089 -0x100000:0xcc089; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc08a&0x80000?0xcc08a -0x100000:0xcc08a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc08b&0x80000?0xcc08b -0x100000:0xcc08b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc08c&0x80000?0xcc08c -0x100000:0xcc08c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc08d&0x80000?0xcc08d -0x100000:0xcc08d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc08e&0x80000?0xcc08e -0x100000:0xcc08e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xcc080&0x80000?0xcc080 -0x100000:0xcc080; lu12i.w $r12, 0xcc08f&0x80000?0xcc08f -0x100000:0xcc08f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee090&0x80000?0xee090 -0x100000:0xee090; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee091&0x80000?0xee091 -0x100000:0xee091; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee092&0x80000?0xee092 -0x100000:0xee092; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee093&0x80000?0xee093 -0x100000:0xee093; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee094&0x80000?0xee094 -0x100000:0xee094; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee095&0x80000?0xee095 -0x100000:0xee095; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee096&0x80000?0xee096 -0x100000:0xee096; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee097&0x80000?0xee097 -0x100000:0xee097; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee098&0x80000?0xee098 -0x100000:0xee098; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee099&0x80000?0xee099 -0x100000:0xee099; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee09a&0x80000?0xee09a -0x100000:0xee09a; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee09b&0x80000?0xee09b -0x100000:0xee09b; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee09c&0x80000?0xee09c -0x100000:0xee09c; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee09d&0x80000?0xee09d -0x100000:0xee09d; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee09e&0x80000?0xee09e -0x100000:0xee09e; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xee090&0x80000?0xee090 -0x100000:0xee090; lu12i.w $r12, 0xee09f&0x80000?0xee09f -0x100000:0xee09f; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    addi.w $r13, $r0, 0x0
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0a1&0x80000?0xff0a1 -0x100000:0xff0a1; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0a2&0x80000?0xff0a2 -0x100000:0xff0a2; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0a3&0x80000?0xff0a3 -0x100000:0xff0a3; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0a4&0x80000?0xff0a4 -0x100000:0xff0a4; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0a5&0x80000?0xff0a5 -0x100000:0xff0a5; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0a6&0x80000?0xff0a6 -0x100000:0xff0a6; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0a7&0x80000?0xff0a7 -0x100000:0xff0a7; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0a8&0x80000?0xff0a8 -0x100000:0xff0a8; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0a9&0x80000?0xff0a9 -0x100000:0xff0a9; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0aa&0x80000?0xff0aa -0x100000:0xff0aa; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0ab&0x80000?0xff0ab -0x100000:0xff0ab; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0ac&0x80000?0xff0ac -0x100000:0xff0ac; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0ad&0x80000?0xff0ad -0x100000:0xff0ad; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0ae&0x80000?0xff0ae -0x100000:0xff0ae; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;
    lu12i.w $r4, 0xff0a0&0x80000?0xff0a0 -0x100000:0xff0a0; lu12i.w $r12, 0xff0af&0x80000?0xff0af -0x100000:0xff0af; ;;;; add.w $r4, $r4, $r13; add.w $r13, $r13, $r14; ;;;; bne $r12, $r4, inst_error; ;;;

###detect exception
    bne $r25, $r0, inst_error
    ;;;
###score ++
    addi.w $r26, $r26, 1
###output ($r23<<24)|$r26
inst_error:
    slli.w $r13, $r23, 24
    ;;;
    or $r12, $r13, $r26
    ;;;
    st.w $r12, $r24, 0
    jirl $r0, $r1, 0
    ;;;
.cfi_endproc ; .size n1_lu12i_w_test,.-n1_lu12i_w_test;
