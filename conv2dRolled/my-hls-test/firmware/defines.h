#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_types/ap_int.h"
#include "ap_types/ap_fixed.h"
#include "nnet_utils/nnet_types.h"

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 8
#define N_INPUT_2_1 8
#define N_INPUT_3_1 1
#define OUT_HEIGHT_2 8
#define OUT_WIDTH_2 8
#define N_FILT_2 2
#define N_LAYER_4 10

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<16,6> layer3_t;
typedef ap_fixed<16,6> layer4_t;
typedef ap_fixed<16,6> result_t;

#endif
