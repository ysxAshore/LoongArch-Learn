// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top inst_way0_bank3 -prefix
//               inst_way0_bank3_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module inst_way0_bank3
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
  inst_way0_bank3_blk_mem_gen_v8_4_6 U0
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
