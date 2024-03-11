// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:30:35 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top tagv_way0 -prefix
//               tagv_way0_ inst_tagv_way0_sim_netlist.v
// Design      : inst_tagv_way0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_tagv_way0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module tagv_way0
   (clka,
    ena,
    wea,
    addra,
    dina,
    douta);
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTA, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE OTHER, READ_LATENCY 1" *) input clka;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA EN" *) input ena;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA WE" *) input [0:0]wea;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [7:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DIN" *) input [20:0]dina;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DOUT" *) output [20:0]douta;

  wire [7:0]addra;
  wire clka;
  wire [20:0]dina;
  wire [20:0]douta;
  wire ena;
  wire [0:0]wea;
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
  wire [20:0]NLW_U0_doutb_UNCONNECTED;
  wire [7:0]NLW_U0_rdaddrecc_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [7:0]NLW_U0_s_axi_rdaddrecc_UNCONNECTED;
  wire [20:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;

  (* C_ADDRA_WIDTH = "8" *) 
  (* C_ADDRB_WIDTH = "8" *) 
  (* C_ALGORITHM = "1" *) 
  (* C_AXI_ID_WIDTH = "4" *) 
  (* C_AXI_SLAVE_TYPE = "0" *) 
  (* C_AXI_TYPE = "1" *) 
  (* C_BYTE_SIZE = "9" *) 
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
  (* C_EST_POWER_SUMMARY = "Estimated Power for IP     :     3.08085 mW" *) 
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
  (* C_INIT_FILE = "inst_tagv_way0.mem" *) 
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
  (* C_READ_WIDTH_A = "21" *) 
  (* C_READ_WIDTH_B = "21" *) 
  (* C_RSTRAM_A = "0" *) 
  (* C_RSTRAM_B = "0" *) 
  (* C_RST_PRIORITY_A = "CE" *) 
  (* C_RST_PRIORITY_B = "CE" *) 
  (* C_SIM_COLLISION_CHECK = "ALL" *) 
  (* C_USE_BRAM_BLOCK = "0" *) 
  (* C_USE_BYTE_WEA = "0" *) 
  (* C_USE_BYTE_WEB = "0" *) 
  (* C_USE_DEFAULT_DATA = "1" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_SOFTECC = "0" *) 
  (* C_USE_URAM = "0" *) 
  (* C_WEA_WIDTH = "1" *) 
  (* C_WEB_WIDTH = "1" *) 
  (* C_WRITE_DEPTH_A = "256" *) 
  (* C_WRITE_DEPTH_B = "256" *) 
  (* C_WRITE_MODE_A = "WRITE_FIRST" *) 
  (* C_WRITE_MODE_B = "WRITE_FIRST" *) 
  (* C_WRITE_WIDTH_A = "21" *) 
  (* C_WRITE_WIDTH_B = "21" *) 
  (* C_XDEVICEFAMILY = "artix7" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  tagv_way0_blk_mem_gen_v8_4_6 U0
       (.addra(addra),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .clka(clka),
        .clkb(1'b0),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .deepsleep(1'b0),
        .dina(dina),
        .dinb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .douta(douta),
        .doutb(NLW_U0_doutb_UNCONNECTED[20:0]),
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
        .s_axi_rdata(NLW_U0_s_axi_rdata_UNCONNECTED[20:0]),
        .s_axi_rid(NLW_U0_s_axi_rid_UNCONNECTED[3:0]),
        .s_axi_rlast(NLW_U0_s_axi_rlast_UNCONNECTED),
        .s_axi_rready(1'b0),
        .s_axi_rresp(NLW_U0_s_axi_rresp_UNCONNECTED[1:0]),
        .s_axi_rvalid(NLW_U0_s_axi_rvalid_UNCONNECTED),
        .s_axi_sbiterr(NLW_U0_s_axi_sbiterr_UNCONNECTED),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wlast(1'b0),
        .s_axi_wready(NLW_U0_s_axi_wready_UNCONNECTED),
        .s_axi_wstrb(1'b0),
        .s_axi_wvalid(1'b0),
        .sbiterr(NLW_U0_sbiterr_UNCONNECTED),
        .shutdown(1'b0),
        .sleep(1'b0),
        .wea(wea),
        .web(1'b0));
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19968)
`pragma protect data_block
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
iXM9o+u+ekidIbM/iWb4bQ+N
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
