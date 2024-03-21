// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:09:18 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way0_bank1 -prefix
//               data_way0_bank1_ data_way0_bank0_sim_netlist.v
// Design      : data_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
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
AYmziz/6vcesOa5sjKq7PtWvh++bVk1OSagE9fwAnVnHKt2EVpfIt2ySlDZMJa/IRmNxA6CAt326
V8MbPd2GgRmWN0zQkx00Ig2uEwOEKmN/n8KrAB/T1NkFarnXVqk8aLP4Thl6VA0JOPdVdYKqen1L
vK1/v1zB9wQyhNfaoaH6om1pY6XdXAH/HGhBEVivrfQ27UvrH/EQKNivQ2s/obzAMJ3f8Kmkb7Tw
s0XAPpvWFsCi7fY59urhtrjFZ0ktVDSH7gMtkiFzK1gf88ZipGqlOcpPaLBQNBm6y/NGpRyWj3Da
lEenS2LcsXWxsWM2E/iduhIT6iT0akRRyzTMsC0LNcDeg0y9eurxHUuzG86hF7vCfyt+NO4FY+pn
tbr91wIM6B220xAdSj9gZZPFhTVSXwoF2DKGEZvmu0lj26kc3vKFKx+ceYiosZN5aHQnzEP/ekts
H5cFEaQKl5UzK0PyQtVknlM0L8WQ7iI4a3mGxyXHKIc+Dc/vDNqlfHQYI9bD4p6IjrI/+oblAc7T
CyfoKoDDcxMAzL86T9585HQL7o1ROMzhT3ZoZAa7Mj+7w/FmiCm4KBfD/DWvc3qw/MzHaXpkPgZs
0/ZK2AZImTxYQzmsh589OIKYrg1Z2waoUo+s3Z7WItVcBJN/FLbwwhFzx+0VEHn2VFTnscOV6z9f
n5fWmMevXJ39Xaz3cLQ4mH3YPaj5nQHHAOrhNXZWixWrh3HWpuWoDDodk5hB/RPtTjOcn0gixcFg
5uVJ8GtH/qiMRT4y9UqexEprhtpLw/xh77PkU96yTlYmiZ0nFW/iR52hgRocfm9xAvh7XP7SsEJ0
WGeIZ0iBumxPPQWqxndOdsKB04fZeX1qIE53XA0k2Trfl0fiu+FyN5OMTELjEacKMRdfZyu7DtcB
tty9OHWUGmtsYDS65/RVCzoT4L4MViF9GipGgH2SiuxBdGWq8WX/FGeI4+rEzJjOUEJtvm1PXDmb
0rMfePxT0y6pJ47aXz6NVpIuOIKPwp2o5K24RQYqwibxf6d1v98qbQ1zZaGpV/00CiqQGAQOAVk5
L1+EVhvrXMBaUjrhe42Tt3NuzGn7miGWeweiSnhGQvSIhZbSbR1fMgqWDBIpydLQn/MNAFMxOzPs
JI5QM/+IQInFTuuyWs4Wbq87r6v/Ok0k+yHmRPQqbUBoae2HPYZjc1pwNDJ0RBYUi0lbjFrJCe+h
GyPzdUevHu9F+9rcopKHp+/f1q4AUO8ExhBb60VlCxRnltTWu+KZuTGnMaGBXCETmaMOpSzAj5G6
UhwqYAfnxuYSWFNhabwJl4Ru19BBqlzIBf/jtlntLhl/Sy497MnL5PC/gwcZtJte8W+L+XITp6LL
jNFyD5WgG1rv6WVJ3aLbcX21EtesPUyQ1zJReiftIJnNW7a0BUxpA4pClyEaZg0SIlw1Uh3KkiwY
yP/PqUFi3sUNRX9SJZ8MRgDyrfwNRigcfEF4bF51BPkrZMy9J+3n8PRXwXmOrNTAW0kaE/QjNDDQ
UCk+0Vi8yTbteC4+UO5yDK/vZbYDsyOJD/EtVwkhpJtfKignIUkC5qWa3VsZHyyckYdGm9KzjnyS
aExwQZEZoIrKUCOgBj/GWJZlU5GDnHnuCpOQ+p1ouD1jELkO0vRrVLHiM/hat/q7D/Ix3FvSu9na
1p1tVysV1R6HKnh/SNBLAuheDgDxk+YZr1uv/JizRba5KMtaktNCQGzyJhh0KOfu2zwkfxEh4PfK
4Sw19yhGJF+iof6Ta3m0YTpDvvm0c2K0qto1xIk0EyJheWUpMROZfbgnbrKIoyWdlQN+iSlp38cb
rAAUZ+X9uuFemT4rLeVpbogYL5FoxLNKqbSfmPOZr5M/sgC5q+Lp0oh6UjnoQtE+xt7i5CcWArek
qE0qJKhDXinEKmEwgTfobfx5Yj4D9/CQ4dp5DRi/QAc9+lAsr1DE2KEmbI562RJH7SrbQaL2NBa2
+xdJp2ZYgIfUmfZPKL+xaxjArBsqNTgSWaX0GkJajePd3rhpxbMepn3ftnw4HsRHnO/AXlhdFJ6M
R9xg0dOXxNxIi/9DhqsH5viDjsaclaCAX5Q0qzI4zLh9v4OZY3LVWFFb1XIC6jVghwvxNBq2cBji
h+ZPVkOKjEc0TKys+gCTa+qE53ZKDt9gUsoXKyfwIW4B1Qm79mqwlqO0tFHZiAT4RlInNRCwBry0
8ZoV8dhqhMAFBj6atUanSng4+SP4eaP6wP/8mgAxop+OKg9VYybKZgvtquU2+Qv2hXAyoWbOlvYr
YF6bKkEo7rz2xNuD1VVG4uBrlJfqZdTlCdiFbwjBfbbnpNvX/lsLck4qe5yIpDiLpbo+AQbLtZ3i
BGG8vQdGSz+rjRsGnZ74gTYX5qqxmHbRikI//nZuQ7sjtLFjQW4AE1ugRnd9dfu14i/hvszU+tVk
EnS76edyiyk9j3G7AXs+642ypbVG4toCewO4vsPLVSZANtnu5gEbAfLaRCGhRNl0K9S5tKO2ulza
J9/IXvActJNV33hKJu+VQE3WTp1Q0hFV9RqxImCwejmwOBwiWLdEduWN1245Z7Nol7NK39xBmIn+
NlhaLrveB0n5s1ZWWm4XyK29GLbGdEDLKR7/yC2Jl3j0uF3H/mAfYR2ovOq7qAtfpYqRFcWDYtDF
2buQwxeRPGHSRm2fBX1yuQXK1Iw2mq+gQePvK59IkIruVt1bogsNnXYU2eEkxZjT8QjAMngwC7rn
dsYPPDt1jvgMkmY09mBo2jsDy1cSB3yrRwm+eyWOM15zGOnnFYkXwuzBVSlJywtvQQBPpJzx7LFU
kH0VBuxe8BU2o1919Du7CA5EYGNUkS7bmZBLzVhnx+kal/njh4LSsRGQhtdQEb5KDQltCv2gxDtT
eR3MIHieutZavLziTC/aCjT7KTcZE0y9bpUrV4y1yh/mYf6OZ4NFszIriSs9wNda2DjbWH0tp72P
p6cwfnhq553Ga3HDsohkU8UYCWfvSTgsDLdmvqSjfau0qg+KTBF2j3HsnUvYjlX0HZU6PPVe/6pX
LzZFVqmgL+ULgcEJpqRLzHr2I8WEIU37409V3swtXkUhjT2unzYu9o9FX29Uxq4Z0hwi4D6JtvVj
xWZSkO718y5OuesmH9PN/gDRaP1kzEQ7/v0bZPqxWa3vLof2OFZOPUNQ3xUfUa1VEhLTDEgn+Lsp
Y5wyep2du7Gbbb00xEBvGkPcJgUYS/4FjRMgT7EsUvjEEeGJ/Pet5/Xx08rzo1Iw1Sr3NVBkFGHO
opne59PtJ6xJxyaUE+ZfMfd+J9kNMKzsi7uW8LoxS2DhZYf6Roj0T51Hqhf4ORsf/+uqOMl7ePqS
+YzxP30xyvFkP3WXv91ianb3un9mE1MdKCWUn5bVhHy/S3KVXSpHuYx0mg+kSdV7V7Dt0n/0JhPM
roZDu+JM3JbHpPSM2tCoN1OoovkxYUMiUZXExqlDRsLo+y2vemHOwV3C/lvbap7X1HkJJfpCpmvQ
od0Cw22dXcKExn0fMHgujkdDqtEQYzXubUtLhnlL88stUric5Z5PKZLC7KjJkEiMHPDR05xsXBtM
PkBSvI/yQPsd5Bx62dRnx+mKlgz4vQhst8YChY/4U63J2ail8Tsqnt72Mw2BxCT+Nazy+f5J5Mvn
yDrsuy38PrSotWDgwrSzLsu7lJ2ldzk3eb3J8ogGqnD1RLIQb7Bcnk2Gwoh/KASOhLJu7wCZaGCH
u73TFiUoZd3mgwlz1XVZh44o6CYYVw44jMzmReYGGrC/KJMoJ/lpbsOVmGD+hwkO9hMa0N++87wc
ftuoz+2G1fgT+TSb1fScFWjjfx1B/+9q68lptiPTqc6rMqgsnb8LpNCBZYvEXge8OaYewWgk1PxD
OOhxJ6UdZOpK52WFbhRW42KZQa0eOUtvPXYgnSf06p+zhOpyifG1NemCu8BVXMmY7G6X2QsR9x1A
DBwrIfZfihoLuTsLNB8XJ6/NcxBhFMpETbBD2wNMAAs2U4SJxQd+FmEndb4FcEozr0AHUaOG9zEV
MMODJCLujXrIQHz0Uy2nnQXYni/QqDtZsfdeHasnEqCjs40+Q9Fsj86R+7jpVXK6SjUYjwWHnxvM
7jfKXnCFRB3QLLhlr4oFFiNqbNBIbqCZ99x3irHsgsvh0SL4wXfgqIYS2ffJHOwwHYgXhvjIMlyx
GyOI4cGUXgPj7PZ/CLiAXhkad22j9iFaFqjP0sPeKQ5hd6odu0fPonu4zp9OhXOIjk9JQEANIPQL
Y6GKvfAGBc9DE76jeFVjHXRGVoltJpi+P6AxHhY2q3lj83Uu3ZfYseawBb/3GC+Hs4fcfIFSJ+K3
Sn7p7+hj1rWskoTtVhpHZyF+I2jygfgggQE3IsYyai+UahwHe3YoIjaLcKCzibw6sWSjuYxwBzzo
YMq7NSClfbogj82NRIUH8ZCtiCnoXMBkoPwtJctjLENM7a9/fXRvDq8sbvvGc4nCif/taThBHQDt
kucBB0C2euOenID46OytDWGU2qPrlT5/k3/U2Wv6+0+HsZUGQydU2ZdfEG+g3OXESHmc6vdxYIJs
DzwSO6cPBO+WR/8KbcfflHwR6aJoOdoggaFLP5dE+Da4rEOZOxPx+FE8m//H+6l+ntUOfCzu2irj
dpH8s5uKDjoUW+FFbAsXbrwGz3Eg6Lu2mqEoVj56RpxMCzRo0ZkhlwdksA8p0VmAUyWZa3PD4sIk
/6ARmsJvqbszvKlGvuGBkMHrPA6f5Q0y3XS6AQAJBsJzo4waUw8LRgA1uMdXEkc7VDwCa/pxUidp
sbWrVW4sVrWSxVthqRn8VZ35FW5bbx2sP/1jhX5zF57Z988OA7ZeBexR1G1POvhJTxHEe/Jl6L2u
/8p8noyH4+ZOJyRb8HDsfRYHAes93xS6OmnJM0hH/bS8dLudFR3FB+hijUdz9V1u1ntzJWmK6m1v
tKDDVwgnE3ct9fABae4qWq83/rfoID2K00tgSjW9m6bhnmRewWWHxVlFawwyJGGxCMOxj2Upd8JV
82nXaN/Rpnyjm+iAI0aUFcrK6WS1KcEyz/wGd8zhQX/jgcaNH6PVbNMqYolTpaBiOMDfamywwS6e
FOZtMWvnp8P4OvpK51B9Q0nEIVFt7M7OR/o5BjmdyNMOuQqxMpMsy4SM5ItE37d3Tqj5U5f7Cu75
kuhVUzhism9AuaBVcq/qv29CewTr/dE4lgrxHzD/7vqFI2xR79hCOn0WBsBH6nLAMiwRCJOTABBW
LZY6c7b4D5P4cS2cgVLgk1dX1J/3ROFiM0rvRKBowEsrHt3+zwmLTz2eQKDSnxREFHHhB1D0EoLM
5RuQpkfOA76eMu+ZZ2iAdqf2/5h8kbiE7LBJ2Ko63TnWWBqdLoCelbeiFPEuS7UzrFH3kFqMEDm/
eS6Fq0DQdJSg8Lsy4AIOPssu6fDb29PSHMGdpHfQoof+1TpU6lzYmxB58q0Cn8iHQFO5p5UKmxN7
MeGh9exhUwN0mob5fVzcJCx4XtuioGfVgcuIegqVbGuRdBHe90LQ/wsTbWq6oto3dUMQMLEXWN3b
rifPUmUoLQtG3wIO/EHKvGCqYETUGpKm6RiPojxV0QY400AHX0FK5U7RZEG0gI+rU9oFfh3Jkem8
DNToQ1ib9wMQRZY5zmFib7hi/juTK6CoD0r5oVlpGRChrxyyyZ/VBS3EHaPfEDqAORzIwMeNHU5A
0sug3UpT5fex7rpa/rta0OAFsd2NHZnfMRmEx9N4J2UnLtJJUfrRVShsuZCJeAZCVKtmU+Y1YYF/
ohoiJwhjsXoVtaX2uaANxpylfOZgQ+AV74D4XTPCqTkV1q87TClZdtjWwnm0eostA08UxkV+Ch/e
X4bL8gVTReRzfHJ2LmEuE9eLeLAv8dUeHCIuasrqDVoUiMPsr+hEzfxXXOoE/Ys5t9L1FSFiksFD
gZL0Of3sQyrQNiig5Nis+mfSdzbCuXkbcCep8pQoXo6xBLNBUmEvnmxln1Lqi1hcwElu8IdwNAB7
J1+6Df/mOX8j61U147JCin99vTNLML0mH7kenJ6xAnF7I+btqk113jn7WVuxlVR35usLOxi4E6st
e+QQukKfCy9hMreGONqBHy7JQ6MrMV/eib86fqvppcf2epIi1crejEt1T7dT/toYm01ziA6pSmmx
ftdfpo+PHWJXnmV6PH3M/TfyMIzwGEJhEWZWRyQPtzQamYxscS2/Gvjyw2O6iY3nBwQuTOKZQLGB
ntaE7bUTMKHUdlzJ4D3IoKcYj8yC8TeQ0L/qUw8HHGrrnh7KrFYbQaq24AqJt1lEHpKjHHtlO1oP
uLSkEEOrG7+ok+EVrfwO3eVXYuINM1wVAc15xKJwe7e5yzCEtH3f5Z3eFE6yT7EPcAIImCvdSoem
PJjjZeGEVAOf7FHtOd+yAWNumqYTplI7jshB00Sp0KQhLydsnaePZgZLU9Wi/oc0QilxpDzOWNKr
9jaaH09NKV3ofQjGTU+AvP+d88ziCsdwijVoMdHhRB6NsFHnvuV+HNe4BwmoLcxKJVWHzNfDP6vW
c9X30X0d4iGhWvWFMeTcdDCie4VQjCmvCx3JOSz19xvW8UaJ2+piVbEZLHOnVlxz9T8DkJ+v/IcU
JWA5EckgOfQL1jQ/L+EUXqRF9QfFmehLoakifQfz0yTmW3cEtB1tmQExb8+bXnn8+3U9UN00L08J
kYtBhnSdfnxntX90CZXkvj1TA1fTNl4k/62gGiRnByv1deRkzdpCCf4U8rh8U01QVHQrC7C6YcoU
x5iwHsSEoafNtF+FQq7eHe1AVaO4HdPL24t209TcnZiJ2dZGzPHAQVfk7FYgQjZ00r3uG0eyhz5A
OBwcejBmEZYCRDErpnSeCZlLU2o+AsfPKiPoc2wV5/NRsYq+imcnZ+Zr5H+ejcZOZZDOLVQSaZ1P
s26wwrio4Rp8x3mESywBtA1I7pLvdClwQGy/4rK4JMC1lq7A4GbXv1eG22bZ17uyyazE+7ISye3x
JrDbt7j9kZ2Mxg/dPvl5LAKn9RHPdYdTbLTzemJffcwwJ10DVYSD1FXz8qjedRz/tlEANyjIhoit
0HQT4FYQ1HU7bftACPaVIROEPVE9M8/TkwhquLqHbai91nxpMPRkLvYguySNNhfj62nbjsWo4DXO
emER09SJBZYrmEL0PqaZ+BTEe986iDSqJC1Q0YGDLGmMSg7iY0awLlU77inv7rBajf+H4+5P1FVB
p8D8u6V0eV5ygye494NcR6mHNfh1S3XJPxJKJuGPPNDzoNZXqRfyRkE2Cia4wQ97/sbHWL9mUP4W
IBuFgcFrSnJGnNfpofAf7GaXIOw3dCHsH0QOPO45MpLJdT1ujQhK0WnJ5yjIoVTnJgo7IqgDpK71
gtcbLl+skUOXILWpL4d7GnyunRuXH6KFUEzcbI9aB0QTW/pR2Xd75rjcudi6d0y83PANUOuiQyge
WEI1nnPOgj7wGLkHlaHWmAG+msl7XxHMFfIWuo/xAX5noM2x21nmx43hYnscCD7vYDqF8UyZ3emt
31q9Slz1CxxNyAZLoB8umaFvtqQscX0GAo5udVGqnJvmSEifoDQai6yL8kZnQfHHs16RnP9g6mPA
Bp4uelbbGbBmTzBOkdwNT5xwjTqYXAIKjx/8Zi2gFbtgFcM/Lxr/PZMn3+zqaJcclC3nOfD0pFim
jJq9uvTRd8YzowbAwEr16ZYkOCnPz8nOxFoEivOhOaqZU/sFpz21yCIO34s+kvKwNMPM6NIoQfWO
3nlDaR4DO5YcikbEQxg+ZnsYA/GXXnBeLobsAYDKG2V+zjFlgSCvjh5P05BDLW9UFVQnatNy3v/Z
IEDvSPmv8YJswKBJXm/DcE/oqoXTt0DHJmozpdOY8l16wACNwBty/W1fmuDZL4aYVUUd9r/A/FY1
W757rawM4j4l1LUjPLbvYDurEGjNTmihARb14XFdsLa/R/mW5zluu2bOq0aW9CUpkjpJlCgZ5/uA
rAJCBF1d7q4yTuEOk0G8JvGKUUMfibVPtniGfMsbvkn+LvNNhBMME5axuZDMgtnzUuuFO4WtHGn1
CR8JRgDNRw5y5DQhXbOEkw9JY8GusegZPxQW/VoLj2GF7yKs/Y/8fzISwUJk/CYDziO8doWaBPsZ
HC9n/I7zN+R3tQJjLCpvKm/1znC8qa8RmvzeJZWW55c/cR4Awgr3gf3BruTTgVt1jkRanAfZ58sp
6t1ZFTZskJX2chU/R/k1yz5+PjAY1eGm2HEjr8VvxnVpsr3QkRaw8VwV6jmhxtW/HdBY3Sk8Lx0t
BVaJfUhyWnh/XKSUS6xkIlyezPNrbKwlIt5KHE9v/RoHy0pzY2KTxDQpE/1g5BVATjs5NKeq+tDH
Ngm5kqDZUAn/d6jwPDwM6SG04nTVKws19zGYGcPoOWHza0OXOzVJTYkoVzczQb7kmRVa0n69cG+p
GpREf10tEB0mnkPgIMSrMue8wc387rhKMu518Usfh2mkpTojT0nenRCkkB6uVytpzITDcwjDScFt
N5Qf1K9edr+ntCfZatJz8k+NCnDETGtT2OGZQ3jXaFrvMJ2GtsQCsutR9YRzCqoORpjM67+/lkTM
4BOYi19ohPiT2kudoSVEovhTwZFBlO6+vrcsOCjQOvlys67Y4XOLlA9JpLIZQo4KasAL38icfS0N
EAgMCfvKM9M/UH9qTW4dEi3rP8Vpm1MK9Y5alsU9VTO7DMyMyeISzJF6A6Yji0eGuBwMyvDzGgj2
N+DWrTd9K26+vO4MD2dGZBN6lq76uFy6Ct/PhLiPYtYctohYWG8IBkFv4DRrkjGk4GmO6e+Ifpzf
D2HlPqEM8Idy10JJktQSoxB2Xs02ZlOJKzlrcTf0crODayXXZx9apOfIly+E0EefZlPIItM6zR00
7DREG4KkIkYMHm/fxbTfHiAKkKX6NlDl58JWZnBXbbiu+O/0/NUgDnp2kMNjNZM4OPTdlv1F7jnZ
fyEwp9vPd4BZmy0SHaH1y0fzSK7BGwnOoQ4mgcXKASPYUNzXEjnp/kYevobTi4pZi0qy9MlaVhWX
4b4oLAqmYAPxERf19GEZ9oCj59p+1FqxujEhhjkAcprlKhXGYJw9OWkH15pKrEsfkf2O+SKmfBzo
IY4F9/MartuBGearURAVnjGz8IHl8kgAaucBg2tbtcWXPqN0KqV3LFJejDDGhPJy383n6QQ4MyVJ
RHcNWmP3BX1aCSQ3EHMGyEqAA7Rz5oV+pK0zmOdY5L9MT5x7WxYWFGZE3/OBxn6JTRK5S+40xckx
pShX/lYoqdyopoDrUg/TtFJvsEwcRA27+s3s/99GLy4/T852TYQJug9WtcHXuQEJS8TuIuLSdWxf
ZDEas1Gvo2A30Sah7FaZCN5DJkjjVRRiHk+QzcwZcmAWtkPD6ZLYWSWR+auISNMS/4XO2Q9Zi2Kx
3xTDehdC+giGh/ESAkOezfGS25UfhUcvatg1J72tIzg0ij978LrEUltTFsv6ksutlh6bObjPNJZ6
VUpb7S8XVzsONKSZ47VAFpj+p//875UOro35CndkbloQ4uMp7n+dtfm8B7wIHufU3FxyTyC/ieNc
5faaa/Z/KdZtSl+3tRWmX9T48xv8gcnhdj4gXOLgovuTH1NyH7LETzlRThVD/9rqG4O1DqE+1Zzg
lT9tMh6T3ly1FZp6Aq1he9F4emkWdCGW30VWNMXnhqc08hy3Xxo1J9MeuRfwGjfQIIxf5/MNC2Ld
Y0J0jHK728ZnWlLSp/5q+Is3lLO9gIB9uDamUgTSHiZ5jlGCQiw1pkcBzUaEP3cSQdBrYgYH1Ge9
HrRPxscZlndQeOf1z9NOunt2AXA4ZQoWYstEu6qMuGG/cQEx/Qp6lXLP58Q2eyztlwPoZpoXGZeG
ArMleALlJ2VqriSi61hReHzDGrjjdcFIwAx0zt+KKWolrqcu1t5wYx9CNgV8UUabLd9rBlM7OZ0K
x51U2BpIOzafM7jtpW5SoV8wcIYUcREUQIfcSkPBxEE/EP7kKu7++ZTfyKciMk1UELlUDsDygqPZ
Iue2WD8nHeJK0bp+0MSYRJdx0/cSJrzB0yZablOMoy/trOAJSsoK8Yy8PVgtsjsLSGbzEJGgsQcz
HMHN8BiI1MdvaT2ysgVD7bts9T5xN0eUHu7k3XP0lMQsSy1nWM4AbPeAbZ5TE1AkhohYemI/8Ynu
+JjrB/K30MSBFcfBTxyH5oXDYOZfp0Si4ZDtoUVkUilHe6ci30aUsf2HhtyBnZRCrmGzXNwHYYsP
0C5s9hsrEmNZDhAG2uWskp/YDSsfd7HLz3wHX1hpeNZ0T2o1EFOp9HCIO1QZdRA+Z5cSieQqAqSS
SC4/uy1HRWDXTwh8jr3a3QCZFuje2vB7TXWbyFDfnhQpFVMIECToWM7Axomn6ZTUPbZsK7vW70pL
LSs9OMGYR9g6m66BX3fRg+XdldchvOjDAm1+ojWTsH4MxIfEPJtJ609cXAV872mzi/yP6xGOTq2L
xpeyWp74e8WSQKvgGvm9Sh/I2RoBjiMpclMcJERCavvvJZGLDFOd0o+DQ+22iDi1hMICrjgKUK4y
jn2EbE0sFoloHOd2ONiITeDbQ4EIzjLjKMOdBaUk3naQpIqHVNt+DZTRsuCnT0aYVQk2z3G3ZFS5
B+hlWpAcuYJGB+wWkBlJ0nfmDxatY6xOMZ5f1H+zmy+ILFWDkYImutBcCyYy0aFt5fZxrl9OrgVT
mQ0a/AyU9C+vpjUvslDlFOwMWlw2T6nDScc1y73mwbRrdt32YMacCy2QRwYtZMbeMJFNbEYIP+X8
+4Ua0B61zEEDNaVGn56gt32tkGYbgcqf+ANXSIVnWRXRdwA7HRp2zdQMaKulT9WGEzFWdNWg8FIT
85fq7EzPxUUN9sKaDDxPL4frRR3wlgT1jdyqAh8vDtHknr4ZS5vCqg4IIV9e4duGO/UG6onNZzNb
ctkud93U9VFoK0WmgUJWzV85+pQKP7aQGeCaqPnuG79doX+DBumfuDDyuhFN0DBOHpsZHrjRwN9P
glp6jRi0lAyf/jhNpcfdfwrQl7MvDqhoCxDycQbXuwPZE7CWB/JOEZ4ioTUuI7VtZo9YKp5vvFt6
snve4s2jlaqXVewxTJFSZkWP2OxKDRkR+AVQD8dwlDFi+6YPC5nHshvXXpMXmE7meBWGSzaz08/i
SaqdAe/IQUVocPBjCuSNkOBSgNilpfc7C8KMOxFZn4TkaRyYWoI3wbZj6Voovi6p/wtjwQGVVrvH
VT2XJRPdPHi38v5nFwhXCov8Ef23xRzAMcdibSAqlQn30pO8MJUbZncrXUgDbHV+P2n/pSE1tDAl
IpDSzCQ/6y5rPqxM+0qAjdShxPYW2mr2po1PDX1dWCbx1YVonqeRwGl01m8XB8JhT783cv7RTIM4
tOF/xzJuihr7Vv1u2oVlAftsSoJ+DuhIZOSbxK4nqA9Wc4NTYwHpw6fTdslQV3Yw6MDufPQOoLPb
ZUSWkGYTmKK0jrxVabI23sEppwBjYg++ZTdNlX66/Dr8XtlLKegFtv9KFuo8ryg825/A4zWXRyU9
M91YpsPx5u4LL5cInsD4D8P+HCIt2zG4aw1lskA4v5t5yXMl3+R84TUWhyFZ4XwKTX54/2LDOrHG
ONGAD+dcHE+XP45szNLgQ+jm5GjzbfShCqZNA84TBYRq63N0bd045SLzQrg6FSF9LRY2fJXwSiaf
mlPktdBglKGi4ctP+upeDzBDFdcT3Tn6SAyQB8ulysP/kdrtEA/uoOibCNiEtmWai24+rcVeWHQj
jmvMl5NurtmuOa/MjBNEsFTeTHiaqbwQjXyveuwTlmPqFkwYI6E7l+ZPboqa0LiAXB0aGYRIe8tt
KTr4LnMuF/wJ4uRopp6HKk+CYwrBuXypX9R0vBQdhZ6xpVfW13F9NJX5bYpnfda/D4VRNjeYyW3o
yxo5KlCcUQO3y4FWd6ujzAAf9/GmyTl39R1mX7V6AJ8RAKqEnJvgHMKNdKR6Y/nMj5TVtF0yY0BM
MCkslnl1sHafBsHf/t27kzxRp+Rbl4MGQ3HKXgQ9NNs690hs0lLx1ttHk6BhVvyzOEDpZ0TOdB8R
WZP773fVuudMakOZKoeN0P8oHz55joBXI3Aga9FWbb8lFCzFhD4iAKILZE3yj22DO/uNtjZztV11
217c58K9UtLCMU+JHiVk1EtSl/ml9yKYl3fsmzR8igNL77/rVvkXexiyh+kErUGv9GOY+p9eVCNL
kI+lHpTJCS0y6/6fXPQ5696nbNxXQnUo0+rzqHRfftTJ0P1uEseKFr1SmlTgpUByIRrSO86GwWMB
NvuIN67pAK9b8b100In+vD3x3lhWiPzTZvTF+bYrxFOdCWHbSJkxrGroQH8DhJ4DRhnW6sOFZNVJ
sRiv24obk/mUqSpWAbr9eAX9H8d3Prgi/eAmpWOEVP7GVF/U3ZIZjbHR7v92kCfTXXZtmKbYQ3Il
aN0ejTzL2fAikKRmGdm+yLj6ZiJ3SiNkBdK6Zli5WxHOrXU0z4pB68gZW3H8r5Rs7s6aRBt0LVyv
sl7qdZxgWco8C9UzeJ8AUVVocQFOVFDwxqdcMdyaXFajkWlLdIrbne0nBnuxlQrEXLgBziRn33M4
fJdka7oEdwkvUbX+JIPnOL6G/SnyliWcXFFvAdBh6Bkp6Yj8fwUpDyUo1z9DivaZ9z99ljL8xZov
+OVbQeXzQgrVyvo40kFwMWR0S0VGe5wf0AC5jU/GDjW7uhriEfBaM/ljFlqOawrPNqTcU+cPaUhl
7w4QWBZBBfVY7ivNLAbQV0+5+3OiYfAjJGf1bxfJtpHQJUEq2FYUWvAM1b2D4eUF1Vj4lo6caK8+
GTpoNY+xzjJdqvhsrf85xPIjCf/yTcWsVihjjvxIZEJz6/gxHMbQnFsNDUxb96o2h3Qd3qrA/iOm
AhCUz8YC7NdgPARQ1E5dSC56s8flnFzkSiyhwMbS+R52UqHDegxNLU+/4i7N+F/MMPDjNLFmnYoT
t/k25WCNq5fWcaKG2QeGFFmu0d6Qg4NvWDDJJ2TWOqomr+iBCq0hBXnpNTwAiI6O7yb/zRrYacPh
dclshLnZWMUlwZcxEPCJvz4mkonVEeTlbtwElSaxRhjDHTeK4s7DvFQnLZXvHwj7gqvbOC27wB3Z
n2Rw47Ocr4C8OZxGYmydx8DGonhCZfDyXknyq1m+VzZT4YgLus3LC9X5SlQ+SI6oGdeeWyxqPBLH
Z6jqxRfMve6Mcz0O3z1lE2f0B+vm2HDkg56iK46U4ngs94bkPbIoJzVym0WX0eOF83Bz+W5IdV4n
Zn14og0fc3LixD05bAv/i6lRXXkdP49J/NAUWwX3XLvEB5UoBPwGe9uUGih9xd1bmhqatIDB63Iy
920aXZe0f6qN6qDkIiKA+EsaJ4CL1mTPhw7wKtaOkq+Xi8G2KrxqUSY8x9mxzj7OthRqWKyskg01
/9PmupcjP9ffAQxSswuqjcs1UPWVZgcEUBmnlrJpYJ+i0y8waUe2J9SU8IMskVeuF1QTkxM4Rbvb
nuqD0ScVK3Zb8zmDUyT7HMX8pZcRoOK/yaSgOTuFmPD9x6Cy5F/J33OUV9kjb0MT8cMpXeDcNUbe
acRqT5BpNMBq0Crz3W93+Fb1Y8kMHNaZxAkPz3/ej+RPu5DaTZ0WpdT74ntanOVdrgTkSLWcmOm+
WZEIyeUe5NIX7sBMLJfLQrVGkcMUvrdpmZEt8ZJePkBVWN0zCgnHIXoLtcMJ73PYE5e/LP1r9+zo
+pUllaes9HiocnpvGcTzhPX8z+jihpMCxILxI+69XQvoSGnpT1HJNn+VTXpLqomXL20Tr8k58Psi
G9Xp2szjvCpEkSPFE8cabfRT2SO0eKZu7pbzB16EgjgPf2GMgv90MTNSpOLWGa2CSO2qEu9JVEZo
XYlRRlVteFkrc8uBNMAS/mpG+/eyTxEdfB/BsCmMt7aO0Zgnn1IbuEdKt84+7iQ1fPflhLopJUqE
GWF3y8w+cy21HzrqumlarjWyVankjWv32Mr1LL5S5A+mBOy7b1Tri2RsX4P1xCYkgsqCTA+hYLWS
PRetyhVjU7uqoFV5qzxxRdOf6LqyvGXwVAGa6LD6mNcGbReFDcSDkcF33Cuz7mnuTceYn0It5F76
gzp0HKFknH5BdevzimCfqUYLl8lJxn7A3MUdkR9S8ntGT3ZVbtMcIHltZNbXIkBhOhMDW136HpGb
iszQbyC6eLvf8RjKW5dvxBbjOSSl6gCtPcbKSZe4irfr3HFsqFWVr8W2VWHkLmHXyA/UXhOzqQD0
8qsKVhVdYABe8U5Acxtb8C0zeF1OgjzxmtEdulJpo6BKP/pVDa8q4fYclx3hk1xGqwOWx7K4Ynn+
k+Yiqp4ETs5BcSfd+JYHbS0cTx35hKwcRvaC7/KZws7zxDSJG3ev43T0or1zYb9ePk3//DO+GTlQ
WxYM95d+oi8gLHXdbwFKLZ7VhqBS2owyURcEBKAHPqJUQvwY2fgP5/UoEQrZcUrQ6aYWlLvWN9iJ
fiRfqpDS8ctlUrIbSAiz2tw5GQbz6mPo+78gbfE8JLmLul0FjE03AGzbS6by5jBdmJn7iOytLXVD
1BHtwYylBeuClVvEYRhPatTJ9ejibE9noBvTltBFfjxaRzFi9qg7EW8hM8hxQFZFpG5r32an7dpL
5KeXpFLwsxBsAh6AIMnZov2ziSl5NcJvlLTFY/qG8Daw0knfRTO89HxOZefzORgwQEk/EfhI9rPH
HQLHZbHiYL6HktiQ6bg9XvW8dZU0J4IzsNMb6oj4tP9mSgSjv+gf52qja/MQdpgu94KI9c+7bYLL
39Sy3c6Swpf396bjAx1P6TF4YqPOvilX5XEarQ62gMMIqQ+4xxXI9fA/nskCg7+fE6mbil5raqIk
09f26T7WCZd2BY6XhOAdFauufHwpez3B2WR4lGBiNYVVgKrNNZ+fv22k1AUAZXYq9pjC6aQYOd9p
UJYAnAnHKvKZ7RDiI20krWDGYEXVYr1NVpHMhnqhcbM4iF/HLY4yTEnoRxABXFjZIpxdahK6BfSW
XsN69ZGtVENjz17GeswIyCpbcuYhdk7Yh2D2R21wC77EGfvVy463EErY/JWNxNdhRhT1989n4Ki1
mHU9TX7kyxxFGLvvvTwspPCkEcjYIgIqymTBp8MmFTYZhDt9TRejcPeNj+QZLG3g1/Im23f0CUF6
dH7bILe6bMzBdROXjq+sD16+KAEl0JCMsODoAEcFKTbrcQn1+/lfQu583TXVkBX1PIMf5snzv/8R
zdyUld7aKKdV4jsn/81B/Wp4AIgJ+fBjR7VANocGkcwi3GNBbnyN2aP5u0+gdmax7MNKz5mbzp1N
I5Q0K3PHO8S6g04AvcIEFnHegTydGA+7mJAkwecmgZqOfRv/blkrcqefMphhbPICgwLjUVud05GO
59ynC+hu/LnkKrYoNGA4u0A76b09qI9cclB/OWCZENzVq+azQR0b4i5Z57l/KVZcgueAB+/+l2g4
rCdkJCficeIxPGLA7HEjvXaU3xTALAB5P7B7FhDJOaEfyDyXT82rSJ1VW9QXsLGRwwjTbEOCL1hX
sTxrIiGqXsNlWhb4sbhHFnTwbTlw+jJbdEYEMdKZWI/yawajungUjBvXQUhuwNvKfI06YbvbJp22
nk1Rj7WYcmjG9Us2nNjJBrw77sguq40HeLHFOGNyLWowQnUK+sOLo9kgRC9f0hiJR3c3gA62QO66
8MFD69A2QW65tgx68TqadPnK2hIB6vKEvLTfuxYYpSi9+VLz+MZAokJccyz+BFIG2bNpCE7VVyxN
QKiM1ptP38JlMASMhD9JxVzUU1Mgi4cgiOBqAGwhUpywtMFiTmVRwdayC0c61xUOkaYxb+5o+nxC
D48efXCjFEY9lpLzILkSFEeRRAitr//IHxVG/bk0WsxMQpbfIIHMyADmqSiGeSjh+4+RHaz1n3C2
kRBiemV3X8VLzAdFNr04RB6I5XYyMQ9En9jEqbQjSpDfZRURm4Vz3F4UdzL9cvZ8wKnd86iCIu5U
25NyzrmjF03sL6EFR2njZiYC9thbQJBbD+g5kdfwuDp3vrEWb0HcY1hos475WeVQRE73c4V8wzmy
FNrtWajQC/b0fHKiWGx/CHcqTb67NpSfzXml3kjhkKoxCHXNML+NlgG5v8n5hVniEXF+UNDbJnxE
NcR5FUAfTV4nN9pqMFNNqj8e8SFmAZL81sFacLq6XxdbwVkhx9iV8+R0pSaEKIGkYxyl3l+yam67
O0p3N781docWeChhRTvli/2272JPVqjTVJa6+IYqLKPb1Q48haLPwmJfGXnlw16KKxu2/A0xMcsX
+e6ogV/kyzIqWQU5RoujEAj+V8hYOSA6ns/2qwyrFBdgBDYelRWcmgu7T0CAL6/dPQILrigGoI9Y
GSjTl3WyO24Ssm4CZC575FjocGfmF2+2U8uwjBm/Nv2c4GexC1kqificvDU6cJaR14cIOJW7q9cj
aAXde/wx+FWBUs7Cq+zyd+eDg8GhFwdxetHcsfrD8jvHyi/cokcjk3cMzgnmsNj4UH/MLYJErVF3
0nhaMzMSfiYq8SOoYIvrKl1dcmTxUqo5fDu1Yc008D9s6atBSnUIhfihah93ijj74jpxN79B+rlF
/wOxhncTqZQd7LGlEsJX9lLNinWrTdA4MGMjs4yWnqfaou4EO0XG0ZEXm/KrlBPFJK16lNE+pc6R
/l5aQJXDtKtfS5J2r9WXxk1zo9Tw5SCdQ5PrMCjA0CGp/k0f2az29zN5EkZyGQ3AiVi+KQHLdmYg
xulvxqK0GMFUumNDR0DE3GOtxZkqHQY8AJ1InS1p0jdzvA+GsiDRO+VN8RpmMD2Z/4wNbHoPiA8c
nIMSEkEt9zNKuBIXSxKTG48FN7Uyj63RJb8dEFAxWmMFDmrKMejbSnCn/5Xlagby8JVFZK27ZiMw
Sj10JB3CUEAl9NOrpaGI+3zi/+nbQ2Sez4gTePKldRIj9i2kuFwZ57Ko1BGU8MWdogdMZ1V5uZMH
CPzzxnrToOCQWGlazKAaES17DWIgSSSZP9S8YeaZIXK48DTvV8+tVZmFVgi7A+AuFxakbFqRP3Hc
v5dLwElQJlFtvCV+aRdhXQ7J9zdeSW40WjvFr1DSPPUc6PAlj5ltD9zptNzXdgpUlD1O3fiu02qk
BSXgVbfaOPFj2vXh/p0TFPQY5r/kYXAIJHVyM/zZJIM6AmjZMRqPRaAIPyEdiW+uFDaApTcgHPTW
zOzEV3m6lhOkQeh7mU1QX340Mro0ewFEhOWf0IH7M6Q575m6nT7xlJPRhftrah5UkLrlj5kHoauz
FAkqbHVatnFhMEw1dC7cVqBZ6Q2FOtrGHgtroYpgjWdqReaKxd/5r1B3TDZgmdoKWQbn34zUBp2v
aeegDVF6WAFf9fjXMPxMpxodsbA4QcUCI3LYGsX0oGfwqodZDfVPVkcNF5yvkLrk2z7kkTqym1FQ
sNZFgIsRZH72z+COOye4UFnX1xLIV6tzuEPNaEWhlpB1YRAmI17B7adMM07mqZZ2bIbg5D/0afg6
MYTIycy078aWCkOym+JJQ8FqrbT6RIA7e2HEaULy3T1Q+IlqZmMxJHGKwOU+Ah3dRvYCYZppHGL3
8CiVFk8+LMzCrNzxNQrU/My8DXTQvq4uwoONNb0hj/lecsP3e0Vm3NrexY5m7QXTIF7cE3yL5oKX
pq3pOnc7ENV11azGhYPHirqHuAlquTXLT4zlRJOymgPOayiCzqaR+ZOLySWNuFZO/XSLslk8+JGZ
BifMs7RqCstQxgYLHnsdlDjNBoijqzTS/cZrLgChZ4UO7Qf4eExq+qsELn6ZkMRCIJGhWWeHhwS6
WKATW3Ht00P5ZOE136qPfa/ZDlB/avO4T4NBIbsWYOaM0Psum02LbQ0WlNZ7d0qOgF1gHuGDR4uB
1GtmZmTPZ/0VqEgFKS6PnALZHyptrMyX4n+raT4+ZeKIfNVRrKVrA+M3Wx+0rXoAA1D7ifBcL0XV
az/RFmF9IMd586gKVAdN52Fl3vvwGWZQKm9cVngYn0aBDr4pS0jb5y8JwAYLt0elRNwcuDMMZP9N
cOzyPq4dn/E+9Mpbwz5KtmSpEYFfyvfFFvDWS5UPCjoFTd9d1egaEqwBMe6rDYaCw6vW6026IuFF
ruevyxR16iiXlvRBK8FqyuDH1uWk6V0dCob/DpOJ9zSSKELw4/HH4Y9V7jZTvY3PQYDOLTm52NG+
peoopr5qRiMyc+3CKQNGu9JZ6rvzwXyZyhUCGpSl0FRa8d1Hqp0AgFU0GASnLoI8xcwi9QYWNuHz
pbf4qhMtGjyQAgPbDYy98uc4FXqKxHXkCZipwZ+sLC424ah0iakrXlnKwm7dbaPnOM26wXn3x2Az
54r1cU7urepehhhrq1wfk2HxVENrzZyLL6RAU/wOGg6HZj/IghW1/JZpojyuEU57oo445HYaalR0
tSAATxT+1KpQ8AKUDzgxDZR8Zh42UMKT57e0uUbt6buTX+HGzfinAxIW9wLLi4yraWWQpdxTgTS/
uOidVaQq6l2yPdPrDryTOJftJEKN3TB+BRM4LGGvG7hRtiFEob7D7eu/tz/TbQiRuHi/sfnU0QnQ
XywmWZWCCQ0cguNL4HubBU7d9ovb+L3zQfJQXErjtLS48UpsqoBqozpdVJAYLR8Tadyb8YZ+xfar
UKqR5NLfPMNmjfgob9mcK7AtLdhTdV8IHS/cU4L8d/L9hDmfBh5vnJRcvRB6aQjESgoRJK+0TRjc
huI75fbJNE2FzqjIAVNwyg2xLwMWIJKB5ghtoLsNiWrcVU2d6BNuJF5TLaoPfODHxo0KQJUBxK74
ylVcTTNK/onChtyU3DMnedFJ42XYV1gJWXeqAbiCGg92Np0DAt0FvwjgnlDsIARhwg8JdFz2U2YM
YjqJrTXUXYWvvR8uQCEag0whPMYw0VtWgtbnOYhYmq5yYu2iv6jeec4horh9+OqRjILNX+4/jTFu
3MCGSkvAa5kav+k1Rt/GLOvBFZQUtImgI6I05alzFENx5fr7zXiEGbNnFAYeyk80StNwI9hA4u8O
/1U/CSWa74UmpXVyKCYq/JkWZEx7qNfLgalsB3kwuKmDFh00mEdqOuNWUa1KvL9gfD/fkQRXoqVn
06n2n8a+t4zg6QJZg0H++H0C7//v2vsUHOrZ5It16exKe7t43Jk9Y6fZT6k9d8cGViQyidU1EyPH
NSTpCSO//AOVKUWhIYjfayb02Y7r+w1c6g5Cv2V9a01t/2OsKmY3vsFeEBpwiPACmr9L7YuXz2BW
Q28wSu8rCyUBVc0P1nTvIn3Po7fcUlSC1JkF5BcCSsgUEw2aLYz8jau3w5ZHEvnHIEMCYhecMbCf
JouSElXQ3/xP5DRDnfd//ORYa/r1NW2E25Ih28iu29tcgycZ1/AH3SC8p7q1I586qghU5kqiMwr8
YAj6jZMhbFdNSgOfs49tT0SmO3Yj945J2z4ix67Nwekiek90XJLwFJeyW8gMI9TpQLHuRjUJRRKX
fxxjnqTa+SJP8KV+WvcZrAMQjq9TYFqdCUNteCvp5uqMG8s4EcAVe1bey2R3J/CbWMeq3zT99DJ5
5s/sNewHLzFUzeMgQzTtRg/mMeGuGzAhQfVgEqqMeyqUaXFBsAUVi7xWG1KXt6T0V5VC8tL76GPJ
wOmfXOXH4+9HkKwSmfV3aQUtuFZYvCx9wUqhRnxnhkr+7+0YhABIFI1wi54iUrVHBNHwOcrmU0l+
73iQGH6AM1tn6/ZfeE4xS6VRpQzMNHszILapMFpVZwpdhhTugHGhuu6JJosBAF8tuHFY0REU1kza
S9XiUVRbfR/plInWuRTsXjyEUAX3US9Bs17xKJs1q94J4jRzcOf+zjGm/lqXoLs9NCljWosXP8KI
JDl58HvvGH4KvBUqZudh4xxXrRO+FNYzPgKS3C4T1/f2PzymYcGkYD/DxC5cyikJW4WYrfjeeM0B
wL2+SO/ci6ncBSseegjBH4RoaZyyOpqpxSQ82dY2jWj853cROu6cVHLcTC++5l8mCOpTzrqFUxXL
smeNOwH08hxv5aaelmruMtgzmM45zYnxQ9G4Q22Qyf4WpeYw3YvCFs2pSwSSZXxH2H/krB/Cja3M
obfjsiZArrfkDzkJ0uMQoGE4wpjtMntnImDKkjDT6CfsumOFXsVqoEN98CIG0vwfvKKVm6i/l4Xm
ow+zIDX0e7h+gsCAbkPPrEbSiegdbo7s2muImJ/y/82WWXxIsLyEHmEZ5zbtX+gjTx+x2qW9AvsK
f+20kKpEaEsG8Lpu+tuSLl13egzxh+Kzz7oRzLmxzYKacfUpAQ+y1Zmmoo8HnDvb2M5HotKan5P3
zXYp+e1sRlfRZ9nQtrQE1fzSv3Tt7klPDLNn8OrLpgqBoKiC+k5KiR73txtgKylkRH2sJF5NdSXQ
rFqYm7tIwEeyZIVAJPnrCaO4CpExpUC2UO7UX3UMAAY+Wkhe+SXGeppdBkPUmqZYdq3LUAv7o+f1
UZceFzuI4F8FGmBvASHC5f00CJMxPeM0jzDBaHHdrXFOwFZCy84gOEqkBT2wpQZLVlcUMxzX5+BS
I3qBeGOLytL5IxKhayghOqSKsJ+f388OhKd33+yLopMVzckAilNd2Jn4Kx7L3JLRF8QN3NfrZdUx
+SgH51gDtlCKsGWUY1kMFqCUme12KGjgK+3CSH05/0OCZCcrNS8LnE/4Ff9D+D6yqmjEIep6i2rY
eYT8NpIG0PvhUjJrvGYaxUcB0H9L5BMvraw1YVRt1NRDkPyonMryjh9lZ99e/BdQq0dvB0x96DhF
MM01PDlocAbaEq4C3FQZTIOF4z8tBKslHJVuzNa9eGUC99tMCtfwdeFL5mZO2/owgkavJaThJirE
lygHU+SaxyhgNNVQe+DMrgLgjz14KJe0UVo0PZgZiXCX7gHyoDOb1tsFpmCOSAXvUkPozs1kbrvD
AlQOyyql0PgZjO7nfSGdzavVZUUR7JU0R+OZqTQOlQXJEJznk75eNvMVayqNe5kgwotxS3tRVh1w
yqP6HnsFYTB/RoIJdahn7G8P6DeDVr6JYg0O55YtS8VvKTcnhKdGlmnzqJnqtb37sqA9Dd42i0BH
A8fflb+qrRDs7nCAweF7WAUCkDCA4XboTH633qJlGt/MkVq6fjqNPSXFh3NdpPUZBmZXrkE7CB9A
uTM/NS1ShWFFgyJMn1P2w6Q3dHFMkpjDGczFPyOmLAsiGIJpf4bffakdmd5b5BgdnTO447YK27wk
fOysdFgyjjxjAkKBGADSp6c2Rk7huBn2wLK8ljHCWHdBE7uJFT3HhXa0gX2qoYs/YNWfmWUCBNed
9wNAoSFTDMjgLsJFUJyxKIw6lB30r9JxpRkSbXCUKUGnWjswrSacb3HjD220pBZc2RUvvveBZipq
qdZbEf3j8h4FaCdhp8DpH5WEdhdr3N9xJzTusx9O+/wjfrGu/Lq+6stU/xrWym+UWQ+2Rb9Lis6T
pgrfL6cp4YfvUepuehsICYrbsA077tFJT6w28I44WC7a8sk3lF9Yr52zNWEzEr1u2WSF6QOi0F8r
zF8BA213Fv3/JU9fMYm5E82aHsYQk0VxyAknw+C2I9wSdxr5wCQ1/XE4MyTz3QOik1M3X1Lmnv0P
BEyiivvQhdPrXNIHwLXDQtaeZDLIqZ9meMQ9Y0kVSmrQXb8DUsMJA/OsCEVR5pCeZmkh9sxzHh2t
rJcYBIyNwilgOl2I/CG6HSBQ65uYWMtHalLiDDeN3k3VZJ/UD32vkz7a1tnbdihM1Kx9Ih7FMQ7S
yLvJ/wGk6vz8DtxMPvz7qi8HjrlEfIIYgxPwECCMBn+DWCWJzsb7MlXERjMmwFozp9Ini6jmNCF9
Ef07PMr0g/HdtK5UYrt3uOzwqMiSwicELNVFdtj0S7b50wtNHBgYztmdjxvOGoYwsxHPMUHchY73
8yBX1vu/33x5agH2SNJZq0I8AUAclEseqIsaF3SCRCC39qrVE6A11NEffxWESCka3JH+jG3GvZXw
C+SXorgdF6+8SOWINKz4mFZYXpw5bqd3CaQ+PjNs7Gb5hTMpaiX9xaOpJrOmx1h/aoZ/e8lIC7ck
g8Pxi53NtRAyVj5cFyz6joGMor/Qc4r9iEtPzDdidqw3CHlFoGAh3Ln7DSHJ1gxVwtBy6e7+OwOb
l+FQgEJDTHn9otklhz/6cGY0JdeEQmj/MYKyarIBtN85Um+jxpBVZREGUVTBzkv5+98GZOHgAlwH
+T9VhnFdqapl5IY1p4sIuORIqrXHdNDECsI2CFuy+MoP7VoZQ5XlL+gAvZw4WqWTtADiw5Fm5h/B
xFZyB/80EuJeBRH/O3AMNL3oXF79lQhVCeWpLUXiEi6sVtbSUBBdpC5NBOu1FJVRZRw5sglC0giT
qgTPWOHxCIjWXYls9kOyRBHhIR3bryd5BSHvwQu1Cwkqgrj4BtiopjMUeQZOesXVoylKzDfkoSE4
IvOO6jbPHehkt5PpZqWEqNVFFFAaHFCiigY0zV2siYBRD3xqgBxy0F0vEyBGdtkD7ClPCccXNEQu
Rbbq82/SEXxJ+/IaX7vhlvruf0Q6OV4W4yXpxS5t2B0aRjfp8IKA8YOE8BwhZqKA2iYEEChMYalu
GKgZTxqEoH5zQICeHgZBHLQdV4YqPuIFqabXvqQC+I+JemgrjDmM+ICSZsfSVxNabgZUxAeXPbs2
uEKBX9Yg1BDjlIPfZKr7YQBvmB9qEQIcZeTKuSQ5h6QES9GH/MBhwwO5E1KgKEj/NHM9IWW3HOtb
Z5DY5LRJGk2vm2yjzwzzsx1QN9M80+s3dS2XNlX/9lwVDLnylrsKZ0lmjLKNi6k82wdnCeQJIjAi
jVpdVDs/H6XMenyCh7hnM3p6wV6FecTeL0nOZM09kvnVbOSr2XfK+jt/MeleOEo2lX90GK3ekpoH
YV4FojZdMYNa4sQr5zIgxQXC6j8eRjP5ySWs2Wxm3hzd3+hubr2NQxoP147NrpyO+dlT2cCyR7wx
lrsIUm1xyXsrlo6pbYH+pEpNpqljcQbRQcY9nD2JRnJn0em7Y/eR0dT0mk859Wyfx7ls4CIghdTD
0ugvBClK10afY86k31vTcodnLwkTtY5E9RCJ7Dg8T4gvYQt3Ce8wrX3o//vsbVzq0p4RDz99DJ3G
CKdZz3HlpIYSN71LuPj+wq6sq/41Ad2m7Pe991/Q2nfHP/p6W2+SvskCMF0DMc8B3SIxGhP+3vDf
RYkDtwHfW6nSJF9v1hmQEoOPBP/rg7Zqq/S4pYsI0xmy+k9wlzgejFqI/t8oSj0PopEOo7oAp8Z/
LqGWxPF7iYN0Ixu2tsYHwyicQART7iLKedwS/chgM/39JXwlOlXUiorSduwDCA7efE52MYreWUOo
NsCpKVQxfxrOQfD2QXqwsMh4Ub4S+qqOs95KLyrc5RT6vjzO7TuvqW/XlGXFmVfLcGaEJRb0YvrR
wnQ+8e0t4AFisNxhYNrarij1CJyg5Cl/iZhZNEdzqbzPG5iWOr66nf5u9KItbxNUdz7tUERY9nnG
OMvgJBwy+vjw9jjyDmuCag9cRAx7eAk8SkI0SXB6Gox7aaQho3IAycHWV7x6RRupec/570juRZLh
MdsT5oOiMHGl29KjJm9f5e5HCH5BRPnNpdZmHNXWrZ0M4QGNgXsg8i2jULiUtoL6hMyfQJyjz9Qw
C+tR3bGJraK/UXP5wfCMKXoLrA1Mansg08vVs10t7ElNCC4dPSvpdElX+zWqOQ4FLdwadmY1uDji
4rUHhksHsdCIxHnqbIKE1BwSZV8nYGdeCTo+fW6//vt7BtSdzMY68soG1Og4ONGIT2Ln+y7FuWHf
QWFCCtruFuHgXx4VG4J6aXPsgiLNAIpw0ioAOsCHgJ/BD3mKeVod+NbeG8Q4PbT3jAiL7fgLlBuO
H2wD3JUv6CSSP5feWYtsaUmXfMaajhe4Z+4INUF7eVuDuJE8gp1peiU6f9iLxamakFfeAjgHdqqy
7fzYEo+Rux8jiJic6FKp9ajmzVcvOebafx5tJvlaB4k4KfnEW6csNcN+DEBe6u2AlI8OZrSdvTl0
l+xdZH7CuEnFqt+Vbica+dFAaqL6qRsdxYPPe2FdLVIC2Fv8wGnIBtsjeDh8H1MwPOFRe3U1qVVt
2wInuKt+76zvTcAEXxCXhTn3DjQrO3ux8mJC/WXK1fe0HIc6wHMn5LtQ/t7bSq7U4Km1/Q4Fpikh
3WkCw3RF4acfJw2kidx9KqTPeQ2Yc7HDeHZThvk70ZbwM1UUcr0zE2PA/8Kc5DGjjbynMZZ0xIkh
mPm8FAQrfe7s5dm3v64sTYOffGLbKVX+1XwJN8ajQ75AIZhknhPPEBvptQh7YhqmIi0Sw673nHif
dai3O2uaLXQcK/XQ+GZVm7mKlGsmANzTLlYevIN8m8u1vgOWPVJZBRjkbG3mUEb60tovpIXu/pxZ
1qYA0GC2J9ZwaQZ8dc6i80m9LF9FWZEapSHwoqSc7icpwWfge9Xh5q25AJIcDLhxo5k2XYLzyGvg
FeOWRhh7Xy/63/GKn1/FuqKHukGSndmK8WV8FConOACOKWRyJaW0gZF96mN029im9zd4LrW3GwG7
4jTQhgG67Q8rkNIWJiavBuh4bboqOKRwdPjgEMJtj+c13rXXW9j8UypsLzs7uU7IabKz9cotOh13
eldtWySBkX6t7r2IS90cM4Q4yGE24SBOEN1kYJ9XgkDAQGFV1XnC66BNGwoOB6deirqAad2Rc+/J
aKZZZoBQzQlSqyVLXZgiPvK/xYymvI3hes3alU/VGPiGziJDUh7FoApFNSy52LjZHisblmSliG+x
PzfiOnirdp4XzNPV0Zq4NsR1FcBsZvhZAd56L0tucKkjUpLBgtwI5swHO3EjWDwEDti5m/vLwGHq
NbUhHtuTzcHBgq2zTmc/kR3ceql0J4S/PBDmfIW+xCxCVNjR9I+9UlJjBONsSV90TL/QCZIyMeFp
S4uDWqAIEU9AaeGieDqPhDqqJpa6RlbBsWhoIXvgumePrqAnhGSFGnnUWf4A0D8KSPxclDzscEtr
g6dWbWx/5IgSqIqhLD11iM+xsBEVurLiMng86IpGezSvx4rStojWzROyL1EG8X2IvbODJ5tzDzbW
AlZc6mB77TnUCuzDlV+7uUnv0MbcH0EuF0KR5Xw+hCW0UnTXhXocSCECG8gdRoP+Fl0sFHxOFd2c
DBwrBLRMr2reDRO9VzmDiqhrR+1pjFZc4MWJJ7ecCviq1pFkYltY/1GGyon+m2Zddh9l2RtIz8Nf
fDtt220djoQEpqVmpXKw9sa8/F1+DsEhpEoQDemYo3VE93JLm83yfHdTM9//+D7hGxfTWWFj1gEx
h4+2cF64olv7fwsvIL3LrJr6FesvLv4lN2g8wTKgU8SJyfjWXtGe/17h2msUeE4OHC2lBjHwygdy
myS6VlGYUznvm41bvvhI1TkYKYH4uj6TSQWRkN4YHcR5czpvLKHWKcJpgnGWMqblNTnco54uCd6h
VfI/a1OnUaqRJ+mbCjLyKnjmyeOh9y2uSw7J38qz2x4lVw/tAou4WHCH3Jgwqk3q8fTfd+1Sd1sm
UcJj8A4+uat/+ZEuLWTtmhrye0xALEliyjoqd69JTvyNfxrXaOx5j+cAPajjG8td9V+OZYkTVH/k
i6SwazhEi5MlImUbZYOkXDnu/YbD4Wyhgc4rXY43FSHlywtk5nMMiKR2iAYBUsCtH0pviJJ5Q99n
MEV6G5coepE2oKBpgbtzq1sNX9XUydBCmtdNAvE0DOZ86oj6EJZ2yepmbq76iLsm7IbGACrDV47w
hXaQCTx4MXodeocCvMQk41hBFVPNdd5Oiz9F0vGO4b4LCvlQJNZtTRNXwvB5ooa4/O0UvKmWRHt0
YZLTdRO8TD+RSpe+VgY4662X8SX4TLp4NNtLqsmJ1+tVGiWBgjuXm+pBWRnT3Qc/9sFJ
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
