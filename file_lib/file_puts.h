//
// Created by artem on 04.03.2021.
//

#ifndef DEMODULATOR_FILE_PUTS_H
#define DEMODULATOR_FILE_PUTS_H

#include "demodulator.h"
#include <iostream>
#include <fstream>
#include <iterator>
#include <string>


std::vector<complex> input_from_binary(const std::string &file_input);

void output_to_binary(const std::vector<float> &demodulated_signal, const std::string &file_output);


#endif //DEMODULATOR_FILE_PUTS_H