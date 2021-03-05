cmake_minimum_required(VERSION 3.17)
project(demodulator)

set(CMAKE_CXX_STANDARD 14)
include_directories(demodulator_lib filter_lib file_lib)

add_executable(demodulator main.cpp
        demodulator_lib/demodulator.h
        demodulator_lib/demodulator.cpp
        file_lib/file_puts.h
        file_lib/file_puts.cpp
        demodulator_lib/types.h
        filter_lib/filter.h
        filter_lib/filter.cpp demodulator_lib/types.cpp
        filter_lib/fir_sr1M_cut_50k_x2=150k.h)