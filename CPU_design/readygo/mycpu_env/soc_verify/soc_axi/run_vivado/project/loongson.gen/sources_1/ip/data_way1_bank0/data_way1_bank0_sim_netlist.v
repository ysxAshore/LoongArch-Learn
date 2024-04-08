// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way1_bank0 -prefix
//               data_way1_bank0_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way1_bank0
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
  data_way1_bank0_blk_mem_gen_v8_4_6 U0
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
+XManq/RFQWFu/WR84pdJdscPEZEyJyvAC1jbfcpiVVFS9B8liqNJV+5ogkxFUzEtebZTaE876Js
Ql0Lb17rL/B5VcAlHqDt752qxD8SusZCODguYoRM83Y18nGJ2M+GdUCOQyyZSBgDuyJHoLwOYn0+
/V/K3k/6FAju1zYuvEizIhno1ew2LOWlDHYhsGtOq5DPk90Xp6Y8pkTzhWr/AUjB2ciOTBotXLe1
eCChXIsS96I1J3r2psWSOPWqwzZlkGYPqMCFSTRmOsLWmvHi3TGk3dCsREpFbVkzMRXqhbKxz0Md
r2nm8AW5BnqcV+LeGF6RWWm+Je0hjKrKLwEHidL6xn2nBidVa+DfFDnioSLGGcl935Bea/lQ9oPX
segdnCKCrLfBmwgNRbN+9PHRSMGxSYs6vCCVJyGvZUQO7trOgwZ9hJtfUhBQmYZIX+fhBB5EzLMq
Nk7wlAqRCnOQfY2xeMSwkK0yWg4vuIuV3D3M0DC0ctQc4vNSKt0Phre0Jyg5KUnuJ/irzq3lz2gt
2biRG+yWq5MqYPBkbTo2JheiHIh+4HC1rwvNFYSjKzpQxmDMZa4pkktEOu/74vAzE+kMbOjDpLl+
adK3a1ljR5RGNHALI9GzJ3XZusRhMAIpk17Fse8hkBNuT7ULnY1ejHUpkWEwk0vkB8hniw4lHvf5
yyZAgytvWlz2Cm/bOsQHDLtJCueo4hWsfLZf1WaC6H+DcXA7SH8aAdSgMrO7QPCmZ39lgPmS+CTV
ulPeW8BncCTk1f1Ko/Y0Seza7eCzlL3tYouEC2HuFP4OPTsjldKdUy2+uHDzyvRkA6oQ2I9Pn35n
ystKSJXJR1mUxLuDGtBGnt2g6PT+/6gTMJ/EirTxAlExpIa/+53R+xV67wZ60RybfNuqcaCUyXRk
eRdKgWgcrD/wkevnWZ3zZUPKzmxqXYcuFsNygKNTASfqf8oZhdg8InqRTKzRJa7dJVXwHel/h9zo
E5eVkSMDPn4NsLVHfdcuYiApiJz+CYAGGmcToIz5Ort/4FzfCtcqzbPhqbjv8g+wMpmtbvkS4KrV
LnH4vk2KK2qS5pe13uaYL+eFl6k5jpQSWDfoIz4HdpN4TeW61xbjeVj2uGDdPLykdLCfmOOvn5lw
k5WzH9A0f/AUrO97ici+Cc/D3uGb0hHjfSJkkXipWJ2PVd1QhxkkM/I5BQcRqXoMgKxUIvlCLRoH
4nxa8nRmdiXXWwggz5BJas0vrQZ6hytQYcA5BEhmlqVd2weyc0w8ydHxzd1j4qwXDCoYd9T5ZL2r
mZn2UWwPV8RCVuVrvJgEKgOrCYAq1+ZjYTRtrH95kCKgf8aZPJGNwgfbL+b+7PthVChsswKJqwWu
E/bInGwJ8tPzDqb/7bEqks+CwLYBhOUYgq0Tl1SDYeB3lf7AtUy94g6td269Rmm+JZdBGj+9oWJa
P+GRxD4Ko8K25sCjG85ZdhiTwE+9GsZSUS9GR0kg0anYE0xaoUr3mPyBqGc1jMTg0WAUBQvHN8Zc
8uXC8tiT5O/JqRnEdMsBbGHMri7aDDs7UNhoTNA9ZzGzktiRx6uAdap7FG8GO3v3BGczfIVJBDy7
TAcCLCotH8FyCvefGpVSLwUMvo3lcL4ECaZIeHlfPW2kRqAXkfIlceTYMpUIcCsfwLiiKPSpM0Dt
eiIGWWgVQWot7LbiRe6mt9GAmxy4CS+Y82phZSm7CXNAHIXMQmgmVtzfiFJ+phjywTH5RcTZE0/D
lGOdNm6gP5LyO8QCf5DZpAr+E108cejpHg0JsfVYNx21fcpVV1D8V0tPzWO4maCnlFWO3+6As+ag
tJS+FTBYdL0uuyokn+8yFOiw4cg3h/1RBiGSuVzoLp5679uFmnTRxQVOy8XJHZ45fBf9M1nURYca
5rTTS9mfcO7kn7HPMOiJrPQpRDqsGwMGs22sAPzpYbDw7/czwNoM35EhVy1Cn/+L4Jfs7g6CARzW
5Ua0cCXEAZGQLPF7mOl02h32QBVcqp464OcwZX/B0NF6IYqPuTA3NMsGfy+/FzrNxtWLMv/mQVOH
5+ykWQ+YM+6w7HECsEXzOlQVjmOg2RWFWfPo8xjPGcLDvqziGKb/xUDv1SBtd0VP38sQOBzekdnq
sLO0V/3/6G3MrGEI34+AlZ/hgY/i/7hFDMCkd1EV+nX0PY0iu4ZS26b6L94uq8XtBEF2TXov25K6
armN0oGxwxeHBh2B63GXLZbUaKdgvcrRkP8X8Qs1QLVGJo+/LxntWC1JPnOWmcuzx/Nu5NgcIxaA
jre4eFJymWZ+zK1wuytafjhldLCFkw5lxCPUXU3BNT3uT7/QHlWON5R33TY/ZKp7KIaeY0xNzQax
CFNorRu5SoqvXszb5Axkqgc+7a13xQlDtXNeYt3QGPKu8Y2jSOEpXfyZfn9o28HFFdstCtQY9z1L
6rCEGOcE0S/KMGuGOJy7gH/mbKLCzmjGzIWrUTyjDwSVCJdZops1ZsQSWK8LsHdsSakv4fvrSl78
yESQ3FiPG2POnXIWlSvRPeUviKbADhWkoeRVGdVO5d47yFkTbWZwJGOZW101uh5vc//RYWcG9fu5
2euHIG2g+YXff+2Zrw2Su+hEDym9fjOJ6PQOrEa1BuZVdaXVONFxLZcE+BLsO/0V6bknJY80gL3K
p1Fcph+IOwydXlogJLQIpGNpOY7dzte1Ilgpi5Sb4cXiHmTSWh+VFXKgFihFHSH9VrIpkTpEoGV+
o8HKC7qdjDQqZVAeURmiDiKfgV8O30boE3/6u4bfO2n41Kd0uh6jovQkh/H1rzrWbbhsokI7tqTZ
NeyVNoyrDuXhG1D1yl6ezcxrcLYCfso31P0rZEV1+P2BEOfjNxAYD63jZlr2nK8WuUzyXXtHJ1D9
rPVTqc4NEknlFeCj0F1NAsDjMzgC00fHIE61ZaMIrF2P9mIq8ToAHLkgQBUNjTWuJET8MS3pjneZ
8HYORp0lVIommSsTcAbrGEEW5jyWaJbWIVmB1zuqkYaO620JqPkc789lMRNqQ+Hkwm+d8WkTN6Eh
4QcONJ8AYeeoa362CHqus3ZGUxSwXtdFQLr2e3159oI1rerDjUKV3xQ1Mcwwmg/PQODYr3HZTEpP
F3YxolQhxcx97rasGlTh3vK1TlGjkAxIIMZfnXBW02kdOhI1caHaxABCMkh9LyR9WdITVlA6iBRe
GXyzHvllNyf3r/htqGuxVfk+skP1ZX9ewiwsatXZkaHkkP1jEPZv/u+SEsb28Roa0R2qotApPtoN
u8E7R3ijuKcj1z239Tf/RBxJr6dp96ZXEl4jCMWwSzgUC2du7XWbvk396/gN3S7jWgsVRFOARa0J
nymIjy6+d0n7zKZuerhurdprRGKnmqUEi7vB05KpO1g20G1wa+/wA+UCFEbLt2XgRMfefjq0VmTr
q6jc9WXZguuTknn4J2y2jS+CnvnVAGpwaG68U03RN2mvoXAfAByLsS+8S7BSLcNzbYAXA/MP21YX
hsc4D4MNJtYrkH9phw9eVziDcjAVimYachn87lLs856WJ+VLxb/ffH+SaIwSxv6Iq5gl5yMzoWx7
2s9lZpSRBra2PyCz0rhXL8oQwGvU+ePHF5/rBTcf4xklnmgGLXzFdQx8BnjTGzRipuSpGChON6yh
qoNSJVQK8RkiRjVLktr6qGUNfFOibNFjJzpbvTBMqPg2vILri3pyZbF+RMNSzuYF9GcJs43wXcW2
vkGkBw4wqIy20DbTFupYLskoZDjrmiz5KpU3o25nrK6bM3JaYhZGHR2l22CzkqqDTJs2Sir3NrNE
cwGEnq1SdXRDFZ9MISjEchlTh2J+csSTfi/1Ce7bkrYXDL4NXVIc0a2S9bLw7379d2exY9wL2Twi
T4Ycf60ePy/1N/ik/1C/V0JN5V28NTJv41xZL0vRN8lYTGAltxOPw+pst8I5kH6jOGdcr9imhY69
Q7gfxEu+d8WhqrhrdganYsGbuAHULruJSKEv0XFGnHRNykCdMD+PH9eASH0sHjmx+6LzNc1BiaxA
vls2vmmBZPM1npj+un01l6ZFYZU/oI8t03ZLtIhtxHgulwpl0YExL3KiRcDNWOsg7qm0W7g3cnLh
08GAYDJIbkI3Ec7PsrZdAk9KQ/7zIf6YU1lsk7QwM4M1fK3IwGNV4zN0Gzm4bOUYZrce5/5opYma
OQHziSxLQ2N+vTpPr0wzm2TXm4PcLiYWle8Hvm1zO5I1h3NCzgasL3pLsQUcpwcJn8O4wSyxLtJA
qLNqodcVBYFJWKI4qQQxUFHx7DgqN5VcFO+SQNYErZsE8/9Exjt8E3WoWso7S0QS0QkiAv5Ol3uQ
Ktcl911ru4JKDJoXMEAlYbTEX9s4hXPotNwhSvqZsd5eXSADMf7fHyvSvdO5Exq142AEU6R5ZLLA
481S+vJ6cVmy+Q3neI5HLUdTgeNvY8azeoi2z2VqLHG8KVIY/kpP44tC/MnHGKnNyZ1sln9P7pxw
x18XZFVCkp1wUP31e6Zn2Z/Cq4GuCWjtXfotSO1aJ0+QOFLVQNtnbenyKcp3fPrzHT5h5KbZ/ofi
0pMAUBsQr1FPtiJo9/BSlzsLDjTd9XhQMLxld6YAd4qbyJgLAAy1hzKivWZFbBUGh4RIFA9faV3t
kACkjeJzq09Nn/B3VVhCoXfaXnhh+0/t3Y1pJDOQ8ysmFvZhmt468O6bp6icl6W17BAGIo8PwtA5
xVJSf/tJcuxJubFgL+Yo1ijtdrqz4r6okAej2zWgQrW/KvmAYGAkw0vdrb6CeZ2hCvD8FrrJ5D9M
YPO5RM3KavulVD8zHBE/4lyiqovCAtFnKLyiRxYTSbedth30yqFMqg9YAld/M2RhCIx0hks+w3EU
g6oyMozuftJ4dQqUse/1HPpJsbz6RDljk7aj/wU6Tyxuq3KDPucF8Ns1QIJcNIqK+vrASr0Q0dE6
IV7LD6qchpdAggv1pRry6W/Cf/+WdAS4WSln+mPSaJMJs7S2ewVCu6v7QSDy/IhY+ry5n8nfElwR
krWZ+K3ICTFX0v5xKZdUSgJoJAujeZGH4s6pgnKpusV8/Zsc6lNft/+DBBuFok6RZIgtADvMmxA/
vV4ERa+HR8YnyCmHOvdsg36veUTDEUPbec4g825xraLy+r5QaU5yEpVvpUQETn/32ikS0JTb7jFY
IGNt3+q7ejuxquRKdBZ892vDrJOKIRZHAAEejsBXVT+j/ySQb6MTeaoLkSZd0g6zdPpcUxP3uiN8
oPOVRby3nGXQgLLODRVdeYLbPUNqH8P9EMLYW2GWozyVW+AgQpXbpQVloB9tVrhzNJCbQamlvDYu
1tsldJB9yNlTVdLQ2+iry8WCNUpXfOa8g/89WqDSsvrOF4pCiVKmd4nM/BV6Hycz01/gtUm/LiVH
Jv61IGjtMrH0du+Y0PYZ4cZUbTW8x9GuXG4CD34j5BVlCgkRI5i64b8FyrKu3LNb10i/qFM3CfOn
vfcUKWBwiN3rmJxiRkDKYnxx+lim4KJER3tAW7wkNNO6Cj/yDggm02dvtq9+kZR4Hsf9M4N9zZiJ
NppgHmvKnfoK4k57tXb1h6h7pGb+1vb3bUXggNB2iF25mffCtTsGRt3YRkiMkEyL4HdPqztbxy/L
8aG4mRXu4bRsOFfZozS9ruNZXzm3qyRvN0Z4EMbqoFsm02N22qOp+amiNOQJk8yyEOC+5wRWtYdD
ib2YkmzySMhPMZiz1Maoi7TZAzNWH5d4o6ocxxzKEXm9SiqQCQRGqtHjN8C34kYUUYgVw8cuGP/Z
TK7PR0dseW4WnsYNsGwvNmfxgFB4HomfuHbFB3883PJFidyXZhqFfoGOCJAnMqHyi3X4dptBBv75
GQeDj4QYV+PQ1EvKB7eyBqzisvjavzfhqBzDXIP/bZG0h5zoArRzd6u8H7qaG4XUmRIisb5WPcJJ
6MPLpn2toioaEDxHD+llyvSEGJQ5bUhN0OUbhWahuy5812UA/PYtr5Kw7aCkH4ycJuQzGpsjnIGI
xwU4NHHJmZJ/X3aIcbj5BZIHcBeCFiRTSRog+pr6At2rWwgAsfC8qJM5OomWI/Sjv24EAhjrUY4y
FHUu4XHoJacVpQMznIHukdpfoyi9jqnclaw4ApWiqDdvSOixbpAVFAcqb/2n/u1RuW1pZUL154TL
DBI1hurzPgeP7ZYkgR5tMKCcZHIQPHQgkYFd7cWZwa0EjNv1mMMVmfYOfogijzC/A2jpw0d1etXX
2SNwxZuZQE2o6cIbxu8wgDlW5FTTu0aWrWo1CL3KBb7uapv99JCvjYwXu9MMC2Q20yBMp6l4y6f2
G+6uCo7sVDxnIXXoAPPRuqVUKqualBEMVOARfrDmGcwh38ZzGrv3EpI4JS5ePgdcV8cnpIR+8tXh
+9JExrChvvFnnx6J1DnwOsNHCePjv0WFrJFZixYjnHiCoKGz4TRYSeIC/cQic0d4ObSVUR3HE7pP
1tCMemX5rvWt7zGysalhvUbHeO8EuDbFw2mhgFeJyn8MG/ow4J77PKpRh42tO5osanVp2AckuH1q
zs4YY3i3FwaPSX4HgjrpsLEtn6LFayUq8vIALpq9Sq1ksnOGpJy+MfjKjOGo2oWASwj1BlAiB5SZ
gMB8cTxyk6GYzbftXmvtBhuxIK4y+RCyI71EEiqLeYZSYrXrjZrladzsfowBV/S6pwosaAWGOxVf
pFmm3gdHHCDIBIiTOTd8IZvZzc28n1r2/1jVy+HXrPg4QM8ghA0T9LMB5tpCA7RLGzNO/+vtUyUh
MkRrrMwuEbjX+TYxQTWEwYAilb49lVSJoBfYdv86jxbdqdq3SXzX7ZZ6PXfbragmWyk/Wl2juHwW
QBMSIB8fl4SW5jhkefFj9EO1Eb5uxCQbgf5D117XxIOHcJsX5z2Ty89dWGEAjDRmO+pUVcag8vnQ
VNH3eVjnoqrEkdjWKN+gEQhwpqrh+TGdsRN6lbeAnhp6nm2055KjtVH5Jmy2RRVB97peIalBvfm/
3zQpsQWrgD8cu0WA23dXfoRDnmzZWAqLchzvnu9LdIqoM/AtrGqGNI/wK/mpH8CK2E8gmLE+8GPq
aNPIe5FRZMASdupDEAmeeUjbV1ul+s7rwTLQUWt1c0RIOUSUeWfZVuZNucShCbX40NlxlSJ6ZoBa
E1xnpDGIHHYANWVKoxdYO3/XymYwO4QapdAD9nZauEPh+JJYtpTGL1ax+xH4TDTnJJl2bA/BCcVQ
mP5nlPhjCrB64frZNAF8KRzpknsmnckT66Xe2V5Q6dN77/ZogunNNOXyeFoX9sQ01tPOp4LBOBBB
Inhp901AQ5gno+h5uS4o6yngglrP7ZZB2hkEHdSNdhZFjopnPjcKTml2m7N1jY+blH5jnaOOBPdz
umqU1S1tKUpGuXHJxokgRrLz7J7VCqXArlY1koZjmyh0qQmlezL6QSPgwS/lUmXn93sHq4zEhsSv
sM3c2VRZ7fGcm0OHBZGU7DLTLzpKmJeMsXzRrnec1F8kLCrz59XdVd+0gz/K5uUpn/Z+S2LMtA6z
oSKM2Y8T7ED3XqXPCsL4sQ5eoBUm9F9qa9Vt7EqaV5E4wptRQBSReQhAGJMtvAtv3NS8EwmGUGPg
KBo6zaUQ4n2mN/loa9h8NLBun39BIaAHAxDXS4GoT5bMKoRV5OlxwHoT4iXqHIBDihx84iOgsjVL
Y9hGkrJFELDLisRDJqNgP71ZIAbTceDDgUf17Po/oUQz1QPoubcYmuJ9KbYVzxhLILSbGrjjS3Cs
59WADJhhCVDibYRRQFyC9SgBDX8bhRItomV6kOVmAatqFCV679MzAWcD5o1ECscKrEAmV+7hXMyU
lkGZeRERr8+nwnQQVVp3jBhaRxgKhiEYwzu2umOHiJy4+7wEuMjpUZn4DSa/PWM2eD+uLFfnORfP
gFa+OqZlL3darC6HGUdhCI4b5td28A0eDYHfwQYviNBMalm6hoOw2HGXtDb6zoINcJLciZRvKQU4
pTzxiqr4nPqlUsjDhQQM/rhXFyeLA1KfwCWQvBOWnepVjG6qU8cbRlXpqaB6lFNpv66lJ44AOOCm
1lVYeuQN/24HXfChL4TxIQY0d4IiTmQiC6y5z9gNr5ajLEY21gpP26kLRLIO6HQcYYpqqwqTnDs+
J6ymD5LZASV0aDO4lJOEo9tMkKbn8we/Qs+pEkX7OX4EMlhLMOjp2KvnLRr5nvHKMgxUYM6cXqxH
054Gv9OEnvuwNOqd+IaUzzrxRF9fpXsVqssR01oZGzEGkJuyf5RNMYHUjSpYeXsbSqw4CYlZmiL/
RxrolJSGi9SFA9k3wbPcvex0C/Vfw7VD1WHOiDdZgNFsf2DIpRjU5FSfslIPyHu0Kog6DL2+eo/b
3EgPZlKVrxZmY/9bbiv5ApNr40HbekNmyvjhvcL6GfTAwEoRSVV3kr7KmEo5LygmCEgzcGXMc9j3
/lobnL9CMp7RV1Um7A/9nPg+/eYrimcXvm9zKO32wbWGbFIj4xY6ZhSoCQq5+P3YbJx2RilGTMAe
JfeiVusLG7w1tZAI15+KWm4dJpV31dvmSOPiFf4Na7HSJxlUFBzFUm/NTleeYkVBhlNipdz8vt79
gtbHfaeHLRZvPwN245LyDyNS4r1MAK1uEBdi+8Uwv9zhxHoMDhrtnuxaVyg1ktVeOlrpGfcnyaBf
WXYFwSUVliOvlhcXOQM4eRYqM/6GpnkXYe0EQEWZgjdWUN4lirz9o9zabBqeadEKDVHWyqRNGRoh
KjtX6p2dI5mz60Wt6hd+uQDS9+PHfaPDDf7LDI76sTbd1RRERmQrfkDRBRu3HjAnN6qvC0knZyiP
HHF1/dqXt5iiEFT8XBKX/M7j4pLUp94+rpjmL7gfv/3s63eywscjMhoh9ym8FoFWHCcQHUrz2+xH
YSWu+o/O3IHuIs7lmkwc19JnOOHLbylPLefH+TWY1tO7pofuYwshSZQX3kggxk0OaTRCV2hfc9ML
SEf6vCU4oTsSFzdQk7Md1zxlh78yVAqamaKMu3wqFyOMm50nRnF/OfWL+TTwxpo9ZmQa6gQDov3k
YqK4nw05vJN0VubikGzzr2e545uZ7NY8RF6i6sOxYeIigrEC/hFdyywYZuf9ya9k6tuDGUG8Fg0N
4mkdZSCHzJ6hh8t/FnHVMTggJ1fu8RsRO2Lx1bhGTtID0dbNP8DXyDflTjtdCyyZ6/NAc7UZmXyN
CW3k7BJQQZLFbIUzUjgXg2t9skIwFoGTwy1QaXybhmMzVzS2GhDttw/t8ihS86XCqRStmtShdEyV
XN2Nqqr32PsqwnjynY0ZiZJuQY5DZsUbZmn5eeo3DCVOZTfVRmuiU95OAA1ld7ZUKYJgdP/+12kw
cg1yqPRlyfGu5DdMFNVaTefV3pCcTp3roMX5eurpWJssgrffMLByerX2L9DS7PRlysGempodFtIs
er33LUBraZMQQiJXYUFgaj/OQ2VwBltlXHO/ATuYUYYUjWCFlJzhPS+0LBEw1wwAdiCJHT5/WmCn
QWrgU0BUPi8NA0aM36KfSEEHzuB1CzGr7nhI8k90onZoipYs/uDax/SlPCWnEOa+rpkRx6r1BduF
3DMLUTx0tOs4UzTTrQOaV5gJduggCazyalfPCB4GCMuq/d4IVoZdqH631Mxf/gIXhA7JLjBu58/X
SDReK1qW86/M7xQI2kuGOt1lLTQo/Y4KAa6RHmlS74bXch/6oznUwbZQzD0JXaRMTJQYDndtx5R3
mcikpPVY/aqSpT5kM2uGY6jMWgGXjXudztvrYiasLxKELPsz1c73yfdLNPMwBuATO9Tp7Q5nXc7B
7Q27P2sb7g/zElSlFB+wsGjGAtFea4vrLOwfUu/UYAuky8aFWX6lg//uNHzdbll3TcVokzlVxigA
scDwBlooF2pePYSjR5MUeZ6MQ8Cqp1DO6qj1kh21a6Ae2t6kpRESJ0qYQUfz3NKTJPLs39wXU4TO
fBB7z2JNL6HHe1U/aLrq2Mn89ZWM7SE6/BS1N+XoifbAcdR1aZK4zwVkrzkKT4CM4Xr6J056XRvG
jXHsyPund0u1NrTCM+xJICucXxNoR15T90RXxtXvzO94CQIh+PyJWhq/KGSPOFcqUbYmhKYk8qBF
gwrnGkmUHAjIjqFv7tYTGdYFFctr6Lpb43q+EpgrvPRwycapOTr+pFyarNIA3q6WZfd4uL1Ej1sL
GbQ3Il47dT9I5cN2ggr+DEpnoxG/JGuiJmH9Zko8kZIv1MaXAiHs0c6zwiNFQ2ME/TTP2LcpVpiK
DgHRAwnCbrcI+/umMHJrORXDoXawMe5N/ocbXIy8Vat5+Cp9g8LS/JS9e65r0HEhuaMXxuyHOStp
e97POpjZGxUJkyU2QlT1RsQWSAyeLe7ZNuWE8baKmNzN6M57JR+lWnI1FK5QGhpTl6sKKiMW2GyY
4AU43xZQhxmpK2E3Ayl0B1Ky7g07B5LQEccs0sfGq7/wrpPP832VgDutx8cT+1nOe7nqiFLzxyqC
YbcSO0L4erl1jhVVlqpQ2nSeTzXPN2oEPf+kj+YMTppGP+0ghPtP7e3PBsDDzzBqnHvncN1TXUn6
0IzixzP3eoeQB9Q2Crq1D1fSpRdPmNs+V0XAVwf4ipdkNrxP+JdNGUDq4LVPKdbQmhVMT/i3d2Bu
ZDvSq3slubVwaE52I/f60mBVar/+BHu6Xsu3cp1QcNi14A6e98WvOhddzIiv5Rn9N2BQAz3VkKzB
RGfV2PeMhrXD7g9XG5oiNRpqjSHiP7HknvjGgKFUWcxpQ4A3XqeqDRre2Ngr3xGCe3ZxIFkFAum3
7wFBnGXPJzAfuuPRCDRip9BnoOb7wcFi+1FgFUS9qDVTr3KOiiPSnE5L8RwtC6Ws8+YalARYundE
ULfaP5aGK1iaVr23+vVZ3txccCTDB2FOkhG0PfuGDI1x9OvZbh2BtmOF04go4zr330gjf/Link3+
38TaH3y77/NC7d5FwQS7gY/xHpDQ23wNeNM332Jq5HtTDjv/x685scInKOVvQ6PLJL8ygDCcZDUF
cR98pvDssExCYweVY1VA4m2z5YlYhRpDxDg+REWngNCjRwko3qUadXrMGuXnUz2AjOi6gaba7ds4
mdA4MG1IInnV1fdhZV4a15Wozdx14LjEa+qOTQH33Fn/Hqca+Tiy/Xom27VLZsMLJrlId59r7lDq
q38K5Xy4truanrdS1a8KIosEnYN0I67ofaiH+g/EOAvIUI+YKeTQZMqYJsV8hx3juJyNg8LPeOms
XIUkklUlxdfqLhCr2qI/93IBKyVJwph673OLaa/6K915CKTYldWwp80p21giF1kYRqNYMfJhjHN0
2TQsY2ZLIkE0Ca8eLvXFGhiiTVVlULWnUbdoWDdkucu4TsDTq/mIxLFbQ2Ten4I/a64sROoLtauP
ovzRSjcK9zy6ao7EX7d3xuyllchFZwGE4xkiG/lvng7rPnRfIxksrR2OaygRb8V1DJN+s2YalRcN
/0XZREWcSo17PlrhuVlDEi6JZ+ZNl6mmfxvYYT2kNZO7of5RcKZgj+WIT3oo4Xp/sbKuGFoMLUJy
KiL/qHDfVLT0Yuo2iwY87dmmmH1HQOczk6gyqXayRs7OmHHhifodcCiv/zfbfRk2+gXUq+VwEBsO
TW9gb1LnXJnqVKcBjsmkxT5kpiX/KU568Q29AEFcACjxTcv8EjZZIBZqjnPI+V/w9XJ+6mjvXvjv
btOIGbkJbgfFkdBZf8m9ugDA0NTaEyjzge9bGkzYso2XOmrvpAgcUprE+j2oQMz6NhT+JI+nGJbo
ClxmxZu82UhoxyiIfikLbvHDEpTNFx/sNgaIwfXct/aQBAdRKzrrX3sniuxkzinLnVZKFI/6UD5g
sO5kwoLsqjsxFLkN++1qn1tcAq4LqHVHQcm9tq3ejkWWWz4+lyiGE1RsfUzHs4fjKFT5AVpeWFiE
AO+SFYpXQvGJPC7BVlEqxfMsW+jCm26AetPeHHS4zClp80PD78MBd/lBKR90t0FW0KZ6hLHcZE7r
yTFDd2lJdNzue15qya7sK5ieJrq+znuVP8Q9YrblGnMUdDITwE+3CrqyTnVsM1/Z9fqUDMS1IpZ+
tHhTSd/DH65+b9rrcN9GnrZrEaxw/3h/1SvAU25exJXDkNAK0wXTwkqg0c6UaQTMZzx0j8MXbwb/
WSaLXhqSJ5GFqALdaLoA4b4gkO/Kw1DxpQe4KT5K0ry6qMv+YxEc8AhTUqGE/X7Y03P80HPzwQic
JEI0TUPSltZOVEN38yIGA1bLxi9aGHhwh9nO8UbtBZapm+u2K5E8UL6HPW/DaHrQ6ooqB5KARkIY
Um9KbmFScbI+K0ErWJslSSgoJLRnC88DIi07qdcEmeiG8A6LhLrsz/oCkwRPdXfWMG0N7Y3IiHiw
hq6ZH7z1SfjWYPFhfLDrTb52x5/W+aOAxBb47fnVv+dgRnnceEZrOSPlecMmlGvXHJP7wxh4dGDb
cdo1C7ApftD/RMuXcy4r9mpQz85MMdqfX/7aX22AV3PCXM2loZrMhLaMQCR6/a74Se5jhx/YW79H
YJZ5dgfxg+KNa1NWRt2HXZlYy4+HMZu7cXRu68wyVST4H3gMJI9mjTpoTnqfPouszLULQYfqw704
EX4IrNSxf6VyhI/Ya7xcJAD5upMd/jzBstWu52yWkxW/iLk6yavRIh4Rgf5KPZ83fwW6GgE620iP
uAoIlRZtTm/yRM+G7iRnAiFtMHAUCbJqmPMlv2kjjb2iIq4L6C3Y29UDuLSETkmr/0d7OLalMyWZ
0QCOryDP1p+A8B7NfQy7FbBj+pIg1l5KxaCwa+pCfDxAxFqvevl0yjwPwGbVzo/BjSqt4Oiy3T8F
zWP5TWHvw/cNTaCwHgEgwhNt52hELVXLtcewVEvaqbQ7zUlc4U/IlKy8y2Oy+xbqHhYK22C60N7h
TxrWRajLYRZN/vy1LSzRtMdLiwvUh1e48aK/49EjXxLFC/ZqD/0V50kUNuQTz2blhkRjG1L98VG4
xxgG2W/BvVlxJct36NVv+/BZX/eYcx2Zz/09p3edI1jYuErXU1C+mq2rNaa9xnqe/NpH/xr3WxtA
HGBCkXN7SfrMpVDWsuk7l8g3ooBwim8EnIrchThkAAZogrStQBQAa+ZMEaav0gAgv1qNlBjsVBDT
vwFTVsEWMqnmyFXxC+43Lt8Ja6Zl1/zqGtRaaheoIvsgttHGNn32f06uOLy/FS9Z4ZXaU4xXAdhL
Vwl3X44JG3rJsK0P0q5UopGKrCOwYcT3UiubmvZoLEIpse5V2+P/9bxhPdA2zkMhsSuSuJFLj/U1
waw+f+I9UAfndzVwNq2o0TorCoVR0hmYrgBDslwo17nL0Xzg/Ym2UvfNPh+jXXHhFYXRyTNhTdnl
ON4he6VF2hDUzmkq2pPETGMZUVPGtxPv5x0lUBjPlxsRqc540A2mE6mnb+7A0rQyAS19oTedg7sx
grkIuq79zOydjCcCID0NQ3+LJ/b0kNe9/BFdAn8EcJm0Wh88Nf4cCWSbwfgbwx/nOmBjR5PIDvQt
NN5KNpCU290RrS1YVZDkFbGINMOyRKkc0za9QbtHsoPZ/dnRm6V9wX3hyQJKIMjo92jG4NVBK/a0
QRCrRj4nFWvnmC/Gs829c/WJdlwIL23IoOg0XkuYmrk2zX796Y/V8xNv7iJ+cqJQyalSTjUkJOii
/etTyBsrBtGX+FtzIKuJQvAmR37xPe+2AgEZDQ2UItZunmECVjIgPc8Jl/7EmVjyjQT8N3OpqyrZ
38X6pB3+8CROEX3bZ2iZ1i1b3FmhWthZJQwMyfxXtjDb4gfGItNXEaflnXz/DDBxTmBTWY6ThldS
pKz3e7Z6MCbw7N+S/FV/AIdMjLgGUQls0L8sTy+BCO+Eo4pUS6UEKmTyhBtEE/Vk4jtVcE5fTwgK
4rgZGYGaBkNKCIEougXNa2HolYJlA3zXc7gGkWqJwrbNUaoXmcYNABbTPAY6vJr2Ms86qgk0e058
LPzw7PJU2MpaT3CTmLt/fRkhL4EPTNEiQlwWUovyeW3wbMEbz0YX61Cg3VQAkmDMu5BQ3+kGPnr8
a/rbS3da+di8WYK5UVAAYhGALeMUp0CC6ztwHVrFym0stCGcJMVPwgve1GKzh6+HRQ9zsD7e2Pht
sYmO/s7bytmTgdilrIgl3MW4rC18k1e/szdu62Zcl6lQjyp+PpseSkoTebjSX9z5ejL9rtF9Zusv
0I3N9c2XuRkTGAcFjroS+E+rUwh+G3jdpPpt1v8SWZXQ0T1dSYrpZQ7WZr2y2Ki4IE5y5hcKFeUK
kUcO9w+h774XP0WnsqDrCF6rEQoqiR4yi+I3+o1p33sDFsRnzo/X6NEpJV/FXhMN6f2HJix/e27w
8ja8MZ1pJdkPEhbFqPWGWgWhNwW75OAu1F4TtPM6jcY40OCF53CdIBHVMhZT+WOa9LcWcbKumB4e
g1/nkO/LeCOIWlm5xEJyvIfXEbEIJ8ZyXkER9iU65/pXQEqYEqm0NJtR3IGumWh5Yw3SP8VMEKrZ
WjGDQGEzOXL+XhRY3FVHHyhCnB6GJmPiqdcr/1WXlU3/iCVeGFnQnOckmO8M2+FzK2lfctNTIOVf
es2KYk+9UW0WZlvQJ006vwKOrKaneJvVonyyFt42YOm7FfYywoK9uaIfYInh7t/TdlrQaBHNI+AS
MxABqg/o/7MjyeTPa6KCwXtzWFYSR3viUdEFp90AzBXG/4FTqUR3MBVZR4Reu8vRHQ4UgKCVJrlG
wQmGJDkyKXp8K5c3FpXTwHOUQYHOmlgAneh+qi8y6PFRj15sqO7srX9ZQ4u4NqMlT4P9rIs/rSPJ
TGbTLeFW+p1+GJNrurthx1svIBncRgnUsTV6lSUx7v5Z+2RfCDO2dW6TQ5i+D+uCHp/bqPQGJtF/
MZ0711KEsGrRvpGeMbba9rB0Pc/xgcJRTa6BG41ZazY1JT9o4OdWheNHXHOcTSSynB10wJEVA+JI
8DJsXQ8dtnWXKpUAkJ3Zn2g4lHCZ3QKW8315ePm8a9Zku2aFIOJ8oG7goR6pTRkVmPkAsqK91suP
YURByKsPZtraelwysgxsbKBV6cPA8UKwmyu4l+iGHUKBj7oH1rO9H3tyT8PUdcTx7sRioX3IqnwQ
NzdlRcktGJaQFGUuAtd1svJE3vrJXKpbmkypyZML/cKIiK4dGM2na9chtcaTgohldEKifUZcDbAo
10HDNjTx+9celkEJCEKL7fkjmRgf1oGt7MMFGxz1CFrQ8JeWV3pMrCminXBTyEEpY+gDhFeEnFmH
xsKlVdIYCuHLMmu+nl6gKJtIsO/2MAi5bvhnpfyz2Bm1ka1bRC4oAxGMQ2aNznfJfMwBOTvhxpNs
/MOH7h0mziR88Q2rDYGCC8usoGgLs4nExBG73aKpuXNG9p8xis369MKoiTm+u3Ycvo2ha7AGRR41
e/Pe7yQSpsRTIssizNU+WjbumEe1tU/4DvffHkyUeRkg5Y0oa32hABM1GBYWGn7IyN/t3s2RSI+W
c/Ksm25sPGEB5dqkC0rauKxDY/HTMH08ucRkpNAnTR/L1uykvo3hUc7glIW1FQs3ikBz+EDqZOUb
q0aalTXdeHDEvGnCrbmksWb9gCsk1mln9ede8to5eBL3ppwMD95S+iZtrPfmQV4w62XMQCtVQuWy
Kn5qpAjEddNruWoVVkIYsw9YxvllSW1OHF6THJ+c42U5Jq27GY1mBvAJtwJGF+0F3K6D+P491O4W
WZIpIN0V0S4SdeaXPk8IEkpaHk94/Hna8P+1QmpORuoOsTKGTUXkCnxEjqcyoPWPOv0MPMs+4ZgW
/nOeb3vxNoES+C4NJ+6oNvHuetx5H9iTPP2gS923NYJjOJtNEgk41fhaGRzwc5czLt9VstDd3lGG
sK/LavP1GcyW8JwbhaF0w90Wa0/E46+R37e4jIX1HsgXK0/17n3Swqim8zCO+f52K9FvQA3+hGPF
oqcxTZddFsa8Gl5Cxrcgt2knAuShwOWny0fI3no4JsibdG5uen1NfN2qhu7zbtFM51Dkj4vO98DT
EyEChGhzvrWEuyiePmonOthDncs1TZ714bcCdwI2Pyyk2svpMKv69xNB/s2RCAOiu3lITaK9813B
xJ88xSpb92dSV11CeOGk7q4NOwjh3ykdJarw/Onh7St8iqjndwtdOhVPZpZyx/M+cgDfSO6Om0fo
VzNMBslil1wuAttLmWSq4MrnBR20wRW46PJb0ulDrmrt6kAuIB+Yx5ewQaFh2xVr4h6WSilDSGxv
L2LAOVZF+uwcdghWpBksj2BwKPh9/t+f55pirdkbO1GzE1ZmPoLV5qHvgJglH0EYdj8X8db3dHnl
wVn50XvKzQMt/8036++MzGiTcDxbIySVyv8ooYvMrG0oKINdUZmK4kSep8VTLU0qWUn+9DKj62Gy
XhPiK4h0sXA0M5pbIXYpvIqdoxttAxxJaKr3g5oVYIV2hBeg/BfXpu0T2WF/kqjXOknyyzvqEJ0M
rR1po021eVD9a8kJtCfYtNGftj06vPq0ivUGzGtY01TUSpL7THeM79eNE5dbQ37+pihwGvXvpQ5W
xKsWTDHA7yq//wOAtc1EkXrE49gCYvjlbfHiAt9hrfcCpFW7uiwzrv2+yRD2aJr3C5RMBx+g96fs
7B28Een5oIerMPhvrsqyIDHyzHILZv8/VXbS11JpJvGGO7zoHmK9E4Aof3wjZ5ZJz/pICyltyqAS
qr1ZRNOp0xBp7gV4SqwI2fQ0TolpezwEa/s1KijctJkRcU7FBEGH7cREYAaZmemkacMnL3z1EdVJ
Ium8pDD5Yog32us5XfT4ym73FJsS55GteOj4sVWpupACE7bPqk2oAz8HkyQ097sMW+j25gSVBafy
WYu//RHogfCavmimkCGw6WqeQIM7bNDeNOeW4gBiKnLFehMeS9lqYMOccTgtZEMgcmG0d709IUrg
MvM2b1mfbVaKt5MRX0pmiI2MPImYBEbF8qlTMq0kMSVKFoDAE2dFcZpRGNOwgLrFnyHQZveqWyg2
6/toa3C3HMnlCfhOCrsmP2iSYTjLOLSmvtY/WIAHkw0RmWVRqv89qGKDL0jq4jhasSunB95xOkDg
TR7VyyPRuEQuFRKe6D5qoOXI5qKf/xyF/fvgVDWyU0IotgDoyn7fiNDWGai6sxmuuyM+Zj8hVJPW
5gB4+PwpSa81XL873q1k3tGBdHsr6nBoXpD1RRTvlUczCKsLBBl1EApfC5CvZ7LOGJ6nFFhIqKQP
fIIlPg1b7nSi/MSz+cKrakxEUbpC+Yxp/IqWpWOiliGJ+XN7BqhUe2GNZ1n5qb/3Xsomyrvadpdy
Oy96w+lbao9jjT63mWwJWopbtJQDIRgeXiKVPHk6zSetRmY0j8alcjyFkLFXH+tkCFT0ycAugVC0
e5Xd4N8wyQ1zGVGlaKoIPxob4KNcCFAks8NvFsXrxefZFk9CyKfASGVHw22oPjs1d1bcWiUWMuUO
TP2G53aIhMGUk5w20yi3qPqTWd+nh73oOv0IzgEwc1YMGhZp5RImS8UFPtXDrLtTQb4weZ1+j35F
uPgYQ9kDYi3EKJHP3e339Bn8OlHTsece8lBeSyQOF2wQZReJ2xozwpuWMl9+ji879UfD35sEfxjf
td8YkDe2xcXsm1znydwakNm/5/xAVFKbiOdL7H0iIYEC9cXTs+HtpMJWAeRCjJYBiqHEe2GWmDJf
XvgVaDjgrTJpN4JmhGWYWiZW9RCoZkC52We+thUSMV0MPMbKRI2HPEI8/m9aeZk1FyXjy7QHU4IT
VPXf5ZG8b95voF/dkUHhbr7x0XygipT1OBlQsFACOQpa0oZ8rsskoSPWvazKUjfQiLD661X1TIA3
2ybhGA7UxjmcSkuzeKf1jGd1KEAQFQw/QjtutahknCahQG6Zxs/chBtAs9hTThx372EYB/PKqQrd
gr9po1W+cLhHAtjcyaqMvAek53Uvg/vvvc7z/rIw830sG3nH2NcmFwLXUID/hagfbkExLy8aiJLd
O2+DTDx2uX2190TWem7BrM1AQWIexrzfvlnE3nQm/BmTca72wyMCm528p+aj7T2I17JEluF51gFD
gwwbsBLm20D4cKYF9jKmaLNJIP8jH0Car3Omml18A5NOu4y5r3FQcbPg93iAMOUBiB9dy8dG5eYy
NVbOVy6Mr33SladV0N1Xg/qh+K3Am12tmwEaaohQYNSnZq+1oxpAJ2bB/Ukd5bkiuu+lNCEp0epm
uQ681QIzqg5LJyVEpUKoc6laP38SgzLQvoEfePEh9vG23+6DQ9tTFgfvZthcIc/JVH051+2D4t3E
hBgQPVxM4HkbUTL2cKgWumOFCBzYqrcd5IK2dEXT9wjb7cE3m7t8ABYDrAFPX0qDAnvlNHaFddTt
DGhrveRLbHbdnM3ifqlyaq28z6ujg3rUCAG+R0XzxUOfLLYDKWRACRcHg3saGMLdVbtSbMls6fqD
q3zqPyLfN0TgPCp1F5dIghOLCV6p6W8lxb5XTfTfmSMoBUCrM7WKryt8J/2OIVf72FjV1FD6jlf9
DXAFfrK1fZ2Gx1ZyQGt1ARCfvQxnMvimyaw47Y+59UP9LU5v+rv6wwSkXgwYXQKPQxJzNbBxPgbH
n9mAO2eYJYNrZD8EDAETdc/vHI+ABNL/rSiOlMCDjVYcgEYgFnIBjfzCnrIwG5DQtGg1Lh1Afose
4n7XgDM4caUj59eOCKVfVuM+xOCVhRgLSf00WcLwnalNALu/S78kZSuW7YbPzHqh/MCb4VXy7QbA
qvtybrS/Ri0oxzKa/xeRoPxSi1AsvMIAS1liYboyf24/3L/hFZkdVly4dgAqCZZTilvcI4LXwbcI
508Nybd2NGNwi2kUj/jpgUfGf7p8YMqZO+3z1GhzSMMTngP6N1rnybUI03VVsJjxTtEsZLkwiiHt
o/bakE47LmrjgYIOtfD9sn/luiQzsBKcfnXGDmfVOlLXUpilCLua02lVck8/ftxfc5nj5A3fkR8b
MEYWW+f67zjFYlvNFi8GhLJZTD3Gs3JLXxU18/X3etswoRn5PqITCxnxo/Joo6TeJav7+VniIebZ
gdJz9/quo7KRR+XbMGEv3PzmUHZi2+y4yLO8Wu/ev3ed7Qw5whGLUUt89qIVb9O1iq+2puA/y9QP
vrFVvvys/uIIBywR2rh8lyW+g6d5U9k+4ndCDx01aVKLjlIo+clvrKntnVDrFL71HQktWmuzM2qv
/WpST6nbSNJLeyAZRdyqd7b52Hsgr2C9cCP6b97jMEs5HvQFypufC6L1b3JQzmBCNkWxWY1bp8jD
5/prYzGDfe1BHpKr03DEBiEAyukM9N8CVckiyAKqmgy9Aernb/K7fN3OT2Ho4i2pGKLxAYJINt86
sWs7B2/wY2U7z90q1Y0lKzAj2CR4JV90ArZ2ss6JXw0hud27UgIEq4FL+0v9y4BtEiMrTobAMK0y
YvZyRLkauoRCOAjnFXajFJny12+NFZ95ow4rvpzBew9S3R0PGk4jNmlK6ikK7Vg8IycS9sxBYEph
JZ39V/9VqPBJNi2kLeu4ynM71L26x6+OrHj0YOCM6UQM1R5pDFIUeUAf+WCaaTktbRRRGrivVbcR
vvf64IyTaKvpWycU+RMni0z1twSf6yymzt8ZWPuTIbUlV2OYcBH3c5wcWt4KEZXspXg/PhuIeHe1
mugus4QdlEsNiC/Eqsvqqy80eXw4CuEb7OsZ470Ru+NI0kikWvgv7Gj2jlI7Kgeyv1KO4akziPy/
wQcYj53muqSXpq3WhgFtHOXBa/nEPbWLERCuzVhQZuzI0dl34MEv+/1ZSpEpW5Vkd17kK8DS0Mul
ANyglE1lkK2IZvlPhtKKp6CoTQBH9tuCFCUv0VnTdZ3i5rI+7rspx6WE+jrXnQJuGDzmFthRSkLX
Kt1rkXMWwEOYnU65lQKxF7o2Mvw4Xo+3Ik9eDmMfzDl4P5cHOM+YNbXZJuY2dXtlkUgAbNU9zDkH
KyElmyee8hgEf3ANvuJ2gGiy6RnbWyJ1MH95R4zxbNaRBWfvoZLJGCzXgAt9nwXjdks8OzZkhxci
Ynq8OKlFMzy91g2mH60DKguikWZ2tb2CVjW1hMgZGT5lFg0cCrY8C3lqlqafBwlZsOL0+ifnC79+
glQ5SB9zqT3kT9Xp0ia4QWFp2zZnbwzBRKlSijhCRzvJSyWYIJcbw/yCXw/6+GKBuahLXBEToA2G
gRCLM+zV6FOe/B1ccjgMGTbFJsFhuqf5I+JiLUdrAJd0T9+AjbH9aevWHXwPV9AZeYTNsDMPpgUh
uM59F7eG5cgz2Q13M2RGrW2X2Uw8nY1K6DYPRKEotL1Z2EtgqCQooRmOghmyGqSVQltNBW/8b36W
EUWPCKG/pFUNTyL/WANErghVS/NVNXmhVm2E8WXI7wTIC9Uvp2VEP9ggxR0karp4/bTEXuhrqAyq
dZ5UUSG7694Sng/bNbZnDgMMYgxaEbc8lT0oFJkPTZE2KtaGTN7s+EVkZJu7g3T3i/lc6YfvW9Q8
w3HvKKMl0qZEdr2T6QPttDFPLULvJbPZaFuhVVbJRak7oAqqi+cvuUzxTNnYCax/3hG66el9ujrD
BCbf8i0VNLfhZMQvd0w44lK9ITsmts3r9LnSIj543v1CsqTrHOVx9HM22ZCAYpNmxO+oSLLi5bkW
Iz/5FJRRkd7smQ0ABiksoyEFKRVlPG8PTw22G+h63i5FHWYQ/L/NvI5noJ9tOjGC1MemI1toDVM4
CqOWleaEDQ+nMIkqqIeeoqI2lOZP7S/dZgnK2bV+1GBuzydnLz50WpiP3+HxPIie7lmBuGSsQiVl
V8Y0/c+9cwbNta/5QftsKC3SgjD0m8qtcki2o2bvsKWIdiQi2NduByqKKQELwuJut/dljO/cIqwR
007rIM9kyIDqhwZM4uHjghIYfgOveCS74Toxw52/qcfJox10uKMVinIEcURsmyKYw5IwW2Q2ZLWK
5nxlbVQ/N7y6eEpFIYM9Fyh0k1Rz6fzznyELGfgrPqA1mFhqPKSSQWxiCOAbCgiaIWELizIjLAPZ
4mod6sFhsN3vMTl0Uy0J1s+UOZk3bCXfz4Jmcc6PsI1cMNZCvwuLzps2nKnh1m0l6KrJWX2yu2d8
jPJiR9G1XqlPYIA+B38hfgyIVVg8g1qHXAjJ7EZ+uIr/9CMBucbXyEc7XqX22UQqi4KslvKlqtMe
QzuzbuNurJu6sL9vuKpYZ+HKISGEOoTvetXDj5G+MVYOgIIauIS/poKQQF5MSdv+/EbNI8rh4hPa
OmfPKZcvn5W2Q7W+12p8sg1arRDjNkgBVYWPYXDD342OzF7037R0AJCT82T8wImcStQXSwpbLDDN
F66W643j/2NwjRWRWtSosUZk3vBjSI6G+33F31tcyRg5r87g+WB0U/H59RMpKad5hmnMFjRpxYNw
l7OnM8e1hioQKdjEU8Evwg/Q7S4MoCqjqvuQGqjtAjL+awunyz631GBohamOB4b6Ltin9//9pC6u
K8a/1IS1Jagm57Yg9uRbYsDqb4pXROyoticJEpHgg6Jvk6SzWPe52/bwmXxBKXKy6UlFGDpF0hyz
Ww99SQd6x3OtqW7W3b1Onl4GAhqOpiCClkqPqutdkIal+MK6OTqBxwKCqUFHdWm0uGZfRuVWFhgc
QFJ03cdWRAachYpWCbN/LVbxX8qob3PpNIept5FTaqIhCzq7TV9+7caeZ+p3TkKNDsgZPNP6kNZr
QV4vF5K8S6qtl7hu3V9WGoVqN88IB4V06XVsU3BoOgrHDn3BeGnWcOAUzJCLOYr5mC2Qio0HM6T3
hTQjbR/M71kLinvS6wZVHh+3Carcqk9Q7eNquy5HsF3+tfJ3xQuIIeNa7i+N7RrYmxN48COBTxnd
eLZN18z2hRu8L1zlAUbwvn2tu49Et4vAev5H0gC8hFfqEe5iihQ4UB8DkIop5a0d2a3Dv65HlR4X
UzOZse5bj6OepGYeK4Srgh1/gghdJn1i0kOQlprADwDrq9305Fsntv/VbRkskmvKoNfcBdYCBEh9
9hC15627cpC1d9jS/Qlbhjkpgx5V2ajM3mmJPWuUyuAWnoPn6UsGLyj6JpT6LzrPVFUAYb20soRM
0PrV5JURs6A7CrcL1/s0jg3qIxw00PUpgsXYZZUz3O7DEqD/3PNSBcnOiybbJrC+G1sQXWAkxNYk
RZu8qsPKw4n25FphBlpM77tWa0JKVHlMPKOFHIl3bUabnUPwhKj1rk0CLbwX2nw/ReSq+Gs5nbnC
gwv75S4LYZzxDiGuVnCFfa2/HBI1arGsTcp6nxfqAS5bRdEmSf9OGtPAPkWuK9TOy9Eu/DKA5vPt
+XcwyZKTGVtf0upsMsRFVZsem3H0O2c2cdK5X6H8fFm5+U6VjMXNcJ3cNkroE0LyxZZKWn/TTVxN
z8MhzjO4g8GCUWeK7VszGQbXOOotesSmryvHotTn3ZOd+hpPtcPGOTucZcpdaZAPFdws/4eAFAQi
juKT+SBE+ONBn5KRxo9Q6W0v0svqrAr5hAQabLPWWrg1eXmJru+IjPwjz1uWT1AdrzupVrKaqLrU
hFG1As78FxgWNPa/xX2AXL2o9Qt5bdE0u6LZQcgzslcU+OSBlEjM+qCPhJjEeCl2DUBIx9KKHxA3
rMK1PzRRHj6lRpk+JU6P11GMiqb4qCXlxsuRtRDvCMFbJAZP62SGNVRd3Nu8iLQgWWCbRL8CTOvn
39NYU6vogoge+ZDNyu3UciB+2uhn/gKUlbd09Ss7GislQKfpXr0NpxrJZfHSO88WYfQPWvWsL2by
j9Obpt40coA+lv6YI9Xv1JQzD6ElzgTqSWG0WdUPw3OTANXfikzifY88YKQo6zGUuNbSTMcSHuI4
SzqeyliztXG4SOyXoidvAN5pFceNY5i1h4GdMl1WwUeBaaaA518Gi2UepHw21vW28N3bvAUYTx1t
Vxt5Hk6n+5Cs7OqZReq/8XW/ccyU/bQDuCfVLxmL43irqotNkm1yDhf+PTiBH3RScaRtH7IPX3Cw
qzqzpYo9Vmxquoj0J2+hRcMtPD0AcRFUqoro7O3waN7ibYP1+LD6Z8GjDxdpssqFIdok9IMkHOXP
JvVCMvMmf5ZiL5KB8leE60JYULsEIDvdY5EET9/NOuEBjRxVbQCNZrIFE2Xd7Ipc+Ak3KZnJQ800
D/7DXb9hKNjh0ck6qWATpOIWBIfCDrL15CVz79+sY4REyL0yxb9cAPXh9azpA0PgrfWd36/SrUim
kSsUXpSeMJGp1G222w+l7toCu+/lwiW1IOsA68YjjiMeLWLKK2kD9y8MTusejpnNnCm7aJ+W6Z8r
5CQpIvyUkxP4EC3UwyIy3/8uMv7/7JjVRKC9Vifq1vMYEIrRsa0SevdON2JoCVmLcQF1oHAHslu1
e53zDqM/Fi6xhHGgZejds1qu0RQjFj8dNH0g0N6k7yeoag/pZiI1SBQw38Ip2mL050wWnLh4LSS2
+8NCI6jfWGaHRiU09E3D6h+0ekoAR0n+gvwnkx2Esnvy35Ku7I+UhqpUvSKKWmUafuA+sezT/miC
2ePm8qt89O+85UYM0+3UTmpTUD3ZDFrkclaDdz4kmDFEjZUIn9OUX2IM3RmR+jbfahbWAhQ/XGoy
+m0OtKbVKPLwJp6w7+/a73OybU54uwvHEv4844M3pMsJbKjvmSPe3itNDy04fTwI5XaDXSMB72oN
wo8x/xPD1/fJh+TGj35q6rO54A0utMDj33Cu7B8Cx+n+xxu+S3zs28HvqbGOW1uX/nbLN20yY3/d
K2+8QKld5vdAueG3j8G75qVUoY3ruF3jvspWKjmKBiD+JMcJtK70SsRu3QM5ZcFsfNuJslwzd/jm
OGa1PGA5ZAT1tgtETYUWZQRc4kieeDI3Xl+7NNfT9+95lwvMWcZR0lM1QVl7wwVCsVaKQy5tOQZM
8WlPAf6PQFao3LuJb2gZ0Nr/fkquiII6+DgO5qUbW0ARek4NBGfkT7sBV39S+1Wk7g/T9hDctrYN
wdWRMu+xVNhRcI5WK0k9bifQ0MsK1rHXON9RlB0vYVEPvlHwXIw+PBdhV+PYhHzuE+66jrbvlvH7
XwmCkRo8pZ/w/7b+WdEf3U2oQz6TJ+M/FLU5pPh1aGhzKdii3bYhkX9TGuNEA459FwBSDKXqsKx3
/BP2rcMvNvm3WkDCqCDTV1Vyg7UpRAOJyMSvnwUerYFPjYr6gQhoAdYaJyT/59SVY5BFxZjES3vL
4iGw7obBt4x+3cmxVtzQkZTLIwxKoCTL8EVAxk2WANg8cY3YUMbH3WC+MFfiFcVl5+fCYBAuxV3Q
5WXJxNzGbJQlhtdRvM26LHklruPvtyyQypoacH2pOZgcpAz492qRRp+JntEufAEjMzgu+TrxHadn
KuPRLZ24QqPmpPBPBMB0e0yhOHTv4fX5UR+AsClt6quRnibWfeE2C7e9aG7r3lvCBSSEglbqdx9x
bup1ATn03NlhtAr2w4fFkXKHHhkWjl2dUjADd/wcn51fAKXRBx6/ao1lNrJA/ggdNSufcgX7W53c
jj9aNGyPmyMiEUaKigGfH8nf+e+MxM/wg4nH7rvjKT5Y/PyDxra7H+zyD14nk5ZcQ6vnd+6csUlh
egBpzItQS8kL4jyHuGOtQg/jM9JICPW9uJDJrI7YeF8qOIpAsqUDdDSIM8LSyzDf7knOTk2n6ASA
oUD5WTTn+sEiwQbR2p//AsJgrfFyKyTNuWdTxIF6I34IS3ZfDlkYeag4xmHl24lu3xEeDVRMz9Of
nuh271pcPYghYAedY0cd1HEAYTp5axwF6UZFFdgoNzhy0JlFH34ugOrv4lOOyMrwurW0gVDtNsPC
VUnkTz7lS05iTHapMGOGw1U9Rroj46hnE/RXqiLuKF3tUCnLlmQiZO/BASDsViEHZgCDLATGAlIG
WypEc89wVZCDJLSZM/n4tAIrInCebvIt5N+W2cSD6pRSyWzpTC4dvS+2/PQijyenfLhnN6ye8r2Y
cL7mcOMsIc3d+lu5goDW5KHwxc30jP4LbHi133ZAWXIPKkDWae+fSzaur9X2JAVqDn7hGfdX/b4o
HlfrzeuBHhQhheRf/pLhd4jL8r5Vw1Z5aANLzvpmQkrmAUaZf7AMDsbOXFaG8+KFDBr4ZWLMTRIp
Nottp9abK3CJkZCrM0xzegfEcaH9lIHNiQrFA8XACXGbbkGpwJAVZsN+znGIxbI53O1COObxiTEx
TZzD1n3CxdhFOkkKFurAA4F+mg7zYCy12jCzHskFtQKPfqjTp4nLwfNnVxtuVvGcQPm4n5ViE1eW
PQqCvfTYMhc8xPcPk3oeNPT6IHh7hV6j0J7APcpbR03/tyg3EKKu8Wmgz7j4xKdQyTK7tiaahYm8
YVKAeZHdbBOEwg/JaPAGcvgGmAHUGPgtOwGWmnd2OurQ1wFsESlM+S0mEITsscS75yV3R1lrv71t
gNhcBCeMnuyaUHBsPq6OXyGr3+uS93XaFaKfkgrIRs7lsqSQjOF8mhzYp8XIm9X9Ix5IX+1Y7eoX
auHZUswoJ2K/yRsXK7AGA03AwxTDZJEt8w/oxfYgRaH72D93WsI6qGs1KVsNNmdcPJjg7Glrt293
dKvNdwgfa+Dwr69kYMbWKIFeDl1eIUqWQVfcfLqbhf4phXdE8Sidzl8IO/QHM7243LLe4WfL3iDp
lqb1OJ55OOOIZLxt0lNh07ACLBdidBTCh4qEnRL4PsFtr6w7v1nXVQ/NoopKfjtu8gelCJ+LrP8U
5Ile35xEgLQkJCK8dJQGEjkeYMAXhunme/XszUHrZn3hxEYab40pr5Rk9DmYguAl2kFuzIq2/adj
saoVgoXcNhpnQC7rzo+j2S/00JBclKvNhZB55hlc7AaXojrtkqkuObaYOHbE79ztyj6yDUbSMg2/
t0f2NNjjTaL0bBfgT/+EYHez0qCZ636jt425xYrEKb90/jOTsG8C+xtuGSHBz70165et
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
