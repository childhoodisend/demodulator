//
// Created by artem on 05.03.2021.
//

#ifndef DEMODULATOR_TYPES_H
#define DEMODULATOR_TYPES_H

#include <cmath>

class IQ {
public:
    IQ(float Re, float Im) : Re(Re), Im(Im) {};

    IQ() = default;

    float Re{}, Im{};
};

//Arg of IQ number
float arg(const IQ &a);

//Multiplication of IQ and conjugate IQ numbers
IQ multi_conj(const IQ &a, const IQ &b);

//Phase difference between two IQ numbers
float arg_diff(const IQ &a, const IQ &b);

#endif //DEMODULATOR_TYPES_H
