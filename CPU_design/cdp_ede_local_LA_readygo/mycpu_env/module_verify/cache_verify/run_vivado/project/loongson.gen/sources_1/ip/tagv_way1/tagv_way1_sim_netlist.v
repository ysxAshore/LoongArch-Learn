// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:13:07 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top tagv_way1 -prefix
//               tagv_way1_ tagv_way0_sim_netlist.v
// Design      : tagv_way0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "tagv_way0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
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
  (* C_INIT_FILE = "tagv_way0.mem" *) 
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
9UO4/fPYi98FwHGfMBSbnmES
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
