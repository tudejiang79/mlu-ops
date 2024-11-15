/*************************************************************************
 * Copyright (C) [2024] by Cambricon, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *************************************************************************/
#ifndef KERNEL_LGAMMA_LGAMMA_H_
#define KERNEL_LGAMMA_LGAMMA_H_

#include "mlu_op.h"
#include "kernels/tensor_stride_process/tensor_stride_process_host.h"

mluOpStatus_t MLUOP_WIN_API Kernel3StagePipelineLgamma(
    cnrtDim3_t k_dim, cnrtFunctionType_t k_type, cnrtQueue_t queue,
    mluOpDataType_t d_type, const void *x, void *y, const size_t num);

mluOpStatus_t MLUOP_WIN_API Kernel3StagePipelineWithStrideLgamma(
    const cnrtDim3_t k_dim, const cnrtFunctionType_t k_type,
    const cnrtQueue_t queue, const mluOpDataType_t d_type, const void *x,
    mluop::TensorShape x_shape, void *y, mluop::TensorShape y_shape,
    size_t element_num);

#endif  // KERNEL_LGAMMA_LGAMMA_H_
