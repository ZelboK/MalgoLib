//
// Created by Danial javady on 2023-04-24.
//

#ifndef MACHINELALGOS_SRC_TRAITS_TENSOR_HPP_
#define MACHINELALGOS_SRC_TRAITS_TENSOR_HPP_


namespace mla {
	template <class T>
	using tensor_value_t = T::value_type;

	template <class T>
	using tensor_nd_t = typename T::tensor_nd_type; // idk how i feel about this naming


}

#endif //MACHINELALGOS_SRC_TRAITS_TENSOR_HPP_
