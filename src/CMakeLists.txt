set(source_files
        main.cpp
        models/Module.hpp
        algorithms/ModuleAlgorithms.hpp
        algorithms/ModuleAlgorithms.h
        concepts/Tensor.hpp
        traits/Tensor.hpp
        models/Linear.hpp models/Linear.hpp)

add_library(Source ${source_files})
