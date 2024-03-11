// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top inst_way1_bank3 -prefix
//               inst_way1_bank3_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module inst_way1_bank3
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
  inst_way1_bank3_blk_mem_gen_v8_4_6 U0
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
