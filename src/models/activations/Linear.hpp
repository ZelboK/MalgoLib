//
// Created by Danial javady on 2023-04-24.
//

#ifndef MACHINELALGOS_SRC_MODELS_LINEAR_HPP_
#define MACHINELALGOS_SRC_MODELS_LINEAR_HPP_

#include <xtensor.hpp>
#include "models/Module.hpp"
#include "algorithms/ModuleAlgorithms.hpp"

/*  represents the linear/dense layer activation function that performs
 *  a linear transformation on the incoming tensor and maps it to the output
 *
 *  y = x(A)^T + b
 *
 *  x: Tensor
 *  A: Linear weights/values?
 *  b: bias
 * */

template<class T, class Container>
requires std::is_arithmetic_v<T>
class Linear : public Module<T>
{
 private:
//	Container weights;
//  Container biases;
	xt::xarray<T> weights; // Do we want to couple xtensor and the Linear implementation?
	xt::xarray<T> bias;
 public:
	Linear(size_t in_size, size_t out_size) :
		weights(xt::random::randn<T>({ out_size,
									   in_size })),
		bias(xt::random::randn<T>({ out_size }))
	{
	}

	// is one better than the other?
//	Linear(size_t in_size, size_t out_size)
//	{
//		this->weightss = ModuleAlgos::normalDistTensor<T>({out_size, in_size});
//		this->biases = ModuleAlgos::normalDistTensor<T>({out_size});
//	}

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
 *
 * A tensor should have shape:
 * R(input) x C(input)
 * R(linear) x C(linear)
 * Linear weights shape: (output_features, input_features)
 * Linear biases shape: (output_features)
 */