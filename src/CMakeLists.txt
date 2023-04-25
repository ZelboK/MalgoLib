set(source_files
        main.cpp
        algorithms/ModuleAlgorithms.hpp
        concepts/Tensor.hpp
        traits/Tensor.hpp
        models/Module.hpp
        models/activations/Linear.hpp
        models/BatchNormalization.hpp
        )

add_library(Source ${source_files})
