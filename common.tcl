set ip_name hls_axis_test

# Open Project & Set Top-level Function
open_project ${ip_name}.prj
set_top ${ip_name}

# Add Files
add_files ${ip_name}.cpp

# Solutions : AXI4-Stream
open_solution AXI4-Stream
source device.tcl
create_clock -period 3 -name default

config_rtl -prefix "axis_"
