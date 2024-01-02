#include "hls_axis_test.h"
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

void hls_axis_test(hls::stream<hls::axis<ap_uint<8>,0,0,0>> &input, hls::stream<hls::axis<ap_uint<8>,0,0,0>> &output)
{
#pragma HLS INTERFACE axis port=input
#pragma HLS INTERFACE axis port=output
	for (;;) {
		auto in_sig = input.read();
		output.write(hls::axis<ap_uint<8>,0,0,0>{
			.data = in_sig.data,
			.keep = in_sig.keep,
			.strb = in_sig.strb,
			.last = in_sig.last,
		});
		if (in_sig.last) break;
	}
}