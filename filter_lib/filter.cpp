//
// Created by artem on 05.03.2021.
//
#include <filter.h>
#include <iostream>
#include "fir_sr1M_cut_50k_x2=150k.h"

static const size_t window = 128;

void LPF(const std::vector<float> &source_signal, std::vector<float> &output_signal) {
    if (source_signal.size() < window)
        std::cerr << "source_signal.size() < window" << std::endl;

    for (size_t j = window; j < source_signal.size(); ++j) {
        float y_j = 0.0f;
        for (size_t i = 0; i < window; ++i)
            y_j += B[i] * source_signal[j - i];
        output_signal.push_back(y_j);
    }
}