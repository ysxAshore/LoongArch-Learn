transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+data_way1_bank1  -L xpm -L blk_mem_gen_v8_4_6 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O2 xil_defaultlib.data_way1_bank1 xil_defaultlib.glbl

do {data_way1_bank1.udo}

run

endsim

quit -force
