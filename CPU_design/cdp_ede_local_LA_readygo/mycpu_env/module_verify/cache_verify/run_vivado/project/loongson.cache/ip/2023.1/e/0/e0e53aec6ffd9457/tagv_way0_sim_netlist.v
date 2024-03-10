// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:13:07 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ tagv_way0_sim_netlist.v
// Design      : tagv_way0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "tagv_way0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
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
Hkj6j+a6mVcisXchyKM6HY/bx7533MZYVaDgqg==
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
