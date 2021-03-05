//
// Created by artem on 05.03.2021.
//

#ifndef DEMODULATOR_TYPES_H
#define DEMODULATOR_TYPES_H

#include <cmath>

class complex {
public:
    complex(float Re, float Im) : Re(Re), Im(Im) {};

    complex() = default;

    float Re{}, Im{};
};

//Arg of complex number
float arg(const complex &a);

//Multiplication of complex and conjugate complex numbers
complex multi_conj(const complex &a, const complex &b);

//Phase difference between two complex numbers
float arg_diff(const complex &a, const complex &b);

#endif //DEMODULATOR_TYPES_H
