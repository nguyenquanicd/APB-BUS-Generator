#!/bin/bash
#--------------------------------------
# APB Bus Generator - Source Me File
#--------------------------------------

# Set the APB Bus Generator home directory
export APB_BUS_GENERATOR_HOME="/home/ltthinh/apb_bus_generator_thang"

# Add RTL directory to search paths
export APB_BUS_GENERATOR_RTL="$APB_BUS_GENERATOR_HOME/RTL"

# Source the filelist for simulation/synthesis tools
export APB_BUS_GENERATOR_FILELIST="$APB_BUS_GENERATOR_RTL/filelist.f"

# Print status
echo "APB Bus Generator Environment Loaded"
echo "  APB_BUS_GENERATOR_HOME = $APB_BUS_GENERATOR_HOME"
echo "  APB_BUS_GENERATOR_RTL = $APB_BUS_GENERATOR_RTL"
echo "  Filelist = $APB_BUS_GENERATOR_FILELIST"
