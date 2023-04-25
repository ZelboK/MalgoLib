file(REMOVE_RECURSE
  "libTensorAlgorithms.a"
  "libTensorAlgorithms.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/TensorAlgorithms.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
