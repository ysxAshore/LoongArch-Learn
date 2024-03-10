// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:09:18 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way0_bank3 -prefix
//               data_way0_bank3_ data_way0_bank0_sim_netlist.v
// Design      : data_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way0_bank3
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
  data_way0_bank3_blk_mem_gen_v8_4_6 U0
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
