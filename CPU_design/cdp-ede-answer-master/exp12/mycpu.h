`ifndef MYCPU_H
    `define MYCPU_H

    `define BR_BUS_WD       33
    `define FS_TO_DS_BUS_WD 64
    `define DS_TO_ES_BUS_WD 230
    `define ES_TO_MS_BUS_WD 173
    `define MS_TO_WS_BUS_WD 70
    `define WS_TO_RF_BUS_WD 38
    `define MS_TO_FS_BUS_WD 66
	
	`define CSR_CRMD    0
	`define CSR_PRMD    1
	`define CSR_ESTAT   5
	`define CSR_ERA     6
	`define CSR_EENTRY  12
	`define CSR_SAVE0   48
	`define CSR_SAVE1   49
	`define CSR_SAVE2   50
	`define CSR_SAVE3   51
	`define CSR_TICLR   68
	
`endif
