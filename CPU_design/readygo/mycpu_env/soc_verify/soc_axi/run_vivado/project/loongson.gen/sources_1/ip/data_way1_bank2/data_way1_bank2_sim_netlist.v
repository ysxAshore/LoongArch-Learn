// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way1_bank2 -prefix
//               data_way1_bank2_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way1_bank2
   (clka,
    ena,
    wea,
    addra,
    dina,
    douta);
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTA, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE OTHER, READ_LATENCY 1" *) input clka;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA EN" *) input ena;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA WE" *) input [3:0]wea;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [7:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DIN" *) input [31:0]dina;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DOUT" *) output [31:0]douta;

  wire [7:0]addra;
  wire clka;
  wire [31:0]dina;
  wire [31:0]douta;
  wire ena;
  wire [3:0]wea;
  wire NLW_U0_dbiterr_UNCONNECTED;
  wire NLW_U0_rsta_busy_UNCONNECTED;
  wire NLW_U0_rstb_busy_UNCONNECTED;
  wire NLW_U0_s_axi_arready_UNCONNECTED;
  wire NLW_U0_s_axi_awready_UNCONNECTED;
  wire NLW_U0_s_axi_bvalid_UNCONNECTED;
  wire NLW_U0_s_axi_dbiterr_UNCONNECTED;
  wire NLW_U0_s_axi_rlast_UNCONNECTED;
  wire NLW_U0_s_axi_rvalid_UNCONNECTED;
  wire NLW_U0_s_axi_sbiterr_UNCONNECTED;
  wire NLW_U0_s_axi_wready_UNCONNECTED;
  wire NLW_U0_sbiterr_UNCONNECTED;
  wire [31:0]NLW_U0_doutb_UNCONNECTED;
  wire [7:0]NLW_U0_rdaddrecc_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [7:0]NLW_U0_s_axi_rdaddrecc_UNCONNECTED;
  wire [31:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;

  (* C_ADDRA_WIDTH = "8" *) 
  (* C_ADDRB_WIDTH = "8" *) 
  (* C_ALGORITHM = "1" *) 
  (* C_AXI_ID_WIDTH = "4" *) 
  (* C_AXI_SLAVE_TYPE = "0" *) 
  (* C_AXI_TYPE = "1" *) 
  (* C_BYTE_SIZE = "8" *) 
  (* C_COMMON_CLK = "0" *) 
  (* C_COUNT_18K_BRAM = "1" *) 
  (* C_COUNT_36K_BRAM = "0" *) 
  (* C_CTRL_ECC_ALGO = "NONE" *) 
  (* C_DEFAULT_DATA = "0" *) 
  (* C_DISABLE_WARN_BHV_COLL = "0" *) 
  (* C_DISABLE_WARN_BHV_RANGE = "0" *) 
  (* C_ELABORATION_DIR = "./" *) 
  (* C_ENABLE_32BIT_ADDRESS = "0" *) 
  (* C_EN_DEEPSLEEP_PIN = "0" *) 
  (* C_EN_ECC_PIPE = "0" *) 
  (* C_EN_RDADDRA_CHG = "0" *) 
  (* C_EN_RDADDRB_CHG = "0" *) 
  (* C_EN_SAFETY_CKT = "0" *) 
  (* C_EN_SHUTDOWN_PIN = "0" *) 
  (* C_EN_SLEEP_PIN = "0" *) 
  (* C_EST_POWER_SUMMARY = "Estimated Power for IP     :     3.53845 mW" *) 
  (* C_FAMILY = "artix7" *) 
  (* C_HAS_AXI_ID = "0" *) 
  (* C_HAS_ENA = "1" *) 
  (* C_HAS_ENB = "0" *) 
  (* C_HAS_INJECTERR = "0" *) 
  (* C_HAS_MEM_OUTPUT_REGS_A = "0" *) 
  (* C_HAS_MEM_OUTPUT_REGS_B = "0" *) 
  (* C_HAS_MUX_OUTPUT_REGS_A = "0" *) 
  (* C_HAS_MUX_OUTPUT_REGS_B = "0" *) 
  (* C_HAS_REGCEA = "0" *) 
  (* C_HAS_REGCEB = "0" *) 
  (* C_HAS_RSTA = "0" *) 
  (* C_HAS_RSTB = "0" *) 
  (* C_HAS_SOFTECC_INPUT_REGS_A = "0" *) 
  (* C_HAS_SOFTECC_OUTPUT_REGS_B = "0" *) 
  (* C_INITA_VAL = "0" *) 
  (* C_INITB_VAL = "0" *) 
  (* C_INIT_FILE = "inst_way0_bank0.mem" *) 
  (* C_INIT_FILE_NAME = "no_coe_file_loaded" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_LOAD_INIT_FILE = "0" *) 
  (* C_MEM_TYPE = "0" *) 
  (* C_MUX_PIPELINE_STAGES = "0" *) 
  (* C_PRIM_TYPE = "1" *) 
  (* C_READ_DEPTH_A = "256" *) 
  (* C_READ_DEPTH_B = "256" *) 
  (* C_READ_LATENCY_A = "1" *) 
  (* C_READ_LATENCY_B = "1" *) 
  (* C_READ_WIDTH_A = "32" *) 
  (* C_READ_WIDTH_B = "32" *) 
  (* C_RSTRAM_A = "0" *) 
  (* C_RSTRAM_B = "0" *) 
  (* C_RST_PRIORITY_A = "CE" *) 
  (* C_RST_PRIORITY_B = "CE" *) 
  (* C_SIM_COLLISION_CHECK = "ALL" *) 
  (* C_USE_BRAM_BLOCK = "0" *) 
  (* C_USE_BYTE_WEA = "1" *) 
  (* C_USE_BYTE_WEB = "1" *) 
  (* C_USE_DEFAULT_DATA = "1" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_SOFTECC = "0" *) 
  (* C_USE_URAM = "0" *) 
  (* C_WEA_WIDTH = "4" *) 
  (* C_WEB_WIDTH = "4" *) 
  (* C_WRITE_DEPTH_A = "256" *) 
  (* C_WRITE_DEPTH_B = "256" *) 
  (* C_WRITE_MODE_A = "WRITE_FIRST" *) 
  (* C_WRITE_MODE_B = "WRITE_FIRST" *) 
  (* C_WRITE_WIDTH_A = "32" *) 
  (* C_WRITE_WIDTH_B = "32" *) 
  (* C_XDEVICEFAMILY = "artix7" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  data_way1_bank2_blk_mem_gen_v8_4_6 U0
       (.addra(addra),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .clka(clka),
        .clkb(1'b0),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .deepsleep(1'b0),
        .dina(dina),
        .dinb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .douta(douta),
        .doutb(NLW_U0_doutb_UNCONNECTED[31:0]),
        .eccpipece(1'b0),
        .ena(ena),
        .enb(1'b0),
        .injectdbiterr(1'b0),
        .injectsbiterr(1'b0),
        .rdaddrecc(NLW_U0_rdaddrecc_UNCONNECTED[7:0]),
        .regcea(1'b0),
        .regceb(1'b0),
        .rsta(1'b0),
        .rsta_busy(NLW_U0_rsta_busy_UNCONNECTED),
        .rstb(1'b0),
        .rstb_busy(NLW_U0_rstb_busy_UNCONNECTED),
        .s_aclk(1'b0),
        .s_aresetn(1'b0),
        .s_axi_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arburst({1'b0,1'b0}),
        .s_axi_arid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arready(NLW_U0_s_axi_arready_UNCONNECTED),
        .s_axi_arsize({1'b0,1'b0,1'b0}),
        .s_axi_arvalid(1'b0),
        .s_axi_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awburst({1'b0,1'b0}),
        .s_axi_awid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awready(NLW_U0_s_axi_awready_UNCONNECTED),
        .s_axi_awsize({1'b0,1'b0,1'b0}),
        .s_axi_awvalid(1'b0),
        .s_axi_bid(NLW_U0_s_axi_bid_UNCONNECTED[3:0]),
        .s_axi_bready(1'b0),
        .s_axi_bresp(NLW_U0_s_axi_bresp_UNCONNECTED[1:0]),
        .s_axi_bvalid(NLW_U0_s_axi_bvalid_UNCONNECTED),
        .s_axi_dbiterr(NLW_U0_s_axi_dbiterr_UNCONNECTED),
        .s_axi_injectdbiterr(1'b0),
        .s_axi_injectsbiterr(1'b0),
        .s_axi_rdaddrecc(NLW_U0_s_axi_rdaddrecc_UNCONNECTED[7:0]),
        .s_axi_rdata(NLW_U0_s_axi_rdata_UNCONNECTED[31:0]),
        .s_axi_rid(NLW_U0_s_axi_rid_UNCONNECTED[3:0]),
        .s_axi_rlast(NLW_U0_s_axi_rlast_UNCONNECTED),
        .s_axi_rready(1'b0),
        .s_axi_rresp(NLW_U0_s_axi_rresp_UNCONNECTED[1:0]),
        .s_axi_rvalid(NLW_U0_s_axi_rvalid_UNCONNECTED),
        .s_axi_sbiterr(NLW_U0_s_axi_sbiterr_UNCONNECTED),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wlast(1'b0),
        .s_axi_wready(NLW_U0_s_axi_wready_UNCONNECTED),
        .s_axi_wstrb({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wvalid(1'b0),
        .sbiterr(NLW_U0_sbiterr_UNCONNECTED),
        .shutdown(1'b0),
        .sleep(1'b0),
        .wea(wea),
        .web({1'b0,1'b0,1'b0,1'b0}));
endmodule
`pragma protect begin_protected
`pragma protect version = 1
`pragma protect encrypt_agent = "XILINX"
`pragma protect encrypt_agent_info = "Xilinx Encryption Tool 2023.1"
`pragma protect key_keyowner="Synopsys", key_keyname="SNPS-VCS-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
aMT3usC6uizzcwnzOCX4OsS16Ob+YxFcsGovFpFklbnaIaD1S0lVdxenTwHPp6ByIEi+ehwr6Rgg
z/3AlTheI5NFTM8ihiMA18/wmUxI7EbaftJACA1LykUKCuj5myy0T+DACuv3sGYIZS38TZTZnnBC
FGAlvTZmRWs+JzneH3o=

`pragma protect key_keyowner="Aldec", key_keyname="ALDEC15_001", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
lR9ZerhYSAb39nzEkeYvhnwEs5t9y/+yTDf8KuoUtR1BGeHZq8pA/YxtjzQLtaOW1R1IQUb0FtSI
e3CYAb7WHYbIjcpw3vKHvW1SqcGn9CMGa556CYKmD2oF12Kow8xRaFvMSBUVxX7HsHxNWnRd+PU1
+C0YayU2KFIY/7Yl6cZ5luAzhw/6SW3PFYUIyyqWy5MCIXweHOwQR2IpQEdlDur5nluN7i7BeB+i
fxwwHh8TU/g7T4mhZFkiTuBKdLAtQOjxWxzqTMxgcuAjlTylY16FgMFOASdvvSbqBZJjbxMdVloU
rYjS8O/8rWktv8GXcaIdBJ2BRj01q7jsChsbwA==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VELOCE-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
Qvl63GHz9mq2xOB7elt/vAQ7URLGdD1Lkcz7f3Wtw31dwjjjbP62Ny/Jr6OmBIheWlgejx38qxAT
TrHiiEyjKmGcnPn1Tn2n+cH4RAxCbOFnCI9n6+YsYMTe9JkplGhGGr39SkFgJz0I2IKpPsuqTjCj
rhf49TAryNMQeRpREJA=

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VERIF-SIM-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
MA+9Ro+dh339m0iZrkKbqTKN8gQ5xkxN/SPCfhkOn+5jjgCTS5IOKLHil+HsZDjX333ebxnornwG
MOBxyEdFfLM8SA+bs2r41J/j0af2VVMmCM3hOh8JmZxB4X9Jg/glegNCbvwzqxMbOQNEy+zt7j5t
TFVD82RtPFmYVVYZZyll/WvAA+0aVpyjzLCIM1GznFky0RWLv65Wp4MJJnNRRrtG3muMznVO/u2s
tACsJ9jzv9M0IlMYjYH9BixhG6cZX02I4LEXXaPkhdOINlMMhsbArXtc9NphzmS4bY1/1yF1D6YD
EKLyS2Sr3HDl0O/lefN+jvfG8iKuVl55PNNrVQ==

`pragma protect key_keyowner="Real Intent", key_keyname="RI-RSA-KEY-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
wpMTg7STjFkUDhOqdNPa0FHXTnHQgKmhvqDv+rRVBvMiQ8O7u8oj7ibITq3o+jugJsMJ60B410gQ
JFTcqCJKYmYJvqi8rPLLOYDmFG6ZLP/Ixr3n62IyIaCeDltBahi3yV009QN0X+iuzuFCL+Y7g9ff
IvAgyBly+Z3Itv2H9EJMZPMl17Sa7IkgjmWqzVXIKNMKn0iDVYsQw6ZgzQDYQ8N8IvTIEggU3/lh
6Nf0hV0ev3qOv/2P+4w0U766Ux3yLuzPJSI7bKm3/ip9NjhOytxOiKKqVXhKG8dzbbuS5u3EE/eq
q6YxkL7gpvNltVqqBnJB6vHSyWrD6+MqsCtR9A==

`pragma protect key_keyowner="Xilinx", key_keyname="xilinxt_2022_10", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
Q7Q4SSp70lxFryaopuic9VVP/Ire0pSsPEIMYdURBAczC7ShkuYeV02U7L3BlAiyBE4vBKcwYSQd
cWiaj8sVP7q4kxoRHKxLV1R5PIO6l4DsLWE2E+1MLyUPME0w5KTular/oX8EPCJ5n/8VCtW7x4Vf
dpeyki1/IAPJkAyi3zVZKHzgKhEwnZaZZtZYuMWoPZMt4V38sAcE42Raf+7yfFWG5HO74JY6iEnW
gJeRk58K+avB/XLF2/j2RQZfjTYizrprT2tUMBK6e7DRWZZtk8AOcsMhUikev44IFGNbNXjP8BXC
0J3y3P7pCFT6l+saU83nRwi/H25fSA34diJtNw==

`pragma protect key_keyowner="Metrics Technologies Inc.", key_keyname="DSim", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
a/8ooC+s+6nfvfa1+oBhsvYWLJjFgp83DI1kNyOi5Am+ugPbGRmgGZudfyo6yw6Yd5gGbLm5aToQ
5G4cGF5HaXD5TU6A0ZZFMTIbzFLE76JMjjIxX8JcaJIZpSmrXqlru8l5gDINUEAmwUY3mRQnjcGJ
0Z+kMRH8iAEF+gEviPiFZSBbJeOPqivIS217kimQJX3BeNbNPQTP+GUidcRywpGMh5avxtA0kDRO
F9SoCSyTm9hr2v9hsK1IUAYQLb7n2/R+z5YNKNzt1oN4qgJH1wZfdI8if2K8+ohyOdnxrrgJOWdj
cOqr7cGqEOYfBMTIQeHVZzb7NGWVN+9B8XSUaQ==

`pragma protect key_keyowner="Atrenta", key_keyname="ATR-SG-RSA-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=384)
`pragma protect key_block
FLPvOUNRWNW2GU+FEGmt2XWthOT5bY/31DRbol2cUmEGNF6b2XzpCosNKGx/o2n6sQvGP39KRFCs
nJu0ihe2dUGee9nEZZUcpwPjnEfXVI3yJaRVYy8iL+rm59lXq0jX4sjAPieDvv8shgAnoXLTZGlq
K+2c1JhaHt+nFi27TDrYar/+P8nP1MhocOS7BjzCvSs0foEXj92/qD+71Sm/LqGr8cjlH2qTJJ8B
ynxoH6iT+bksVA2VbtPT9o6h1kJ/zwP4wcsL9l+qSlJhd4GI11JPux26DlNyIi41WmufQcfiT0PB
r6O9+0E9lV9ODwKdjaxfZRK29rjKeq2yr0jWhMV38XKKqHAJli7MIypGRXcCo+u89H87KgYt+ebw
s3foIqCe0JKR57WzI8VD6XdNtOL8eBxK539oemx4vkE0cGYECZKYru6A2hPeZOYDD5eyWSUlQl1R
EciK49WM8HnssyRVcmE6di6bISMbVi0TZG/v98bz+9UZa8DtqMVYH0tz

`pragma protect key_keyowner="Cadence Design Systems.", key_keyname="CDS_RSA_KEY_VER_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
fphquQOeFuqByo36Gh2C1zEC1J6u9swSMbMzsKldIvLm+SZ6/hr/N8KJ/G2vBABzX6UtbVuP1ZXx
AxdftP4Aqis1B3Bs6989aQG9eo0SOHA7r6aFLtFb3qoD5Pvqw4aVNU4z4EtTpFpn/jCWD21lKROf
q5X32HRfFq1jwqod+9vIbUNRRzz5y9VHvXfacZlxDazSPmcCF4hxB1KqWqT44KmYVkDedgkgnYgb
ZGidHnTb3W7C8tSqC9ac4kNJCL429QndtddweESJNlpX+65pt9Irok9pkOodwoj0QScswOIFjhBZ
/GrzZLQcFWiD3gXRU4DazzxQnGdRH4qEIRWziw==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
1lUYYHPCt1BUJOvcBbgMU2GSQiqfxItz4ntieMaenjrtsE9SLwaU6xB0tBl8Atw5yP/RRNww1kX/
9uZbTz5He3r9mPVt+mGxB4N3f9BbCrQRb4USVPgKO/+vWUfMQERGklScy0+fz75WuxH74CjRUoDI
8iyssb2cUNnfDe13jIoI8gM1w4w/Pkxkmb6Mef53QMxacHAWEZeytcH3fuL/adO263D8P90U3XJv
vBXJmbjkRVi9qzjBzfMxuOy2KbZaZgR3BLzaffIfFnMwg/Rb8sGls5pQsZv5jL2wk3+Bj3OXBYdd
pDyjGoalJBzObKzd/t15kNHwY4FXYFcZLQPncw==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-PREC-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
YRmSEzaa2WFVvMH1BwWc1TIUpVbzSEIP0VbI6n0sEgct/X4PiTfMQmK1jBVCaISIzwBxscKQwZOt
mb/nmINGg6I7ih39LSbBMtx6cdCUiyaLkPeRbqfyPpKhvnUIFmdKVvTd1dYzxeOeuDnhSVaBaAcN
3lngSg7lIbmhLIGjC29yQrBTiLArbVZi6IRGronMK51e3UrYa6GspsznhiuRcXjEb4bHKrJ2CM5Z
BUwA+E9949sQgyOagFZbLVle2ESbwBaoxcAPn2gxfRHlT0leqyLgUGDZLsfArzGzw9BTGzyEG2TR
XOrKFNYRfMXMrnGsBM7acIelY4LdAMgsKgDH/A==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19488)
`pragma protect data_block
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
`pragma protect end_protected
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
