cmake_minimum_required(VERSION 3.6)

add_library(native_app_glue
  STATIC
    ${ANDROID_NDK}/sources/android/native_app_glue/android_native_app_glue.c)

set(SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/src/main/cpp)
set(LIB_DIR ${CMAKE_CURRENT_LIST_DIR}/..)

add_library(test2
  SHARED
    ${SOURCE_DIR}/main.c
    ${SOURCE_DIR}/ft.c
    ${SOURCE_DIR}/testcpp.cpp
    ${LIB_DIR}/fake_dlfcn.c)

target_include_directories(test2
  PRIVATE
    ${ANDROID_NDK}/sources/android/native_app_glue
    ${SOURCE_DIR}/include/freetype)

target_link_libraries(test2
    native_app_glue
    android
    log)
