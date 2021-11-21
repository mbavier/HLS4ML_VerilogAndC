# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1283 \
    name conv2d_1_input_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv2d_1_input_V \
    op interface \
    ports { conv2d_1_input_V_ap_vld { I 1 bit } conv2d_1_input_V { I 1024 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1284 \
    name layer5_out_0_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_layer5_out_0_V \
    op interface \
    ports { layer5_out_0_V { O 16 vector } layer5_out_0_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1285 \
    name layer5_out_1_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_layer5_out_1_V \
    op interface \
    ports { layer5_out_1_V { O 16 vector } layer5_out_1_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1286 \
    name layer5_out_2_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_layer5_out_2_V \
    op interface \
    ports { layer5_out_2_V { O 16 vector } layer5_out_2_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1287 \
    name layer5_out_3_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_layer5_out_3_V \
    op interface \
    ports { layer5_out_3_V { O 16 vector } layer5_out_3_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1288 \
    name layer5_out_4_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_layer5_out_4_V \
    op interface \
    ports { layer5_out_4_V { O 16 vector } layer5_out_4_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1289 \
    name layer5_out_5_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_layer5_out_5_V \
    op interface \
    ports { layer5_out_5_V { O 16 vector } layer5_out_5_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1290 \
    name layer5_out_6_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_layer5_out_6_V \
    op interface \
    ports { layer5_out_6_V { O 16 vector } layer5_out_6_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1291 \
    name layer5_out_7_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_layer5_out_7_V \
    op interface \
    ports { layer5_out_7_V { O 16 vector } layer5_out_7_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1292 \
    name layer5_out_8_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_layer5_out_8_V \
    op interface \
    ports { layer5_out_8_V { O 16 vector } layer5_out_8_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1293 \
    name layer5_out_9_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_layer5_out_9_V \
    op interface \
    ports { layer5_out_9_V { O 16 vector } layer5_out_9_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1294 \
    name const_size_in_1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_const_size_in_1 \
    op interface \
    ports { const_size_in_1 { O 16 vector } const_size_in_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1295 \
    name const_size_out_1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_const_size_out_1 \
    op interface \
    ports { const_size_out_1 { O 16 vector } const_size_out_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


