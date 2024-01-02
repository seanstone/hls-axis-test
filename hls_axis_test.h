#ifndef _HLS_AXIS_TEST_H__
#define _HLS_AXIS_TEST_H__

#include <ap_int.h>
#include <ap_fixed.h>
#include <ap_axi_sdata.h>
#include <hls_stream.h>
#include <stdint.h>
#include <stdlib.h>

void hls_axis_test(hls::stream<hls::axis<ap_uint<8>,0,0,0>> &input, hls::stream<hls::axis<ap_uint<8>,0,0,0>> &output);

#endif