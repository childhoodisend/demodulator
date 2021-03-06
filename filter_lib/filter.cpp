//
// Created by artem on 05.03.2021.
//

#include <iostream>
#include <filter.h>
#include <types.h>
#include "fir_sr1M_cut_50k_x2=150k.h"

static const size_t window = 128;

void LPF(const std::vector<IQ> &source_signal, std::vector<IQ> &output_signal) {
    if (source_signal.size() < window)
        std::cerr << "source_signal.size() < window" << std::endl;

    IQ y_j(0.0f, 0.0f);
    for (size_t j = window; j < source_signal.size() - window; ++j) {

        y_j.Re = y_j.Im = 0.0f;

        for (size_t i = 0; i < window; ++i) {
            y_j.Re += (source_signal[j - i].Re * B[i]);
            y_j.Im += (source_signal[j - i].Im * B[i]);
        }

        output_signal[j - window] = y_j;
    }

    std::cout << "LPF has been applied successfully!" << std::endl;
}