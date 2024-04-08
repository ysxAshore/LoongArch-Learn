// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top inst_way1_bank1 -prefix
//               inst_way1_bank1_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module inst_way1_bank1
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
  inst_way1_bank1_blk_mem_gen_v8_4_6 U0
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
