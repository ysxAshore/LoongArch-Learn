// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:07:29 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ data_way0_bank0_sim_netlist.v
// Design      : data_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
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
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA WE" *) input [3:0]wea;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [5:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DIN" *) input [31:0]dina;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DOUT" *) output [31:0]douta;

  wire [5:0]addra;
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
  wire [5:0]NLW_U0_rdaddrecc_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [5:0]NLW_U0_s_axi_rdaddrecc_UNCONNECTED;
  wire [31:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;

  (* C_ADDRA_WIDTH = "6" *) 
  (* C_ADDRB_WIDTH = "6" *) 
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
  (* C_INIT_FILE = "data_way0_bank0.mem" *) 
  (* C_INIT_FILE_NAME = "no_coe_file_loaded" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_LOAD_INIT_FILE = "0" *) 
  (* C_MEM_TYPE = "0" *) 
  (* C_MUX_PIPELINE_STAGES = "0" *) 
  (* C_PRIM_TYPE = "1" *) 
  (* C_READ_DEPTH_A = "64" *) 
  (* C_READ_DEPTH_B = "64" *) 
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
  (* C_WRITE_DEPTH_A = "64" *) 
  (* C_WRITE_DEPTH_B = "64" *) 
  (* C_WRITE_MODE_A = "WRITE_FIRST" *) 
  (* C_WRITE_MODE_B = "WRITE_FIRST" *) 
  (* C_WRITE_WIDTH_A = "32" *) 
  (* C_WRITE_WIDTH_B = "32" *) 
  (* C_XDEVICEFAMILY = "artix7" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_blk_mem_gen_v8_4_6 U0
       (.addra(addra),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
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
        .rdaddrecc(NLW_U0_rdaddrecc_UNCONNECTED[5:0]),
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
        .s_axi_rdaddrecc(NLW_U0_s_axi_rdaddrecc_UNCONNECTED[5:0]),
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19632)
`pragma protect data_block
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
m6xwERMzj/AzF3iDoayi2N/p9TpCSs0q
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
