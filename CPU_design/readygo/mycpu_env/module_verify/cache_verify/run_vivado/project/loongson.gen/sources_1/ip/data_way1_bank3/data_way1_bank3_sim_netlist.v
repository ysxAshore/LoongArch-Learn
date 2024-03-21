// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:09:18 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way1_bank3 -prefix
//               data_way1_bank3_ data_way0_bank0_sim_netlist.v
// Design      : data_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way1_bank3
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
  (* C_INIT_FILE = "data_way0_bank0.mem" *) 
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
  data_way1_bank3_blk_mem_gen_v8_4_6 U0
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
