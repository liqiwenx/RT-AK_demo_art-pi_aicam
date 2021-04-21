/**
  ******************************************************************************
  * @file    person_dect.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Tue Apr 20 10:08:53 2021
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */


#include "person_dect.h"

#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "layers.h"



#undef AI_TOOLS_VERSION_MAJOR
#undef AI_TOOLS_VERSION_MINOR
#undef AI_TOOLS_VERSION_MICRO
#define AI_TOOLS_VERSION_MAJOR 5
#define AI_TOOLS_VERSION_MINOR 2
#define AI_TOOLS_VERSION_MICRO 0


#undef AI_TOOLS_API_VERSION_MAJOR
#undef AI_TOOLS_API_VERSION_MINOR
#undef AI_TOOLS_API_VERSION_MICRO
#define AI_TOOLS_API_VERSION_MAJOR 1
#define AI_TOOLS_API_VERSION_MINOR 3
#define AI_TOOLS_API_VERSION_MICRO 0

#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_person_dect
 
#undef AI_PERSON_DECT_MODEL_SIGNATURE
#define AI_PERSON_DECT_MODEL_SIGNATURE     "072f36752eafd03d53c7d144776e48d8"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     "(rev-5.2.0)"
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Tue Apr 20 10:08:53 2021"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_PERSON_DECT_N_BATCHES
#define AI_PERSON_DECT_N_BATCHES         (1)

/**  Forward network declaration section  *************************************/
AI_STATIC ai_network AI_NET_OBJ_INSTANCE;


/**  Forward network array declarations  **************************************/
AI_STATIC ai_array conv2d_28_scratch0_array;   /* Array #0 */
AI_STATIC ai_array conv2d_26_scratch2_array;   /* Array #1 */
AI_STATIC ai_array conv2d_26_scratch1_array;   /* Array #2 */
AI_STATIC ai_array conv2d_26_scratch0_array;   /* Array #3 */
AI_STATIC ai_array conv2d_25_scratch1_array;   /* Array #4 */
AI_STATIC ai_array conv2d_25_scratch0_array;   /* Array #5 */
AI_STATIC ai_array conv2d_24_scratch1_array;   /* Array #6 */
AI_STATIC ai_array conv2d_24_scratch0_array;   /* Array #7 */
AI_STATIC ai_array conv2d_23_scratch1_array;   /* Array #8 */
AI_STATIC ai_array conv2d_23_scratch0_array;   /* Array #9 */
AI_STATIC ai_array conv2d_22_scratch1_array;   /* Array #10 */
AI_STATIC ai_array conv2d_22_scratch0_array;   /* Array #11 */
AI_STATIC ai_array conv2d_21_scratch1_array;   /* Array #12 */
AI_STATIC ai_array conv2d_21_scratch0_array;   /* Array #13 */
AI_STATIC ai_array conv2d_20_scratch1_array;   /* Array #14 */
AI_STATIC ai_array conv2d_20_scratch0_array;   /* Array #15 */
AI_STATIC ai_array conv2d_19_scratch1_array;   /* Array #16 */
AI_STATIC ai_array conv2d_19_scratch0_array;   /* Array #17 */
AI_STATIC ai_array conv2d_18_scratch1_array;   /* Array #18 */
AI_STATIC ai_array conv2d_18_scratch0_array;   /* Array #19 */
AI_STATIC ai_array conv2d_17_scratch1_array;   /* Array #20 */
AI_STATIC ai_array conv2d_17_scratch0_array;   /* Array #21 */
AI_STATIC ai_array conv2d_16_scratch1_array;   /* Array #22 */
AI_STATIC ai_array conv2d_16_scratch0_array;   /* Array #23 */
AI_STATIC ai_array conv2d_15_scratch1_array;   /* Array #24 */
AI_STATIC ai_array conv2d_15_scratch0_array;   /* Array #25 */
AI_STATIC ai_array conv2d_14_scratch1_array;   /* Array #26 */
AI_STATIC ai_array conv2d_14_scratch0_array;   /* Array #27 */
AI_STATIC ai_array conv2d_13_scratch1_array;   /* Array #28 */
AI_STATIC ai_array conv2d_13_scratch0_array;   /* Array #29 */
AI_STATIC ai_array conv2d_12_scratch1_array;   /* Array #30 */
AI_STATIC ai_array conv2d_12_scratch0_array;   /* Array #31 */
AI_STATIC ai_array conv2d_11_scratch1_array;   /* Array #32 */
AI_STATIC ai_array conv2d_11_scratch0_array;   /* Array #33 */
AI_STATIC ai_array conv2d_10_scratch1_array;   /* Array #34 */
AI_STATIC ai_array conv2d_10_scratch0_array;   /* Array #35 */
AI_STATIC ai_array conv2d_9_scratch1_array;   /* Array #36 */
AI_STATIC ai_array conv2d_9_scratch0_array;   /* Array #37 */
AI_STATIC ai_array conv2d_8_scratch1_array;   /* Array #38 */
AI_STATIC ai_array conv2d_8_scratch0_array;   /* Array #39 */
AI_STATIC ai_array conv2d_7_scratch1_array;   /* Array #40 */
AI_STATIC ai_array conv2d_7_scratch0_array;   /* Array #41 */
AI_STATIC ai_array conv2d_6_scratch1_array;   /* Array #42 */
AI_STATIC ai_array conv2d_6_scratch0_array;   /* Array #43 */
AI_STATIC ai_array conv2d_5_scratch1_array;   /* Array #44 */
AI_STATIC ai_array conv2d_5_scratch0_array;   /* Array #45 */
AI_STATIC ai_array conv2d_4_scratch1_array;   /* Array #46 */
AI_STATIC ai_array conv2d_4_scratch0_array;   /* Array #47 */
AI_STATIC ai_array conv2d_3_scratch1_array;   /* Array #48 */
AI_STATIC ai_array conv2d_3_scratch0_array;   /* Array #49 */
AI_STATIC ai_array conv2d_2_scratch1_array;   /* Array #50 */
AI_STATIC ai_array conv2d_2_scratch0_array;   /* Array #51 */
AI_STATIC ai_array conv2d_1_scratch1_array;   /* Array #52 */
AI_STATIC ai_array conv2d_1_scratch0_array;   /* Array #53 */
AI_STATIC ai_array conv2d_0_scratch1_array;   /* Array #54 */
AI_STATIC ai_array conv2d_0_scratch0_array;   /* Array #55 */
AI_STATIC ai_array conv2d_28_bias_array;   /* Array #56 */
AI_STATIC ai_array conv2d_28_weights_array;   /* Array #57 */
AI_STATIC ai_array conv2d_26_bias_array;   /* Array #58 */
AI_STATIC ai_array conv2d_26_weights_array;   /* Array #59 */
AI_STATIC ai_array conv2d_25_bias_array;   /* Array #60 */
AI_STATIC ai_array conv2d_25_weights_array;   /* Array #61 */
AI_STATIC ai_array conv2d_24_bias_array;   /* Array #62 */
AI_STATIC ai_array conv2d_24_weights_array;   /* Array #63 */
AI_STATIC ai_array conv2d_23_bias_array;   /* Array #64 */
AI_STATIC ai_array conv2d_23_weights_array;   /* Array #65 */
AI_STATIC ai_array conv2d_22_bias_array;   /* Array #66 */
AI_STATIC ai_array conv2d_22_weights_array;   /* Array #67 */
AI_STATIC ai_array conv2d_21_bias_array;   /* Array #68 */
AI_STATIC ai_array conv2d_21_weights_array;   /* Array #69 */
AI_STATIC ai_array conv2d_20_bias_array;   /* Array #70 */
AI_STATIC ai_array conv2d_20_weights_array;   /* Array #71 */
AI_STATIC ai_array conv2d_19_bias_array;   /* Array #72 */
AI_STATIC ai_array conv2d_19_weights_array;   /* Array #73 */
AI_STATIC ai_array conv2d_18_bias_array;   /* Array #74 */
AI_STATIC ai_array conv2d_18_weights_array;   /* Array #75 */
AI_STATIC ai_array conv2d_17_bias_array;   /* Array #76 */
AI_STATIC ai_array conv2d_17_weights_array;   /* Array #77 */
AI_STATIC ai_array conv2d_16_bias_array;   /* Array #78 */
AI_STATIC ai_array conv2d_16_weights_array;   /* Array #79 */
AI_STATIC ai_array conv2d_15_bias_array;   /* Array #80 */
AI_STATIC ai_array conv2d_15_weights_array;   /* Array #81 */
AI_STATIC ai_array conv2d_14_bias_array;   /* Array #82 */
AI_STATIC ai_array conv2d_14_weights_array;   /* Array #83 */
AI_STATIC ai_array conv2d_13_bias_array;   /* Array #84 */
AI_STATIC ai_array conv2d_13_weights_array;   /* Array #85 */
AI_STATIC ai_array conv2d_12_bias_array;   /* Array #86 */
AI_STATIC ai_array conv2d_12_weights_array;   /* Array #87 */
AI_STATIC ai_array conv2d_11_bias_array;   /* Array #88 */
AI_STATIC ai_array conv2d_11_weights_array;   /* Array #89 */
AI_STATIC ai_array conv2d_10_bias_array;   /* Array #90 */
AI_STATIC ai_array conv2d_10_weights_array;   /* Array #91 */
AI_STATIC ai_array conv2d_9_bias_array;   /* Array #92 */
AI_STATIC ai_array conv2d_9_weights_array;   /* Array #93 */
AI_STATIC ai_array conv2d_8_bias_array;   /* Array #94 */
AI_STATIC ai_array conv2d_8_weights_array;   /* Array #95 */
AI_STATIC ai_array conv2d_7_bias_array;   /* Array #96 */
AI_STATIC ai_array conv2d_7_weights_array;   /* Array #97 */
AI_STATIC ai_array conv2d_6_bias_array;   /* Array #98 */
AI_STATIC ai_array conv2d_6_weights_array;   /* Array #99 */
AI_STATIC ai_array conv2d_5_bias_array;   /* Array #100 */
AI_STATIC ai_array conv2d_5_weights_array;   /* Array #101 */
AI_STATIC ai_array conv2d_4_bias_array;   /* Array #102 */
AI_STATIC ai_array conv2d_4_weights_array;   /* Array #103 */
AI_STATIC ai_array conv2d_3_bias_array;   /* Array #104 */
AI_STATIC ai_array conv2d_3_weights_array;   /* Array #105 */
AI_STATIC ai_array conv2d_2_bias_array;   /* Array #106 */
AI_STATIC ai_array conv2d_2_weights_array;   /* Array #107 */
AI_STATIC ai_array conv2d_1_bias_array;   /* Array #108 */
AI_STATIC ai_array conv2d_1_weights_array;   /* Array #109 */
AI_STATIC ai_array conv2d_0_bias_array;   /* Array #110 */
AI_STATIC ai_array conv2d_0_weights_array;   /* Array #111 */
AI_STATIC ai_array input_output_array;   /* Array #112 */
AI_STATIC ai_array conv2d_0_output_array;   /* Array #113 */
AI_STATIC ai_array conv2d_1_output_array;   /* Array #114 */
AI_STATIC ai_array conv2d_2_output_array;   /* Array #115 */
AI_STATIC ai_array conv2d_3_output_array;   /* Array #116 */
AI_STATIC ai_array conv2d_4_output_array;   /* Array #117 */
AI_STATIC ai_array conv2d_5_output_array;   /* Array #118 */
AI_STATIC ai_array conv2d_6_output_array;   /* Array #119 */
AI_STATIC ai_array conv2d_7_output_array;   /* Array #120 */
AI_STATIC ai_array conv2d_8_output_array;   /* Array #121 */
AI_STATIC ai_array conv2d_9_output_array;   /* Array #122 */
AI_STATIC ai_array conv2d_10_output_array;   /* Array #123 */
AI_STATIC ai_array conv2d_11_output_array;   /* Array #124 */
AI_STATIC ai_array conv2d_12_output_array;   /* Array #125 */
AI_STATIC ai_array conv2d_13_output_array;   /* Array #126 */
AI_STATIC ai_array conv2d_14_output_array;   /* Array #127 */
AI_STATIC ai_array conv2d_15_output_array;   /* Array #128 */
AI_STATIC ai_array conv2d_16_output_array;   /* Array #129 */
AI_STATIC ai_array conv2d_17_output_array;   /* Array #130 */
AI_STATIC ai_array conv2d_18_output_array;   /* Array #131 */
AI_STATIC ai_array conv2d_19_output_array;   /* Array #132 */
AI_STATIC ai_array conv2d_20_output_array;   /* Array #133 */
AI_STATIC ai_array conv2d_21_output_array;   /* Array #134 */
AI_STATIC ai_array conv2d_22_output_array;   /* Array #135 */
AI_STATIC ai_array conv2d_23_output_array;   /* Array #136 */
AI_STATIC ai_array conv2d_24_output_array;   /* Array #137 */
AI_STATIC ai_array conv2d_25_output_array;   /* Array #138 */
AI_STATIC ai_array conv2d_26_output_array;   /* Array #139 */
AI_STATIC ai_array conv2d_28_output_array;   /* Array #140 */
AI_STATIC ai_array reshape_29_fmt_output_array;   /* Array #141 */
AI_STATIC ai_array nl_30_output_array;   /* Array #142 */
AI_STATIC ai_array nl_30_fmt_output_array;   /* Array #143 */


/**  Forward network tensor declarations  *************************************/
AI_STATIC ai_tensor conv2d_28_scratch0;   /* Tensor #0 */
AI_STATIC ai_tensor conv2d_26_scratch2;   /* Tensor #1 */
AI_STATIC ai_tensor conv2d_26_scratch1;   /* Tensor #2 */
AI_STATIC ai_tensor conv2d_26_scratch0;   /* Tensor #3 */
AI_STATIC ai_tensor conv2d_25_scratch1;   /* Tensor #4 */
AI_STATIC ai_tensor conv2d_25_scratch0;   /* Tensor #5 */
AI_STATIC ai_tensor conv2d_24_scratch1;   /* Tensor #6 */
AI_STATIC ai_tensor conv2d_24_scratch0;   /* Tensor #7 */
AI_STATIC ai_tensor conv2d_23_scratch1;   /* Tensor #8 */
AI_STATIC ai_tensor conv2d_23_scratch0;   /* Tensor #9 */
AI_STATIC ai_tensor conv2d_22_scratch1;   /* Tensor #10 */
AI_STATIC ai_tensor conv2d_22_scratch0;   /* Tensor #11 */
AI_STATIC ai_tensor conv2d_21_scratch1;   /* Tensor #12 */
AI_STATIC ai_tensor conv2d_21_scratch0;   /* Tensor #13 */
AI_STATIC ai_tensor conv2d_20_scratch1;   /* Tensor #14 */
AI_STATIC ai_tensor conv2d_20_scratch0;   /* Tensor #15 */
AI_STATIC ai_tensor conv2d_19_scratch1;   /* Tensor #16 */
AI_STATIC ai_tensor conv2d_19_scratch0;   /* Tensor #17 */
AI_STATIC ai_tensor conv2d_18_scratch1;   /* Tensor #18 */
AI_STATIC ai_tensor conv2d_18_scratch0;   /* Tensor #19 */
AI_STATIC ai_tensor conv2d_17_scratch1;   /* Tensor #20 */
AI_STATIC ai_tensor conv2d_17_scratch0;   /* Tensor #21 */
AI_STATIC ai_tensor conv2d_16_scratch1;   /* Tensor #22 */
AI_STATIC ai_tensor conv2d_16_scratch0;   /* Tensor #23 */
AI_STATIC ai_tensor conv2d_15_scratch1;   /* Tensor #24 */
AI_STATIC ai_tensor conv2d_15_scratch0;   /* Tensor #25 */
AI_STATIC ai_tensor conv2d_14_scratch1;   /* Tensor #26 */
AI_STATIC ai_tensor conv2d_14_scratch0;   /* Tensor #27 */
AI_STATIC ai_tensor conv2d_13_scratch1;   /* Tensor #28 */
AI_STATIC ai_tensor conv2d_13_scratch0;   /* Tensor #29 */
AI_STATIC ai_tensor conv2d_12_scratch1;   /* Tensor #30 */
AI_STATIC ai_tensor conv2d_12_scratch0;   /* Tensor #31 */
AI_STATIC ai_tensor conv2d_11_scratch1;   /* Tensor #32 */
AI_STATIC ai_tensor conv2d_11_scratch0;   /* Tensor #33 */
AI_STATIC ai_tensor conv2d_10_scratch1;   /* Tensor #34 */
AI_STATIC ai_tensor conv2d_10_scratch0;   /* Tensor #35 */
AI_STATIC ai_tensor conv2d_9_scratch1;   /* Tensor #36 */
AI_STATIC ai_tensor conv2d_9_scratch0;   /* Tensor #37 */
AI_STATIC ai_tensor conv2d_8_scratch1;   /* Tensor #38 */
AI_STATIC ai_tensor conv2d_8_scratch0;   /* Tensor #39 */
AI_STATIC ai_tensor conv2d_7_scratch1;   /* Tensor #40 */
AI_STATIC ai_tensor conv2d_7_scratch0;   /* Tensor #41 */
AI_STATIC ai_tensor conv2d_6_scratch1;   /* Tensor #42 */
AI_STATIC ai_tensor conv2d_6_scratch0;   /* Tensor #43 */
AI_STATIC ai_tensor conv2d_5_scratch1;   /* Tensor #44 */
AI_STATIC ai_tensor conv2d_5_scratch0;   /* Tensor #45 */
AI_STATIC ai_tensor conv2d_4_scratch1;   /* Tensor #46 */
AI_STATIC ai_tensor conv2d_4_scratch0;   /* Tensor #47 */
AI_STATIC ai_tensor conv2d_3_scratch1;   /* Tensor #48 */
AI_STATIC ai_tensor conv2d_3_scratch0;   /* Tensor #49 */
AI_STATIC ai_tensor conv2d_2_scratch1;   /* Tensor #50 */
AI_STATIC ai_tensor conv2d_2_scratch0;   /* Tensor #51 */
AI_STATIC ai_tensor conv2d_1_scratch1;   /* Tensor #52 */
AI_STATIC ai_tensor conv2d_1_scratch0;   /* Tensor #53 */
AI_STATIC ai_tensor conv2d_0_scratch1;   /* Tensor #54 */
AI_STATIC ai_tensor conv2d_0_scratch0;   /* Tensor #55 */
AI_STATIC ai_tensor conv2d_28_bias;   /* Tensor #56 */
AI_STATIC ai_tensor conv2d_28_weights;   /* Tensor #57 */
AI_STATIC ai_tensor conv2d_26_bias;   /* Tensor #58 */
AI_STATIC ai_tensor conv2d_26_weights;   /* Tensor #59 */
AI_STATIC ai_tensor conv2d_25_bias;   /* Tensor #60 */
AI_STATIC ai_tensor conv2d_25_weights;   /* Tensor #61 */
AI_STATIC ai_tensor conv2d_24_bias;   /* Tensor #62 */
AI_STATIC ai_tensor conv2d_24_weights;   /* Tensor #63 */
AI_STATIC ai_tensor conv2d_23_bias;   /* Tensor #64 */
AI_STATIC ai_tensor conv2d_23_weights;   /* Tensor #65 */
AI_STATIC ai_tensor conv2d_22_bias;   /* Tensor #66 */
AI_STATIC ai_tensor conv2d_22_weights;   /* Tensor #67 */
AI_STATIC ai_tensor conv2d_21_bias;   /* Tensor #68 */
AI_STATIC ai_tensor conv2d_21_weights;   /* Tensor #69 */
AI_STATIC ai_tensor conv2d_20_bias;   /* Tensor #70 */
AI_STATIC ai_tensor conv2d_20_weights;   /* Tensor #71 */
AI_STATIC ai_tensor conv2d_19_bias;   /* Tensor #72 */
AI_STATIC ai_tensor conv2d_19_weights;   /* Tensor #73 */
AI_STATIC ai_tensor conv2d_18_bias;   /* Tensor #74 */
AI_STATIC ai_tensor conv2d_18_weights;   /* Tensor #75 */
AI_STATIC ai_tensor conv2d_17_bias;   /* Tensor #76 */
AI_STATIC ai_tensor conv2d_17_weights;   /* Tensor #77 */
AI_STATIC ai_tensor conv2d_16_bias;   /* Tensor #78 */
AI_STATIC ai_tensor conv2d_16_weights;   /* Tensor #79 */
AI_STATIC ai_tensor conv2d_15_bias;   /* Tensor #80 */
AI_STATIC ai_tensor conv2d_15_weights;   /* Tensor #81 */
AI_STATIC ai_tensor conv2d_14_bias;   /* Tensor #82 */
AI_STATIC ai_tensor conv2d_14_weights;   /* Tensor #83 */
AI_STATIC ai_tensor conv2d_13_bias;   /* Tensor #84 */
AI_STATIC ai_tensor conv2d_13_weights;   /* Tensor #85 */
AI_STATIC ai_tensor conv2d_12_bias;   /* Tensor #86 */
AI_STATIC ai_tensor conv2d_12_weights;   /* Tensor #87 */
AI_STATIC ai_tensor conv2d_11_bias;   /* Tensor #88 */
AI_STATIC ai_tensor conv2d_11_weights;   /* Tensor #89 */
AI_STATIC ai_tensor conv2d_10_bias;   /* Tensor #90 */
AI_STATIC ai_tensor conv2d_10_weights;   /* Tensor #91 */
AI_STATIC ai_tensor conv2d_9_bias;   /* Tensor #92 */
AI_STATIC ai_tensor conv2d_9_weights;   /* Tensor #93 */
AI_STATIC ai_tensor conv2d_8_bias;   /* Tensor #94 */
AI_STATIC ai_tensor conv2d_8_weights;   /* Tensor #95 */
AI_STATIC ai_tensor conv2d_7_bias;   /* Tensor #96 */
AI_STATIC ai_tensor conv2d_7_weights;   /* Tensor #97 */
AI_STATIC ai_tensor conv2d_6_bias;   /* Tensor #98 */
AI_STATIC ai_tensor conv2d_6_weights;   /* Tensor #99 */
AI_STATIC ai_tensor conv2d_5_bias;   /* Tensor #100 */
AI_STATIC ai_tensor conv2d_5_weights;   /* Tensor #101 */
AI_STATIC ai_tensor conv2d_4_bias;   /* Tensor #102 */
AI_STATIC ai_tensor conv2d_4_weights;   /* Tensor #103 */
AI_STATIC ai_tensor conv2d_3_bias;   /* Tensor #104 */
AI_STATIC ai_tensor conv2d_3_weights;   /* Tensor #105 */
AI_STATIC ai_tensor conv2d_2_bias;   /* Tensor #106 */
AI_STATIC ai_tensor conv2d_2_weights;   /* Tensor #107 */
AI_STATIC ai_tensor conv2d_1_bias;   /* Tensor #108 */
AI_STATIC ai_tensor conv2d_1_weights;   /* Tensor #109 */
AI_STATIC ai_tensor conv2d_0_bias;   /* Tensor #110 */
AI_STATIC ai_tensor conv2d_0_weights;   /* Tensor #111 */
AI_STATIC ai_tensor input_output;   /* Tensor #112 */
AI_STATIC ai_tensor conv2d_0_output;   /* Tensor #113 */
AI_STATIC ai_tensor conv2d_1_output;   /* Tensor #114 */
AI_STATIC ai_tensor conv2d_2_output;   /* Tensor #115 */
AI_STATIC ai_tensor conv2d_3_output;   /* Tensor #116 */
AI_STATIC ai_tensor conv2d_4_output;   /* Tensor #117 */
AI_STATIC ai_tensor conv2d_5_output;   /* Tensor #118 */
AI_STATIC ai_tensor conv2d_6_output;   /* Tensor #119 */
AI_STATIC ai_tensor conv2d_7_output;   /* Tensor #120 */
AI_STATIC ai_tensor conv2d_8_output;   /* Tensor #121 */
AI_STATIC ai_tensor conv2d_9_output;   /* Tensor #122 */
AI_STATIC ai_tensor conv2d_10_output;   /* Tensor #123 */
AI_STATIC ai_tensor conv2d_11_output;   /* Tensor #124 */
AI_STATIC ai_tensor conv2d_12_output;   /* Tensor #125 */
AI_STATIC ai_tensor conv2d_13_output;   /* Tensor #126 */
AI_STATIC ai_tensor conv2d_14_output;   /* Tensor #127 */
AI_STATIC ai_tensor conv2d_15_output;   /* Tensor #128 */
AI_STATIC ai_tensor conv2d_16_output;   /* Tensor #129 */
AI_STATIC ai_tensor conv2d_17_output;   /* Tensor #130 */
AI_STATIC ai_tensor conv2d_18_output;   /* Tensor #131 */
AI_STATIC ai_tensor conv2d_19_output;   /* Tensor #132 */
AI_STATIC ai_tensor conv2d_20_output;   /* Tensor #133 */
AI_STATIC ai_tensor conv2d_21_output;   /* Tensor #134 */
AI_STATIC ai_tensor conv2d_22_output;   /* Tensor #135 */
AI_STATIC ai_tensor conv2d_23_output;   /* Tensor #136 */
AI_STATIC ai_tensor conv2d_24_output;   /* Tensor #137 */
AI_STATIC ai_tensor conv2d_25_output;   /* Tensor #138 */
AI_STATIC ai_tensor conv2d_26_output;   /* Tensor #139 */
AI_STATIC ai_tensor conv2d_28_output;   /* Tensor #140 */
AI_STATIC ai_tensor reshape_29_fmt_output;   /* Tensor #141 */
AI_STATIC ai_tensor nl_30_output;   /* Tensor #142 */
AI_STATIC ai_tensor nl_30_fmt_output;   /* Tensor #143 */


/**  Forward network tensor chain declarations  *******************************/
AI_STATIC_CONST ai_tensor_chain conv2d_0_chain;   /* Chain #0 */
AI_STATIC_CONST ai_tensor_chain conv2d_1_chain;   /* Chain #1 */
AI_STATIC_CONST ai_tensor_chain conv2d_2_chain;   /* Chain #2 */
AI_STATIC_CONST ai_tensor_chain conv2d_3_chain;   /* Chain #3 */
AI_STATIC_CONST ai_tensor_chain conv2d_4_chain;   /* Chain #4 */
AI_STATIC_CONST ai_tensor_chain conv2d_5_chain;   /* Chain #5 */
AI_STATIC_CONST ai_tensor_chain conv2d_6_chain;   /* Chain #6 */
AI_STATIC_CONST ai_tensor_chain conv2d_7_chain;   /* Chain #7 */
AI_STATIC_CONST ai_tensor_chain conv2d_8_chain;   /* Chain #8 */
AI_STATIC_CONST ai_tensor_chain conv2d_9_chain;   /* Chain #9 */
AI_STATIC_CONST ai_tensor_chain conv2d_10_chain;   /* Chain #10 */
AI_STATIC_CONST ai_tensor_chain conv2d_11_chain;   /* Chain #11 */
AI_STATIC_CONST ai_tensor_chain conv2d_12_chain;   /* Chain #12 */
AI_STATIC_CONST ai_tensor_chain conv2d_13_chain;   /* Chain #13 */
AI_STATIC_CONST ai_tensor_chain conv2d_14_chain;   /* Chain #14 */
AI_STATIC_CONST ai_tensor_chain conv2d_15_chain;   /* Chain #15 */
AI_STATIC_CONST ai_tensor_chain conv2d_16_chain;   /* Chain #16 */
AI_STATIC_CONST ai_tensor_chain conv2d_17_chain;   /* Chain #17 */
AI_STATIC_CONST ai_tensor_chain conv2d_18_chain;   /* Chain #18 */
AI_STATIC_CONST ai_tensor_chain conv2d_19_chain;   /* Chain #19 */
AI_STATIC_CONST ai_tensor_chain conv2d_20_chain;   /* Chain #20 */
AI_STATIC_CONST ai_tensor_chain conv2d_21_chain;   /* Chain #21 */
AI_STATIC_CONST ai_tensor_chain conv2d_22_chain;   /* Chain #22 */
AI_STATIC_CONST ai_tensor_chain conv2d_23_chain;   /* Chain #23 */
AI_STATIC_CONST ai_tensor_chain conv2d_24_chain;   /* Chain #24 */
AI_STATIC_CONST ai_tensor_chain conv2d_25_chain;   /* Chain #25 */
AI_STATIC_CONST ai_tensor_chain conv2d_26_chain;   /* Chain #26 */
AI_STATIC_CONST ai_tensor_chain conv2d_28_chain;   /* Chain #27 */
AI_STATIC_CONST ai_tensor_chain reshape_29_fmt_chain;   /* Chain #28 */
AI_STATIC_CONST ai_tensor_chain nl_30_chain;   /* Chain #29 */
AI_STATIC_CONST ai_tensor_chain nl_30_fmt_chain;   /* Chain #30 */


/**  Forward network layer declarations  **************************************/
AI_STATIC ai_layer_conv2d conv2d_0_layer; /* Layer #0 */
AI_STATIC ai_layer_conv2d conv2d_1_layer; /* Layer #1 */
AI_STATIC ai_layer_conv2d conv2d_2_layer; /* Layer #2 */
AI_STATIC ai_layer_conv2d conv2d_3_layer; /* Layer #3 */
AI_STATIC ai_layer_conv2d conv2d_4_layer; /* Layer #4 */
AI_STATIC ai_layer_conv2d conv2d_5_layer; /* Layer #5 */
AI_STATIC ai_layer_conv2d conv2d_6_layer; /* Layer #6 */
AI_STATIC ai_layer_conv2d conv2d_7_layer; /* Layer #7 */
AI_STATIC ai_layer_conv2d conv2d_8_layer; /* Layer #8 */
AI_STATIC ai_layer_conv2d conv2d_9_layer; /* Layer #9 */
AI_STATIC ai_layer_conv2d conv2d_10_layer; /* Layer #10 */
AI_STATIC ai_layer_conv2d conv2d_11_layer; /* Layer #11 */
AI_STATIC ai_layer_conv2d conv2d_12_layer; /* Layer #12 */
AI_STATIC ai_layer_conv2d conv2d_13_layer; /* Layer #13 */
AI_STATIC ai_layer_conv2d conv2d_14_layer; /* Layer #14 */
AI_STATIC ai_layer_conv2d conv2d_15_layer; /* Layer #15 */
AI_STATIC ai_layer_conv2d conv2d_16_layer; /* Layer #16 */
AI_STATIC ai_layer_conv2d conv2d_17_layer; /* Layer #17 */
AI_STATIC ai_layer_conv2d conv2d_18_layer; /* Layer #18 */
AI_STATIC ai_layer_conv2d conv2d_19_layer; /* Layer #19 */
AI_STATIC ai_layer_conv2d conv2d_20_layer; /* Layer #20 */
AI_STATIC ai_layer_conv2d conv2d_21_layer; /* Layer #21 */
AI_STATIC ai_layer_conv2d conv2d_22_layer; /* Layer #22 */
AI_STATIC ai_layer_conv2d conv2d_23_layer; /* Layer #23 */
AI_STATIC ai_layer_conv2d conv2d_24_layer; /* Layer #24 */
AI_STATIC ai_layer_conv2d conv2d_25_layer; /* Layer #25 */
AI_STATIC ai_layer_conv2d_nl_pool conv2d_26_layer; /* Layer #26 */
AI_STATIC ai_layer_conv2d conv2d_28_layer; /* Layer #27 */
AI_STATIC ai_layer_nl reshape_29_fmt_layer; /* Layer #28 */
AI_STATIC ai_layer_nl nl_30_layer; /* Layer #29 */
AI_STATIC ai_layer_nl nl_30_fmt_layer; /* Layer #30 */


/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1044, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3584, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_25_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_25_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9473, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_24_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_24_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4737, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1792, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4737, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_20_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_20_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1792, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4737, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1792, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4737, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1792, AI_STATIC)

/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4737, AI_STATIC)

/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1792, AI_STATIC)

/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4737, AI_STATIC)

/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)

/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2369, AI_STATIC)

/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9216, AI_STATIC)

/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 896, AI_STATIC)

/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9216, AI_STATIC)

/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2369, AI_STATIC)

/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9216, AI_STATIC)

/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)

/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1185, AI_STATIC)

/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18432, AI_STATIC)

/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 448, AI_STATIC)

/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18432, AI_STATIC)

/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1185, AI_STATIC)

/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18432, AI_STATIC)

/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)

/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9216, AI_STATIC)

/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 593, AI_STATIC)

/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36864, AI_STATIC)

/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 192, AI_STATIC)

/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18432, AI_STATIC)

/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 297, AI_STATIC)

/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18432, AI_STATIC)

/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)

/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 2, AI_STATIC)

/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 256, AI_STATIC)

/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 65536, AI_STATIC)

/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_25_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 256, AI_STATIC)

/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_25_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_24_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 256, AI_STATIC)

/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_24_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 32768, AI_STATIC)

/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16384, AI_STATIC)

/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_20_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_20_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16384, AI_STATIC)

/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16384, AI_STATIC)

/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16384, AI_STATIC)

/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16384, AI_STATIC)

/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8192, AI_STATIC)

/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)

/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)

/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)

/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4096, AI_STATIC)

/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)

/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)

/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)

/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2048, AI_STATIC)

/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)

/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)

/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)

/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)

/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)

/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)

/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)

/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)

/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)

/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)

/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)

/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  input_output_array, AI_ARRAY_FORMAT_S8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 27648, AI_STATIC)

/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18432, AI_STATIC)

/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18432, AI_STATIC)

/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36864, AI_STATIC)

/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9216, AI_STATIC)

/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18432, AI_STATIC)

/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18432, AI_STATIC)

/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18432, AI_STATIC)

/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9216, AI_STATIC)

/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9216, AI_STATIC)

/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9216, AI_STATIC)

/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_20_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4608, AI_STATIC)

/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_24_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_25_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 256, AI_STATIC)

/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2, AI_STATIC)

/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  reshape_29_fmt_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2, AI_STATIC)

/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  nl_30_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2, AI_STATIC)

/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  nl_30_fmt_output_array, AI_ARRAY_FORMAT_S8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 2, AI_STATIC)

/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_scratch2_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_25_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_24_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_23_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_20_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_0_scratch1_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 2,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(7.463242945959792e-05f, 7.462314533768222e-05f),
    AI_PACK_INTQ_ZP(0, 0)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 2,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003171878168359399f, 0.003171483753249049f),
    AI_PACK_INTQ_ZP(0, 0)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 256,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(9.691233572084457e-06f, 1.0293600098520983e-05f, 1.2906275514978915e-07f, 1.3167684187465056e-07f, 1.1020959391316865e-05f, 1.3546314221457578e-06f, 1.7529917386127636e-05f, 5.521078492165543e-06f, 1.2075349332008045e-05f, 1.0942600056296214e-05f, 1.5098302696969768e-07f, 1.1509741852933075e-05f, 1.471498904948021e-07f, 1.9732972589281417e-07f, 2.2188253012700443e-07f, 1.0397398909844924e-05f, 1.6292668760797824e-06f, 1.626675043553405e-06f, 1.058710736856483e-07f, 1.5827534298296086e-05f, 7.337326223932905e-06f, 3.6862354590994073e-07f, 1.7307107214037387e-07f, 1.004709611152066e-05f, 1.4544099030899815e-05f, 8.386940862692427e-06f, 1.166718334388861e-06f, 9.754535312822554e-06f, 1.131619669081374e-07f, 9.334729838883504e-06f, 2.3167254425970896e-07f, 2.2455684302258305e-05f, 1.7643036699155346e-05f, 6.166063030832447e-06f, 1.2276399502297863e-05f, 1.1251043474658218e-07f, 1.0905323932774991e-07f, 3.6102809986005013e-07f, 1.676943952588772e-07f, 3.090488007728709e-07f, 9.59099179453915e-06f, 8.902699846657924e-06f, 9.494926302977547e-07f, 6.470659741353302e-07f, 1.18749012472108e-05f, 5.873890586371999e-06f, 1.3542681642775278e-07f, 1.7055720036296407e-07f, 1.66770532814553e-05f, 1.2801482625945937e-05f, 3.9888860214887245e-07f, 1.5897387129371054e-05f, 9.562393188389251e-08f, 8.343250556208659e-06f, 2.994251246946078e-07f, 2.4277181864817976e-07f, 1.1933806490560528e-05f, 2.9737655495409854e-05f, 2.614955576518696e-07f, 1.4449928187332262e-07f, 1.7622505765757523e-07f, 1.1317047921011181e-07f, 5.516173473552044e-07f, 1.2624152986973058e-05f, 1.4954162907088175e-05f, 1.4347074284160044e-07f, 1.3012316912863753e-07f, 4.668865130952327e-06f, 9.360405783809256e-06f, 9.241073712473735e-06f, 1.0900731695073773e-07f, 1.1537759746715892e-05f, 1.6198134744627168e-07f, 4.478197661228478e-05f, 1.0602092288536369e-06f, 1.1248795317442273e-07f, 1.4795155038882513e-06f, 4.933119726047153e-07f, 1.6797899661469273e-05f, 1.2335026156051754e-07f, 1.1495076250866987e-05f, 1.5610921764164232e-05f, 1.311988171437406e-06f, 7.190050837380113e-06f, 1.794385866560333e-07f, 1.0344526344852056e-05f, 5.381044957175618e-06f, 1.153887154714539e-07f, 7.134867246350041e-06f, 1.82128303549689e-07f, 1.0464117622177582e-05f, 1.2241746105701168e-07f, 1.63324766617734e-05f, 1.8928552890429273e-05f, 1.471113591833273e-05f, 2.1428213869967294e-07f, 9.108364793064538e-06f, 7.434078952428536e-07f, 1.2498875548772048e-05f, 3.715322236530483e-07f, 1.0708114132285118e-05f, 1.5810702791441145e-07f, 1.095621792046586e-05f, 4.295341682336584e-07f, 2.1578654241238837e-07f, 1.1424494772427352e-07f, 1.209334732266143e-05f, 1.2153697070971248e-07f, 1.6546275219297968e-05f, 7.885369086579885e-06f, 1.418669626218616e-07f, 1.4070617737615976e-07f, 2.648110421432648e-05f, 1.0284164090990089e-05f, 1.2169769433967303e-05f, 5.344283636077307e-06f, 1.9039220205741003e-05f, 1.0867615429788202e-07f, 3.235463736928068e-07f, 5.598667485173792e-06f, 9.06791592569789e-06f, 3.3089384032791713e-06f, 1.063219770003343e-07f, 2.8343453095658333e-07f, 8.528085118086892e-07f, 5.57073065010627e-07f, 8.954125405580271e-06f, 9.97202747043957e-08f, 6.29260375717422e-06f, 2.4544158350181533e-06f, 1.6847574443090707e-05f, 1.4702179385039926e-07f, 1.2744318155455403e-05f, 7.005960014794255e-06f, 1.309905928792432e-05f, 1.4813477378083917e-07f, 8.800483556115068e-06f, 1.2093656550860032e-05f, 1.7330377886537462e-05f, 9.40126653858897e-07f, 1.2781528369032458e-07f, 3.4794220482581295e-07f, 1.4564174932729657e-07f, 1.2377861935419787e-07f, 1.1392337029292321e-07f, 1.1807237854100094e-07f, 8.680937753524631e-06f, 2.76443586244568e-07f, 1.321017464306351e-07f, 1.4756589905573492e-07f, 1.7693304471322335e-05f, 1.709709636088519e-07f, 9.75971943262266e-06f, 1.1075239854108077e-05f, 1.2234290807100479e-05f, 1.7306341760559008e-05f, 2.0788044707842346e-07f, 1.0194921742368024e-05f, 1.1631590979277462e-07f, 4.7236147793228156e-07f, 9.327861334895715e-06f, 1.6058393157436512e-06f, 1.3702465366804972e-05f, 1.8467071640770882e-05f, 7.253314379340736e-06f, 1.1076153896283358e-05f, 4.85292775920243e-06f, 1.004168461804511e-05f, 1.2101887136850564e-07f, 1.2743473121190618e-07f, 1.0933286631598094e-07f, 9.177565516438335e-06f, 1.1092151908087544e-07f, 2.9436310455821513e-07f, 8.124703526846133e-06f, 1.3036707287028548e-06f, 6.505736678263929e-07f, 3.934785127057694e-06f, 8.238700502261054e-06f, 9.988984572828485e-08f, 1.0958050467024805e-07f, 1.5013310985523276e-06f, 2.3212254518512054e-07f, 1.1911423825949896e-05f, 1.173195940395999e-07f, 2.9323734906938625e-07f, 1.4211313100531697e-05f, 2.05842934519751e-06f, 1.3570542250818107e-05f, 8.307903044624254e-06f, 1.479376896895701e-05f, 3.717439653883048e-07f, 9.647073540008932e-08f, 1.0976335943269078e-05f, 1.1078707018441492e-07f, 1.7583020962774754e-05f, 1.5580260878778063e-05f, 1.065273522726784e-06f, 1.1558516234799754e-05f, 8.920049367588945e-06f, 1.2731064202853304e-07f, 6.347131147776963e-06f, 6.745187420165166e-06f, 5.364557296161365e-07f, 1.7853280951385386e-05f, 1.0220393050985876e-05f, 8.909066309570335e-06f, 5.54456164536532e-06f, 1.0812456821440719e-05f, 6.314267011475749e-06f, 1.5034811440273188e-05f, 1.30416196952865e-07f, 2.3207679987535812e-05f, 1.684173730609473e-05f, 1.0399638085800689e-05f, 1.3269926967041101e-05f, 2.798132925363461e-07f, 2.4382225660701806e-07f, 3.150361635562149e-06f, 2.7306225547363283e-07f, 2.4152186028914e-07f, 1.4782926882617176e-07f, 2.1248424673103727e-05f, 6.963820737837523e-07f, 1.3442452654999215e-05f, 8.939196050050668e-06f, 9.422350558452308e-06f, 1.9354607502464205e-05f, 7.310756245715311e-06f, 1.2218277333886363e-05f, 1.3187541298975702e-05f, 1.3559317721956177e-06f, 8.933375283959322e-06f, 1.1276306395302527e-05f, 1.4183830899128225e-05f, 1.3844871205037634e-07f, 9.724823030410334e-06f, 4.3299172602928593e-07f, 1.1562252439034637e-05f, 1.1505293429081576e-07f, 2.498751427992829e-07f, 8.591402547608595e-06f, 2.7015844352717977e-06f, 2.593861836430733e-07f, 9.507187314738985e-06f, 1.7866742041405814e-07f, 9.535899152979255e-06f, 4.214720320305787e-06f, 3.714843046509486e-07f, 1.255533703670153e-07f, 8.7431471911259e-06f, 1.4895245840307325e-05f, 1.0513087545405142e-05f, 1.1453012120909989e-05f, 9.310733730671927e-06f, 1.0134622243640479e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 256,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00041187743772752583f, 0.00043747801100835204f, 5.485167093866039e-06f, 5.59626596441376e-06f, 0.00046839076094329357f, 5.757183316745795e-05f, 0.0007450214470736682f, 0.00023464583500754088f, 0.0005132023361511528f, 0.0004650604969356209f, 6.4167784330493305e-06f, 0.0004891640273854136f, 6.2538701968151145e-06f, 8.386513400182594e-06f, 9.430007594346534e-06f, 0.0004418894532136619f, 6.924384069861844e-05f, 6.913368997629732e-05f, 4.4995204007136635e-06f, 0.000672670197673142f, 0.00031183636747300625f, 1.5666500985389575e-05f, 7.355520210694522e-06f, 0.0004270015633665025f, 0.000618124206084758f, 0.00035644497256726027f, 4.9585527449380606e-05f, 0.0004145677376072854f, 4.809383426618297e-06f, 0.0003967260126955807f, 9.846083230513614e-06f, 0.0009543665801174939f, 0.0007498290506191552f, 0.0002620576706249267f, 0.0005217469879426062f, 4.781693405675469e-06f, 4.634762717614649e-06f, 1.534369403088931e-05f, 7.127011940610828e-06f, 1.3134573237039149e-05f, 0.0004076171317137778f, 0.0003783647553063929f, 4.035343590658158e-05f, 2.750030398601666e-05f, 0.0005046832957305014f, 0.0002496403467375785f, 5.755639449489536e-06f, 7.248680958582554e-06f, 0.0007087747799232602f, 0.0005440629902295768f, 1.695276478130836e-05f, 0.0006756389630027115f, 4.064017048222013e-06f, 0.00035458814818412066f, 1.272556710318895e-05f, 1.031780175253516e-05f, 0.0005071867490187287f, 0.0012638503685593605f, 1.1113561413367279e-05f, 6.141219273558818e-06f, 7.489564723073272e-06f, 4.809745405509602e-06f, 2.344373569940217e-05f, 0.0005365264951251447f, 0.0006355519290082157f, 6.0975062297075056e-06f, 5.530234830075642e-06f, 0.00019842675828840584f, 0.0003978172317147255f, 0.00039274562732316554f, 4.632810941984644e-06f, 0.0004903547815047204f, 6.8842073233099654e-06f, 0.001903233933262527f, 4.5058892283122987e-05f, 4.7807379814912565e-06f, 6.28794077783823e-05f, 2.0965759176760912e-05f, 0.00071391073288396f, 5.242386123427423e-06f, 0.0004885407397523522f, 0.0006634641322307289f, 5.575949398917146e-05f, 0.0003055771521758288f, 7.6261399044597056e-06f, 0.0004396423464640975f, 0.00022869440726935863f, 4.904020443063928e-06f, 0.0003032318491023034f, 7.740452929283492e-06f, 0.00044472498120740056f, 5.202741704124492e-06f, 0.00069413025630638f, 0.0008044635178521276f, 0.0006252232706174254f, 9.10699054657016e-06f, 0.0003871054796036333f, 3.1594834581483155e-05f, 0.0005312021821737289f, 1.5790119505254552e-05f, 0.0004550948506221175f, 6.7195483097748365e-06f, 0.0004656392557080835f, 1.825520121201407e-05f, 9.170928024104796e-06f, 4.855410224990919e-06f, 0.0005139672430232167f, 5.165321454114746e-06f, 0.000703216705005616f, 0.0003351281920913607f, 6.029345513525186e-06f, 5.980012701911619e-06f, 0.0011254468699917197f, 0.00043707696022465825f, 0.0005172151722945273f, 0.00022713204089086503f, 0.0008091668132692575f, 4.618736511474708e-06f, 1.3750720427196939e-05f, 0.00023794335720594972f, 0.0003853864036500454f, 0.00014062988338992f, 4.51868390882737e-06f, 1.2045967196172569e-05f, 3.6244360671844333e-05f, 2.3675604097661562e-05f, 0.0003805503365583718f, 4.238111614540685e-06f, 0.0002674356510397047f, 0.00010431266855448484f, 0.0007160218665376306f, 6.248426416277653e-06f, 0.0005416335188783705f, 0.0002977532858494669f, 0.0005567100015468895f, 6.29572787147481e-06f, 0.0003740205429494381f, 0.0005139803979545832f, 0.0007365410565398633f, 3.9955382817424834e-05f, 5.432149464468239e-06f, 1.4787543477723375e-05f, 6.189774467202369e-06f, 5.260591478872811e-06f, 4.8417432481073774e-06f, 5.018076080887113e-06f, 0.0003689398290589452f, 1.1748852557502687e-05f, 5.614323981717462e-06f, 6.27155077381758e-06f, 0.0007519653881900012f, 7.266265583893983e-06f, 0.0004147880827076733f, 0.00047069767606444657f, 0.0005199573352001607f, 0.000735519512090832f, 8.834918844513595e-06f, 0.00043328417814336717f, 4.9434261200076435e-06f, 2.007536204473581e-05f, 0.0003964341012760997f, 6.824816955486313e-05f, 0.0005823547835461795f, 0.0007848505629226565f, 0.00030826585134491324f, 0.0004707365296781063f, 0.00020624941680580378f, 0.0004267715848982334f, 5.143301677890122e-06f, 5.415975920186611e-06f, 4.646646630135365e-06f, 0.00039004653808660805f, 4.714164333563531e-06f, 1.2510431588452775e-05f, 0.00034529989352449775f, 5.540600614040159e-05f, 2.7649381081573665e-05f, 0.0001672283688094467f, 0.0003501447499729693f, 4.245318450557534e-06f, 4.657171302824281e-06f, 6.380656850524247e-05f, 9.865208085102495e-06f, 0.0005062355194240808f, 4.9860827857628465e-06f, 1.246258761966601e-05f, 0.0006039807922206819f, 8.748324762564152e-05f, 0.0005767480470240116f, 0.000353085866663605f, 0.0006287351716309786f, 1.5799118045833893e-05f, 4.1000062083185185e-06f, 0.00046649426803924143f, 4.708450433099642e-06f, 0.000747278390917927f, 0.00066216109553352f, 4.5274122385308146e-05f, 0.000491236918605864f, 0.0003791020717471838f, 5.4107022151583806e-06f, 0.00026975307264365256f, 0.00028667045990005136f, 2.2799367798143066e-05f, 0.0007587643922306597f, 0.0004343666951172054f, 0.0003786353045143187f, 0.0002356438635615632f, 0.00045952940126881003f, 0.00026835635071620345f, 0.0006389794871211052f, 5.542688086279668e-06f, 0.0009863263694569468f, 0.0007157737854868174f, 0.00044198459363542497f, 0.0005639718729071319f, 1.189206523122266e-05f, 1.0362445209466387e-05f, 0.00013389036757871509f, 1.160514511866495e-05f, 1.0264679076499306e-05f, 6.2827439251123e-06f, 0.0009030580404214561f, 2.959623816423118e-05f, 0.0005713042337447405f, 0.00037991584395058453f, 0.00040044987690635026f, 0.0008225708152167499f, 0.000310707138851285f, 0.0005192767712287605f, 0.0005604705074802041f, 5.762709770351648e-05f, 0.00037966843228787184f, 0.0004792430263478309f, 0.0006028127972967923f, 5.884070105821593e-06f, 0.0004133049806114286f, 1.8402148270979524e-05f, 0.000491395709104836f, 4.889749561698409e-06f, 1.0619693057378754e-05f, 0.0003651346196420491f, 0.00011481733235996217f, 1.1023912520613521e-05f, 0.00040405543404631317f, 7.593365353386616e-06f, 0.0004052756994497031f, 0.00017912560724653304f, 1.578808223712258e-05f, 5.336018148227595e-06f, 0.0003715837374329567f, 0.0006330479518510401f, 0.0004468061961233616f, 0.0004867530078627169f, 0.0003957061853725463f, 0.0004307214403524995f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_25_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 256,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00011632540554273874f, 0.00016705240705050528f, 0.00014228226791601628f, 0.00013317528646439314f, 0.00015857791004236788f, 0.00013864236825611442f, 0.00016762052837293595f, 0.00028713728534057736f, 0.00022745509340893477f, 0.0002128063206328079f, 0.00021900743013247848f, 0.0001700099528534338f, 0.00019945048552472144f, 0.00022373611864168197f, 0.0001432593708159402f, 0.0002724505611695349f, 0.0001749494840623811f, 0.00019279945991002023f, 0.00017345079686492682f, 0.00013781283632852137f, 0.00018151021504309028f, 0.00026927018188871443f, 0.00020744025823660195f, 0.00021742659737356007f, 0.00018360771355219185f, 0.00018870217900257558f, 0.00030670626438222826f, 0.00013984317774884403f, 0.0001904098899103701f, 0.00036831520264968276f, 0.0002535566163714975f, 0.0002048740570899099f, 0.00019828624499496073f, 0.00014321475464385003f, 0.0001229779445566237f, 0.000134865113068372f, 0.00015242375957313925f, 0.00011313176219118759f, 0.00028034261777065694f, 0.00017273088451474905f, 0.00019384539336897433f, 0.00018688624550122768f, 0.00018641879432834685f, 0.00018869765335693955f, 0.00018171800184063613f, 0.00016525409591849893f, 0.00015644764062017202f, 0.00012886591139249504f, 0.00029298110166564584f, 0.00014637316053267568f, 0.0003015556139871478f, 0.00019897130550816655f, 0.00031294679502025247f, 0.00023054213670548052f, 0.00017328564717900008f, 0.00012654191232286394f, 0.0001373706036247313f, 0.00020277383737266064f, 0.00021304276015143842f, 0.00022750924108549953f, 0.0001685294118942693f, 0.00015833647921681404f, 0.00012583077477756888f, 0.0001611392799532041f, 0.00023385434178635478f, 0.0002366394328419119f, 9.585929365130141e-05f, 0.00015113437257241458f, 0.0001246091560460627f, 0.0001799126184778288f, 0.00022963529045227915f, 0.00013719082926400006f, 0.00024508367641828954f, 0.00016799506556708366f, 0.00018680373614188284f, 0.0002868084702640772f, 0.00014730892144143581f, 9.848978515947238e-05f, 0.0002231430116808042f, 0.00019080151105299592f, 0.00020080652029719204f, 0.0003297818766441196f, 0.0003954503044951707f, 0.0001840982004068792f, 0.00013197309453971684f, 0.00020028666767757386f, 0.0001915190659929067f, 0.0001202467319671996f, 0.00018665604875423014f, 0.00016370641242247075f, 0.0001785284111974761f, 0.0002283758803969249f, 0.00019794337276834995f, 0.000186000790563412f, 0.00021750177256762981f, 0.00017210395890288055f, 0.0001782854669727385f, 0.00016671874618623406f, 0.00021484229364432395f, 0.00018689860007725656f, 0.00016710844647604972f, 0.00015660308417864144f, 0.0001381437323288992f, 0.00015801582776475698f, 0.00011588463530642912f, 0.00039977041888050735f, 0.00026728148804977536f, 0.00013411733380053192f, 0.00013753288658335805f, 0.00018636678578332067f, 0.0001235393574461341f, 0.0001355599524686113f, 0.0001343419135082513f, 0.00024503516033291817f, 0.00012592755956575274f, 0.00018233596347272396f, 0.00015856460959184915f, 0.00012396993406582624f, 0.00017486524302512407f, 0.00018077739514410496f, 0.00026866773259826005f, 0.00021885114256292582f, 0.00018692990124691278f, 0.00032233831007033587f, 0.00022101899958215654f, 0.0002502556599210948f, 0.00013491134450305253f, 0.0001809780951589346f, 0.0001526779233245179f, 0.00019684640574268997f, 0.00018099052249453962f, 0.0001946084521478042f, 0.00021360167011152953f, 0.00015623494982719421f, 0.00019666989101096988f, 0.00016161365783773363f, 0.00018546984938438982f, 0.00026130309561267495f, 0.00018572421686258167f, 0.00019854943093378097f, 0.0001871924614533782f, 0.00019212052575312555f, 0.0001961609668796882f, 0.00024146001669578254f, 0.00019056432938668877f, 0.0001826380321290344f, 0.00021115368872415274f, 0.00019470142433419824f, 0.00029225563048385084f, 0.0002301001368323341f, 0.00019191342289559543f, 0.00014076591469347477f, 0.00017668455257080495f, 0.0002602029999252409f, 0.0001826426450861618f, 0.00017506093718111515f, 0.00011578374687815085f, 0.00010116672638105229f, 0.0001669755729380995f, 0.0001861795171862468f, 0.0001812036061892286f, 0.00015016697579994798f, 0.00017687211220618337f, 0.00019310018979012966f, 9.025583858601749e-05f, 0.00018960404850076884f, 0.0002274131402373314f, 0.00018277738126926124f, 0.000173738575540483f, 0.00022756295220460743f, 0.00011512202036101371f, 0.0001757726276991889f, 0.0002041341213043779f, 0.00025714392540976405f, 0.0003119571483694017f, 0.00023527863959316164f, 0.00019213397172279656f, 0.0002364085230510682f, 0.00026220499421469867f, 0.00011928242020076141f, 0.00011844866094179451f, 0.00013395211135502905f, 0.00013247239985503256f, 0.00017462170217186213f, 0.00017561255663167685f, 0.00012802686251234263f, 0.00015025888569653034f, 0.00013784518523607403f, 0.00011250640818616375f, 0.00019916938617825508f, 0.00017750731785781682f, 0.00022246041044127196f, 0.0003137429303023964f, 0.00015472163795493543f, 0.00015132185944821686f, 0.0001406592346029356f, 0.00014296348672360182f, 0.00016565019905101508f, 0.00024057763221208006f, 0.0001658862311160192f, 0.00017823203234001994f, 0.00017821868823375553f, 0.0002882199769373983f, 0.00015167206584010273f, 0.00029042194364592433f, 0.00017114405636675656f, 0.00016499053162988275f, 0.0001572667242726311f, 0.00022959604393690825f, 0.00014421572268474847f, 0.0002921944251284003f, 0.00017683424812275916f, 0.00028259496320970356f, 0.00016371354286093265f, 0.0001632308994885534f, 0.00017392373410984874f, 0.00011962286225752905f, 0.0003018995048478246f, 0.00017015576304402202f, 0.00021740217925980687f, 0.00037168379640206695f, 0.00021410109184216708f, 0.00021333091717679054f, 0.0001925214019138366f, 0.00024032291548792273f, 0.0002158200804842636f, 0.00020448421128094196f, 0.00018720403022598475f, 0.0001627179008210078f, 0.00013536382175516337f, 0.0002826418203767389f, 0.0001940015790751204f, 0.0001399472530465573f, 0.00016329904610756785f, 0.00020204541215207428f, 0.00020158880215603858f, 0.00016595731722190976f, 0.0001526286796433851f, 0.0001768683869158849f, 0.00018132741388399154f, 0.00020598061382770538f, 0.0001674074010225013f, 0.0002381193044129759f, 0.00022359278227668256f, 0.000185169221367687f, 0.00020379824854899198f, 0.00018757121870294213f, 0.00013349571963772178f, 0.00016289562336169183f, 0.00019961208454333246f, 0.000174600601894781f, 0.00015107172657735646f, 0.00027310242876410484f, 0.00026525554130785167f, 0.00020122982095927f, 0.00018820702098309994f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_25_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 256,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004943829495459795f, 0.007099727168679237f, 0.0060469964519143105f, 0.005659949500113726f, 0.006739560980349779f, 0.005892300512641668f, 0.007123872172087431f, 0.012203333899378777f, 0.009666841477155685f, 0.009044268168509007f, 0.009307815693318844f, 0.007225422654300928f, 0.008476645685732365f, 0.009508784860372543f, 0.00608852319419384f, 0.011579148471355438f, 0.007435353007167578f, 0.008193977177143097f, 0.007371658459305763f, 0.005857045296579599f, 0.007714184001088142f, 0.01144398283213377f, 0.008816210553050041f, 0.009240630082786083f, 0.007803327403962612f, 0.008019842207431793f, 0.013035016134381294f, 0.00594333466142416f, 0.008092420175671577f, 0.015653396025300026f, 0.01077615562826395f, 0.008707147091627121f, 0.008427165448665619f, 0.006086627021431923f, 0.005226562265306711f, 0.005731767043471336f, 0.00647800974547863f, 0.004808099940419197f, 0.011914560571312904f, 0.0073410626500844955f, 0.008238429203629494f, 0.007942665368318558f, 0.00792279839515686f, 0.008019650354981422f, 0.007723014801740646f, 0.007023299112915993f, 0.006649024318903685f, 0.005476801190525293f, 0.012451696209609509f, 0.0062208594754338264f, 0.012816113419830799f, 0.008456280454993248f, 0.01330023817718029f, 0.009798040613532066f, 0.007364640012383461f, 0.005378031171858311f, 0.005838250275701284f, 0.008617888204753399f, 0.009054317139089108f, 0.00966914277523756f, 0.0071624997071921825f, 0.006729300133883953f, 0.005347807891666889f, 0.006848419550806284f, 0.009938809089362621f, 0.010057175531983376f, 0.004074019845575094f, 0.006423210725188255f, 0.005295888986438513f, 0.007646285928785801f, 0.009759499691426754f, 0.005830610170960426f, 0.010416056029498577f, 0.007139790337532759f, 0.00793915893882513f, 0.012189359404146671f, 0.006260629277676344f, 0.004185815807431936f, 0.009483577683568f, 0.00810906384140253f, 0.008534276857972145f, 0.014015729539096355f, 0.01680663786828518f, 0.00782417319715023f, 0.005608856678009033f, 0.008512183092534542f, 0.008139559999108315f, 0.005110485944896936f, 0.007932881824672222f, 0.006957522127777338f, 0.007587457075715065f, 0.009705974720418453f, 0.00841259304434061f, 0.00790503341704607f, 0.009243825450539589f, 0.007314417976886034f, 0.007577132433652878f, 0.007085546385496855f, 0.00913079734891653f, 0.007943190634250641f, 0.0071021090261638165f, 0.006655631121248007f, 0.00587110873311758f, 0.006715672556310892f, 0.004925096873193979f, 0.016990242525935173f, 0.011359462514519691f, 0.005699986591935158f, 0.005845147650688887f, 0.007920588366687298f, 0.00525042274966836f, 0.005761297885328531f, 0.0057095312513411045f, 0.010413994081318378f, 0.0053519210778176785f, 0.00774927856400609f, 0.0067389956675469875f, 0.005268721841275692f, 0.0074317725375294685f, 0.007683039177209139f, 0.011418377980589867f, 0.009301173500716686f, 0.007944520562887192f, 0.01369937788695097f, 0.009393307380378246f, 0.010635865852236748f, 0.005733732134103775f, 0.007691569160670042f, 0.006488811690360308f, 0.008365971967577934f, 0.007692097220569849f, 0.00827085878700018f, 0.009078070521354675f, 0.006639985367655754f, 0.008358470164239407f, 0.0068685803562402725f, 0.007882468402385712f, 0.011105380952358246f, 0.007893279194831848f, 0.00843835063278675f, 0.007955679669976234f, 0.008165122009813786f, 0.008336841128766537f, 0.010262050665915012f, 0.008098984137177467f, 0.007762116380035877f, 0.008974031545221806f, 0.008274810388684273f, 0.012420863844454288f, 0.009779255837202072f, 0.008156320080161095f, 0.005982551258057356f, 0.007509093265980482f, 0.011058627627789974f, 0.0077623119577765465f, 0.007440089713782072f, 0.00492080906406045f, 0.004299585707485676f, 0.007096461486071348f, 0.007912629283964634f, 0.007701152935624123f, 0.006382096093147993f, 0.007517064455896616f, 0.008206757716834545f, 0.0038358732126653194f, 0.008058171719312668f, 0.009665057994425297f, 0.007768038660287857f, 0.007383889053016901f, 0.009671425446867943f, 0.004892685916274786f, 0.007470336277037859f, 0.008675700053572655f, 0.010928616859018803f, 0.01325817871838808f, 0.009999342262744904f, 0.0081656938418746f, 0.010047362186014652f, 0.01114371232688427f, 0.005069502629339695f, 0.0050340681336820126f, 0.005692964885383844f, 0.005630076862871647f, 0.007421422284096479f, 0.00746353343129158f, 0.005441141314804554f, 0.006386002525687218f, 0.005858420394361019f, 0.004781522322446108f, 0.008464698679745197f, 0.007544060703366995f, 0.009454566985368729f, 0.013334074057638645f, 0.006575669627636671f, 0.006431179121136665f, 0.005978017579764128f, 0.0060759480111300945f, 0.007040133234113455f, 0.010224549099802971f, 0.007050164509564638f, 0.007574860937893391f, 0.007574294228106737f, 0.012249348685145378f, 0.006446062587201595f, 0.012342932634055614f, 0.007273622322827578f, 0.007012097164988518f, 0.006683835759758949f, 0.009757831692695618f, 0.006129167973995209f, 0.012418262660503387f, 0.007515455596148968f, 0.012010285630822182f, 0.006957825738936663f, 0.006937313359230757f, 0.0073917582631111145f, 0.005083971656858921f, 0.01283072866499424f, 0.0072316196747124195f, 0.009239592589437962f, 0.015796560794115067f, 0.009099296294152737f, 0.009066564030945301f, 0.008182159624993801f, 0.01021372340619564f, 0.009172352962195873f, 0.008690578863024712f, 0.007956171408295631f, 0.006915510632097721f, 0.005752962082624435f, 0.01201227679848671f, 0.008245066739618778f, 0.0059477584436535835f, 0.006940209306776524f, 0.008586930111050606f, 0.008567524142563343f, 0.007053185719996691f, 0.006486718542873859f, 0.007516906596720219f, 0.0077064149081707f, 0.008754176087677479f, 0.007114814128726721f, 0.010120070539414883f, 0.009502693079411983f, 0.007869691587984562f, 0.008661425672471523f, 0.007971776649355888f, 0.0056735677644610405f, 0.00692306412383914f, 0.00848351325839758f, 0.007420525420457125f, 0.00642054807394743f, 0.0116068534553051f, 0.011273359879851341f, 0.008552267216145992f, 0.007998798042535782f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_24_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 256,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(2.1760455638286658e-05f, 2.2548299966729246e-05f, 3.006050974363461e-05f, 3.7213907489785925e-05f, 2.037564081547316e-05f, 2.0106024749111384e-05f, 4.8589499783702195e-05f, 2.3770242478349246e-05f, 1.9759354472626e-05f, 2.0902987671433948e-05f, 2.619034239614848e-05f, 1.9870882169925608e-05f, 2.1218027541181073e-05f, 2.2966498363530263e-05f, 3.361601920914836e-05f, 3.29107278957963e-05f, 1.9392369722481817e-05f, 3.5499586374498904e-05f, 2.7871126803802326e-05f, 3.101692709606141e-05f, 4.645540684578009e-05f, 2.270702134410385e-05f, 0.00010387771908426657f, 3.087887307628989e-05f, 2.1559844753937796e-05f, 4.283263115212321e-05f, 2.1370256945374422e-05f, 2.9835124223609455e-05f, 1.4081238987273537e-05f, 2.2329797502607107e-05f, 2.6038007490569726e-05f, 2.0203779058647342e-05f, 2.9844348318874836e-05f, 2.3375465389108285e-05f, 3.567273233784363e-05f, 3.113171987934038e-05f, 2.9021126465522684e-05f, 3.345697405165993e-05f, 3.812713475781493e-05f, 2.8456077416194603e-05f, 2.5677083613118157e-05f, 1.715013786451891e-05f, 2.454759305692278e-05f, 2.1877140170545317e-05f, 4.938436541124247e-05f, 1.788707413652446e-05f, 2.2986172552919015e-05f, 2.9990318580530584e-05f, 3.0617069569416344e-05f, 2.6638395866029896e-05f, 1.6156915080500767e-05f, 2.2847760192235e-05f, 1.344533848168794e-05f, 2.5123177692876197e-05f, 3.425326576689258e-05f, 1.6279309420497157e-05f, 4.00201060983818e-05f, 3.321219628560357e-05f, 3.871242006425746e-05f, 2.321673309779726e-05f, 3.369825208210386e-05f, 2.121205034200102e-05f, 2.1380221369327046e-05f, 3.093714258284308e-05f, 2.1592151824734174e-05f, 1.515368785476312e-05f, 3.3368138247169554e-05f, 2.63139827438863e-05f, 2.2710870325681753e-05f, 4.884619193035178e-05f, 1.9039924154640175e-05f, 2.359996688028332e-05f, 2.958603363367729e-05f, 2.661434882611502e-05f, 1.6035119188018143e-05f, 2.6747522497316822e-05f, 3.611248030210845e-05f, 2.644189225975424e-05f, 3.8171270716702566e-05f, 2.302942993992474e-05f, 2.2442409317591228e-05f, 1.9046054148930125e-05f, 2.6699040972744115e-05f, 2.664312341948971e-05f, 2.1612482669297606e-05f, 3.496435965644196e-05f, 3.557925811037421e-05f, 2.2388425350072794e-05f, 3.646984259830788e-05f, 2.330111965420656e-05f, 2.892552402045112e-05f, 1.8851003915187903e-05f, 3.794978329096921e-05f, 2.6143765353481285e-05f, 2.627616595418658e-05f, 1.754073855408933e-05f, 2.5226743673556484e-05f, 1.809842979128007e-05f, 5.3139789088163525e-05f, 4.8516998504055664e-05f, 3.17390586133115e-05f, 4.102760794921778e-05f, 2.1425137674668804e-05f, 2.56340154010104e-05f, 2.732096800173167e-05f, 2.1160107280593365e-05f, 2.1930945877102204e-05f, 1.9012546545127407e-05f, 2.4980430680443533e-05f, 6.106839282438159e-05f, 2.9697006539208815e-05f, 2.712191599130165e-05f, 2.1625210138154216e-05f, 2.6599791453918442e-05f, 1.645128031668719e-05f, 1.7920583559316583e-05f, 5.2522846090141684e-05f, 2.4252894945675507e-05f, 1.2439575584721752e-05f, 2.72389042947907e-05f, 3.3162665204145014e-05f, 3.3556974813109264e-05f, 3.529190144035965e-05f, 1.7164678865810856e-05f, 3.1354924431070685e-05f, 2.5845278287306428e-05f, 2.8191554520162754e-05f, 2.266589035571087e-05f, 2.6178680855082348e-05f, 2.092469367198646e-05f, 2.878905252146069e-05f, 2.4572857000748627e-05f, 1.6179363228729926e-05f, 2.1816211301484145e-05f, 3.3684402296785265e-05f, 2.1327654394553974e-05f, 3.084799027419649e-05f, 2.5888470190693624e-05f, 3.3500731660751626e-05f, 2.295494414283894e-05f, 1.8433815057505853e-05f, 4.971984162693843e-05f, 4.1590570617699996e-05f, 3.339731119922362e-05f, 2.4467912226100452e-05f, 2.1286139599396847e-05f, 3.411883517401293e-05f, 2.4399347239523195e-05f, 1.2310732927289791e-05f, 1.7716936781653203e-05f, 4.4133867049822584e-05f, 2.6466568670002744e-05f, 3.277939686086029e-05f, 3.31429073412437e-05f, 2.8724613002850674e-05f, 2.5682387786218897e-05f, 2.133521411451511e-05f, 2.709821092139464e-05f, 3.769305840251036e-05f, 2.5645445930422284e-05f, 2.2671909391647205e-05f, 2.643774132593535e-05f, 3.6300898500485346e-05f, 1.5288898794096895e-05f, 4.286233524908312e-05f, 3.3203894417965785e-05f, 2.0976178348064423e-05f, 3.3573724067537114e-05f, 2.362495615670923e-05f, 2.7585405405261554e-05f, 2.1858322725165635e-05f, 1.4763557373953518e-05f, 3.5150645999237895e-05f, 2.2482779968413524e-05f, 1.5027310837467667e-05f, 3.25734363286756e-05f, 2.7738338758354075e-05f, 2.579147621872835e-05f, 8.069469186011702e-05f, 3.673976243590005e-05f, 2.1974945411784574e-05f, 1.8743636246654205e-05f, 2.2097672626841813e-05f, 2.7895379389519803e-05f, 1.8967744836118072e-05f, 2.7120431695948355e-05f, 1.5254126992658712e-05f, 2.2324487872538157e-05f, 1.9256256564403884e-05f, 2.97172628052067e-05f, 2.8487884264905006e-05f, 2.8267739253351465e-05f, 2.230945938208606e-05f, 5.822680759592913e-05f, 2.4995533749461174e-05f, 3.8793219573562965e-05f, 2.471988227625843e-05f, 2.053596472251229e-05f, 5.8047186030307785e-05f, 2.6921325115836225e-05f, 1.8775099306367338e-05f, 4.7194997023325413e-05f, 2.7601930923992768e-05f, 2.8242089683772065e-05f, 3.7628167774528265e-05f, 1.6356749256374314e-05f, 6.467655475717038e-05f, 2.6329749744036235e-05f, 3.0542414606316015e-05f, 2.9544100470957346e-05f, 1.560672535561025e-05f, 2.187098652939312e-05f, 3.204369932063855e-05f, 1.7970261978916824e-05f, 3.6201778129907325e-05f, 2.7922544177272357e-05f, 1.774826341716107e-05f, 1.2522779798018746e-05f, 3.506332359393127e-05f, 1.5302874089684337e-05f, 3.143388676107861e-05f, 2.4558670702390373e-05f, 4.3581494537647814e-05f, 2.1769581508124247e-05f, 3.0194576538633555e-05f, 1.8367742086411454e-05f, 2.309685260115657e-05f, 3.0917261028662324e-05f, 8.516243724443484e-06f, 3.174851372023113e-05f, 3.565715451259166e-05f, 3.448625284363516e-05f, 2.7483716621645726e-05f, 2.3258744477061555e-05f, 2.7448295440990478e-05f, 2.12572849704884e-05f, 1.813087146729231e-05f, 2.490472252247855e-05f, 1.573555164213758e-05f, 3.058382208109833e-05f, 2.2651795006822795e-05f, 2.753045191639103e-05f, 4.012990029877983e-05f, 2.861425673472695e-05f, 3.382570866961032e-05f, 2.0575123926391825e-05f, 2.4537619538023137e-05f, 1.5900504877208732e-05f, 6.675592885585502e-05f, 2.4258873963844962e-05f, 2.0899442461086437e-05f, 2.2063355572754517e-05f, 1.320929641224211e-05f, 2.871860306186136e-05f, 2.401003621343989e-05f, 2.3389440684695728e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_24_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 256,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009248193236999214f, 0.0009583026985637844f, 0.0012775716604664922f, 0.0015815910883247852f, 0.0008659646846354008f, 0.0008545060409232974f, 0.0020650536753237247f, 0.0010102352825924754f, 0.0008397725760005414f, 0.0008883769623935223f, 0.0011130894999951124f, 0.000844512484036386f, 0.0009017661795951426f, 0.000976076174993068f, 0.0014286808436736465f, 0.0013987058773636818f, 0.0008241756586357951f, 0.0015087323263287544f, 0.0011845228727906942f, 0.0013182193506509066f, 0.0019743547309190035f, 0.0009650483843870461f, 0.004414802882820368f, 0.0013123521348461509f, 0.0009162933565676212f, 0.001820386853069067f, 0.0009082359028980136f, 0.0012679927749559283f, 0.0005984526360407472f, 0.0009490163647569716f, 0.001106615294702351f, 0.0008586606127209961f, 0.0012683847453445196f, 0.000993457273580134f, 0.0015160911716520786f, 0.0013230980839580297f, 0.0012333978665992618f, 0.0014219214208424091f, 0.0016204031417146325f, 0.0012093832483515143f, 0.0010912760626524687f, 0.0007288808701559901f, 0.0010432726703584194f, 0.000929778441786766f, 0.002098835539072752f, 0.0007602006662636995f, 0.00097691232804209f, 0.001274588517844677f, 0.001301225391216576f, 0.0011321317870169878f, 0.0006866689072921872f, 0.000971029803622514f, 0.0005714268772862852f, 0.0010677350219339132f, 0.0014557637041434646f, 0.0006918706349097192f, 0.001700854511000216f, 0.0014115183148533106f, 0.0016452778363600373f, 0.0009867111220955849f, 0.0014321757480502129f, 0.0009015121031552553f, 0.00090865942183882f, 0.0013148285215720534f, 0.000917666417080909f, 0.0006440317374654114f, 0.001418145839124918f, 0.0011183442547917366f, 0.0009652120061218739f, 0.0020759631879627705f, 0.0008091967320069671f, 0.0010029985569417477f, 0.0012574064312502742f, 0.0011311097769066691f, 0.0006814925582148135f, 0.001136769657023251f, 0.001534780371002853f, 0.0011237803846597672f, 0.00162227894179523f, 0.000978750758804381f, 0.0009538023732602596f, 0.0008094572694972157f, 0.0011347092222422361f, 0.001132332719862461f, 0.0009185305098071694f, 0.0014859852381050587f, 0.0015121183823794127f, 0.0009515080600976944f, 0.0015499682631343603f, 0.0009902975289151073f, 0.001229334739036858f, 0.0008011676254682243f, 0.0016128657152876258f, 0.0011111099738627672f, 0.001116737024858594f, 0.0007454813458025455f, 0.0010721365688368678f, 0.0007691832724958658f, 0.0022584409452974796f, 0.0020619723945856094f, 0.0013489099219441414f, 0.001743673230521381f, 0.0009105683420784771f, 0.0010894456645473838f, 0.001161141088232398f, 0.0008993045194074512f, 0.0009320651879534125f, 0.0008080332190729678f, 0.0010616682702675462f, 0.002595406724140048f, 0.0012621227651834488f, 0.0011526814196258783f, 0.0009190714336000383f, 0.0011304911458864808f, 0.0006991793634369969f, 0.0007616247748956084f, 0.0022322209551930428f, 0.0010307480115443468f, 0.0005286819650791585f, 0.001157653401605785f, 0.001409413293004036f, 0.001426171394996345f, 0.0014999057166278362f, 0.0007294988026842475f, 0.0013325841864570975f, 0.001098424312658608f, 0.0011981410207226872f, 0.0009633003501221538f, 0.0011125939199700952f, 0.0008892994956113398f, 0.0012235346948727965f, 0.0010443463688716292f, 0.0006876229308545589f, 0.0009271889575757086f, 0.001431587035767734f, 0.0009064252953976393f, 0.0013110395520925522f, 0.001100259949453175f, 0.0014237810391932726f, 0.0009755850769579411f, 0.0007834371062926948f, 0.0021130931563675404f, 0.0017675991402938962f, 0.0014193856623023748f, 0.0010398862650617957f, 0.0009046609047800303f, 0.001450050389394164f, 0.0010369722731411457f, 0.000523206137586385f, 0.000752969819586724f, 0.0018756892532110214f, 0.001124829170294106f, 0.0013931243447586894f, 0.0014085734728723764f, 0.001220796024426818f, 0.0010915014427155256f, 0.0009067466016858816f, 0.001151673961430788f, 0.00160195492208004f, 0.0010899314656853676f, 0.0009635561145842075f, 0.0011236040154471993f, 0.0015427881153300405f, 0.0006497781723737717f, 0.0018216491444036365f, 0.0014111654600128531f, 0.000891487579792738f, 0.0014268832746893167f, 0.0010040606139227748f, 0.0011723797069862485f, 0.000928978668525815f, 0.0006274511688388884f, 0.0014939024113118649f, 0.000955518102273345f, 0.0006386606837622821f, 0.0013843709602952003f, 0.00117887940723449f, 0.0010961376829072833f, 0.003429524367675185f, 0.0015614399453625083f, 0.0009339351672679186f, 0.0007966044940985739f, 0.0009391510393470526f, 0.00118555361405015f, 0.0008061291300691664f, 0.0011526183225214481f, 0.0006483003962785006f, 0.000948790751863271f, 0.0008183908648788929f, 0.001262983656488359f, 0.0012107350630685687f, 0.0012013788800686598f, 0.0009481520392000675f, 0.002474639331921935f, 0.0010623101843521f, 0.0016487117391079664f, 0.00105059496127069f, 0.0008727784734219313f, 0.002467005280777812f, 0.001144156325608492f, 0.000797941698692739f, 0.002005787333473563f, 0.0011730820406228304f, 0.0012002887669950724f, 0.0015991971595212817f, 0.0006951618124730885f, 0.002748753409832716f, 0.0011190143413841724f, 0.0012980526080355048f, 0.0012556242290884256f, 0.0006632858421653509f, 0.0009295169147662818f, 0.0013618571683764458f, 0.0007637361413799226f, 0.001538575510494411f, 0.0011867081047967076f, 0.0007543011452071369f, 0.0005322181386873126f, 0.001490191207267344f, 0.0006503721233457327f, 0.0013359402073547244f, 0.0010437434539198875f, 0.0018522135214880109f, 0.0009252072195522487f, 0.0012832694919779897f, 0.0007806289941072464f, 0.000981616205535829f, 0.0013139835791662335f, 0.0003619403578341007f, 0.001349311787635088f, 0.001515429001301527f, 0.0014656656421720982f, 0.0011680579045787454f, 0.0009884965838864446f, 0.0011665525380522013f, 0.0009034345857799053f, 0.0007705620373599231f, 0.0010584506671875715f, 0.0006687609129585326f, 0.0012998123420402408f, 0.0009627012768760324f, 0.0011700441827997565f, 0.0017055206699296832f, 0.0012161058839410543f, 0.0014375925529748201f, 0.0008744427468627691f, 0.0010428488021716475f, 0.0006757714436389506f, 0.002837127074599266f, 0.001031002146191895f, 0.0008882263209670782f, 0.0009376925881952047f, 0.0005613950779661536f, 0.0012205406092107296f, 0.001020426512695849f, 0.000994051224552095f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_23_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(9.821599815040827e-05f, 9.49040986597538e-05f, 0.00013568424037657678f, 0.000211463455343619f, 0.00010103121894644573f, 0.00016820142627693713f, 0.00011263618944212794f, 0.0001235394593095407f, 0.0001601140247657895f, 0.0001273265079362318f, 0.00019425334176048636f, 0.00010107416164828464f, 0.00010809377272380516f, 0.0001749425136949867f, 0.0001627019519219175f, 0.00014014821499586105f, 9.620124183129519e-05f, 0.0001265774480998516f, 0.00012855121167376637f, 0.00021070292859803885f, 0.00013914096052758396f, 0.00017684737395029515f, 0.00011461634858278558f, 9.565817163093016e-05f, 8.321619679918513e-05f, 0.000155848654685542f, 0.00014353542064782232f, 0.00016274741210509092f, 0.00011111117055406794f, 0.00012513381079770625f, 0.00011225405614823103f, 0.0001634977088542655f, 0.0001184244902106002f, 8.388386049773544e-05f, 0.00010399729944765568f, 0.00012456948752515018f, 0.00011592672672122717f, 7.234936492750421e-05f, 0.00014821429795119911f, 0.00029552451451309025f, 0.00010123815445695072f, 0.00020538634271360934f, 0.0001994669873965904f, 0.00010708385525504127f, 8.675541903357953e-05f, 0.00010544862743699923f, 0.00013036829477641732f, 0.00018331989122088999f, 0.0001054102904163301f, 7.382190960925072e-05f, 0.00010909610136877745f, 0.00016505132953170687f, 0.00011389995052013546f, 0.00010635510261636227f, 7.605199789395556e-05f, 0.00011966101737925783f, 9.197260806104168e-05f, 0.00014965109585318714f, 9.496980055700988e-05f, 9.741372196003795e-05f, 0.00019782983872573823f, 0.00017422542441636324f, 8.509305189363658e-05f, 0.00021108757937327027f, 0.00013445074728224427f, 0.00018330055172555149f, 0.00014365956303663552f, 7.788673974573612e-05f, 7.77860768721439e-05f, 9.208884875988588e-05f, 0.00018832537170965225f, 0.00020884120021946728f, 0.00010631506302161142f, 0.00012482515012379736f, 0.00014387709961738437f, 0.00010919570195255801f, 0.00012780480028595775f, 0.00014265456411521882f, 0.00013703975128009915f, 0.0001787836808944121f, 0.00014086512965150177f, 0.00010021666821558028f, 7.130599988158792e-05f, 0.00012132710980949923f, 0.00011341505160089582f, 0.000258506799582392f, 8.20630302769132e-05f, 0.0001681600697338581f, 0.0001271493820240721f, 0.00016345070616807789f, 0.00013339912402443588f, 0.00011041170364478603f, 0.0001663428993197158f, 0.00010378604929428548f, 0.0001984192058444023f, 0.00013426001532934606f, 0.00014407616981770843f, 0.00017757725436240435f, 0.00017920360551215708f, 0.00015548017108812928f, 0.00027915413375012577f, 0.0001278900890611112f, 0.00014801727957092226f, 0.0001345999917248264f, 0.0001351791579509154f, 8.79240469657816e-05f, 0.00026349720428697765f, 0.00018985140195582062f, 0.00015377579256892204f, 0.00028287735767662525f, 0.00015987211372703314f, 7.778747385600582e-05f, 0.00011466875730548054f, 7.97035318100825e-05f, 0.00010058030602522194f, 0.00014282885240390897f, 0.0001839073811424896f, 0.00016514574235770851f, 0.0001110091179725714f, 7.773981633363292e-05f, 0.0001488448033342138f, 0.000236721447436139f, 0.00010788473446154967f, 9.736225911183283e-05f, 0.00011717629240592942f, 0.0001038264308590442f, 0.00013515300815925002f, 0.0001225942833116278f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_23_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0041741798631846905f, 0.004033423960208893f, 0.00576658034697175f, 0.00898719672113657f, 0.004293826874345541f, 0.007148560602217913f, 0.004787038080394268f, 0.0052504269406199455f, 0.0068048457615077496f, 0.005411376245319843f, 0.008255766704678535f, 0.0042956518009305f, 0.0045939851552248f, 0.00743505684658885f, 0.006914832629263401f, 0.005956299137324095f, 0.0040885526686906815f, 0.00537954131141305f, 0.0054634264670312405f, 0.008954874239861965f, 0.005913490895181894f, 0.007516013458371162f, 0.004871194716542959f, 0.004065472166985273f, 0.0035366881638765335f, 0.006623567547649145f, 0.0061002555303275585f, 0.006916765123605728f, 0.004722224548459053f, 0.005318186711519957f, 0.004770797211676836f, 0.0069486526772379875f, 0.005033040884882212f, 0.0035650639329105616f, 0.0044198851101100445f, 0.005294203292578459f, 0.004926885943859816f, 0.0030748480930924416f, 0.006299107801169157f, 0.012559792026877403f, 0.004302621353417635f, 0.008728919550776482f, 0.00847734697163105f, 0.004551063757389784f, 0.003687105141580105f, 0.004481566604226828f, 0.005540652200579643f, 0.0077910954132676125f, 0.004479937255382538f, 0.0031374311074614525f, 0.004636584315448999f, 0.007014681119471788f, 0.00484074791893363f, 0.0045200916938483715f, 0.0032322099432349205f, 0.005085593089461327f, 0.00390883581712842f, 0.006360171362757683f, 0.004036216530948877f, 0.004140083212405443f, 0.008407767862081528f, 0.007404580246657133f, 0.003616454778239131f, 0.00897122174501419f, 0.005714156664907932f, 0.007790273521095514f, 0.006105531007051468f, 0.0033101863227784634f, 0.003305908292531967f, 0.003913776017725468f, 0.00800382811576128f, 0.008875750936567783f, 0.004518390167504549f, 0.00530506856739521f, 0.006114776711910963f, 0.004640817176550627f, 0.005431703757494688f, 0.00606281915679574f, 0.00582418916746974f, 0.007598306052386761f, 0.0059867678210139275f, 0.004259208217263222f, 0.0030305050313472748f, 0.005156402010470629f, 0.004820139613002539f, 0.010986538603901863f, 0.003487678710371256f, 0.007146802730858326f, 0.005403848364949226f, 0.006946654990315437f, 0.005669462960213423f, 0.004692497197538614f, 0.007069572806358337f, 0.004410907160490751f, 0.008432815782725811f, 0.005706050433218479f, 0.006123237311840057f, 0.00754703301936388f, 0.007616152986884117f, 0.006607907358556986f, 0.011864050291478634f, 0.0054353284649550915f, 0.006290734279900789f, 0.005720499437302351f, 0.005745113827288151f, 0.0037367718759924173f, 0.01119863148778677f, 0.008068684488534927f, 0.006535470951348543f, 0.012022287584841251f, 0.006794564891606569f, 0.0033059674315154552f, 0.004873421974480152f, 0.00338740018196404f, 0.004274663049727678f, 0.006070225965231657f, 0.007816063240170479f, 0.007018693722784519f, 0.004717887379229069f, 0.003303942270576954f, 0.006325904279947281f, 0.010060661472380161f, 0.004585101269185543f, 0.004137896001338959f, 0.004979992285370827f, 0.00441262312233448f, 0.0057440027594566345f, 0.005210257135331631f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(3.608128099585883e-05f, 2.1435063899843954e-05f, 3.259197546867654e-05f, 3.6876390367979184e-05f, 2.1281921362970024e-05f, 3.7188186979619786e-05f, 2.9680544685106725e-05f, 3.701863897731528e-05f, 4.141192403039895e-05f, 3.460107109276578e-05f, 2.5437104341108352e-05f, 2.5415787604288198e-05f, 3.9325026591541246e-05f, 4.1123923438135535e-05f, 5.147181582287885e-05f, 4.156086652074009e-05f, 3.278864824096672e-05f, 3.9527574699604884e-05f, 6.822599971201271e-05f, 3.471056334092282e-05f, 2.977306576212868e-05f, 3.390048004803248e-05f, 2.150377258658409e-05f, 2.5859128072625026e-05f, 3.8622998545179144e-05f, 2.4108070647343993e-05f, 4.5765853428747505e-05f, 3.6082816222915426e-05f, 6.551749538630247e-05f, 4.155921487836167e-05f, 4.4029653508914635e-05f, 2.949006920971442e-05f, 3.782155908993445e-05f, 6.157691677799448e-05f, 3.23177118843887e-05f, 3.934091728297062e-05f, 4.178983726887964e-05f, 4.5767017581965774e-05f, 4.177391019766219e-05f, 6.229514110600576e-05f, 3.179085615556687e-05f, 4.908865594188683e-05f, 3.3169217203976586e-05f, 4.2178267904091626e-05f, 2.935801967396401e-05f, 3.7015724956290796e-05f, 3.550689871190116e-05f, 3.245341213187203e-05f, 6.821136048529297e-05f, 3.3254942536586896e-05f, 2.769073580566328e-05f, 5.0004418881144375e-05f, 4.493039887165651e-05f, 6.974748248467222e-05f, 5.528423571377061e-05f, 2.7871456040884368e-05f, 3.1432442483492196e-05f, 3.263759208493866e-05f, 4.8332614824175835e-05f, 2.0475343262660317e-05f, 4.3684831325663254e-05f, 4.8692923883209005e-05f, 2.8949036277481355e-05f, 3.768622991628945e-05f, 4.018821709905751e-05f, 6.065592970116995e-05f, 3.489809387247078e-05f, 3.830601417575963e-05f, 1.9912238713004626e-05f, 3.527791704982519e-05f, 2.9882148737669922e-05f, 4.5710963604506105e-05f, 5.622544631478377e-05f, 3.197242403985001e-05f, 4.385069405543618e-05f, 3.389347330085002e-05f, 2.8293146897340193e-05f, 2.7920084903598763e-05f, 5.9251942730043083e-05f, 3.078679947066121e-05f, 3.5588724131230265e-05f, 2.3092346964403987e-05f, 4.047776019433513e-05f, 3.0011429771548137e-05f, 3.008459862030577e-05f, 2.8938335162820294e-05f, 3.698162981891073e-05f, 4.048864502692595e-05f, 3.936395296477713e-05f, 2.8652726541622542e-05f, 2.823229988280218e-05f, 2.9572694984381087e-05f, 4.49538383691106e-05f, 4.024100780952722e-05f, 6.444067548727617e-05f, 5.4155821999302134e-05f, 5.7420482335146517e-05f, 3.832148286164738e-05f, 3.102807022514753e-05f, 4.6320703404489905e-05f, 2.5846662538242526e-05f, 4.1448343836236745e-05f, 3.696830026456155e-05f, 5.273501301417127e-05f, 3.547609958332032e-05f, 3.47515415342059e-05f, 2.4032702640397474e-05f, 5.9314625104889274e-05f, 3.841282887151465e-05f, 4.321075903135352e-05f, 3.548550739651546e-05f, 3.756492515094578e-05f, 2.789817335724365e-05f, 4.971073940396309e-05f, 4.477710899664089e-05f, 6.349362956825644e-05f, 3.603142613428645e-05f, 3.472299795248546e-05f, 3.521844701026566e-05f, 2.7927375413128175e-05f, 5.4692856792826205e-05f, 4.9060836317949e-05f, 2.8900811230414547e-05f, 4.2623640183592215e-05f, 2.4795592253212817e-05f, 3.481969906715676e-05f, 3.477389691397548e-05f, 3.924929478671402e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015334544004872441f, 0.000910990172997117f, 0.0013851589756086469f, 0.0015672465087845922f, 0.0009044816251844168f, 0.0015804979484528303f, 0.001261423109099269f, 0.0015732920728623867f, 0.0017600067658349872f, 0.0014705454232171178f, 0.001081076916307211f, 0.0010801709722727537f, 0.0016713135410100222f, 0.0017477667424827814f, 0.002187552163377404f, 0.001766336732544005f, 0.001393517479300499f, 0.0016799218719825149f, 0.0028996048495173454f, 0.0014751988928765059f, 0.0012653552694246173f, 0.00144077034201473f, 0.0009139103349298239f, 0.001099012908525765f, 0.001641477458178997f, 0.001024593017064035f, 0.0019450488034635782f, 0.0015335195930674672f, 0.002784493612125516f, 0.0017662665341049433f, 0.0018712602322921157f, 0.0012533279368653893f, 0.0016074161976575851f, 0.002617018762975931f, 0.0013735027750954032f, 0.001671988982707262f, 0.001776068122126162f, 0.0019450982799753547f, 0.0017753911670297384f, 0.002647543326020241f, 0.0013511113356798887f, 0.0020862678065896034f, 0.001409691758453846f, 0.0017925762804225087f, 0.0012477157870307565f, 0.0015731682069599628f, 0.0015090431552380323f, 0.0013792699901387095f, 0.0028989827260375023f, 0.0014133350923657417f, 0.0011768562253564596f, 0.0021251877769827843f, 0.0019095418974757195f, 0.00296426797285676f, 0.0023495799396187067f, 0.0011845368426293135f, 0.0013358788564801216f, 0.0013870976399630308f, 0.002054136013612151f, 0.0008702020859345794f, 0.001856605289503932f, 0.002069449285045266f, 0.0012303340481594205f, 0.0016016648150980473f, 0.0017079991521313787f, 0.002577876904979348f, 0.0014831689186394215f, 0.0016280056443065405f, 0.0008462701225653291f, 0.0014993114164099097f, 0.0012699912767857313f, 0.0019427159568294883f, 0.0023895814083516598f, 0.001358827925287187f, 0.0018636544700711966f, 0.0014404725516214967f, 0.0012024587485939264f, 0.001186603563837707f, 0.0025182075332850218f, 0.0013084389502182603f, 0.0015125207137316465f, 0.0009814247023314238f, 0.0017203048337250948f, 0.0012754857307299972f, 0.0012785954168066382f, 0.0012298792134970427f, 0.0015717193018645048f, 0.0017207673517987132f, 0.0016729679191485047f, 0.0012177408207207918f, 0.001199872698634863f, 0.001256839488632977f, 0.0019105380633845925f, 0.0017102428246289492f, 0.002738728653639555f, 0.0023016224149614573f, 0.002440370386466384f, 0.0016286629252135754f, 0.0013186929281800985f, 0.001968629891052842f, 0.0010984831023961306f, 0.001761554623953998f, 0.0015711527084931731f, 0.00224123802036047f, 0.0015077341813594103f, 0.0014769404660910368f, 0.0010213898494839668f, 0.0025208715815097094f, 0.00163254514336586f, 0.0018364571733400226f, 0.0015081340679898858f, 0.0015965092461556196f, 0.0011856723576784134f, 0.0021127064246684313f, 0.0019030270632356405f, 0.0026984792202711105f, 0.001531335641629994f, 0.0014757274184376001f, 0.0014967839233577251f, 0.0011869134614244103f, 0.002324446337297559f, 0.002085085492581129f, 0.0012282844400033355f, 0.0018115047132596374f, 0.0010538126807659864f, 0.0014798371121287346f, 0.0014778906479477882f, 0.001668095006607473f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00010129460861207917f, 9.019162826007232e-05f, 9.27825749386102e-05f, 0.00018218236800748855f, 0.00011948888277402148f, 0.00043244980042800307f, 0.00014958539395593107f, 0.00016458712343592197f, 9.662839875090867e-05f, 8.979569975053892e-05f, 0.00016780078294686973f, 0.00013306442997418344f, 0.00021968799410387874f, 0.00012195917224744335f, 0.0001447118556825444f, 0.0002329609269509092f, 0.000180198039743118f, 0.0001531013404019177f, 0.0001875269808806479f, 0.00013615930220112205f, 0.0001818399177864194f, 0.00022006602375768125f, 0.00018334835476707667f, 0.00015265074034687132f, 0.00013058901822660118f, 0.00019270487246103585f, 0.00015788314340170473f, 0.00012644374510273337f, 0.00015609322872478515f, 9.968759695766494e-05f, 0.00024725095136091113f, 0.00011692156840581447f, 0.0001140205204137601f, 0.00014777679461985826f, 8.318509208038449e-05f, 0.0001113561520469375f, 0.00022013892885297537f, 7.913787703728303e-05f, 0.00017087723244912922f, 0.000153507586219348f, 0.00021200232731644064f, 0.0002508843317627907f, 0.0001668526529101655f, 0.0001886796671897173f, 0.00020229122310411185f, 9.331508044851944e-05f, 0.00012882178998552263f, 0.0001998842490138486f, 0.0001563758123666048f, 8.686872752150521e-05f, 9.45264837355353e-05f, 9.968650556402281e-05f, 0.00010174915951211005f, 0.00015417346730828285f, 0.00021455693058669567f, 0.00020156534446869045f, 0.00010300068242941052f, 0.00010784648475237191f, 0.0001976329367607832f, 0.00017216318519786f, 0.0001807307853596285f, 0.00020766475063282996f, 0.00020118130487389863f, 0.00016736034012865275f, 0.00017102992569562048f, 0.00010566053242655471f, 0.00013149244477972388f, 0.00015253142919391394f, 0.00016462964413221925f, 0.00013711607607547194f, 0.00015249219723045826f, 0.00011750436533475295f, 0.00015251789591275156f, 0.00018031243234872818f, 0.00014028606528881937f, 0.0001798340235836804f, 0.0001987664436455816f, 8.413188334088773e-05f, 0.00020671136735472828f, 0.00010843910422408953f, 0.0001651811326155439f, 0.00012636360770557076f, 0.00019942167273256928f, 0.000249926233664155f, 4.245856689522043e-05f, 0.00018964587070513517f, 0.00014252767141442746f, 0.00014649212243966758f, 0.00010749463399406523f, 0.00018168102542404085f, 0.00017490613390691578f, 0.00016226497245952487f, 0.00020656603737734258f, 0.00010362557077314705f, 0.00013186672003939748f, 4.231715502100997e-05f, 0.0001364714844385162f, 0.00018130258831661195f, 0.00021667579130735248f, 0.00010610788740450516f, 0.00017690641107037663f, 0.00014145618479233235f, 0.000176435467437841f, 0.00016661363770253956f, 0.00013851920084562153f, 0.00013064354425296187f, 8.444026025244966e-05f, 0.00014439772348850965f, 0.000154179593664594f, 0.00018172409909311682f, 0.00021475832909345627f, 0.00014835191541351378f, 0.00016063818475231528f, 0.00016728103219065815f, 0.00023659459839109331f, 0.00017500405374448746f, 0.00016242433048319072f, 0.00013824604684486985f, 0.0001525613624835387f, 0.0002646771026775241f, 0.0001349716039840132f, 0.0002198219153797254f, 0.0001542679819976911f, 0.00013118580682203174f, 0.0002000950917135924f, 5.340799907571636e-05f, 0.00018680799985304475f, 0.0001649032928980887f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004305020906031132f, 0.0038331442046910524f, 0.003943259362131357f, 0.007742750458419323f, 0.005078277550637722f, 0.01837911643087864f, 0.006357379257678986f, 0.006994952913373709f, 0.004106706939637661f, 0.0038163170684129f, 0.007131533231586218f, 0.005655237939208746f, 0.009336739778518677f, 0.00518326461315155f, 0.0061502535827457905f, 0.009900839067995548f, 0.0076584164053201675f, 0.006506806705147028f, 0.00796989630907774f, 0.005786770489066839f, 0.00772819621488452f, 0.009352806024253368f, 0.007792304735630751f, 0.006487656384706497f, 0.005550032947212458f, 0.008189956657588482f, 0.006710033398121595f, 0.005373859312385321f, 0.0066339620389044285f, 0.004236722830682993f, 0.010508165694773197f, 0.004969166591763496f, 0.004845872055739164f, 0.006280513945966959f, 0.0035353663843125105f, 0.004732636269181967f, 0.009355904534459114f, 0.003363359719514847f, 0.0072622825391590595f, 0.006524072028696537f, 0.00901009887456894f, 0.010662583634257317f, 0.00709123769775033f, 0.008018885739147663f, 0.008597376756370068f, 0.003965890966355801f, 0.005474925972521305f, 0.008495080284774303f, 0.006645971909165382f, 0.003691920777782798f, 0.004017375409603119f, 0.004236676264554262f, 0.004324339330196381f, 0.0065523721277713776f, 0.009118669666349888f, 0.00856652669608593f, 0.00437752902507782f, 0.004583475645631552f, 0.008399399928748608f, 0.00731693534180522f, 0.007681058254092932f, 0.008825751952826977f, 0.008550205267965794f, 0.007112814113497734f, 0.00726877199485898f, 0.004490572493523359f, 0.005588429048657417f, 0.006482585798949003f, 0.006996759679168463f, 0.005827432963997126f, 0.006480918265879154f, 0.004993935581296682f, 0.006482010241597891f, 0.007663278374820948f, 0.0059621576219797134f, 0.0076429457403719425f, 0.008447573520243168f, 0.003575605107471347f, 0.008785232901573181f, 0.0046086618676781654f, 0.0070201982744038105f, 0.005370453465729952f, 0.008475420996546745f, 0.010621864348649979f, 0.001804489060305059f, 0.008059949614107609f, 0.006057425867766142f, 0.006225915160030127f, 0.004568521864712238f, 0.007721443194895983f, 0.007433510385453701f, 0.006896261125802994f, 0.008779056370258331f, 0.004404086619615555f, 0.005604335572570562f, 0.0017984791193157434f, 0.005800038110464811f, 0.007705359719693661f, 0.009208721108734608f, 0.004509584978222847f, 0.0075185224413871765f, 0.006011887453496456f, 0.007498507387936115f, 0.007081079762428999f, 0.005887066014111042f, 0.005552350543439388f, 0.003588711144402623f, 0.006136903073638678f, 0.006552632432430983f, 0.007723274175077677f, 0.009127228520810604f, 0.006304956506937742f, 0.006827122997492552f, 0.007109443657100201f, 0.010055270045995712f, 0.00743767200037837f, 0.006903034169226885f, 0.00587545707821846f, 0.006483857985585928f, 0.011248776689171791f, 0.005736293271183968f, 0.009342431090772152f, 0.006556388922035694f, 0.005575396586209536f, 0.008504041470587254f, 0.0022698398679494858f, 0.007939339615404606f, 0.007008390035480261f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_20_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(3.740427564480342e-05f, 2.2048878236091696e-05f, 3.704242772073485e-05f, 3.9117388951126486e-05f, 4.566821371554397e-05f, 4.810792961507104e-05f, 5.535873424378224e-05f, 4.87949037051294e-05f, 3.768175156437792e-05f, 3.8143312849570066e-05f, 5.9207133745076135e-05f, 3.610068597481586e-05f, 4.2371757444925606e-05f, 3.312877015559934e-05f, 3.2710038794903085e-05f, 4.603912748279981e-05f, 4.787082434631884e-05f, 3.627783735282719e-05f, 3.68720393453259e-05f, 4.614902354660444e-05f, 3.856286275549792e-05f, 4.0002742025535554e-05f, 3.546637890394777e-05f, 4.2376050259917974e-05f, 4.6440938604064286e-05f, 4.378629455459304e-05f, 5.005630373489112e-05f, 4.1593324567656964e-05f, 3.810799171333201e-05f, 4.86602948512882e-05f, 5.793316813651472e-05f, 7.17998409527354e-05f, 3.675697007565759e-05f, 2.6203437300864607e-05f, 0.00010071962606161833f, 5.599744326900691e-05f, 5.082750431029126e-05f, 1.8616610759636387e-05f, 3.7843085010536015e-05f, 4.0847236959962174e-05f, 6.461123848566785e-05f, 3.677681161207147e-05f, 4.371992326923646e-05f, 4.890257696388289e-05f, 6.356985250022262e-05f, 3.883727913489565e-05f, 2.1110556190251373e-05f, 5.19481000083033e-05f, 4.6407778427237645e-05f, 3.386492971912958e-05f, 3.3841126423794776e-05f, 4.767874634126201e-05f, 5.1589733629953116e-05f, 3.089310848736204e-05f, 3.499256490613334e-05f, 4.4666885514743626e-05f, 3.791282870224677e-05f, 3.483845648588613e-05f, 4.2394825868541375e-05f, 5.4815707699162886e-05f, 8.173807873390615e-05f, 3.934098640456796e-05f, 5.790934665128589e-05f, 5.895760114071891e-05f, 6.30128852208145e-05f, 6.0738984757335857e-05f, 4.1603954741731286e-05f, 5.039143798057921e-05f, 4.4089771108701825e-05f, 5.082036295789294e-05f, 4.366324355942197e-05f, 3.5387627576710656e-05f, 4.318595165386796e-05f, 5.359283750294708e-05f, 3.9681344787823036e-05f, 4.837796950596385e-05f, 4.5641027099918574e-05f, 2.6784033252624795e-05f, 2.1833304344909266e-05f, 4.356955105322413e-05f, 6.800087430747226e-05f, 4.432264177012257e-05f, 3.9958860725164413e-05f, 7.135191845009103e-05f, 4.888795592705719e-05f, 3.574045331333764e-05f, 4.715085378848016e-05f, 4.5749991841148585e-05f, 4.679592893808149e-05f, 3.891523738275282e-05f, 6.694652984151617e-05f, 4.1409890400245786e-05f, 4.4191681809024885e-05f, 4.2497162212384865e-05f, 5.673290797858499e-05f, 3.687628122861497e-05f, 5.239655001787469e-05f, 3.9303500670939684e-05f, 4.2884141294052824e-05f, 5.616488851956092e-05f, 5.445129136205651e-05f, 3.784465661738068e-05f, 4.2433690396137536e-05f, 4.334091136115603e-05f, 4.983746475772932e-05f, 4.3606898543657735e-05f, 6.809694605180994e-05f, 4.768720827996731e-05f, 3.999623004347086e-05f, 4.1756276914384216e-05f, 2.994247552123852e-05f, 3.793238283833489e-05f, 5.485605288413353e-05f, 2.7134406991535798e-05f, 6.15934404777363e-05f, 4.49722538178321e-05f, 4.3282827391522005e-05f, 2.840271554305218e-05f, 4.56301131634973e-05f, 4.484470628085546e-05f, 4.863078356720507e-05f, 3.920828385162167e-05f, 4.42118507635314e-05f, 4.409412940731272e-05f, 5.54746511625126e-05f, 7.664396252948791e-05f, 4.089784124516882e-05f, 7.130399899324402e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_20_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015896817203611135f, 0.0009370773332193494f, 0.0015743031399324536f, 0.0016624890267848969f, 0.0019408990629017353f, 0.002044586930423975f, 0.0023527462035417557f, 0.002073783427476883f, 0.0016014743596315384f, 0.0016210906906053424f, 0.0025163032114505768f, 0.0015342790866270661f, 0.0018007996259257197f, 0.0014079727698117495f, 0.0013901765923947096f, 0.0019566628616303205f, 0.0020345100201666355f, 0.0015418080147355795f, 0.001567061641253531f, 0.001961333444342017f, 0.0016389215597882867f, 0.0017001164378598332f, 0.0015073211397975683f, 0.0018009820487350225f, 0.0019737398251891136f, 0.0018609174294397235f, 0.00212739291600883f, 0.001767716254107654f, 0.0016195896314457059f, 0.0020680625457316637f, 0.0024621596094220877f, 0.003051493316888809f, 0.0015621711499989033f, 0.001113646081648767f, 0.004280583932995796f, 0.0023798912297934294f, 0.0021601689513772726f, 0.0007912059081718326f, 0.001608331105671823f, 0.001736007514409721f, 0.0027459776028990746f, 0.0015630144625902176f, 0.0018580966861918569f, 0.002078359480947256f, 0.002701718593016267f, 0.0016505842795595527f, 0.0008971986244432628f, 0.002207794226706028f, 0.0019723305013030767f, 0.00143925950396806f, 0.001438247854821384f, 0.002026346744969487f, 0.00219256361015141f, 0.0013129570288583636f, 0.0014871839666739106f, 0.0018983426271006465f, 0.0016112951561808586f, 0.0014806343242526054f, 0.0018017800757661462f, 0.002329667564481497f, 0.003473868127912283f, 0.0016719918930903077f, 0.0024611472617834806f, 0.0025056980084627867f, 0.0026780476327985525f, 0.0025814068503677845f, 0.0017681680619716644f, 0.002141636097803712f, 0.0018738151993602514f, 0.002159865340217948f, 0.001855687820352614f, 0.001503974199295044f, 0.0018354029161855578f, 0.0022776955738663673f, 0.0016864570789039135f, 0.0020560636185109615f, 0.001939743640832603f, 0.0011383213568478823f, 0.0009279153891839087f, 0.0018517058342695236f, 0.002890037139877677f, 0.0018837122479453683f, 0.0016982515808194876f, 0.0030324566178023815f, 0.002077738055959344f, 0.001518969307653606f, 0.0020039111841470003f, 0.0019443746423348784f, 0.0019888270180672407f, 0.001653897576034069f, 0.002845227485522628f, 0.0017599202692508698f, 0.0018781464314088225f, 0.0018061293521896005f, 0.0024111485108733177f, 0.001567241968587041f, 0.0022268532775342464f, 0.0016703987494111061f, 0.0018225759267807007f, 0.00238700769841671f, 0.002314179902896285f, 0.0016083978116512299f, 0.0018034317763522267f, 0.0018419886473566294f, 0.0021180922631174326f, 0.0018532931571826339f, 0.002894120290875435f, 0.0020267062354832888f, 0.0016998397186398506f, 0.0017746416851878166f, 0.0012725552078336477f, 0.001612126245163381f, 0.002331382129341364f, 0.0011532122734934092f, 0.002617721213027835f, 0.001911320723593235f, 0.0018395200604572892f, 0.0012071153614670038f, 0.0019392797257751226f, 0.0019058999605476856f, 0.0020668082870543003f, 0.00166635203640908f, 0.0018790035974234343f, 0.001874000416137278f, 0.002357672667130828f, 0.0032573682256042957f, 0.0017381582874804735f, 0.0030304198153316975f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00015286571579053998f, 0.00023262380273081362f, 0.0002180135197704658f, 0.00014269573148339987f, 0.00016187145956791937f, 0.00014713917335029691f, 0.000171029576449655f, 0.00011284695938229561f, 0.00014503809507004917f, 0.0001324130716966465f, 0.00013432458217721432f, 0.00014601118164137006f, 0.00012573914136737585f, 0.0001720959262456745f, 0.00017090459004975855f, 0.00012747135770041496f, 0.00024253150331787765f, 0.00015250850992742926f, 0.00018654984887689352f, 0.00012458152195904404f, 0.0001653294311836362f, 0.00015970390813890845f, 0.00014920152898412198f, 0.00016475505253765732f, 0.00017457517969887704f, 0.00019132606394123286f, 4.747411367134191e-05f, 8.0055498983711e-05f, 7.343810284510255e-05f, 0.0001824202627176419f, 0.00010667004971764982f, 0.00022756906400900334f, 0.0001567102299304679f, 0.000180865143192932f, 0.00011800512584159151f, 0.0001410406839568168f, 0.00016793981194496155f, 0.00012018644338240847f, 0.00017069096793420613f, 0.00018072151578962803f, 0.000205519754672423f, 0.0001457256730645895f, 0.00014609679055865854f, 0.00018662142974790186f, 0.00021173818095121533f, 0.00010866083903238177f, 0.0001780826278263703f, 0.0001035077657434158f, 0.00011519628606038168f, 0.00014558093971572816f, 0.00012369683827273548f, 0.00015975715359672904f, 0.00014887531870044768f, 0.00010787454812088981f, 0.00010102224041474983f, 0.00015879067359492183f, 0.0001332961255684495f, 0.0002701025805436075f, 0.00021968121291138232f, 0.00012633681762963533f, 0.00016554583271499723f, 0.0001347960060229525f, 0.00017275544814765453f, 9.832342038862407e-05f, 0.00021361785184126347f, 0.00020861608209088445f, 0.00013426032091956586f, 0.00019461626652628183f, 0.00020986050367355347f, 6.269378354772925e-05f, 0.00020839125500060618f, 0.00011227764480281621f, 0.00015893236559350044f, 4.4780481402995065e-05f, 0.00016070829587988555f, 0.0002378094504820183f, 0.00013738428242504597f, 0.00018241962243337184f, 0.0001696887775324285f, 0.0001825390791054815f, 0.00013339766883291304f, 0.00019926672393921763f, 0.00013645977014675736f, 4.5905155275249854e-05f, 0.0002475875080563128f, 0.00019842857727780938f, 0.0001194703218061477f, 0.0001593140186741948f, 0.0001989940501516685f, 6.947328802198172e-05f, 0.00021426897728815675f, 0.00012296201020944864f, 0.00010980817023664713f, 0.00012732460163533688f, 0.0001785651984391734f, 0.00014848023420199752f, 0.00012118562153773382f, 0.00017713947454467416f, 0.0001759277074597776f, 0.00026863833772949874f, 0.00022063580399844795f, 0.00015754708147142082f, 0.00017056911019608378f, 0.00015410127525683492f, 0.00012353189231362194f, 0.00017610446957405657f, 0.00012715134653262794f, 0.00023263202456291765f, 0.00021877759718336165f, 0.00019923409854527563f, 0.00021210940030869097f, 0.00020713050616905093f, 0.00020508436136879027f, 0.00011730672122212127f, 0.00011291404371149838f, 0.00012590759433805943f, 0.0001133698460762389f, 0.00013473724538926035f, 0.0002229320234619081f, 8.634654659545049e-05f, 0.00014233273395802826f, 0.0001621065312065184f, 0.0001052815787261352f, 0.00018026839825324714f, 0.00023490344756282866f, 5.820222577312961e-05f, 0.00024718252825550735f, 0.00014842809468973428f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006496792659163475f, 0.009886511601507664f, 0.009265574626624584f, 0.006064568180590868f, 0.006879536900669336f, 0.006253414787352085f, 0.007268757093697786f, 0.00479599554091692f, 0.006164118647575378f, 0.0056275553070008755f, 0.005708794575184584f, 0.006205474957823753f, 0.005343913100659847f, 0.0073140766471624374f, 0.00726344482973218f, 0.005417532287538052f, 0.01030758861452341f, 0.006481611635535955f, 0.007928368635475636f, 0.005294714588671923f, 0.0070265005342662334f, 0.006787416059523821f, 0.006341064814478159f, 0.007002089638262987f, 0.007419445086270571f, 0.008131357841193676f, 0.002017649821937084f, 0.0034023586194962263f, 0.003121119225397706f, 0.007752860896289349f, 0.0045334771275520325f, 0.00967168528586626f, 0.006660184822976589f, 0.0076867686584591866f, 0.005015217699110508f, 0.005994229111820459f, 0.007137442007660866f, 0.005107923876494169f, 0.007254366297274828f, 0.007680664304643869f, 0.00873458944261074f, 0.006193341221660376f, 0.006209113635122776f, 0.00793141033500433f, 0.008998872712254524f, 0.004618085455149412f, 0.00756851164624095f, 0.004399079829454422f, 0.004895842168480158f, 0.00618718983605504f, 0.005257115699350834f, 0.006789678707718849f, 0.006327201146632433f, 0.004584668204188347f, 0.004293445032089949f, 0.006748603191226721f, 0.005665085278451443f, 0.011479360051453114f, 0.009336451068520546f, 0.0053693149238824844f, 0.007035697810351849f, 0.0057288301177322865f, 0.0073421066626906395f, 0.0041787452064454556f, 0.009078758768737316f, 0.008866183459758759f, 0.005706063471734524f, 0.008271191269159317f, 0.008919071406126022f, 0.002664485713467002f, 0.008856628090143204f, 0.00477179978042841f, 0.0067546251229941845f, 0.0019031703704968095f, 0.006830102298408747f, 0.01010690163820982f, 0.005838831886649132f, 0.007752833887934685f, 0.007211773190647364f, 0.007757910527288914f, 0.005669401027262211f, 0.00846883561462164f, 0.005799539852887392f, 0.0019509689882397652f, 0.010522468946874142f, 0.008433214388787746f, 0.005077488720417023f, 0.006770845502614975f, 0.008457247167825699f, 0.00295261456631124f, 0.009106431156396866f, 0.005225885193794966f, 0.004666847176849842f, 0.005411295220255852f, 0.007589020766317844f, 0.006310409866273403f, 0.005150388926267624f, 0.0075284275226294994f, 0.0074769277125597f, 0.011417129077017307f, 0.009377021342515945f, 0.00669575110077858f, 0.007249187212437391f, 0.006549304351210594f, 0.005250105168670416f, 0.0074844397604465485f, 0.005403932183980942f, 0.009886860847473145f, 0.009298047982156277f, 0.008467448875308037f, 0.00901464931666851f, 0.008803046308457851f, 0.008716084994375706f, 0.004985535517334938f, 0.004798846784979105f, 0.005351072642952204f, 0.004818218294531107f, 0.005726332776248455f, 0.009474610909819603f, 0.003669728059321642f, 0.00604914128780365f, 0.0068895271979272366f, 0.004474467132240534f, 0.007661406882107258f, 0.009983396157622337f, 0.00247359462082386f, 0.010505257174372673f, 0.006308193784207106f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(6.780951662221923e-05f, 4.885747330263257e-05f, 3.5251494409749284e-05f, 3.0188944947440177e-05f, 4.804526179214008e-05f, 3.886848935508169e-05f, 5.525958840735257e-05f, 5.269263419904746e-05f, 5.294845686876215e-05f, 4.9606333050178364e-05f, 5.4290994739858434e-05f, 3.342518175486475e-05f, 5.840458834427409e-05f, 4.8189984227065e-05f, 3.7304922443581745e-05f, 4.6868935896782205e-05f, 7.326417835429311e-05f, 5.97645812376868e-05f, 4.032706419820897e-05f, 5.706714728148654e-05f, 4.6457487769657746e-05f, 6.306733848759905e-05f, 3.6344379623187706e-05f, 4.600725878844969e-05f, 4.104217441636138e-05f, 7.731430378044024e-05f, 3.6578338040271774e-05f, 3.0837563826935366e-05f, 5.728349424316548e-05f, 4.882686698692851e-05f, 5.757470353273675e-05f, 5.735545710194856e-05f, 4.9703663535183296e-05f, 6.655560719082132e-05f, 4.515389809967019e-05f, 5.900658288737759e-05f, 5.392714592744596e-05f, 4.565169001580216e-05f, 3.6583929613698274e-05f, 3.762693813769147e-05f, 6.705083069391549e-05f, 5.990774297970347e-05f, 4.502255978877656e-05f, 4.1290481021860614e-05f, 4.099542638869025e-05f, 5.357166810426861e-05f, 3.728353476617485e-05f, 3.7838581192772835e-05f, 4.622695269063115e-05f, 2.033401142398361e-05f, 5.4695698054274544e-05f, 4.063297819811851e-05f, 6.988860695855692e-05f, 4.490085848374292e-05f, 6.288105214480311e-05f, 6.62851452943869e-05f, 4.8061268898891285e-05f, 4.150364839006215e-05f, 4.996461211703718e-05f, 4.458673720364459e-05f, 4.638177779270336e-05f, 8.276969310827553e-05f, 5.460034662974067e-05f, 6.715465860906988e-05f, 3.242081220378168e-05f, 4.744059333461337e-05f, 5.679553214577027e-05f, 4.2512074287515134e-05f, 4.063681262778118e-05f, 3.297227158327587e-05f, 6.204152305144817e-05f, 4.187695594737306e-05f, 7.812333933543414e-05f, 3.72541653632652e-05f, 3.829570778179914e-05f, 5.188769137021154e-05f, 4.625330984708853e-05f, 4.9942496843868867e-05f, 7.412485138047487e-05f, 7.867628301028162e-05f, 4.790338425664231e-05f, 8.449106098851189e-05f, 6.215632311068475e-05f, 4.305503534851596e-05f, 3.7139114283490926e-05f, 4.855448059970513e-05f, 5.41436456842348e-05f, 3.6494890082394704e-05f, 3.38987993018236e-05f, 5.352671360014938e-05f, 5.3702220611739904e-05f, 3.957218723371625e-05f, 6.463453610194847e-05f, 6.231274164747447e-05f, 3.564878352335654e-05f, 6.396347453119233e-05f, 7.318767165997997e-05f, 4.5849312300560996e-05f, 7.520252256654203e-05f, 2.8282191124162637e-05f, 3.8805315853096545e-05f, 5.488144961418584e-05f, 6.669350113952532e-05f, 4.3677086068782955e-05f, 3.2996056688716635e-05f, 3.7879759474890307e-05f, 6.013058009557426e-05f, 4.4940519728697836e-05f, 8.731344860279933e-05f, 4.420349432621151e-05f, 5.461171531351283e-05f, 4.6506112994393334e-05f, 4.814284693566151e-05f, 5.3665316954720765e-05f, 4.115954288863577e-05f, 5.728446558350697e-05f, 5.4308482503984123e-05f, 3.382650902494788e-05f, 6.53972674626857e-05f, 6.791039777453989e-05f, 5.566615436691791e-05f, 5.706284719053656e-05f, 4.486201942199841e-05f, 4.477886977838352e-05f, 5.6062679504975677e-05f, 4.085778346052393e-05f, 5.519282422028482e-05f, 7.277022086782381e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0028819043654948473f, 0.0020764425862580538f, 0.0014981884742155671f, 0.0012830301420763135f, 0.0020419235806912184f, 0.0016519108321517706f, 0.002348532434552908f, 0.0022394368425011635f, 0.0022503093350678682f, 0.002108269138261676f, 0.002307367278262973f, 0.001420570188201964f, 0.002482194919139147f, 0.0020480742678046227f, 0.0015854592202231288f, 0.001991929719224572f, 0.0031137275509536266f, 0.0025399946607649326f, 0.0017139001283794641f, 0.002425353741273284f, 0.001974443206563592f, 0.002680361969396472f, 0.0015446360921487212f, 0.001955308485776186f, 0.0017442924436181784f, 0.0032858578488230705f, 0.0015545793576166034f, 0.0013105964753776789f, 0.002434548456221819f, 0.0020751417614519596f, 0.002446924801915884f, 0.002437606919556856f, 0.0021124056074768305f, 0.0028286133892834187f, 0.0019190405728295445f, 0.002507779747247696f, 0.0022919035982340574f, 0.0019401968456804752f, 0.0015548169612884521f, 0.0015991448890417814f, 0.00284966011531651f, 0.0025460789911448956f, 0.0019134588073939085f, 0.0017548453761264682f, 0.001742305583320558f, 0.002276795916259289f, 0.0015845501329749823f, 0.0016081396024674177f, 0.0019646454602479935f, 0.0008641954627819359f, 0.002324567176401615f, 0.001726901507936418f, 0.0029702656902372837f, 0.0019082864746451378f, 0.002672444563359022f, 0.002817118540406227f, 0.002042603911831975f, 0.001763905049301684f, 0.0021234960295259953f, 0.0018949363147839904f, 0.0019712254870682955f, 0.003517712000757456f, 0.0023205147590488195f, 0.002854072954505682f, 0.0013778845313936472f, 0.002016225131228566f, 0.002413809997960925f, 0.0018067631172016263f, 0.0017270644893869758f, 0.0014013214968144894f, 0.0026367646642029285f, 0.0017797705950215459f, 0.0033202418126165867f, 0.0015833019278943539f, 0.0016275675734505057f, 0.0022052268031984568f, 0.0019657656084746122f, 0.0021225560922175646f, 0.003150306176394224f, 0.0033437421079725027f, 0.0020358937326818705f, 0.003590869950130582f, 0.0026416436303406954f, 0.0018298389622941613f, 0.0015784123679623008f, 0.002063565421849489f, 0.0023011048324406147f, 0.0015510327648371458f, 0.00144069897942245f, 0.002274885307997465f, 0.0022823442704975605f, 0.0016818179283291101f, 0.002746967598795891f, 0.0026482914108783007f, 0.001515073236078024f, 0.0027184474747627974f, 0.0031104758381843567f, 0.0019485957454890013f, 0.0031961072236299515f, 0.0012019930873066187f, 0.001649225945584476f, 0.0023324615322053432f, 0.0028344737365841866f, 0.0018562761833891273f, 0.0014023323310539126f, 0.001609889674000442f, 0.0025555496104061604f, 0.00190997205208987f, 0.0037108215037733316f, 0.0018786484142765403f, 0.0023209978826344013f, 0.0019765098113566637f, 0.0020460709929466248f, 0.002280775923281908f, 0.0017492806073278189f, 0.0024345896672457457f, 0.002308110473677516f, 0.0014376265462487936f, 0.002779383910819888f, 0.0028861917089670897f, 0.0023658114951103926f, 0.0024251709692180157f, 0.0019066358217969537f, 0.0019031019182875752f, 0.0023826637770980597f, 0.0017364558298140764f, 0.0023456949274986982f, 0.0030927343759685755f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0001516029005870223f, 0.00015128502855077386f, 0.00021743387333117425f, 0.0002128508931491524f, 0.00014872413885314018f, 0.0001543160469736904f, 0.00015540486492682248f, 0.00020864757243543863f, 0.00017061352264136076f, 0.0001773156109265983f, 0.0001553400361444801f, 8.801742660580203e-05f, 0.00012995970610063523f, 0.00015320521197281778f, 0.00016627233708277345f, 0.0001983101392397657f, 0.00015710864681750536f, 0.0001394131249981001f, 0.00020911886531393975f, 0.00026442864327691495f, 0.00017194828251376748f, 0.0001846897939685732f, 0.00016353055252693594f, 0.00015449161583092064f, 0.00020112314086873084f, 8.934827928896993e-05f, 0.0001446025853510946f, 0.00017302467313129455f, 0.00024854514049366117f, 0.00012592058919835836f, 0.0002053978678304702f, 0.0003125251387245953f, 0.00017431058222427964f, 0.0001569762680446729f, 0.00017082707199733704f, 0.0001240840065293014f, 0.00013823174231220037f, 0.00016717352264095098f, 9.94372894638218e-05f, 0.00010649462637957186f, 0.00015687072300352156f, 0.0001680381246842444f, 0.00015956434071995318f, 0.00010411234688945115f, 0.0002167633647331968f, 0.00010402440238976851f, 0.00016688134928699583f, 0.00012836548557970673f, 0.00016578858776483685f, 0.0002639408630784601f, 0.00012423290172591805f, 0.00017909309826791286f, 0.00012310483725741506f, 0.000164615863468498f, 0.00019141720258630812f, 0.00013860841863788664f, 0.00013551153824664652f, 0.00015957927098497748f, 0.0001769026421243325f, 0.00012728117872029543f, 0.00019173475448042154f, 0.00012544257333502173f, 0.00016405261703766882f, 0.00016957467596512288f, 0.000188967605936341f, 9.221201617037877e-05f, 0.00021627834939863533f, 0.00014446067507378757f, 0.00014577551337424666f, 0.00012532895198091865f, 0.0003055853594560176f, 0.00011395877663744614f, 0.00013797773863188922f, 0.00016231286281254143f, 0.00017303826462011784f, 0.0001418936299160123f, 0.00017325938097201288f, 0.00016066338866949081f, 0.00011599140998441726f, 0.0001579438685439527f, 0.00014249476953409612f, 0.00018711373559199274f, 7.608340820297599e-05f, 0.00015560153406113386f, 0.00015623161743860692f, 0.0002454650239087641f, 0.0001275245740544051f, 0.00013378917356021702f, 0.00025003834161907434f, 0.00015676837938372046f, 0.0002028872404480353f, 0.0002089669433189556f, 0.00011596342665143311f, 0.0001385431387461722f, 0.0002316889731446281f, 0.00014885344717185944f, 0.00016905370284803212f, 0.0001230150810442865f, 0.00017257920990232378f, 0.00018514441035222262f, 0.0001679842098383233f, 0.0001455737801734358f, 0.0001790996757335961f, 0.00017892323376145214f, 0.00021035480313003063f, 0.00021568030933849514f, 0.00011680012539727613f, 8.53741294122301e-05f, 0.0001276319526368752f, 0.00019401063036639243f, 0.00015646533574908972f, 0.00013644300634041429f, 0.00019403880287427455f, 0.00022296277165878564f, 8.889321179594845e-05f, 0.00016044922813307494f, 0.00012226503167767078f, 0.00017190794460475445f, 0.0001122469111578539f, 0.00015578488819301128f, 0.00016559175855945796f, 0.00014280789764598012f, 0.00019765336764976382f, 0.00017255888087674975f, 0.00016842663171701133f, 0.00010967317211907357f, 0.00019834094564430416f, 0.00017010646115522832f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0064431228674948215f, 0.006429613567888737f, 0.009240939281880856f, 0.009046162478625774f, 0.0063207754865288734f, 0.006558431778103113f, 0.00660470686852932f, 0.008867521770298481f, 0.0072510745376348495f, 0.007535913027822971f, 0.00660195155069232f, 0.003740740707144141f, 0.00552328722551465f, 0.006511221174150705f, 0.0070665739476680756f, 0.00842818059027195f, 0.006677117198705673f, 0.0059250579215586185f, 0.008887551724910736f, 0.0112382173538208f, 0.007307801861315966f, 0.007849316112697124f, 0.006950048264116049f, 0.006565893534570932f, 0.008547733537852764f, 0.0037973017897456884f, 0.006145610008388758f, 0.007353548426181078f, 0.010563167743384838f, 0.005351624917238951f, 0.00872940942645073f, 0.013282318599522114f, 0.007408199366182089f, 0.006671491544693708f, 0.007260150276124477f, 0.00527357030659914f, 0.005874848924577236f, 0.007104874588549137f, 0.004226084798574448f, 0.004526021424680948f, 0.006667005363851786f, 0.007141620386391878f, 0.006781484466046095f, 0.004424774553626776f, 0.009212442673742771f, 0.004421037156134844f, 0.007092457264661789f, 0.005455533042550087f, 0.0070460145361721516f, 0.011217487044632435f, 0.005279898177832365f, 0.007611456792801619f, 0.005231955554336309f, 0.00699617387726903f, 0.008135231211781502f, 0.005890857428312302f, 0.005759240128099918f, 0.006782119162380695f, 0.007518362253904343f, 0.005409449804574251f, 0.008148727007210255f, 0.005331309512257576f, 0.006972236093133688f, 0.007206923794001341f, 0.00803112331777811f, 0.003919010516256094f, 0.009191829711198807f, 0.006139578763395548f, 0.006195459049195051f, 0.005326480604708195f, 0.012987377122044563f, 0.004843248054385185f, 0.005864053498953581f, 0.006898296531289816f, 0.0073541258461773396f, 0.006030479446053505f, 0.007363523822277784f, 0.00682819401845336f, 0.004929634742438793f, 0.006712614558637142f, 0.006056027486920357f, 0.007952333427965641f, 0.003233544761314988f, 0.006613065022975206f, 0.0066398438066244125f, 0.010432262904942036f, 0.005419794004410505f, 0.005686040036380291f, 0.010626629926264286f, 0.006662656087428331f, 0.008622707799077034f, 0.008881094865500927f, 0.004928445443511009f, 0.005888083484023809f, 0.009846781380474567f, 0.006326271686702967f, 0.007184782065451145f, 0.005228140857070684f, 0.007334616035223007f, 0.007868637330830097f, 0.007139328867197037f, 0.006186885759234428f, 0.007611736189574003f, 0.007604237180203199f, 0.008940079249441624f, 0.009166412986814976f, 0.004964005202054977f, 0.0036284003872424364f, 0.0054243579506874084f, 0.008245451375842094f, 0.006649776361882687f, 0.005798827391117811f, 0.00824664905667305f, 0.009475917555391788f, 0.003777961479499936f, 0.0068190922029316425f, 0.005196263547986746f, 0.007306087762117386f, 0.004770493600517511f, 0.006620857864618301f, 0.007037649396806955f, 0.006069335620850325f, 0.00840026792138815f, 0.007333752233535051f, 0.007158131804317236f, 0.004661109764128923f, 0.008429490029811859f, 0.007229524664580822f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(5.383925963542424e-05f, 5.063197750132531e-05f, 5.904298086534254e-05f, 5.0365379138384014e-05f, 7.609489694004878e-05f, 4.661549974116497e-05f, 5.777406113338657e-05f, 5.332324872142635e-05f, 5.526434688363224e-05f, 4.3309948523528874e-05f, 4.760791125590913e-05f, 5.416335625341162e-05f, 5.813983443658799e-05f, 6.415595998987556e-05f, 6.509949162136763e-05f, 5.221457467996515e-05f, 4.676290336647071e-05f, 4.8184137995122e-05f, 6.830583151895553e-05f, 4.747706771013327e-05f, 7.794809789629653e-05f, 4.114888361073099e-05f, 5.359536953619681e-05f, 9.078303992282599e-05f, 5.724763832404278e-05f, 7.120009104255587e-05f, 4.952742892783135e-05f, 5.0146009016316384e-05f, 5.938737012911588e-05f, 7.699097477598116e-05f, 5.86030182603281e-05f, 6.219994247658178e-05f, 5.41756053280551e-05f, 6.741375545971096e-05f, 5.654428241541609e-05f, 4.3257183278910816e-05f, 9.107746882364154e-05f, 6.487354403361678e-05f, 5.360679642762989e-05f, 5.243258419795893e-05f, 6.21187937213108e-05f, 5.3556512284558266e-05f, 5.424767732620239e-05f, 6.28242632956244e-05f, 5.990395220578648e-05f, 5.272357884678058e-05f, 4.987472857465036e-05f, 6.122002378106117e-05f, 5.2257677452871576e-05f, 4.483755401452072e-05f, 6.933008262421936e-05f, 5.321905337041244e-05f, 5.246055661700666e-05f, 4.994937262381427e-05f, 5.2865139878122136e-05f, 5.653546759276651e-05f, 3.808246765402146e-05f, 4.21150543843396e-05f, 4.6907349315006286e-05f, 5.397577479016036e-05f, 5.793053423985839e-05f, 6.716828647768125e-05f, 4.570855890051462e-05f, 6.875665712868795e-05f, 4.36287336924579e-05f, 6.451659282902256e-05f, 6.19891652604565e-05f, 5.048998718848452e-05f, 6.593028956558555e-05f, 5.4305415687849745e-05f, 5.2582923672161996e-05f, 7.530858420068398e-05f, 4.3300238758092746e-05f, 5.767396942246705e-05f, 3.9645645301789045e-05f, 5.299684198689647e-05f, 6.221690273378044e-05f, 7.256964454427361e-05f, 5.65896880289074e-05f, 5.404555849963799e-05f, 3.9816295611672103e-05f, 5.626395795843564e-05f, 4.7576668293913826e-05f, 5.01691029057838e-05f, 4.402107879286632e-05f, 6.695667980238795e-05f, 6.203501106938347e-05f, 5.694865103578195e-05f, 5.9596728533506393e-05f, 5.913732456974685e-05f, 4.220637492835522e-05f, 4.1887233237503096e-05f, 4.8237245209747925e-05f, 3.961136098951101e-05f, 5.837352364324033e-05f, 3.6568453651852906e-05f, 7.527325942646712e-05f, 6.337970262393355e-05f, 5.862163379788399e-05f, 4.177700247964822e-05f, 5.1519298722269014e-05f, 6.233492604224011e-05f, 5.19707245985046e-05f, 6.192071305122226e-05f, 6.67105196043849e-05f, 5.1020837418036535e-05f, 4.756674388772808e-05f, 3.866824408760294e-05f, 5.337316542863846e-05f, 5.0682581786531955e-05f, 5.828798748552799e-05f, 5.63306784897577e-05f, 7.412848208332434e-05f, 4.376066135591827e-05f, 6.311059405561537e-05f, 7.92064456618391e-05f, 4.1275332478107885e-05f, 4.719551361631602e-05f, 5.0406684749759734e-05f, 3.608052429626696e-05f, 5.59422915102914e-05f, 3.7036643334431574e-05f, 7.603510312037542e-05f, 5.751661956310272e-05f, 5.698397944797762e-05f, 9.674126340541989e-05f, 3.4977434552274644e-05f, 6.074258635635488e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002288168529048562f, 0.0021518589928746223f, 0.0025093266740441322f, 0.0021405285224318504f, 0.0032340330071747303f, 0.0019811587408185005f, 0.0024553975090384483f, 0.0022662379778921604f, 0.002348734764382243f, 0.0018406728049740195f, 0.0020233362447470427f, 0.0023019425570964813f, 0.0024709429126232862f, 0.0027266282122582197f, 0.002766728401184082f, 0.002219119342043996f, 0.0019874232821166515f, 0.002047825837507844f, 0.0029029978904873133f, 0.0020177753176540136f, 0.0033127940259873867f, 0.0017488275188952684f, 0.0022778031416237354f, 0.0038582792039960623f, 0.0024330245796591043f, 0.003026003949344158f, 0.002104915678501129f, 0.0021312052849680185f, 0.0025239631067961454f, 0.003272116417065263f, 0.0024906282778829336f, 0.0026434974279254675f, 0.0023024631664156914f, 0.0028650846797972918f, 0.0024031319189816713f, 0.0018384301802143455f, 0.003870792221277952f, 0.002757125534117222f, 0.0022782888263463974f, 0.0022283848375082016f, 0.0026400487404316664f, 0.0022761516738682985f, 0.0023055262863636017f, 0.0026700312737375498f, 0.002545917872339487f, 0.002240752102807164f, 0.002119675977155566f, 0.0026018510106951f, 0.0022209512535482645f, 0.0019055960001423955f, 0.002946528373286128f, 0.0022618097718805075f, 0.0022295736707746983f, 0.00212284829467535f, 0.00224676844663918f, 0.0024027572944760323f, 0.0016185048734769225f, 0.0017898897640407085f, 0.001993562327697873f, 0.002293970435857773f, 0.00246204761788249f, 0.002854652004316449f, 0.0019426137441769242f, 0.002922157756984234f, 0.0018542212201282382f, 0.0027419549878686666f, 0.0026345395017415285f, 0.0021458244882524014f, 0.002802037401124835f, 0.00230798008851707f, 0.002234774176031351f, 0.0032006148248910904f, 0.001840260112658143f, 0.002451143693178892f, 0.001684939838014543f, 0.002252365695312619f, 0.00264421827159822f, 0.0030842097476124763f, 0.0024050616193562746f, 0.002296936232596636f, 0.001692192512564361f, 0.0023912182077765465f, 0.0020220084115862846f, 0.0021321868989616632f, 0.0018708958523347974f, 0.002845658687874675f, 0.002636487828567624f, 0.0024203176144510508f, 0.0025328609626740217f, 0.0025133362505584955f, 0.0017937709344550967f, 0.0017802073853090405f, 0.0020500828977674246f, 0.0016834827838465571f, 0.0024808747693896294f, 0.00155415921472013f, 0.0031991135329008102f, 0.0026936372742056847f, 0.0024914194364100695f, 0.001775522599928081f, 0.0021895701065659523f, 0.002649234374985099f, 0.0022087558172643185f, 0.0026316302828490734f, 0.0028351969085633755f, 0.0021683855447918177f, 0.002021586522459984f, 0.0016434002900496125f, 0.0022683595307171345f, 0.002154009649530053f, 0.002477239351719618f, 0.002394053852185607f, 0.0031504605431109667f, 0.0018598281312733889f, 0.0026822001673281193f, 0.0033662738278508186f, 0.0017542015993967652f, 0.0020058092195540667f, 0.0021422840654850006f, 0.00153342226985842f, 0.002377547323703766f, 0.001574057387188077f, 0.003231491893529892f, 0.0024444563314318657f, 0.0024218191392719746f, 0.004111503716558218f, 0.0014865410048514605f, 0.002581559820100665f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0002711451961658895f, 0.0001713620440568775f, 0.00013807999494019896f, 0.0002137611445505172f, 0.00022136072220746428f, 0.00026781760971061885f, 0.00012385740410536528f, 0.00016817721188999712f, 0.00013960148498881608f, 0.00016438135935459286f, 0.00014087872114032507f, 0.00015427202743012458f, 0.00018697342602536082f, 0.00023239872825797647f, 0.00010371250391472131f, 0.00024965478223748505f, 0.00014167488552629948f, 0.00014739121252205223f, 0.00020141544518992305f, 0.00022657889348920435f, 0.00020906436839140952f, 0.0003079549642279744f, 0.00014760739577468485f, 0.00019123911624774337f, 0.0001198501413455233f, 0.00015248202544171363f, 0.00018749901209957898f, 0.0002995628456119448f, 0.0002336060715606436f, 0.0001546609419165179f, 0.00014829981955699623f, 0.00012483746104408056f, 0.00015787241864018142f, 0.00021948578068986535f, 0.0002721242781262845f, 0.0001423502981197089f, 0.00017067078442778438f, 0.00018449357594363391f, 0.00020464880799409002f, 0.00014394578465726227f, 0.00019351135415490717f, 0.00017750466940924525f, 0.00021266468684189022f, 0.00016723957378417253f, 0.00022575666662305593f, 0.00028082533390261233f, 0.0001452009892091155f, 0.00036333734169602394f, 0.00018281620577909052f, 0.0002361389488214627f, 0.00017071980983018875f, 0.00026997877284884453f, 0.0001322681491728872f, 0.0001608701713848859f, 0.00018485785403754562f, 0.00015776080545037985f, 0.0002795069303829223f, 0.00020441693777684122f, 0.00014976348029449582f, 0.0002792810264509171f, 0.000330878741806373f, 0.00017281780310440809f, 0.0002715343434829265f, 9.82321726041846e-05f, 0.00013183557894080877f, 0.00015651725698262453f, 0.00022664050629828125f, 0.00014052291226107627f, 0.0003128468233626336f, 0.00017404484970029444f, 0.000263626454398036f, 0.0002424990088911727f, 0.00019073511066380888f, 0.00015395318041555583f, 0.00013524570385925472f, 0.0001750382944010198f, 0.00020403583766892552f, 0.00016037635214161128f, 0.00024580315221101046f, 0.0001413488935213536f, 0.00014021679817233235f, 0.00022905133664608002f, 0.000166861223988235f, 0.0001224183797603473f, 0.0001943252864293754f, 0.00015675154281780124f, 0.00015395651280414313f, 0.00042526735342107713f, 0.00021772064792457968f, 0.00010167215077672154f, 0.00019494479056447744f, 0.00018553572590462863f, 0.00017875964113045484f, 0.0002448595769237727f, 0.00020024763944093138f, 0.00014306000957731158f, 0.0003148535324726254f, 0.00016859940660651773f, 0.00011517004895722494f, 0.0002308294497197494f, 0.00017100882541853935f, 0.0002096997486660257f, 0.00022352086671162397f, 0.00012390250049065799f, 0.00016024585056584328f, 0.00026445771800354123f, 0.0001253391383215785f, 0.00013863309868611395f, 0.0001507183042122051f, 0.00012645585229620337f, 0.0001392812409903854f, 0.00013983451935928315f, 0.00017811526777222753f, 0.00016918196342885494f, 0.00012689911818597466f, 0.00015845468442421407f, 0.00012051342491758987f, 0.00014049248420633376f, 0.0002599644649308175f, 0.00013273426156956702f, 0.00027513306122273207f, 0.00019170511222910136f, 0.00013194161874707788f, 0.00012080612941645086f, 0.00011502225970616564f, 0.0002328515111003071f, 0.00011849811562569812f, 0.00014307560923043638f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011523670516908169f, 0.007282886654138565f, 0.005868399515748024f, 0.009084848687052727f, 0.0094078304246068f, 0.011382248252630234f, 0.0052639394998550415f, 0.007147531490772963f, 0.005933063104748726f, 0.006986207328736782f, 0.005987345706671476f, 0.006556561216711998f, 0.007946370169520378f, 0.009876945987343788f, 0.004407781176269054f, 0.010610328055918217f, 0.006021182518452406f, 0.006264126393944025f, 0.00856015644967556f, 0.009629602544009686f, 0.008885235525667667f, 0.013088085688650608f, 0.006273313891142607f, 0.008127662353217602f, 0.0050936308689415455f, 0.006480485666543245f, 0.00796870794147253f, 0.012731420807540417f, 0.009928258135914803f, 0.006573089864104986f, 0.006302742287516594f, 0.005305591970682144f, 0.006709577515721321f, 0.009328145533800125f, 0.011565281078219414f, 0.006049887742847204f, 0.00725350808352232f, 0.007840977050364017f, 0.008697574026882648f, 0.006117695942521095f, 0.008224232122302055f, 0.007543948478996754f, 0.009038249030709267f, 0.007107681594789028f, 0.009594658389687538f, 0.011935076676309109f, 0.006171041633933783f, 0.015441836789250374f, 0.007769688498228788f, 0.010035905055701733f, 0.007255591917783022f, 0.011474097147583961f, 0.005621396005153656f, 0.006836982443928719f, 0.00785645842552185f, 0.006704833824187517f, 0.011879044584929943f, 0.008687719702720642f, 0.006364947650581598f, 0.011869443580508232f, 0.014062345959246159f, 0.0073447562754154205f, 0.01154020894318819f, 0.004174867179244757f, 0.0056030116975307465f, 0.006651983130723238f, 0.009632221423089504f, 0.005972223822027445f, 0.013295989483594894f, 0.007396905682981014f, 0.011204124428331852f, 0.010306207463145256f, 0.008106241934001446f, 0.0065430100075900555f, 0.005747942253947258f, 0.007439127191901207f, 0.008671523071825504f, 0.0068159946240484715f, 0.010446633212268353f, 0.006007328163832426f, 0.005959213711321354f, 0.0097346818074584f, 0.007091601844877005f, 0.005202780943363905f, 0.008258824236690998f, 0.006661940366029739f, 0.006543151568621397f, 0.01807386241853237f, 0.009253127500414848f, 0.0043210661970078945f, 0.008285153657197952f, 0.007885267958045006f, 0.0075972843915224075f, 0.01040653232485056f, 0.008510524407029152f, 0.006080050487071276f, 0.013381275348365307f, 0.007165474351495504f, 0.004894726909697056f, 0.00981025118380785f, 0.0072678751312196255f, 0.008912239223718643f, 0.009499636478722095f, 0.0052658561617136f, 0.006810448598116636f, 0.011239452287554741f, 0.005326913204044104f, 0.005891906563192606f, 0.006405527703464031f, 0.005374373402446508f, 0.005919452756643295f, 0.005942966789007187f, 0.007569898851215839f, 0.00719023309648037f, 0.00539321219548583f, 0.006734323687851429f, 0.005121820606291294f, 0.005970930214971304f, 0.01104848925024271f, 0.005641206167638302f, 0.011693154461681843f, 0.0081474669277668f, 0.005607518833130598f, 0.005134260281920433f, 0.004888446070253849f, 0.009896188974380493f, 0.005036169663071632f, 0.006080713123083115f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(8.233948756242171e-05f, 4.506066034082323e-05f, 6.008326818118803e-05f, 4.8837904614629224e-05f, 7.336546696024016e-05f, 3.7386056646937504e-05f, 5.617888018605299e-05f, 4.557575812214054e-05f, 5.801219231216237e-05f, 4.7023084334796295e-05f, 4.43822136730887e-05f, 5.571177098318003e-05f, 4.8958401748677716e-05f, 5.4787364206276834e-05f, 7.236746023409069e-05f, 6.314170605037361e-05f, 6.39662248431705e-05f, 4.560755405691452e-05f, 5.450051685329527e-05f, 5.2233535825507715e-05f, 4.198578608338721e-05f, 3.481701060081832e-05f, 5.81245512876194e-05f, 5.0314440159127116e-05f, 5.394633626565337e-05f, 6.894788384670392e-05f, 3.718296648003161e-05f, 5.034666901337914e-05f, 3.289756568847224e-05f, 6.874009704915807e-05f, 4.9866455810843036e-05f, 5.878312003915198e-05f, 4.910689312964678e-05f, 5.528968176804483e-05f, 6.043086978024803e-05f, 5.748748662881553e-05f, 5.472213160828687e-05f, 5.626785787171684e-05f, 5.382699964684434e-05f, 5.180447988095693e-05f, 6.170680717332289e-05f, 5.883702397113666e-05f, 5.6794709962559864e-05f, 6.46806147415191e-05f, 4.280524080968462e-05f, 4.135884955758229e-05f, 5.1979328418383375e-05f, 4.335561243351549e-05f, 6.68402062729001e-05f, 6.124759966041893e-05f, 4.967288987245411e-05f, 3.276046845712699e-05f, 5.33109086973127e-05f, 4.079679274582304e-05f, 5.4130578064359725e-05f, 8.371092553716153e-05f, 4.58217655250337e-05f, 4.566342249745503e-05f, 8.526264718966559e-05f, 6.354605284286663e-05f, 4.757718852488324e-05f, 5.694354331353679e-05f, 5.834285184391774e-05f, 4.050737334182486e-05f, 5.3744923206977546e-05f, 5.321759090293199e-05f, 4.922943844576366e-05f, 6.418684642994776e-05f, 3.637787085608579e-05f, 5.67564093216788e-05f, 5.469128882396035e-05f, 5.872773544979282e-05f, 5.515923476195894e-05f, 5.601383963949047e-05f, 5.0835005822591484e-05f, 5.5184787925099954e-05f, 4.821721086045727e-05f, 6.069972732802853e-05f, 5.043033524998464e-05f, 4.6601140638813376e-05f, 4.4567339500645176e-05f, 6.0634760302491486e-05f, 5.45846633031033e-05f, 0.00010897645552176982f, 6.06940193392802e-05f, 6.144613871583715e-05f, 7.192652992671356e-05f, 4.6358454710571095e-05f, 5.839155346620828e-05f, 5.158607382327318e-05f, 5.958458496024832e-05f, 4.733757668873295e-05f, 3.5166081943316385e-05f, 3.867975829052739e-05f, 6.13144802628085e-05f, 4.885717135039158e-05f, 6.665053660981357e-05f, 4.797327710548416e-05f, 5.1573260861914605e-05f, 4.769649603986181e-05f, 7.614023343194276e-05f, 5.886858343728818e-05f, 5.5287462600972503e-05f, 4.502934461925179e-05f, 5.1815699407598004e-05f, 5.059673640062101e-05f, 4.470550993573852e-05f, 5.2070157835260034e-05f, 5.013742338633165e-05f, 5.0550424930406734e-05f, 5.579254138865508e-05f, 6.8050401750952e-05f, 8.118413825286552e-05f, 6.299399683484808e-05f, 4.437991447048262e-05f, 5.5204476666403934e-05f, 5.0381764594931155e-05f, 5.5331140174530447e-05f, 4.338659346103668e-05f, 6.106266664573923e-05f, 5.6193875934695825e-05f, 4.6484808990499005e-05f, 5.20501853316091e-05f, 6.440908327931538e-05f, 4.6721102989977226e-05f, 4.81974238937255e-05f, 6.038654100848362e-05f, 4.822323899134062e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003499428043141961f, 0.0019150780281051993f, 0.0025535388849675655f, 0.002075610915198922f, 0.003118032356724143f, 0.0015889074420556426f, 0.002387602347880602f, 0.0019369696965441108f, 0.0024655181914567947f, 0.0019984811078757048f, 0.0018862440483644605f, 0.0023677502758800983f, 0.002080732025206089f, 0.0023284628987312317f, 0.0030756168998777866f, 0.0026835224125534296f, 0.0027185643557459116f, 0.0019383210455998778f, 0.002316271886229515f, 0.002219925168901682f, 0.0017843958921730518f, 0.0014797229086980224f, 0.002470293315127492f, 0.0021383636631071568f, 0.002292719203978777f, 0.002930284943431616f, 0.0015802760608494282f, 0.0021397334057837725f, 0.0013981465017423034f, 0.002921454142779112f, 0.002119324402883649f, 0.0024982825852930546f, 0.002087042899802327f, 0.0023498113732784986f, 0.0025683119893074036f, 0.0024432181380689144f, 0.002325690584257245f, 0.002391383983194828f, 0.0022876474540680647f, 0.002201690338551998f, 0.0026225391775369644f, 0.002500573405995965f, 0.002413775073364377f, 0.002748926170170307f, 0.0018192226998507977f, 0.0017577511025592685f, 0.002209121361374855f, 0.0018426134483888745f, 0.0028407087083905935f, 0.0026030228473246098f, 0.0021110977977514267f, 0.0013923199148848653f, 0.002265713643282652f, 0.001733863609842956f, 0.0023005495313555002f, 0.0035577144008129835f, 0.0019474250730127096f, 0.00194069545250386f, 0.003623662516474724f, 0.0027007071767002344f, 0.0020220305304974318f, 0.0024201006162911654f, 0.0024795711506158113f, 0.001721563283354044f, 0.0022841591853648424f, 0.002261747606098652f, 0.0020922510884702206f, 0.0027279409114271402f, 0.0015460595022886992f, 0.002412147354334593f, 0.0023243797477334738f, 0.002495928667485714f, 0.0023442674428224564f, 0.0023805880919098854f, 0.0021604876965284348f, 0.002345353364944458f, 0.0020492314361035824f, 0.002579738385975361f, 0.0021432891953736544f, 0.0019805484917014837f, 0.001894111861474812f, 0.0025769772473722696f, 0.0023198481649160385f, 0.004631499294191599f, 0.0025794957764446735f, 0.0026114608626812696f, 0.003056877525523305f, 0.001970234327018261f, 0.0024816410150378942f, 0.0021924080792814493f, 0.002532344777137041f, 0.002011846983805299f, 0.0014945585280656815f, 0.001643889700062573f, 0.002605865243822336f, 0.002076429780572653f, 0.002832647878676653f, 0.0020388641860336065f, 0.002191863488405943f, 0.0020271011162549257f, 0.0032359599135816097f, 0.002501914743334055f, 0.002349717076867819f, 0.0019137471681460738f, 0.0022021671757102013f, 0.002150361193343997f, 0.0018999840831384063f, 0.002212981693446636f, 0.002130840439349413f, 0.002148393075913191f, 0.0023711828980594873f, 0.0028921421617269516f, 0.0034503259230405092f, 0.002677244832739234f, 0.0018861462594941258f, 0.00234619015827775f, 0.002141224918887019f, 0.002351573435589671f, 0.001843930222094059f, 0.0025951634161174297f, 0.0023882396053522825f, 0.001975604332983494f, 0.002212132792919874f, 0.002737385919317603f, 0.0019856467843055725f, 0.0020483904518187046f, 0.0025664279237389565f, 0.0020494875498116016f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00021698014461435378f, 0.00013386660430114716f, 0.00014296476729214191f, 0.00017940049292519689f, 0.00020949453755747527f, 0.00011621737212408334f, 0.00019570895528886467f, 0.00011607486521825194f, 0.00011006753629771993f, 0.00030681485077366233f, 9.245342516805977e-05f, 0.0002604509936645627f, 0.00010850122635019943f, 0.00017660313460510224f, 0.00012544971832539886f, 0.00017965195002034307f, 0.00017005918198265135f, 0.00021317794744390994f, 0.00011418997746659443f, 0.00017345626838505268f, 0.00012244748359080404f, 0.00022508901020046324f, 0.0002445784630253911f, 0.00020938763918820769f, 0.00019697900279425085f, 0.00016859534662216902f, 0.00022585585247725248f, 0.00016395565762650222f, 0.00014861927775200456f, 0.0001945268886629492f, 0.0001443642977392301f, 0.00019852249533869326f, 0.0004393735434859991f, 0.00019218829402234405f, 0.0001974247716134414f, 0.00027943355962634087f, 0.00020288869563955814f, 0.00021031017240602523f, 0.00012242983211763203f, 0.00028270366601645947f, 0.00013535069592762738f, 0.00024395258515141904f, 0.00013721546565648168f, 0.0002553995873313397f, 0.00022765775793232024f, 0.0002663287741597742f, 0.00018566218204796314f, 0.00016852671978995204f, 0.00010424964420963079f, 0.0002222237817477435f, 0.00016623431292828172f, 0.00022153911413624883f, 0.00016031009727157652f, 0.00015058905410114676f, 0.00015645903476979584f, 0.00015508670185226947f, 0.00011681891191983595f, 0.0002052642375929281f, 0.00021266417752485722f, 0.0002829608565662056f, 0.00022308914049062878f, 0.0001410031836712733f, 0.00016986546688713133f, 0.00026088059530593455f, 0.00013736440450884402f, 0.00018749375885818154f, 0.00010929213021881878f, 0.00018014266970567405f, 0.00019569833239074796f, 0.00026981663540937006f, 0.00017065874999389052f, 0.0002460282703395933f, 0.00035976781509816647f, 0.00021925549663137645f, 0.00018844602163881063f, 0.0001590029860381037f, 0.000278282881481573f, 0.00026751027326099575f, 0.00017441585077904165f, 0.00030379946110770106f, 0.00016181994578801095f, 0.00018273163004778326f, 0.00024380377726629376f, 0.0002899391984101385f, 0.00025972671573981643f, 0.00025436183204874396f, 0.0001286209881072864f, 0.0002861577086150646f, 0.00011765636008931324f, 0.0002501893322914839f, 0.00014214473776519299f, 0.00012679856445174664f, 0.00020890966698061675f, 0.00011744096264010295f, 0.00018115884449798614f, 0.00017115595983341336f, 0.00024804763961583376f, 0.00019881977641489357f, 0.00024352625769097358f, 0.00027488835621625185f, 0.00015066945343278348f, 0.00014064622519072145f, 0.00017362707876600325f, 0.0002597901038825512f, 0.00019495678134262562f, 0.00024314575421158224f, 0.00016828396474011242f, 0.0003469407674856484f, 0.00018362065020482987f, 0.0001381394686177373f, 0.00013944404781796038f, 0.00030183017952367663f, 0.00016370216326322407f, 0.00016211198817472905f, 0.00024480224237777293f, 0.0003855883260257542f, 0.0001264192396774888f, 0.00010316508269170299f, 0.0002009334129979834f, 0.00011683107004500926f, 0.00020174957171548158f, 0.000226185453357175f, 0.00023453841276932508f, 0.00024369149468839169f, 0.0002953553921543062f, 0.00022845761850476265f, 0.00026324635837227106f, 0.00012258667265996337f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009221656247973442f, 0.0056893303990364075f, 0.0060760024935007095f, 0.007624520920217037f, 0.00890351738780737f, 0.004939238075166941f, 0.008317630738019943f, 0.004933181684464216f, 0.004677870310842991f, 0.013039630837738514f, 0.003929270431399345f, 0.011069167405366898f, 0.0046113021671772f, 0.007505632936954498f, 0.005331613123416901f, 0.00763520784676075f, 0.007227514870464802f, 0.00906006246805191f, 0.004853073973208666f, 0.007371891289949417f, 0.005204018205404282f, 0.009566282853484154f, 0.010394584387540817f, 0.008898974396288395f, 0.008371607400476933f, 0.0071653020568192005f, 0.009598873555660248f, 0.006968115456402302f, 0.006316319108009338f, 0.00826739240437746f, 0.006135482806712389f, 0.008437206037342548f, 0.018673375248908997f, 0.008168002590537071f, 0.00839055236428976f, 0.011875925585627556f, 0.008622769266366959f, 0.008938182145357132f, 0.005203268025070429f, 0.012014904990792274f, 0.005752404686063528f, 0.010367984883487225f, 0.0058316574431955814f, 0.010854482650756836f, 0.00967545434832573f, 0.011318973265588284f, 0.007890642620623112f, 0.007162385620176792f, 0.004430609755218029f, 0.00944451056420803f, 0.007064958103001118f, 0.009415412321686745f, 0.006813179235905409f, 0.006400034762918949f, 0.006649509072303772f, 0.00659118453040719f, 0.00496480381116271f, 0.008723730221390724f, 0.00903822761029005f, 0.012025835923850536f, 0.009481288492679596f, 0.005992635153234005f, 0.007219281978905201f, 0.01108742505311966f, 0.0058379871770739555f, 0.007968484424054623f, 0.004644915461540222f, 0.0076560634188354015f, 0.008317179046571255f, 0.011467206291854382f, 0.007252996787428856f, 0.010456201620399952f, 0.01529013179242611f, 0.009318358264863491f, 0.008008955977857113f, 0.00675762677565217f, 0.011827022768557072f, 0.011369186453521252f, 0.007412673439830542f, 0.012911477126181126f, 0.006877347826957703f, 0.00776609405875206f, 0.01036166027188301f, 0.012322415597736835f, 0.011038385331630707f, 0.01081037800759077f, 0.005466391798108816f, 0.012161701917648315f, 0.005000395234674215f, 0.010633045807480812f, 0.006041151471436024f, 0.005388938821852207f, 0.008878660388290882f, 0.0049912407994270325f, 0.0076992507092654705f, 0.007274128030985594f, 0.010542023926973343f, 0.008449840359389782f, 0.01034986600279808f, 0.011682755313813686f, 0.006403451785445213f, 0.005977464374154806f, 0.0073791504837572575f, 0.01104107964783907f, 0.008285663090646267f, 0.010333694517612457f, 0.007152068428695202f, 0.014744982123374939f, 0.007803877349942923f, 0.00587092712521553f, 0.005926372017711401f, 0.012827782891690731f, 0.00695734191685915f, 0.006889759097248316f, 0.01040409505367279f, 0.01638750359416008f, 0.005372817628085613f, 0.004384515807032585f, 0.008539670147001743f, 0.0049653202295303345f, 0.008574356324970722f, 0.00961288157850504f, 0.009967882186174393f, 0.010356888175010681f, 0.012552604079246521f, 0.009709448553621769f, 0.011187969706952572f, 0.005209933500736952f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(5.0384853238938376e-05f, 6.222992669790983e-05f, 8.770934800850227e-05f, 4.353361146058887e-05f, 4.17795054090675e-05f, 7.015657320152968e-05f, 3.34745054715313e-05f, 5.5784392316127196e-05f, 6.90911547280848e-05f, 5.661919203703292e-05f, 5.605086698778905e-05f, 5.397050699684769e-05f, 6.027568088029511e-05f, 6.349629984470084e-05f, 4.271472425898537e-05f, 6.56766424071975e-05f, 6.848447083029896e-05f, 7.65063232393004e-05f, 5.196306301513687e-05f, 6.076072531868704e-05f, 5.237374352873303e-05f, 3.1323354050982744e-05f, 5.36847765033599e-05f, 8.948095637606457e-05f, 6.911704258527607e-05f, 4.717649062513374e-05f, 4.625353903975338e-05f, 0.00010658906103344634f, 4.270705903763883e-05f, 0.00010229135659756139f, 5.9273679653415456e-05f, 6.880193541292101e-05f, 2.1148158339201473e-05f, 4.9488986405776814e-05f, 4.784096381627023e-05f, 3.117126470897347e-05f, 4.2320945794926956e-05f, 2.4412509446847253e-05f, 5.171612065169029e-05f, 6.486009078798816e-05f, 4.686274041887373e-05f, 4.7111923777265474e-05f, 6.845416646683589e-05f, 3.9389698940794915e-05f, 4.947859633830376e-05f, 6.68696011416614e-05f, 5.469420284498483e-05f, 4.576357241603546e-05f, 5.331581996870227e-05f, 5.220473394729197e-05f, 4.612034899764694e-05f, 6.734705675626174e-05f, 6.429501809179783e-05f, 4.161229662713595e-05f, 5.359647548175417e-05f, 5.356495967134833e-05f, 7.953641761559993e-05f, 6.843035225756466e-05f, 5.347593469195999e-05f, 3.7409859942272305e-05f, 7.138659566408023e-05f, 6.403170118574053e-05f, 6.680645310552791e-05f, 5.0674363592406735e-05f, 5.7380730140721425e-05f, 4.646861634682864e-05f, 4.282829468138516e-05f, 7.994716725079343e-05f, 5.2625655371230096e-05f, 3.504979031276889e-05f, 4.179494135314599e-05f, 4.0666604036232457e-05f, 4.870889461017214e-05f, 5.63227258680854e-05f, 5.5886393965920433e-05f, 3.914162880391814e-05f, 5.632725151372142e-05f, 7.92538994573988e-05f, 5.770438656327315e-05f, 8.915878424886614e-05f, 4.895719757769257e-05f, 6.193506851559505e-05f, 3.3224496291950345e-05f, 5.318352850736119e-05f, 5.8286732382839546e-05f, 3.8439102354459465e-05f, 9.670493454905227e-05f, 5.70978554605972e-05f, 7.403803465422243e-05f, 6.551189289893955e-05f, 4.82860705233179e-05f, 5.7191369705833495e-05f, 4.184287172392942e-05f, 7.136545173125342e-05f, 3.379341069376096e-05f, 6.504218617919832e-05f, 8.795860048849136e-05f, 4.691165668191388e-05f, 6.939969171071425e-05f, 4.564016489894129e-05f, 5.490765761351213e-05f, 5.0579707021825016e-05f, 5.6565295381005853e-05f, 0.0001455659803468734f, 5.3899162594461814e-05f, 5.5980683100642636e-05f, 4.9902046157512814e-05f, 5.342185249901377e-05f, 4.065826942678541e-05f, 5.8865385653916746e-05f, 5.668738594977185e-05f, 4.5069402403896675e-05f, 4.208562313579023e-05f, 3.995123188360594e-05f, 4.8307258111890405e-05f, 4.0326296584680676e-05f, 5.1959425036329776e-05f, 5.517672616406344e-05f, 4.2872830817941576e-05f, 6.109890091465786e-05f, 4.334135155659169e-05f, 5.270432302495465e-05f, 4.567137875710614e-05f, 4.3755844671977684e-05f, 4.528309727902524e-05f, 4.850144614465535e-05f, 7.733857637504116e-05f, 7.583087426610291e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 128,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00214135623537004f, 0.0026447719428688288f, 0.003727647243067622f, 0.0018501784652471542f, 0.001775628887116909f, 0.002981654368340969f, 0.0014226664789021015f, 0.002370836678892374f, 0.0029363741632550955f, 0.0024063156452029943f, 0.002382161794230342f, 0.002293746452778578f, 0.0025617163628339767f, 0.00269859260879457f, 0.0018153757555410266f, 0.002791257109493017f, 0.0029105900321155787f, 0.003251518588513136f, 0.0022084300871938467f, 0.002582330722361803f, 0.0022258840035647154f, 0.001331242499873042f, 0.0022816029377281666f, 0.003802940482273698f, 0.00293747428804636f, 0.0020050008315593004f, 0.0019657753873616457f, 0.004530034959316254f, 0.001815049909055233f, 0.004347382578998804f, 0.0025191314052790403f, 0.0029240823350846767f, 0.0008987967157736421f, 0.00210328190587461f, 0.0020332408603280783f, 0.0013247787719592452f, 0.001798640238121152f, 0.0010375316487625241f, 0.002197935013100505f, 0.002756553702056408f, 0.0019916663877665997f, 0.002002256689593196f, 0.0029093020129948854f, 0.001674062106758356f, 0.0021028402261435986f, 0.0028419578447937965f, 0.0023245036136358976f, 0.0019449518295004964f, 0.0022659222595393658f, 0.0022187011782079935f, 0.001960114808753133f, 0.0028622497338801622f, 0.002732538152486086f, 0.0017685225466266274f, 0.0022778501734137535f, 0.002276510698720813f, 0.0033802976831793785f, 0.002908289898186922f, 0.0022727272007614374f, 0.0015899189747869968f, 0.003033930202946067f, 0.0027213471475988626f, 0.002839274238795042f, 0.0021536604035645723f, 0.0024386809673160315f, 0.001974916085600853f, 0.0018202024511992931f, 0.003397754393517971f, 0.0022365902550518513f, 0.001489616115577519f, 0.0017762850038707256f, 0.0017283306224271655f, 0.002070127986371517f, 0.0023937157820910215f, 0.0023751717526465654f, 0.0016635191859677434f, 0.0023939081002026796f, 0.0033682906068861485f, 0.0024524363689124584f, 0.0037892484106123447f, 0.002080680802464485f, 0.0026322402991354465f, 0.0014120410196483135f, 0.002260299865156412f, 0.002477186033502221f, 0.001633661799132824f, 0.0041099595837295055f, 0.002426658757030964f, 0.0031466165091842413f, 0.002784255426377058f, 0.002052157884463668f, 0.0024306331761181355f, 0.0017783220391720533f, 0.0030330317094922066f, 0.0014362198999151587f, 0.0027642929926514626f, 0.003738240571692586f, 0.001993745332583785f, 0.0029494869522750378f, 0.0019397069700062275f, 0.0023335753940045834f, 0.0021496375557035208f, 0.0024040250573307276f, 0.006186553742736578f, 0.0022907142993062735f, 0.002379179000854492f, 0.0021208368707448244f, 0.0022704286966472864f, 0.001727976487018168f, 0.002501778770238161f, 0.0024092139210551977f, 0.001915449509397149f, 0.001788638997823f, 0.0016979272477328777f, 0.002053058473393321f, 0.0017138676485046744f, 0.0022082754876464605f, 0.002345010871067643f, 0.0018220952479168773f, 0.0025967033579945564f, 0.0018420073902234435f, 0.002239933703094721f, 0.0019410335225984454f, 0.0018596233567222953f, 0.0019245315343141556f, 0.002061311388388276f, 0.003286889521405101f, 0.0032228121999651194f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0036155544221401215f, 0.00012179108307464048f, 0.0002621664898470044f, 0.00020268125808797777f, 9.888548083836213e-05f, 0.000126579194329679f, 0.00021852464124094695f, 0.00011839102080557495f, 8.747418178245425e-05f, 0.00010689962800825015f, 0.00016716746904421598f, 0.00014734751312062144f, 0.00015219933993648738f, 9.125942597165704e-05f, 0.00010560732334852219f, 0.00016750869690440595f, 0.00011535144585650414f, 0.0002037528029177338f, 0.00010688496695365757f, 0.00012039557623211294f, 0.00012163687642896548f, 9.573982242727652e-05f, 0.00011539929255377501f, 0.00012100034655304626f, 0.00014986687165219337f, 9.539267921354622e-05f, 9.97368260868825e-05f, 9.872909140540287e-05f, 0.00017553401994518936f, 0.00012856634566560388f, 0.0002785762189887464f, 0.00013557274360209703f, 0.00017965267761610448f, 9.005133324535564e-05f, 0.00011259839084232226f, 0.00012135548604419455f, 0.00012686791887972504f, 0.0001887190737761557f, 0.000126969680422917f, 0.00016185405547730625f, 0.00013135833432897925f, 0.00019390712259337306f, 0.00011372973676770926f, 9.826893801800907e-05f, 0.00012623704969882965f, 0.0003373149083927274f, 0.00010787861538119614f, 0.00013961142394691706f, 9.517471335129812e-05f, 0.0003070274833589792f, 0.00012340379180386662f, 0.00013308734924066812f, 9.480984590481967e-05f, 0.0001474936434533447f, 9.02041356312111e-05f, 0.0001343860785709694f, 0.00012630131095647812f, 0.00010852699779206887f, 0.00012691672600340098f, 0.0001422362693119794f, 8.857638022163883e-05f, 9.655902249505743e-05f, 0.00014479384117294103f, 0.00011136449757032096f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.15366105735301971f, 0.005176120903342962f, 0.01114207599312067f, 0.008613953366875648f, 0.004202632699161768f, 0.005379615351557732f, 0.009287296794354916f, 0.0050316182896494865f, 0.0037176525220274925f, 0.0045432341285049915f, 0.007104617077857256f, 0.006262269336730242f, 0.006468472070991993f, 0.003878525458276272f, 0.004488311242312193f, 0.007119119632989168f, 0.004902436397969723f, 0.00865949410945177f, 0.004542611073702574f, 0.005116811953485012f, 0.005169567186385393f, 0.004068942274898291f, 0.004904469940811396f, 0.00514251459389925f, 0.006369342096149921f, 0.0040541887283325195f, 0.004238815046846867f, 0.004195986315608025f, 0.007460195571184158f, 0.0054640695452690125f, 0.011839489452540874f, 0.005761841777712107f, 0.007635238580405712f, 0.0038271816447377205f, 0.004785431548953056f, 0.005157608073204756f, 0.005391886457800865f, 0.008020560257136822f, 0.0053962115198373795f, 0.006878796964883804f, 0.005582728888839483f, 0.008241052739322186f, 0.004833513870835304f, 0.0041764299385249615f, 0.00536507461220026f, 0.014335883781313896f, 0.004584840964525938f, 0.005933485459536314f, 0.004044925328344107f, 0.013048668392002583f, 0.005244661122560501f, 0.005656212102621794f, 0.004029418341815472f, 0.006268479861319065f, 0.0038336757570505142f, 0.005711408331990242f, 0.00536780571565032f, 0.004612397402524948f, 0.005393960513174534f, 0.0060450416058301926f, 0.003764496184885502f, 0.004103758372366428f, 0.006153738126158714f, 0.004732991103082895f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(1.9726512334727886e-07f, 5.9710582718253136e-05f, 8.272343984572217e-05f, 7.096504850778729e-05f, 3.3738077036105096e-05f, 6.719204247929156e-05f, 6.4856831158977e-05f, 7.398061279673129e-05f, 7.034449663478881e-05f, 6.381349521689117e-05f, 5.3599207603838295e-05f, 5.061399861006066e-05f, 4.0113045542966574e-05f, 9.460134606342763e-05f, 8.174881077138707e-05f, 3.1241092074196786e-05f, 7.268200715770945e-05f, 8.932493801694363e-05f, 6.119022145867348e-05f, 7.085488323355094e-05f, 8.659720333525911e-05f, 7.817829464329407e-05f, 7.594477938255295e-05f, 8.292227721540257e-05f, 6.352991476887837e-05f, 7.698294939473271e-05f, 7.084042590577155e-05f, 6.908195791766047e-05f, 7.086963159963489e-05f, 9.011232759803534e-05f, 7.886424282332882e-05f, 7.46243676985614e-05f, 5.270967449177988e-05f, 7.02646211721003e-05f, 0.00010777443822007626f, 5.442495967145078e-05f, 7.206694135675207e-05f, 3.2559641113039106e-05f, 6.981089245527983e-05f, 7.066429679980502e-05f, 6.23941668891348e-05f, 9.1736284957733e-05f, 9.228897397406399e-05f, 4.945557884639129e-05f, 5.942553616478108e-05f, 6.144561484688893e-05f, 4.923636151943356e-05f, 9.065047197509557e-05f, 7.237499812617898e-05f, 5.593973764916882e-05f, 6.318410305539146e-05f, 8.176317351171747e-05f, 9.982124902307987e-05f, 6.82367171975784e-05f, 0.0001241304271388799f, 3.113148341071792e-05f, 5.500429688254371e-05f, 5.1612289098557085e-05f, 6.462909368565306e-05f, 8.2742641097866e-05f, 5.585577673627995e-05f, 6.26332766842097e-05f, 5.4738364269724116e-05f, 6.931377720320597e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(8.383767635677941e-06f, 0.0025376996491104364f, 0.003515746211633086f, 0.0030160145834088326f, 0.0014338681939989328f, 0.002855661790817976f, 0.0027564154006540775f, 0.0031441759783774614f, 0.002989640925079584f, 0.002712073503062129f, 0.002277966355904937f, 0.0021510948427021503f, 0.001704804366454482f, 0.004020557273179293f, 0.003474324243143201f, 0.0013277464313432574f, 0.003088985104113817f, 0.0037963096983730793f, 0.0026005844119936228f, 0.0030113323591649532f, 0.003680380992591381f, 0.0033225775696337223f, 0.003227652981877327f, 0.0035241967998445034f, 0.00270002125762403f, 0.00327177532017231f, 0.0030107179190963507f, 0.0029359832406044006f, 0.0030119591392576694f, 0.003829773748293519f, 0.0033517302945256233f, 0.0031715354416519403f, 0.0022401611786335707f, 0.0029862464871257544f, 0.004580413457006216f, 0.002313060685992241f, 0.0030628449749201536f, 0.00138378469273448f, 0.00296696275472641f, 0.0030032324139028788f, 0.002651751972734928f, 0.0038987919688224792f, 0.0039222813211381435f, 0.0021018621046096087f, 0.002525585237890482f, 0.002611438510939479f, 0.002092545386403799f, 0.0038526449352502823f, 0.003075937507674098f, 0.002377438824623823f, 0.002685324288904667f, 0.0034749347250908613f, 0.004242402967065573f, 0.002900060499086976f, 0.005275543313473463f, 0.0013230879558250308f, 0.0023376825265586376f, 0.002193522173911333f, 0.0027467363979667425f, 0.003516562283039093f, 0.002373870462179184f, 0.0026619143318384886f, 0.0023263804614543915f, 0.002945835469290614f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00020904590201098472f, 0.0003948437806684524f, 0.0002268248499603942f, 0.0004154816269874573f, 0.00019939230696763843f, 0.00010161870159208775f, 0.00010150280286325142f, 0.00042999681318178773f, 0.0002001618267968297f, 0.00016569385479670018f, 0.00023340083134826273f, 0.00010436629963805899f, 0.00012401297863107175f, 0.0004622680426109582f, 0.0001542087848065421f, 0.00023978116223588586f, 0.00013278858386911452f, 0.0001633494975976646f, 0.00023676580167375505f, 0.00024063732416834682f, 0.00022531741706188768f, 0.00022266956511884928f, 0.0002839657827280462f, 0.00024156193831004202f, 0.0003039008006453514f, 9.316508658230305e-05f, 0.0002263254573335871f, 0.00024826236767694354f, 0.00026068821898661554f, 0.0001961586094694212f, 0.00033452504430897534f, 0.0002519137633498758f, 0.00014472335169557482f, 0.00022130823344923556f, 0.00029168889159336686f, 0.0002003946719923988f, 0.0001529118890175596f, 0.0002584059548098594f, 0.0001466723479097709f, 0.00025353365344926715f, 0.00023199217685032636f, 0.00011690490646287799f, 0.00030939391581341624f, 0.0002462533884681761f, 0.00021882975124754012f, 9.336643415736035e-05f, 0.00033450813498348f, 0.00018831496709026396f, 0.0002727786486502737f, 0.0003287206927780062f, 0.00023117903037928045f, 0.0003058822185266763f, 0.00011667221406241879f, 0.00013345316983759403f, 0.0002960344427265227f, 0.00021660682978108525f, 0.00020468053116928786f, 0.00025291231577284634f, 0.00013829328236170113f, 0.0002408537402516231f, 0.00028559990460053086f, 0.00016953899466898292f, 0.00024358821974601597f, 0.0002643886546138674f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008884450420737267f, 0.016780860722064972f, 0.00964005570858717f, 0.017657969146966934f, 0.00847417302429676f, 0.004318794701248407f, 0.004313868936151266f, 0.018274864181876183f, 0.008506877347826958f, 0.007041988894343376f, 0.009919535368680954f, 0.0044355676509439945f, 0.005270551424473524f, 0.01964639127254486f, 0.00655387295410037f, 0.010190699249505997f, 0.005643514450639486f, 0.006942353677004576f, 0.010062546469271183f, 0.010227086022496223f, 0.009575990028679371f, 0.009463456459343433f, 0.012068545445799828f, 0.010266382247209549f, 0.012915783561766148f, 0.003959516063332558f, 0.009618831798434258f, 0.010551150888204575f, 0.01107924897223711f, 0.008336740545928478f, 0.014217314310371876f, 0.010706334374845028f, 0.006150742061436176f, 0.009405599907040596f, 0.012396777980029583f, 0.008516773581504822f, 0.00649875495582819f, 0.010982252657413483f, 0.006233574822545052f, 0.010775179602205753f, 0.009859667159616947f, 0.004968458320945501f, 0.013149240985512733f, 0.010465769097208977f, 0.009300264529883862f, 0.003968073520809412f, 0.014216595329344273f, 0.008003385737538338f, 0.011593092232942581f, 0.013970629312098026f, 0.00982510857284069f, 0.01299999374896288f, 0.004958569072186947f, 0.0056717596016824245f, 0.01258146297186613f, 0.009205790236592293f, 0.008698922581970692f, 0.01074877381324768f, 0.005877464544028044f, 0.010236283764243126f, 0.012137996032834053f, 0.0072054071351885796f, 0.010352498851716518f, 0.011236517690122128f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(9.031648369273171e-05f, 5.711509584216401e-05f, 8.441758109256625e-05f, 3.2427935366285965e-05f, 7.483400986529887e-05f, 0.00010691939678508788f, 0.00014360029308591038f, 2.854842387023382e-05f, 6.541944458149374e-05f, 8.027055446291342e-05f, 9.839492122409865e-05f, 9.205233072862029e-05f, 8.191207598429173e-05f, 6.100902464822866e-05f, 7.818906306056306e-05f, 4.622823325917125e-05f, 7.03034529578872e-05f, 6.303685222519562e-05f, 8.970493217930198e-05f, 0.00012331109610386193f, 4.749504660139792e-05f, 5.083277210360393e-05f, 4.11280088883359e-05f, 7.250461203511804e-05f, 0.00010421243496239185f, 0.00010234829824184999f, 9.976523870136589e-05f, 8.665889617986977e-05f, 3.871153967338614e-05f, 7.900468335719779e-05f, 6.115530413808301e-05f, 8.880232053343207e-05f, 0.00012739794328808784f, 0.00011450495367171243f, 4.724724931293167e-05f, 4.663349682232365e-05f, 9.63460115599446e-05f, 6.576872692676261e-05f, 0.0001020777563098818f, 4.854459984926507e-05f, 9.230559226125479e-05f, 0.00025025560171343386f, 7.199283572845161e-05f, 8.854285260895267e-05f, 0.00010806105274241418f, 0.00017449466395191848f, 3.4142107324441895e-05f, 6.05238601565361e-05f, 3.6644272768171504e-05f, 4.7215886297635734e-05f, 7.673191430512816e-05f, 0.00013126441626809537f, 0.00010819265298778191f, 3.8278412830550224e-05f, 3.3406864531571046e-05f, 6.005790419294499e-05f, 6.130588008090854e-05f, 5.4324154916685075e-05f, 0.00011986972822342068f, 6.908718933118507e-05f, 7.287056359928101e-05f, 7.943299715407193e-05f, 9.790925105335191e-05f, 4.4752938265446573e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003838450415059924f, 0.0024273914750665426f, 0.003587747225537896f, 0.0013781872112303972f, 0.0031804454047232866f, 0.004544074181467295f, 0.00610301224514842f, 0.0012133079580962658f, 0.002780326409265399f, 0.0034114986192435026f, 0.004181784112006426f, 0.003912223968654871f, 0.003481263294816017f, 0.002592883538454771f, 0.003323035081848502f, 0.0019646999426186085f, 0.0029878965578973293f, 0.002679066266864538f, 0.0038124595303088427f, 0.005240721628069878f, 0.0020185394678264856f, 0.002160392701625824f, 0.0017479403177276254f, 0.003081446047872305f, 0.004429028369486332f, 0.004349802620708942f, 0.004240022506564856f, 0.003683003131300211f, 0.001645240350626409f, 0.0033576989080756903f, 0.002599100349470973f, 0.0037740985862910748f, 0.00541441235691309f, 0.004866460338234901f, 0.002008008072152734f, 0.0019819235894829035f, 0.004094705451279879f, 0.002795170759782195f, 0.00433830451220274f, 0.0020631453953683376f, 0.003922987729310989f, 0.010635863058269024f, 0.0030596954748034477f, 0.00376307126134634f, 0.004592594690620899f, 0.007416022941470146f, 0.0014510395703837276f, 0.0025722640566527843f, 0.0015573815908282995f, 0.0020066751167178154f, 0.0032611063215881586f, 0.005578737705945969f, 0.0045981877483427525f, 0.0016268325271084905f, 0.0014197917189449072f, 0.002552460879087448f, 0.0026054996997117996f, 0.0023087766021490097f, 0.005094463471323252f, 0.0029362053610384464f, 0.0030969989020377398f, 0.0033759023062884808f, 0.004161143209785223f, 0.0019019998144358397f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00024691675207577646f, 8.697809971636161e-05f, 0.0002701723133213818f, 0.0001053075902746059f, 0.00014179752906784415f, 0.00010138685320271179f, 0.0001281844306504354f, 6.383559230016544e-05f, 0.00015506215277127922f, 0.00016862859774846584f, 0.0002669162640813738f, 0.00014648586511611938f, 0.00014426921552512795f, 8.838863868732005e-05f, 0.0001024762968881987f, 0.00015067322237882763f, 9.746281284606084e-05f, 0.00017247156938537955f, 0.00024979771114885807f, 0.00010098572965944186f, 0.00018126041686628014f, 0.00011687111691571772f, 0.0001036001049214974f, 9.036212577484548e-05f, 8.652262476971373e-05f, 0.00016938458429649472f, 0.0001239302655449137f, 7.028282561805099e-05f, 0.00011840759543702006f, 0.00011690856626955792f, 9.463162132306024e-05f, 0.011164962314069271f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010493961162865162f, 0.0036965692415833473f, 0.01148232351988554f, 0.004475572612136602f, 0.0060263946652412415f, 0.004308941308408976f, 0.005447838455438614f, 0.0027130127418786287f, 0.006590141449123621f, 0.0071667153388261795f, 0.01134394109249115f, 0.006225649267435074f, 0.006131441798061132f, 0.0037565170787274837f, 0.004355242475867271f, 0.006403611972928047f, 0.004142169374972582f, 0.007330041378736496f, 0.010616402141749859f, 0.004291893448680639f, 0.007703567389398813f, 0.004967022221535444f, 0.004403004422783852f, 0.003840390359982848f, 0.003677211469039321f, 0.007198844570666552f, 0.005267036147415638f, 0.0029870199505239725f, 0.005032322835177183f, 0.004968613851815462f, 0.004021843895316124f, 0.47451090812683105f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #70 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(6.684385152766481e-05f, 1.7272590412176214e-05f, 0.00010768288484541699f, 0.00011624165927059948f, 6.08346272201743e-05f, 8.059509127633646e-05f, 0.0001967817370314151f, 0.0002944889711216092f, 0.0001407831732649356f, 0.0001639417023397982f, 7.42279808036983e-05f, 0.00015094064292497933f, 8.930551848607138e-05f, 0.0001278307317988947f, 9.958130976883695e-05f, 0.00020891960593871772f, 7.295193063328043e-05f, 0.0003272460016887635f, 7.655251101823524e-05f, 0.00018727470887824893f, 8.318159234477207e-05f, 0.0001767754292814061f, 0.00010757124255178496f, 8.50669966894202e-05f, 0.00014552805805578828f, 9.94917209027335e-05f, 8.504500146955252e-05f, 0.00016351322119589895f, 0.00013829051749780774f, 9.483744361205027e-05f, 8.875913772499189e-05f, 1.560635610076133e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0028408635407686234f, 0.0007340850424952805f, 0.004576522391289473f, 0.004940270446240902f, 0.0025854716077446938f, 0.003425291273742914f, 0.008363223634660244f, 0.012515781447291374f, 0.005983284674584866f, 0.006967522203922272f, 0.0031546892132610083f, 0.00641497690230608f, 0.0037954843137413263f, 0.0054328059777617455f, 0.0042322054505348206f, 0.008879083208739758f, 0.003100456902757287f, 0.013907955028116703f, 0.0032534815836697817f, 0.007959174923598766f, 0.0035352176055312157f, 0.0075129554606974125f, 0.004571777768433094f, 0.003615347435697913f, 0.006184942089021206f, 0.0042283982038497925f, 0.003614412620663643f, 0.006949312053620815f, 0.005877346731722355f, 0.0040305913425982f, 0.003772263415157795f, 0.0006632701260969043f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00021877663675695658f, 0.00016615906497463584f, 0.00037323561264202f, 0.000297732709441334f, 0.0002306596579728648f, 0.00014106150774750859f, 0.00022562324011232704f, 0.0005697572487406433f, 5.322151264408603e-05f, 0.0004227510653436184f, 0.00017439200018998235f, 0.000428397353971377f, 0.006808654870837927f, 0.0003133183636236936f, 0.0002347968111280352f, 0.0003774051438085735f, 0.00025186792481690645f, 0.00022758642444387078f, 0.0006403374718502164f, 0.0004301599401514977f, 0.00041385117219761014f, 0.0003640412469394505f, 0.00016716083337087184f, 0.00022411029203794897f, 0.0002617628197185695f, 0.0001876075257314369f, 0.0002730372652877122f, 0.0001038939954014495f, 0.00029690342489629984f, 0.00030354244518093765f, 0.00022270165209192783f, 0.0003148933465126902f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009298007003962994f, 0.0070617604069411755f, 0.015862513333559036f, 0.012653639540076256f, 0.00980303529649973f, 0.005995113868266344f, 0.009588987566530704f, 0.02421468310058117f, 0.002261914312839508f, 0.017966920509934425f, 0.007411659695208073f, 0.018206886947155f, 0.28936782479286194f, 0.01331602968275547f, 0.009978864341974258f, 0.016039717942476273f, 0.010704386048018932f, 0.009672422893345356f, 0.02721434086561203f, 0.01828179694712162f, 0.017588675022125244f, 0.015471752732992172f, 0.007104335352778435f, 0.009524687193334103f, 0.011124919168651104f, 0.007973319850862026f, 0.011604083701968193f, 0.004415494855493307f, 0.012618395499885082f, 0.01290055364370346f, 0.00946481991559267f, 0.013382966630160809f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00012644579692278057f, 0.0002241610927740112f, 0.00023770930420141667f, 0.000278691848507151f, 0.00010063256922876462f, 0.00013542194210458547f, 6.74707189318724e-05f, 0.00010460032353876159f, 0.0001515761687187478f, 5.3788469813298434e-05f, 8.177772542694584e-05f, 6.123926141299307e-05f, 1.0977546480717137e-06f, 4.587493822327815e-05f, 0.0001009833431453444f, 8.402806270169094e-05f, 6.969210517127067e-05f, 0.00011382955563021824f, 7.496323814848438e-05f, 7.473911682609469e-05f, 9.731121099321172e-05f, 5.84941858505772e-07f, 0.00014941793051548302f, 0.00015950010856613517f, 0.00011153817467857152f, 7.385615754174069e-05f, 0.00014903998817317188f, 0.00036815734347328544f, 8.47024712129496e-05f, 6.907607894390821e-05f, 7.341625314438716e-05f, 0.00016451797273475677f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005373946391046047f, 0.009526845999062061f, 0.010102645494043827f, 0.011844403110444546f, 0.004276884254068136f, 0.005755432415753603f, 0.0028675056528300047f, 0.0044455137103796005f, 0.006441987119615078f, 0.002286009956151247f, 0.0034755533561110497f, 0.0026026684790849686f, 4.665457163355313e-05f, 0.0019496848108246922f, 0.004291791934520006f, 0.0035711927339434624f, 0.0029619145207107067f, 0.004837756045162678f, 0.003185937413945794f, 0.0031764123123139143f, 0.004135726485401392f, 2.4860028133844025e-05f, 0.006350262090563774f, 0.00677875429391861f, 0.00474037230014801f, 0.003138886531814933f, 0.006334199104458094f, 0.015646686777472496f, 0.0035998548846691847f, 0.00293573341332376f, 0.0031201906967908144f, 0.006992013659328222f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(4.4047967094229534e-05f, 0.00011694777640514076f, 8.437967335339636e-05f, 6.422017759177834e-05f, 0.00011289110989309847f, 7.938069757074118e-05f, 8.894932398106903e-05f, 0.00010407683294033632f, 8.081807754933834e-05f, 0.0003300683165434748f, 0.00022574886679649353f, 0.00010838855087058619f, 0.00026064159465022385f, 4.944085230818018e-05f, 9.567799133947119e-05f, 4.013984653283842e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0018720385851338506f, 0.0049702804535627365f, 0.0035861360374838114f, 0.0027293574530631304f, 0.00479787215590477f, 0.0033736794721335173f, 0.003780346130952239f, 0.004423265345394611f, 0.0034347681794315577f, 0.014027903787791729f, 0.009594326838850975f, 0.0046065133064985275f, 0.011077267117798328f, 0.002101236255839467f, 0.004066314548254013f, 0.0017059433739632368f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000426005368353799f, 0.00019583910761866719f, 0.00021775987988803536f, 0.0001532725291326642f, 9.652454900788143e-05f, 0.00013022961502429098f, 0.00014742196071892977f, 0.00015808474563527852f, 0.0002086796739604324f, 0.0001500379148637876f, 0.00010833929991349578f, 0.00010073058365378529f, 8.803477976471186e-05f, 0.00037875937414355576f, 0.00042363975080661476f, 0.0004675551026593894f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01810522750020027f, 0.008323161862790585f, 0.00925479456782341f, 0.006514082662761211f, 0.004102293401956558f, 0.0055347587913274765f, 0.0062654330395162106f, 0.006718601565808058f, 0.008868886157870293f, 0.0063766115345060825f, 0.004604420159012079f, 0.004281049594283104f, 0.003741478081792593f, 0.01609727367758751f, 0.01800468936562538f, 0.019871091470122337f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00027050418430007994f, 0.0009410812635906041f, 0.007551245857030153f, 0.00015997167793102562f, 0.0033562721218913794f, 0.0002586539776530117f, 0.022925877943634987f, 0.0002335862664040178f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011496427468955517f, 0.0399959534406662f, 0.3209279477596283f, 0.006798795890063047f, 0.1426415592432022f, 0.01099279336631298f, 0.9743497967720032f, 0.00992741622030735f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_0_bias_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(6.67745916871354e-05f, 2.7533073421182053e-07f, 2.6199532499049383e-07f, 6.846198812127113e-05f, 3.480535042399424e-07f, 0.00014433899195864797f, 1.0381138082493635e-07f, 8.806782716419548e-05f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_0_weights_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008513759821653366f, 3.510466558509506e-05f, 3.3404401619918644e-05f, 0.008728902786970139f, 4.437681855051778e-05f, 0.018403220921754837f, 1.3235950063972268e-05f, 0.011228647083044052f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(input_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_0_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_20_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_23_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_24_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_25_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01273129228502512f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_30_fmt_output_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1044, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1044, 1044),
  1, &conv2d_28_scratch0_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch2, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 1, 1, 256, 768),
  1, &conv2d_26_scratch2_array, &conv2d_26_scratch2_intq)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 1, 1, 256, 768),
  1, &conv2d_26_scratch1_array, &conv2d_26_scratch1_intq)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 3584, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3584, 3584),
  1, &conv2d_26_scratch0_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_25_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 1, 1, 256, 768),
  1, &conv2d_25_scratch1_array, &conv2d_25_scratch1_intq)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_25_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 9473, 1, 1), AI_STRIDE_INIT(4, 1, 1, 9473, 9473),
  1, &conv2d_25_scratch0_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_24_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 1, 1, 256, 768),
  1, &conv2d_24_scratch1_array, &conv2d_24_scratch1_intq)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_24_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_24_scratch0_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 3, 3), AI_STRIDE_INIT(4, 1, 1, 128, 384),
  1, &conv2d_23_scratch1_array, &conv2d_23_scratch1_intq)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4737, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4737, 4737),
  1, &conv2d_23_scratch0_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_22_scratch1_array, &conv2d_22_scratch1_intq)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1792, 1792),
  1, &conv2d_22_scratch0_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_intq)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4737, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4737, 4737),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_20_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_20_scratch1_array, &conv2d_20_scratch1_intq)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_20_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1792, 1792),
  1, &conv2d_20_scratch0_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_19_scratch1_array, &conv2d_19_scratch1_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4737, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4737, 4737),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_18_scratch1_array, &conv2d_18_scratch1_intq)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1792, 1792),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_17_scratch1_array, &conv2d_17_scratch1_intq)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4737, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4737, 4737),
  1, &conv2d_17_scratch0_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_16_scratch1_array, &conv2d_16_scratch1_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1792, 1792),
  1, &conv2d_16_scratch0_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_intq)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4737, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4737, 4737),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_14_scratch1_array, &conv2d_14_scratch1_intq)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1792, 1792),
  1, &conv2d_14_scratch0_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_13_scratch1_array, &conv2d_13_scratch1_intq)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 4737, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4737, 4737),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_12_scratch1_array, &conv2d_12_scratch1_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 6, 6), AI_STRIDE_INIT(4, 1, 1, 64, 384),
  1, &conv2d_11_scratch1_array, &conv2d_11_scratch1_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 2369, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2369, 2369),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 1, 1, 64, 768),
  1, &conv2d_10_scratch1_array, &conv2d_10_scratch1_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 896, 1, 1), AI_STRIDE_INIT(4, 1, 1, 896, 896),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 1, 1, 64, 768),
  1, &conv2d_9_scratch1_array, &conv2d_9_scratch1_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 2369, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2369, 2369),
  1, &conv2d_9_scratch0_array, NULL)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 1, 1, 64, 768),
  1, &conv2d_8_scratch1_array, &conv2d_8_scratch1_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 768, 1, 1), AI_STRIDE_INIT(4, 1, 1, 768, 768),
  1, &conv2d_8_scratch0_array, NULL)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 12, 12), AI_STRIDE_INIT(4, 1, 1, 32, 384),
  1, &conv2d_7_scratch1_array, &conv2d_7_scratch1_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1185, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1185, 1185),
  1, &conv2d_7_scratch0_array, NULL)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 1, 1, 32, 768),
  1, &conv2d_6_scratch1_array, &conv2d_6_scratch1_intq)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 448, 1, 1), AI_STRIDE_INIT(4, 1, 1, 448, 448),
  1, &conv2d_6_scratch0_array, NULL)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 1, 1, 32, 768),
  1, &conv2d_5_scratch1_array, &conv2d_5_scratch1_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 1185, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1185, 1185),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 1, 1, 32, 768),
  1, &conv2d_4_scratch1_array, &conv2d_4_scratch1_intq)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 384, 1, 1), AI_STRIDE_INIT(4, 1, 1, 384, 384),
  1, &conv2d_4_scratch0_array, NULL)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 24, 24), AI_STRIDE_INIT(4, 1, 1, 16, 384),
  1, &conv2d_3_scratch1_array, &conv2d_3_scratch1_intq)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 593, 1, 1), AI_STRIDE_INIT(4, 1, 1, 593, 593),
  1, &conv2d_3_scratch0_array, NULL)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 48, 48), AI_STRIDE_INIT(4, 1, 1, 16, 768),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 192, 1, 1), AI_STRIDE_INIT(4, 1, 1, 192, 192),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 48, 48), AI_STRIDE_INIT(4, 1, 1, 8, 384),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 297, 1, 1), AI_STRIDE_INIT(4, 1, 1, 297, 297),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_scratch1, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 48, 48), AI_STRIDE_INIT(4, 1, 1, 8, 384),
  1, &conv2d_0_scratch1_array, &conv2d_0_scratch1_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_scratch0, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_0_scratch0_array, NULL)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &conv2d_28_bias_array, &conv2d_28_bias_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 256, 1, 1, 2), AI_STRIDE_INIT(4, 1, 256, 256, 256),
  1, &conv2d_28_weights_array, &conv2d_28_weights_intq)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &conv2d_26_bias_array, &conv2d_26_bias_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 256, 1, 1, 256), AI_STRIDE_INIT(4, 1, 256, 256, 256),
  1, &conv2d_26_weights_array, &conv2d_26_weights_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_25_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &conv2d_25_bias_array, &conv2d_25_bias_intq)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_25_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 256, 3, 3, 1), AI_STRIDE_INIT(4, 1, 256, 768, 2304),
  1, &conv2d_25_weights_array, &conv2d_25_weights_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_24_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &conv2d_24_bias_array, &conv2d_24_bias_intq)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_24_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 256), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &conv2d_24_weights_array, &conv2d_24_weights_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_23_bias_array, &conv2d_23_bias_intq)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 384, 1152),
  1, &conv2d_23_weights_array, &conv2d_23_weights_intq)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_22_bias_array, &conv2d_22_bias_intq)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &conv2d_22_weights_array, &conv2d_22_weights_intq)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_21_bias_array, &conv2d_21_bias_intq)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 384, 1152),
  1, &conv2d_21_weights_array, &conv2d_21_weights_intq)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_20_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_20_bias_array, &conv2d_20_bias_intq)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_20_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &conv2d_20_weights_array, &conv2d_20_weights_intq)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_19_bias_array, &conv2d_19_bias_intq)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 384, 1152),
  1, &conv2d_19_weights_array, &conv2d_19_weights_intq)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_18_bias_array, &conv2d_18_bias_intq)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &conv2d_18_weights_array, &conv2d_18_weights_intq)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_17_bias_array, &conv2d_17_bias_intq)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 384, 1152),
  1, &conv2d_17_weights_array, &conv2d_17_weights_intq)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_16_bias_array, &conv2d_16_bias_intq)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &conv2d_16_weights_array, &conv2d_16_weights_intq)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_15_bias_array, &conv2d_15_bias_intq)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 384, 1152),
  1, &conv2d_15_weights_array, &conv2d_15_weights_intq)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_14_bias_array, &conv2d_14_bias_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &conv2d_14_weights_array, &conv2d_14_weights_intq)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_13_bias_array, &conv2d_13_bias_intq)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 384, 1152),
  1, &conv2d_13_weights_array, &conv2d_13_weights_intq)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_12_bias_array, &conv2d_12_bias_intq)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 64, 1, 1, 128), AI_STRIDE_INIT(4, 1, 64, 64, 64),
  1, &conv2d_12_weights_array, &conv2d_12_weights_intq)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_11_bias_array, &conv2d_11_bias_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 64, 3, 3, 1), AI_STRIDE_INIT(4, 1, 64, 192, 576),
  1, &conv2d_11_weights_array, &conv2d_11_weights_intq)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_10_bias_array, &conv2d_10_bias_intq)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 64, 1, 1, 64), AI_STRIDE_INIT(4, 1, 64, 64, 64),
  1, &conv2d_10_weights_array, &conv2d_10_weights_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_9_bias_array, &conv2d_9_bias_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 64, 3, 3, 1), AI_STRIDE_INIT(4, 1, 64, 192, 576),
  1, &conv2d_9_weights_array, &conv2d_9_weights_intq)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_8_bias_array, &conv2d_8_bias_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 32, 1, 1, 64), AI_STRIDE_INIT(4, 1, 32, 32, 32),
  1, &conv2d_8_weights_array, &conv2d_8_weights_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_7_bias_array, &conv2d_7_bias_intq)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 32, 3, 3, 1), AI_STRIDE_INIT(4, 1, 32, 96, 288),
  1, &conv2d_7_weights_array, &conv2d_7_weights_intq)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_6_bias_array, &conv2d_6_bias_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 32, 1, 1, 32), AI_STRIDE_INIT(4, 1, 32, 32, 32),
  1, &conv2d_6_weights_array, &conv2d_6_weights_intq)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_5_bias_array, &conv2d_5_bias_intq)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 32, 3, 3, 1), AI_STRIDE_INIT(4, 1, 32, 96, 288),
  1, &conv2d_5_weights_array, &conv2d_5_weights_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_4_bias_array, &conv2d_4_bias_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 16, 1, 1, 32), AI_STRIDE_INIT(4, 1, 16, 16, 16),
  1, &conv2d_4_weights_array, &conv2d_4_weights_intq)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_3_bias_array, &conv2d_3_bias_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 16, 3, 3, 1), AI_STRIDE_INIT(4, 1, 16, 48, 144),
  1, &conv2d_3_weights_array, &conv2d_3_weights_intq)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_2_bias_array, &conv2d_2_bias_intq)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 1, 16), AI_STRIDE_INIT(4, 1, 8, 8, 8),
  1, &conv2d_2_weights_array, &conv2d_2_weights_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, &conv2d_1_bias_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 8, 3, 3, 1), AI_STRIDE_INIT(4, 1, 8, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_intq)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_bias, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_0_bias_array, &conv2d_0_bias_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_weights, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 9, 27),
  1, &conv2d_0_weights_array, &conv2d_0_weights_intq)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  input_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 96, 96), AI_STRIDE_INIT(4, 1, 1, 3, 288),
  1, &input_output_array, &input_output_intq)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 48, 48), AI_STRIDE_INIT(4, 1, 1, 8, 384),
  1, &conv2d_0_output_array, &conv2d_0_output_intq)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 48, 48), AI_STRIDE_INIT(4, 1, 1, 8, 384),
  1, &conv2d_1_output_array, &conv2d_1_output_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 48, 48), AI_STRIDE_INIT(4, 1, 1, 16, 768),
  1, &conv2d_2_output_array, &conv2d_2_output_intq)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 24, 24), AI_STRIDE_INIT(4, 1, 1, 16, 384),
  1, &conv2d_3_output_array, &conv2d_3_output_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 1, 1, 32, 768),
  1, &conv2d_4_output_array, &conv2d_4_output_intq)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 1, 1, 32, 768),
  1, &conv2d_5_output_array, &conv2d_5_output_intq)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 1, 1, 32, 768),
  1, &conv2d_6_output_array, &conv2d_6_output_intq)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 12, 12), AI_STRIDE_INIT(4, 1, 1, 32, 384),
  1, &conv2d_7_output_array, &conv2d_7_output_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 1, 1, 64, 768),
  1, &conv2d_8_output_array, &conv2d_8_output_intq)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 1, 1, 64, 768),
  1, &conv2d_9_output_array, &conv2d_9_output_intq)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 1, 1, 64, 768),
  1, &conv2d_10_output_array, &conv2d_10_output_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 6, 6), AI_STRIDE_INIT(4, 1, 1, 64, 384),
  1, &conv2d_11_output_array, &conv2d_11_output_intq)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_12_output_array, &conv2d_12_output_intq)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_13_output_array, &conv2d_13_output_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_14_output_array, &conv2d_14_output_intq)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_15_output_array, &conv2d_15_output_intq)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_16_output_array, &conv2d_16_output_intq)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_17_output_array, &conv2d_17_output_intq)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_18_output_array, &conv2d_18_output_intq)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_19_output_array, &conv2d_19_output_intq)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_20_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_20_output_array, &conv2d_20_output_intq)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_21_output_array, &conv2d_21_output_intq)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 1, 1, 128, 768),
  1, &conv2d_22_output_array, &conv2d_22_output_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 3, 3), AI_STRIDE_INIT(4, 1, 1, 128, 384),
  1, &conv2d_23_output_array, &conv2d_23_output_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_24_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 1, 1, 256, 768),
  1, &conv2d_24_output_array, &conv2d_24_output_intq)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_25_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 1, 1, 256, 768),
  1, &conv2d_25_output_array, &conv2d_25_output_intq)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 1, 1, 256, 256),
  1, &conv2d_26_output_array, &conv2d_26_output_intq)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2, 2),
  1, &conv2d_28_output_array, &conv2d_28_output_intq)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  reshape_29_fmt_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &reshape_29_fmt_output_array, NULL)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  nl_30_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &nl_30_output_array, NULL)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  nl_30_fmt_output, AI_STATIC,
  0x0, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2, 2),
  1, &nl_30_fmt_output_array, &nl_30_fmt_output_intq)



/**  Layer declarations section  **********************************************/



AI_STATIC_CONST ai_i8 conv2d_0_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_0_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_0_nl_params_data, conv2d_0_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_0_weights, &conv2d_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_0_scratch0, &conv2d_0_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_0_layer, 0,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_1_layer, AI_STATIC,
  .tensors = &conv2d_0_chain, 
  .groups = 1, 
  .nl_params = &conv2d_0_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)


AI_STATIC_CONST ai_i8 conv2d_1_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_1_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_1_nl_params_data, conv2d_1_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_1_weights, &conv2d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_1_scratch0, &conv2d_1_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_1_layer, 1,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_2_layer, AI_STATIC,
  .tensors = &conv2d_1_chain, 
  .groups = 8, 
  .nl_params = &conv2d_1_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_i8 conv2d_2_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_2_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_2_nl_params_data, conv2d_2_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_2_weights, &conv2d_2_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_2_scratch0, &conv2d_2_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_2_layer, 2,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_3_layer, AI_STATIC,
  .tensors = &conv2d_2_chain, 
  .groups = 1, 
  .nl_params = &conv2d_2_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_3_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_3_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_3_nl_params_data, conv2d_3_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_3_weights, &conv2d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_3_scratch0, &conv2d_3_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_layer, 3,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_4_layer, AI_STATIC,
  .tensors = &conv2d_3_chain, 
  .groups = 16, 
  .nl_params = &conv2d_3_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)


AI_STATIC_CONST ai_i8 conv2d_4_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_4_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_4_nl_params_data, conv2d_4_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_4_weights, &conv2d_4_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_4_scratch0, &conv2d_4_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_4_layer, 4,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_5_layer, AI_STATIC,
  .tensors = &conv2d_4_chain, 
  .groups = 1, 
  .nl_params = &conv2d_4_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_5_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_5_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_5_nl_params_data, conv2d_5_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_5_weights, &conv2d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_5_scratch0, &conv2d_5_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_5_layer, 5,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_6_layer, AI_STATIC,
  .tensors = &conv2d_5_chain, 
  .groups = 32, 
  .nl_params = &conv2d_5_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_i8 conv2d_6_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_6_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_6_nl_params_data, conv2d_6_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_6_weights, &conv2d_6_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_6_scratch0, &conv2d_6_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_6_layer, 6,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_7_layer, AI_STATIC,
  .tensors = &conv2d_6_chain, 
  .groups = 1, 
  .nl_params = &conv2d_6_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_7_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_7_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_7_nl_params_data, conv2d_7_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_7_weights, &conv2d_7_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_7_scratch0, &conv2d_7_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_7_layer, 7,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_8_layer, AI_STATIC,
  .tensors = &conv2d_7_chain, 
  .groups = 32, 
  .nl_params = &conv2d_7_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)


AI_STATIC_CONST ai_i8 conv2d_8_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_8_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_8_nl_params_data, conv2d_8_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_8_weights, &conv2d_8_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_8_scratch0, &conv2d_8_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_8_layer, 8,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_9_layer, AI_STATIC,
  .tensors = &conv2d_8_chain, 
  .groups = 1, 
  .nl_params = &conv2d_8_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_9_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_9_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_9_nl_params_data, conv2d_9_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_9_weights, &conv2d_9_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_9_scratch0, &conv2d_9_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_9_layer, 9,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_10_layer, AI_STATIC,
  .tensors = &conv2d_9_chain, 
  .groups = 64, 
  .nl_params = &conv2d_9_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_i8 conv2d_10_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_10_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_10_nl_params_data, conv2d_10_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_10_weights, &conv2d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_10_scratch0, &conv2d_10_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_10_layer, 10,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_11_layer, AI_STATIC,
  .tensors = &conv2d_10_chain, 
  .groups = 1, 
  .nl_params = &conv2d_10_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_11_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_11_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_11_nl_params_data, conv2d_11_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_11_weights, &conv2d_11_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_11_scratch0, &conv2d_11_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_11_layer, 11,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_12_layer, AI_STATIC,
  .tensors = &conv2d_11_chain, 
  .groups = 64, 
  .nl_params = &conv2d_11_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)


AI_STATIC_CONST ai_i8 conv2d_12_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_12_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_12_nl_params_data, conv2d_12_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_12_weights, &conv2d_12_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_12_scratch0, &conv2d_12_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_layer, 12,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_13_layer, AI_STATIC,
  .tensors = &conv2d_12_chain, 
  .groups = 1, 
  .nl_params = &conv2d_12_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_13_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_13_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_13_nl_params_data, conv2d_13_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_13_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_13_weights, &conv2d_13_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_13_scratch0, &conv2d_13_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_13_layer, 13,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_14_layer, AI_STATIC,
  .tensors = &conv2d_13_chain, 
  .groups = 128, 
  .nl_params = &conv2d_13_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_i8 conv2d_14_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_14_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_14_nl_params_data, conv2d_14_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_14_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_14_weights, &conv2d_14_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_14_scratch0, &conv2d_14_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_14_layer, 14,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_15_layer, AI_STATIC,
  .tensors = &conv2d_14_chain, 
  .groups = 1, 
  .nl_params = &conv2d_14_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_15_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_15_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_15_nl_params_data, conv2d_15_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_15_weights, &conv2d_15_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_15_scratch0, &conv2d_15_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_layer, 15,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_16_layer, AI_STATIC,
  .tensors = &conv2d_15_chain, 
  .groups = 128, 
  .nl_params = &conv2d_15_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_i8 conv2d_16_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_16_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_16_nl_params_data, conv2d_16_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_16_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_16_weights, &conv2d_16_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_16_scratch0, &conv2d_16_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_16_layer, 16,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_17_layer, AI_STATIC,
  .tensors = &conv2d_16_chain, 
  .groups = 1, 
  .nl_params = &conv2d_16_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_17_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_17_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_17_nl_params_data, conv2d_17_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_17_weights, &conv2d_17_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_17_scratch0, &conv2d_17_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_17_layer, 17,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_18_layer, AI_STATIC,
  .tensors = &conv2d_17_chain, 
  .groups = 128, 
  .nl_params = &conv2d_17_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_i8 conv2d_18_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_18_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_18_nl_params_data, conv2d_18_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_18_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_18_weights, &conv2d_18_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_18_scratch0, &conv2d_18_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_18_layer, 18,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_19_layer, AI_STATIC,
  .tensors = &conv2d_18_chain, 
  .groups = 1, 
  .nl_params = &conv2d_18_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_19_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_19_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_19_nl_params_data, conv2d_19_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_19_weights, &conv2d_19_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_19_scratch0, &conv2d_19_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_19_layer, 19,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_20_layer, AI_STATIC,
  .tensors = &conv2d_19_chain, 
  .groups = 128, 
  .nl_params = &conv2d_19_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_i8 conv2d_20_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_20_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_20_nl_params_data, conv2d_20_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_20_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_20_weights, &conv2d_20_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_20_scratch0, &conv2d_20_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_20_layer, 20,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_21_layer, AI_STATIC,
  .tensors = &conv2d_20_chain, 
  .groups = 1, 
  .nl_params = &conv2d_20_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_21_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_21_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_21_nl_params_data, conv2d_21_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_21_weights, &conv2d_21_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_21_scratch0, &conv2d_21_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_21_layer, 21,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_22_layer, AI_STATIC,
  .tensors = &conv2d_21_chain, 
  .groups = 128, 
  .nl_params = &conv2d_21_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_i8 conv2d_22_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_22_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_22_nl_params_data, conv2d_22_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_22_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_22_weights, &conv2d_22_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_22_scratch0, &conv2d_22_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_22_layer, 22,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_23_layer, AI_STATIC,
  .tensors = &conv2d_22_chain, 
  .groups = 1, 
  .nl_params = &conv2d_22_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_23_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_23_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_23_nl_params_data, conv2d_23_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_23_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_23_weights, &conv2d_23_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_23_scratch0, &conv2d_23_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_23_layer, 23,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_24_layer, AI_STATIC,
  .tensors = &conv2d_23_chain, 
  .groups = 128, 
  .nl_params = &conv2d_23_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)


AI_STATIC_CONST ai_i8 conv2d_24_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_24_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_24_nl_params_data, conv2d_24_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_24_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_24_weights, &conv2d_24_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_24_scratch0, &conv2d_24_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_24_layer, 24,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_25_layer, AI_STATIC,
  .tensors = &conv2d_24_chain, 
  .groups = 1, 
  .nl_params = &conv2d_24_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_i8 conv2d_25_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_25_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_25_nl_params_data, conv2d_25_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_25_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_25_weights, &conv2d_25_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_25_scratch0, &conv2d_25_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_25_layer, 25,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_26_layer, AI_STATIC,
  .tensors = &conv2d_25_chain, 
  .groups = 256, 
  .nl_params = &conv2d_25_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_i8 conv2d_26_nl_params_data[] = { -128, 127 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_26_nl_params, AI_ARRAY_FORMAT_S8,
    conv2d_26_nl_params_data, conv2d_26_nl_params_data, 2, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_26_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_26_weights, &conv2d_26_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_26_scratch0, &conv2d_26_scratch1, &conv2d_26_scratch2)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_26_layer, 26,
  OPTIMIZED_CONV2D_TYPE,
  conv2d_nl_pool, forward_conv2d_nl_pool_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &conv2d_28_layer, AI_STATIC,
  .tensors = &conv2d_26_chain, 
  .groups = 1, 
  .nl_params = &conv2d_26_nl_params, 
  .nl_func = nl_func_clip_array_integer, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .pool_size = AI_SHAPE_2D_INIT(3, 3), 
  .pool_stride = AI_SHAPE_2D_INIT(2, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .pool_func = pool_func_ap_array_integer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_28_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_28_weights, &conv2d_28_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_28_layer, 28,
  CONV2D_TYPE,
  conv2d, forward_conv2d_integer_SSSA_ch,
  &AI_NET_OBJ_INSTANCE, &reshape_29_fmt_layer, AI_STATIC,
  .tensors = &conv2d_28_chain, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  reshape_29_fmt_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &reshape_29_fmt_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  reshape_29_fmt_layer, 29,
  NL_TYPE,
  nl, node_convert,
  &AI_NET_OBJ_INSTANCE, &nl_30_layer, AI_STATIC,
  .tensors = &reshape_29_fmt_chain, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_30_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &reshape_29_fmt_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_30_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_30_layer, 30,
  NL_TYPE,
  nl, forward_sm,
  &AI_NET_OBJ_INSTANCE, &nl_30_fmt_layer, AI_STATIC,
  .tensors = &nl_30_chain, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_30_fmt_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_30_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_30_fmt_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_30_fmt_layer, 30,
  NL_TYPE,
  nl, node_convert,
  &AI_NET_OBJ_INSTANCE, &nl_30_fmt_layer, AI_STATIC,
  .tensors = &nl_30_fmt_chain, 
)


AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8,
                     1, 1, 219064, 1,
                     NULL),
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_U8,
                     1, 1, 38048, 1,
                     NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_PERSON_DECT_IN_NUM, &input_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_PERSON_DECT_OUT_NUM, &nl_30_fmt_output),
  &conv2d_0_layer, 0, NULL)



AI_DECLARE_STATIC
ai_bool person_dect_configure_activations(
  ai_network* net_ctx, const ai_buffer* activation_buffer)
{
  AI_ASSERT(net_ctx &&  activation_buffer && activation_buffer->data)

  ai_ptr activations = AI_PTR(AI_PTR_ALIGN(activation_buffer->data, AI_PERSON_DECT_ACTIVATIONS_ALIGNMENT));
  AI_ASSERT(activations)
  AI_UNUSED(net_ctx)

  {
    /* Updating activations (byte) offsets */
    conv2d_28_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_28_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_26_scratch2_array.data = AI_PTR(activations + 8192);
    conv2d_26_scratch2_array.data_start = AI_PTR(activations + 8192);
    conv2d_26_scratch1_array.data = AI_PTR(activations + 0);
    conv2d_26_scratch1_array.data_start = AI_PTR(activations + 0);
    conv2d_26_scratch0_array.data = AI_PTR(activations + 4608);
    conv2d_26_scratch0_array.data_start = AI_PTR(activations + 4608);
    conv2d_25_scratch1_array.data = AI_PTR(activations + 0);
    conv2d_25_scratch1_array.data_start = AI_PTR(activations + 0);
    conv2d_25_scratch0_array.data = AI_PTR(activations + 7680);
    conv2d_25_scratch0_array.data_start = AI_PTR(activations + 7680);
    conv2d_24_scratch1_array.data = AI_PTR(activations + 3072);
    conv2d_24_scratch1_array.data_start = AI_PTR(activations + 3072);
    conv2d_24_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_24_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_23_scratch1_array.data = AI_PTR(activations + 4740);
    conv2d_23_scratch1_array.data_start = AI_PTR(activations + 4740);
    conv2d_23_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_23_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_22_scratch1_array.data = AI_PTR(activations + 1792);
    conv2d_22_scratch1_array.data_start = AI_PTR(activations + 1792);
    conv2d_22_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_22_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_21_scratch1_array.data = AI_PTR(activations + 11008);
    conv2d_21_scratch1_array.data_start = AI_PTR(activations + 11008);
    conv2d_21_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_21_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_20_scratch1_array.data = AI_PTR(activations + 1792);
    conv2d_20_scratch1_array.data_start = AI_PTR(activations + 1792);
    conv2d_20_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_20_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_19_scratch1_array.data = AI_PTR(activations + 11008);
    conv2d_19_scratch1_array.data_start = AI_PTR(activations + 11008);
    conv2d_19_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_19_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_18_scratch1_array.data = AI_PTR(activations + 1792);
    conv2d_18_scratch1_array.data_start = AI_PTR(activations + 1792);
    conv2d_18_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_18_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_17_scratch1_array.data = AI_PTR(activations + 11008);
    conv2d_17_scratch1_array.data_start = AI_PTR(activations + 11008);
    conv2d_17_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_17_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_16_scratch1_array.data = AI_PTR(activations + 1792);
    conv2d_16_scratch1_array.data_start = AI_PTR(activations + 1792);
    conv2d_16_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_16_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_15_scratch1_array.data = AI_PTR(activations + 11008);
    conv2d_15_scratch1_array.data_start = AI_PTR(activations + 11008);
    conv2d_15_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_15_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_14_scratch1_array.data = AI_PTR(activations + 1792);
    conv2d_14_scratch1_array.data_start = AI_PTR(activations + 1792);
    conv2d_14_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_14_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_13_scratch1_array.data = AI_PTR(activations + 4740);
    conv2d_13_scratch1_array.data_start = AI_PTR(activations + 4740);
    conv2d_13_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_13_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_12_scratch1_array.data = AI_PTR(activations + 6980);
    conv2d_12_scratch1_array.data_start = AI_PTR(activations + 6980);
    conv2d_12_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_12_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_11_scratch1_array.data = AI_PTR(activations + 2372);
    conv2d_11_scratch1_array.data_start = AI_PTR(activations + 2372);
    conv2d_11_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_11_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_10_scratch1_array.data = AI_PTR(activations + 896);
    conv2d_10_scratch1_array.data_start = AI_PTR(activations + 896);
    conv2d_10_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_10_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_9_scratch1_array.data = AI_PTR(activations + 19200);
    conv2d_9_scratch1_array.data_start = AI_PTR(activations + 19200);
    conv2d_9_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_9_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_8_scratch1_array.data = AI_PTR(activations + 768);
    conv2d_8_scratch1_array.data_start = AI_PTR(activations + 768);
    conv2d_8_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_8_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_7_scratch1_array.data = AI_PTR(activations + 1188);
    conv2d_7_scratch1_array.data_start = AI_PTR(activations + 1188);
    conv2d_7_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_7_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_6_scratch1_array.data = AI_PTR(activations + 7200);
    conv2d_6_scratch1_array.data_start = AI_PTR(activations + 7200);
    conv2d_6_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_6_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_5_scratch1_array.data = AI_PTR(activations + 8000);
    conv2d_5_scratch1_array.data_start = AI_PTR(activations + 8000);
    conv2d_5_scratch0_array.data = AI_PTR(activations + 0);
    conv2d_5_scratch0_array.data_start = AI_PTR(activations + 0);
    conv2d_4_scratch1_array.data = AI_PTR(activations + 9600);
    conv2d_4_scratch1_array.data_start = AI_PTR(activations + 9600);
    conv2d_4_scratch0_array.data = AI_PTR(activations + 9216);
    conv2d_4_scratch0_array.data_start = AI_PTR(activations + 9216);
    conv2d_3_scratch1_array.data = AI_PTR(activations + 0);
    conv2d_3_scratch1_array.data_start = AI_PTR(activations + 0);
    conv2d_3_scratch0_array.data = AI_PTR(activations + 37452);
    conv2d_3_scratch0_array.data_start = AI_PTR(activations + 37452);
    conv2d_2_scratch1_array.data = AI_PTR(activations + 400);
    conv2d_2_scratch1_array.data_start = AI_PTR(activations + 400);
    conv2d_2_scratch0_array.data = AI_PTR(activations + 100);
    conv2d_2_scratch0_array.data_start = AI_PTR(activations + 100);
    conv2d_1_scratch1_array.data = AI_PTR(activations + 100);
    conv2d_1_scratch1_array.data_start = AI_PTR(activations + 100);
    conv2d_1_scratch0_array.data = AI_PTR(activations + 19316);
    conv2d_1_scratch0_array.data_start = AI_PTR(activations + 19316);
    conv2d_0_scratch1_array.data = AI_PTR(activations + 884);
    conv2d_0_scratch1_array.data_start = AI_PTR(activations + 884);
    conv2d_0_scratch0_array.data = AI_PTR(activations + 19316);
    conv2d_0_scratch0_array.data_start = AI_PTR(activations + 19316);
    input_output_array.data = AI_PTR(NULL);
    input_output_array.data_start = AI_PTR(NULL);
    conv2d_0_output_array.data = AI_PTR(activations + 884);
    conv2d_0_output_array.data_start = AI_PTR(activations + 884);
    conv2d_1_output_array.data = AI_PTR(activations + 19616);
    conv2d_1_output_array.data_start = AI_PTR(activations + 19616);
    conv2d_2_output_array.data = AI_PTR(activations + 400);
    conv2d_2_output_array.data_start = AI_PTR(activations + 400);
    conv2d_3_output_array.data = AI_PTR(activations + 0);
    conv2d_3_output_array.data_start = AI_PTR(activations + 0);
    conv2d_4_output_array.data = AI_PTR(activations + 9600);
    conv2d_4_output_array.data_start = AI_PTR(activations + 9600);
    conv2d_5_output_array.data = AI_PTR(activations + 8000);
    conv2d_5_output_array.data_start = AI_PTR(activations + 8000);
    conv2d_6_output_array.data = AI_PTR(activations + 7200);
    conv2d_6_output_array.data_start = AI_PTR(activations + 7200);
    conv2d_7_output_array.data = AI_PTR(activations + 25632);
    conv2d_7_output_array.data_start = AI_PTR(activations + 25632);
    conv2d_8_output_array.data = AI_PTR(activations + 9984);
    conv2d_8_output_array.data_start = AI_PTR(activations + 9984);
    conv2d_9_output_array.data = AI_PTR(activations + 28416);
    conv2d_9_output_array.data_start = AI_PTR(activations + 28416);
    conv2d_10_output_array.data = AI_PTR(activations + 10112);
    conv2d_10_output_array.data_start = AI_PTR(activations + 10112);
    conv2d_11_output_array.data = AI_PTR(activations + 4676);
    conv2d_11_output_array.data_start = AI_PTR(activations + 4676);
    conv2d_12_output_array.data = AI_PTR(activations + 11588);
    conv2d_12_output_array.data_start = AI_PTR(activations + 11588);
    conv2d_13_output_array.data = AI_PTR(activations + 16196);
    conv2d_13_output_array.data_start = AI_PTR(activations + 16196);
    conv2d_14_output_array.data = AI_PTR(activations + 6400);
    conv2d_14_output_array.data_start = AI_PTR(activations + 6400);
    conv2d_15_output_array.data = AI_PTR(activations + 15616);
    conv2d_15_output_array.data_start = AI_PTR(activations + 15616);
    conv2d_16_output_array.data = AI_PTR(activations + 6400);
    conv2d_16_output_array.data_start = AI_PTR(activations + 6400);
    conv2d_17_output_array.data = AI_PTR(activations + 15616);
    conv2d_17_output_array.data_start = AI_PTR(activations + 15616);
    conv2d_18_output_array.data = AI_PTR(activations + 6400);
    conv2d_18_output_array.data_start = AI_PTR(activations + 6400);
    conv2d_19_output_array.data = AI_PTR(activations + 15616);
    conv2d_19_output_array.data_start = AI_PTR(activations + 15616);
    conv2d_20_output_array.data = AI_PTR(activations + 6400);
    conv2d_20_output_array.data_start = AI_PTR(activations + 6400);
    conv2d_21_output_array.data = AI_PTR(activations + 15616);
    conv2d_21_output_array.data_start = AI_PTR(activations + 15616);
    conv2d_22_output_array.data = AI_PTR(activations + 6400);
    conv2d_22_output_array.data_start = AI_PTR(activations + 6400);
    conv2d_23_output_array.data = AI_PTR(activations + 11008);
    conv2d_23_output_array.data_start = AI_PTR(activations + 11008);
    conv2d_24_output_array.data = AI_PTR(activations + 5376);
    conv2d_24_output_array.data_start = AI_PTR(activations + 5376);
    conv2d_25_output_array.data = AI_PTR(activations + 2304);
    conv2d_25_output_array.data_start = AI_PTR(activations + 2304);
    conv2d_26_output_array.data = AI_PTR(activations + 10496);
    conv2d_26_output_array.data_start = AI_PTR(activations + 10496);
    conv2d_28_output_array.data = AI_PTR(activations + 1044);
    conv2d_28_output_array.data_start = AI_PTR(activations + 1044);
    reshape_29_fmt_output_array.data = AI_PTR(activations + 0);
    reshape_29_fmt_output_array.data_start = AI_PTR(activations + 0);
    nl_30_output_array.data = AI_PTR(activations + 8);
    nl_30_output_array.data_start = AI_PTR(activations + 8);
    nl_30_fmt_output_array.data = AI_PTR(NULL);
    nl_30_fmt_output_array.data_start = AI_PTR(NULL);
    
  }
  return true;
}



AI_DECLARE_STATIC
ai_bool person_dect_configure_weights(
  ai_network* net_ctx, const ai_buffer* weights_buffer)
{
  AI_ASSERT(net_ctx &&  weights_buffer && weights_buffer->data)

  ai_ptr weights = AI_PTR(weights_buffer->data);
  AI_ASSERT(weights)
  AI_UNUSED(net_ctx)

  {
    /* Updating weights (byte) offsets */
    
    conv2d_28_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_bias_array.data = AI_PTR(weights + 219056);
    conv2d_28_bias_array.data_start = AI_PTR(weights + 219056);
    conv2d_28_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_weights_array.data = AI_PTR(weights + 218544);
    conv2d_28_weights_array.data_start = AI_PTR(weights + 218544);
    conv2d_26_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_bias_array.data = AI_PTR(weights + 217520);
    conv2d_26_bias_array.data_start = AI_PTR(weights + 217520);
    conv2d_26_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_weights_array.data = AI_PTR(weights + 151984);
    conv2d_26_weights_array.data_start = AI_PTR(weights + 151984);
    conv2d_25_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_25_bias_array.data = AI_PTR(weights + 150960);
    conv2d_25_bias_array.data_start = AI_PTR(weights + 150960);
    conv2d_25_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_25_weights_array.data = AI_PTR(weights + 148656);
    conv2d_25_weights_array.data_start = AI_PTR(weights + 148656);
    conv2d_24_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_24_bias_array.data = AI_PTR(weights + 147632);
    conv2d_24_bias_array.data_start = AI_PTR(weights + 147632);
    conv2d_24_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_24_weights_array.data = AI_PTR(weights + 114864);
    conv2d_24_weights_array.data_start = AI_PTR(weights + 114864);
    conv2d_23_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_23_bias_array.data = AI_PTR(weights + 114352);
    conv2d_23_bias_array.data_start = AI_PTR(weights + 114352);
    conv2d_23_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_23_weights_array.data = AI_PTR(weights + 113200);
    conv2d_23_weights_array.data_start = AI_PTR(weights + 113200);
    conv2d_22_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_bias_array.data = AI_PTR(weights + 112688);
    conv2d_22_bias_array.data_start = AI_PTR(weights + 112688);
    conv2d_22_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_weights_array.data = AI_PTR(weights + 96304);
    conv2d_22_weights_array.data_start = AI_PTR(weights + 96304);
    conv2d_21_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_bias_array.data = AI_PTR(weights + 95792);
    conv2d_21_bias_array.data_start = AI_PTR(weights + 95792);
    conv2d_21_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_weights_array.data = AI_PTR(weights + 94640);
    conv2d_21_weights_array.data_start = AI_PTR(weights + 94640);
    conv2d_20_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_20_bias_array.data = AI_PTR(weights + 94128);
    conv2d_20_bias_array.data_start = AI_PTR(weights + 94128);
    conv2d_20_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_20_weights_array.data = AI_PTR(weights + 77744);
    conv2d_20_weights_array.data_start = AI_PTR(weights + 77744);
    conv2d_19_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_bias_array.data = AI_PTR(weights + 77232);
    conv2d_19_bias_array.data_start = AI_PTR(weights + 77232);
    conv2d_19_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_weights_array.data = AI_PTR(weights + 76080);
    conv2d_19_weights_array.data_start = AI_PTR(weights + 76080);
    conv2d_18_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_bias_array.data = AI_PTR(weights + 75568);
    conv2d_18_bias_array.data_start = AI_PTR(weights + 75568);
    conv2d_18_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_weights_array.data = AI_PTR(weights + 59184);
    conv2d_18_weights_array.data_start = AI_PTR(weights + 59184);
    conv2d_17_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_17_bias_array.data = AI_PTR(weights + 58672);
    conv2d_17_bias_array.data_start = AI_PTR(weights + 58672);
    conv2d_17_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_17_weights_array.data = AI_PTR(weights + 57520);
    conv2d_17_weights_array.data_start = AI_PTR(weights + 57520);
    conv2d_16_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_bias_array.data = AI_PTR(weights + 57008);
    conv2d_16_bias_array.data_start = AI_PTR(weights + 57008);
    conv2d_16_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_weights_array.data = AI_PTR(weights + 40624);
    conv2d_16_weights_array.data_start = AI_PTR(weights + 40624);
    conv2d_15_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_bias_array.data = AI_PTR(weights + 40112);
    conv2d_15_bias_array.data_start = AI_PTR(weights + 40112);
    conv2d_15_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_weights_array.data = AI_PTR(weights + 38960);
    conv2d_15_weights_array.data_start = AI_PTR(weights + 38960);
    conv2d_14_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_bias_array.data = AI_PTR(weights + 38448);
    conv2d_14_bias_array.data_start = AI_PTR(weights + 38448);
    conv2d_14_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_weights_array.data = AI_PTR(weights + 22064);
    conv2d_14_weights_array.data_start = AI_PTR(weights + 22064);
    conv2d_13_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_bias_array.data = AI_PTR(weights + 21552);
    conv2d_13_bias_array.data_start = AI_PTR(weights + 21552);
    conv2d_13_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_weights_array.data = AI_PTR(weights + 20400);
    conv2d_13_weights_array.data_start = AI_PTR(weights + 20400);
    conv2d_12_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_bias_array.data = AI_PTR(weights + 19888);
    conv2d_12_bias_array.data_start = AI_PTR(weights + 19888);
    conv2d_12_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_weights_array.data = AI_PTR(weights + 11696);
    conv2d_12_weights_array.data_start = AI_PTR(weights + 11696);
    conv2d_11_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_bias_array.data = AI_PTR(weights + 11440);
    conv2d_11_bias_array.data_start = AI_PTR(weights + 11440);
    conv2d_11_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_weights_array.data = AI_PTR(weights + 10864);
    conv2d_11_weights_array.data_start = AI_PTR(weights + 10864);
    conv2d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_bias_array.data = AI_PTR(weights + 10608);
    conv2d_10_bias_array.data_start = AI_PTR(weights + 10608);
    conv2d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_weights_array.data = AI_PTR(weights + 6512);
    conv2d_10_weights_array.data_start = AI_PTR(weights + 6512);
    conv2d_9_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_bias_array.data = AI_PTR(weights + 6256);
    conv2d_9_bias_array.data_start = AI_PTR(weights + 6256);
    conv2d_9_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_weights_array.data = AI_PTR(weights + 5680);
    conv2d_9_weights_array.data_start = AI_PTR(weights + 5680);
    conv2d_8_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_8_bias_array.data = AI_PTR(weights + 5424);
    conv2d_8_bias_array.data_start = AI_PTR(weights + 5424);
    conv2d_8_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_8_weights_array.data = AI_PTR(weights + 3376);
    conv2d_8_weights_array.data_start = AI_PTR(weights + 3376);
    conv2d_7_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_7_bias_array.data = AI_PTR(weights + 3248);
    conv2d_7_bias_array.data_start = AI_PTR(weights + 3248);
    conv2d_7_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_7_weights_array.data = AI_PTR(weights + 2960);
    conv2d_7_weights_array.data_start = AI_PTR(weights + 2960);
    conv2d_6_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_bias_array.data = AI_PTR(weights + 2832);
    conv2d_6_bias_array.data_start = AI_PTR(weights + 2832);
    conv2d_6_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_weights_array.data = AI_PTR(weights + 1808);
    conv2d_6_weights_array.data_start = AI_PTR(weights + 1808);
    conv2d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_bias_array.data = AI_PTR(weights + 1680);
    conv2d_5_bias_array.data_start = AI_PTR(weights + 1680);
    conv2d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_weights_array.data = AI_PTR(weights + 1392);
    conv2d_5_weights_array.data_start = AI_PTR(weights + 1392);
    conv2d_4_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_4_bias_array.data = AI_PTR(weights + 1264);
    conv2d_4_bias_array.data_start = AI_PTR(weights + 1264);
    conv2d_4_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_4_weights_array.data = AI_PTR(weights + 752);
    conv2d_4_weights_array.data_start = AI_PTR(weights + 752);
    conv2d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_bias_array.data = AI_PTR(weights + 688);
    conv2d_3_bias_array.data_start = AI_PTR(weights + 688);
    conv2d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_weights_array.data = AI_PTR(weights + 544);
    conv2d_3_weights_array.data_start = AI_PTR(weights + 544);
    conv2d_2_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_bias_array.data = AI_PTR(weights + 480);
    conv2d_2_bias_array.data_start = AI_PTR(weights + 480);
    conv2d_2_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_weights_array.data = AI_PTR(weights + 352);
    conv2d_2_weights_array.data_start = AI_PTR(weights + 352);
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(weights + 320);
    conv2d_1_bias_array.data_start = AI_PTR(weights + 320);
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(weights + 248);
    conv2d_1_weights_array.data_start = AI_PTR(weights + 248);
    conv2d_0_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_0_bias_array.data = AI_PTR(weights + 216);
    conv2d_0_bias_array.data_start = AI_PTR(weights + 216);
    conv2d_0_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_0_weights_array.data = AI_PTR(weights + 0);
    conv2d_0_weights_array.data_start = AI_PTR(weights + 0);
  }

  return true;
}


/**  PUBLIC APIs SECTION  *****************************************************/

AI_API_ENTRY
ai_bool ai_person_dect_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if ( report && net_ctx )
  {
    ai_network_report r = {
      .model_name        = AI_PERSON_DECT_MODEL_NAME,
      .model_signature   = AI_PERSON_DECT_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = {AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR,
                            AI_TOOLS_API_VERSION_MICRO, 0x0},

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 7957848,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .activations       = AI_STRUCT_INIT,
      .params            = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if ( !ai_platform_api_get_network_report(network, &r) ) return false;

    *report = r;
    return true;
  }

  return false;
}

AI_API_ENTRY
ai_error ai_person_dect_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_person_dect_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_handle ai_person_dect_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_person_dect_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if ( !net_ctx ) return false;

  ai_bool ok = true;
  ok &= person_dect_configure_weights(net_ctx, &params->params);
  ok &= person_dect_configure_activations(net_ctx, &params->activations);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_person_dect_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_person_dect_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}




#undef AI_PERSON_DECT_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_VERSION_MAJOR
#undef AI_TOOLS_VERSION_MINOR
#undef AI_TOOLS_VERSION_MICRO
#undef AI_TOOLS_API_VERSION_MAJOR
#undef AI_TOOLS_API_VERSION_MINOR
#undef AI_TOOLS_API_VERSION_MICRO
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

