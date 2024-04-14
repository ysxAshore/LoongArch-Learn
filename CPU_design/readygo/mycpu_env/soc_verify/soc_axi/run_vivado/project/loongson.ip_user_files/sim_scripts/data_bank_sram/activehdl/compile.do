transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vmap -link {E:/Projects/Studying/LA/CPU_design/readygo/mycpu_env/soc_verify/soc_axi/run_vivado/project/loongson.cache/compile_simlib/activehdl}
vlib activehdl/xpm
vlib activehdl/blk_mem_gen_v8_4_6
vlib activehdl/xil_defaultlib

vlog -work xpm  -sv2k12 -l xpm -l blk_mem_gen_v8_4_6 -l xil_defaultlib \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93  \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work blk_mem_gen_v8_4_6  -v2k5 -l xpm -l blk_mem_gen_v8_4_6 -l xil_defaultlib \
"../../../ipstatic/simulation/blk_mem_gen_v8_4.v" \

vlog -work xil_defaultlib  -v2k5 -l xpm -l blk_mem_gen_v8_4_6 -l xil_defaultlib \
"../../../ip/data_bank_sram/sim/data_bank_sram.v" \

vlog -work xil_defaultlib \
"glbl.v"

