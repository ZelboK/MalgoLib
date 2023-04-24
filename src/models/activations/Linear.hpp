//
// Created by Danial javady on 2023-04-24.
//

#ifndef MACHINELALGOS_SRC_MODELS_LINEAR_HPP_
#define MACHINELALGOS_SRC_MODELS_LINEAR_HPP_
#include "models/Module.hpp"

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
	int input_size;
	int output_size;
	T bias;
 public:
	// Constructor for the Linear class
	Linear(int in_size, int out_size)
	{
		input_size = in_size;
		output_size = out_size;
	}

	// Implementation of the forward method for the Linear class
	T forward() override
	{
		// TODO: Implement forward pass for Linear module
		// and return the output tensor
	}
};


#endif //MACHINELALGOS_SRC_MODELS_LINEAR_HPP_
