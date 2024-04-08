// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:26:08 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ inst_way0_bank1_sim_netlist.v
// Design      : inst_way0_bank1
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank1,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
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
  (* C_INIT_FILE = "inst_way0_bank1.mem" *) 
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
