#!/bin/bash -f
# ****************************************************************************
# Vivado (TM) v2023.1 (64-bit)
#
# Filename    : simulate.sh
# Simulator   : Xilinx Vivado Simulator
# Description : Script for simulating the design by launching the simulator
#
# Generated by Vivado on Mon Mar 11 15:38:08 CST 2024
# SW Build 3865809 on Sun May  7 15:04:56 MDT 2023
#
# IP Build 3864474 on Sun May  7 20:36:21 MDT 2023
#
# usage: simulate.sh
#
# ****************************************************************************
set -Eeuo pipefail
# simulate design
echo "xsim tb_top_behav -key {Behavioral:sim_1:Functional:tb_top} -tclbatch tb_top.tcl -view /home/ysxashore/Data_DISK/Projects/Studying/LoongArch-Learn/CPU_design/cdp_ede_local_LA_readygo/mycpu_env/soc_verify/soc_axi/run_vivado/project/tb_top_behav.wcfg -log simulate.log"
xsim tb_top_behav -key {Behavioral:sim_1:Functional:tb_top} -tclbatch tb_top.tcl -view /home/ysxashore/Data_DISK/Projects/Studying/LoongArch-Learn/CPU_design/cdp_ede_local_LA_readygo/mycpu_env/soc_verify/soc_axi/run_vivado/project/tb_top_behav.wcfg -log simulate.log

