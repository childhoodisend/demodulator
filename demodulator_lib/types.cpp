//
// Created by artem on 05.03.2021.
//
#include "types.h"

float arg(const complex &a) {
    if (a.Re == 0.0f && a.Im < 0)
        return (float) M_PI;

    return (float) std::atan2(a.Im, a.Re);
}

complex multi_conj(const complex &a, const complex &b) {
    return {a.Re * b.Re + a.Im * b.Im, a.Im * b.Re - a.Re * b.Im};
}

float arg_diff(const complex &a, const complex &b) {
    return (float) arg(multi_conj(a, b));
}