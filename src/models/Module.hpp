//
// Created by 12893 on 2023-04-23.
//

#ifndef MACHINELALGOS_SRC_MODELS_MODULE_HPP_
#define MACHINELALGOS_SRC_MODELS_MODULE_HPP_
#include <iostream>

template<class T>
class Module
{
 public:
	virtual T forward() = 0;
};

#endif //MACHINELALGOS_SRC_MODELS_MODULE_HPP_
