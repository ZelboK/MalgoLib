//
// Created by Danial javady on 2023-04-24.
//

#ifndef MACHINELALGOS_SRC_CONCEPTS_TENSOR_HPP_
#define MACHINELALGOS_SRC_CONCEPTS_TENSOR_HPP_

#include "traits/Tensor.hpp"

namespace mla::concepts {
	template <class I>
	concept Tensor = requires {
		typename tensor_value_t<I>;
	};
}

#endif //MACHINELALGOS_SRC_CONCEPTS_TENSOR_HPP_
