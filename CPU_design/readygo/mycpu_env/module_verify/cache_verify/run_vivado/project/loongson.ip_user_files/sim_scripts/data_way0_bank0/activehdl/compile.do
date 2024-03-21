transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vmap -link {}
vlib activehdl/xpm
vlib activehdl/blk_mem_gen_v8_4_6
vlib activehdl/xil_defaultlib

vlog -work xpm  -sv2k12 -l xpm -l blk_mem_gen_v8_4_6 -l xil_defaultlib \
"/home/ysxashore/App/Xilinx/Vivado/2023.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"/home/ysxashore/App/Xilinx/Vivado/2023.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93  \
"/home/ysxashore/App/Xilinx/Vivado/2023.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work blk_mem_gen_v8_4_6  -v2k5 -l xpm -l blk_mem_gen_v8_4_6 -l xil_defaultlib \
"../../../ipstatic/simulation/blk_mem_gen_v8_4.v" \

vlog -work xil_defaultlib  -v2k5 -l xpm -l blk_mem_gen_v8_4_6 -l xil_defaultlib \
"../../../../loongson.gen/sources_1/ip/data_way0_bank0/sim/data_way0_bank0.v" \

vlog -work xil_defaultlib \
"glbl.v"

