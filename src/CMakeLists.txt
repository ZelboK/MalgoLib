set(source_files
        main.cpp
        algorithms/ModuleAlgorithms.hpp
        algorithms/ModuleAlgorithms.h
        concepts/Tensor.hpp
        traits/Tensor.hpp
        models/Module.hpp
        models/activations/Linear.hpp
        models/BatchNormalization.hpp
        models/Shape.hpp)

add_library(Source ${source_files})
target_link_libraries(Source PRIVATE
        xtensor xtensor::optimize)