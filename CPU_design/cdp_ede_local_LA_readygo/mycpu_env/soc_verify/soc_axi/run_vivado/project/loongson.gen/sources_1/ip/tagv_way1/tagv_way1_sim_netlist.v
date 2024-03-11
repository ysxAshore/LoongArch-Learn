// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:30:35 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top tagv_way1 -prefix
//               tagv_way1_ inst_tagv_way0_sim_netlist.v
// Design      : inst_tagv_way0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_tagv_way0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module tagv_way1
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
  tagv_way1_blk_mem_gen_v8_4_6 U0
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
YwnFTb3LuY4FemubiKgJEbiX
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
