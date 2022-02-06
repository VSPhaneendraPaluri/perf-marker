cmake_minimum_required(VERSION 3.10)

include_directories(${CMAKE_CURRENT_LIST_DIR}/construction)
include_directories(${CMAKE_CURRENT_LIST_DIR}/utilities)

add_subdirectory(construction)
add_subdirectory(utilities)
add_subdirectory(runner)