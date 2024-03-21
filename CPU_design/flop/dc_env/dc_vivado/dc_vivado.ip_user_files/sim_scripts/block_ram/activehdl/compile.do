transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vmap -link {}
vlib activehdl/blk_mem_gen_v8_4_6
vlib activehdl/xil_defaultlib

vlog -work blk_mem_gen_v8_4_6  -v2k5 -l blk_mem_gen_v8_4_6 -l xil_defaultlib \
"../../../ipstatic/simulation/blk_mem_gen_v8_4.v" \

vlog -work xil_defaultlib  -v2k5 -l blk_mem_gen_v8_4_6 -l xil_defaultlib \
"../../../../dc_vivado.gen/sources_1/ip/block_ram/sim/block_ram.v" \


vlog -work xil_defaultlib \
"glbl.v"

