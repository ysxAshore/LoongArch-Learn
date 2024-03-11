// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
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
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_blk_mem_gen_v8_4_6 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19760)
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
