 //
// Created by 12893 on 2023-05-14.
//

#ifndef MACHINELALGOS_SRC_CONCEPTS_DEFAULTTYPES_HPP_
#define MACHINELALGOS_SRC_CONCEPTS_DEFAULTTYPES_HPP_

#include <concepts>
#include <type_traits>
#include <iterator>
namespace mla::concepts {

	template <class T, class U>
	concept ContainerOf = requires(T t) {
		typename T::value_type;
		requires std::same_as<typename T::value_type, U>;
		{ std::begin(t) } -> std::forward_iterator;
		{ std::end(t) } -> std::forward_iterator;
		{ t.size() } -> std::convertible_to<std::size_t>;
	};
}

#endif //MACHINELALGOS_SRC_CONCEPTS_DEFAULTTYPES_HPP_
