//
// Created by artem on 05.03.2021.
//

#include "demodulator.h"
#include "file_puts.h"
#include "filter.h"

static const int MEGA = 1e6;
static const int KILO = 1e3;
static const unsigned FD = 1 * MEGA;


void print_info(std::vector<complex> &modulated_signal) {
    std::cout << modulated_signal.size() << std::endl;
}


int main() {
//    const std::string file_input_AM ("../source/am.flt");
//    const std::string file_output_AM("../source/float_24Khz_AM.bin");

    const std::string file_input_FM("../source/FM.flt");
    const std::string file_output_FM("../source/float_1Mhz_FM.bin");
    try {
//        std::vector<complex> modulated_signal = input_from_binary(file_input_AM);
//        std::vector<float> demodulated_signal_am = demodulate_am(modulated_signal);
//        output_to_binary(demodulated_signal_am, file_output_AM);

        std::vector<complex> modulated_signal = input_from_binary(file_input_FM);

        std::vector<float> demodulated_signal_fm = demodulate_fm(modulated_signal);
        std::vector<float> demodulated_signal_plus_LPF;
        LPF(demodulated_signal_fm, demodulated_signal_plus_LPF);

        output_to_binary(demodulated_signal_plus_LPF, file_output_FM);
    }


    catch (std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}