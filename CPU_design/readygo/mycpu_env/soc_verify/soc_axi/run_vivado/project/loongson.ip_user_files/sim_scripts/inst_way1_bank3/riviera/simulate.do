transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+inst_way1_bank3  -L xpm -L blk_mem_gen_v8_4_6 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.inst_way1_bank3 xil_defaultlib.glbl

do {inst_way1_bank3.udo}

run 1000ns

endsim

quit -force
