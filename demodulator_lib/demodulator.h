//
// Created by artem on 04.03.2021.
//

#ifndef DEMODULATOR_DEMODULATOR_H
#define DEMODULATOR_DEMODULATOR_H

#include <vector>
#include "types.h"


std::vector<float> demodulate_am(const std::vector<complex> &modulated_signal);

std::vector<float> demodulate_fm(const std::vector<complex> &modulated_signal);


#endif //DEMODULATOR_DEMODULATOR_H
