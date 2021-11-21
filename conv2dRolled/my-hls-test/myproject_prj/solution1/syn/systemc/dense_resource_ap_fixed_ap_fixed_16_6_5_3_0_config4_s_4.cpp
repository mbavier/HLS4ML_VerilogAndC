#include "dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_68_fu_32760_p2() {
    add_ln703_68_fu_32760_p2 = (!add_ln703_60_fu_32751_p2.read().is_01() || !add_ln703_67_fu_32756_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_60_fu_32751_p2.read()) + sc_biguint<16>(add_ln703_67_fu_32756_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_690_fu_33916_p2() {
    add_ln703_690_fu_33916_p2 = (!add_ln703_686_reg_42979.read().is_01() || !add_ln703_689_reg_42984.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_686_reg_42979.read()) + sc_biguint<16>(add_ln703_689_reg_42984.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_691_fu_33920_p2() {
    add_ln703_691_fu_33920_p2 = (!add_ln703_683_fu_33911_p2.read().is_01() || !add_ln703_690_fu_33916_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_683_fu_33911_p2.read()) + sc_biguint<16>(add_ln703_690_fu_33916_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_692_fu_29949_p2() {
    add_ln703_692_fu_29949_p2 = (!sext_ln708_409_fu_15538_p1.read().is_01() || !sext_ln708_403_fu_15360_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_409_fu_15538_p1.read()) + sc_bigint<16>(sext_ln708_403_fu_15360_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_693_fu_29955_p2() {
    add_ln703_693_fu_29955_p2 = (!sext_ln1118_1075_fu_15868_p1.read().is_01() || !sext_ln1118_1070_fu_15680_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1075_fu_15868_p1.read()) + sc_bigint<15>(sext_ln1118_1070_fu_15680_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_694_fu_29965_p2() {
    add_ln703_694_fu_29965_p2 = (!add_ln703_692_fu_29949_p2.read().is_01() || !sext_ln703_142_fu_29961_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_692_fu_29949_p2.read()) + sc_bigint<16>(sext_ln703_142_fu_29961_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_695_fu_29971_p2() {
    add_ln703_695_fu_29971_p2 = (!sext_ln1118_1082_fu_16172_p1.read().is_01() || !sext_ln1118_1078_fu_16030_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1082_fu_16172_p1.read()) + sc_bigint<15>(sext_ln1118_1078_fu_16030_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_696_fu_29977_p2() {
    add_ln703_696_fu_29977_p2 = (!sext_ln708_437_fu_16471_p1.read().is_01() || !sext_ln708_432_fu_16322_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_437_fu_16471_p1.read()) + sc_bigint<16>(sext_ln708_432_fu_16322_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_697_fu_33929_p2() {
    add_ln703_697_fu_33929_p2 = (!sext_ln703_143_fu_33926_p1.read().is_01() || !add_ln703_696_reg_42999.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_143_fu_33926_p1.read()) + sc_biguint<16>(add_ln703_696_reg_42999.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_698_fu_33934_p2() {
    add_ln703_698_fu_33934_p2 = (!add_ln703_694_reg_42989.read().is_01() || !add_ln703_697_fu_33929_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_694_reg_42989.read()) + sc_biguint<16>(add_ln703_697_fu_33929_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_699_fu_29983_p2() {
    add_ln703_699_fu_29983_p2 = (!sext_ln708_450_fu_16742_p1.read().is_01() || !sext_ln708_443_fu_16625_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_450_fu_16742_p1.read()) + sc_bigint<16>(sext_ln708_443_fu_16625_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_69_fu_32766_p2() {
    add_ln703_69_fu_32766_p2 = (!add_ln703_53_fu_32737_p2.read().is_01() || !add_ln703_68_fu_32760_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_53_fu_32737_p2.read()) + sc_biguint<16>(add_ln703_68_fu_32760_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_700_fu_29989_p2() {
    add_ln703_700_fu_29989_p2 = (!sext_ln708_462_fu_17048_p1.read().is_01() || !sext_ln708_457_fu_16894_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_462_fu_17048_p1.read()) + sc_bigint<16>(sext_ln708_457_fu_16894_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_701_fu_29995_p2() {
    add_ln703_701_fu_29995_p2 = (!add_ln703_699_fu_29983_p2.read().is_01() || !add_ln703_700_fu_29989_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_699_fu_29983_p2.read()) + sc_biguint<16>(add_ln703_700_fu_29989_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_702_fu_30001_p2() {
    add_ln703_702_fu_30001_p2 = (!sext_ln708_471_fu_17329_p1.read().is_01() || !sext_ln708_467_fu_17175_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_471_fu_17329_p1.read()) + sc_bigint<16>(sext_ln708_467_fu_17175_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_703_fu_30007_p2() {
    add_ln703_703_fu_30007_p2 = (!sext_ln1118_1107_fu_17688_p1.read().is_01() || !sext_ln1118_1104_fu_17512_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1107_fu_17688_p1.read()) + sc_bigint<15>(sext_ln1118_1104_fu_17512_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_704_fu_30017_p2() {
    add_ln703_704_fu_30017_p2 = (!add_ln703_702_fu_30001_p2.read().is_01() || !sext_ln703_144_fu_30013_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_702_fu_30001_p2.read()) + sc_bigint<16>(sext_ln703_144_fu_30013_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_705_fu_33939_p2() {
    add_ln703_705_fu_33939_p2 = (!add_ln703_701_reg_43004.read().is_01() || !add_ln703_704_reg_43009.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_701_reg_43004.read()) + sc_biguint<16>(add_ln703_704_reg_43009.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_706_fu_33943_p2() {
    add_ln703_706_fu_33943_p2 = (!add_ln703_698_fu_33934_p2.read().is_01() || !add_ln703_705_fu_33939_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_698_fu_33934_p2.read()) + sc_biguint<16>(add_ln703_705_fu_33939_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_707_fu_33949_p2() {
    add_ln703_707_fu_33949_p2 = (!add_ln703_691_fu_33920_p2.read().is_01() || !add_ln703_706_fu_33943_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_691_fu_33920_p2.read()) + sc_biguint<16>(add_ln703_706_fu_33943_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_708_fu_33955_p2() {
    add_ln703_708_fu_33955_p2 = (!add_ln703_676_fu_33901_p2.read().is_01() || !add_ln703_707_fu_33949_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_676_fu_33901_p2.read()) + sc_biguint<16>(add_ln703_707_fu_33949_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_709_fu_30023_p2() {
    add_ln703_709_fu_30023_p2 = (!sext_ln708_488_fu_17970_p1.read().is_01() || !sext_ln708_484_fu_17817_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_488_fu_17970_p1.read()) + sc_bigint<16>(sext_ln708_484_fu_17817_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_70_fu_32772_p2() {
    add_ln703_70_fu_32772_p2 = (!add_ln703_38_fu_32714_p2.read().is_01() || !add_ln703_69_fu_32766_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_38_fu_32714_p2.read()) + sc_biguint<16>(add_ln703_69_fu_32766_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_710_fu_30029_p2() {
    add_ln703_710_fu_30029_p2 = (!sext_ln1118_1123_fu_18298_p1.read().is_01() || !sext_ln1118_1118_fu_18100_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1123_fu_18298_p1.read()) + sc_bigint<15>(sext_ln1118_1118_fu_18100_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_711_fu_30039_p2() {
    add_ln703_711_fu_30039_p2 = (!add_ln703_709_fu_30023_p2.read().is_01() || !sext_ln703_145_fu_30035_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_709_fu_30023_p2.read()) + sc_bigint<16>(sext_ln703_145_fu_30035_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_712_fu_30045_p2() {
    add_ln703_712_fu_30045_p2 = (!sext_ln708_502_fu_18638_p1.read().is_01() || !sext_ln708_496_fu_18470_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_502_fu_18638_p1.read()) + sc_bigint<16>(sext_ln708_496_fu_18470_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_713_fu_30051_p2() {
    add_ln703_713_fu_30051_p2 = (!sext_ln708_516_fu_18872_p1.read().is_01() || !sext_ln708_510_fu_18761_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_516_fu_18872_p1.read()) + sc_bigint<16>(sext_ln708_510_fu_18761_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_714_fu_33961_p2() {
    add_ln703_714_fu_33961_p2 = (!add_ln703_712_reg_43019.read().is_01() || !add_ln703_713_reg_43024.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_712_reg_43019.read()) + sc_biguint<16>(add_ln703_713_reg_43024.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_715_fu_33965_p2() {
    add_ln703_715_fu_33965_p2 = (!add_ln703_711_reg_43014.read().is_01() || !add_ln703_714_fu_33961_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_711_reg_43014.read()) + sc_biguint<16>(add_ln703_714_fu_33961_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_716_fu_30057_p2() {
    add_ln703_716_fu_30057_p2 = (!sext_ln1118_1136_fu_19129_p1.read().is_01() || !sext_ln1118_1133_fu_18964_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1136_fu_19129_p1.read()) + sc_bigint<14>(sext_ln1118_1133_fu_18964_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_717_fu_30067_p2() {
    add_ln703_717_fu_30067_p2 = (!sext_ln708_536_fu_19362_p1.read().is_01() || !sext_ln708_530_fu_19220_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_536_fu_19362_p1.read()) + sc_bigint<16>(sext_ln708_530_fu_19220_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_718_fu_30073_p2() {
    add_ln703_718_fu_30073_p2 = (!sext_ln703_146_fu_30063_p1.read().is_01() || !add_ln703_717_fu_30067_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_146_fu_30063_p1.read()) + sc_biguint<16>(add_ln703_717_fu_30067_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_719_fu_30079_p2() {
    add_ln703_719_fu_30079_p2 = (!sext_ln1118_1146_fu_19638_p1.read().is_01() || !sext_ln1118_1141_fu_19485_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1146_fu_19638_p1.read()) + sc_bigint<12>(sext_ln1118_1141_fu_19485_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_71_fu_23939_p2() {
    add_ln703_71_fu_23939_p2 = (!sext_ln708_388_fu_14726_p1.read().is_01() || !sext_ln708_2_fu_1892_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_388_fu_14726_p1.read()) + sc_bigint<16>(sext_ln708_2_fu_1892_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_720_fu_30089_p2() {
    add_ln703_720_fu_30089_p2 = (!sext_ln1118_1155_fu_19990_p1.read().is_01() || !sext_ln1118_1151_fu_19792_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1155_fu_19990_p1.read()) + sc_bigint<15>(sext_ln1118_1151_fu_19792_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_721_fu_30095_p2() {
    add_ln703_721_fu_30095_p2 = (!sext_ln703_147_fu_30085_p1.read().is_01() || !add_ln703_720_fu_30089_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_147_fu_30085_p1.read()) + sc_biguint<15>(add_ln703_720_fu_30089_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_722_fu_33973_p2() {
    add_ln703_722_fu_33973_p2 = (!add_ln703_718_reg_43029.read().is_01() || !sext_ln703_148_fu_33970_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_718_reg_43029.read()) + sc_bigint<16>(sext_ln703_148_fu_33970_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_723_fu_33978_p2() {
    add_ln703_723_fu_33978_p2 = (!add_ln703_715_fu_33965_p2.read().is_01() || !add_ln703_722_fu_33973_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_715_fu_33965_p2.read()) + sc_biguint<16>(add_ln703_722_fu_33973_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_724_fu_30101_p2() {
    add_ln703_724_fu_30101_p2 = (!sext_ln1118_1166_fu_20310_p1.read().is_01() || !sext_ln1118_1160_fu_20113_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1166_fu_20310_p1.read()) + sc_bigint<15>(sext_ln1118_1160_fu_20113_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_725_fu_30111_p2() {
    add_ln703_725_fu_30111_p2 = (!sext_ln708_353_fu_13851_p1.read().is_01() || !sext_ln708_558_fu_20439_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_353_fu_13851_p1.read()) + sc_bigint<16>(sext_ln708_558_fu_20439_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_726_fu_30117_p2() {
    add_ln703_726_fu_30117_p2 = (!sext_ln703_149_fu_30107_p1.read().is_01() || !add_ln703_725_fu_30111_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_149_fu_30107_p1.read()) + sc_biguint<16>(add_ln703_725_fu_30111_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_727_fu_30123_p2() {
    add_ln703_727_fu_30123_p2 = (!sext_ln708_574_fu_20844_p1.read().is_01() || !sext_ln708_568_fu_20703_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_574_fu_20844_p1.read()) + sc_bigint<16>(sext_ln708_568_fu_20703_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_728_fu_30129_p2() {
    add_ln703_728_fu_30129_p2 = (!sext_ln708_585_fu_21108_p1.read().is_01() || !sext_ln708_580_fu_20992_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_585_fu_21108_p1.read()) + sc_bigint<16>(sext_ln708_580_fu_20992_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_729_fu_33984_p2() {
    add_ln703_729_fu_33984_p2 = (!add_ln703_727_reg_43044.read().is_01() || !add_ln703_728_reg_43049.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_727_reg_43044.read()) + sc_biguint<16>(add_ln703_728_reg_43049.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_72_fu_23945_p2() {
    add_ln703_72_fu_23945_p2 = (!sext_ln1118_1061_fu_15091_p1.read().is_01() || !sext_ln1118_1055_fu_14940_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1061_fu_15091_p1.read()) + sc_bigint<15>(sext_ln1118_1055_fu_14940_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_730_fu_33988_p2() {
    add_ln703_730_fu_33988_p2 = (!add_ln703_726_reg_43039.read().is_01() || !add_ln703_729_fu_33984_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_726_reg_43039.read()) + sc_biguint<16>(add_ln703_729_fu_33984_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_731_fu_30135_p2() {
    add_ln703_731_fu_30135_p2 = (!sext_ln708_599_fu_21342_p1.read().is_01() || !sext_ln708_592_fu_21231_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_599_fu_21342_p1.read()) + sc_bigint<16>(sext_ln708_592_fu_21231_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_732_fu_30141_p2() {
    add_ln703_732_fu_30141_p2 = (!sext_ln708_608_fu_21619_p1.read().is_01() || !sext_ln708_604_fu_21447_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_608_fu_21619_p1.read()) + sc_bigint<16>(sext_ln708_604_fu_21447_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_733_fu_30147_p2() {
    add_ln703_733_fu_30147_p2 = (!add_ln703_731_fu_30135_p2.read().is_01() || !add_ln703_732_fu_30141_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_731_fu_30135_p2.read()) + sc_biguint<16>(add_ln703_732_fu_30141_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_734_fu_30153_p2() {
    add_ln703_734_fu_30153_p2 = (!sext_ln1118_1192_fu_21962_p1.read().is_01() || !sext_ln1118_1188_fu_21773_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1192_fu_21962_p1.read()) + sc_bigint<15>(sext_ln1118_1188_fu_21773_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_735_fu_30159_p2() {
    add_ln703_735_fu_30159_p2 = (!sext_ln708_624_fu_22190_p1.read().is_01() || !sext_ln708_618_fu_22067_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_624_fu_22190_p1.read()) + sc_bigint<16>(sext_ln708_618_fu_22067_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_736_fu_33996_p2() {
    add_ln703_736_fu_33996_p2 = (!sext_ln703_150_fu_33993_p1.read().is_01() || !add_ln703_735_reg_43064.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_150_fu_33993_p1.read()) + sc_biguint<16>(add_ln703_735_reg_43064.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_737_fu_34001_p2() {
    add_ln703_737_fu_34001_p2 = (!add_ln703_733_reg_43054.read().is_01() || !add_ln703_736_fu_33996_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_733_reg_43054.read()) + sc_biguint<16>(add_ln703_736_fu_33996_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_738_fu_34006_p2() {
    add_ln703_738_fu_34006_p2 = (!add_ln703_730_fu_33988_p2.read().is_01() || !add_ln703_737_fu_34001_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_730_fu_33988_p2.read()) + sc_biguint<16>(add_ln703_737_fu_34001_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_739_fu_34012_p2() {
    add_ln703_739_fu_34012_p2 = (!add_ln703_723_fu_33978_p2.read().is_01() || !add_ln703_738_fu_34006_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_723_fu_33978_p2.read()) + sc_biguint<16>(add_ln703_738_fu_34006_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_73_fu_23955_p2() {
    add_ln703_73_fu_23955_p2 = (!add_ln703_71_fu_23939_p2.read().is_01() || !sext_ln703_22_fu_23951_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_71_fu_23939_p2.read()) + sc_bigint<16>(sext_ln703_22_fu_23951_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_740_fu_30165_p2() {
    add_ln703_740_fu_30165_p2 = (!sext_ln1118_1202_fu_22473_p1.read().is_01() || !sext_ln1118_1199_fu_22325_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1202_fu_22473_p1.read()) + sc_bigint<14>(sext_ln1118_1199_fu_22325_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_741_fu_30175_p2() {
    add_ln703_741_fu_30175_p2 = (!sext_ln1118_1207_fu_22748_p1.read().is_01() || !sext_ln1118_1204_fu_22584_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1207_fu_22748_p1.read()) + sc_bigint<15>(sext_ln1118_1204_fu_22584_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_742_fu_30185_p2() {
    add_ln703_742_fu_30185_p2 = (!sext_ln703_151_fu_30171_p1.read().is_01() || !sext_ln703_152_fu_30181_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_151_fu_30171_p1.read()) + sc_bigint<16>(sext_ln703_152_fu_30181_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_743_fu_30191_p2() {
    add_ln703_743_fu_30191_p2 = (!sext_ln708_655_fu_22979_p1.read().is_01() || !sext_ln708_221_fu_10029_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_655_fu_22979_p1.read()) + sc_bigint<16>(sext_ln708_221_fu_10029_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_744_fu_30197_p2() {
    add_ln703_744_fu_30197_p2 = (!sext_ln708_665_fu_23268_p1.read().is_01() || !sext_ln708_660_fu_23114_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_665_fu_23268_p1.read()) + sc_bigint<16>(sext_ln708_660_fu_23114_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_745_fu_34018_p2() {
    add_ln703_745_fu_34018_p2 = (!add_ln703_743_reg_43074.read().is_01() || !add_ln703_744_reg_43079.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_743_reg_43074.read()) + sc_biguint<16>(add_ln703_744_reg_43079.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_746_fu_34022_p2() {
    add_ln703_746_fu_34022_p2 = (!add_ln703_742_reg_43069.read().is_01() || !add_ln703_745_fu_34018_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_742_reg_43069.read()) + sc_biguint<16>(add_ln703_745_fu_34018_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_747_fu_30203_p2() {
    add_ln703_747_fu_30203_p2 = (!sext_ln708_675_fu_23571_p1.read().is_01() || !sext_ln708_670_fu_23429_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_675_fu_23571_p1.read()) + sc_bigint<16>(sext_ln708_670_fu_23429_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_748_fu_30209_p2() {
    add_ln703_748_fu_30209_p2 = (!sext_ln1118_1231_fu_24451_p1.read().is_01() || !sext_ln1118_1227_fu_24310_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1231_fu_24451_p1.read()) + sc_bigint<15>(sext_ln1118_1227_fu_24310_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_749_fu_30219_p2() {
    add_ln703_749_fu_30219_p2 = (!add_ln703_747_fu_30203_p2.read().is_01() || !sext_ln703_153_fu_30215_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_747_fu_30203_p2.read()) + sc_bigint<16>(sext_ln703_153_fu_30215_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_74_fu_23961_p2() {
    add_ln703_74_fu_23961_p2 = (!sext_ln708_406_fu_15499_p1.read().is_01() || !sext_ln708_400_fu_15314_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_406_fu_15499_p1.read()) + sc_bigint<16>(sext_ln708_400_fu_15314_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_750_fu_30225_p2() {
    add_ln703_750_fu_30225_p2 = (!sext_ln708_691_fu_24785_p1.read().is_01() || !sext_ln708_687_fu_24618_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_691_fu_24785_p1.read()) + sc_bigint<16>(sext_ln708_687_fu_24618_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_751_fu_30231_p2() {
    add_ln703_751_fu_30231_p2 = (!sext_ln1118_1246_fu_25031_p1.read().is_01() || !sext_ln1118_1242_fu_24908_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1246_fu_25031_p1.read()) + sc_bigint<15>(sext_ln1118_1242_fu_24908_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_752_fu_30241_p2() {
    add_ln703_752_fu_30241_p2 = (!add_ln703_750_fu_30225_p2.read().is_01() || !sext_ln703_154_fu_30237_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_750_fu_30225_p2.read()) + sc_bigint<16>(sext_ln703_154_fu_30237_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_753_fu_34027_p2() {
    add_ln703_753_fu_34027_p2 = (!add_ln703_749_reg_43084.read().is_01() || !add_ln703_752_reg_43089.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_749_reg_43084.read()) + sc_biguint<16>(add_ln703_752_reg_43089.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_754_fu_34031_p2() {
    add_ln703_754_fu_34031_p2 = (!add_ln703_746_fu_34022_p2.read().is_01() || !add_ln703_753_fu_34027_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_746_fu_34022_p2.read()) + sc_biguint<16>(add_ln703_753_fu_34027_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_755_fu_30247_p2() {
    add_ln703_755_fu_30247_p2 = (!sext_ln708_713_fu_25271_p1.read().is_01() || !sext_ln708_705_fu_25167_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_713_fu_25271_p1.read()) + sc_bigint<16>(sext_ln708_705_fu_25167_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_756_fu_30253_p2() {
    add_ln703_756_fu_30253_p2 = (!sext_ln708_726_fu_25537_p1.read().is_01() || !sext_ln708_719_fu_25414_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_726_fu_25537_p1.read()) + sc_bigint<16>(sext_ln708_719_fu_25414_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_757_fu_30259_p2() {
    add_ln703_757_fu_30259_p2 = (!add_ln703_755_fu_30247_p2.read().is_01() || !add_ln703_756_fu_30253_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_755_fu_30247_p2.read()) + sc_biguint<16>(add_ln703_756_fu_30253_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_758_fu_30265_p2() {
    add_ln703_758_fu_30265_p2 = (!sext_ln1118_1253_fu_25813_p1.read().is_01() || !sext_ln1118_1251_fu_25672_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1253_fu_25813_p1.read()) + sc_bigint<15>(sext_ln1118_1251_fu_25672_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_759_fu_30271_p2() {
    add_ln703_759_fu_30271_p2 = (!sext_ln708_750_fu_26081_p1.read().is_01() || !sext_ln708_745_fu_25959_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_750_fu_26081_p1.read()) + sc_bigint<16>(sext_ln708_745_fu_25959_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_75_fu_23967_p2() {
    add_ln703_75_fu_23967_p2 = (!sext_ln1118_1074_fu_15822_p1.read().is_01() || !sext_ln1118_1059_fu_15052_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1074_fu_15822_p1.read()) + sc_bigint<14>(sext_ln1118_1059_fu_15052_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_760_fu_34040_p2() {
    add_ln703_760_fu_34040_p2 = (!sext_ln703_155_fu_34037_p1.read().is_01() || !add_ln703_759_reg_43104.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_155_fu_34037_p1.read()) + sc_biguint<16>(add_ln703_759_reg_43104.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_761_fu_34045_p2() {
    add_ln703_761_fu_34045_p2 = (!add_ln703_757_reg_43094.read().is_01() || !add_ln703_760_fu_34040_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_757_reg_43094.read()) + sc_biguint<16>(add_ln703_760_fu_34040_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_762_fu_30277_p2() {
    add_ln703_762_fu_30277_p2 = (!sext_ln1118_1264_fu_26378_p1.read().is_01() || !sext_ln1118_1259_fu_26211_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1264_fu_26378_p1.read()) + sc_bigint<14>(sext_ln1118_1259_fu_26211_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_763_fu_30287_p2() {
    add_ln703_763_fu_30287_p2 = (!sext_ln708_762_fu_26662_p1.read().is_01() || !sext_ln708_756_fu_26483_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_762_fu_26662_p1.read()) + sc_bigint<16>(sext_ln708_756_fu_26483_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_764_fu_30293_p2() {
    add_ln703_764_fu_30293_p2 = (!sext_ln703_156_fu_30283_p1.read().is_01() || !add_ln703_763_fu_30287_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_156_fu_30283_p1.read()) + sc_biguint<16>(add_ln703_763_fu_30287_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_765_fu_30299_p2() {
    add_ln703_765_fu_30299_p2 = (!sext_ln708_771_fu_27563_p1.read().is_01() || !sext_ln708_767_fu_27395_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_771_fu_27563_p1.read()) + sc_bigint<16>(sext_ln708_767_fu_27395_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_766_fu_30305_p2() {
    add_ln703_766_fu_30305_p2 = (!sext_ln1118_1282_fu_27914_p1.read().is_01() || !ap_const_lv12_ED7.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1282_fu_27914_p1.read()) + sc_bigint<12>(ap_const_lv12_ED7));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_767_fu_30315_p2() {
    add_ln703_767_fu_30315_p2 = (!sext_ln1118_1279_fu_27748_p1.read().is_01() || !sext_ln703_157_fu_30311_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_1279_fu_27748_p1.read()) + sc_bigint<13>(sext_ln703_157_fu_30311_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_768_fu_34053_p2() {
    add_ln703_768_fu_34053_p2 = (!add_ln703_765_reg_43114.read().is_01() || !sext_ln703_158_fu_34050_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_765_reg_43114.read()) + sc_bigint<16>(sext_ln703_158_fu_34050_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_769_fu_34058_p2() {
    add_ln703_769_fu_34058_p2 = (!add_ln703_764_reg_43109.read().is_01() || !add_ln703_768_fu_34053_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_764_reg_43109.read()) + sc_biguint<16>(add_ln703_768_fu_34053_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_76_fu_32781_p2() {
    add_ln703_76_fu_32781_p2 = (!add_ln703_74_reg_41974.read().is_01() || !sext_ln703_23_fu_32778_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_74_reg_41974.read()) + sc_bigint<16>(sext_ln703_23_fu_32778_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_770_fu_34063_p2() {
    add_ln703_770_fu_34063_p2 = (!add_ln703_761_fu_34045_p2.read().is_01() || !add_ln703_769_fu_34058_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_761_fu_34045_p2.read()) + sc_biguint<16>(add_ln703_769_fu_34058_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_771_fu_34069_p2() {
    add_ln703_771_fu_34069_p2 = (!add_ln703_754_fu_34031_p2.read().is_01() || !add_ln703_770_fu_34063_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_754_fu_34031_p2.read()) + sc_biguint<16>(add_ln703_770_fu_34063_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_772_fu_34075_p2() {
    add_ln703_772_fu_34075_p2 = (!add_ln703_739_fu_34012_p2.read().is_01() || !add_ln703_771_fu_34069_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_739_fu_34012_p2.read()) + sc_biguint<16>(add_ln703_771_fu_34069_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_774_fu_30321_p2() {
    add_ln703_774_fu_30321_p2 = (!sext_ln1118_865_fu_2210_p1.read().is_01() || !sext_ln1118_863_fu_1946_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_865_fu_2210_p1.read()) + sc_bigint<15>(sext_ln1118_863_fu_1946_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_775_fu_30331_p2() {
    add_ln703_775_fu_30331_p2 = (!sext_ln708_20_fu_2882_p1.read().is_01() || !sext_ln708_14_fu_2584_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_20_fu_2882_p1.read()) + sc_bigint<16>(sext_ln708_14_fu_2584_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_776_fu_30337_p2() {
    add_ln703_776_fu_30337_p2 = (!sext_ln703_159_fu_30327_p1.read().is_01() || !add_ln703_775_fu_30331_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_159_fu_30327_p1.read()) + sc_biguint<16>(add_ln703_775_fu_30331_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_777_fu_30343_p2() {
    add_ln703_777_fu_30343_p2 = (!sext_ln708_34_fu_3398_p1.read().is_01() || !sext_ln708_27_fu_3147_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_34_fu_3398_p1.read()) + sc_bigint<16>(sext_ln708_27_fu_3147_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_778_fu_30349_p2() {
    add_ln703_778_fu_30349_p2 = (!sext_ln708_43_fu_3902_p1.read().is_01() || !sext_ln708_39_fu_3618_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_43_fu_3902_p1.read()) + sc_bigint<16>(sext_ln708_39_fu_3618_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_779_fu_34087_p2() {
    add_ln703_779_fu_34087_p2 = (!add_ln703_777_reg_43129.read().is_01() || !add_ln703_778_reg_43134.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_777_reg_43129.read()) + sc_biguint<16>(add_ln703_778_reg_43134.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_77_fu_32786_p2() {
    add_ln703_77_fu_32786_p2 = (!add_ln703_73_reg_41969.read().is_01() || !add_ln703_76_fu_32781_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_73_reg_41969.read()) + sc_biguint<16>(add_ln703_76_fu_32781_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_780_fu_34091_p2() {
    add_ln703_780_fu_34091_p2 = (!add_ln703_776_reg_43124.read().is_01() || !add_ln703_779_fu_34087_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_776_reg_43124.read()) + sc_biguint<16>(add_ln703_779_fu_34087_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_781_fu_30355_p2() {
    add_ln703_781_fu_30355_p2 = (!sext_ln708_53_fu_4396_p1.read().is_01() || !sext_ln708_48_fu_4184_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_53_fu_4396_p1.read()) + sc_bigint<16>(sext_ln708_48_fu_4184_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_782_fu_30361_p2() {
    add_ln703_782_fu_30361_p2 = (!sext_ln1118_898_fu_4867_p1.read().is_01() || !sext_ln1118_896_fu_4655_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_898_fu_4867_p1.read()) + sc_bigint<14>(sext_ln1118_896_fu_4655_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_783_fu_30371_p2() {
    add_ln703_783_fu_30371_p2 = (!add_ln703_781_fu_30355_p2.read().is_01() || !sext_ln703_160_fu_30367_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_781_fu_30355_p2.read()) + sc_bigint<16>(sext_ln703_160_fu_30367_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_784_fu_30377_p2() {
    add_ln703_784_fu_30377_p2 = (!sext_ln708_80_fu_5333_p1.read().is_01() || !sext_ln708_72_fu_5099_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_80_fu_5333_p1.read()) + sc_bigint<16>(sext_ln708_72_fu_5099_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_785_fu_30383_p2() {
    add_ln703_785_fu_30383_p2 = (!sext_ln708_89_fu_5824_p1.read().is_01() || !sext_ln708_85_fu_5584_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_89_fu_5824_p1.read()) + sc_bigint<16>(sext_ln708_85_fu_5584_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_786_fu_30389_p2() {
    add_ln703_786_fu_30389_p2 = (!add_ln703_784_fu_30377_p2.read().is_01() || !add_ln703_785_fu_30383_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_784_fu_30377_p2.read()) + sc_biguint<16>(add_ln703_785_fu_30383_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_787_fu_34096_p2() {
    add_ln703_787_fu_34096_p2 = (!add_ln703_783_reg_43139.read().is_01() || !add_ln703_786_reg_43144.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_783_reg_43139.read()) + sc_biguint<16>(add_ln703_786_reg_43144.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_788_fu_34100_p2() {
    add_ln703_788_fu_34100_p2 = (!add_ln703_780_fu_34091_p2.read().is_01() || !add_ln703_787_fu_34096_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_780_fu_34091_p2.read()) + sc_biguint<16>(add_ln703_787_fu_34096_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_789_fu_30395_p2() {
    add_ln703_789_fu_30395_p2 = (!sext_ln708_101_fu_6313_p1.read().is_01() || !sext_ln708_94_fu_6078_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_101_fu_6313_p1.read()) + sc_bigint<16>(sext_ln708_94_fu_6078_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_78_fu_23973_p2() {
    add_ln703_78_fu_23973_p2 = (!sext_ln708_425_fu_16133_p1.read().is_01() || !sext_ln708_421_fu_15947_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_425_fu_16133_p1.read()) + sc_bigint<16>(sext_ln708_421_fu_15947_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_790_fu_30401_p2() {
    add_ln703_790_fu_30401_p2 = (!sext_ln708_240_fu_10569_p1.read().is_01() || !sext_ln708_235_fu_10415_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_240_fu_10569_p1.read()) + sc_bigint<16>(sext_ln708_235_fu_10415_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_791_fu_30407_p2() {
    add_ln703_791_fu_30407_p2 = (!add_ln703_789_fu_30395_p2.read().is_01() || !add_ln703_790_fu_30401_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_789_fu_30395_p2.read()) + sc_biguint<16>(add_ln703_790_fu_30401_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_792_fu_30413_p2() {
    add_ln703_792_fu_30413_p2 = (!sext_ln708_250_fu_10828_p1.read().is_01() || !sext_ln708_245_fu_10687_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_250_fu_10828_p1.read()) + sc_bigint<16>(sext_ln708_245_fu_10687_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_793_fu_30419_p2() {
    add_ln703_793_fu_30419_p2 = (!sext_ln1118_991_fu_11187_p1.read().is_01() || !sext_ln1118_988_fu_11013_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_991_fu_11187_p1.read()) + sc_bigint<14>(sext_ln1118_988_fu_11013_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_794_fu_34109_p2() {
    add_ln703_794_fu_34109_p2 = (!add_ln703_792_reg_43154.read().is_01() || !sext_ln703_161_fu_34106_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_792_reg_43154.read()) + sc_bigint<16>(sext_ln703_161_fu_34106_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_795_fu_34114_p2() {
    add_ln703_795_fu_34114_p2 = (!add_ln703_791_reg_43149.read().is_01() || !add_ln703_794_fu_34109_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_791_reg_43149.read()) + sc_biguint<16>(add_ln703_794_fu_34109_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_796_fu_30425_p2() {
    add_ln703_796_fu_30425_p2 = (!sext_ln708_272_fu_11529_p1.read().is_01() || !sext_ln708_267_fu_11304_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_272_fu_11529_p1.read()) + sc_bigint<16>(sext_ln708_267_fu_11304_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_797_fu_30431_p2() {
    add_ln703_797_fu_30431_p2 = (!sext_ln1118_1009_fu_11813_p1.read().is_01() || !sext_ln1118_1004_fu_11633_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1009_fu_11813_p1.read()) + sc_bigint<15>(sext_ln1118_1004_fu_11633_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_798_fu_30441_p2() {
    add_ln703_798_fu_30441_p2 = (!add_ln703_796_fu_30425_p2.read().is_01() || !sext_ln703_162_fu_30437_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_796_fu_30425_p2.read()) + sc_bigint<16>(sext_ln703_162_fu_30437_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_799_fu_30447_p2() {
    add_ln703_799_fu_30447_p2 = (!sext_ln708_287_fu_12179_p1.read().is_01() || !sext_ln708_284_fu_11998_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_287_fu_12179_p1.read()) + sc_bigint<16>(sext_ln708_284_fu_11998_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_79_fu_23979_p2() {
    add_ln703_79_fu_23979_p2 = (!sext_ln708_440_fu_16586_p1.read().is_01() || !sext_ln708_429_fu_16276_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_440_fu_16586_p1.read()) + sc_bigint<16>(sext_ln708_429_fu_16276_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_800_fu_30453_p2() {
    add_ln703_800_fu_30453_p2 = (!sext_ln1118_1024_fu_12494_p1.read().is_01() || !sext_ln1118_1023_fu_12377_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1024_fu_12494_p1.read()) + sc_bigint<15>(sext_ln1118_1023_fu_12377_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_801_fu_34122_p2() {
    add_ln703_801_fu_34122_p2 = (!add_ln703_799_reg_43169.read().is_01() || !sext_ln703_163_fu_34119_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_799_reg_43169.read()) + sc_bigint<16>(sext_ln703_163_fu_34119_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_802_fu_34127_p2() {
    add_ln703_802_fu_34127_p2 = (!add_ln703_798_reg_43164.read().is_01() || !add_ln703_801_fu_34122_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_798_reg_43164.read()) + sc_biguint<16>(add_ln703_801_fu_34122_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_803_fu_34132_p2() {
    add_ln703_803_fu_34132_p2 = (!add_ln703_795_fu_34114_p2.read().is_01() || !add_ln703_802_fu_34127_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_795_fu_34114_p2.read()) + sc_biguint<16>(add_ln703_802_fu_34127_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_804_fu_34138_p2() {
    add_ln703_804_fu_34138_p2 = (!add_ln703_788_fu_34100_p2.read().is_01() || !add_ln703_803_fu_34132_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_788_fu_34100_p2.read()) + sc_biguint<16>(add_ln703_803_fu_34132_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_805_fu_30459_p2() {
    add_ln703_805_fu_30459_p2 = (!sext_ln708_311_fu_12900_p1.read().is_01() || !sext_ln708_305_fu_12699_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_311_fu_12900_p1.read()) + sc_bigint<16>(sext_ln708_305_fu_12699_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_806_fu_30465_p2() {
    add_ln703_806_fu_30465_p2 = (!sext_ln708_325_fu_13240_p1.read().is_01() || !sext_ln708_318_fu_13107_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_325_fu_13240_p1.read()) + sc_bigint<16>(sext_ln708_318_fu_13107_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_807_fu_30471_p2() {
    add_ln703_807_fu_30471_p2 = (!add_ln703_805_fu_30459_p2.read().is_01() || !add_ln703_806_fu_30465_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_805_fu_30459_p2.read()) + sc_biguint<16>(add_ln703_806_fu_30465_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_808_fu_30477_p2() {
    add_ln703_808_fu_30477_p2 = (!sext_ln708_337_fu_13550_p1.read().is_01() || !sext_ln708_332_fu_13376_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_337_fu_13550_p1.read()) + sc_bigint<16>(sext_ln708_332_fu_13376_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_809_fu_30483_p2() {
    add_ln703_809_fu_30483_p2 = (!sext_ln708_352_fu_13838_p1.read().is_01() || !sext_ln708_344_fu_13671_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_352_fu_13838_p1.read()) + sc_bigint<16>(sext_ln708_344_fu_13671_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_80_fu_23985_p2() {
    add_ln703_80_fu_23985_p2 = (!add_ln703_78_fu_23973_p2.read().is_01() || !add_ln703_79_fu_23979_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_78_fu_23973_p2.read()) + sc_biguint<16>(add_ln703_79_fu_23979_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_810_fu_34144_p2() {
    add_ln703_810_fu_34144_p2 = (!add_ln703_808_reg_43184.read().is_01() || !add_ln703_809_reg_43189.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_808_reg_43184.read()) + sc_biguint<16>(add_ln703_809_reg_43189.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_811_fu_34148_p2() {
    add_ln703_811_fu_34148_p2 = (!add_ln703_807_reg_43179.read().is_01() || !add_ln703_810_fu_34144_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_807_reg_43179.read()) + sc_biguint<16>(add_ln703_810_fu_34144_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_812_fu_30489_p2() {
    add_ln703_812_fu_30489_p2 = (!sext_ln708_364_fu_14104_p1.read().is_01() || !sext_ln708_359_fu_13955_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_364_fu_14104_p1.read()) + sc_bigint<16>(sext_ln708_359_fu_13955_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_813_fu_30495_p2() {
    add_ln703_813_fu_30495_p2 = (!sext_ln708_379_fu_14426_p1.read().is_01() || !sext_ln708_371_fu_14283_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_379_fu_14426_p1.read()) + sc_bigint<16>(sext_ln708_371_fu_14283_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_814_fu_30501_p2() {
    add_ln703_814_fu_30501_p2 = (!add_ln703_812_fu_30489_p2.read().is_01() || !add_ln703_813_fu_30495_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_812_fu_30489_p2.read()) + sc_biguint<16>(add_ln703_813_fu_30495_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_815_fu_30507_p2() {
    add_ln703_815_fu_30507_p2 = (!sext_ln1118_1053_fu_14809_p1.read().is_01() || !sext_ln1118_1050_fu_14561_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1053_fu_14809_p1.read()) + sc_bigint<15>(sext_ln1118_1050_fu_14561_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_816_fu_30517_p2() {
    add_ln703_816_fu_30517_p2 = (!sext_ln708_399_fu_15162_p1.read().is_01() || !sext_ln708_396_fu_15003_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_399_fu_15162_p1.read()) + sc_bigint<16>(sext_ln708_396_fu_15003_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_817_fu_30523_p2() {
    add_ln703_817_fu_30523_p2 = (!sext_ln703_164_fu_30513_p1.read().is_01() || !add_ln703_816_fu_30517_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_164_fu_30513_p1.read()) + sc_biguint<16>(add_ln703_816_fu_30517_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_818_fu_34153_p2() {
    add_ln703_818_fu_34153_p2 = (!add_ln703_814_reg_43194.read().is_01() || !add_ln703_817_reg_43199.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_814_reg_43194.read()) + sc_biguint<16>(add_ln703_817_reg_43199.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_819_fu_34157_p2() {
    add_ln703_819_fu_34157_p2 = (!add_ln703_811_fu_34148_p2.read().is_01() || !add_ln703_818_fu_34153_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_811_fu_34148_p2.read()) + sc_biguint<16>(add_ln703_818_fu_34153_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_81_fu_23991_p2() {
    add_ln703_81_fu_23991_p2 = (!sext_ln708_454_fu_16820_p1.read().is_01() || !sext_ln708_447_fu_16703_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_454_fu_16820_p1.read()) + sc_bigint<16>(sext_ln708_447_fu_16703_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_820_fu_30529_p2() {
    add_ln703_820_fu_30529_p2 = (!sext_ln708_410_fu_15551_p1.read().is_01() || !sext_ln708_404_fu_15373_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_410_fu_15551_p1.read()) + sc_bigint<16>(sext_ln708_404_fu_15373_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_821_fu_30535_p2() {
    add_ln703_821_fu_30535_p2 = (!sext_ln708_418_fu_15881_p1.read().is_01() || !sext_ln1118_1071_fu_15693_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln708_418_fu_15881_p1.read()) + sc_bigint<15>(sext_ln1118_1071_fu_15693_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_822_fu_30545_p2() {
    add_ln703_822_fu_30545_p2 = (!add_ln703_820_fu_30529_p2.read().is_01() || !sext_ln703_165_fu_30541_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_820_fu_30529_p2.read()) + sc_bigint<16>(sext_ln703_165_fu_30541_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_823_fu_30551_p2() {
    add_ln703_823_fu_30551_p2 = (!sext_ln1118_1083_fu_16192_p1.read().is_01() || !sext_ln1118_1079_fu_16043_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1083_fu_16192_p1.read()) + sc_bigint<15>(sext_ln1118_1079_fu_16043_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_824_fu_30557_p2() {
    add_ln703_824_fu_30557_p2 = (!sext_ln708_438_fu_16484_p1.read().is_01() || !sext_ln708_433_fu_16335_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_438_fu_16484_p1.read()) + sc_bigint<16>(sext_ln708_433_fu_16335_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_825_fu_34166_p2() {
    add_ln703_825_fu_34166_p2 = (!sext_ln703_166_fu_34163_p1.read().is_01() || !add_ln703_824_reg_43214.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_166_fu_34163_p1.read()) + sc_biguint<16>(add_ln703_824_reg_43214.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_826_fu_34171_p2() {
    add_ln703_826_fu_34171_p2 = (!add_ln703_822_reg_43204.read().is_01() || !add_ln703_825_fu_34166_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_822_reg_43204.read()) + sc_biguint<16>(add_ln703_825_fu_34166_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_827_fu_30563_p2() {
    add_ln703_827_fu_30563_p2 = (!sext_ln1118_1091_fu_16755_p1.read().is_01() || !sext_ln1118_1089_fu_16638_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1091_fu_16755_p1.read()) + sc_bigint<15>(sext_ln1118_1089_fu_16638_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_828_fu_30573_p2() {
    add_ln703_828_fu_30573_p2 = (!sext_ln1118_1095_fu_17084_p1.read().is_01() || !sext_ln1118_1093_fu_16907_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1095_fu_17084_p1.read()) + sc_bigint<14>(sext_ln1118_1093_fu_16907_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_829_fu_30583_p2() {
    add_ln703_829_fu_30583_p2 = (!sext_ln703_167_fu_30569_p1.read().is_01() || !sext_ln703_168_fu_30579_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_167_fu_30569_p1.read()) + sc_bigint<16>(sext_ln703_168_fu_30579_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_82_fu_23997_p2() {
    add_ln703_82_fu_23997_p2 = (!sext_ln708_464_fu_17136_p1.read().is_01() || !sext_ln708_459_fu_16978_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_464_fu_17136_p1.read()) + sc_bigint<16>(sext_ln708_459_fu_16978_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_830_fu_30589_p2() {
    add_ln703_830_fu_30589_p2 = (!sext_ln1118_1100_fu_17373_p1.read().is_01() || !sext_ln1118_1097_fu_17207_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1100_fu_17373_p1.read()) + sc_bigint<15>(sext_ln1118_1097_fu_17207_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_831_fu_30599_p2() {
    add_ln703_831_fu_30599_p2 = (!sext_ln708_479_fu_17701_p1.read().is_01() || !sext_ln708_474_fu_17525_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_479_fu_17701_p1.read()) + sc_bigint<16>(sext_ln708_474_fu_17525_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_832_fu_30605_p2() {
    add_ln703_832_fu_30605_p2 = (!sext_ln703_169_fu_30595_p1.read().is_01() || !add_ln703_831_fu_30599_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_169_fu_30595_p1.read()) + sc_biguint<16>(add_ln703_831_fu_30599_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_833_fu_34176_p2() {
    add_ln703_833_fu_34176_p2 = (!add_ln703_829_reg_43219.read().is_01() || !add_ln703_832_reg_43224.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_829_reg_43219.read()) + sc_biguint<16>(add_ln703_832_reg_43224.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_834_fu_34180_p2() {
    add_ln703_834_fu_34180_p2 = (!add_ln703_826_fu_34171_p2.read().is_01() || !add_ln703_833_fu_34176_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_826_fu_34171_p2.read()) + sc_biguint<16>(add_ln703_833_fu_34176_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_835_fu_34186_p2() {
    add_ln703_835_fu_34186_p2 = (!add_ln703_819_fu_34157_p2.read().is_01() || !add_ln703_834_fu_34180_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_819_fu_34157_p2.read()) + sc_biguint<16>(add_ln703_834_fu_34180_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_836_fu_34192_p2() {
    add_ln703_836_fu_34192_p2 = (!add_ln703_804_fu_34138_p2.read().is_01() || !add_ln703_835_fu_34186_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_804_fu_34138_p2.read()) + sc_biguint<16>(add_ln703_835_fu_34186_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_837_fu_30611_p2() {
    add_ln703_837_fu_30611_p2 = (!sext_ln1118_1114_fu_17983_p1.read().is_01() || !sext_ln1118_1110_fu_17830_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1114_fu_17983_p1.read()) + sc_bigint<14>(sext_ln1118_1110_fu_17830_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_838_fu_30621_p2() {
    add_ln703_838_fu_30621_p2 = (!sext_ln1118_1124_fu_18311_p1.read().is_01() || !sext_ln1118_1119_fu_18144_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1124_fu_18311_p1.read()) + sc_bigint<15>(sext_ln1118_1119_fu_18144_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_839_fu_30627_p2() {
    add_ln703_839_fu_30627_p2 = (!sext_ln703_170_fu_30617_p1.read().is_01() || !add_ln703_838_fu_30621_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_170_fu_30617_p1.read()) + sc_biguint<15>(add_ln703_838_fu_30621_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_83_fu_24003_p2() {
    add_ln703_83_fu_24003_p2 = (!add_ln703_81_fu_23991_p2.read().is_01() || !add_ln703_82_fu_23997_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_81_fu_23991_p2.read()) + sc_biguint<16>(add_ln703_82_fu_23997_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_840_fu_30633_p2() {
    add_ln703_840_fu_30633_p2 = (!sext_ln708_503_fu_18651_p1.read().is_01() || !sext_ln708_497_fu_18502_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_503_fu_18651_p1.read()) + sc_bigint<16>(sext_ln708_497_fu_18502_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_841_fu_30639_p2() {
    add_ln703_841_fu_30639_p2 = (!sext_ln1118_1134_fu_18977_p1.read().is_01() || !sext_ln1118_1129_fu_18781_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1134_fu_18977_p1.read()) + sc_bigint<15>(sext_ln1118_1129_fu_18781_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_842_fu_34204_p2() {
    add_ln703_842_fu_34204_p2 = (!add_ln703_840_reg_43234.read().is_01() || !sext_ln703_172_fu_34201_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_840_reg_43234.read()) + sc_bigint<16>(sext_ln703_172_fu_34201_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_843_fu_34209_p2() {
    add_ln703_843_fu_34209_p2 = (!sext_ln703_171_fu_34198_p1.read().is_01() || !add_ln703_842_fu_34204_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_171_fu_34198_p1.read()) + sc_biguint<16>(add_ln703_842_fu_34204_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_844_fu_30645_p2() {
    add_ln703_844_fu_30645_p2 = (!sext_ln708_537_fu_19375_p1.read().is_01() || !sext_ln708_531_fu_19252_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_537_fu_19375_p1.read()) + sc_bigint<16>(sext_ln708_531_fu_19252_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_845_fu_30651_p2() {
    add_ln703_845_fu_30651_p2 = (!sext_ln708_544_fu_19651_p1.read().is_01() || !sext_ln708_541_fu_19498_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_544_fu_19651_p1.read()) + sc_bigint<16>(sext_ln708_541_fu_19498_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_846_fu_30657_p2() {
    add_ln703_846_fu_30657_p2 = (!add_ln703_844_fu_30645_p2.read().is_01() || !add_ln703_845_fu_30651_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_844_fu_30645_p2.read()) + sc_biguint<16>(add_ln703_845_fu_30651_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_847_fu_30663_p2() {
    add_ln703_847_fu_30663_p2 = (!sext_ln1118_1156_fu_20003_p1.read().is_01() || !sext_ln1118_1152_fu_19830_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1156_fu_20003_p1.read()) + sc_bigint<15>(sext_ln1118_1152_fu_19830_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_848_fu_30673_p2() {
    add_ln703_848_fu_30673_p2 = (!sext_ln708_338_fu_13576_p1.read().is_01() || !sext_ln708_554_fu_20126_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_338_fu_13576_p1.read()) + sc_bigint<16>(sext_ln708_554_fu_20126_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_849_fu_30679_p2() {
    add_ln703_849_fu_30679_p2 = (!sext_ln703_173_fu_30669_p1.read().is_01() || !add_ln703_848_fu_30673_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_173_fu_30669_p1.read()) + sc_biguint<16>(add_ln703_848_fu_30673_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_84_fu_32791_p2() {
    add_ln703_84_fu_32791_p2 = (!add_ln703_80_reg_41984.read().is_01() || !add_ln703_83_reg_41989.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_80_reg_41984.read()) + sc_biguint<16>(add_ln703_83_reg_41989.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_850_fu_34215_p2() {
    add_ln703_850_fu_34215_p2 = (!add_ln703_846_reg_43244.read().is_01() || !add_ln703_849_reg_43249.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_846_reg_43244.read()) + sc_biguint<16>(add_ln703_849_reg_43249.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_851_fu_34219_p2() {
    add_ln703_851_fu_34219_p2 = (!add_ln703_843_fu_34209_p2.read().is_01() || !add_ln703_850_fu_34215_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_843_fu_34209_p2.read()) + sc_biguint<16>(add_ln703_850_fu_34215_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_852_fu_30685_p2() {
    add_ln703_852_fu_30685_p2 = (!sext_ln1118_1171_fu_20574_p1.read().is_01() || !sext_ln1118_1169_fu_20452_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1171_fu_20574_p1.read()) + sc_bigint<14>(sext_ln1118_1169_fu_20452_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_853_fu_30695_p2() {
    add_ln703_853_fu_30695_p2 = (!sext_ln708_575_fu_20888_p1.read().is_01() || !sext_ln708_569_fu_20716_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_575_fu_20888_p1.read()) + sc_bigint<16>(sext_ln708_569_fu_20716_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_854_fu_30701_p2() {
    add_ln703_854_fu_30701_p2 = (!sext_ln703_174_fu_30691_p1.read().is_01() || !add_ln703_853_fu_30695_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_174_fu_30691_p1.read()) + sc_biguint<16>(add_ln703_853_fu_30695_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_855_fu_30707_p2() {
    add_ln703_855_fu_30707_p2 = (!sext_ln708_586_fu_21121_p1.read().is_01() || !sext_ln708_581_fu_21005_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_586_fu_21121_p1.read()) + sc_bigint<16>(sext_ln708_581_fu_21005_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_856_fu_30713_p2() {
    add_ln703_856_fu_30713_p2 = (!sext_ln708_600_fu_21355_p1.read().is_01() || !sext_ln708_593_fu_21251_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_600_fu_21355_p1.read()) + sc_bigint<16>(sext_ln708_593_fu_21251_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_857_fu_34225_p2() {
    add_ln703_857_fu_34225_p2 = (!add_ln703_855_reg_43259.read().is_01() || !add_ln703_856_reg_43264.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_855_reg_43259.read()) + sc_biguint<16>(add_ln703_856_reg_43264.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_858_fu_34229_p2() {
    add_ln703_858_fu_34229_p2 = (!add_ln703_854_reg_43254.read().is_01() || !add_ln703_857_fu_34225_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_854_reg_43254.read()) + sc_biguint<16>(add_ln703_857_fu_34225_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_859_fu_30719_p2() {
    add_ln703_859_fu_30719_p2 = (!sext_ln1118_1184_fu_21632_p1.read().is_01() || !sext_ln1118_1180_fu_21460_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_1184_fu_21632_p1.read()) + sc_bigint<13>(sext_ln1118_1180_fu_21460_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_85_fu_32795_p2() {
    add_ln703_85_fu_32795_p2 = (!add_ln703_77_fu_32786_p2.read().is_01() || !add_ln703_84_fu_32791_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_77_fu_32786_p2.read()) + sc_biguint<16>(add_ln703_84_fu_32791_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_860_fu_30729_p2() {
    add_ln703_860_fu_30729_p2 = (!sext_ln708_615_fu_21975_p1.read().is_01() || !sext_ln708_612_fu_21786_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_615_fu_21975_p1.read()) + sc_bigint<16>(sext_ln708_612_fu_21786_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_861_fu_30735_p2() {
    add_ln703_861_fu_30735_p2 = (!sext_ln703_175_fu_30725_p1.read().is_01() || !add_ln703_860_fu_30729_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_175_fu_30725_p1.read()) + sc_biguint<16>(add_ln703_860_fu_30729_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_862_fu_30741_p2() {
    add_ln703_862_fu_30741_p2 = (!sext_ln708_625_fu_22234_p1.read().is_01() || !sext_ln708_619_fu_22080_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_625_fu_22234_p1.read()) + sc_bigint<16>(sext_ln708_619_fu_22080_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_863_fu_30747_p2() {
    add_ln703_863_fu_30747_p2 = (!sext_ln708_635_fu_22486_p1.read().is_01() || !sext_ln708_630_fu_22338_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_635_fu_22486_p1.read()) + sc_bigint<16>(sext_ln708_630_fu_22338_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_864_fu_34234_p2() {
    add_ln703_864_fu_34234_p2 = (!add_ln703_862_reg_43274.read().is_01() || !add_ln703_863_reg_43279.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_862_reg_43274.read()) + sc_biguint<16>(add_ln703_863_reg_43279.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_865_fu_34238_p2() {
    add_ln703_865_fu_34238_p2 = (!add_ln703_861_reg_43269.read().is_01() || !add_ln703_864_fu_34234_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_861_reg_43269.read()) + sc_biguint<16>(add_ln703_864_fu_34234_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_866_fu_34243_p2() {
    add_ln703_866_fu_34243_p2 = (!add_ln703_858_fu_34229_p2.read().is_01() || !add_ln703_865_fu_34238_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_858_fu_34229_p2.read()) + sc_biguint<16>(add_ln703_865_fu_34238_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_867_fu_34249_p2() {
    add_ln703_867_fu_34249_p2 = (!add_ln703_851_fu_34219_p2.read().is_01() || !add_ln703_866_fu_34243_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_851_fu_34219_p2.read()) + sc_biguint<16>(add_ln703_866_fu_34243_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_868_fu_30753_p2() {
    add_ln703_868_fu_30753_p2 = (!sext_ln708_646_fu_22761_p1.read().is_01() || !sext_ln708_641_fu_22597_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_646_fu_22761_p1.read()) + sc_bigint<16>(sext_ln708_641_fu_22597_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_869_fu_30759_p2() {
    add_ln703_869_fu_30759_p2 = (!sext_ln1118_1213_fu_22992_p1.read().is_01() || !sext_ln1118_1210_fu_22888_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1213_fu_22992_p1.read()) + sc_bigint<14>(sext_ln1118_1210_fu_22888_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_86_fu_24009_p2() {
    add_ln703_86_fu_24009_p2 = (!sext_ln708_472_fu_17473_p1.read().is_01() || !sext_ln708_468_fu_17290_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_472_fu_17473_p1.read()) + sc_bigint<16>(sext_ln708_468_fu_17290_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_870_fu_30769_p2() {
    add_ln703_870_fu_30769_p2 = (!add_ln703_868_fu_30753_p2.read().is_01() || !sext_ln703_176_fu_30765_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_868_fu_30753_p2.read()) + sc_bigint<16>(sext_ln703_176_fu_30765_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_871_fu_30775_p2() {
    add_ln703_871_fu_30775_p2 = (!sext_ln708_666_fu_23281_p1.read().is_01() || !sext_ln708_661_fu_23127_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_666_fu_23281_p1.read()) + sc_bigint<16>(sext_ln708_661_fu_23127_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_872_fu_30781_p2() {
    add_ln703_872_fu_30781_p2 = (!sext_ln708_676_fu_23603_p1.read().is_01() || !sext_ln708_671_fu_23442_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_676_fu_23603_p1.read()) + sc_bigint<16>(sext_ln708_671_fu_23442_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_873_fu_34255_p2() {
    add_ln703_873_fu_34255_p2 = (!add_ln703_871_reg_43289.read().is_01() || !add_ln703_872_reg_43294.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_871_reg_43289.read()) + sc_biguint<16>(add_ln703_872_reg_43294.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_874_fu_34259_p2() {
    add_ln703_874_fu_34259_p2 = (!add_ln703_870_reg_43284.read().is_01() || !add_ln703_873_fu_34255_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_870_reg_43284.read()) + sc_biguint<16>(add_ln703_873_fu_34255_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_875_fu_30787_p2() {
    add_ln703_875_fu_30787_p2 = (!sext_ln708_683_fu_24489_p1.read().is_01() || !sext_ln708_256_fu_10950_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_683_fu_24489_p1.read()) + sc_bigint<16>(sext_ln708_256_fu_10950_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_876_fu_30793_p2() {
    add_ln703_876_fu_30793_p2 = (!sext_ln1118_1239_fu_24798_p1.read().is_01() || !sext_ln1118_1235_fu_24638_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1239_fu_24798_p1.read()) + sc_bigint<15>(sext_ln1118_1235_fu_24638_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_877_fu_30803_p2() {
    add_ln703_877_fu_30803_p2 = (!add_ln703_875_fu_30787_p2.read().is_01() || !sext_ln703_177_fu_30799_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_875_fu_30787_p2.read()) + sc_bigint<16>(sext_ln703_177_fu_30799_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_878_fu_30809_p2() {
    add_ln703_878_fu_30809_p2 = (!sext_ln1118_1247_fu_25075_p1.read().is_01() || !sext_ln1118_1243_fu_24921_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1247_fu_25075_p1.read()) + sc_bigint<14>(sext_ln1118_1243_fu_24921_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_879_fu_30819_p2() {
    add_ln703_879_fu_30819_p2 = (!sext_ln708_720_fu_25427_p1.read().is_01() || !sext_ln708_706_fu_25180_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_720_fu_25427_p1.read()) + sc_bigint<16>(sext_ln708_706_fu_25180_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_87_fu_24015_p2() {
    add_ln703_87_fu_24015_p2 = (!sext_ln1118_1108_fu_17753_p1.read().is_01() || !sext_ln1118_1105_fu_17577_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1108_fu_17753_p1.read()) + sc_bigint<15>(sext_ln1118_1105_fu_17577_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_880_fu_30825_p2() {
    add_ln703_880_fu_30825_p2 = (!sext_ln703_178_fu_30815_p1.read().is_01() || !add_ln703_879_fu_30819_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_178_fu_30815_p1.read()) + sc_biguint<16>(add_ln703_879_fu_30819_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_881_fu_34264_p2() {
    add_ln703_881_fu_34264_p2 = (!add_ln703_877_reg_43299.read().is_01() || !add_ln703_880_reg_43304.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_877_reg_43299.read()) + sc_biguint<16>(add_ln703_880_reg_43304.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_882_fu_34268_p2() {
    add_ln703_882_fu_34268_p2 = (!add_ln703_874_fu_34259_p2.read().is_01() || !add_ln703_881_fu_34264_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_874_fu_34259_p2.read()) + sc_biguint<16>(add_ln703_881_fu_34264_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_883_fu_30831_p2() {
    add_ln703_883_fu_30831_p2 = (!sext_ln708_733_fu_25685_p1.read().is_01() || !sext_ln708_727_fu_25550_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_733_fu_25685_p1.read()) + sc_bigint<16>(sext_ln708_727_fu_25550_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_884_fu_30837_p2() {
    add_ln703_884_fu_30837_p2 = (!sext_ln708_746_fu_26003_p1.read().is_01() || !sext_ln708_739_fu_25826_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_746_fu_26003_p1.read()) + sc_bigint<16>(sext_ln708_739_fu_25826_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_885_fu_30843_p2() {
    add_ln703_885_fu_30843_p2 = (!add_ln703_883_fu_30831_p2.read().is_01() || !add_ln703_884_fu_30837_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_883_fu_30831_p2.read()) + sc_biguint<16>(add_ln703_884_fu_30837_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_886_fu_30849_p2() {
    add_ln703_886_fu_30849_p2 = (!sext_ln1118_1260_fu_26255_p1.read().is_01() || !sext_ln1118_1255_fu_26094_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1260_fu_26255_p1.read()) + sc_bigint<15>(sext_ln1118_1255_fu_26094_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_887_fu_30855_p2() {
    add_ln703_887_fu_30855_p2 = (!sext_ln1118_1268_fu_26496_p1.read().is_01() || !sext_ln1118_1265_fu_26391_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1268_fu_26496_p1.read()) + sc_bigint<15>(sext_ln1118_1265_fu_26391_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_888_fu_34280_p2() {
    add_ln703_888_fu_34280_p2 = (!sext_ln703_179_fu_34274_p1.read().is_01() || !sext_ln703_180_fu_34277_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_179_fu_34274_p1.read()) + sc_bigint<16>(sext_ln703_180_fu_34277_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_889_fu_34286_p2() {
    add_ln703_889_fu_34286_p2 = (!add_ln703_885_reg_43309.read().is_01() || !add_ln703_888_fu_34280_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_885_reg_43309.read()) + sc_biguint<16>(add_ln703_888_fu_34280_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_88_fu_24025_p2() {
    add_ln703_88_fu_24025_p2 = (!add_ln703_86_fu_24009_p2.read().is_01() || !sext_ln703_24_fu_24021_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_86_fu_24009_p2.read()) + sc_bigint<16>(sext_ln703_24_fu_24021_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_890_fu_30861_p2() {
    add_ln703_890_fu_30861_p2 = (!sext_ln1118_1273_fu_27433_p1.read().is_01() || !sext_ln1118_1270_fu_26675_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_1273_fu_27433_p1.read()) + sc_bigint<13>(sext_ln1118_1270_fu_26675_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_891_fu_30871_p2() {
    add_ln703_891_fu_30871_p2 = (!sext_ln708_776_fu_27792_p1.read().is_01() || !sext_ln708_772_fu_27576_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_776_fu_27792_p1.read()) + sc_bigint<16>(sext_ln708_772_fu_27576_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_892_fu_30877_p2() {
    add_ln703_892_fu_30877_p2 = (!sext_ln703_181_fu_30867_p1.read().is_01() || !add_ln703_891_fu_30871_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_181_fu_30867_p1.read()) + sc_biguint<16>(add_ln703_891_fu_30871_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_893_fu_30883_p2() {
    add_ln703_893_fu_30883_p2 = (!sext_ln1118_1283_fu_27934_p1.read().is_01() || !ap_const_lv14_3ECC.is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1283_fu_27934_p1.read()) + sc_bigint<14>(ap_const_lv14_3ECC));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_894_fu_30889_p2() {
    add_ln703_894_fu_30889_p2 = (!sext_ln1118_813_fu_25285_p1.read().is_01() || !sext_ln1118_727_fu_18886_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_813_fu_25285_p1.read()) + sc_bigint<11>(sext_ln1118_727_fu_18886_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_895_fu_30899_p2() {
    add_ln703_895_fu_30899_p2 = (!add_ln703_893_fu_30883_p2.read().is_01() || !sext_ln703_182_fu_30895_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_893_fu_30883_p2.read()) + sc_bigint<14>(sext_ln703_182_fu_30895_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_896_fu_30909_p2() {
    add_ln703_896_fu_30909_p2 = (!add_ln703_892_fu_30877_p2.read().is_01() || !sext_ln703_183_fu_30905_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_892_fu_30877_p2.read()) + sc_bigint<16>(sext_ln703_183_fu_30905_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_897_fu_34291_p2() {
    add_ln703_897_fu_34291_p2 = (!add_ln703_889_fu_34286_p2.read().is_01() || !add_ln703_896_reg_43324.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_889_fu_34286_p2.read()) + sc_biguint<16>(add_ln703_896_reg_43324.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_898_fu_34296_p2() {
    add_ln703_898_fu_34296_p2 = (!add_ln703_882_fu_34268_p2.read().is_01() || !add_ln703_897_fu_34291_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_882_fu_34268_p2.read()) + sc_biguint<16>(add_ln703_897_fu_34291_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_899_fu_34302_p2() {
    add_ln703_899_fu_34302_p2 = (!add_ln703_867_fu_34249_p2.read().is_01() || !add_ln703_898_fu_34296_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_867_fu_34249_p2.read()) + sc_biguint<16>(add_ln703_898_fu_34296_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_89_fu_24031_p2() {
    add_ln703_89_fu_24031_p2 = (!sext_ln1118_1116_fu_18042_p1.read().is_01() || !sext_ln1118_1112_fu_17924_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1116_fu_18042_p1.read()) + sc_bigint<15>(sext_ln1118_1112_fu_17924_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_901_fu_30915_p2() {
    add_ln703_901_fu_30915_p2 = (!sext_ln708_10_fu_2258_p1.read().is_01() || !sext_ln708_4_fu_1971_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_10_fu_2258_p1.read()) + sc_bigint<16>(sext_ln708_4_fu_1971_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_902_fu_30921_p2() {
    add_ln703_902_fu_30921_p2 = (!sext_ln708_21_fu_2907_p1.read().is_01() || !sext_ln708_15_fu_2609_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_21_fu_2907_p1.read()) + sc_bigint<16>(sext_ln708_15_fu_2609_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_903_fu_30927_p2() {
    add_ln703_903_fu_30927_p2 = (!add_ln703_901_fu_30915_p2.read().is_01() || !add_ln703_902_fu_30921_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_901_fu_30915_p2.read()) + sc_biguint<16>(add_ln703_902_fu_30921_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_904_fu_30933_p2() {
    add_ln703_904_fu_30933_p2 = (!sext_ln708_35_fu_3423_p1.read().is_01() || !sext_ln708_28_fu_3180_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_35_fu_3423_p1.read()) + sc_bigint<16>(sext_ln708_28_fu_3180_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_905_fu_30939_p2() {
    add_ln703_905_fu_30939_p2 = (!sext_ln1118_886_fu_3935_p1.read().is_01() || !sext_ln1118_881_fu_3643_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_886_fu_3935_p1.read()) + sc_bigint<15>(sext_ln1118_881_fu_3643_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_906_fu_34317_p2() {
    add_ln703_906_fu_34317_p2 = (!add_ln703_904_reg_43334.read().is_01() || !sext_ln703_184_fu_34314_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_904_reg_43334.read()) + sc_bigint<16>(sext_ln703_184_fu_34314_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_907_fu_34322_p2() {
    add_ln703_907_fu_34322_p2 = (!add_ln703_903_reg_43329.read().is_01() || !add_ln703_906_fu_34317_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_903_reg_43329.read()) + sc_biguint<16>(add_ln703_906_fu_34317_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_908_fu_30945_p2() {
    add_ln703_908_fu_30945_p2 = (!sext_ln1118_894_fu_4421_p1.read().is_01() || !sext_ln1118_890_fu_4209_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_894_fu_4421_p1.read()) + sc_bigint<15>(sext_ln1118_890_fu_4209_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_909_fu_30955_p2() {
    add_ln703_909_fu_30955_p2 = (!sext_ln708_66_fu_4892_p1.read().is_01() || !sext_ln708_60_fu_4680_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_66_fu_4892_p1.read()) + sc_bigint<16>(sext_ln708_60_fu_4680_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_90_fu_24037_p2() {
    add_ln703_90_fu_24037_p2 = (!sext_ln1118_1126_fu_18431_p1.read().is_01() || !sext_ln1118_1121_fu_18215_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1126_fu_18431_p1.read()) + sc_bigint<15>(sext_ln1118_1121_fu_18215_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_910_fu_30961_p2() {
    add_ln703_910_fu_30961_p2 = (!sext_ln703_185_fu_30951_p1.read().is_01() || !add_ln703_909_fu_30955_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_185_fu_30951_p1.read()) + sc_biguint<16>(add_ln703_909_fu_30955_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_911_fu_30967_p2() {
    add_ln703_911_fu_30967_p2 = (!sext_ln708_81_fu_5362_p1.read().is_01() || !sext_ln708_73_fu_5124_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_81_fu_5362_p1.read()) + sc_bigint<16>(sext_ln708_73_fu_5124_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_912_fu_30973_p2() {
    add_ln703_912_fu_30973_p2 = (!sext_ln1118_908_fu_5849_p1.read().is_01() || !sext_ln1118_903_fu_5609_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_908_fu_5849_p1.read()) + sc_bigint<14>(sext_ln1118_903_fu_5609_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_913_fu_30983_p2() {
    add_ln703_913_fu_30983_p2 = (!add_ln703_911_fu_30967_p2.read().is_01() || !sext_ln703_186_fu_30979_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_911_fu_30967_p2.read()) + sc_bigint<16>(sext_ln703_186_fu_30979_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_914_fu_34327_p2() {
    add_ln703_914_fu_34327_p2 = (!add_ln703_910_reg_43344.read().is_01() || !add_ln703_913_reg_43349.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_910_reg_43344.read()) + sc_biguint<16>(add_ln703_913_reg_43349.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_915_fu_34331_p2() {
    add_ln703_915_fu_34331_p2 = (!add_ln703_907_fu_34322_p2.read().is_01() || !add_ln703_914_fu_34327_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_907_fu_34322_p2.read()) + sc_biguint<16>(add_ln703_914_fu_34327_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_916_fu_30989_p2() {
    add_ln703_916_fu_30989_p2 = (!sext_ln708_102_fu_6334_p1.read().is_01() || !sext_ln708_95_fu_6103_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_102_fu_6334_p1.read()) + sc_bigint<16>(sext_ln708_95_fu_6103_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_917_fu_30995_p2() {
    add_ln703_917_fu_30995_p2 = (!sext_ln1118_916_fu_6688_p1.read().is_01() || !sext_ln1118_914_fu_6503_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_916_fu_6688_p1.read()) + sc_bigint<15>(sext_ln1118_914_fu_6503_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_918_fu_31005_p2() {
    add_ln703_918_fu_31005_p2 = (!add_ln703_916_fu_30989_p2.read().is_01() || !sext_ln703_187_fu_31001_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_916_fu_30989_p2.read()) + sc_bigint<16>(sext_ln703_187_fu_31001_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_919_fu_31011_p2() {
    add_ln703_919_fu_31011_p2 = (!sext_ln708_125_fu_7082_p1.read().is_01() || !sext_ln708_120_fu_6889_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_125_fu_7082_p1.read()) + sc_bigint<16>(sext_ln708_120_fu_6889_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_91_fu_32807_p2() {
    add_ln703_91_fu_32807_p2 = (!sext_ln703_25_fu_32801_p1.read().is_01() || !sext_ln703_26_fu_32804_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_25_fu_32801_p1.read()) + sc_bigint<16>(sext_ln703_26_fu_32804_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_920_fu_31017_p2() {
    add_ln703_920_fu_31017_p2 = (!sext_ln708_140_fu_7506_p1.read().is_01() || !sext_ln708_132_fu_7317_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_140_fu_7506_p1.read()) + sc_bigint<16>(sext_ln708_132_fu_7317_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_921_fu_34337_p2() {
    add_ln703_921_fu_34337_p2 = (!add_ln703_919_reg_43359.read().is_01() || !add_ln703_920_reg_43364.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_919_reg_43359.read()) + sc_biguint<16>(add_ln703_920_reg_43364.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_922_fu_34341_p2() {
    add_ln703_922_fu_34341_p2 = (!add_ln703_918_reg_43354.read().is_01() || !add_ln703_921_fu_34337_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_918_reg_43354.read()) + sc_biguint<16>(add_ln703_921_fu_34337_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_923_fu_31023_p2() {
    add_ln703_923_fu_31023_p2 = (!sext_ln1118_931_fu_7833_p1.read().is_01() || !sext_ln1118_929_fu_7660_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_931_fu_7833_p1.read()) + sc_bigint<15>(sext_ln1118_929_fu_7660_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_924_fu_31033_p2() {
    add_ln703_924_fu_31033_p2 = (!sext_ln708_167_fu_8158_p1.read().is_01() || !sext_ln708_160_fu_8041_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_167_fu_8158_p1.read()) + sc_bigint<16>(sext_ln708_160_fu_8041_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_925_fu_31039_p2() {
    add_ln703_925_fu_31039_p2 = (!sext_ln703_188_fu_31029_p1.read().is_01() || !add_ln703_924_fu_31033_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_188_fu_31029_p1.read()) + sc_biguint<16>(add_ln703_924_fu_31033_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_926_fu_31045_p2() {
    add_ln703_926_fu_31045_p2 = (!sext_ln1118_942_fu_8505_p1.read().is_01() || !sext_ln1118_938_fu_8363_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_942_fu_8505_p1.read()) + sc_bigint<15>(sext_ln1118_938_fu_8363_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_927_fu_31051_p2() {
    add_ln703_927_fu_31051_p2 = (!sext_ln708_189_fu_8853_p1.read().is_01() || !sext_ln708_182_fu_8705_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_189_fu_8853_p1.read()) + sc_bigint<16>(sext_ln708_182_fu_8705_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_928_fu_34349_p2() {
    add_ln703_928_fu_34349_p2 = (!sext_ln703_189_fu_34346_p1.read().is_01() || !add_ln703_927_reg_43379.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_189_fu_34346_p1.read()) + sc_biguint<16>(add_ln703_927_reg_43379.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_929_fu_34354_p2() {
    add_ln703_929_fu_34354_p2 = (!add_ln703_925_reg_43369.read().is_01() || !add_ln703_928_fu_34349_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_925_reg_43369.read()) + sc_biguint<16>(add_ln703_928_fu_34349_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_92_fu_32813_p2() {
    add_ln703_92_fu_32813_p2 = (!add_ln703_88_reg_41994.read().is_01() || !add_ln703_91_fu_32807_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_88_reg_41994.read()) + sc_biguint<16>(add_ln703_91_fu_32807_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_930_fu_34359_p2() {
    add_ln703_930_fu_34359_p2 = (!add_ln703_922_fu_34341_p2.read().is_01() || !add_ln703_929_fu_34354_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_922_fu_34341_p2.read()) + sc_biguint<16>(add_ln703_929_fu_34354_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_931_fu_34365_p2() {
    add_ln703_931_fu_34365_p2 = (!add_ln703_915_fu_34331_p2.read().is_01() || !add_ln703_930_fu_34359_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_915_fu_34331_p2.read()) + sc_biguint<16>(add_ln703_930_fu_34359_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_932_fu_31057_p2() {
    add_ln703_932_fu_31057_p2 = (!sext_ln708_201_fu_9207_p1.read().is_01() || !sext_ln708_196_fu_9007_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_201_fu_9207_p1.read()) + sc_bigint<16>(sext_ln708_196_fu_9007_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_933_fu_31063_p2() {
    add_ln703_933_fu_31063_p2 = (!sext_ln1118_963_fu_9621_p1.read().is_01() || !sext_ln1118_958_fu_9454_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_963_fu_9621_p1.read()) + sc_bigint<15>(sext_ln1118_958_fu_9454_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_934_fu_31073_p2() {
    add_ln703_934_fu_31073_p2 = (!add_ln703_932_fu_31057_p2.read().is_01() || !sext_ln703_190_fu_31069_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_932_fu_31057_p2.read()) + sc_bigint<16>(sext_ln703_190_fu_31069_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_935_fu_31079_p2() {
    add_ln703_935_fu_31079_p2 = (!sext_ln708_219_fu_9977_p1.read().is_01() || !sext_ln708_213_fu_9829_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_219_fu_9977_p1.read()) + sc_bigint<16>(sext_ln708_213_fu_9829_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_936_fu_31085_p2() {
    add_ln703_936_fu_31085_p2 = (!sext_ln708_231_fu_10267_p1.read().is_01() || !sext_ln708_225_fu_10094_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_231_fu_10267_p1.read()) + sc_bigint<16>(sext_ln708_225_fu_10094_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_937_fu_34371_p2() {
    add_ln703_937_fu_34371_p2 = (!add_ln703_935_reg_43389.read().is_01() || !add_ln703_936_reg_43394.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_935_reg_43389.read()) + sc_biguint<16>(add_ln703_936_reg_43394.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_938_fu_34375_p2() {
    add_ln703_938_fu_34375_p2 = (!add_ln703_934_reg_43384.read().is_01() || !add_ln703_937_fu_34371_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_934_reg_43384.read()) + sc_biguint<16>(add_ln703_937_fu_34371_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_939_fu_31091_p2() {
    add_ln703_939_fu_31091_p2 = (!sext_ln708_242_fu_10595_p1.read().is_01() || !sext_ln708_237_fu_10441_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_242_fu_10595_p1.read()) + sc_bigint<16>(sext_ln708_237_fu_10441_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_93_fu_24043_p2() {
    add_ln703_93_fu_24043_p2 = (!sext_ln708_513_fu_18833_p1.read().is_01() || !sext_ln708_507_fu_18703_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_513_fu_18833_p1.read()) + sc_bigint<16>(sext_ln708_507_fu_18703_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_940_fu_31097_p2() {
    add_ln703_940_fu_31097_p2 = (!sext_ln708_251_fu_10885_p1.read().is_01() || !sext_ln708_246_fu_10714_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_251_fu_10885_p1.read()) + sc_bigint<16>(sext_ln708_246_fu_10714_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_941_fu_31103_p2() {
    add_ln703_941_fu_31103_p2 = (!add_ln703_939_fu_31091_p2.read().is_01() || !add_ln703_940_fu_31097_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_939_fu_31091_p2.read()) + sc_biguint<16>(add_ln703_940_fu_31097_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_942_fu_31109_p2() {
    add_ln703_942_fu_31109_p2 = (!sext_ln708_263_fu_11213_p1.read().is_01() || !sext_ln708_257_fu_11039_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_263_fu_11213_p1.read()) + sc_bigint<16>(sext_ln708_257_fu_11039_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_943_fu_31115_p2() {
    add_ln703_943_fu_31115_p2 = (!sext_ln1118_1000_fu_11542_p1.read().is_01() || !sext_ln1118_997_fu_11330_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1000_fu_11542_p1.read()) + sc_bigint<15>(sext_ln1118_997_fu_11330_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_944_fu_31125_p2() {
    add_ln703_944_fu_31125_p2 = (!add_ln703_942_fu_31109_p2.read().is_01() || !sext_ln703_191_fu_31121_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_942_fu_31109_p2.read()) + sc_bigint<16>(sext_ln703_191_fu_31121_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_945_fu_34380_p2() {
    add_ln703_945_fu_34380_p2 = (!add_ln703_941_reg_43399.read().is_01() || !add_ln703_944_reg_43404.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_941_reg_43399.read()) + sc_biguint<16>(add_ln703_944_reg_43404.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_946_fu_34384_p2() {
    add_ln703_946_fu_34384_p2 = (!add_ln703_938_fu_34375_p2.read().is_01() || !add_ln703_945_fu_34380_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_938_fu_34375_p2.read()) + sc_biguint<16>(add_ln703_945_fu_34380_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_947_fu_31131_p2() {
    add_ln703_947_fu_31131_p2 = (!sext_ln708_281_fu_11839_p1.read().is_01() || !sext_ln708_277_fu_11659_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_281_fu_11839_p1.read()) + sc_bigint<16>(sext_ln708_277_fu_11659_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_948_fu_31137_p2() {
    add_ln703_948_fu_31137_p2 = (!sext_ln1118_1021_fu_12236_p1.read().is_01() || !sext_ln1118_1015_fu_12088_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1021_fu_12236_p1.read()) + sc_bigint<15>(sext_ln1118_1015_fu_12088_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_949_fu_31147_p2() {
    add_ln703_949_fu_31147_p2 = (!add_ln703_947_fu_31131_p2.read().is_01() || !sext_ln703_192_fu_31143_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_947_fu_31131_p2.read()) + sc_bigint<16>(sext_ln703_192_fu_31143_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_94_fu_24049_p2() {
    add_ln703_94_fu_24049_p2 = (!sext_ln1118_1135_fu_19052_p1.read().is_01() || !sext_ln1118_1132_fu_18925_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1135_fu_19052_p1.read()) + sc_bigint<15>(sext_ln1118_1132_fu_18925_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_950_fu_31153_p2() {
    add_ln703_950_fu_31153_p2 = (!sext_ln708_301_fu_12520_p1.read().is_01() || !sext_ln708_294_fu_12403_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_301_fu_12520_p1.read()) + sc_bigint<16>(sext_ln708_294_fu_12403_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_951_fu_31159_p2() {
    add_ln703_951_fu_31159_p2 = (!sext_ln708_312_fu_12957_p1.read().is_01() || !sext_ln708_307_fu_12761_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_312_fu_12957_p1.read()) + sc_bigint<16>(sext_ln708_307_fu_12761_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_952_fu_34390_p2() {
    add_ln703_952_fu_34390_p2 = (!add_ln703_950_reg_43414.read().is_01() || !add_ln703_951_reg_43419.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_950_reg_43414.read()) + sc_biguint<16>(add_ln703_951_reg_43419.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_953_fu_34394_p2() {
    add_ln703_953_fu_34394_p2 = (!add_ln703_949_reg_43409.read().is_01() || !add_ln703_952_fu_34390_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_949_reg_43409.read()) + sc_biguint<16>(add_ln703_952_fu_34390_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_954_fu_31165_p2() {
    add_ln703_954_fu_31165_p2 = (!sext_ln708_327_fu_13266_p1.read().is_01() || !sext_ln708_320_fu_13133_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_327_fu_13266_p1.read()) + sc_bigint<16>(sext_ln708_320_fu_13133_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_955_fu_31171_p2() {
    add_ln703_955_fu_31171_p2 = (!sext_ln1118_1039_fu_13580_p1.read().is_01() || !sext_ln1118_1035_fu_13427_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1039_fu_13580_p1.read()) + sc_bigint<14>(sext_ln1118_1035_fu_13427_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_956_fu_31181_p2() {
    add_ln703_956_fu_31181_p2 = (!add_ln703_954_fu_31165_p2.read().is_01() || !sext_ln703_193_fu_31177_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_954_fu_31165_p2.read()) + sc_bigint<16>(sext_ln703_193_fu_31177_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_957_fu_31187_p2() {
    add_ln703_957_fu_31187_p2 = (!sext_ln708_354_fu_13864_p1.read().is_01() || !sext_ln708_346_fu_13697_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_354_fu_13864_p1.read()) + sc_bigint<16>(sext_ln708_346_fu_13697_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_958_fu_31193_p2() {
    add_ln703_958_fu_31193_p2 = (!sext_ln708_366_fu_14130_p1.read().is_01() || !sext_ln708_360_fu_13982_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_366_fu_14130_p1.read()) + sc_bigint<16>(sext_ln708_360_fu_13982_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_959_fu_31199_p2() {
    add_ln703_959_fu_31199_p2 = (!add_ln703_957_fu_31187_p2.read().is_01() || !add_ln703_958_fu_31193_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_957_fu_31187_p2.read()) + sc_biguint<16>(add_ln703_958_fu_31193_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_95_fu_24059_p2() {
    add_ln703_95_fu_24059_p2 = (!add_ln703_93_fu_24043_p2.read().is_01() || !sext_ln703_27_fu_24055_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_93_fu_24043_p2.read()) + sc_bigint<16>(sext_ln703_27_fu_24055_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_960_fu_34399_p2() {
    add_ln703_960_fu_34399_p2 = (!add_ln703_956_reg_43424.read().is_01() || !add_ln703_959_reg_43429.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_956_reg_43424.read()) + sc_biguint<16>(add_ln703_959_reg_43429.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_961_fu_34403_p2() {
    add_ln703_961_fu_34403_p2 = (!add_ln703_953_fu_34394_p2.read().is_01() || !add_ln703_960_fu_34399_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_953_fu_34394_p2.read()) + sc_biguint<16>(add_ln703_960_fu_34399_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_962_fu_34409_p2() {
    add_ln703_962_fu_34409_p2 = (!add_ln703_946_fu_34384_p2.read().is_01() || !add_ln703_961_fu_34403_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_946_fu_34384_p2.read()) + sc_biguint<16>(add_ln703_961_fu_34403_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_963_fu_34415_p2() {
    add_ln703_963_fu_34415_p2 = (!add_ln703_931_fu_34365_p2.read().is_01() || !add_ln703_962_fu_34409_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_931_fu_34365_p2.read()) + sc_biguint<16>(add_ln703_962_fu_34409_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_964_fu_31205_p2() {
    add_ln703_964_fu_31205_p2 = (!sext_ln708_381_fu_14452_p1.read().is_01() || !sext_ln708_373_fu_14309_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_381_fu_14452_p1.read()) + sc_bigint<16>(sext_ln708_373_fu_14309_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_965_fu_31211_p2() {
    add_ln703_965_fu_31211_p2 = (!sext_ln708_392_fu_14835_p1.read().is_01() || !sext_ln708_386_fu_14631_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_392_fu_14835_p1.read()) + sc_bigint<16>(sext_ln708_386_fu_14631_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_966_fu_31217_p2() {
    add_ln703_966_fu_31217_p2 = (!add_ln703_964_fu_31205_p2.read().is_01() || !add_ln703_965_fu_31211_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_964_fu_31205_p2.read()) + sc_biguint<16>(add_ln703_965_fu_31211_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_967_fu_31223_p2() {
    add_ln703_967_fu_31223_p2 = (!sext_ln1118_1065_fu_15219_p1.read().is_01() || !sext_ln1118_1058_fu_15048_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1065_fu_15219_p1.read()) + sc_bigint<15>(sext_ln1118_1058_fu_15048_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_968_fu_31229_p2() {
    add_ln703_968_fu_31229_p2 = (!sext_ln708_411_fu_15596_p1.read().is_01() || !sext_ln708_405_fu_15434_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_411_fu_15596_p1.read()) + sc_bigint<16>(sext_ln708_405_fu_15434_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_969_fu_34424_p2() {
    add_ln703_969_fu_34424_p2 = (!sext_ln703_194_fu_34421_p1.read().is_01() || !add_ln703_968_reg_43444.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_194_fu_34421_p1.read()) + sc_biguint<16>(add_ln703_968_reg_43444.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_96_fu_24065_p2() {
    add_ln703_96_fu_24065_p2 = (!sext_ln708_534_fu_19304_p1.read().is_01() || !sext_ln708_528_fu_19181_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_534_fu_19304_p1.read()) + sc_bigint<16>(sext_ln708_528_fu_19181_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_970_fu_34429_p2() {
    add_ln703_970_fu_34429_p2 = (!add_ln703_966_reg_43434.read().is_01() || !add_ln703_969_fu_34424_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_966_reg_43434.read()) + sc_biguint<16>(add_ln703_969_fu_34424_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_971_fu_31235_p2() {
    add_ln703_971_fu_31235_p2 = (!sext_ln708_419_fu_15908_p1.read().is_01() || !sext_ln708_414_fu_15745_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_419_fu_15908_p1.read()) + sc_bigint<16>(sext_ln708_414_fu_15745_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_972_fu_31241_p2() {
    add_ln703_972_fu_31241_p2 = (!sext_ln1118_1084_fu_16237_p1.read().is_01() || !sext_ln1118_1080_fu_16094_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1084_fu_16237_p1.read()) + sc_bigint<15>(sext_ln1118_1080_fu_16094_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_973_fu_31251_p2() {
    add_ln703_973_fu_31251_p2 = (!add_ln703_971_fu_31235_p2.read().is_01() || !sext_ln703_195_fu_31247_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_971_fu_31235_p2.read()) + sc_bigint<16>(sext_ln703_195_fu_31247_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_974_fu_31257_p2() {
    add_ln703_974_fu_31257_p2 = (!sext_ln1118_1088_fu_16547_p1.read().is_01() || !sext_ln1118_1086_fu_16361_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1088_fu_16547_p1.read()) + sc_bigint<15>(sext_ln1118_1086_fu_16361_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_975_fu_31267_p2() {
    add_ln703_975_fu_31267_p2 = (!sext_ln708_451_fu_16781_p1.read().is_01() || !sext_ln708_444_fu_16664_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_451_fu_16781_p1.read()) + sc_bigint<16>(sext_ln708_444_fu_16664_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_976_fu_31273_p2() {
    add_ln703_976_fu_31273_p2 = (!sext_ln703_196_fu_31263_p1.read().is_01() || !add_ln703_975_fu_31267_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_196_fu_31263_p1.read()) + sc_biguint<16>(add_ln703_975_fu_31267_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_977_fu_34434_p2() {
    add_ln703_977_fu_34434_p2 = (!add_ln703_973_reg_43449.read().is_01() || !add_ln703_976_reg_43454.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_973_reg_43449.read()) + sc_biguint<16>(add_ln703_976_reg_43454.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_978_fu_34438_p2() {
    add_ln703_978_fu_34438_p2 = (!add_ln703_970_fu_34429_p2.read().is_01() || !add_ln703_977_fu_34434_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_970_fu_34429_p2.read()) + sc_biguint<16>(add_ln703_977_fu_34434_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_979_fu_31279_p2() {
    add_ln703_979_fu_31279_p2 = (!sext_ln708_463_fu_17110_p1.read().is_01() || !sext_ln708_458_fu_16933_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_463_fu_17110_p1.read()) + sc_bigint<16>(sext_ln708_458_fu_16933_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_97_fu_24071_p2() {
    add_ln703_97_fu_24071_p2 = (!sext_ln1118_1144_fu_19588_p1.read().is_01() || !sext_ln1118_1139_fu_19427_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1144_fu_19588_p1.read()) + sc_bigint<15>(sext_ln1118_1139_fu_19427_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_980_fu_31285_p2() {
    add_ln703_980_fu_31285_p2 = (!sext_ln1118_1102_fu_17406_p1.read().is_01() || !sext_ln1118_1099_fu_17264_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1102_fu_17406_p1.read()) + sc_bigint<15>(sext_ln1118_1099_fu_17264_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_981_fu_31295_p2() {
    add_ln703_981_fu_31295_p2 = (!add_ln703_979_fu_31279_p2.read().is_01() || !sext_ln703_197_fu_31291_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_979_fu_31279_p2.read()) + sc_bigint<16>(sext_ln703_197_fu_31291_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_982_fu_31301_p2() {
    add_ln703_982_fu_31301_p2 = (!sext_ln708_481_fu_17727_p1.read().is_01() || !sext_ln708_476_fu_17551_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_481_fu_17727_p1.read()) + sc_bigint<16>(sext_ln708_476_fu_17551_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_983_fu_31307_p2() {
    add_ln703_983_fu_31307_p2 = (!sext_ln708_489_fu_18009_p1.read().is_01() || !sext_ln708_485_fu_17875_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_489_fu_18009_p1.read()) + sc_bigint<16>(sext_ln708_485_fu_17875_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_984_fu_34444_p2() {
    add_ln703_984_fu_34444_p2 = (!add_ln703_982_reg_43464.read().is_01() || !add_ln703_983_reg_43469.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_982_reg_43464.read()) + sc_biguint<16>(add_ln703_983_reg_43469.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_985_fu_34448_p2() {
    add_ln703_985_fu_34448_p2 = (!add_ln703_981_reg_43459.read().is_01() || !add_ln703_984_fu_34444_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_981_reg_43459.read()) + sc_biguint<16>(add_ln703_984_fu_34444_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_986_fu_31313_p2() {
    add_ln703_986_fu_31313_p2 = (!sext_ln708_494_fu_18374_p1.read().is_01() || !sext_ln708_492_fu_18189_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_494_fu_18374_p1.read()) + sc_bigint<16>(sext_ln708_492_fu_18189_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_987_fu_31319_p2() {
    add_ln703_987_fu_31319_p2 = (!sext_ln708_505_fu_18677_p1.read().is_01() || !sext_ln708_499_fu_18528_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_505_fu_18677_p1.read()) + sc_bigint<16>(sext_ln708_499_fu_18528_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_988_fu_31325_p2() {
    add_ln703_988_fu_31325_p2 = (!add_ln703_986_fu_31313_p2.read().is_01() || !add_ln703_987_fu_31319_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_986_fu_31313_p2.read()) + sc_biguint<16>(add_ln703_987_fu_31319_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_989_fu_31331_p2() {
    add_ln703_989_fu_31331_p2 = (!sext_ln1118_1131_fu_18899_p1.read().is_01() || !sext_ln1118_1130_fu_18807_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1131_fu_18899_p1.read()) + sc_bigint<15>(sext_ln1118_1130_fu_18807_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_98_fu_32821_p2() {
    add_ln703_98_fu_32821_p2 = (!add_ln703_96_reg_42014.read().is_01() || !sext_ln703_28_fu_32818_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_96_reg_42014.read()) + sc_bigint<16>(sext_ln703_28_fu_32818_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_990_fu_31337_p2() {
    add_ln703_990_fu_31337_p2 = (!sext_ln708_526_fu_19155_p1.read().is_01() || !sext_ln708_521_fu_19003_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_526_fu_19155_p1.read()) + sc_bigint<16>(sext_ln708_521_fu_19003_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_991_fu_34456_p2() {
    add_ln703_991_fu_34456_p2 = (!sext_ln703_198_fu_34453_p1.read().is_01() || !add_ln703_990_reg_43484.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_198_fu_34453_p1.read()) + sc_biguint<16>(add_ln703_990_reg_43484.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_992_fu_34461_p2() {
    add_ln703_992_fu_34461_p2 = (!add_ln703_988_reg_43474.read().is_01() || !add_ln703_991_fu_34456_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_988_reg_43474.read()) + sc_biguint<16>(add_ln703_991_fu_34456_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_993_fu_34466_p2() {
    add_ln703_993_fu_34466_p2 = (!add_ln703_985_fu_34448_p2.read().is_01() || !add_ln703_992_fu_34461_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_985_fu_34448_p2.read()) + sc_biguint<16>(add_ln703_992_fu_34461_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_994_fu_34472_p2() {
    add_ln703_994_fu_34472_p2 = (!add_ln703_978_fu_34438_p2.read().is_01() || !add_ln703_993_fu_34466_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_978_fu_34438_p2.read()) + sc_biguint<16>(add_ln703_993_fu_34466_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_995_fu_31343_p2() {
    add_ln703_995_fu_31343_p2 = (!sext_ln708_539_fu_19401_p1.read().is_01() || !sext_ln708_533_fu_19278_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_539_fu_19401_p1.read()) + sc_bigint<16>(sext_ln708_533_fu_19278_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_996_fu_31349_p2() {
    add_ln703_996_fu_31349_p2 = (!sext_ln1118_1148_fu_19696_p1.read().is_01() || !sext_ln1118_1143_fu_19562_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1148_fu_19696_p1.read()) + sc_bigint<15>(sext_ln1118_1143_fu_19562_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_997_fu_31359_p2() {
    add_ln703_997_fu_31359_p2 = (!add_ln703_995_fu_31343_p2.read().is_01() || !sext_ln703_199_fu_31355_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_995_fu_31343_p2.read()) + sc_bigint<16>(sext_ln703_199_fu_31355_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_998_fu_31365_p2() {
    add_ln703_998_fu_31365_p2 = (!sext_ln708_552_fu_20029_p1.read().is_01() || !sext_ln708_548_fu_19875_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_552_fu_20029_p1.read()) + sc_bigint<16>(sext_ln708_548_fu_19875_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_999_fu_31371_p2() {
    add_ln703_999_fu_31371_p2 = (!sext_ln1118_1168_fu_20355_p1.read().is_01() || !sext_ln1118_1162_fu_20152_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_1168_fu_20355_p1.read()) + sc_bigint<15>(sext_ln1118_1162_fu_20152_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_99_fu_32826_p2() {
    add_ln703_99_fu_32826_p2 = (!add_ln703_95_reg_42009.read().is_01() || !add_ln703_98_fu_32821_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_95_reg_42009.read()) + sc_biguint<16>(add_ln703_98_fu_32821_p2.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_9_fu_23659_p2() {
    add_ln703_9_fu_23659_p2 = (!sext_ln1118_870_fu_2734_p1.read().is_01() || !sext_ln1118_866_fu_2376_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln1118_870_fu_2734_p1.read()) + sc_bigint<15>(sext_ln1118_866_fu_2376_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_add_ln703_fu_23653_p2() {
    add_ln703_fu_23653_p2 = (!sext_ln708_6_fu_2058_p1.read().is_01() || !sext_ln708_fu_1805_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln708_6_fu_2058_p1.read()) + sc_bigint<16>(sext_ln708_fu_1805_p1.read()));
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_return_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_0 = ap_return_0_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_0 = add_ln703_134_fu_32888_p2.read();
    }
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_return_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_1 = ap_return_1_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_1 = acc_1_V_fu_33364_p2.read();
    }
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_return_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_2 = ap_return_2_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_2 = acc_2_V_fu_33613_p2.read();
    }
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_return_3() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_3 = ap_return_3_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_3 = acc_3_V_fu_33840_p2.read();
    }
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_return_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_4 = ap_return_4_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_4 = acc_4_V_fu_34081_p2.read();
    }
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_return_5() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_5 = ap_return_5_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_5 = acc_5_V_fu_34308_p2.read();
    }
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_return_6() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_6 = ap_return_6_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_6 = acc_6_V_fu_33119_p2.read();
    }
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_return_7() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_7 = ap_return_7_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_7 = acc_7_V_fu_34545_p2.read();
    }
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_return_8() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_8 = ap_return_8_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_8 = acc_8_V_fu_34814_p2.read();
    }
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_return_9() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_9 = ap_return_9_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_9 = acc_9_V_fu_35043_p2.read();
    }
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_100_fu_35725_p0() {
    mul_ln1118_100_fu_35725_p0 =  (sc_lv<16>) (sext_ln1118_346_fu_5082_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_100_fu_35725_p1() {
    mul_ln1118_100_fu_35725_p1 =  (sc_lv<9>) (ap_const_lv25_CF);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_101_fu_35732_p0() {
    mul_ln1118_101_fu_35732_p0 =  (sc_lv<16>) (sext_ln1118_350_fu_5111_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_101_fu_35732_p1() {
    mul_ln1118_101_fu_35732_p1 =  (sc_lv<7>) (ap_const_lv23_29);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_102_fu_35739_p0() {
    mul_ln1118_102_fu_35739_p0 =  (sc_lv<16>) (sext_ln1118_354_fu_5140_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_102_fu_35739_p1() {
    mul_ln1118_102_fu_35739_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF42);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_103_fu_35746_p0() {
    mul_ln1118_103_fu_35746_p0 =  (sc_lv<16>) (sext_ln1118_356_fu_5161_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_103_fu_35746_p1() {
    mul_ln1118_103_fu_35746_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF92);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_104_fu_35753_p0() {
    mul_ln1118_104_fu_35753_p0 =  (sc_lv<16>) (sext_ln1118_282_fu_4404_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_104_fu_35753_p1() {
    mul_ln1118_104_fu_35753_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF2C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_105_fu_35760_p0() {
    mul_ln1118_105_fu_35760_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_4458_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_105_fu_35760_p1() {
    mul_ln1118_105_fu_35760_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF49);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_106_fu_35767_p0() {
    mul_ln1118_106_fu_35767_p0 =  (sc_lv<16>) (sext_ln1118_363_fu_5270_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_106_fu_35767_p1() {
    mul_ln1118_106_fu_35767_p1 =  (sc_lv<9>) (ap_const_lv25_C7);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_107_fu_35774_p0() {
    mul_ln1118_107_fu_35774_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_5291_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_107_fu_35774_p1() {
    mul_ln1118_107_fu_35774_p1 =  (sc_lv<9>) (ap_const_lv25_94);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_108_fu_35781_p0() {
    mul_ln1118_108_fu_35781_p0 =  (sc_lv<16>) (sext_ln1118_369_fu_5320_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_108_fu_35781_p1() {
    mul_ln1118_108_fu_35781_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF98);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_109_fu_35788_p0() {
    mul_ln1118_109_fu_35788_p0 =  (sc_lv<16>) (sext_ln1118_370_fu_5337_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_109_fu_35788_p1() {
    mul_ln1118_109_fu_35788_p1 =  (sc_lv<9>) (ap_const_lv25_B4);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_10_fu_35116_p0() {
    mul_ln1118_10_fu_35116_p0 =  (sc_lv<16>) (sext_ln1118_14_fu_1817_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_10_fu_35116_p1() {
    mul_ln1118_10_fu_35116_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF61);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_110_fu_35795_p0() {
    mul_ln1118_110_fu_35795_p0 =  (sc_lv<16>) (sext_ln1118_375_fu_5370_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_110_fu_35795_p1() {
    mul_ln1118_110_fu_35795_p1 =  (sc_lv<8>) (ap_const_lv24_69);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_111_fu_35802_p0() {
    mul_ln1118_111_fu_35802_p0 =  (sc_lv<16>) (sext_ln1118_379_fu_5399_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_111_fu_35802_p1() {
    mul_ln1118_111_fu_35802_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF91);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_112_fu_35809_p0() {
    mul_ln1118_112_fu_35809_p0 =  (sc_lv<16>) (sext_ln1118_306_fu_4663_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_112_fu_35809_p1() {
    mul_ln1118_112_fu_35809_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFC5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_113_fu_35816_p0() {
    mul_ln1118_113_fu_35816_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_4709_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_113_fu_35816_p1() {
    mul_ln1118_113_fu_35816_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF56);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_114_fu_35823_p0() {
    mul_ln1118_114_fu_35823_p0 =  (sc_lv<16>) (sext_ln1118_390_fu_5546_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_114_fu_35823_p1() {
    mul_ln1118_114_fu_35823_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF8F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_115_fu_35830_p0() {
    mul_ln1118_115_fu_35830_p0 =  (sc_lv<16>) (sext_ln1118_393_fu_5571_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_115_fu_35830_p1() {
    mul_ln1118_115_fu_35830_p1 =  (sc_lv<9>) (ap_const_lv25_9A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_116_fu_35837_p1() {
    mul_ln1118_116_fu_35837_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFE9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_117_fu_35844_p0() {
    mul_ln1118_117_fu_35844_p0 =  (sc_lv<16>) (sext_ln1118_399_fu_5621_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_117_fu_35844_p1() {
    mul_ln1118_117_fu_35844_p1 =  (sc_lv<8>) (ap_const_lv24_6C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_118_fu_35851_p0() {
    mul_ln1118_118_fu_35851_p0 =  (sc_lv<16>) (sext_ln1118_402_fu_5646_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_118_fu_35851_p1() {
    mul_ln1118_118_fu_35851_p1 =  (sc_lv<9>) (ap_const_lv25_C1);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_119_fu_35858_p1() {
    mul_ln1118_119_fu_35858_p1 =  (sc_lv<6>) (ap_const_lv22_1B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_11_fu_35123_p0() {
    mul_ln1118_11_fu_35123_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_1846_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_11_fu_35123_p1() {
    mul_ln1118_11_fu_35123_p1 =  (sc_lv<7>) (ap_const_lv23_2E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_120_fu_35865_p0() {
    mul_ln1118_120_fu_35865_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_4904_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_120_fu_35865_p1() {
    mul_ln1118_120_fu_35865_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_121_fu_35872_p0() {
    mul_ln1118_121_fu_35872_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_4921_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_121_fu_35872_p1() {
    mul_ln1118_121_fu_35872_p1 =  (sc_lv<9>) (ap_const_lv25_A4);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_122_fu_35879_p0() {
    mul_ln1118_122_fu_35879_p0 =  (sc_lv<16>) (sext_ln1118_407_fu_5718_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_122_fu_35879_p1() {
    mul_ln1118_122_fu_35879_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF53);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_123_fu_35886_p0() {
    mul_ln1118_123_fu_35886_p0 =  (sc_lv<16>) (sext_ln1118_416_fu_5803_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_123_fu_35886_p1() {
    mul_ln1118_123_fu_35886_p1 =  (sc_lv<9>) (ap_const_lv25_B8);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_124_fu_35893_p1() {
    mul_ln1118_124_fu_35893_p1 =  (sc_lv<7>) (ap_const_lv23_33);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_125_fu_35900_p1() {
    mul_ln1118_125_fu_35900_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFED);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_126_fu_35907_p0() {
    mul_ln1118_126_fu_35907_p0 =  (sc_lv<16>) (sext_ln1118_429_fu_5894_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_126_fu_35907_p1() {
    mul_ln1118_126_fu_35907_p1 =  (sc_lv<8>) (ap_const_lv24_7D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_127_fu_35914_p0() {
    mul_ln1118_127_fu_35914_p0 =  (sc_lv<16>) (sext_ln1118_353_fu_5136_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_127_fu_35914_p1() {
    mul_ln1118_127_fu_35914_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFEA);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_128_fu_35921_p0() {
    mul_ln1118_128_fu_35921_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_5157_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_128_fu_35921_p1() {
    mul_ln1118_128_fu_35921_p1 =  (sc_lv<9>) (ap_const_lv25_C7);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_129_fu_35928_p0() {
    mul_ln1118_129_fu_35928_p0 =  (sc_lv<16>) (sext_ln1118_437_fu_6007_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_129_fu_35928_p1() {
    mul_ln1118_129_fu_35928_p1 =  (sc_lv<7>) (ap_const_lv23_2F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_12_fu_35130_p0() {
    mul_ln1118_12_fu_35130_p0 =  (sc_lv<16>) (sext_ln1118_23_fu_1879_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_12_fu_35130_p1() {
    mul_ln1118_12_fu_35130_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF2D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_130_fu_35935_p0() {
    mul_ln1118_130_fu_35935_p0 =  (sc_lv<16>) (sext_ln1118_442_fu_6040_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_130_fu_35935_p1() {
    mul_ln1118_130_fu_35935_p1 =  (sc_lv<9>) (ap_const_lv25_96);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_131_fu_35942_p0() {
    mul_ln1118_131_fu_35942_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_6065_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_131_fu_35942_p1() {
    mul_ln1118_131_fu_35942_p1 =  (sc_lv<9>) (ap_const_lv25_91);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_132_fu_35949_p0() {
    mul_ln1118_132_fu_35949_p0 =  (sc_lv<16>) (sext_ln1118_448_fu_6090_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_132_fu_35949_p1() {
    mul_ln1118_132_fu_35949_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF91);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_133_fu_35956_p0() {
    mul_ln1118_133_fu_35956_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_6111_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_133_fu_35956_p1() {
    mul_ln1118_133_fu_35956_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB1);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_134_fu_35963_p0() {
    mul_ln1118_134_fu_35963_p0 =  (sc_lv<16>) (sext_ln1118_454_fu_6140_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_134_fu_35963_p1() {
    mul_ln1118_134_fu_35963_p1 =  (sc_lv<9>) (ap_const_lv25_CE);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_135_fu_35970_p1() {
    mul_ln1118_135_fu_35970_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFD5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_136_fu_35977_p0() {
    mul_ln1118_136_fu_35977_p0 =  (sc_lv<16>) (sext_ln1118_378_fu_5395_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_136_fu_35977_p1() {
    mul_ln1118_136_fu_35977_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF52);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_137_fu_35984_p0() {
    mul_ln1118_137_fu_35984_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_6223_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_137_fu_35984_p1() {
    mul_ln1118_137_fu_35984_p1 =  (sc_lv<9>) (ap_const_lv25_8C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_138_fu_35991_p0() {
    mul_ln1118_138_fu_35991_p0 =  (sc_lv<16>) (sext_ln1118_461_fu_6248_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_138_fu_35991_p1() {
    mul_ln1118_138_fu_35991_p1 =  (sc_lv<8>) (ap_const_lv24_7D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_139_fu_35998_p0() {
    mul_ln1118_139_fu_35998_p0 =  (sc_lv<16>) (sext_ln1118_469_fu_6321_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_139_fu_35998_p1() {
    mul_ln1118_139_fu_35998_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF4E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_13_fu_35137_p0() {
    mul_ln1118_13_fu_35137_p0 =  (sc_lv<16>) (sext_ln1118_25_fu_1900_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_13_fu_35137_p1() {
    mul_ln1118_13_fu_35137_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF7A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_140_fu_36005_p0() {
    mul_ln1118_140_fu_36005_p0 =  (sc_lv<16>) (sext_ln1118_471_fu_6342_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_140_fu_36005_p1() {
    mul_ln1118_140_fu_36005_p1 =  (sc_lv<9>) (ap_const_lv25_B9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_141_fu_36012_p1() {
    mul_ln1118_141_fu_36012_p1 =  (sc_lv<6>) (ap_const_lv22_16);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_142_fu_36019_p0() {
    mul_ln1118_142_fu_36019_p0 =  (sc_lv<16>) (sext_ln1118_394_fu_5588_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_142_fu_36019_p1() {
    mul_ln1118_142_fu_36019_p1 =  (sc_lv<9>) (ap_const_lv25_D4);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_143_fu_36026_p0() {
    mul_ln1118_143_fu_36026_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_5617_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_143_fu_36026_p1() {
    mul_ln1118_143_fu_36026_p1 =  (sc_lv<9>) (ap_const_lv25_BC);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_144_fu_36033_p0() {
    mul_ln1118_144_fu_36033_p0 =  (sc_lv<16>) (sext_ln1118_402_fu_5646_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_144_fu_36033_p1() {
    mul_ln1118_144_fu_36033_p1 =  (sc_lv<9>) (ap_const_lv25_AD);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_145_fu_36040_p0() {
    mul_ln1118_145_fu_36040_p0 =  (sc_lv<16>) (sext_ln1118_478_fu_6435_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_145_fu_36040_p1() {
    mul_ln1118_145_fu_36040_p1 =  (sc_lv<9>) (ap_const_lv25_BF);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_146_fu_36047_p0() {
    mul_ln1118_146_fu_36047_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_6460_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_146_fu_36047_p1() {
    mul_ln1118_146_fu_36047_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF5B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_147_fu_36054_p0() {
    mul_ln1118_147_fu_36054_p0 =  (sc_lv<16>) (sext_ln1118_10_fu_1788_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_147_fu_36054_p1() {
    mul_ln1118_147_fu_36054_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF3B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_148_fu_36061_p0() {
    mul_ln1118_148_fu_36061_p0 =  (sc_lv<16>) (sext_ln1118_13_fu_1813_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_148_fu_36061_p1() {
    mul_ln1118_148_fu_36061_p1 =  (sc_lv<8>) (ap_const_lv24_76);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_149_fu_36068_p0() {
    mul_ln1118_149_fu_36068_p0 =  (sc_lv<16>) (sext_ln1118_17_fu_1842_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_149_fu_36068_p1() {
    mul_ln1118_149_fu_36068_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFAA);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_14_fu_35144_p0() {
    mul_ln1118_14_fu_35144_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_1925_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_14_fu_35144_p1() {
    mul_ln1118_14_fu_35144_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF8A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_150_fu_36075_p0() {
    mul_ln1118_150_fu_36075_p0 =  (sc_lv<16>) (sext_ln1118_420_fu_5832_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_150_fu_36075_p1() {
    mul_ln1118_150_fu_36075_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF41);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_151_fu_36082_p0() {
    mul_ln1118_151_fu_36082_p0 =  (sc_lv<16>) (sext_ln1118_422_fu_5853_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_151_fu_36082_p1() {
    mul_ln1118_151_fu_36082_p1 =  (sc_lv<9>) (ap_const_lv25_C6);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_152_fu_36089_p0() {
    mul_ln1118_152_fu_36089_p0 =  (sc_lv<16>) (sext_ln1118_486_fu_6620_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_152_fu_36089_p1() {
    mul_ln1118_152_fu_36089_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF8C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_153_fu_36096_p0() {
    mul_ln1118_153_fu_36096_p0 =  (sc_lv<16>) (sext_ln1118_489_fu_6645_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_153_fu_36096_p1() {
    mul_ln1118_153_fu_36096_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFA6);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_154_fu_36103_p1() {
    mul_ln1118_154_fu_36103_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFE5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_155_fu_36110_p0() {
    mul_ln1118_155_fu_36110_p0 =  (sc_lv<16>) (sext_ln1118_49_fu_2074_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_155_fu_36110_p1() {
    mul_ln1118_155_fu_36110_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFC9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_156_fu_36117_p0() {
    mul_ln1118_156_fu_36117_p0 =  (sc_lv<16>) (sext_ln1118_53_fu_2116_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_156_fu_36117_p1() {
    mul_ln1118_156_fu_36117_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFA5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_157_fu_36124_p0() {
    mul_ln1118_157_fu_36124_p0 =  (sc_lv<16>) (sext_ln1118_447_fu_6086_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_157_fu_36124_p1() {
    mul_ln1118_157_fu_36124_p1 =  (sc_lv<9>) (ap_const_lv25_A6);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_158_fu_36131_p0() {
    mul_ln1118_158_fu_36131_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_6111_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_158_fu_36131_p1() {
    mul_ln1118_158_fu_36131_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF99);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_159_fu_36138_p0() {
    mul_ln1118_159_fu_36138_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_6144_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_159_fu_36138_p1() {
    mul_ln1118_159_fu_36138_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFED);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_15_fu_35151_p0() {
    mul_ln1118_15_fu_35151_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_1958_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_15_fu_35151_p1() {
    mul_ln1118_15_fu_35151_p1 =  (sc_lv<9>) (ap_const_lv25_96);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_160_fu_36145_p0() {
    mul_ln1118_160_fu_36145_p0 =  (sc_lv<16>) (sext_ln1118_495_fu_6796_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_160_fu_36145_p1() {
    mul_ln1118_160_fu_36145_p1 =  (sc_lv<8>) (ap_const_lv24_47);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_161_fu_36152_p0() {
    mul_ln1118_161_fu_36152_p0 =  (sc_lv<16>) (sext_ln1118_498_fu_6821_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_161_fu_36152_p1() {
    mul_ln1118_161_fu_36152_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF55);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_162_fu_36159_p0() {
    mul_ln1118_162_fu_36159_p0 =  (sc_lv<16>) (sext_ln1118_85_fu_2388_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_162_fu_36159_p1() {
    mul_ln1118_162_fu_36159_p1 =  (sc_lv<9>) (ap_const_lv25_95);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_163_fu_36166_p0() {
    mul_ln1118_163_fu_36166_p0 =  (sc_lv<16>) (sext_ln1118_92_fu_2452_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_163_fu_36166_p1() {
    mul_ln1118_163_fu_36166_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFD4);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_164_fu_36173_p0() {
    mul_ln1118_164_fu_36173_p0 =  (sc_lv<16>) (sext_ln1118_94_fu_2473_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_164_fu_36173_p1() {
    mul_ln1118_164_fu_36173_p1 =  (sc_lv<9>) (ap_const_lv25_B7);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_165_fu_36180_p0() {
    mul_ln1118_165_fu_36180_p0 =  (sc_lv<16>) (sext_ln1118_468_fu_6317_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_165_fu_36180_p1() {
    mul_ln1118_165_fu_36180_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_166_fu_36187_p0() {
    mul_ln1118_166_fu_36187_p0 =  (sc_lv<16>) (sext_ln1118_471_fu_6342_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_166_fu_36187_p1() {
    mul_ln1118_166_fu_36187_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF41);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_167_fu_36194_p0() {
    mul_ln1118_167_fu_36194_p0 =  (sc_lv<16>) (sext_ln1118_474_fu_6367_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_167_fu_36194_p1() {
    mul_ln1118_167_fu_36194_p1 =  (sc_lv<8>) (ap_const_lv24_75);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_168_fu_36201_p0() {
    mul_ln1118_168_fu_36201_p0 =  (sc_lv<16>) (sext_ln1118_508_fu_7022_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_168_fu_36201_p1() {
    mul_ln1118_168_fu_36201_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF64);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_169_fu_36208_p0() {
    mul_ln1118_169_fu_36208_p0 =  (sc_lv<16>) (sext_ln1118_122_fu_2742_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_169_fu_36208_p1() {
    mul_ln1118_169_fu_36208_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF99);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_16_fu_35158_p0() {
    mul_ln1118_16_fu_35158_p0 =  (sc_lv<16>) (sext_ln1118_36_fu_1983_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_16_fu_35158_p1() {
    mul_ln1118_16_fu_35158_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF5D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_170_fu_36215_p1() {
    mul_ln1118_170_fu_36215_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFE6);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_171_fu_36222_p0() {
    mul_ln1118_171_fu_36222_p0 =  (sc_lv<16>) (sext_ln1118_23_fu_1879_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_171_fu_36222_p1() {
    mul_ln1118_171_fu_36222_p1 =  (sc_lv<9>) (ap_const_lv25_AA);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_172_fu_36229_p0() {
    mul_ln1118_172_fu_36229_p0 =  (sc_lv<16>) (sext_ln1118_27_fu_1921_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_172_fu_36229_p1() {
    mul_ln1118_172_fu_36229_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF67);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_173_fu_36236_p0() {
    mul_ln1118_173_fu_36236_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_1958_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_173_fu_36236_p1() {
    mul_ln1118_173_fu_36236_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF53);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_174_fu_36243_p0() {
    mul_ln1118_174_fu_36243_p0 =  (sc_lv<16>) (sext_ln1118_36_fu_1983_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_174_fu_36243_p1() {
    mul_ln1118_174_fu_36243_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF68);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_175_fu_36250_p0() {
    mul_ln1118_175_fu_36250_p0 =  (sc_lv<16>) (sext_ln1118_38_fu_2004_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_175_fu_36250_p1() {
    mul_ln1118_175_fu_36250_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF57);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_176_fu_36257_p0() {
    mul_ln1118_176_fu_36257_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_3053_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_176_fu_36257_p1() {
    mul_ln1118_176_fu_36257_p1 =  (sc_lv<9>) (ap_const_lv25_C6);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_177_fu_36264_p1() {
    mul_ln1118_177_fu_36264_p1 =  (sc_lv<8>) (ap_const_lv24_65);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_178_fu_36271_p0() {
    mul_ln1118_178_fu_36271_p0 =  (sc_lv<16>) (sext_ln1118_50_fu_2091_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_178_fu_36271_p1() {
    mul_ln1118_178_fu_36271_p1 =  (sc_lv<9>) (ap_const_lv25_8F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_179_fu_36278_p0() {
    mul_ln1118_179_fu_36278_p0 =  (sc_lv<16>) (sext_ln1118_53_fu_2116_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_179_fu_36278_p1() {
    mul_ln1118_179_fu_36278_p1 =  (sc_lv<8>) (ap_const_lv24_56);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_17_fu_35165_p0() {
    mul_ln1118_17_fu_35165_p0 =  (sc_lv<16>) (sext_ln1118_40_fu_2012_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_17_fu_35165_p1() {
    mul_ln1118_17_fu_35165_p1 =  (sc_lv<7>) (ap_const_lv23_3A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_180_fu_36285_p0() {
    mul_ln1118_180_fu_36285_p0 =  (sc_lv<16>) (sext_ln1118_57_fu_2145_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_180_fu_36285_p1() {
    mul_ln1118_180_fu_36285_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF36);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_181_fu_36292_p0() {
    mul_ln1118_181_fu_36292_p0 =  (sc_lv<16>) (sext_ln1118_62_fu_2178_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_181_fu_36292_p1() {
    mul_ln1118_181_fu_36292_p1 =  (sc_lv<7>) (ap_const_lv23_2E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_182_fu_36299_p0() {
    mul_ln1118_182_fu_36299_p0 =  (sc_lv<16>) (sext_ln1118_74_fu_2295_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_182_fu_36299_p1() {
    mul_ln1118_182_fu_36299_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF77);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_183_fu_36306_p0() {
    mul_ln1118_183_fu_36306_p0 =  (sc_lv<16>) (sext_ln1118_178_fu_3308_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_183_fu_36306_p1() {
    mul_ln1118_183_fu_36306_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF32);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_184_fu_36313_p0() {
    mul_ln1118_184_fu_36313_p0 =  (sc_lv<16>) (sext_ln1118_85_fu_2388_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_184_fu_36313_p1() {
    mul_ln1118_184_fu_36313_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF72);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_185_fu_36320_p0() {
    mul_ln1118_185_fu_36320_p0 =  (sc_lv<16>) (sext_ln1118_91_fu_2448_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_185_fu_36320_p1() {
    mul_ln1118_185_fu_36320_p1 =  (sc_lv<9>) (ap_const_lv25_CD);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_186_fu_36327_p0() {
    mul_ln1118_186_fu_36327_p0 =  (sc_lv<16>) (sext_ln1118_94_fu_2473_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_186_fu_36327_p1() {
    mul_ln1118_186_fu_36327_p1 =  (sc_lv<9>) (ap_const_lv25_C5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_187_fu_36334_p0() {
    mul_ln1118_187_fu_36334_p0 =  (sc_lv<16>) (sext_ln1118_101_fu_2548_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_187_fu_36334_p1() {
    mul_ln1118_187_fu_36334_p1 =  (sc_lv<9>) (ap_const_lv25_8D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_188_fu_36341_p0() {
    mul_ln1118_188_fu_36341_p0 =  (sc_lv<16>) (sext_ln1118_104_fu_2588_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_188_fu_36341_p1() {
    mul_ln1118_188_fu_36341_p1 =  (sc_lv<9>) (ap_const_lv25_9E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_189_fu_36348_p0() {
    mul_ln1118_189_fu_36348_p0 =  (sc_lv<16>) (sext_ln1118_110_fu_2625_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_189_fu_36348_p1() {
    mul_ln1118_189_fu_36348_p1 =  (sc_lv<8>) (ap_const_lv24_7B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_18_fu_35172_p0() {
    mul_ln1118_18_fu_35172_p0 =  (sc_lv<16>) (sext_ln1118_44_fu_2041_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_18_fu_35172_p1() {
    mul_ln1118_18_fu_35172_p1 =  (sc_lv<8>) (ap_const_lv24_66);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_190_fu_36355_p0() {
    mul_ln1118_190_fu_36355_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2661_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_190_fu_36355_p1() {
    mul_ln1118_190_fu_36355_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF62);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_191_fu_36362_p1() {
    mul_ln1118_191_fu_36362_p1 =  (sc_lv<7>) (ap_const_lv23_27);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_192_fu_36369_p0() {
    mul_ln1118_192_fu_36369_p0 =  (sc_lv<16>) (sext_ln1118_122_fu_2742_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_192_fu_36369_p1() {
    mul_ln1118_192_fu_36369_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF91);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_193_fu_36376_p0() {
    mul_ln1118_193_fu_36376_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2763_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_193_fu_36376_p1() {
    mul_ln1118_193_fu_36376_p1 =  (sc_lv<9>) (ap_const_lv25_A5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_194_fu_36383_p0() {
    mul_ln1118_194_fu_36383_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2840_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_194_fu_36383_p1() {
    mul_ln1118_194_fu_36383_p1 =  (sc_lv<8>) (ap_const_lv24_56);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_195_fu_36390_p0() {
    mul_ln1118_195_fu_36390_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2865_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_195_fu_36390_p1() {
    mul_ln1118_195_fu_36390_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF79);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_196_fu_36397_p0() {
    mul_ln1118_196_fu_36397_p0 =  (sc_lv<16>) (sext_ln1118_139_fu_2890_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_196_fu_36397_p1() {
    mul_ln1118_196_fu_36397_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF6C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_197_fu_36404_p0() {
    mul_ln1118_197_fu_36404_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_2948_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_197_fu_36404_p1() {
    mul_ln1118_197_fu_36404_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF6D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_198_fu_36411_p0() {
    mul_ln1118_198_fu_36411_p0 =  (sc_lv<16>) (sext_ln1118_36_fu_1983_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_198_fu_36411_p1() {
    mul_ln1118_198_fu_36411_p1 =  (sc_lv<9>) (ap_const_lv25_CA);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_199_fu_36418_p0() {
    mul_ln1118_199_fu_36418_p0 =  (sc_lv<16>) (sext_ln1118_38_fu_2004_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_199_fu_36418_p1() {
    mul_ln1118_199_fu_36418_p1 =  (sc_lv<9>) (ap_const_lv25_C3);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_19_fu_35179_p0() {
    mul_ln1118_19_fu_35179_p0 =  (sc_lv<16>) (sext_ln1118_47_fu_2066_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_19_fu_35179_p1() {
    mul_ln1118_19_fu_35179_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF6A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_200_fu_36425_p0() {
    mul_ln1118_200_fu_36425_p0 =  (sc_lv<16>) (sext_ln1118_156_fu_3078_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_200_fu_36425_p1() {
    mul_ln1118_200_fu_36425_p1 =  (sc_lv<9>) (ap_const_lv25_C5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_201_fu_36432_p0() {
    mul_ln1118_201_fu_36432_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3159_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_201_fu_36432_p1() {
    mul_ln1118_201_fu_36432_p1 =  (sc_lv<6>) (ap_const_lv22_15);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_202_fu_36439_p1() {
    mul_ln1118_202_fu_36439_p1 =  (sc_lv<8>) (ap_const_lv24_61);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_203_fu_36446_p0() {
    mul_ln1118_203_fu_36446_p0 =  (sc_lv<16>) (sext_ln1118_175_fu_3244_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_203_fu_36446_p1() {
    mul_ln1118_203_fu_36446_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFEA);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_204_fu_36453_p0() {
    mul_ln1118_204_fu_36453_p0 =  (sc_lv<16>) (sext_ln1118_250_fu_4113_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_204_fu_36453_p1() {
    mul_ln1118_204_fu_36453_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF52);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_205_fu_36460_p0() {
    mul_ln1118_205_fu_36460_p0 =  (sc_lv<16>) (sext_ln1118_71_fu_2270_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_205_fu_36460_p1() {
    mul_ln1118_205_fu_36460_p1 =  (sc_lv<9>) (ap_const_lv25_CE);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_206_fu_36467_p0() {
    mul_ln1118_206_fu_36467_p0 =  (sc_lv<16>) (sext_ln1118_74_fu_2295_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_206_fu_36467_p1() {
    mul_ln1118_206_fu_36467_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF44);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_207_fu_36474_p0() {
    mul_ln1118_207_fu_36474_p0 =  (sc_lv<16>) (sext_ln1118_178_fu_3308_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_207_fu_36474_p1() {
    mul_ln1118_207_fu_36474_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF67);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_208_fu_36481_p0() {
    mul_ln1118_208_fu_36481_p0 =  (sc_lv<16>) (sext_ln1118_183_fu_3364_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_208_fu_36481_p1() {
    mul_ln1118_208_fu_36481_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF32);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_209_fu_36488_p0() {
    mul_ln1118_209_fu_36488_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_3385_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_209_fu_36488_p1() {
    mul_ln1118_209_fu_36488_p1 =  (sc_lv<9>) (ap_const_lv25_86);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_20_fu_35186_p0() {
    mul_ln1118_20_fu_35186_p0 =  (sc_lv<16>) (sext_ln1118_51_fu_2095_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_20_fu_35186_p1() {
    mul_ln1118_20_fu_35186_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF96);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_210_fu_36495_p0() {
    mul_ln1118_210_fu_36495_p0 =  (sc_lv<16>) (sext_ln1118_187_fu_3406_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_210_fu_36495_p1() {
    mul_ln1118_210_fu_36495_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF91);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_211_fu_36502_p0() {
    mul_ln1118_211_fu_36502_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_3427_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_211_fu_36502_p1() {
    mul_ln1118_211_fu_36502_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF7D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_212_fu_36509_p0() {
    mul_ln1118_212_fu_36509_p0 =  (sc_lv<16>) (sext_ln1118_109_fu_2621_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_212_fu_36509_p1() {
    mul_ln1118_212_fu_36509_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF3A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_213_fu_36516_p0() {
    mul_ln1118_213_fu_36516_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2661_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_213_fu_36516_p1() {
    mul_ln1118_213_fu_36516_p1 =  (sc_lv<9>) (ap_const_lv25_D4);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_214_fu_36523_p1() {
    mul_ln1118_214_fu_36523_p1 =  (sc_lv<8>) (ap_const_lv24_4C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_215_fu_36530_p0() {
    mul_ln1118_215_fu_36530_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_3549_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_215_fu_36530_p1() {
    mul_ln1118_215_fu_36530_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF5F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_216_fu_36537_p0() {
    mul_ln1118_216_fu_36537_p0 =  (sc_lv<16>) (sext_ln1118_207_fu_3626_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_216_fu_36537_p1() {
    mul_ln1118_216_fu_36537_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF31);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_217_fu_36544_p0() {
    mul_ln1118_217_fu_36544_p0 =  (sc_lv<16>) (sext_ln1118_215_fu_3713_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_217_fu_36544_p1() {
    mul_ln1118_217_fu_36544_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_218_fu_36551_p0() {
    mul_ln1118_218_fu_36551_p0 =  (sc_lv<16>) (sext_ln1118_293_fu_4549_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_218_fu_36551_p1() {
    mul_ln1118_218_fu_36551_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF4B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_219_fu_36558_p0() {
    mul_ln1118_219_fu_36558_p0 =  (sc_lv<16>) (sext_ln1118_147_fu_2948_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_219_fu_36558_p1() {
    mul_ln1118_219_fu_36558_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF3D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_21_fu_35193_p0() {
    mul_ln1118_21_fu_35193_p0 =  (sc_lv<16>) (sext_ln1118_54_fu_2120_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_21_fu_35193_p1() {
    mul_ln1118_21_fu_35193_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF39);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_220_fu_36565_p0() {
    mul_ln1118_220_fu_36565_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_3789_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_220_fu_36565_p1() {
    mul_ln1118_220_fu_36565_p1 =  (sc_lv<7>) (ap_const_lv23_32);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_221_fu_36572_p0() {
    mul_ln1118_221_fu_36572_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_3825_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_221_fu_36572_p1() {
    mul_ln1118_221_fu_36572_p1 =  (sc_lv<9>) (ap_const_lv25_D2);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_222_fu_36579_p0() {
    mul_ln1118_222_fu_36579_p0 =  (sc_lv<16>) (sext_ln1118_231_fu_3885_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_222_fu_36579_p1() {
    mul_ln1118_222_fu_36579_p1 =  (sc_lv<8>) (ap_const_lv24_66);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_223_fu_36586_p0() {
    mul_ln1118_223_fu_36586_p0 =  (sc_lv<16>) (sext_ln1118_233_fu_3906_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_223_fu_36586_p1() {
    mul_ln1118_223_fu_36586_p1 =  (sc_lv<9>) (ap_const_lv25_D2);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_224_fu_36593_p0() {
    mul_ln1118_224_fu_36593_p0 =  (sc_lv<16>) (sext_ln1118_239_fu_3943_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_224_fu_36593_p1() {
    mul_ln1118_224_fu_36593_p1 =  (sc_lv<8>) (ap_const_lv24_4B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_225_fu_36600_p0() {
    mul_ln1118_225_fu_36600_p0 =  (sc_lv<16>) (sext_ln1118_245_fu_4003_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_225_fu_36600_p1() {
    mul_ln1118_225_fu_36600_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB2);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_226_fu_36607_p0() {
    mul_ln1118_226_fu_36607_p0 =  (sc_lv<16>) (sext_ln1118_250_fu_4113_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_226_fu_36607_p1() {
    mul_ln1118_226_fu_36607_p1 =  (sc_lv<9>) (ap_const_lv25_8C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_227_fu_36614_p0() {
    mul_ln1118_227_fu_36614_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_4134_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_227_fu_36614_p1() {
    mul_ln1118_227_fu_36614_p1 =  (sc_lv<9>) (ap_const_lv25_B8);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_228_fu_36621_p0() {
    mul_ln1118_228_fu_36621_p0 =  (sc_lv<16>) (sext_ln1118_264_fu_4221_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_228_fu_36621_p1() {
    mul_ln1118_228_fu_36621_p1 =  (sc_lv<9>) (ap_const_lv25_AA);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_229_fu_36628_p0() {
    mul_ln1118_229_fu_36628_p0 =  (sc_lv<16>) (sext_ln1118_267_fu_4253_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_229_fu_36628_p1() {
    mul_ln1118_229_fu_36628_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF39);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_22_fu_35200_p0() {
    mul_ln1118_22_fu_35200_p0 =  (sc_lv<16>) (sext_ln1118_57_fu_2145_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_22_fu_35200_p1() {
    mul_ln1118_22_fu_35200_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF68);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_230_fu_36635_p0() {
    mul_ln1118_230_fu_36635_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_4989_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_230_fu_36635_p1() {
    mul_ln1118_230_fu_36635_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF5E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_231_fu_36642_p0() {
    mul_ln1118_231_fu_36642_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_3427_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_231_fu_36642_p1() {
    mul_ln1118_231_fu_36642_p1 =  (sc_lv<9>) (ap_const_lv25_C1);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_232_fu_36649_p0() {
    mul_ln1118_232_fu_36649_p0 =  (sc_lv<16>) (sext_ln1118_193_fu_3456_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_232_fu_36649_p1() {
    mul_ln1118_232_fu_36649_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFC9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_233_fu_36656_p0() {
    mul_ln1118_233_fu_36656_p0 =  (sc_lv<16>) (sext_ln1118_269_fu_4313_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_233_fu_36656_p1() {
    mul_ln1118_233_fu_36656_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF54);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_234_fu_36663_p0() {
    mul_ln1118_234_fu_36663_p0 =  (sc_lv<16>) (sext_ln1118_279_fu_4379_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_234_fu_36663_p1() {
    mul_ln1118_234_fu_36663_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF95);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_235_fu_36670_p0() {
    mul_ln1118_235_fu_36670_p0 =  (sc_lv<16>) (sext_ln1118_282_fu_4404_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_235_fu_36670_p1() {
    mul_ln1118_235_fu_36670_p1 =  (sc_lv<9>) (ap_const_lv25_A5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_236_fu_36677_p0() {
    mul_ln1118_236_fu_36677_p0 =  (sc_lv<16>) (sext_ln1118_284_fu_4425_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_236_fu_36677_p1() {
    mul_ln1118_236_fu_36677_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF5A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_237_fu_36684_p0() {
    mul_ln1118_237_fu_36684_p0 =  (sc_lv<16>) (sext_ln1118_288_fu_4454_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_237_fu_36684_p1() {
    mul_ln1118_237_fu_36684_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFCF);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_238_fu_36691_p0() {
    mul_ln1118_238_fu_36691_p0 =  (sc_lv<16>) (sext_ln1118_363_fu_5270_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_238_fu_36691_p1() {
    mul_ln1118_238_fu_36691_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF6D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_239_fu_36698_p0() {
    mul_ln1118_239_fu_36698_p0 =  (sc_lv<16>) (sext_ln1118_211_fu_3655_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_239_fu_36698_p1() {
    mul_ln1118_239_fu_36698_p1 =  (sc_lv<9>) (ap_const_lv25_9F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_23_fu_35207_p0() {
    mul_ln1118_23_fu_35207_p0 =  (sc_lv<16>) (sext_ln1118_72_fu_2274_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_23_fu_35207_p1() {
    mul_ln1118_23_fu_35207_p1 =  (sc_lv<7>) (ap_const_lv23_35);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_240_fu_36705_p0() {
    mul_ln1118_240_fu_36705_p0 =  (sc_lv<16>) (sext_ln1118_216_fu_3717_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_240_fu_36705_p1() {
    mul_ln1118_240_fu_36705_p1 =  (sc_lv<9>) (ap_const_lv25_93);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_241_fu_36712_p0() {
    mul_ln1118_241_fu_36712_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_4578_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_241_fu_36712_p1() {
    mul_ln1118_241_fu_36712_p1 =  (sc_lv<8>) (ap_const_lv24_4A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_242_fu_36719_p1() {
    mul_ln1118_242_fu_36719_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFCC);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_243_fu_36726_p0() {
    mul_ln1118_243_fu_36726_p0 =  (sc_lv<16>) (sext_ln1118_306_fu_4663_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_243_fu_36726_p1() {
    mul_ln1118_243_fu_36726_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFD6);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_244_fu_36733_p1() {
    mul_ln1118_244_fu_36733_p1 =  (sc_lv<7>) (ap_const_lv23_2D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_245_fu_36740_p0() {
    mul_ln1118_245_fu_36740_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_3947_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_245_fu_36740_p1() {
    mul_ln1118_245_fu_36740_p1 =  (sc_lv<7>) (ap_const_lv23_3D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_246_fu_36747_p0() {
    mul_ln1118_246_fu_36747_p0 =  (sc_lv<16>) (sext_ln1118_245_fu_4003_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_246_fu_36747_p1() {
    mul_ln1118_246_fu_36747_p1 =  (sc_lv<8>) (ap_const_lv24_4F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_247_fu_36754_p0() {
    mul_ln1118_247_fu_36754_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_4829_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_247_fu_36754_p1() {
    mul_ln1118_247_fu_36754_p1 =  (sc_lv<9>) (ap_const_lv25_92);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_248_fu_36761_p0() {
    mul_ln1118_248_fu_36761_p0 =  (sc_lv<16>) (sext_ln1118_324_fu_4854_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_248_fu_36761_p1() {
    mul_ln1118_248_fu_36761_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFCE);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_249_fu_36768_p0() {
    mul_ln1118_249_fu_36768_p0 =  (sc_lv<16>) (sext_ln1118_327_fu_4879_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_249_fu_36768_p1() {
    mul_ln1118_249_fu_36768_p1 =  (sc_lv<9>) (ap_const_lv25_D1);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_24_fu_35214_p0() {
    mul_ln1118_24_fu_35214_p0 =  (sc_lv<16>) (sext_ln1118_75_fu_2299_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_24_fu_35214_p1() {
    mul_ln1118_24_fu_35214_p1 =  (sc_lv<8>) (ap_const_lv24_53);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_250_fu_36775_p0() {
    mul_ln1118_250_fu_36775_p0 =  (sc_lv<16>) (sext_ln1118_329_fu_4900_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_250_fu_36775_p1() {
    mul_ln1118_250_fu_36775_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF5A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_251_fu_36782_p0() {
    mul_ln1118_251_fu_36782_p0 =  (sc_lv<16>) (sext_ln1118_406_fu_5714_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_251_fu_36782_p1() {
    mul_ln1118_251_fu_36782_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_252_fu_36789_p1() {
    mul_ln1118_252_fu_36789_p1 =  (sc_lv<8>) (ap_const_lv24_5E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_253_fu_36796_p0() {
    mul_ln1118_253_fu_36796_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_5053_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_253_fu_36796_p1() {
    mul_ln1118_253_fu_36796_p1 =  (sc_lv<9>) (ap_const_lv25_B3);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_254_fu_36803_p0() {
    mul_ln1118_254_fu_36803_p0 =  (sc_lv<16>) (sext_ln1118_350_fu_5111_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_254_fu_36803_p1() {
    mul_ln1118_254_fu_36803_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFC9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_255_fu_36810_p0() {
    mul_ln1118_255_fu_36810_p0 =  (sc_lv<16>) (sext_ln1118_352_fu_5132_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_255_fu_36810_p1() {
    mul_ln1118_255_fu_36810_p1 =  (sc_lv<8>) (ap_const_lv24_62);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_256_fu_36817_p0() {
    mul_ln1118_256_fu_36817_p0 =  (sc_lv<16>) (sext_ln1118_436_fu_6003_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_256_fu_36817_p1() {
    mul_ln1118_256_fu_36817_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF86);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_257_fu_36824_p0() {
    mul_ln1118_257_fu_36824_p0 =  (sc_lv<16>) (sext_ln1118_284_fu_4425_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_257_fu_36824_p1() {
    mul_ln1118_257_fu_36824_p1 =  (sc_lv<9>) (ap_const_lv25_93);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_258_fu_36831_p0() {
    mul_ln1118_258_fu_36831_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_4450_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_258_fu_36831_p1() {
    mul_ln1118_258_fu_36831_p1 =  (sc_lv<8>) (ap_const_lv24_76);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_259_fu_36838_p1() {
    mul_ln1118_259_fu_36838_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFC9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_25_fu_35221_p0() {
    mul_ln1118_25_fu_35221_p0 =  (sc_lv<16>) (sext_ln1118_91_fu_2448_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_25_fu_35221_p1() {
    mul_ln1118_25_fu_35221_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF32);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_260_fu_36845_p0() {
    mul_ln1118_260_fu_36845_p0 =  (sc_lv<16>) (sext_ln1118_366_fu_5295_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_260_fu_36845_p1() {
    mul_ln1118_260_fu_36845_p1 =  (sc_lv<7>) (ap_const_lv23_35);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_261_fu_36852_p0() {
    mul_ln1118_261_fu_36852_p0 =  (sc_lv<16>) (sext_ln1118_368_fu_5316_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_261_fu_36852_p1() {
    mul_ln1118_261_fu_36852_p1 =  (sc_lv<9>) (ap_const_lv25_C9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_262_fu_36859_p0() {
    mul_ln1118_262_fu_36859_p0 =  (sc_lv<16>) (sext_ln1118_371_fu_5341_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_262_fu_36859_p1() {
    mul_ln1118_262_fu_36859_p1 =  (sc_lv<8>) (ap_const_lv24_45);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_263_fu_36866_p0() {
    mul_ln1118_263_fu_36866_p0 =  (sc_lv<16>) (sext_ln1118_377_fu_5391_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_263_fu_36866_p1() {
    mul_ln1118_263_fu_36866_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFC7);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_264_fu_36873_p0() {
    mul_ln1118_264_fu_36873_p0 =  (sc_lv<16>) (sext_ln1118_458_fu_6223_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_264_fu_36873_p1() {
    mul_ln1118_264_fu_36873_p1 =  (sc_lv<9>) (ap_const_lv25_9A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_265_fu_36880_p0() {
    mul_ln1118_265_fu_36880_p0 =  (sc_lv<16>) (sext_ln1118_312_fu_4713_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_265_fu_36880_p1() {
    mul_ln1118_265_fu_36880_p1 =  (sc_lv<8>) (ap_const_lv24_43);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_266_fu_36887_p0() {
    mul_ln1118_266_fu_36887_p0 =  (sc_lv<16>) (sext_ln1118_385_fu_5498_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_266_fu_36887_p1() {
    mul_ln1118_266_fu_36887_p1 =  (sc_lv<8>) (ap_const_lv24_6D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_267_fu_36894_p0() {
    mul_ln1118_267_fu_36894_p0 =  (sc_lv<16>) (sext_ln1118_391_fu_5550_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_267_fu_36894_p1() {
    mul_ln1118_267_fu_36894_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFDA);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_268_fu_36901_p0() {
    mul_ln1118_268_fu_36901_p0 =  (sc_lv<16>) (sext_ln1118_392_fu_5567_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_268_fu_36901_p1() {
    mul_ln1118_268_fu_36901_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB2);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_269_fu_36908_p1() {
    mul_ln1118_269_fu_36908_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFC3);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_26_fu_35228_p0() {
    mul_ln1118_26_fu_35228_p0 =  (sc_lv<16>) (sext_ln1118_94_fu_2473_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_26_fu_35228_p1() {
    mul_ln1118_26_fu_35228_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF42);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_270_fu_36915_p0() {
    mul_ln1118_270_fu_36915_p0 =  (sc_lv<16>) (sext_ln1118_477_fu_6431_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_270_fu_36915_p1() {
    mul_ln1118_270_fu_36915_p1 =  (sc_lv<7>) (ap_const_lv23_2D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_271_fu_36922_p0() {
    mul_ln1118_271_fu_36922_p0 =  (sc_lv<16>) (sext_ln1118_407_fu_5718_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_271_fu_36922_p1() {
    mul_ln1118_271_fu_36922_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF41);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_272_fu_36929_p0() {
    mul_ln1118_272_fu_36929_p0 =  (sc_lv<16>) (sext_ln1118_410_fu_5743_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_272_fu_36929_p1() {
    mul_ln1118_272_fu_36929_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF36);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_273_fu_36936_p0() {
    mul_ln1118_273_fu_36936_p0 =  (sc_lv<16>) (sext_ln1118_416_fu_5803_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_273_fu_36936_p1() {
    mul_ln1118_273_fu_36936_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF5C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_274_fu_36943_p0() {
    mul_ln1118_274_fu_36943_p0 =  (sc_lv<16>) (sext_ln1118_420_fu_5832_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_274_fu_36943_p1() {
    mul_ln1118_274_fu_36943_p1 =  (sc_lv<9>) (ap_const_lv25_B5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_275_fu_36950_p0() {
    mul_ln1118_275_fu_36950_p0 =  (sc_lv<16>) (sext_ln1118_429_fu_5894_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_275_fu_36950_p1() {
    mul_ln1118_275_fu_36950_p1 =  (sc_lv<8>) (ap_const_lv24_45);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_276_fu_36957_p0() {
    mul_ln1118_276_fu_36957_p0 =  (sc_lv<16>) (sext_ln1118_485_fu_6616_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_276_fu_36957_p1() {
    mul_ln1118_276_fu_36957_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF7B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_277_fu_36964_p0() {
    mul_ln1118_277_fu_36964_p0 =  (sc_lv<16>) (sext_ln1118_352_fu_5132_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_277_fu_36964_p1() {
    mul_ln1118_277_fu_36964_p1 =  (sc_lv<8>) (ap_const_lv24_5C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_278_fu_36971_p0() {
    mul_ln1118_278_fu_36971_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_5157_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_278_fu_36971_p1() {
    mul_ln1118_278_fu_36971_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF36);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_279_fu_36978_p1() {
    mul_ln1118_279_fu_36978_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFEB);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_27_fu_35235_p0() {
    mul_ln1118_27_fu_35235_p0 =  (sc_lv<16>) (sext_ln1118_105_fu_2592_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_27_fu_35235_p1() {
    mul_ln1118_27_fu_35235_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB7);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_280_fu_36985_p0() {
    mul_ln1118_280_fu_36985_p0 =  (sc_lv<16>) (sext_ln1118_441_fu_6036_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_280_fu_36985_p1() {
    mul_ln1118_280_fu_36985_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_281_fu_36992_p0() {
    mul_ln1118_281_fu_36992_p0 =  (sc_lv<16>) (sext_ln1118_445_fu_6065_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_281_fu_36992_p1() {
    mul_ln1118_281_fu_36992_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF59);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_282_fu_36999_p0() {
    mul_ln1118_282_fu_36999_p0 =  (sc_lv<16>) (sext_ln1118_447_fu_6086_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_282_fu_36999_p1() {
    mul_ln1118_282_fu_36999_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF4B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_283_fu_37006_p0() {
    mul_ln1118_283_fu_37006_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_6111_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_283_fu_37006_p1() {
    mul_ln1118_283_fu_37006_p1 =  (sc_lv<8>) (ap_const_lv24_5E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_284_fu_37013_p0() {
    mul_ln1118_284_fu_37013_p0 =  (sc_lv<16>) (sext_ln1118_453_fu_6136_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_284_fu_37013_p1() {
    mul_ln1118_284_fu_37013_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFBD);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_285_fu_37020_p0() {
    mul_ln1118_285_fu_37020_p0 =  (sc_lv<16>) (sext_ln1118_494_fu_6792_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_285_fu_37020_p1() {
    mul_ln1118_285_fu_37020_p1 =  (sc_lv<9>) (ap_const_lv25_BE);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_286_fu_37027_p0() {
    mul_ln1118_286_fu_37027_p0 =  (sc_lv<16>) (sext_ln1118_379_fu_5399_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_286_fu_37027_p1() {
    mul_ln1118_286_fu_37027_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_287_fu_37034_p0() {
    mul_ln1118_287_fu_37034_p0 =  (sc_lv<16>) (sext_ln1118_457_fu_6219_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_287_fu_37034_p1() {
    mul_ln1118_287_fu_37034_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFCA);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_288_fu_37041_p0() {
    mul_ln1118_288_fu_37041_p0 =  (sc_lv<16>) (sext_ln1118_460_fu_6244_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_288_fu_37041_p1() {
    mul_ln1118_288_fu_37041_p1 =  (sc_lv<9>) (ap_const_lv25_C6);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_289_fu_37048_p0() {
    mul_ln1118_289_fu_37048_p0 =  (sc_lv<16>) (sext_ln1118_469_fu_6321_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_289_fu_37048_p1() {
    mul_ln1118_289_fu_37048_p1 =  (sc_lv<9>) (ap_const_lv25_BE);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_28_fu_2633_p0() {
    mul_ln1118_28_fu_2633_p0 = sext_ln1118_111_fu_2629_p0.read();
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_28_fu_2633_p2() {
    mul_ln1118_28_fu_2633_p2 = (!mul_ln1118_28_fu_2633_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_28_fu_2633_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_290_fu_37055_p0() {
    mul_ln1118_290_fu_37055_p0 =  (sc_lv<16>) (sext_ln1118_471_fu_6342_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_290_fu_37055_p1() {
    mul_ln1118_290_fu_37055_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF35);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_291_fu_37062_p0() {
    mul_ln1118_291_fu_37062_p0 =  (sc_lv<16>) (sext_ln1118_502_fu_6962_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_291_fu_37062_p1() {
    mul_ln1118_291_fu_37062_p1 =  (sc_lv<8>) (ap_const_lv24_6D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_292_fu_37069_p0() {
    mul_ln1118_292_fu_37069_p0 =  (sc_lv<16>) (sext_ln1118_399_fu_5621_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_292_fu_37069_p1() {
    mul_ln1118_292_fu_37069_p1 =  (sc_lv<8>) (ap_const_lv24_66);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_293_fu_37076_p0() {
    mul_ln1118_293_fu_37076_p0 =  (sc_lv<16>) (sext_ln1118_476_fu_6427_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_293_fu_37076_p1() {
    mul_ln1118_293_fu_37076_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF87);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_294_fu_37083_p0() {
    mul_ln1118_294_fu_37083_p0 =  (sc_lv<16>) (sext_ln1118_10_fu_1788_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_294_fu_37083_p1() {
    mul_ln1118_294_fu_37083_p1 =  (sc_lv<9>) (ap_const_lv25_D2);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_295_fu_37090_p0() {
    mul_ln1118_295_fu_37090_p0 =  (sc_lv<16>) (sext_ln1118_14_fu_1817_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_295_fu_37090_p1() {
    mul_ln1118_295_fu_37090_p1 =  (sc_lv<9>) (ap_const_lv25_8E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_296_fu_37097_p0() {
    mul_ln1118_296_fu_37097_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_1846_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_296_fu_37097_p1() {
    mul_ln1118_296_fu_37097_p1 =  (sc_lv<7>) (ap_const_lv23_2A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_297_fu_37104_p0() {
    mul_ln1118_297_fu_37104_p0 =  (sc_lv<16>) (sext_ln1118_22_fu_1875_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_297_fu_37104_p1() {
    mul_ln1118_297_fu_37104_p1 =  (sc_lv<7>) (ap_const_lv23_25);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_298_fu_37111_p0() {
    mul_ln1118_298_fu_37111_p0 =  (sc_lv<16>) (sext_ln1118_25_fu_1900_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_298_fu_37111_p1() {
    mul_ln1118_298_fu_37111_p1 =  (sc_lv<9>) (ap_const_lv25_C2);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_299_fu_37118_p0() {
    mul_ln1118_299_fu_37118_p0 =  (sc_lv<16>) (sext_ln1118_422_fu_5853_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_299_fu_37118_p1() {
    mul_ln1118_299_fu_37118_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF48);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_29_fu_35242_p0() {
    mul_ln1118_29_fu_35242_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2661_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_29_fu_35242_p1() {
    mul_ln1118_29_fu_35242_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF79);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_300_fu_37125_p0() {
    mul_ln1118_300_fu_37125_p0 =  (sc_lv<16>) (sext_ln1118_486_fu_6620_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_300_fu_37125_p1() {
    mul_ln1118_300_fu_37125_p1 =  (sc_lv<8>) (ap_const_lv24_6F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_301_fu_37132_p0() {
    mul_ln1118_301_fu_37132_p0 =  (sc_lv<16>) (sext_ln1118_489_fu_6645_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_301_fu_37132_p1() {
    mul_ln1118_301_fu_37132_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFBD);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_302_fu_37139_p0() {
    mul_ln1118_302_fu_37139_p0 =  (sc_lv<16>) (sext_ln1118_44_fu_2041_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_302_fu_37139_p1() {
    mul_ln1118_302_fu_37139_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFA9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_303_fu_37146_p0() {
    mul_ln1118_303_fu_37146_p0 =  (sc_lv<16>) (sext_ln1118_49_fu_2074_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_303_fu_37146_p1() {
    mul_ln1118_303_fu_37146_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFD3);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_304_fu_37153_p0() {
    mul_ln1118_304_fu_37153_p0 =  (sc_lv<16>) (sext_ln1118_50_fu_2091_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_304_fu_37153_p1() {
    mul_ln1118_304_fu_37153_p1 =  (sc_lv<9>) (ap_const_lv25_86);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_305_fu_37160_p1() {
    mul_ln1118_305_fu_37160_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFC7);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_306_fu_37167_p0() {
    mul_ln1118_306_fu_37167_p0 =  (sc_lv<16>) (sext_ln1118_449_fu_6107_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_306_fu_37167_p1() {
    mul_ln1118_306_fu_37167_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF77);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_307_fu_37174_p0() {
    mul_ln1118_307_fu_37174_p0 =  (sc_lv<16>) (sext_ln1118_453_fu_6136_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_307_fu_37174_p1() {
    mul_ln1118_307_fu_37174_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF83);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_308_fu_37181_p0() {
    mul_ln1118_308_fu_37181_p0 =  (sc_lv<16>) (sext_ln1118_495_fu_6796_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_308_fu_37181_p1() {
    mul_ln1118_308_fu_37181_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF85);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_309_fu_37188_p0() {
    mul_ln1118_309_fu_37188_p0 =  (sc_lv<16>) (sext_ln1118_497_fu_6817_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_309_fu_37188_p1() {
    mul_ln1118_309_fu_37188_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB4);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_30_fu_35249_p0() {
    mul_ln1118_30_fu_35249_p0 =  (sc_lv<16>) (sext_ln1118_122_fu_2742_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_30_fu_35249_p1() {
    mul_ln1118_30_fu_35249_p1 =  (sc_lv<8>) (ap_const_lv24_6B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_310_fu_37195_p1() {
    mul_ln1118_310_fu_37195_p1 =  (sc_lv<9>) (ap_const_lv25_CD);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_311_fu_37202_p0() {
    mul_ln1118_311_fu_37202_p0 =  (sc_lv<16>) (sext_ln1118_91_fu_2448_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_311_fu_37202_p1() {
    mul_ln1118_311_fu_37202_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF73);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_312_fu_37209_p0() {
    mul_ln1118_312_fu_37209_p0 =  (sc_lv<16>) (sext_ln1118_94_fu_2473_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_312_fu_37209_p1() {
    mul_ln1118_312_fu_37209_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF61);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_313_fu_37216_p0() {
    mul_ln1118_313_fu_37216_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_2494_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_313_fu_37216_p1() {
    mul_ln1118_313_fu_37216_p1 =  (sc_lv<9>) (ap_const_lv25_B8);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_314_fu_37223_p0() {
    mul_ln1118_314_fu_37223_p0 =  (sc_lv<16>) (sext_ln1118_470_fu_6338_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_314_fu_37223_p1() {
    mul_ln1118_314_fu_37223_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB7);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_315_fu_37230_p0() {
    mul_ln1118_315_fu_37230_p0 =  (sc_lv<16>) (sext_ln1118_474_fu_6367_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_315_fu_37230_p1() {
    mul_ln1118_315_fu_37230_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_316_fu_37237_p1() {
    mul_ln1118_316_fu_37237_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFCB);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_317_fu_37244_p1() {
    mul_ln1118_317_fu_37244_p1 =  (sc_lv<6>) (ap_const_lv22_15);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_318_fu_37251_p0() {
    mul_ln1118_318_fu_37251_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2763_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_318_fu_37251_p1() {
    mul_ln1118_318_fu_37251_p1 =  (sc_lv<9>) (ap_const_lv25_B2);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_319_fu_37258_p0() {
    mul_ln1118_319_fu_37258_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_2792_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_319_fu_37258_p1() {
    mul_ln1118_319_fu_37258_p1 =  (sc_lv<8>) (ap_const_lv24_59);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_31_fu_35256_p0() {
    mul_ln1118_31_fu_35256_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2763_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_31_fu_35256_p1() {
    mul_ln1118_31_fu_35256_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF2C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_320_fu_37265_p0() {
    mul_ln1118_320_fu_37265_p0 =  (sc_lv<16>) (sext_ln1118_134_fu_2844_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_320_fu_37265_p1() {
    mul_ln1118_320_fu_37265_p1 =  (sc_lv<7>) (ap_const_lv23_23);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_321_fu_37272_p0() {
    mul_ln1118_321_fu_37272_p0 =  (sc_lv<16>) (sext_ln1118_16_fu_1838_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_321_fu_37272_p1() {
    mul_ln1118_321_fu_37272_p1 =  (sc_lv<9>) (ap_const_lv25_D4);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_322_fu_37279_p0() {
    mul_ln1118_322_fu_37279_p0 =  (sc_lv<16>) (sext_ln1118_23_fu_1879_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_322_fu_37279_p1() {
    mul_ln1118_322_fu_37279_p1 =  (sc_lv<9>) (ap_const_lv25_BC);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_323_fu_37286_p0() {
    mul_ln1118_323_fu_37286_p0 =  (sc_lv<16>) (sext_ln1118_25_fu_1900_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_323_fu_37286_p1() {
    mul_ln1118_323_fu_37286_p1 =  (sc_lv<9>) (ap_const_lv25_94);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_324_fu_37293_p0() {
    mul_ln1118_324_fu_37293_p0 =  (sc_lv<16>) (sext_ln1118_29_fu_1929_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_324_fu_37293_p1() {
    mul_ln1118_324_fu_37293_p1 =  (sc_lv<7>) (ap_const_lv23_23);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_325_fu_37300_p1() {
    mul_ln1118_325_fu_37300_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFE9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_326_fu_37307_p0() {
    mul_ln1118_326_fu_37307_p0 =  (sc_lv<16>) (sext_ln1118_38_fu_2004_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_326_fu_37307_p1() {
    mul_ln1118_326_fu_37307_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF77);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_327_fu_37314_p0() {
    mul_ln1118_327_fu_37314_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_3049_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_327_fu_37314_p1() {
    mul_ln1118_327_fu_37314_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB4);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_328_fu_37321_p0() {
    mul_ln1118_328_fu_37321_p0 =  (sc_lv<16>) (sext_ln1118_156_fu_3078_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_328_fu_37321_p1() {
    mul_ln1118_328_fu_37321_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF51);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_329_fu_37328_p0() {
    mul_ln1118_329_fu_37328_p0 =  (sc_lv<16>) (sext_ln1118_51_fu_2095_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_329_fu_37328_p1() {
    mul_ln1118_329_fu_37328_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFBA);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_32_fu_35263_p0() {
    mul_ln1118_32_fu_35263_p0 =  (sc_lv<16>) (sext_ln1118_134_fu_2844_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_32_fu_35263_p1() {
    mul_ln1118_32_fu_35263_p1 =  (sc_lv<7>) (ap_const_lv23_2D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_330_fu_37335_p0() {
    mul_ln1118_330_fu_37335_p0 =  (sc_lv<16>) (sext_ln1118_53_fu_2116_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_330_fu_37335_p1() {
    mul_ln1118_330_fu_37335_p1 =  (sc_lv<8>) (ap_const_lv24_52);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_331_fu_37342_p1() {
    mul_ln1118_331_fu_37342_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFE3);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_332_fu_37349_p1() {
    mul_ln1118_332_fu_37349_p1 =  (sc_lv<7>) (ap_const_lv23_23);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_333_fu_37356_p1() {
    mul_ln1118_333_fu_37356_p1 =  (sc_lv<7>) (ap_const_lv23_2F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_334_fu_37363_p0() {
    mul_ln1118_334_fu_37363_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_3360_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_334_fu_37363_p1() {
    mul_ln1118_334_fu_37363_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF92);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_335_fu_37370_p0() {
    mul_ln1118_335_fu_37370_p0 =  (sc_lv<16>) (sext_ln1118_92_fu_2452_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_335_fu_37370_p1() {
    mul_ln1118_335_fu_37370_p1 =  (sc_lv<7>) (ap_const_lv23_34);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_336_fu_37377_p1() {
    mul_ln1118_336_fu_37377_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFCF);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_337_fu_37384_p1() {
    mul_ln1118_337_fu_37384_p1 =  (sc_lv<7>) (ap_const_lv23_35);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_338_fu_37391_p0() {
    mul_ln1118_338_fu_37391_p0 =  (sc_lv<16>) (sext_ln1118_101_fu_2548_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_338_fu_37391_p1() {
    mul_ln1118_338_fu_37391_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF6C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_339_fu_37398_p0() {
    mul_ln1118_339_fu_37398_p0 =  (sc_lv<16>) (sext_ln1118_104_fu_2588_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_339_fu_37398_p1() {
    mul_ln1118_339_fu_37398_p1 =  (sc_lv<9>) (ap_const_lv25_CD);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_33_fu_35270_p0() {
    mul_ln1118_33_fu_35270_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2865_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_33_fu_35270_p1() {
    mul_ln1118_33_fu_35270_p1 =  (sc_lv<9>) (ap_const_lv25_9B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_340_fu_37405_p1() {
    mul_ln1118_340_fu_37405_p1 =  (sc_lv<6>) (ap_const_lv22_13);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_341_fu_37412_p0() {
    mul_ln1118_341_fu_37412_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_2657_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_341_fu_37412_p1() {
    mul_ln1118_341_fu_37412_p1 =  (sc_lv<8>) (ap_const_lv24_45);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_342_fu_37419_p0() {
    mul_ln1118_342_fu_37419_p0 =  (sc_lv<16>) (sext_ln1118_199_fu_3545_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_342_fu_37419_p1() {
    mul_ln1118_342_fu_37419_p1 =  (sc_lv<6>) (ap_const_lv22_15);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_343_fu_37426_p0() {
    mul_ln1118_343_fu_37426_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2788_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_343_fu_37426_p1() {
    mul_ln1118_343_fu_37426_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF32);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_344_fu_37433_p0() {
    mul_ln1118_344_fu_37433_p0 =  (sc_lv<16>) (sext_ln1118_139_fu_2890_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_344_fu_37433_p1() {
    mul_ln1118_344_fu_37433_p1 =  (sc_lv<9>) (ap_const_lv25_B7);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_345_fu_37440_p1() {
    mul_ln1118_345_fu_37440_p1 =  (sc_lv<7>) (ap_const_lv23_2E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_346_fu_37447_p0() {
    mul_ln1118_346_fu_37447_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_3785_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_346_fu_37447_p1() {
    mul_ln1118_346_fu_37447_p1 =  (sc_lv<9>) (ap_const_lv25_AB);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_347_fu_37454_p0() {
    mul_ln1118_347_fu_37454_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_3825_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_347_fu_37454_p1() {
    mul_ln1118_347_fu_37454_p1 =  (sc_lv<9>) (ap_const_lv25_B2);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_348_fu_37461_p0() {
    mul_ln1118_348_fu_37461_p0 =  (sc_lv<16>) (sext_ln1118_39_fu_2008_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_348_fu_37461_p1() {
    mul_ln1118_348_fu_37461_p1 =  (sc_lv<8>) (ap_const_lv24_45);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_349_fu_37468_p0() {
    mul_ln1118_349_fu_37468_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_3049_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_349_fu_37468_p1() {
    mul_ln1118_349_fu_37468_p1 =  (sc_lv<8>) (ap_const_lv24_51);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_34_fu_35277_p0() {
    mul_ln1118_34_fu_35277_p0 =  (sc_lv<16>) (sext_ln1118_139_fu_2890_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_34_fu_35277_p1() {
    mul_ln1118_34_fu_35277_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF4B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_350_fu_37475_p1() {
    mul_ln1118_350_fu_37475_p1 =  (sc_lv<8>) (ap_const_lv24_55);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_351_fu_37482_p0() {
    mul_ln1118_351_fu_37482_p0 =  (sc_lv<16>) (sext_ln1118_160_fu_3130_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_351_fu_37482_p1() {
    mul_ln1118_351_fu_37482_p1 =  (sc_lv<9>) (ap_const_lv25_8E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_352_fu_37489_p0() {
    mul_ln1118_352_fu_37489_p0 =  (sc_lv<16>) (sext_ln1118_163_fu_3155_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_352_fu_37489_p1() {
    mul_ln1118_352_fu_37489_p1 =  (sc_lv<8>) (ap_const_lv24_5C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_353_fu_37496_p0() {
    mul_ln1118_353_fu_37496_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_3184_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_353_fu_37496_p1() {
    mul_ln1118_353_fu_37496_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF7B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_354_fu_37503_p0() {
    mul_ln1118_354_fu_37503_p0 =  (sc_lv<16>) (sext_ln1118_173_fu_3236_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_354_fu_37503_p1() {
    mul_ln1118_354_fu_37503_p1 =  (sc_lv<9>) (ap_const_lv25_B2);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_355_fu_37510_p0() {
    mul_ln1118_355_fu_37510_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_4134_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_355_fu_37510_p1() {
    mul_ln1118_355_fu_37510_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF34);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_356_fu_37517_p1() {
    mul_ln1118_356_fu_37517_p1 =  (sc_lv<8>) (ap_const_lv24_51);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_357_fu_37524_p1() {
    mul_ln1118_357_fu_37524_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFD1);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_358_fu_37531_p0() {
    mul_ln1118_358_fu_37531_p0 =  (sc_lv<16>) (sext_ln1118_187_fu_3406_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_358_fu_37531_p1() {
    mul_ln1118_358_fu_37531_p1 =  (sc_lv<8>) (ap_const_lv24_46);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_359_fu_37538_p0() {
    mul_ln1118_359_fu_37538_p0 =  (sc_lv<16>) (sext_ln1118_190_fu_3431_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_359_fu_37538_p1() {
    mul_ln1118_359_fu_37538_p1 =  (sc_lv<8>) (ap_const_lv24_6C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_35_fu_35284_p0() {
    mul_ln1118_35_fu_35284_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2919_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_35_fu_35284_p1() {
    mul_ln1118_35_fu_35284_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF97);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_360_fu_37545_p0() {
    mul_ln1118_360_fu_37545_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_3452_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_360_fu_37545_p1() {
    mul_ln1118_360_fu_37545_p1 =  (sc_lv<9>) (ap_const_lv25_A1);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_361_fu_37552_p0() {
    mul_ln1118_361_fu_37552_p0 =  (sc_lv<16>) (sext_ln1118_270_fu_4317_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_361_fu_37552_p1() {
    mul_ln1118_361_fu_37552_p1 =  (sc_lv<8>) (ap_const_lv24_69);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_362_fu_37559_p0() {
    mul_ln1118_362_fu_37559_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_4350_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_362_fu_37559_p1() {
    mul_ln1118_362_fu_37559_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_363_fu_37566_p0() {
    mul_ln1118_363_fu_37566_p0 =  (sc_lv<16>) (sext_ln1118_196_fu_3520_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_363_fu_37566_p1() {
    mul_ln1118_363_fu_37566_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF52);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_364_fu_37573_p0() {
    mul_ln1118_364_fu_37573_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_3541_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_364_fu_37573_p1() {
    mul_ln1118_364_fu_37573_p1 =  (sc_lv<8>) (ap_const_lv24_6F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_365_fu_37580_p0() {
    mul_ln1118_365_fu_37580_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_3597_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_365_fu_37580_p1() {
    mul_ln1118_365_fu_37580_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_366_fu_37587_p0() {
    mul_ln1118_366_fu_37587_p0 =  (sc_lv<16>) (sext_ln1118_292_fu_4545_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_366_fu_37587_p1() {
    mul_ln1118_366_fu_37587_p1 =  (sc_lv<8>) (ap_const_lv24_66);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_367_fu_37594_p0() {
    mul_ln1118_367_fu_37594_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_4582_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_367_fu_37594_p1() {
    mul_ln1118_367_fu_37594_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF6A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_368_fu_37601_p0() {
    mul_ln1118_368_fu_37601_p0 =  (sc_lv<16>) (sext_ln1118_148_fu_2952_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_368_fu_37601_p1() {
    mul_ln1118_368_fu_37601_p1 =  (sc_lv<8>) (ap_const_lv24_66);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_369_fu_37608_p0() {
    mul_ln1118_369_fu_37608_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_3781_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_369_fu_37608_p1() {
    mul_ln1118_369_fu_37608_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB6);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_36_fu_35291_p0() {
    mul_ln1118_36_fu_35291_p0 =  (sc_lv<16>) (sext_ln1118_148_fu_2952_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_36_fu_35291_p1() {
    mul_ln1118_36_fu_35291_p1 =  (sc_lv<8>) (ap_const_lv24_6A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_370_fu_37615_p1() {
    mul_ln1118_370_fu_37615_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFBD);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_371_fu_37622_p0() {
    mul_ln1118_371_fu_37622_p0 =  (sc_lv<16>) (sext_ln1118_231_fu_3885_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_371_fu_37622_p1() {
    mul_ln1118_371_fu_37622_p1 =  (sc_lv<8>) (ap_const_lv24_71);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_372_fu_37629_p0() {
    mul_ln1118_372_fu_37629_p0 =  (sc_lv<16>) (sext_ln1118_233_fu_3906_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_372_fu_37629_p1() {
    mul_ln1118_372_fu_37629_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF58);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_373_fu_37636_p0() {
    mul_ln1118_373_fu_37636_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_3947_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_373_fu_37636_p1() {
    mul_ln1118_373_fu_37636_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFD9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_374_fu_37643_p0() {
    mul_ln1118_374_fu_37643_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_4825_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_374_fu_37643_p1() {
    mul_ln1118_374_fu_37643_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF8D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_375_fu_37650_p0() {
    mul_ln1118_375_fu_37650_p0 =  (sc_lv<16>) (sext_ln1118_173_fu_3236_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_375_fu_37650_p1() {
    mul_ln1118_375_fu_37650_p1 =  (sc_lv<9>) (ap_const_lv25_A5);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_376_fu_37657_p0() {
    mul_ln1118_376_fu_37657_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_4134_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_376_fu_37657_p1() {
    mul_ln1118_376_fu_37657_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF3F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_377_fu_37664_p0() {
    mul_ln1118_377_fu_37664_p0 =  (sc_lv<16>) (sext_ln1118_256_fu_4163_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_377_fu_37664_p1() {
    mul_ln1118_377_fu_37664_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF77);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_378_fu_37671_p0() {
    mul_ln1118_378_fu_37671_p0 =  (sc_lv<16>) (sext_ln1118_261_fu_4196_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_378_fu_37671_p1() {
    mul_ln1118_378_fu_37671_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFCD);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_379_fu_37678_p0() {
    mul_ln1118_379_fu_37678_p0 =  (sc_lv<16>) (sext_ln1118_264_fu_4221_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_379_fu_37678_p1() {
    mul_ln1118_379_fu_37678_p1 =  (sc_lv<9>) (ap_const_lv25_89);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_37_fu_35298_p0() {
    mul_ln1118_37_fu_35298_p0 =  (sc_lv<16>) (sext_ln1118_35_fu_1979_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_37_fu_35298_p1() {
    mul_ln1118_37_fu_35298_p1 =  (sc_lv<7>) (ap_const_lv23_2B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_380_fu_37685_p0() {
    mul_ln1118_380_fu_37685_p0 =  (sc_lv<16>) (sext_ln1118_267_fu_4253_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_380_fu_37685_p1() {
    mul_ln1118_380_fu_37685_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF43);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_381_fu_37692_p0() {
    mul_ln1118_381_fu_37692_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_4989_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_381_fu_37692_p1() {
    mul_ln1118_381_fu_37692_p1 =  (sc_lv<9>) (ap_const_lv25_86);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_382_fu_37699_p0() {
    mul_ln1118_382_fu_37699_p0 =  (sc_lv<16>) (sext_ln1118_341_fu_5049_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_382_fu_37699_p1() {
    mul_ln1118_382_fu_37699_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFAD);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_383_fu_37706_p0() {
    mul_ln1118_383_fu_37706_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_3452_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_383_fu_37706_p1() {
    mul_ln1118_383_fu_37706_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF67);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_384_fu_37713_p0() {
    mul_ln1118_384_fu_37713_p0 =  (sc_lv<16>) (sext_ln1118_269_fu_4313_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_384_fu_37713_p1() {
    mul_ln1118_384_fu_37713_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF66);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_385_fu_37720_p0() {
    mul_ln1118_385_fu_37720_p0 =  (sc_lv<16>) (sext_ln1118_274_fu_4346_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_385_fu_37720_p1() {
    mul_ln1118_385_fu_37720_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF6A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_386_fu_37727_p0() {
    mul_ln1118_386_fu_37727_p0 =  (sc_lv<16>) (sext_ln1118_278_fu_4375_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_386_fu_37727_p1() {
    mul_ln1118_386_fu_37727_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFC3);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_387_fu_37734_p0() {
    mul_ln1118_387_fu_37734_p0 =  (sc_lv<16>) (sext_ln1118_283_fu_4408_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_387_fu_37734_p1() {
    mul_ln1118_387_fu_37734_p1 =  (sc_lv<8>) (ap_const_lv24_6D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_388_fu_37741_p0() {
    mul_ln1118_388_fu_37741_p0 =  (sc_lv<16>) (sext_ln1118_284_fu_4425_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_388_fu_37741_p1() {
    mul_ln1118_388_fu_37741_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF76);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_389_fu_37748_p0() {
    mul_ln1118_389_fu_37748_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_4450_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_389_fu_37748_p1() {
    mul_ln1118_389_fu_37748_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB9);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_38_fu_35305_p0() {
    mul_ln1118_38_fu_35305_p0 =  (sc_lv<16>) (sext_ln1118_39_fu_2008_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_38_fu_35305_p1() {
    mul_ln1118_38_fu_35305_p1 =  (sc_lv<8>) (ap_const_lv24_47);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_390_fu_37755_p1() {
    mul_ln1118_390_fu_37755_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF92);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_391_fu_37762_p0() {
    mul_ln1118_391_fu_37762_p0 =  (sc_lv<16>) (sext_ln1118_292_fu_4545_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_391_fu_37762_p1() {
    mul_ln1118_391_fu_37762_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF8B);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_392_fu_37769_p0() {
    mul_ln1118_392_fu_37769_p0 =  (sc_lv<16>) (sext_ln1118_307_fu_4667_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_392_fu_37769_p1() {
    mul_ln1118_392_fu_37769_p1 =  (sc_lv<8>) (ap_const_lv24_4C);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_393_fu_37776_p0() {
    mul_ln1118_393_fu_37776_p0 =  (sc_lv<16>) (sext_ln1118_391_fu_5550_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_393_fu_37776_p1() {
    mul_ln1118_393_fu_37776_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFD6);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_394_fu_37783_p1() {
    mul_ln1118_394_fu_37783_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFC3);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_395_fu_37790_p0() {
    mul_ln1118_395_fu_37790_p0 =  (sc_lv<16>) (sext_ln1118_316_fu_4796_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_395_fu_37790_p1() {
    mul_ln1118_395_fu_37790_p1 =  (sc_lv<9>) (ap_const_lv25_8F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_396_fu_37797_p0() {
    mul_ln1118_396_fu_37797_p0 =  (sc_lv<16>) (sext_ln1118_323_fu_4850_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_396_fu_37797_p1() {
    mul_ln1118_396_fu_37797_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF57);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_397_fu_37804_p0() {
    mul_ln1118_397_fu_37804_p0 =  (sc_lv<16>) (sext_ln1118_327_fu_4879_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_397_fu_37804_p1() {
    mul_ln1118_397_fu_37804_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF6F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_398_fu_37811_p0() {
    mul_ln1118_398_fu_37811_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_4921_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_398_fu_37811_p1() {
    mul_ln1118_398_fu_37811_p1 =  (sc_lv<9>) (ap_const_lv25_BA);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_399_fu_37818_p0() {
    mul_ln1118_399_fu_37818_p0 =  (sc_lv<16>) (sext_ln1118_410_fu_5743_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_399_fu_37818_p1() {
    mul_ln1118_399_fu_37818_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF2F);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_39_fu_35312_p0() {
    mul_ln1118_39_fu_35312_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_3053_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_39_fu_35312_p1() {
    mul_ln1118_39_fu_35312_p1 =  (sc_lv<9>) (ap_const_lv25_B3);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_400_fu_37825_p0() {
    mul_ln1118_400_fu_37825_p0 =  (sc_lv<16>) (sext_ln1118_341_fu_5049_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_400_fu_37825_p1() {
    mul_ln1118_400_fu_37825_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9D);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_401_fu_37832_p0() {
    mul_ln1118_401_fu_37832_p0 =  (sc_lv<16>) (sext_ln1118_346_fu_5082_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_401_fu_37832_p1() {
    mul_ln1118_401_fu_37832_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF71);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_402_fu_37839_p0() {
    mul_ln1118_402_fu_37839_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_5107_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_402_fu_37839_p1() {
    mul_ln1118_402_fu_37839_p1 =  (sc_lv<9>) (ap_const_lv25_9E);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_403_fu_37846_p0() {
    mul_ln1118_403_fu_37846_p0 =  (sc_lv<16>) (sext_ln1118_354_fu_5140_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_403_fu_37846_p1() {
    mul_ln1118_403_fu_37846_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF41);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_404_fu_37853_p0() {
    mul_ln1118_404_fu_37853_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_5157_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_404_fu_37853_p1() {
    mul_ln1118_404_fu_37853_p1 =  (sc_lv<9>) (ap_const_lv25_B7);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_405_fu_37860_p0() {
    mul_ln1118_405_fu_37860_p0 =  (sc_lv<16>) (sext_ln1118_442_fu_6040_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_405_fu_37860_p1() {
    mul_ln1118_405_fu_37860_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF72);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_406_fu_37867_p0() {
    mul_ln1118_406_fu_37867_p0 =  (sc_lv<16>) (sext_ln1118_363_fu_5270_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_406_fu_37867_p1() {
    mul_ln1118_406_fu_37867_p1 =  (sc_lv<9>) (ap_const_lv25_8A);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_407_fu_37874_p0() {
    mul_ln1118_407_fu_37874_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_5291_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_407_fu_37874_p1() {
    mul_ln1118_407_fu_37874_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF72);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_408_fu_37881_p0() {
    mul_ln1118_408_fu_37881_p0 =  (sc_lv<16>) (sext_ln1118_369_fu_5320_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_408_fu_37881_p1() {
    mul_ln1118_408_fu_37881_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFA2);
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_409_fu_37888_p0() {
    mul_ln1118_409_fu_37888_p0 =  (sc_lv<16>) (sext_ln1118_371_fu_5341_p1.read());
}

void dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_mul_ln1118_409_fu_37888_p1() {
    mul_ln1118_409_fu_37888_p1 =  (sc_lv<8>) (ap_const_lv24_57);
}

}

