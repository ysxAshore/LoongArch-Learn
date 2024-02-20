`ifndef MYCPU_H
    `define MYCPU_H

    `define BR_BUS_WD       35
    `define FS_TO_DS_BUS_WD 68
    `define DS_TO_ES_BUS_WD 245
    `define ES_TO_MS_BUS_WD 183
    `define MS_TO_WS_BUS_WD 70
    `define WS_TO_RF_BUS_WD 38
    `define MS_TO_FS_BUS_WD 99
	
	`define CSR_CRMD      0
	`define CSR_PRMD      1
	`define CSR_ECFG      4
	`define CSR_ESTAT     5
	`define CSR_ERA       6
	`define CSR_EENTRY    12
	`define CSR_BADV      7
	`define CSR_SAVE0     48
	`define CSR_SAVE1     49
	`define CSR_SAVE2     50
	`define CSR_SAVE3     51
	`define CSR_TID       64
	`define CSR_TCFG      65
	`define CSR_TVAL      66
	`define CSR_TICLR     68
	`define CSR_TLBIDX    16
    `define CSR_TLBEHI    17
	`define CSR_TLBELO0   18
	`define CSR_TLBELO1   19
	`define CSR_ASID      24
	`define CSR_TLBRENTRY 136
	`define CSR_DMW0      384
	`define CSR_DMW1      385
	
	`define ECODE_ADEF  8
	`define ECODE_ALE   9
	`define ECODE_PIL   1
	`define ECODE_PIS   2
	`define ECODE_PIF   3
	`define ECODE_PME   4
	`define ECODE_PPI   7
	`define ECODE_TLBR  63
	`define ECODE_ADEM  8
	
`endif
