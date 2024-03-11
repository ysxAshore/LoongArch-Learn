// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:30:35 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ inst_tagv_way0_sim_netlist.v
// Design      : inst_tagv_way0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_tagv_way0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
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
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_blk_mem_gen_v8_4_6 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 20320)
`pragma protect data_block
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
zn2i9MgsZ8AtvzQRowX3IzC6cJ1MwxHhWMgQEw==
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
