cmake_minimum_required(VERSION 3.6)

project(fake-dlfcn)

set(LIB_FAKE_DLFCN_DIR ${CMAKE_CURRENT_SOURCE_DIR} CACHE INTERNAL "fake-dlfcn library" FORCE)

set(SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR})

add_library(fake-dlfcn STATIC ${SOURCE_DIR}/fake_dlfcn.c ${SOURCE_DIR}/fake_dlfcn.h)
target_include_directories(fake-dlfcn PUBLIC ${SOURCE_DIR})
if(ANDROID)
target_link_libraries(fake-dlfcn android log)
endif(ANDROID)

