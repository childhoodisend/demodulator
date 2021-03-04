//
// Created by artem on 04.03.2021.
//
#include "demodulators.h"

#include <cmath>

std::vector<float> demodulate_am(const std::vector<complex> &modulated_signal){
    std::vector<float> demodulated_signal(modulated_signal.size());
    for(size_t i = 0; i < modulated_signal.size(); ++i){
        float Re = modulated_signal[i].Re, Im = modulated_signal[i].Im;
        float Amplitude = std::sqrt(Re*Re + Im*Im);
        demodulated_signal[i] = Amplitude;
    }

    return (std::vector<float>)demodulated_signal;
}

std::vector<float> demodulate_fm(const std::vector<complex> &modulated_signal);