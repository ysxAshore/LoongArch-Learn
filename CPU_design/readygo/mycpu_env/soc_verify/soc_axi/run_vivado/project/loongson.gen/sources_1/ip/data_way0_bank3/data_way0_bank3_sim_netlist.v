// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way0_bank3 -prefix
//               data_way0_bank3_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way0_bank3
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
  data_way0_bank3_blk_mem_gen_v8_4_6 U0
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
