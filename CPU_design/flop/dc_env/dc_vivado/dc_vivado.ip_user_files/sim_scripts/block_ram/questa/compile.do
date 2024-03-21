vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/blk_mem_gen_v8_4_6
vlib questa_lib/msim/xil_defaultlib

vmap blk_mem_gen_v8_4_6 questa_lib/msim/blk_mem_gen_v8_4_6
vmap xil_defaultlib questa_lib/msim/xil_defaultlib

vlog -work blk_mem_gen_v8_4_6 -64 -incr -mfcu  \
"../../../ipstatic/simulation/blk_mem_gen_v8_4.v" \

vlog -work xil_defaultlib -64 -incr -mfcu  \
"../../../../dc_vivado.gen/sources_1/ip/block_ram/sim/block_ram.v" \


vlog -work xil_defaultlib \
"glbl.v"

