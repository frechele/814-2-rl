set(target py814_2)

file(GLOB_RECURSE sources
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

pybind11_add_module(${target} ${sources})
target_link_libraries(${target} PRIVATE core)
