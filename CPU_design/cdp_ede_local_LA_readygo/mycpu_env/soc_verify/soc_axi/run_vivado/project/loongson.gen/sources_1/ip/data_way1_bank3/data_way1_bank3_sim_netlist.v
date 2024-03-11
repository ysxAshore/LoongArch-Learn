// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way1_bank3 -prefix
//               data_way1_bank3_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way1_bank3
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
  data_way1_bank3_blk_mem_gen_v8_4_6 U0
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
V4QTfnW0ukPl+aUUOB5ZQiLXbz0baC6sdutBhREmU0nhMWmjMvngaXbXZqXVi9gqPGYAHk5/QNu4
OvY0pmoHf0E1WCyQgfLN5mf58UEgyN5frvD6pXRDwNEeybcUBIxOMZRtZilCB+DW1PFyfeUNiVRr
MxXhqzEbQ4ulRH7DCMuWfs5lE1FWG2DspszkEnGvdCk/ccEY0Se8tGdO73RhGTgutXSh7qV8VEoG
GeBTkODs7xiGVO4/ZTOmn770EFB/vWaNx8P2/pkPB85TA/BBktQIQyqi37POD7i4O4KY75kxgzYF
Ri67OufIsq8pCyjttuv0cFckxIK1I8+18zND4JKGLnbkbDtCEtNZ0RklCMXtE1mLaDHWkLbLBkYM
dEG1ohaHPPnRLyXtiVqG5kefdwyRatmRnbqyxsFdRPxERJmNna2P1Q4Bxak5UK8fG04n2b7M33/E
TRau+AJkuE23d+Q76uZksgZ/6FMzurjIEPWfuqdQ07dvVyvufbCYB+VhyN8YiOF80oXTZNyC13qU
pDiqgHsA7HVjdm9F/GI7H6lG8l802ryBvfdq1oqTyLteMzG7jKk9ki5it9Yq0BZiDM5GWo+evmfb
p728pcIE7EYH+rqB0g+PTtgIOOLOx6y5RNyT8EqQUbpjFgrcRBf5zbo+piP6EmWm/t5Mnrd4n+XM
ebAMD4RQTB4YBFsDbp/9juK7LSlE2bXtm+EmpivO1Z6P9YMgsfG3dRXkXYcy75ZrP6IbxeCSR1wf
3Q2hlUgCVHTaNJYwogRasaqWEB05Hv1js51TCgLdnKh0WP/C9wjVkvdD4PIgBG/NZoCtpkChmHjY
yJ6qZJontExxGWVfDPpb4idBzu3LTAZXfADFKm5oH7HeYEY/bLUPqfVrzt/MrP8Cqzs7KAxdw4i6
k4zXrJScspVh4HazVrdBdZtSm3bck140ld3XX5OkQjiDhBp3LDIOjMrDxCuelHpc6wr82VmYGDed
MkEfHKMmMPo0eVfmv7cBY8cXxvg6+dHM+vDHfJ+3yghfMo01Q3KVYu+In8CRJfouo2fxIDaJrPyN
1Hwbl6MIImnlgyNvABIaJjiHwX8wZPV0kaTY5fOuS6XCkdP9LGpSo6GQ7fKy5LndiDNnx+CANQ48
TdogdXW2MJxjBBvdDtNJ9J4kYmia/rud81gqR332MaOzjzEs6InfHpMrtWfeBWvOZ6h5jOe0s7rC
yxZLgCAYZfATgC/NrLbo8RvDOBrPsnb5A4pq2hnATCt6b7NBYLYJ9mC1uovMpG6ytXNrFulFHN21
9Z2ohCFP8g/B1SUSJWaEzK5LfvX9NX2heY9LR5xY36dzkXayE/YzwuIr9/vljX4Yp8qQxB+QiwkV
tywYMeObT5jKyIb2zY1Ocn0K8rRRC+BBPAMHmdpWK6hXHC2g/xccq57n6IfTfVvoN+2HoAMy5KFT
bXhcrkQeEDZlZstt7HtZax4LFoZJQdXkOdVO2T6Mg9NrzujMOJlLS6OkDkwJS4EJ1oWSVdWzftFP
+VevVhe59fo0DAjEfifwIzbBUwRwXQROfSVYDFJe1onkKi7ZSl6uPDuQpL274e0AB6OxO0f8sHQb
g+F0NjRVavXmDWcTfFoPHY8QxKHtL1dzD3jqiZ/Pu0xWmZgL8qmvzMIDQ8w2+KICCb0jq6T7bC/4
mSNIP9UY4bX6wnQ1h0lHx0G5WqR6yxGqao1vQ2mSiRrDbR5d63MQekoZK8oBDeFRGakuSwNa5tAy
nG6/A/MTvT+epv4QGuSwX56vkQkVtTPe80YpyxrqC1zi3inikLFdL4q6NAVkjqNUY4wAR7+iUyHg
1HtJ3XBnYVsOWlN54hJ/B6y4Dl14vKaC6JSw6CFbj/iU396TSLSl/SWkS0Z87TVLBwEoNimfIM06
HAyejpFs/CNcpuV0HU41da+qi9FcWAbV4XuDuBbEwiqqZUe3ZzwajuhHuLJjd6nKn41EOOgYvDp9
UJpIRTadYagEj3X4pfK76FtNQfZQDfMtKpjOJi+vix6PvDU4Ekn8e35YlMxWZBGqBM7I2HsCIm+y
3I5PVzqeIg9eBL3D0hhJ8q0If+my/F6UVMi2EboXIVoETgXY1LaSBXUdst6+CNRH2P+zbVnviCMT
9trUNuxPVCImKBakZC6EX95kSVYrySbp/nZ8CV0mpTKn6PfMt6FTVvxJ5Vzq6Klv89HFzLC87qUu
VByzNOeqyrMjtjbiTVxPq5jQnlZpxvoUfiZqUE3peDQFBmoDYgiQJwsnOf+8KOtQYIeS6ftFfaXJ
lEA+pciWdSDP58+B2F+yB6XzC0XFaOdsLpI/RKc0Yltw9VZEfBlS044IBGFMS0sjfObgJBrjTDOX
xHze2j+VtMrSBUScR1DfRkOmGKMUT250cRNbO+qZXqaget0vX4n0j4URoISJr3THad+gDCsJ0z7J
qvrXO/PvU0yg9qZpljl44fnlA9kV+v1YTBb+L2xdXCtHpkczyokVELLJvxL1BRnJtVGAMAqydDXQ
vXLFm+jqEVHAHgxub18u0ey0+wYU8uF/VXysXFzFQPeUqXYKrbV2hvFv6plLB07IKY9TtprrstuT
1TD7tduIBdeYfHEbIUzFeAM/Q73BqUwA7h+Rt/0qtf0rQFLkfDQph108em0Uo8KARNAwPa4raLv/
H7xRzaTSLskXrgarWGldfD8wgWwMsAZsgARlTbjrxD6MGsd+EUN0JnO7LjyGUDdYxX6DYdAFY4ji
qyLBHCgjRFBE93SQSOeEc2I6F5aeLpGcdJAcLu+C5GsVWG4bV6WPfDuM8PGcQcimWVC2tKs1N2Qz
cfGDkQOJHmnfulpn+lU9ix1zL1CWE/NbMqlYllZixWD8i8lHhWKfhEsUXl3WA3KHdcka67jUi/+q
RBmOPmqssTY/Dxmht/EQhaKZWYC0i5CwJ1Ll150OQ34tODtuB7hozxbYA/V22E9Tdgv5RqhqKZ4o
49VQfxWKs83Bn9HA0ZVubuCV7zd1GDqoNDeDNIoXDE9EwX7h1qHjNKSbqc1hU44X72kBDHRHDMIe
xI3bQaWJUZNoynVVIKmb1WsMxkBhjlMg8Kqhocqt47cpWB/7ZC46I8zBZF90WG6aUTRmkQsFHJvY
gsBllO6cGAbIyOt8irdmROpPlBpq3ItpZVtQMkKhi/S19Fm5jJUivom8dEmAFaTYxr41xQZntONC
+l7LOgv7vyaLZ6EhBuRkhBwyjXFo8BspSbDZwQR6qkdz/koi99HwbJyVp8nIbosOKKueYeiOfbDS
/j6rlEgst9XGMz7k+VEiQeVVQzxKWPgeUSzWTgO0vJ+/4J/K5Uukz1Bp04H5uM2LTMYuM1DR6DJm
oQ/poGhTI8bdlEFlfBrJGAJWaGI9Enc//8S9bQQX2TGlllDc6lJ9mpX1weWuy0IOg7FhpedCVpW/
y2KB5jfvH8tE+2BIe1gPsG8NTJgHh7uXufeAitq+coNqIPmeuqqrN/hAN2cndEDz4LarglQxUCyi
u58ApHJy2AmYw6e+2DD3DwKZmQGUdUR0F3ardQZOLJFHRDukSDLpYme46hCIPBLQqZS2/TiFE4SG
zXgKpFueO3811qtvcG5pvAssYR2nBl18gLqFZvfw+YRHClAAMLTUgTrujqwsCTvM3I5nfJwiavSr
0xxkRfpKl6Kt5QzdoxRephKVjbWWevZdnzie4xYiyWHq/233XOIJ+h78hcTpA2jmzKvs9jNlPlau
2kYCFr0h3Btluk6QgpcCVlIOBvPEPaMk8DlcI6X6PJxCY4EPmlIXVbmwHuQd4rmULHq77Zniwq+m
f3lEbocYqBxMRZ6DLNcxiduZskrH1t9m1WCUK1msTBe2FnHDsnFYrj96sH23Gj0jFm9ps5y6QFh0
ybqmLUmPDoy2Ew3Nxw2g1v/M3WAlDiEprRpibSp92q+NbGzGPleupUdtKMRGcDwfrj+Ghxce1tMd
n6CxGtYmXzk9DqUeHereqSTJBqf1tOHTySFIObrActTgdTaXwiraDy7pPta0CJRQBwtfPhgNrv1d
Kf6Nz5/C2WsEd44+hRHaWB3r3Sxichbcl8WF8EDYJ6Siz8xyl2fWHS/l+9iK5sNhCSYjf+v3n8mv
6H5GEl7nblm6c75+wWffDuRg0BcFUIofDhlMC4ztq5HRFpRfZ3jOIM3Nu3SsZDNO/mORHY0votMT
/a1zfn1tdY15GbZxPeRUUL7FaKwfDJ7X37Bsu+3hcXJU5Mx/fo9rj2PXYvOHsj6p2ANaA4s1qLz4
z/T33K7oK1zQLUc75LMQJ4e4lDdZjbKcnrp7vPnealyfNKCYxNgdTwMgdzwcknAYGUUZ92HRy9SM
t+N4rNs2mIPTjNC5Lpm0LI+altbPIeX7PP/sRnIJ2L5N7CX7b63T+VEM+MptmZxcULypfwj7v0Op
HFfkf2Wz7Z/QwswbnKA/1ayjQ+r6LYMiFYnbNodgSs6ME5Zicz9bvgLX8cpkeDZ3fuUSQBkXz8Ff
zcN+xyB+QUH13uWorooccTm6JXxTE/7E8eIifiOiRa6GoSSlWSBdf6azx3w4jlknl+9lnhQUiY5X
M7u2CCuM4SrpJyPPhOOeSF6FaWVBbZeOnSu8HdvuN+p5ixLS2BW3ALbJxJuiOIK1xJ9yfiKBqxEJ
wmFCFPuNjAZUnhgn+aWPdu6W4tqjtDIX19eUJk6kA148tyL1BrFI2aFfU+/K72VUP3tb+bnHQzeP
YsrqbNFgVAnHw6gwENldIs998jsEhMaDwIMHrA5SKblcmuZZIX0U3NyLRbLo6I9+HE9hKAFK+dAC
MWawZo/WfmOcirs1gdoU06xgwS54ePwfqKrOdDgkBghM5aQyCfXYNwka3QBigpTWz+5Y/ci1NRcC
+lkl3C7iLV/C1OSjawVh9J8xt4NFfHFDHq8llGfFPn1zMTvBJ2lWvqEM0v9wcKI3Q/8YZFi6spyu
nS/W/HHBJOI9sqlx7gbAt0edZI3RqB3UGU1HDN/P1QXtBzt47xk696bEt4j9FgFjVYXWtm6PWM2d
mLvKmI+hnnV9tBP5+tmCGoV+Kdw+ZjiH3bm+gd+gVc7ksO0ieDl4a91XjgHA9DMViOnf3+hMhONk
3E+447vIQCb4dRkQOOcHbtkOit1bbTWMbHObcL/OnOWRPpdN8vYmra81bYPKLm1LJm4qJDqzAP+r
TDFtqfsWsB7ZApnqvSrDroTKXeH/u+qCD+4To1Kn2HoIatYwSaVKzkvtYmESdC9GTi+/vGUtRCQQ
8RORNMZllv3+myUi8RC/itRoXnJCv6H66YaOi44cw7Pfm/IVQ0NDlZVebT9OpJzxlSqzwiwU/dBA
l/d+yOif+ritJUCbqJotWTr8AyAWLfwZe9nvwBvSOGJlrTHJleAVa441kfeIpHbtluKN+qQ3XW3i
PjcxBHMsgts5DDofy1J8hYpWjjf5oEkEEauMDBYwslg06GQmOeLE0GyxJD0Yl7TX2clOxq6hiS0L
0oH6YTZfT1pRdfAA0IOYorlUKPRV1ZJA67OlS4z4BabEqBBFFWTWI5H+r7ggb93AJLyfBbt48Z13
hNnsWHbS6j3KIGSPJpYh2KcXSn5j53S89E/5UQI+GdrTTqJ3lp3+16X+QYRYst4eKZ77BVgm/r19
y8p6j+PfT0Xfrdug5wxkjpYhW8vuN6ffT6d639HGZ4wKOZNU4+FirdhdZMHG6THozuXl3fJivuIe
Jkz6xziNGjKq3uHHqk17PfabxGZdTLNhHI0HlQriX2nlJxKwsOcmkqbcc5XnRAsTm9KmC98wgRap
2rsnfU9H5onM8lYwKTK3GKFfpQnem1kwABa5vxycyfPXs0zfhfU2+PSpHABO2FUo8UAkY58+chcY
2i5hdy+B6k8yPuNuX7loqI9LSBURjAvQDywdH3h60/u60eYTBekVuT2BLjn4q5MF1VYC/hVOL6Vg
/8vImgQ0DLfsVRw83PtsLrrZSVAp+xbwOVIlQELj0l9nHuzax48/nY9EAcatI2SrdXsblmTEh3Di
Yqxsj6J8Dm4h/UD4CxYFieokKtHINjop+gbxLRbhOLCXvcGu3n9NLpbVzdfQrTICxZ+wNjk66zM7
bXn811N9ydj3RaEiYTnkXJaN5z20ncCupl2gIsIMcnntikcm36CfamyIrwNChhxn2kB0M9ZaZAmf
RX4ze7izWkOrTQHCAWcnvZbn3vIPL1RtTkJ/aSEx7j4ue73OOIeN8V6XkgxdCwvParItjWGSDR1D
feWMUrz8i482eWOjg46xrIsiIyeb38fYPwj1pqkCiFSdtdVhcS01dWp9QknDMbsN9/CWpPEOtgIM
Uis75i16LbEF8H5PX2ZEUW1q5Ww9BYzmPRMgFBgqWs/OrW1eHbVptAkACMbCLg9mkSjJBvIEufvV
GedqB+8FCjMJEpMhKU6HKUJqInz+N4InrTr9vVNybvS5NKSWlLl7836sAYmoyLqYo5bQZbtMHRr1
6jZuzeY65MjH5/4pInAQNx8MkcSppM83YXOg+ywNowPiYd+9Ed/kcPSyxuPn0fr5fVI95D/c49BG
3T5BmuSsxfJax2wJOyKIzhV4+KjvaHbK4pzvG/oRXUBTvidKUS4RS2x/Gop0I2itkyTQ0+4JFQGG
ChsJW4BLuU9jkBXgC22qH6dziEHSCdJn7YTULkYynSUGsuxTCkreFvMAGF5koIRdOHtUu5USf8+g
m3CkezNheQp9vVgE0RRQ/2Vyht+KtQYiHBzwYTN24fVntoklH3moNd4Y3root6y4Feuv8u9rl5e+
NapgqBrWEOF8aXoHLSae11JPgipcNdTd4PUKVAKGTAr42gq8fdyMjFAC+gDdNAAiro1Hczhm3yeS
nED/BCrhkd5jBsqkyPT1F7GXBdmSE3Xc1wxCBYr9QnuUelWvTconyIyEjc7kDTt1tbshX5gVnf+u
VQ3tefNqJmdPomwPCkk/t5x8UfZjaZt8ZASWB94JNG7pRnyBkWvGgac0QmBxUwvfusexvQrpha+j
gW2NoSHzXm6nfkv3Sx6LgZkwoLctowQmpUU1bEwforeLnYLZ+8ymD6uv6iSSFXvpXERulYQbJhPp
+CFKRrCpwiwk/inVtq1ZfatnR75RyHQ9Y6vfM6AY59Ml5yY8squoKSqPbx+xmMgup9SEPLVb6iXk
vD0IsktcPRhsfoFh7peTW4vkt9n5vV8BFXKxeWGpHnjIwutHR/zUV33okYDxLz/CM5AMm2KegdMz
FUvwAb5XskpC1aSJ5x5KF5FDvV0A3KqsqlAsVM3qYVfw90ET6tDA/cZ2rwv/IiQemEiNAmmtC8cT
JujuGL4dsXMY/nas/NyRDV7WiGYTUEq6oMR1Zy3UOZPuyh6njvwQ7Ekefns46f0KvOi4ddcRDCLW
IJwc/2daPe6D18YouPsvxCSdA7cgg+PCw/mB8CiCUsS9jY+euvNYaFQvuPFAgRBOoxwiH2LVcVen
MHADPTermWTl5s4t4FQr1g/x2yacYQdL2644jjLxeHTf2A8VWnUPX38MMRF9QznO6Q4viJnz8yqM
qTFWt1IreuiWnDU0jrgAMu2kc2q0WzXzKImtAPsZGB9jQEpyn+IJC8fMB0QIBpCS4HKOIANn/1Cv
+dsqMfJC5Yb9U4XLs1z6l97wkQ6p+T4Ol6L7eBWmoAM+HPzevEc5YNsRoBTSPz1OYhUthXeSGAdN
uD0cgh6nEo5s3EaO8unoU44ollweQdFP8UWdrCF5f+1AqKkmZI3DcXV1RbF1xbynrFKk6amHe084
KkV6LzfF3maIX3ATWQcvcaCDbX/eORe7qJBm0UVUP77RTYRocjFwisJoWVEvWC0fpG2k4TQNiQaD
DoGNZKUkMnXVLSwK8djHx+/z+0V+jRTndsd/QTYsu4F/MRjmbOBb/zDf5KvuH73LMixOti6uqpnI
AZIMlfKOtGaNuOydd08fafGeB8wTFMSVllsD3SQz92uCusGPm27qH/cKaJ3F7WNBhj4JbtaNJjbZ
O+MTt87oz8bGoP+5BmSSS5aEQzCdpFCJ65lsyB5DRIr1ApfvutpXV2zottulWvuMKwL5vJONKHZ1
dpNE15TuW2pSBg/92TaR2OjoStGxKOApimz/3XsLvDV9JvE3FkxDV5R91Jxo7C03XQl8meaI9IZw
X2IrNWtoFv5xoT+H0R6VxzjqXX0iEzlEjZFW3XHZFlorYc0MLjsZ+fofbhd/OJ8nvjQDFYJJlX8Y
16KhBLWZoDhTI1SwhxYHkVpqdLFL8WTRyRQlnMKv0NBdPM5h7j3h2fMnJBOIIc1DOwspMWmib9Sr
suwyLRUGGTQewnrLRAIOhVc4dADSFCZ96Ox+9aP8TrtmfeA06+QDlotIsNzgqK85nb4DaNAVHEH2
hw5YfwcA7xh9IXyW5JAOv8fR2n1R0L6kzC0oVYD53TGdq3SPr0LNdAPpC62Iw7jW1+/IntDTRB7A
cQMFqNLHxZ31SCqVxRTXS7u575xFSE28kaJdX/NlC1YTes6YHcVueyrwDtm7Ft+kEax+PCopW8oz
MtSkDQ/BeDgQIoRs0fieXLTdQEG0HV/SqdCYE6SamqHRszGaqhGEwSDYI32bsXRTHGTwZbWDLiTh
F92ukCGa05k6+Dz9blWl2bzE8+m6elvpyxAmYZHc3saaA0GSgYsq1nnnxLEoCiUEqhdwUNOMr9A5
kF6IaesuaUPb6nm8GhC5jfFWGVOkbmt6uoVaRMXkkJwo2V+44R6y495JEcuZwbSSEf/0c0TAWWF7
kErVfmZDD/dYVW5KjzcJb9zT8W0C7tJ55ujcme2xEcrRPfrZsRZc88KReq2hF34OX4GgLZ01z/2s
b7yj07mIE6DM34GpuNxatltAkzjFKXlPBFMCbIlREvh7NrC4MQYpqEvsqg7I5tFiAk08GRgeeBl4
0leQKZIOtzi5q1TX/j0WnD/KUKh20NNgcidK4j5tE7gzJ0lAeuw9Gut5ZuyziBBHYgBV7fFloX4i
meTMkd64oczi4k6eDpk50qOnxgSt1NIAgO+jClD8fPvS+oFaY6F3bfNx6+OgyVVFMjhFX6LORz5+
+E8m8jzXR7s+nHaOb1wH6Prgy8RSY0AxUMD2ds1J3rFM+6xyUcJbgQ2k7ZjGxSSi9ULB6DbJpZiC
L7GXXcd9WACcmcnX6arwljL/xGJYuP/we8L36YDf9UkbcO+OzTiVxs+ypvC0ropMuxWnZr+LDnd+
Mtalu3lQDOkaVxr5Xy7EMYhhi96XPv0tdtbWcyk3aifBGKbf4wI6JG0AXrXUPasjFjkZ+J4afzKw
eJ8p21jp7TWDZtjkznUB1LwlD8wKBOJOr8s+24YovebUaj78EAzLka4UZI0vjtHR1h4K72KMHRYq
IfGAFQ1MkGIHY4t544HU6G+S6TPG4341McgmBEFxrSV7oJQ1885mx0UYLT1UNzJXEbvIbOYMDk7o
Ov8H3rlSOFCG2tfvWsO9fetDH/PmjmwETYUbh+SKaLqIlOV7PO+v9YmHyG3gx3XGQ5YlfsJaK6pP
1l4aJt4oI0CgppEB9sGlXMQUF4GUT4gWE41d7dGFy8sPC28p50gXV1gYnBPYIeUMBiewqQD4C5E9
7K+ry9Lk1djdENXur5T3HhIiGGAtGJ4Oje/cJnn7YZFkzhX/SssBhlcusp7l2aUEOSfJ26pZZsMd
mTwc2nGxNRVUzz2+KsgMaCwe8iuUQUTKbw/HWQBvChzWMJyWb8tQEhUytg7gPRCbHwEh3V9fGrx3
GKivXcBfRK9PhnBpRAMgQYjtfasXB24F8I+8PojJ2XRs/kMQQLIR8VHIPhUwyYvHFIExioiI08Nd
Q6tBTrNIqDUEddlXKiXx3VxugOBZeKI51uO0YnT9LrKrrng5vQHy1d9NmkwSxnysQ9pjLGCG1DRh
5FKISh4h6iE5AZaSldPqlrbPCCY0MBD3SK6QQZqehcSSgn7pDxjlJDwcdvrj6aLpPDmPoh2COg7L
UsM+i0R/WaB7gz1wGvx4AO4YByZgfQtUn+nmRe9JrENUK9QlKj0RV45i65qnuF52aGK2xclQh5HD
vjdCKFev3gnMvveSZybztKwW3YF/oI/zTCMh1slaVlEQR5EoRPnYowQQjiG2HTvLYPRv0CZWMYeh
uRsZzJfGWmlJKS1VLtrysbUaSCqTQtUwZ0+9MDl5O8FHZ44Lch2qeZ5GAbYfFQAlOdR/ZGgbi+T0
u5vkLk3GA81ALesqbkPNHz7kGS9tHeUAH4norn2KbVB8Ldh2Xt+upq3on/1RhoxsthgKGfjjKTRY
r1Jq0dgHd1zWB2ZwF8AEmNNRp9sttiQZISBa3X0/DHQMhXZexdLX6iStR8+LUW1OLnULD9a0ARK+
tusAeH05LSlhhzUPo+WPYoCR6bK0LF/CfqATOgUe6Y5pjNRaq/vu1MWiri8/EX26A6jk4wbodBZN
awBkqrzL8yW7fISZoomKCSm0G5RWykMRBb+17gBSLiPGCnWbgyBfmlRSSj/6kK28+221f6s3Gd69
g0JRonsEEDkkTC3dZPpwt+c7nN1mu9uCmrGn7H1PvrSmHTVWJLGY/xzHm1bt27KfR1Z/89/jKAbd
zJj4zFdGuHhkb82Z3ZwEN30Vs7iN559ufXxgI2JFjkLq+H5OSS74oBf1aRqe8vyE47ZS1BJ+lSBa
ylIL2bBe5crtNAlPTqoGKiUKvua/h2GGeAX6tvaF3MhSMcTHYkuz/BKr8HMzWFThyZQbLupfVL7W
vPO5A5T1sFJ5SyThAWozxylL6hgwciEo29W5BfS3YcCc1iSevfPYGWCviQUZClLkAj24RJi8MyOV
iTfV2AzBphtbcrY7VVttSDr4i0mpwFml2OmtS4FfdNzf3v2yEJ8BIEh2T85+4G0xOk9Wr54FQF5L
ej2lY9xF0iD5JFVtycCW/fRjFUvNPJ0pNHnyVrOh0KyAKfI3QSzNQQWfvfNdb3Hhwx+3yV2zeBIu
tdVPIyS5b1BKtXSVZ/8eZ2q4FOJzKPXQt/yzrBDa/na1JVEPTiTzD5bEfU7BMy3mhNd/xrxQmTHU
MiYXtGyA6sh4zcrMFAkXazd9wtliwbv150/CudwJvUy8OhC7X8BNjcADbgKiXlnvG7yUYgBLrOYP
JKeNPrujh9UIRLoY/iLTFv5+M9gpJk2uyBN1ZUsYNbfYV8XpAJMczGUeau1GuUgrm92MDHKKH5pP
EKAeQ5YMdbsQ9CMDe1TG0+FpE1vl7UX7MXEyQy6k4c7M93PIdV5tw8u8noo/u71y7dtmf2YR+wxi
xDYVcLgY9hOhN/YssIwh7vufEA9Vs6FZS0H/0gsfIssrElZq8cAtUmTP6taimAYE0G1jUTyqXYYe
0YQhWW3UnuJJe6hrisofX2XI4DBaOmBsDMqHfoYeT4/2R2oGdyEm7PPpsNXb2YRjYJiFjSbVSl6W
OONOOGHemmGYzhBaXp8lkk0YJyjxv0wnLX0tyZZsp4RyATtTK1Cwh1912yuqaXvTxiiTrGzC/cMe
4N2caTtv0419kjsQK5xJ8fbu47PLyg0RaIfjHA5IFSqmPCiThf8fbeW0dABAQKy6lKSdGQNUOyGS
iU/xF/TQ7vlklbOeDEtCJ+Sb7bJ59gmO+7gSMos5Q7WrVzA88F0POaDGPNRYwZj3msQOSrVFFIMv
XoisxrcmCpfUYmBsNDUwD3N1PSbp5OLtpO3awjTNFZBt86JhQxTAg5AVqGQkMhNyGe+zWqR/wtME
9EyewEDA4ZaeR6b0AOLeadmcekGJ210gSnXyL+ynor8YIH7LJec/e40aa6k+H3ZF5aL5rrSfXvK0
62j+yQUCD4qc0dReV0m3bAINzrj+IC8CEEx1qSBWdHdZ8F3lVLVV7b8aSsCIe2Gog2CwxLDo6YCf
lF9CqSQW49ivmdzdGHvtCI8RXeHvR6qE3Jj03hZAP/zcP0KMCe5ZOW33IMG8eyBZPWO+CNHPtXm5
DHhCOeMj1b+ULrRYqZAKb0VydFzipqts/eFZ3zg8gbdp47WAE1zXOQ0eHnDV6w6jmlObcEx7YDBX
VNV+1vt5GEe0P9V5f98xKfziHvdppz3hfs94WbCg87g6uZ85Wsn5fNE5VZwtaSzYfwnO2B91HHrP
2O9XUeNbKHL0uJFzPbc9a4ZjKTcxITSP/dJmRo0ipONfC36HViD9SQRjDr+CKO0eqfz3vVqPw7m7
W4pavnzHnqEL6+t8N6ceqzb76XdEuxFJwQTIssucXHoxGg4fxhKH10lAmeIZz+7zNlKHsiOzr+I8
YNx+RB7RbbG2vulMCgZXbK3Ye4VgG/TbPkXDtxfKQjhX48ABQNz1i6Nj1GoM1vDKxjLIGR45W6pf
p2JU30bMNOlZ+3hKwvoFrqgxWjK+t58svXi8U/3eCgLdLaFJ4nLbOeWuPqDZCfPJRqOkoHrKXqze
I+kltSQHsSh/mh62uMedH9NTIdLJkmtsF19MyeRPGyAZCZddUxvnBkeqJO4bLeRDBdeAh2mHfjFw
uftQlbKaW1fbR7An2xqiEz8iuz3dfIBS6TIdShXv0DJuPr5wlxYlnIx3blFU1AWAxZjL0CbfcpGX
tsYPga57zE+gWmyQ/PAzPAbC9gSUBYUpy4varDRMhN17zRT7Zjzb1zZ1Ex2xqVqnfvaRaAwBNCp7
usAxgw0DfcFbtS0InSZBykbumk/Edn7OoOwrUVx5ETfrvP0OHyPl83F4cG5lyUWhzcCUR5G36D69
GW2gWE9npuVMUGMUq+/qObaKTMgtMhyR4jlYUIogizqCppNFg3utTXsWOOn3kJS/DHpE4OldDf6q
Y83WbjOS6k7yvWloI5QLrCh5koQEpNx3t1Z+xsfXhchpXyNEkRSev1r5rRWbSk9huupwQrz+dTvA
A0VDGdopRjiM4xOQv1JLI3ZfpsCf6Wu8+dlzwrLNNxQ1+7heanhG0DLfrp3ydbETu7YV3aXjFq+3
T6fNM6Xmjr5gxt9j3o6JCy7j8wHxKaFJ5/UC0yrSRxl5c3XrS+PZyFX+b65oiMKbYeW3w+srD5bn
D0ahFblxxCcO2tPPc3YtL3bxjsXDp4Ubd0bYocMZ8OH3JbKMKC82U6jLx7F869Ol3yiS1FvJSXvj
cQ9MpwyVJQwfI/wxrlPFfO0eb63FDbNygQ7qldxrwiJN5KHVPLJgj0r1KFU2sSFDq3jSEiaKNklz
lFc5y0Qqx7WupGmd3yMHSaHO408gyXyp6LwXyzvwE4CCNXgmwwircvG53VQ/r9x0kQ7DTvvgTVIs
B0xE0jD7Tyu/ZrAasrFznK+oP4+6zspPPsxgcjRHQq9+gcbCDbh2+ZpgtDdrjFn+fCXr+Sd7LZdc
1+5bEwHlOOMKqBfWbuCKibocvyTMa4fNJ0rkq9yiaEwLCqaDpck8ElXPtFbJaDWcb7RYsVr9+Vr6
EgCIzcyeBbIgCjYK2/Luls9KO6JjipvMOlgpU5ZNB6wx/3MRNm7p4a0o8prdyXz20TTgslDZkuF3
ump/QY//MFJuMphbCgKW/+gFcHCNaytsVNAEziaGDdeJSIM8D5p1Pr8Hzfgoo7ikwNugmycjxot3
RZ8xncz78lrsjj8QGSUgNZgT6AF94tFdZn186wEJbxexz1IQUhIFL1WQu39jNdw4GnuqND4LfJa3
UoxrYxWs3ydrRuTfpAqakRq6TZAk5OrrnaGlzsH06DMcs5OuYwIIKmHI1hZF+waoaqfYPfzUTcvu
k4a5C/ftqqzzo55YcHgAUsR2uBk1jz8UlEWrZtF7CH1ewm4i1d1q9xphD7FbQONmfqkMN6MaEgYW
B7OdUViO+rdRU3DYDsod/OpiuG47qJ0fyzPJrenHIdxUehu/HUNjBWE6cZimtDaxfJPbWLkubc/p
4exCQA6tNy8pB19TTkDuqmk5UMrjDxDAeMC6K1VvgkTPUUQuMO85u3LzKf5tFOjQifclVMN3gtm2
l1bLQMQM0UpRA8k2uHj0B9cyrBYv4/QvoDMjzAuUkdkXhIImLT+nd11Yzhq3RnFqslFzDd342XR5
3Um3H4qxyAO/02t300HsNAm9Zii3WQQTehC8cnH6cL3ttiopzLmJf1g/2R0YdGDXbvwAjBlzjKgo
oLCg6iieLIveIzhYPK2it9fv8Ml6jU3tA2nnefSy080VT7jt1wZY3igHUiUvyaERN9uN+mcRYFsf
fCKIRXqgK18uggSA7kGdADpxaZv018tn8Z33p6hVESzE5in7RGgksdSdoYGq8c1IhueKmqpdUv12
Jd+s0a6Ll6HZX2A8clgkzpgim4P6yVfD11gbDVw2ELCh7K1OnkjjVUWEHtSE3QvWtgJCGRqfDPRT
I/GmG5c0NucAuTENFHVeELFsmlun5xNGhacT8SsBwg0eSt/PiP+A1SOYcBVA2oGKS5G6xAatzhrx
PV4sdJXd5w2TdzQdhZSElCLS3arovdLoJxIBCnhGKs5oGKud28d5Rq1jkliCjKAMn7+SMluP6vi1
UoLPeK8b8baD+9BhlhMzTXxQn2yrXi7ny76rLntEW3F0hTGJoDOIdJmMgNrroEQlbtMDlJiFibdT
QX4nxIlz/xdo3BajUsTgc4jevkYjeH5Nltqx/c1N2LJpZ1NT/LPNnjIbpmLZHNYiI0zxVIr/2Whu
eoGsQMuiIP5aLRzaLjBf/o6IfLllwcgAdNclLkQ1xGxOzIRs1eRUJEigWpgCtnZ+HFN7UHzXlIwR
iKeW4ggRs5a17PFlnGJTv3tE0pUP+wrMvG0Jg22P+6Qxnu+uHwy4uUMpfyXhzYL2h/Eyf3863Tvh
fsoUNjXqwij/3qT7dlj6ZXH+Fnrk4DvA4gpXUTQTu6luBtWt37SSs5DyUoxZhopWmXrlvupzgPr6
wi3g9TO/4eqnMaF8iJ3k53hliiz5358lpA69lKnK2L6lDlyEkjAAkkYQEXJJuOYZdbn++6p0n0ga
1VYewaAGqGDF+qc7o4bhYp5yHDA49W4YJtiOgYTpInhmMbEwiT7MJMWIxYl0MZq3lZhS7feQdMSt
EeTSJ1z4uM3NOAoLPKAle6hCi/TQmVOvxtR9GtIeZ9V3zOVQRKgoV8R84B0r8Rg4n5GdiIUu65VH
SqtHcToqupsMUpjmosdfschqNTd4oumHlbE7PmFEnfeR2Q2xsSVRHNtt9s2VsdpT+TkbN6yLk17O
+bTJ2LWnK+YuBPZAAgeD8DIQpTNbaVKipmSPUCpJw1yWExyUS2PwGpaWgsTQahV0X7cw4FSGPLbW
1Vu6Bc7+lqmob5dyay7HHzwIQno5sbx0ITVPZis+Ic8+INGGikk3dALN39DJ0cWmOqzsXIM9cBOY
ygn2Ofm9wInwUTyANZjLASvj8wY+bJ37EA0SITu/lvqqlytA6V2DmMcs+gp6d6m+lYFQavaB4TL3
9hLoMXfk+Yy/B2I2c1IjYmIy9Y+oxdLq25BcC9hGdiIG/9H6KtCwy4Jxua6VNMXqvlniumFFgOka
81jrchA1BeHMDJ3UDHHAlrbWVZ1IzBT8GlavwgVRRq3D+jDptQ+AEZ+zaRW4aFFrPTtU/DTBrY6Y
jF8aznrvjsFO/BAlzyDrksg9KDPCnbfq5NKIFbxfFc6eNcZNPa3/GRYvWINbS6SLqGUafRkwsGGm
bIftiN1nyDx+/NuWjknwSNoAGzRvZoUGXchWZ2pgeBXd8rZTBAW+a50VTpPL32U24/DgBwcXxG8h
2Fzzlbd8eRRmF53/vUsX95Ot2IPzZ6mdylJmkeHvZffcnXDhUbWQr0u2ZxjW0veCT/Y+d/0pjaoz
GKrrwA6QBLlWcE4EwfV0+EUcEuyrFTgyvGNt3/REJhVt7SJVKc9+SlTbEDZ9EETyNOUZki9Fl9Py
1bG1o4EpMDO4MXZc1gqeuT+pKOoSDFaSfnk7n+CZZPZkB+UmkDBEK5bh5S/OKTRBGp6EeiLlSjzt
xxheCCJUL0bALJcugH0tWB0jY3lSh72BiVKzaeMU0JCwTHNQC5Qf8TVGo7lPBwcvYcQ0bIPUDAlU
5Wf/3QXKRzGAOcxln/sc9F8J/6QJaFaU3/XXq5f5/gHE0cwjlTVOV2zYDM/POV0w3sVCM40uRfwX
l9/L243sHtQ1ad3wvKwmdMoeZiqirwoVsXC0bQ3hFyg3XM2fXT2eapdgw1iUC5Av2OZVopdS79Mp
ksTk65yfU1reKnapTc83Y+qNNi3NZG5AlHDuiLiRWHL6XxXTvHJKcVeVmutm+bz3ARySRdVSNwpJ
QHP6pgcrJkxYP0++L0+rGa8vnX/9rxCjtTd6zkVeEaPZ6r7jBalPb0lizg06xzoFtezFS97QIBuS
5c8GWwuD+es2CNhhyMD/u8Nl53BXWDV8mOxbtd88Ewf/+x+JOR46R2NeSPgkK8+bqREwaR+C9yf0
/8wP5RyYgv+DIXte8BEPPqMHfaeZRUFa+nTTo7SAUoRqOFaOkdg0vdDLJG2E15rAZUbHpjQ9D7im
26PJqD2IOYomvbqBFe6K6FNG77UwbIvGqOTED7IhXrq6ZNM2WS25BceAowRxIqp+Gpm9znD592rj
iQsfNBphbChx2HAGJ9EpdhIi8C9q9wEHVGGC92eYkqaB1evlwxCCAi7YlGfJVLWHJpufVu4biiQO
4fP2NyKdGHMJdxkBrfomQ/UAh0HK/lGDwZvmHii+W4C12s/qOCSMWxf/YACMdaxbKztZGEi1QHn6
aYwNOLXA9cBZZHb5Af0FtIciPr2/7SPa1fISqnC4uULW/wAgLu/KdZZxDGMYL7sRqOZWoCqvxobp
8ndlSdGNVII1/JCiPttYqeI4oECmQb+AYdO0DLeksG2vqSP3MzB7HWM8P5Jg/++mwlaGhK2vjVYf
GVq+gQ1S3dJQ2SuNfafbvHdYIFF91BuqZOx9d8FTx4pGYKfi22dnH82I1ZJZgcGKDyi2sG+gInck
LvXFL/jq1cecexXxEejybTPL92/lN0g3wNDTL/Fr0TBJ1H8npuQzPH8qIa2pYyuNXuBDbqbfqnPG
aG9VawGJZZClbw7RmNcEjDKZkMLiy7t4rbTM3FcCuoTBMxGr25SexzDvQ4EBL7dTfAwNA2s+X+wu
AFYJSngypmVgw3XvO1QeJl5h1m/gk9vTPuTChIBKwxY0U70vZv7aE+0TVrfDXqmFsfuUnYgP6Qd5
AEoNVwpwdDX8/BKIsd2WNggCjhsC8Sj0xIxSep5CwIMDyD4PVnJYabhhoGXEjFmOcRL0bbwgJ/Ns
JuwgMpxexE5SZ+I1r2rGZEX/eRz75n4FIHsCsmmG4IxO6fOcPQo3cVBwIPeMmP9RfX+jmIqHF6i/
lUEY93QzLxWFtNebvnm+fQHUbkvx1leU87kmXm6skO8jlyjl7RoaPEb0FZJrOmJCcjcXlSKKV/7+
Mwj43gBZtud+6iftXqJzK5AkfJUsS2Xm30LyqytDCYi7aXh5Or5hyEARfHtEPn6ObKCxZVBucVNx
uf3xef8CxvvHXOIXVHfiBKWkRDUNpn7bgH7sBRPPo25iTDbGhj0tkP/alVc77qO/4qlxmsIi8jHr
ONLh7q75zm9G0YH9M4i22ajulQ/NRKxPEZw/ssV3XWl0xVeeDHX2fokQGK0bJwKlzNKpG1BXnFwx
uVPHkU+7R2dfBoQOrhzxlKhTiXZK3Ih3MGCE7EBXFeU3l6qur6gQEk5tLMSJFt/AGcqmINnRwzQh
QUAiAMDxUBFj01EfG07Fd3hoKFWg1pIJUvKCe1kvE5agrz3KVMYFWhy/usV24iasbhePeJ7lpbgI
LiR+0JILlDaTNgGjQ7ePa31LQJSuPvYcpz/gFI49MaUA1gsGf1F/Evf3sZRoRjff1u613X1ENLlQ
EplkxWxVvhThHSGR/AUsRGS+DoY948hQ2Bveh3L6zwKP20X4XMy8/LHXesZ50RibcEOWP3rK19bV
gSoMq7Ah1PuXhIWZRbWd0gKzV66+x5emfDG6pjVsyl2/BXFgR2bJtxKPb5g7gqt5k5O57wh4ZvJF
5bAo/3HFTCHYOKFdxEgtPsZ61FcAItAd+Z6H2QouoSkfX+Vf8qtqHI68h92YMS7+1mhDtnD3Qe8/
nPkQizOtSIa2MCQyZi+/758aJmYvWr9vSPQxgB0tewum56r2174tjM6pZw0+ncU1WpTfZ3GLlYte
1matDKuZTmK5UM40qBorYtoGh9+STUGR8Swf4jQf0Pt+RfAw4jHfdOAB35hAjLc1TWs1fGlW9qyc
pzpv2inbG99Ycw/3xQ8YZjlmggimA1vp8Kdb8vydqej4HC4z+P0SjwKpktJRiDYmv0oIR/7aR2wH
dyv6ahR6W/KYxEFk3OJAbhz7lZ/4LnKjPekhyfmdRWGZ1D+IS/trVkOjYdhV3gi3ETjiQyLI3Dr8
HJ/3wNEVqfplzSbY92B2w+EG8cuNhbdyF17PydKYgsQVWWoxWK8aPnveWKqrE0UJwJHEbm19gq71
K4gf3VuROVtoxInfkJ/+0q5l1b4fo9A+B7FwcdEFiPH4yhpc0SBwwOc4joHs+eOlzNBCjG5jVZiA
XwCwLS4hmuMxk/UG8rGMr0YBPga/5I0uHje7Lzo0iUwn+Q/XtfCy+hJmhVkENne2oJd9wBdb7k1m
QNLZvOcA5Pgnnqexg0rtAt6yCArBGpa8smO0Nv52pVokMIJQqYaPhDwW0QT7Il3yT2YeaEEKVm4n
0TnLQ0HxgYNS8EqSRp4mRlAwJASEjW76dDgyId+EJQUwOz0iDV+8mPX1H5oyWCs+2Qc05VMQG3x+
dPWF0I+ArZqLbijOSlvSi1MRkZ4C5iZ/GwLVULljFigbqVDDbMQGCrEq/JYy3w4vXclOL1UcnVTW
qA+5Fvf6+l/dAe2QAu7onQUA4P0q5vu09bXL5GIJZUDv3JcdR3tnHJ0Je8Sq80zntmU6y1CP0BFJ
EVppzLbjv0SPbJA28uBiPuEf9wahbX8GLb91G51Qhzn9RBwooCgkJW1ZuS74GXnrm2b18XgGHkJf
G5nhCT8rlgFrypC6LjTkiCBO8lHX0VxO2m5eiNoXr3BOzi1wBzSoHZ0z7mDnYt79TJFFVQPc6rwO
Cf+275FIX1yF/aPQ+7PS6QPY0PsMAiDqiz3ctT7ysUvJAZHen44NYq/UWYNSC0MHEsU/f916Dka5
4TJ5Elg0xZdQiXU2ttrEmYuwZQScL1cgMOQBUxmm9iXjgrQTGZ3gbKpw2PnsyRVAy/Dv/mlsCXEB
BJaMvF/PfBKtdyGLm3W2lJSif5YXbR9EyDuwKkQYLuDK/WgxfarG2EWhALebmbb0SznyRe0KMOzM
eRz5RuSaiUJtg0ISAJ9yomD/mwtz709EliifKNcO2O/uNRAbWXKSftNS4tQu1OMTw0wqMfgQbtmw
bhVUj1EecJ2Ymx4hSpUsD6t61KAYHNqIjF3DsYYWpFCNVcTVVzhfJ3k9pOzALHDYrwFqaxK/fp7Q
gLf1LtsLWVyqZ3hoOcEhEJfv9lVkG+c1O9R5/DOVzlw9Tl3WEf1RDkaVyxSf9f6tbVQTMGn1zEc/
xgo7i1ZpX1e1KlW9pwLG6Mkqyg+f6OwW9wt/jnQ9xPxojjPUvYSMfNflxYDQYtwVyjDokO2Cfw0H
soISNC2xlT+n7jm/40XltvR3vHvFOX/7XyEKQfqUrMNPRoDiPRcmWDFJO/Lwva26n+XtAtGWzII6
8RvSqUxjloLtDP5KLHg/pKX6KeeyjxmE3G6qSw2VzCwNzwf3P92Qw4LeGuoav3iLqL7L4qm1zx/O
GmIHLRNyJcr9omIwaTdIGpceBx46xMWtgyE4nAV5wesDOhY5Pm/Px35CrA7dftOy1KuTNU7Ocj20
nMCNjC4wAegNGUj49pcPuEZTKAOrzSm3zpv5XP03rbmF66CnwuBxtuxsfiqY+xMRm2O4BU/Io7li
4Gwuwu1KZACIyg8sbK77kwmuDhPFRm0l78HAl7TdnSX1iaravPPspXHTJGLm1exEhezY3BF61qUP
VnGqMp/7NDlOoTNt/zJV+5ndEEUDk+KtfZ+hwQaUhKgLdGCXVONiBpsPnV3mrnfOPUNsM4qiV5b8
Zx0UfAaLLTKBi9Bw0/PvKVnpgnyNATh/DROTqzXv03rkl5pBPrrAWMm4DPQozdWAn5aSJC5Ap7MT
vQH5fIdi6/L4YJtBNEJLPviLLZrXstQByD62OdmSe2SRV+xEPfyYVMWRYOKvsyGpBeYckg0EB/QR
boGJlmUCm62SqHnKc4tv8htvjgSrqL8Osig5Nc5KXmtq4xBb7VrlKzHOKMw7UoTj2oXOW8oSWp5q
bO6Te5OQAQnWzdGPnkmu76uX6xkkGAYcMtknqxqpIXVEmEwEAIG78BbHgsDW/Hvzar0ejCV3Jp5m
VrY587pFuxQEQP7RGjRh/yS8W7bCzr4cDw/E0mqUgLOdG4cku2PzwLi2VTFLeyHxM5+hXIehU8/4
Qz7tT5e4c6VjeJwskSwMaRffbmpdvVhR17D1R0EzXxbIg37Pjzy/OsufHpvcaQAg8tS6pvRS7/+p
YHxD0YSxfiKYG8I9iyzuD7q+/fDrOZnj5r3ANB25aEzuF5oHAMTwNQ+5R4YCoZtUz+DYmnjkCYrJ
f7V+NhzmiQVPtI+x5JqsF8GAW18ymi3qRzYW3rab1lv9p4t4V+yoLWT3YgHIDWsEahiPV9MfNJaZ
l5HFqqd+uDk7KTwRJQwWaOxL8MjhGjG8zQfiRBJxeIEsdxZg+PhyDfN9bex0g57Iq0uLJvOkYLrI
Jw8OtSiNU/hxCwUNw+UnGYhRNotauEG53nE8E4GaCFErAZ9/hdvIkuxB8OLChH23lNNlI67frwAj
4YMBnKef518WDYBX9PWgqBRwdE6QnMeLOB0eDqg/5dkmZPt57dMa1+wzK1PQWOiTH6xaFR/ebGlC
Wy1hOWmlGLLlou8vC3L5aEI9LPib97BwOao3Mqk1q2qrdnIg8NTiTl5g5edObpb8MWD0NcAtHcRL
M2YEcrgriHUybJ5L1yoMr/h5ljO1NxiD+MCWdGiT8PmIZU9BuxQqsrclQci613iP6BK3v4tTUPOG
IOz29vZzoLt9z+t9ISFyBn85FpHu/SYrV216O3k+bMp7pbu7XWSZc7VAph7qmFHAFjbDaKQn1pu5
9rlfj0eRH7X42gh80uiq4sED/+XhuIwdlLYl/UOOnr9xaRst7EuB8fjV+MjkXA/tYIQxt9sdUqFB
rfjTl8LGdeJ8gfC7AzXu/4wiYfEkkzdiqcQQ4ApwHVbyVSsk2/upbjiIuAoAlP1oKaWuEvD4Aj9D
E3DQDtG8uD05wSsPPMJTUzSAcWV2JUlETof1Jl3bgcHCjjGdU8VgkNCifEteyGXImzDmejRGD7zC
QNIRVVdp7KF0GS0iOkDyiAbkUV3EAw+tqGByc8at5qh3fMQdIDFSwL4G5r7ws/cvyfnHAGpYgxTY
PYGJ2z32Pirov9pHtWanFa98lRXoAtdRp+5DkT1Y/GeEbeA5Iv5cpDU0y/BmVuk/70PUZFOGe+Fh
kC4gXttyrJlyJffFWnKi6FwDRo7uC9BE6ozn27xQwVO0lgj3lrIactdjwWaPPRtz3+ePjRIr+AfJ
ZkapPzh5ndEH7ZdxvJwhU+Q0vjJB0IFF43lRReibC0JsCWu+shJPrXWH7iumpL6IIHS9nWY5IedR
B9beMAkuUBFXQvPHpQ0yMRbik5QRLoqdAFyD5cKTeX85rZDKtBaX/K1umUoriQhixnYtkdI7pY64
XbLKNyFtRwikFPKvICno0paokgd/Ap40oZ0ntm6NRDahfsSt8qLLswQCUl1GiaHp3UAANy2c0Oj6
RUY684pILAiIYi2ZOjXOxt6HQWDJMx7vecrdpxaAAIF6Ru7SrSYlFZzD2abko966PDM7r36P5d8Q
hoap5pG7csDiKK92EUbs+oDW3iqhlIPHbA4D0sb3Oia695Aelkkmz1qLKmvRPJwDsAYo52L52qHw
882DwO946GU+l1YPOYRz6YMDXEiiS8s7DXMAOVJjdxVkaWKo8xPNW3S7uDF2KyijY9zhYoArdCAQ
MxkBkNxv3W714gp/b+za+2Ry+hXhVjjl60oSPxvwt33R52d7UPX6WvTK0L/d+868EnHywcH/Kjd1
jm4mW7cesWOuJ3vjOTwHcR32WLaahswpb+qoQ8/wqZg1gIVThoTVOC/W9wzR6UkLT25Y3BgIoNla
UcoFJ38gvit+GkvQ5qirobQ6LV9q3pTuwfhHthAc45qeiW1LL4d24HdAonZ4mPciqGhszwd4GdHp
psTLp9lTqO0LquS+/TdhN5vbME1RehS0e77d7nfesJJglEKY0igrCmdSEN2P1j9Y11JrGFsbCyX7
lbgoFQnA0oDO+Fgehi4ypjE1cmfRfuqh1BNMsLPG6F6CWNd68zMk54yyWWqk9a2nZAmTBRKkqz+8
2Kj0W5ECcVHQU3XU5JAGyGgKhETa+38+XMD4bdPspcFEogFKFX/eGqN7YV0XZzjhwvkOirDyKLcU
CoQdjiRtBr5jP1RuycM7Npdh3MipEnxElDtNPUTzG05kb4/orsqKRm55eSvvYsQ0ZWLdCJlnebNz
JJHXSTdNhaR+1tgLbZYarCfwOdbW6GHrR5TX4+qVsgFvMRauYLeh3pGlovAVpgkQZhUXZJXsXyTN
3MwlRsja2Ps3oGNxD5NV5g2ZTYfyHRKjFIomIGouvUy2gTVkfuFPrMLtHJq62Wwbmb298RYQPEtR
IPoTTEpU0ToS6ui5SiaIr5YVS5vASea5Fq5z8hI4p3P0nXuWxVNg8AZTx4RGdWoOfoWnsrtnOu4Z
d2eGFbcS110fl7RLyTRpLWJe7STYsubilt6JEZjl4y77oIKizUCa0EOauIt3diuQ4SbRzh0vIt9r
6CMC9jg6A585kMXV+igPGFVze7Rm7EAjqFVjGC6tPa160oo1SmBfyu79RTZg/2TgCTXIEM37CYoB
O2s/tjC/YwEZW0eu0ZVYAaa3ncCrdd5sfgISjB8AwXQU3IkBWWiFwB5W8yf+cCB3s/1uRmlGmZgu
2tPCKDvDx10UJM9d+Ly1bNU1zSe7qXZJobYJTffFUVU6VHgR2bxj5mNYsjim4Pt2AJPgKsFT/NKZ
pGZazMS+gMCB5LTqLMO3O+NndS1Nch+9QQf3zlEuiWssUfJqdPNF7HUHCIG7LxL0ZoYb1BEqWBD3
YkJzV8iNa3/yxeAxZUdtEXSkEOMJ1FWOUpftJaV1o2EMJcORJJF/z+49c8FxjYnrQAmEDD23tLw3
8Hoae3egeVD3ilEepHl3/0mw732wZoEArxT4H2/L4G2l8UEsbnTqfpUiVc195rKO7j5ch8B+S2TG
GJnliawIEzbQfGLT3E3cPLbnT6fyUh9k92MFbIz4/2R5X1fHr2jqQ78NyNDsoHZV6eljscBR1uV2
NPrKf4pGwVKVo5o2kZC5w3aBKNFZHCpxw5g2dpSz5kfVL3hCDkEftXonJg6xyMsJTJboEAL6Qbip
+tAbpQM6QuExGpiesd8F6pcDdkS1P0fx/pCH4i9xykEvceD2dXiEuoDY5wiTcXm/KqWeH8McMjfs
aN0+1NkP3/EI/RarFHiMEINkOYD1aFD+M8dTQlJQyvct/wV6cOXxV22gyeFLg5Y4UvULHcICkn9P
iih/laxZezN+aW6v72T2vlWd+fm+aOKohClb5k9JrQ6LRArk7d+amgSv8S57426T09eui1jzm+c8
xF2BfVzaZSSwVmR78PU3ebpGSBQwiB+wT4YmPXeqG6BSaPirUTJ/GIAQnHoz/H7g/5FoGNrEnKDi
PD/Iv7Zv42Bz23Hyq+b0m6cGQtLtzBAwyycUKpTPtdvOgRibot4VSaY4mQVw2jn5KYLgRXXvoDwb
U/j5z70MbpI2B1lzCYphCUFnqdiLGn0F6kqbJf4sBq6Ljs539GpuSfvWf5tVau6K4vpLjdweo4DI
pH89jkL98iq6qCv+ugTDF5jP1wmALLVJKc/eju6VTbMhf5ilHMMqaQuMwt2w2YapZBLLXY4lYsTc
JJ0GeR1PFGD2MYtSidb1KnJIhr1a4a0rmcEJF4j0DKFRzyCY9Rg37YNHd+DCvc68URim09/gStsq
x7EiTrFPOym79fELnVazt/Sx3Ng57wmLzJt0/AW+3R4H16lZXXy2aq0nEu4YZHur0gA0xmqDVRiW
/P72eJfr6ZMBs0+h9D0buuUVLobnN2ezoAI+/LQ3IYNn/DIDEEMjhsu5JpAMpHAMY/SGBadbbYmi
BviGMR8jHI2jFPzn4+sZV1mk4D7cTYhZdLoHcNvIwxv1Y9FnNU6WDtPJUzTVQE+dwcXMeqmyNWTD
ryuh898hiPiAovngTTCfE/4B6SMPOOqqyPHxXrBYplnJdaLEnavGCWCcMN3lP/X6zXtFcNLdloIT
b2jFff6t4u2nMfss9Za206q72E/3AvAc2PAOGJ8suxsiXbRV8NcpF7MgR3IYeC9gVw5lerA82rNb
xyUYZI+N950sj6uOvIAgQo6gXQOaYejiaLCi/qNC19M0O0vvvhFL1c2x9r2/thIq0vPDX4KjlyFh
Ym36Moiwf5d5YGCqoD3GKg8iQk0b30784Lhc2ojsySKuKIL8/FMot8K7RIaqaA0OkY52HQHFmtr/
duQ3/Dj/DNBuvqfrQY24A1STRn9hDdn4hlGGBSUgxa5Dwq9ObP7J3sHAB+Mf4ocdKf5MDVhjRx8i
LisNFeuprtPv/PMs2ybcp5mEHJFJmz95eyapawKWoKQO6ZKe5WonN1wq6S4/7xRFetU4D6XuaU/D
4+mGWgx65S738PqERfpS0LE7CV7eV01jKGMtv2zrj3T14qHOJum3neQPfQWfOz/QTv2RL9SyOFKC
Ac5vyj5ZKbeyilO5n75GpI01vw7tz5Q48JqLwT+HR62m8qXcKpYX5IQ+L6Ec4Ke0xucnHY8WwkBm
0N7wJNNrMDNxqiLPbXQlZhj8KbJIKdYw/g9NB0eczEc/OVfA5uGkYtTLt/v8uB4lmB21MmAdZXUa
3y9272I0MUXVVTqFqJcyncw+UJecJ33ye9VsTO/iUuuEzjJlxBuXbQPRw0QfFqITxawiJT1aYV61
Dj1/mxFNJ8teXdSMwT9orNofg74J7l0L+2/OpmssnJjeyKDeTZ7BVx8Q+YblNhtzgQ3osUwV1R5u
kYpbuoJc1c4Q+3qmHNAya+jLgC1+sY/vMCwkTtL/gqAKzbk8EKyu8FrQYAa4DkTdNVy7ushYzqcv
ij7yjFuQJrwKzIp+n6ZNPJ6s1Zz8wFpAEYPod4VrfbEm4YIIg0SejTNf1rV0lgL61QaCL79LIBHl
KCihqd/+liqLZwJwkhA68MYl2OzRg+SthMdpPr3AQWM77dDP+JJ4fOmzeo30lkHcyqlhAzOn5oT2
fDsMEk424m+Hczzmw0iHzV3LFY8cpKoRI1LPCy0gU3X+lNNUq5g43sXCIeSaKNP2EA8yFAuE8tfY
6DoyzoCO5yGJgFa7HbaPIlwJf/ss6iTRh1SbxRyun6kWuNo2RC7u63hvf7Dh4146RQqCjbwxymfz
Atu4AolZ9d8P2TtxnQNYKkJfFvZ+Q9yuZrLGwE36MIFjZfz7C0HbRWe9Pwhdai5lrdZJrt9E2MVB
Hd4ZdbCZiYRztYQTaWtjtimZeLi9VU88SU8/vC+MDTAaJISYQ14WLRL3UHLsrry306yFuIQCDoyE
2aThXIkxrD1Bfgivky2I95ckc6dJPi8DLtGSYSOpIp4STCMJG2u1yQSofCkrowSFtR2iAd4wXmL/
9H1BYySFx/ups83aftbXQio5bs8vnFJ/zuF5e0arARD2xbAmFRhDc25zQXynMa8y2TR7Wt/WzbYV
uiUiydWt0LawjeHAAuG6vW9pC2+AycwuuiDfYyXWgq65YWtbATIilQQ5SNLZpJGxINpR7yt+mkah
t1gBD+/C3cxnXDr2SbeZrryE+sEUUq1QUjPlnriYQHtC3VBV4WZq8ekECthc2tw8K1P1LbUyaiVa
rll5H78WNTGFUvcPLsjDzn7QbddJ8llGl+jTC68iGZY9clNdd5DoBwY5RBDNCiX9WMVI
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
