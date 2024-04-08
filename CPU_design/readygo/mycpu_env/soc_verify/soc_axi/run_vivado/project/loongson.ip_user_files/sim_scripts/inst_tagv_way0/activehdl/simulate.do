transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+inst_tagv_way0  -L xpm -L blk_mem_gen_v8_4_6 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O2 xil_defaultlib.inst_tagv_way0 xil_defaultlib.glbl

do {inst_tagv_way0.udo}

run

endsim

quit -force
