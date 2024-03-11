// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:26:09 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/ysxashore/Data_DISK/Projects/Studying/LoongArch-Learn/CPU_design/cdp_ede_local_LA_readygo/mycpu_env/soc_verify/soc_axi/run_vivado/project/loongson.gen/sources_1/ip/inst_way0_bank1/inst_way0_bank1_sim_netlist.v
// Design      : inst_way0_bank1
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank1,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module inst_way0_bank1
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
  inst_way0_bank1_blk_mem_gen_v8_4_6 U0
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
