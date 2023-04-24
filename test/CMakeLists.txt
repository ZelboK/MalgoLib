
add_executable(MLAlgosTests
        MainTestSpec.cpp)

set(internal_libs Source)

target_link_libraries(MLAlgosTests Catch2::Catch2 Catch2::Catch2WithMain ${internal_libs})
target_include_directories(MLAlgosTests PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
        )

add_test(NAME MLAlgosTests COMMAND MLAlgosTests)

