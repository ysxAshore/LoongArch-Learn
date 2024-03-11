// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top inst_way0_bank2 -prefix
//               inst_way0_bank2_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module inst_way0_bank2
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
  inst_way0_bank2_blk_mem_gen_v8_4_6 U0
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
