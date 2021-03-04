cmake_minimum_required(VERSION 3.17)
project(demodulator)

set(CMAKE_CXX_STANDARD 14)
include_directories(lib)

add_executable(demodulator main.cpp lib/demodulators.h lib/demodulators.cpp lib/file_puts.h lib/file_puts.cpp lib/types.h)