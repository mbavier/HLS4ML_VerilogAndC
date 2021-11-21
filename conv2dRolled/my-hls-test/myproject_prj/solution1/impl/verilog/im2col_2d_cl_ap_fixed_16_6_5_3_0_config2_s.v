// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module im2col_2d_cl_ap_fixed_16_6_5_3_0_config2_s (
        ap_ready,
        data_V_read,
        row,
        col,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_return_8
);


output   ap_ready;
input  [1023:0] data_V_read;
input  [3:0] row;
input  [3:0] col;
output  [15:0] ap_return_0;
output  [15:0] ap_return_1;
output  [15:0] ap_return_2;
output  [15:0] ap_return_3;
output  [15:0] ap_return_4;
output  [15:0] ap_return_5;
output  [15:0] ap_return_6;
output  [15:0] ap_return_7;
output  [15:0] ap_return_8;

wire   [3:0] add_ln160_fu_66_p2;
wire  signed [3:0] add_ln165_fu_88_p2;
wire   [6:0] shl_ln_fu_106_p3;
wire  signed [6:0] sext_ln168_fu_102_p1;
wire   [6:0] add_ln203_fu_114_p2;
wire   [10:0] tmp_4_fu_120_p3;
wire   [10:0] empty_fu_128_p2;
wire   [0:0] icmp_ln203_fu_134_p2;
wire   [10:0] sub_ln203_fu_150_p2;
wire   [10:0] sub_ln203_2_fu_162_p2;
reg   [1023:0] tmp_2_fu_140_p4;
wire   [10:0] sub_ln203_1_fu_156_p2;
wire   [10:0] select_ln203_fu_168_p3;
wire   [10:0] select_ln203_2_fu_184_p3;
wire   [10:0] sub_ln203_3_fu_192_p2;
wire   [1023:0] select_ln203_1_fu_176_p3;
wire   [1023:0] zext_ln203_fu_198_p1;
wire   [1023:0] zext_ln203_1_fu_202_p1;
wire   [1023:0] lshr_ln203_fu_206_p2;
wire   [1023:0] lshr_ln203_1_fu_212_p2;
wire   [1023:0] and_ln203_fu_218_p2;
wire   [6:0] zext_ln165_1_fu_84_p1;
wire   [6:0] add_ln203_1_fu_228_p2;
wire   [10:0] tmp_9_fu_234_p3;
wire   [10:0] empty_26_fu_242_p2;
wire   [0:0] icmp_ln203_1_fu_248_p2;
wire   [10:0] sub_ln203_4_fu_264_p2;
wire   [10:0] sub_ln203_6_fu_276_p2;
reg   [1023:0] tmp_3_fu_254_p4;
wire   [10:0] sub_ln203_5_fu_270_p2;
wire   [10:0] select_ln203_3_fu_282_p3;
wire   [10:0] select_ln203_5_fu_298_p3;
wire   [10:0] sub_ln203_7_fu_306_p2;
wire   [1023:0] select_ln203_4_fu_290_p3;
wire   [1023:0] zext_ln203_2_fu_312_p1;
wire   [1023:0] zext_ln203_3_fu_316_p1;
wire   [1023:0] lshr_ln203_2_fu_320_p2;
wire   [1023:0] lshr_ln203_3_fu_326_p2;
wire   [1023:0] and_ln203_1_fu_332_p2;
wire   [0:0] tmp_fu_72_p3;
wire   [0:0] tmp_1_fu_94_p3;
wire   [0:0] or_ln162_fu_342_p2;
wire   [15:0] trunc_ln203_fu_224_p1;
wire   [15:0] trunc_ln203_1_fu_338_p1;
wire   [3:0] add_ln165_1_fu_364_p2;
wire   [6:0] zext_ln168_fu_378_p1;
wire   [6:0] add_ln203_2_fu_382_p2;
wire   [10:0] tmp_s_fu_388_p3;
wire   [10:0] empty_27_fu_396_p2;
wire   [0:0] icmp_ln203_2_fu_402_p2;
wire   [10:0] sub_ln203_8_fu_418_p2;
wire   [10:0] sub_ln203_10_fu_430_p2;
reg   [1023:0] tmp_6_fu_408_p4;
wire   [10:0] sub_ln203_9_fu_424_p2;
wire   [10:0] select_ln203_6_fu_436_p3;
wire   [10:0] select_ln203_8_fu_452_p3;
wire   [10:0] sub_ln203_11_fu_460_p2;
wire   [1023:0] select_ln203_7_fu_444_p3;
wire   [1023:0] zext_ln203_4_fu_466_p1;
wire   [1023:0] zext_ln203_5_fu_470_p1;
wire   [1023:0] lshr_ln203_4_fu_474_p2;
wire   [1023:0] lshr_ln203_5_fu_480_p2;
wire   [1023:0] and_ln203_2_fu_486_p2;
wire   [3:0] or_ln166_fu_496_p2;
wire   [0:0] tmp_7_fu_502_p3;
wire   [15:0] trunc_ln203_2_fu_492_p1;
wire   [2:0] trunc_ln168_fu_518_p1;
wire   [5:0] shl_ln168_1_fu_522_p3;
wire   [6:0] zext_ln168_1_fu_530_p1;
wire   [6:0] add_ln203_3_fu_534_p2;
wire   [10:0] tmp_8_fu_540_p3;
wire   [10:0] empty_28_fu_548_p2;
wire   [0:0] icmp_ln203_3_fu_554_p2;
wire   [10:0] sub_ln203_12_fu_570_p2;
wire   [10:0] sub_ln203_14_fu_582_p2;
reg   [1023:0] tmp_10_fu_560_p4;
wire   [10:0] sub_ln203_13_fu_576_p2;
wire   [10:0] select_ln203_9_fu_588_p3;
wire   [10:0] select_ln203_11_fu_604_p3;
wire   [10:0] sub_ln203_15_fu_612_p2;
wire   [1023:0] select_ln203_10_fu_596_p3;
wire   [1023:0] zext_ln203_6_fu_618_p1;
wire   [1023:0] zext_ln203_7_fu_622_p1;
wire   [1023:0] lshr_ln203_6_fu_626_p2;
wire   [1023:0] lshr_ln203_7_fu_632_p2;
wire   [1023:0] and_ln203_3_fu_638_p2;
wire   [15:0] trunc_ln203_3_fu_644_p1;
wire   [5:0] zext_ln165_fu_80_p1;
wire   [5:0] add_ln203_4_fu_656_p2;
wire   [9:0] tmp_11_fu_662_p3;
wire   [9:0] empty_29_fu_670_p2;
wire   [10:0] zext_ln203_8_fu_682_p1;
wire   [10:0] zext_ln203_9_fu_686_p1;
wire   [0:0] icmp_ln203_4_fu_676_p2;
wire   [10:0] sub_ln203_16_fu_700_p2;
wire   [10:0] sub_ln203_17_fu_712_p2;
reg   [1023:0] tmp_12_fu_690_p4;
wire   [10:0] xor_ln203_fu_706_p2;
wire   [10:0] select_ln203_12_fu_718_p3;
wire   [10:0] select_ln203_14_fu_734_p3;
wire   [10:0] sub_ln203_18_fu_742_p2;
wire   [1023:0] select_ln203_13_fu_726_p3;
wire   [1023:0] zext_ln203_10_fu_748_p1;
wire   [1023:0] zext_ln203_11_fu_752_p1;
wire   [1023:0] lshr_ln203_8_fu_756_p2;
wire   [1023:0] lshr_ln203_9_fu_762_p2;
wire   [1023:0] and_ln203_4_fu_768_p2;
wire   [6:0] add_ln203_5_fu_778_p2;
wire   [10:0] tmp_13_fu_784_p3;
wire   [10:0] empty_30_fu_792_p2;
wire   [0:0] icmp_ln203_5_fu_798_p2;
wire   [10:0] sub_ln203_19_fu_814_p2;
wire   [10:0] sub_ln203_21_fu_826_p2;
reg   [1023:0] tmp_14_fu_804_p4;
wire   [10:0] sub_ln203_20_fu_820_p2;
wire   [10:0] select_ln203_15_fu_832_p3;
wire   [10:0] select_ln203_17_fu_848_p3;
wire   [10:0] sub_ln203_22_fu_856_p2;
wire   [1023:0] select_ln203_16_fu_840_p3;
wire   [1023:0] zext_ln203_12_fu_862_p1;
wire   [1023:0] zext_ln203_13_fu_866_p1;
wire   [1023:0] lshr_ln203_10_fu_870_p2;
wire   [1023:0] lshr_ln203_11_fu_876_p2;
wire   [1023:0] and_ln203_5_fu_882_p2;
wire   [0:0] tmp_5_fu_370_p3;
wire   [15:0] trunc_ln203_5_fu_888_p1;
wire   [3:0] add_ln160_1_fu_900_p2;
wire   [6:0] shl_ln168_2_fu_914_p3;
wire   [6:0] add_ln203_6_fu_922_p2;
wire   [10:0] tmp_15_fu_928_p3;
wire   [10:0] empty_31_fu_936_p2;
wire   [0:0] icmp_ln203_6_fu_942_p2;
wire   [10:0] sub_ln203_23_fu_958_p2;
wire   [10:0] sub_ln203_25_fu_970_p2;
reg   [1023:0] tmp_19_fu_948_p4;
wire   [10:0] sub_ln203_24_fu_964_p2;
wire   [10:0] select_ln203_18_fu_976_p3;
wire   [10:0] select_ln203_20_fu_992_p3;
wire   [10:0] sub_ln203_26_fu_1000_p2;
wire   [1023:0] select_ln203_19_fu_984_p3;
wire   [1023:0] zext_ln203_14_fu_1006_p1;
wire   [1023:0] zext_ln203_15_fu_1010_p1;
wire   [1023:0] lshr_ln203_12_fu_1014_p2;
wire   [1023:0] lshr_ln203_13_fu_1020_p2;
wire   [1023:0] and_ln203_6_fu_1026_p2;
wire   [6:0] add_ln203_7_fu_1036_p2;
wire   [10:0] tmp_16_fu_1042_p3;
wire   [10:0] empty_32_fu_1050_p2;
wire   [0:0] icmp_ln203_7_fu_1056_p2;
wire   [10:0] sub_ln203_27_fu_1072_p2;
wire   [10:0] sub_ln203_29_fu_1084_p2;
reg   [1023:0] tmp_20_fu_1062_p4;
wire   [10:0] sub_ln203_28_fu_1078_p2;
wire   [10:0] select_ln203_21_fu_1090_p3;
wire   [10:0] select_ln203_23_fu_1106_p3;
wire   [10:0] sub_ln203_30_fu_1114_p2;
wire   [1023:0] select_ln203_22_fu_1098_p3;
wire   [1023:0] zext_ln203_16_fu_1120_p1;
wire   [1023:0] zext_ln203_17_fu_1124_p1;
wire   [1023:0] lshr_ln203_14_fu_1128_p2;
wire   [1023:0] lshr_ln203_15_fu_1134_p2;
wire   [1023:0] and_ln203_7_fu_1140_p2;
wire   [0:0] tmp_18_fu_906_p3;
wire   [0:0] or_ln162_1_fu_1150_p2;
wire   [15:0] trunc_ln203_6_fu_1032_p1;
wire   [15:0] trunc_ln203_7_fu_1146_p1;
wire   [6:0] add_ln203_8_fu_1172_p2;
wire   [10:0] tmp_17_fu_1178_p3;
wire   [10:0] empty_33_fu_1186_p2;
wire   [0:0] icmp_ln203_8_fu_1192_p2;
wire   [10:0] sub_ln203_31_fu_1208_p2;
wire   [10:0] sub_ln203_33_fu_1220_p2;
reg   [1023:0] tmp_21_fu_1198_p4;
wire   [10:0] sub_ln203_32_fu_1214_p2;
wire   [10:0] select_ln203_24_fu_1226_p3;
wire   [10:0] select_ln203_26_fu_1242_p3;
wire   [10:0] sub_ln203_34_fu_1250_p2;
wire   [1023:0] select_ln203_25_fu_1234_p3;
wire   [1023:0] zext_ln203_18_fu_1256_p1;
wire   [1023:0] zext_ln203_19_fu_1260_p1;
wire   [1023:0] lshr_ln203_16_fu_1264_p2;
wire   [1023:0] lshr_ln203_17_fu_1270_p2;
wire   [1023:0] and_ln203_8_fu_1276_p2;
wire   [0:0] or_ln166_1_fu_1286_p2;
wire   [15:0] trunc_ln203_8_fu_1282_p1;
wire   [15:0] select_ln162_fu_348_p3;
wire   [15:0] select_ln162_1_fu_356_p3;
wire   [15:0] select_ln166_fu_510_p3;
wire   [15:0] select_ln166_1_fu_648_p3;
wire   [15:0] trunc_ln203_4_fu_774_p1;
wire   [15:0] select_ln166_2_fu_892_p3;
wire   [15:0] select_ln162_2_fu_1156_p3;
wire   [15:0] select_ln162_3_fu_1164_p3;
wire   [15:0] select_ln166_3_fu_1292_p3;

assign add_ln160_1_fu_900_p2 = (4'd1 + row);

assign add_ln160_fu_66_p2 = ($signed(4'd15) + $signed(row));

assign add_ln165_1_fu_364_p2 = (4'd1 + col);

assign add_ln165_fu_88_p2 = ($signed(4'd15) + $signed(col));

assign add_ln203_1_fu_228_p2 = (zext_ln165_1_fu_84_p1 + shl_ln_fu_106_p3);

assign add_ln203_2_fu_382_p2 = (shl_ln_fu_106_p3 + zext_ln168_fu_378_p1);

assign add_ln203_3_fu_534_p2 = ($signed(zext_ln168_1_fu_530_p1) + $signed(sext_ln168_fu_102_p1));

assign add_ln203_4_fu_656_p2 = (zext_ln165_fu_80_p1 + shl_ln168_1_fu_522_p3);

assign add_ln203_5_fu_778_p2 = (zext_ln168_1_fu_530_p1 + zext_ln168_fu_378_p1);

assign add_ln203_6_fu_922_p2 = ($signed(shl_ln168_2_fu_914_p3) + $signed(sext_ln168_fu_102_p1));

assign add_ln203_7_fu_1036_p2 = (zext_ln165_1_fu_84_p1 + shl_ln168_2_fu_914_p3);

assign add_ln203_8_fu_1172_p2 = (shl_ln168_2_fu_914_p3 + zext_ln168_fu_378_p1);

assign add_ln203_fu_114_p2 = ($signed(shl_ln_fu_106_p3) + $signed(sext_ln168_fu_102_p1));

assign and_ln203_1_fu_332_p2 = (lshr_ln203_3_fu_326_p2 & lshr_ln203_2_fu_320_p2);

assign and_ln203_2_fu_486_p2 = (lshr_ln203_5_fu_480_p2 & lshr_ln203_4_fu_474_p2);

assign and_ln203_3_fu_638_p2 = (lshr_ln203_7_fu_632_p2 & lshr_ln203_6_fu_626_p2);

assign and_ln203_4_fu_768_p2 = (lshr_ln203_9_fu_762_p2 & lshr_ln203_8_fu_756_p2);

assign and_ln203_5_fu_882_p2 = (lshr_ln203_11_fu_876_p2 & lshr_ln203_10_fu_870_p2);

assign and_ln203_6_fu_1026_p2 = (lshr_ln203_13_fu_1020_p2 & lshr_ln203_12_fu_1014_p2);

assign and_ln203_7_fu_1140_p2 = (lshr_ln203_15_fu_1134_p2 & lshr_ln203_14_fu_1128_p2);

assign and_ln203_8_fu_1276_p2 = (lshr_ln203_17_fu_1270_p2 & lshr_ln203_16_fu_1264_p2);

assign and_ln203_fu_218_p2 = (lshr_ln203_fu_206_p2 & lshr_ln203_1_fu_212_p2);

assign ap_ready = 1'b1;

assign ap_return_0 = select_ln162_fu_348_p3;

assign ap_return_1 = select_ln162_1_fu_356_p3;

assign ap_return_2 = select_ln166_fu_510_p3;

assign ap_return_3 = select_ln166_1_fu_648_p3;

assign ap_return_4 = trunc_ln203_4_fu_774_p1;

assign ap_return_5 = select_ln166_2_fu_892_p3;

assign ap_return_6 = select_ln162_2_fu_1156_p3;

assign ap_return_7 = select_ln162_3_fu_1164_p3;

assign ap_return_8 = select_ln166_3_fu_1292_p3;

assign empty_26_fu_242_p2 = (tmp_9_fu_234_p3 | 11'd15);

assign empty_27_fu_396_p2 = (tmp_s_fu_388_p3 | 11'd15);

assign empty_28_fu_548_p2 = (tmp_8_fu_540_p3 | 11'd15);

assign empty_29_fu_670_p2 = (tmp_11_fu_662_p3 | 10'd15);

assign empty_30_fu_792_p2 = (tmp_13_fu_784_p3 | 11'd15);

assign empty_31_fu_936_p2 = (tmp_15_fu_928_p3 | 11'd15);

assign empty_32_fu_1050_p2 = (tmp_16_fu_1042_p3 | 11'd15);

assign empty_33_fu_1186_p2 = (tmp_17_fu_1178_p3 | 11'd15);

assign empty_fu_128_p2 = (tmp_4_fu_120_p3 | 11'd15);

assign icmp_ln203_1_fu_248_p2 = ((tmp_9_fu_234_p3 > empty_26_fu_242_p2) ? 1'b1 : 1'b0);

assign icmp_ln203_2_fu_402_p2 = ((tmp_s_fu_388_p3 > empty_27_fu_396_p2) ? 1'b1 : 1'b0);

assign icmp_ln203_3_fu_554_p2 = ((tmp_8_fu_540_p3 > empty_28_fu_548_p2) ? 1'b1 : 1'b0);

assign icmp_ln203_4_fu_676_p2 = ((tmp_11_fu_662_p3 > empty_29_fu_670_p2) ? 1'b1 : 1'b0);

assign icmp_ln203_5_fu_798_p2 = ((tmp_13_fu_784_p3 > empty_30_fu_792_p2) ? 1'b1 : 1'b0);

assign icmp_ln203_6_fu_942_p2 = ((tmp_15_fu_928_p3 > empty_31_fu_936_p2) ? 1'b1 : 1'b0);

assign icmp_ln203_7_fu_1056_p2 = ((tmp_16_fu_1042_p3 > empty_32_fu_1050_p2) ? 1'b1 : 1'b0);

assign icmp_ln203_8_fu_1192_p2 = ((tmp_17_fu_1178_p3 > empty_33_fu_1186_p2) ? 1'b1 : 1'b0);

assign icmp_ln203_fu_134_p2 = ((tmp_4_fu_120_p3 > empty_fu_128_p2) ? 1'b1 : 1'b0);

assign lshr_ln203_10_fu_870_p2 = select_ln203_16_fu_840_p3 >> zext_ln203_12_fu_862_p1;

assign lshr_ln203_11_fu_876_p2 = 1024'd179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137215 >> zext_ln203_13_fu_866_p1;

assign lshr_ln203_12_fu_1014_p2 = select_ln203_19_fu_984_p3 >> zext_ln203_14_fu_1006_p1;

assign lshr_ln203_13_fu_1020_p2 = 1024'd179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137215 >> zext_ln203_15_fu_1010_p1;

assign lshr_ln203_14_fu_1128_p2 = select_ln203_22_fu_1098_p3 >> zext_ln203_16_fu_1120_p1;

assign lshr_ln203_15_fu_1134_p2 = 1024'd179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137215 >> zext_ln203_17_fu_1124_p1;

assign lshr_ln203_16_fu_1264_p2 = select_ln203_25_fu_1234_p3 >> zext_ln203_18_fu_1256_p1;

assign lshr_ln203_17_fu_1270_p2 = 1024'd179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137215 >> zext_ln203_19_fu_1260_p1;

assign lshr_ln203_1_fu_212_p2 = 1024'd179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137215 >> zext_ln203_1_fu_202_p1;

assign lshr_ln203_2_fu_320_p2 = select_ln203_4_fu_290_p3 >> zext_ln203_2_fu_312_p1;

assign lshr_ln203_3_fu_326_p2 = 1024'd179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137215 >> zext_ln203_3_fu_316_p1;

assign lshr_ln203_4_fu_474_p2 = select_ln203_7_fu_444_p3 >> zext_ln203_4_fu_466_p1;

assign lshr_ln203_5_fu_480_p2 = 1024'd179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137215 >> zext_ln203_5_fu_470_p1;

assign lshr_ln203_6_fu_626_p2 = select_ln203_10_fu_596_p3 >> zext_ln203_6_fu_618_p1;

assign lshr_ln203_7_fu_632_p2 = 1024'd179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137215 >> zext_ln203_7_fu_622_p1;

assign lshr_ln203_8_fu_756_p2 = select_ln203_13_fu_726_p3 >> zext_ln203_10_fu_748_p1;

assign lshr_ln203_9_fu_762_p2 = 1024'd179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137215 >> zext_ln203_11_fu_752_p1;

assign lshr_ln203_fu_206_p2 = select_ln203_1_fu_176_p3 >> zext_ln203_fu_198_p1;

assign or_ln162_1_fu_1150_p2 = (tmp_1_fu_94_p3 | tmp_18_fu_906_p3);

assign or_ln162_fu_342_p2 = (tmp_fu_72_p3 | tmp_1_fu_94_p3);

assign or_ln166_1_fu_1286_p2 = (tmp_5_fu_370_p3 | tmp_18_fu_906_p3);

assign or_ln166_fu_496_p2 = (add_ln165_1_fu_364_p2 | add_ln160_fu_66_p2);

assign select_ln162_1_fu_356_p3 = ((tmp_fu_72_p3[0:0] === 1'b1) ? 16'd0 : trunc_ln203_1_fu_338_p1);

assign select_ln162_2_fu_1156_p3 = ((or_ln162_1_fu_1150_p2[0:0] === 1'b1) ? 16'd0 : trunc_ln203_6_fu_1032_p1);

assign select_ln162_3_fu_1164_p3 = ((tmp_18_fu_906_p3[0:0] === 1'b1) ? 16'd0 : trunc_ln203_7_fu_1146_p1);

assign select_ln162_fu_348_p3 = ((or_ln162_fu_342_p2[0:0] === 1'b1) ? 16'd0 : trunc_ln203_fu_224_p1);

assign select_ln166_1_fu_648_p3 = ((tmp_1_fu_94_p3[0:0] === 1'b1) ? 16'd0 : trunc_ln203_3_fu_644_p1);

assign select_ln166_2_fu_892_p3 = ((tmp_5_fu_370_p3[0:0] === 1'b1) ? 16'd0 : trunc_ln203_5_fu_888_p1);

assign select_ln166_3_fu_1292_p3 = ((or_ln166_1_fu_1286_p2[0:0] === 1'b1) ? 16'd0 : trunc_ln203_8_fu_1282_p1);

assign select_ln166_fu_510_p3 = ((tmp_7_fu_502_p3[0:0] === 1'b1) ? 16'd0 : trunc_ln203_2_fu_492_p1);

assign select_ln203_10_fu_596_p3 = ((icmp_ln203_3_fu_554_p2[0:0] === 1'b1) ? tmp_10_fu_560_p4 : data_V_read);

assign select_ln203_11_fu_604_p3 = ((icmp_ln203_3_fu_554_p2[0:0] === 1'b1) ? sub_ln203_13_fu_576_p2 : tmp_8_fu_540_p3);

assign select_ln203_12_fu_718_p3 = ((icmp_ln203_4_fu_676_p2[0:0] === 1'b1) ? sub_ln203_16_fu_700_p2 : sub_ln203_17_fu_712_p2);

assign select_ln203_13_fu_726_p3 = ((icmp_ln203_4_fu_676_p2[0:0] === 1'b1) ? tmp_12_fu_690_p4 : data_V_read);

assign select_ln203_14_fu_734_p3 = ((icmp_ln203_4_fu_676_p2[0:0] === 1'b1) ? xor_ln203_fu_706_p2 : zext_ln203_8_fu_682_p1);

assign select_ln203_15_fu_832_p3 = ((icmp_ln203_5_fu_798_p2[0:0] === 1'b1) ? sub_ln203_19_fu_814_p2 : sub_ln203_21_fu_826_p2);

assign select_ln203_16_fu_840_p3 = ((icmp_ln203_5_fu_798_p2[0:0] === 1'b1) ? tmp_14_fu_804_p4 : data_V_read);

assign select_ln203_17_fu_848_p3 = ((icmp_ln203_5_fu_798_p2[0:0] === 1'b1) ? sub_ln203_20_fu_820_p2 : tmp_13_fu_784_p3);

assign select_ln203_18_fu_976_p3 = ((icmp_ln203_6_fu_942_p2[0:0] === 1'b1) ? sub_ln203_23_fu_958_p2 : sub_ln203_25_fu_970_p2);

assign select_ln203_19_fu_984_p3 = ((icmp_ln203_6_fu_942_p2[0:0] === 1'b1) ? tmp_19_fu_948_p4 : data_V_read);

assign select_ln203_1_fu_176_p3 = ((icmp_ln203_fu_134_p2[0:0] === 1'b1) ? tmp_2_fu_140_p4 : data_V_read);

assign select_ln203_20_fu_992_p3 = ((icmp_ln203_6_fu_942_p2[0:0] === 1'b1) ? sub_ln203_24_fu_964_p2 : tmp_15_fu_928_p3);

assign select_ln203_21_fu_1090_p3 = ((icmp_ln203_7_fu_1056_p2[0:0] === 1'b1) ? sub_ln203_27_fu_1072_p2 : sub_ln203_29_fu_1084_p2);

assign select_ln203_22_fu_1098_p3 = ((icmp_ln203_7_fu_1056_p2[0:0] === 1'b1) ? tmp_20_fu_1062_p4 : data_V_read);

assign select_ln203_23_fu_1106_p3 = ((icmp_ln203_7_fu_1056_p2[0:0] === 1'b1) ? sub_ln203_28_fu_1078_p2 : tmp_16_fu_1042_p3);

assign select_ln203_24_fu_1226_p3 = ((icmp_ln203_8_fu_1192_p2[0:0] === 1'b1) ? sub_ln203_31_fu_1208_p2 : sub_ln203_33_fu_1220_p2);

assign select_ln203_25_fu_1234_p3 = ((icmp_ln203_8_fu_1192_p2[0:0] === 1'b1) ? tmp_21_fu_1198_p4 : data_V_read);

assign select_ln203_26_fu_1242_p3 = ((icmp_ln203_8_fu_1192_p2[0:0] === 1'b1) ? sub_ln203_32_fu_1214_p2 : tmp_17_fu_1178_p3);

assign select_ln203_2_fu_184_p3 = ((icmp_ln203_fu_134_p2[0:0] === 1'b1) ? sub_ln203_1_fu_156_p2 : tmp_4_fu_120_p3);

assign select_ln203_3_fu_282_p3 = ((icmp_ln203_1_fu_248_p2[0:0] === 1'b1) ? sub_ln203_4_fu_264_p2 : sub_ln203_6_fu_276_p2);

assign select_ln203_4_fu_290_p3 = ((icmp_ln203_1_fu_248_p2[0:0] === 1'b1) ? tmp_3_fu_254_p4 : data_V_read);

assign select_ln203_5_fu_298_p3 = ((icmp_ln203_1_fu_248_p2[0:0] === 1'b1) ? sub_ln203_5_fu_270_p2 : tmp_9_fu_234_p3);

assign select_ln203_6_fu_436_p3 = ((icmp_ln203_2_fu_402_p2[0:0] === 1'b1) ? sub_ln203_8_fu_418_p2 : sub_ln203_10_fu_430_p2);

assign select_ln203_7_fu_444_p3 = ((icmp_ln203_2_fu_402_p2[0:0] === 1'b1) ? tmp_6_fu_408_p4 : data_V_read);

assign select_ln203_8_fu_452_p3 = ((icmp_ln203_2_fu_402_p2[0:0] === 1'b1) ? sub_ln203_9_fu_424_p2 : tmp_s_fu_388_p3);

assign select_ln203_9_fu_588_p3 = ((icmp_ln203_3_fu_554_p2[0:0] === 1'b1) ? sub_ln203_12_fu_570_p2 : sub_ln203_14_fu_582_p2);

assign select_ln203_fu_168_p3 = ((icmp_ln203_fu_134_p2[0:0] === 1'b1) ? sub_ln203_fu_150_p2 : sub_ln203_2_fu_162_p2);

assign sext_ln168_fu_102_p1 = add_ln165_fu_88_p2;

assign shl_ln168_1_fu_522_p3 = {{trunc_ln168_fu_518_p1}, {3'd0}};

assign shl_ln168_2_fu_914_p3 = {{add_ln160_1_fu_900_p2}, {3'd0}};

assign shl_ln_fu_106_p3 = {{add_ln160_fu_66_p2}, {3'd0}};

assign sub_ln203_10_fu_430_p2 = (empty_27_fu_396_p2 - tmp_s_fu_388_p3);

assign sub_ln203_11_fu_460_p2 = (11'd1023 - select_ln203_6_fu_436_p3);

assign sub_ln203_12_fu_570_p2 = (tmp_8_fu_540_p3 - empty_28_fu_548_p2);

assign sub_ln203_13_fu_576_p2 = (11'd1023 - tmp_8_fu_540_p3);

assign sub_ln203_14_fu_582_p2 = (empty_28_fu_548_p2 - tmp_8_fu_540_p3);

assign sub_ln203_15_fu_612_p2 = (11'd1023 - select_ln203_9_fu_588_p3);

assign sub_ln203_16_fu_700_p2 = (zext_ln203_8_fu_682_p1 - zext_ln203_9_fu_686_p1);

assign sub_ln203_17_fu_712_p2 = (zext_ln203_9_fu_686_p1 - zext_ln203_8_fu_682_p1);

assign sub_ln203_18_fu_742_p2 = (11'd1023 - select_ln203_12_fu_718_p3);

assign sub_ln203_19_fu_814_p2 = (tmp_13_fu_784_p3 - empty_30_fu_792_p2);

assign sub_ln203_1_fu_156_p2 = (11'd1023 - tmp_4_fu_120_p3);

assign sub_ln203_20_fu_820_p2 = (11'd1023 - tmp_13_fu_784_p3);

assign sub_ln203_21_fu_826_p2 = (empty_30_fu_792_p2 - tmp_13_fu_784_p3);

assign sub_ln203_22_fu_856_p2 = (11'd1023 - select_ln203_15_fu_832_p3);

assign sub_ln203_23_fu_958_p2 = (tmp_15_fu_928_p3 - empty_31_fu_936_p2);

assign sub_ln203_24_fu_964_p2 = (11'd1023 - tmp_15_fu_928_p3);

assign sub_ln203_25_fu_970_p2 = (empty_31_fu_936_p2 - tmp_15_fu_928_p3);

assign sub_ln203_26_fu_1000_p2 = (11'd1023 - select_ln203_18_fu_976_p3);

assign sub_ln203_27_fu_1072_p2 = (tmp_16_fu_1042_p3 - empty_32_fu_1050_p2);

assign sub_ln203_28_fu_1078_p2 = (11'd1023 - tmp_16_fu_1042_p3);

assign sub_ln203_29_fu_1084_p2 = (empty_32_fu_1050_p2 - tmp_16_fu_1042_p3);

assign sub_ln203_2_fu_162_p2 = (empty_fu_128_p2 - tmp_4_fu_120_p3);

assign sub_ln203_30_fu_1114_p2 = (11'd1023 - select_ln203_21_fu_1090_p3);

assign sub_ln203_31_fu_1208_p2 = (tmp_17_fu_1178_p3 - empty_33_fu_1186_p2);

assign sub_ln203_32_fu_1214_p2 = (11'd1023 - tmp_17_fu_1178_p3);

assign sub_ln203_33_fu_1220_p2 = (empty_33_fu_1186_p2 - tmp_17_fu_1178_p3);

assign sub_ln203_34_fu_1250_p2 = (11'd1023 - select_ln203_24_fu_1226_p3);

assign sub_ln203_3_fu_192_p2 = (11'd1023 - select_ln203_fu_168_p3);

assign sub_ln203_4_fu_264_p2 = (tmp_9_fu_234_p3 - empty_26_fu_242_p2);

assign sub_ln203_5_fu_270_p2 = (11'd1023 - tmp_9_fu_234_p3);

assign sub_ln203_6_fu_276_p2 = (empty_26_fu_242_p2 - tmp_9_fu_234_p3);

assign sub_ln203_7_fu_306_p2 = (11'd1023 - select_ln203_3_fu_282_p3);

assign sub_ln203_8_fu_418_p2 = (tmp_s_fu_388_p3 - empty_27_fu_396_p2);

assign sub_ln203_9_fu_424_p2 = (11'd1023 - tmp_s_fu_388_p3);

assign sub_ln203_fu_150_p2 = (tmp_4_fu_120_p3 - empty_fu_128_p2);

integer ap_tvar_int_0;

always @ (data_V_read) begin
    for (ap_tvar_int_0 = 1024 - 1; ap_tvar_int_0 >= 0; ap_tvar_int_0 = ap_tvar_int_0 - 1) begin
        if (ap_tvar_int_0 > 1023 - 0) begin
            tmp_10_fu_560_p4[ap_tvar_int_0] = 1'b0;
        end else begin
            tmp_10_fu_560_p4[ap_tvar_int_0] = data_V_read[1023 - ap_tvar_int_0];
        end
    end
end

assign tmp_11_fu_662_p3 = {{add_ln203_4_fu_656_p2}, {4'd0}};

integer ap_tvar_int_1;

always @ (data_V_read) begin
    for (ap_tvar_int_1 = 1024 - 1; ap_tvar_int_1 >= 0; ap_tvar_int_1 = ap_tvar_int_1 - 1) begin
        if (ap_tvar_int_1 > 1023 - 0) begin
            tmp_12_fu_690_p4[ap_tvar_int_1] = 1'b0;
        end else begin
            tmp_12_fu_690_p4[ap_tvar_int_1] = data_V_read[1023 - ap_tvar_int_1];
        end
    end
end

assign tmp_13_fu_784_p3 = {{add_ln203_5_fu_778_p2}, {4'd0}};

integer ap_tvar_int_2;

always @ (data_V_read) begin
    for (ap_tvar_int_2 = 1024 - 1; ap_tvar_int_2 >= 0; ap_tvar_int_2 = ap_tvar_int_2 - 1) begin
        if (ap_tvar_int_2 > 1023 - 0) begin
            tmp_14_fu_804_p4[ap_tvar_int_2] = 1'b0;
        end else begin
            tmp_14_fu_804_p4[ap_tvar_int_2] = data_V_read[1023 - ap_tvar_int_2];
        end
    end
end

assign tmp_15_fu_928_p3 = {{add_ln203_6_fu_922_p2}, {4'd0}};

assign tmp_16_fu_1042_p3 = {{add_ln203_7_fu_1036_p2}, {4'd0}};

assign tmp_17_fu_1178_p3 = {{add_ln203_8_fu_1172_p2}, {4'd0}};

assign tmp_18_fu_906_p3 = add_ln160_1_fu_900_p2[32'd3];

integer ap_tvar_int_3;

always @ (data_V_read) begin
    for (ap_tvar_int_3 = 1024 - 1; ap_tvar_int_3 >= 0; ap_tvar_int_3 = ap_tvar_int_3 - 1) begin
        if (ap_tvar_int_3 > 1023 - 0) begin
            tmp_19_fu_948_p4[ap_tvar_int_3] = 1'b0;
        end else begin
            tmp_19_fu_948_p4[ap_tvar_int_3] = data_V_read[1023 - ap_tvar_int_3];
        end
    end
end

assign tmp_1_fu_94_p3 = add_ln165_fu_88_p2[32'd3];

integer ap_tvar_int_4;

always @ (data_V_read) begin
    for (ap_tvar_int_4 = 1024 - 1; ap_tvar_int_4 >= 0; ap_tvar_int_4 = ap_tvar_int_4 - 1) begin
        if (ap_tvar_int_4 > 1023 - 0) begin
            tmp_20_fu_1062_p4[ap_tvar_int_4] = 1'b0;
        end else begin
            tmp_20_fu_1062_p4[ap_tvar_int_4] = data_V_read[1023 - ap_tvar_int_4];
        end
    end
end

integer ap_tvar_int_5;

always @ (data_V_read) begin
    for (ap_tvar_int_5 = 1024 - 1; ap_tvar_int_5 >= 0; ap_tvar_int_5 = ap_tvar_int_5 - 1) begin
        if (ap_tvar_int_5 > 1023 - 0) begin
            tmp_21_fu_1198_p4[ap_tvar_int_5] = 1'b0;
        end else begin
            tmp_21_fu_1198_p4[ap_tvar_int_5] = data_V_read[1023 - ap_tvar_int_5];
        end
    end
end

integer ap_tvar_int_6;

always @ (data_V_read) begin
    for (ap_tvar_int_6 = 1024 - 1; ap_tvar_int_6 >= 0; ap_tvar_int_6 = ap_tvar_int_6 - 1) begin
        if (ap_tvar_int_6 > 1023 - 0) begin
            tmp_2_fu_140_p4[ap_tvar_int_6] = 1'b0;
        end else begin
            tmp_2_fu_140_p4[ap_tvar_int_6] = data_V_read[1023 - ap_tvar_int_6];
        end
    end
end

integer ap_tvar_int_7;

always @ (data_V_read) begin
    for (ap_tvar_int_7 = 1024 - 1; ap_tvar_int_7 >= 0; ap_tvar_int_7 = ap_tvar_int_7 - 1) begin
        if (ap_tvar_int_7 > 1023 - 0) begin
            tmp_3_fu_254_p4[ap_tvar_int_7] = 1'b0;
        end else begin
            tmp_3_fu_254_p4[ap_tvar_int_7] = data_V_read[1023 - ap_tvar_int_7];
        end
    end
end

assign tmp_4_fu_120_p3 = {{add_ln203_fu_114_p2}, {4'd0}};

assign tmp_5_fu_370_p3 = add_ln165_1_fu_364_p2[32'd3];

integer ap_tvar_int_8;

always @ (data_V_read) begin
    for (ap_tvar_int_8 = 1024 - 1; ap_tvar_int_8 >= 0; ap_tvar_int_8 = ap_tvar_int_8 - 1) begin
        if (ap_tvar_int_8 > 1023 - 0) begin
            tmp_6_fu_408_p4[ap_tvar_int_8] = 1'b0;
        end else begin
            tmp_6_fu_408_p4[ap_tvar_int_8] = data_V_read[1023 - ap_tvar_int_8];
        end
    end
end

assign tmp_7_fu_502_p3 = or_ln166_fu_496_p2[32'd3];

assign tmp_8_fu_540_p3 = {{add_ln203_3_fu_534_p2}, {4'd0}};

assign tmp_9_fu_234_p3 = {{add_ln203_1_fu_228_p2}, {4'd0}};

assign tmp_fu_72_p3 = add_ln160_fu_66_p2[32'd3];

assign tmp_s_fu_388_p3 = {{add_ln203_2_fu_382_p2}, {4'd0}};

assign trunc_ln168_fu_518_p1 = row[2:0];

assign trunc_ln203_1_fu_338_p1 = and_ln203_1_fu_332_p2[15:0];

assign trunc_ln203_2_fu_492_p1 = and_ln203_2_fu_486_p2[15:0];

assign trunc_ln203_3_fu_644_p1 = and_ln203_3_fu_638_p2[15:0];

assign trunc_ln203_4_fu_774_p1 = and_ln203_4_fu_768_p2[15:0];

assign trunc_ln203_5_fu_888_p1 = and_ln203_5_fu_882_p2[15:0];

assign trunc_ln203_6_fu_1032_p1 = and_ln203_6_fu_1026_p2[15:0];

assign trunc_ln203_7_fu_1146_p1 = and_ln203_7_fu_1140_p2[15:0];

assign trunc_ln203_8_fu_1282_p1 = and_ln203_8_fu_1276_p2[15:0];

assign trunc_ln203_fu_224_p1 = and_ln203_fu_218_p2[15:0];

assign xor_ln203_fu_706_p2 = (zext_ln203_8_fu_682_p1 ^ 11'd1023);

assign zext_ln165_1_fu_84_p1 = col;

assign zext_ln165_fu_80_p1 = col;

assign zext_ln168_1_fu_530_p1 = shl_ln168_1_fu_522_p3;

assign zext_ln168_fu_378_p1 = add_ln165_1_fu_364_p2;

assign zext_ln203_10_fu_748_p1 = select_ln203_14_fu_734_p3;

assign zext_ln203_11_fu_752_p1 = sub_ln203_18_fu_742_p2;

assign zext_ln203_12_fu_862_p1 = select_ln203_17_fu_848_p3;

assign zext_ln203_13_fu_866_p1 = sub_ln203_22_fu_856_p2;

assign zext_ln203_14_fu_1006_p1 = select_ln203_20_fu_992_p3;

assign zext_ln203_15_fu_1010_p1 = sub_ln203_26_fu_1000_p2;

assign zext_ln203_16_fu_1120_p1 = select_ln203_23_fu_1106_p3;

assign zext_ln203_17_fu_1124_p1 = sub_ln203_30_fu_1114_p2;

assign zext_ln203_18_fu_1256_p1 = select_ln203_26_fu_1242_p3;

assign zext_ln203_19_fu_1260_p1 = sub_ln203_34_fu_1250_p2;

assign zext_ln203_1_fu_202_p1 = sub_ln203_3_fu_192_p2;

assign zext_ln203_2_fu_312_p1 = select_ln203_5_fu_298_p3;

assign zext_ln203_3_fu_316_p1 = sub_ln203_7_fu_306_p2;

assign zext_ln203_4_fu_466_p1 = select_ln203_8_fu_452_p3;

assign zext_ln203_5_fu_470_p1 = sub_ln203_11_fu_460_p2;

assign zext_ln203_6_fu_618_p1 = select_ln203_11_fu_604_p3;

assign zext_ln203_7_fu_622_p1 = sub_ln203_15_fu_612_p2;

assign zext_ln203_8_fu_682_p1 = tmp_11_fu_662_p3;

assign zext_ln203_9_fu_686_p1 = empty_29_fu_670_p2;

assign zext_ln203_fu_198_p1 = select_ln203_2_fu_184_p3;

endmodule //im2col_2d_cl_ap_fixed_16_6_5_3_0_config2_s
