#set_property SEVERITY {Warning} [get_drc_checks RTSTAT-2]
#时钟信号连接
set_property PACKAGE_PIN AC19 [get_ports clk]
set_property CLOCK_DEDICATED_ROUTE BACKBONE [get_nets clk]
create_clock -period 10.000 -name clk -waveform {0.000 5.000} [get_ports clk]
set_property BITSTREAM.CONFIG.UNUSEDPIN Pullnone [current_design]

#reset
set_property PACKAGE_PIN Y3 [get_ports resetn]

#LED
set_property PACKAGE_PIN K23 [get_ports {led[0]}]
set_property PACKAGE_PIN J21 [get_ports {led[1]}]
set_property PACKAGE_PIN H23 [get_ports {led[2]}]
set_property PACKAGE_PIN J19 [get_ports {led[3]}]

#digit show
#低电平有效
set_property PACKAGE_PIN D3  [get_ports {num_csn[7]}] 
set_property PACKAGE_PIN D25 [get_ports {num_csn[6]}]
set_property PACKAGE_PIN D26 [get_ports {num_csn[5]}]
set_property PACKAGE_PIN E25 [get_ports {num_csn[4]}]
set_property PACKAGE_PIN E26 [get_ports {num_csn[3]}]
set_property PACKAGE_PIN G25 [get_ports {num_csn[2]}]
set_property PACKAGE_PIN G26 [get_ports {num_csn[1]}]
set_property PACKAGE_PIN H26 [get_ports {num_csn[0]}]

#段选码是按照abcdefg的顺序
set_property PACKAGE_PIN C3 [get_ports {num_a_g[0]}]
set_property PACKAGE_PIN E6 [get_ports {num_a_g[1]}]
set_property PACKAGE_PIN B2 [get_ports {num_a_g[2]}]
set_property PACKAGE_PIN B4 [get_ports {num_a_g[3]}]
set_property PACKAGE_PIN E5 [get_ports {num_a_g[4]}]
set_property PACKAGE_PIN D4 [get_ports {num_a_g[5]}]
set_property PACKAGE_PIN A2 [get_ports {num_a_g[6]}]
#set_property PACKAGE_PIN C4 :DP

#switch
set_property PACKAGE_PIN AB6  [get_ports {switch[3]}]
set_property PACKAGE_PIN W6   [get_ports {switch[2]}]
set_property PACKAGE_PIN AA7  [get_ports {switch[1]}]
set_property PACKAGE_PIN Y6   [get_ports {switch[0]}]

set_property IOSTANDARD LVCMOS33 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports resetn]
set_property IOSTANDARD LVCMOS33 [get_ports {led[*]}]
set_property IOSTANDARD LVCMOS33 [get_ports {num_a_g[*]}]
set_property IOSTANDARD LVCMOS33 [get_ports {num_csn[*]}]
set_property IOSTANDARD LVCMOS33 [get_ports {switch[*]}]
