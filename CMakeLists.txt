# CMake version
cmake_minimum_required(VERSION 3.21)

# Declare project
project(env_814_2)

# Set c++ standard
set(CMAKE_CXX_STANDARD 17)

# Set output directories
set(DEFAULT_CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

# 3rd parties
find_package(Python COMPONENTS Interpreter Development)

add_subdirectory(Libraries/pybind11)
include_directories(Libraries/pybind11/include)

# Includes
include_directories(Includes)

# Project module
add_subdirectory(Sources/core)
add_subdirectory(Sources/py)
