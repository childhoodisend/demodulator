//
// Created by artem on 04.03.2021.
//
#include "demodulator.h"

#include <cmath>
#include <iostream>

//AM demodulator
std::vector<float> demodulate_am(const std::vector<complex> &modulated_signal) {
    if (modulated_signal.empty()) {
        std::cerr << "modulated signal in demodulate_am is empty!" << std::endl;
    }

    std::vector<float> demodulated_signal_am(modulated_signal.size());
    for (size_t i = 0; i < modulated_signal.size(); ++i) {
        float Re = modulated_signal[i].Re, Im = modulated_signal[i].Im;

        float Amplitude = sqrtf(Re * Re + Im * Im);
        demodulated_signal_am[i] = Amplitude;
    }

    return (std::vector<float>) demodulated_signal_am;
}

//FM demodulator
std::vector<float> demodulate_fm(const std::vector<complex> &modulated_signal) {
    if (modulated_signal.empty()) {
        std::cerr << "modulated signal in demodulate_fm is empty!" << std::endl;
    }

    std::vector<float> demodulated_signal_fm;
    for (size_t i = 0; i < modulated_signal.size() - 1; ++i) {
        demodulated_signal_fm.push_back(arg_diff(modulated_signal[i + 1], modulated_signal[i]));
    }

    return (std::vector<float>) demodulated_signal_fm;
}