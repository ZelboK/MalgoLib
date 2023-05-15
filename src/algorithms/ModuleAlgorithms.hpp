//
// Created by Danial javady on 2023-04-24.
//

#ifndef MACHINELALGOS_SRC_ALGORITHMS_MODULEALGORITHMS_HPP_
#define MACHINELALGOS_SRC_ALGORITHMS_MODULEALGORITHMS_HPP_
#include <xtensor.hpp>
#include "concepts/DefaultTypes.hpp"

// potential wrapper around xtensor lib?

namespace ModuleAlgos {
	using mla::concepts::ContainerOf;

	template <typename T>
	using Tensor = xt::xarray<T>;

	// initialize tensor at runtime with a normal distribution
	template <class T>
	requires std::is_arithmetic_v<T>
	xt::xarray<T> normalDistTensor(std::vector<size_t> shape) {
		return xt::random::randn<double>(shape);
	}

	template <class T, ContainerOf<Tensor<T>> Batch>
	auto computeBatchMean(Batch tensors) {
		return std::transform_reduce(tensors.begin(), tensors.end(),
			0.0,
			std::plus<>(),
			xt::sum) / tensors.size();
	}

	template <class T, ContainerOf<Tensor<T>> Batch >
	auto computeVariance(Batch tensors) {
		auto mean = computeBatchMean(tensors);

	}

}

#endif //MACHINELALGOS_SRC_ALGORITHMS_MODULEALGORITHMS_HPP_
