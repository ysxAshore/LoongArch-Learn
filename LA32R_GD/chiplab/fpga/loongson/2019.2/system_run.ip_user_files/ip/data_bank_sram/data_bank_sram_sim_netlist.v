// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
// Date        : Wed Apr 10 14:54:36 2024
// Host        : ysxAshore running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               E:/Projects/Studying/LA/LA32R_GD/Chiplab/chiplab_env/fpga/loongson/system_run/system_run.runs/data_bank_sram_synth_1/data_bank_sram_sim_netlist.v
// Design      : data_bank_sram
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_bank_sram,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_bank_sram
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
  (* C_INIT_FILE = "data_bank_sram.mem" *) 
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
  data_bank_sram_blk_mem_gen_v8_4_6 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19760)
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
