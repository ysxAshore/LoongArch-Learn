onbreak {quit -f}
onerror {quit -f}

vsim  -lib xil_defaultlib data_way0_bank1_opt

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure
view signals

do {data_way0_bank1.udo}

run 1000ns

quit -force
