//
// Created by artem on 05.03.2021.
//

#ifndef DEMODULATOR_FILTER_H
#define DEMODULATOR_FILTER_H

#include <vector>
#include <types.h>

void LPF(const std::vector<IQ> &source_signal, std::vector<IQ> &output_signal);


#endif //DEMODULATOR_FILTER_H
