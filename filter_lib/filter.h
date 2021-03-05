//
// Created by artem on 05.03.2021.
//

#ifndef DEMODULATOR_FILTER_H
#define DEMODULATOR_FILTER_H

#include <vector>


void LPF(const std::vector<float> &source_signal, std::vector<float> &output_signal);


#endif //DEMODULATOR_FILTER_H
