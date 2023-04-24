//
// Created by Danial javady on 2023-04-24.
//

#ifndef MACHINELALGOS_SRC_MODELS_LINEAR_HPP_
#define MACHINELALGOS_SRC_MODELS_LINEAR_HPP_
#include "Module.hpp"

template <class T>
class Linear : Module<T> {
	int in_channels;
	int out_channels;
	T bias; // TODO implement


};

#endif //MACHINELALGOS_SRC_MODELS_LINEAR_HPP_
