transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+inst_way0_bank0  -L xpm -L blk_mem_gen_v8_4_6 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O2 xil_defaultlib.inst_way0_bank0 xil_defaultlib.glbl

do {inst_way0_bank0.udo}

run

endsim

quit -force
