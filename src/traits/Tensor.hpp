//
// Created by Danial javady on 2023-04-24.
//

#ifndef MACHINELALGOS_SRC_TRAITS_TENSOR_HPP_
#define MACHINELALGOS_SRC_TRAITS_TENSOR_HPP_


namespace mla {
	template <class T>
	using tensor_value_t = T::value_type;
}

#endif //MACHINELALGOS_SRC_TRAITS_TENSOR_HPP_
