cmake_minimum_required(VERSION 3.3)
project(Invoice)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Invoice.cpp Invoice.h LineItem.cpp LineItem.h Product.cpp Product.h Address.cpp Address.h)
add_executable(Invoice ${SOURCE_FILES})