// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way0_bank1 -prefix
//               data_way0_bank1_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way0_bank1
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
  data_way0_bank1_blk_mem_gen_v8_4_6 U0
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
