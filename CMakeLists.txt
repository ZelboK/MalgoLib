cmake_minimum_required(VERSION 3.24)
project(MachineLAlgos)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS Off)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_EXPORT_COMPILE_COMMANDS On)
add_executable(MachineLAlgos src/main.cpp)
set(CMAKE_TOOLCHAIN_FILE
        "-DCMAKE_TOOLCHAIN_FILE=${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")

find_package(Catch2 CONFIG REQUIRED)
find_package(xtensor CONFIG REQUIRED)

target_include_directories(MachineLAlgos PUBLIC ${CMAKE_CURRENT_BINARY_DIR} src)
target_link_libraries(MachineLAlgos PRIVATE xtensor xtensor::optimize)


enable_testing()
add_subdirectory(src)
add_subdirectory(test)