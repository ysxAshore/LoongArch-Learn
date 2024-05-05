// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
// Date        : Wed Apr 10 14:55:17 2024
// Host        : ysxAshore running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               E:/Projects/Studying/LA/LA32R_GD/Chiplab/chiplab_env/fpga/loongson/system_run/system_run.runs/tagv_sram_synth_1/tagv_sram_sim_netlist.v
// Design      : tagv_sram
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "tagv_sram,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module tagv_sram
   (clka,
    ena,
    wea,
    addra,
    dina,
    douta);
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTA, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE OTHER, READ_LATENCY 1" *) input clka;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA EN" *) input ena;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA WE" *) input [0:0]wea;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [7:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DIN" *) input [20:0]dina;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DOUT" *) output [20:0]douta;

  wire [7:0]addra;
  wire clka;
  wire [20:0]dina;
  wire [20:0]douta;
  wire ena;
  wire [0:0]wea;
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
  wire [20:0]NLW_U0_doutb_UNCONNECTED;
  wire [7:0]NLW_U0_rdaddrecc_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [7:0]NLW_U0_s_axi_rdaddrecc_UNCONNECTED;
  wire [20:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;

  (* C_ADDRA_WIDTH = "8" *) 
  (* C_ADDRB_WIDTH = "8" *) 
  (* C_ALGORITHM = "1" *) 
  (* C_AXI_ID_WIDTH = "4" *) 
  (* C_AXI_SLAVE_TYPE = "0" *) 
  (* C_AXI_TYPE = "1" *) 
  (* C_BYTE_SIZE = "9" *) 
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
  (* C_EST_POWER_SUMMARY = "Estimated Power for IP     :     3.08085 mW" *) 
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
  (* C_INIT_FILE = "tagv_sram.mem" *) 
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
  (* C_READ_WIDTH_A = "21" *) 
  (* C_READ_WIDTH_B = "21" *) 
  (* C_RSTRAM_A = "0" *) 
  (* C_RSTRAM_B = "0" *) 
  (* C_RST_PRIORITY_A = "CE" *) 
  (* C_RST_PRIORITY_B = "CE" *) 
  (* C_SIM_COLLISION_CHECK = "ALL" *) 
  (* C_USE_BRAM_BLOCK = "0" *) 
  (* C_USE_BYTE_WEA = "0" *) 
  (* C_USE_BYTE_WEB = "0" *) 
  (* C_USE_DEFAULT_DATA = "1" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_SOFTECC = "0" *) 
  (* C_USE_URAM = "0" *) 
  (* C_WEA_WIDTH = "1" *) 
  (* C_WEB_WIDTH = "1" *) 
  (* C_WRITE_DEPTH_A = "256" *) 
  (* C_WRITE_DEPTH_B = "256" *) 
  (* C_WRITE_MODE_A = "WRITE_FIRST" *) 
  (* C_WRITE_MODE_B = "WRITE_FIRST" *) 
  (* C_WRITE_WIDTH_A = "21" *) 
  (* C_WRITE_WIDTH_B = "21" *) 
  (* C_XDEVICEFAMILY = "artix7" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  tagv_sram_blk_mem_gen_v8_4_6 U0
       (.addra(addra),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .clka(clka),
        .clkb(1'b0),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .deepsleep(1'b0),
        .dina(dina),
        .dinb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .douta(douta),
        .doutb(NLW_U0_doutb_UNCONNECTED[20:0]),
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
        .s_axi_rdata(NLW_U0_s_axi_rdata_UNCONNECTED[20:0]),
        .s_axi_rid(NLW_U0_s_axi_rid_UNCONNECTED[3:0]),
        .s_axi_rlast(NLW_U0_s_axi_rlast_UNCONNECTED),
        .s_axi_rready(1'b0),
        .s_axi_rresp(NLW_U0_s_axi_rresp_UNCONNECTED[1:0]),
        .s_axi_rvalid(NLW_U0_s_axi_rvalid_UNCONNECTED),
        .s_axi_sbiterr(NLW_U0_s_axi_sbiterr_UNCONNECTED),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wlast(1'b0),
        .s_axi_wready(NLW_U0_s_axi_wready_UNCONNECTED),
        .s_axi_wstrb(1'b0),
        .s_axi_wvalid(1'b0),
        .sbiterr(NLW_U0_sbiterr_UNCONNECTED),
        .shutdown(1'b0),
        .sleep(1'b0),
        .wea(wea),
        .web(1'b0));
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 20256)
`pragma protect data_block
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
jmWaXyKuYbuatbw7vobRo9YNAW3k
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
