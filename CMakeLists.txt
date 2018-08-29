cmake_minimum_required(VERSION 3.6)

set(SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR})

add_library(Nougat_dlfunctions
  SHARED
    ${SOURCE_DIR}/fake_dlfcn.c)

target_include_directories(Nougat_dlfunctions
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/include)

target_link_libraries(Nougat_dlfunctions
    android
    log)
