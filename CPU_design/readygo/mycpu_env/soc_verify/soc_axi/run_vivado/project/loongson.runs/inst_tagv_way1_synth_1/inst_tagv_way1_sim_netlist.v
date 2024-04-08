// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:30:59 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ inst_tagv_way1_sim_netlist.v
// Design      : inst_tagv_way1
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_tagv_way1,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
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
  (* C_INIT_FILE = "inst_tagv_way1.mem" *) 
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
dlXJ3ZdZSQnDV+5M1b5VfYIeH9oUJ4+W8r+w6LjQrnNKVRYBpc0yjXUmiu/NKMRRYwD24wkGDs79
VqrT36MIUqVXwqIY7YsD+afFV/g9YqCXwX+KBIWDYquGrZ8BQb70ggHWQIdnXQo/W4rUa7gcupJF
JifBAKfKwcN/hbdD9RfbMhUX37Bdur4fwpW9JXzH45ea9SojGXdIXm1jt1j4yKmqpbGcvhTwn1d2
pNRuR8ZXrNyXdlrFeYGrXCK72CHt49nt759726/CJfWEwsAlqOeinIst1n1SIcuoxGxZTOUNOGs3
sTmCaF8I+aoCG1rEy+nzotpu4Duwf7XNOV77jkCcl7K/daDXUE/LLBm5Jxb5hMkyelsiJijHQNbQ
qPFkzp+9wTMMpwceQkYEPhJDPzNuTZjMdlXIFhB3WoVHQvGg6AgG4cZV6oNlRCmR5UTNzKTnU3db
WsQx7slMCiOl3Cdk+EvPmIsVcmVO6Vkw9KoRYyIvw5jXzSXmG4J+xwCEtgkw6eWUl5gNDGrB1zMq
c2Qyv2UmRLNmzGInuecO756dofue5XXBPYBbUBrTiHw9ZE2VcYogibr1pCf9oD8cfqg6d7duHhbo
UsjZPFZ9P2YN6u7a1kIRw9SAOVO7pzlxkrmmsJoTCEZnXrYhSGjx+vAm/t/dB+5V8LLFGtaZ5t6o
bz5MKiTY/Rn0Dy7vUhau21S8vSTvfMJqfxDnIs1heljxr2305riSW+mA0lk03OUJj4zl63VOtTns
3SMvP5XKDX/l67RzvxQVQzMzcGwmt5eD+VVHChQxw2cxNndDgOKQelSd9tKcPGDIDKSVljitnnUy
nOKVOc9ZQvl2smnX2hcaiNi0rX/Gh7qsXzDdCS6yya7WBQsu+F+NS81FuM+5wsfz0+R7n8hKTttA
E/VLtzbTC1J0louyHqhK5ZotYtqrqjMGozLm4Ax49uFQ/3MBqwZ4YjowYg1PD4ieTqPiBGzw161S
2Y9HAZyCgQLKjsQreqmapOWI2skUj20JZVLj/o5XbbbjpTIWA0ymOYWG/iUDFvipPaUOU1Dg/Tzg
8mDfp8lIVth7BYseFNYOHNYx7HxE8v1t7JLGa3/KLMeP4Qx+nKE+EM8w9p7NV4ZXrwPgJRwztQZz
8V1i6/f9rWvXALLdkLMOa97pds4Vvhaew9gesamYvhQ9I7WsL5vvCs4bw7dur7FqfOjUOad6Ajip
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
G8uY7vwat199hl4vNiLinHbbkRzkcGFVSIAucw==
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
