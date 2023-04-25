//
// Created by Danial javady on 2023-04-24.
//

#ifndef MACHINELALGOS_SRC_ALGORITHMS_MODULEALGORITHMS_HPP_
#define MACHINELALGOS_SRC_ALGORITHMS_MODULEALGORITHMS_HPP_
#include <xtensor.hpp>

// potential wrapper around xtensor lib?
namespace ModuleAlgos {

	// initialize tensor at runtime with a normal distribution
	template <class T>
	requires std::is_arithmetic_v<T>
	xt::xarray<T> normalDistTensor(std::vector<size_t> shape) {
		return xt::random::randn<double>(shape);
	}

}

#endif //MACHINELALGOS_SRC_ALGORITHMS_MODULEALGORITHMS_HPP_
