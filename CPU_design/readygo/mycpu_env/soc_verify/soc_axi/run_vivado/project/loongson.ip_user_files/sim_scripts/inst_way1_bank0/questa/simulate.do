onbreak {quit -f}
onerror {quit -f}

vsim  -lib xil_defaultlib inst_way1_bank0_opt

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure
view signals

do {inst_way1_bank0.udo}

run 1000ns

quit -force
