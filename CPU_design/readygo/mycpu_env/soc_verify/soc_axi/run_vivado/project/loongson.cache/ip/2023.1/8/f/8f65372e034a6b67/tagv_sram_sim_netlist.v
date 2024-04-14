// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
// Date        : Thu Apr 11 21:17:07 2024
// Host        : ysxAshore running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ tagv_sram_sim_netlist.v
// Design      : tagv_sram
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "tagv_sram,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
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
  (* C_INIT_FILE = "tagv_sram.mem" *) 
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
  (* C_USE_DEFAULT_DATA = "0" *) 
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
NOeAQYPO6pByxZPqI/QOxYcGbP77B3/DbIA1rA==
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
