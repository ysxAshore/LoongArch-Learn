-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
-- Date        : Mon Mar 11 12:31:00 2024
-- Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
-- Command     : write_vhdl -force -mode synth_stub
--               /home/ysxashore/Data_DISK/Projects/Studying/LoongArch-Learn/CPU_design/cdp_ede_local_LA_readygo/mycpu_env/soc_verify/soc_axi/run_vivado/project/loongson.gen/sources_1/ip/inst_tagv_way1/inst_tagv_way1_stub.vhdl
-- Design      : inst_tagv_way1
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a200tfbg676-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity inst_tagv_way1 is
  Port ( 
    clka : in STD_LOGIC;
    ena : in STD_LOGIC;
    wea : in STD_LOGIC_VECTOR ( 0 to 0 );
    addra : in STD_LOGIC_VECTOR ( 7 downto 0 );
    dina : in STD_LOGIC_VECTOR ( 20 downto 0 );
    douta : out STD_LOGIC_VECTOR ( 20 downto 0 )
  );

end inst_tagv_way1;

architecture stub of inst_tagv_way1 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clka,ena,wea[0:0],addra[7:0],dina[20:0],douta[20:0]";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "blk_mem_gen_v8_4_6,Vivado 2023.1";
begin
end;