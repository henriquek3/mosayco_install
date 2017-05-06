cmake_minimum_required(VERSION 3.7)
project(Mosayco_install)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp menuPrincipal.h testes.h)
add_executable(msc_cmd ${SOURCE_FILES})