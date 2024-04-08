transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+data_way0_bank2  -L xpm -L blk_mem_gen_v8_4_6 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.data_way0_bank2 xil_defaultlib.glbl

do {data_way0_bank2.udo}

run 1000ns

endsim

quit -force
