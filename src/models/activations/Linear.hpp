//
// Created by Danial javady on 2023-04-24.
//

#ifndef MACHINELALGOS_SRC_MODELS_LINEAR_HPP_
#define MACHINELALGOS_SRC_MODELS_LINEAR_HPP_
#include "models/Module.hpp"
#include "models/Shape.hpp"

/*  represents the linear/dense layer activation function that performs
 *  a linear transformation on the incoming tensor and maps it to the output
 *
 *  y = x(A)^T + b
 *
 *  x: Tensor
 *  A: Linear weights/values?
 *  b: bias
 * */
template<class T>
class Linear : public Module<T>
{
 private:
	// Private member variables for the Linear class
	Shape shape;
	T bias;
 public:
	// Constructor for the Linear class
	Linear(int in_size, int out_size) : shape{0, out_size, in_size} {}

	// Implementation of the forward method for the Linear class
	T forward() override
	{
		// TODO: Implement forward pass for Linear module
		// and return the output tensor
	}
};


#endif //MACHINELALGOS_SRC_MODELS_LINEAR_HPP_

/*
 * Linear(in, out)
 * This should represent:
 * in: Nodes/neurons that the linear layer is connected to as input
 * out: The size? dimension?
 * The dot product has to be compatible.
 * The linear layer consists of two tensors:
 * Weights and Biases.
 * Do we have enough information to conduct the Linear operation?
 *
 * A tensor should have shape:
 * R(input) x C(input)
 * R(linear) x C(linear)
 *
 * C(input) == R(linear)
 *
 *  It would seem as if the linear layer does NOT care about how many nodes
 *  it is connected to? Or better described as:
 *  The actual connection? Is done by something else.
 *
 *  So if i have a 4x3 input tensor
 *  and a Linear layer : Linear(4, 2)
 *  This won't work because 3!=4.
 *
 *  4x3 and Linear (3, 2)
 *  should work. My question is basically this: How the hell do i know what dimensions
 *  the linear layer should have?
 *
 * NO! Linear weights shape: (output_features, input_features)
 * Linear biases shape: (output_features)
 */