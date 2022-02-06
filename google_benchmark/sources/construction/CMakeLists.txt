cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME construction)

set(
  SOURCES
  vector.cpp
  vector.h
)

add_library(${PROJECT_NAME} ${SOURCES})

add_dependencies(${PROJECT_NAME} utilities)

set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER sources)
