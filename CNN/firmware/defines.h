#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 8
#define N_INPUT_2_1 8
#define N_INPUT_3_1 1
#define OUT_HEIGHT_7 10
#define OUT_WIDTH_7 10
#define N_CHAN_7 1
#define OUT_HEIGHT_2 8
#define OUT_WIDTH_2 8
#define N_FILT_2 2
#define N_SIZE_1_4 128
#define N_LAYER_5 10

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> model_default_t;
typedef nnet::array<ap_fixed<16,6>, 1*1> input_t;
typedef nnet::array<ap_fixed<16,6>, 1*1> layer7_t;
typedef nnet::array<ap_fixed<16,6>, 2*1> layer2_t;
typedef ap_fixed<16,6> conv2d_1_weight_t;
typedef ap_fixed<16,6> conv2d_1_bias_t;
typedef ap_fixed<16,6> conv2d_1_relu_default_t;
typedef nnet::array<ap_fixed<16,6>, 2*1> layer3_t;
typedef nnet::array<ap_fixed<16,6>, 10*1> layer5_t;
typedef ap_fixed<16,6> dense_1_weight_t;
typedef ap_fixed<16,6> dense_1_bias_t;
typedef ap_fixed<16,6> dense_1_softmax_default_t;
typedef nnet::array<ap_fixed<16,6>, 10*1> result_t;

#endif
