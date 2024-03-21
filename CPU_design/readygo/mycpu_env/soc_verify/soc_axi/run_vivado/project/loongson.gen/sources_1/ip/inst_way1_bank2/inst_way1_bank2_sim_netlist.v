// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top inst_way1_bank2 -prefix
//               inst_way1_bank2_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module inst_way1_bank2
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
  inst_way1_bank2_blk_mem_gen_v8_4_6 U0
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
