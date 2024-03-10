// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:09:19 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/ysxashore/Data_DISK/Projects/Studying/LoongArch-Learn/CPU_design/cdp_ede_local_LA_readygo/mycpu_env/module_verify/cache_verify/run_vivado/project/loongson.gen/sources_1/ip/data_way0_bank0/data_way0_bank0_sim_netlist.v
// Design      : data_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way0_bank0
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
  data_way0_bank0_blk_mem_gen_v8_4_6 U0
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
