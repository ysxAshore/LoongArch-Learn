// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way1_bank1 -prefix
//               data_way1_bank1_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way1_bank1
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
  data_way1_bank1_blk_mem_gen_v8_4_6 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19488)
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
