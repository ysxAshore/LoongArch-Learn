// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:42 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/ysxashore/Data_DISK/Projects/Studying/LoongArch-Learn/CPU_design/cdp_ede_local_LA_readygo/mycpu_env/soc_verify/soc_axi/run_vivado/project/loongson.gen/sources_1/ip/inst_way0_bank0/inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module inst_way0_bank0
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
  inst_way0_bank0_blk_mem_gen_v8_4_6 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19776)
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
