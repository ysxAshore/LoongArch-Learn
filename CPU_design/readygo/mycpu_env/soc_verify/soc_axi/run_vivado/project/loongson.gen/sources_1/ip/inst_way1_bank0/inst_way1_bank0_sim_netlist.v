// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top inst_way1_bank0 -prefix
//               inst_way1_bank0_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module inst_way1_bank0
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
  inst_way1_bank0_blk_mem_gen_v8_4_6 U0
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
