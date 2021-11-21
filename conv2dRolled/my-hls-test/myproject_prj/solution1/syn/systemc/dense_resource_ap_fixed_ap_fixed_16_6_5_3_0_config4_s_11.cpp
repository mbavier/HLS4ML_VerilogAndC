#include "dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_96_fu_6206_p4() {
    trunc_ln708_96_fu_6206_p4 = mul_ln1118_136_fu_35977_p2.read().range(24, 10);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_97_fu_6227_p4() {
    trunc_ln708_97_fu_6227_p4 = mul_ln1118_137_fu_35984_p2.read().range(24, 10);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_98_fu_6252_p4() {
    trunc_ln708_98_fu_6252_p4 = mul_ln1118_138_fu_35991_p2.read().range(23, 10);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_99_fu_6303_p4() {
    trunc_ln708_99_fu_6303_p4 = sub_ln1118_26_fu_6297_p2.read().range(18, 10);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_9_fu_2078_p4() {
    trunc_ln708_9_fu_2078_p4 = mul_ln1118_19_fu_35179_p2.read().range(24, 10);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_s_fu_1825_p4() {
    trunc_ln708_s_fu_1825_p4 = mul_ln1118_10_fu_35116_p2.read().range(24, 10);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln_fu_1796_p4() {
    trunc_ln_fu_1796_p4 = mul_ln1118_fu_35109_p2.read().range(24, 10);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_zext_ln703_fu_29123_p1() {
    zext_ln703_fu_29123_p1 = esl_zext<16,10>(add_ln703_510_fu_29117_p2.read());
}

}

