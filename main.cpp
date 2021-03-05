//
// Created by artem on 05.03.2021.
//

#include "demodulator.h"
#include "file_lib/file_puts.h"

static const int MEGA = 1e6;
static const int KILO = 1e3;
static const unsigned FD = 1 * MEGA;


void print_info(std::vector<complex> &modulated_signal) {
    std::cout << modulated_signal.size() << std::endl;
}


int main() {
//    const std::string file_input_AM ("../source/am.flt");
//    const std::string file_output_AM("../source/demod_am.bin");

    const std::string file_input_FM("../source/SR_1M_IQF_modFM.flt");
    const std::string file_output_FM("../source/demod_fm.bin");
    try {
//        std::vector<complex> modulated_signal = input_from_binary(file_input_AM);
//        std::vector<float> demodulated_signal_am = demodulate_am(modulated_signal);
//        output_to_binary(demodulated_signal_am, file_output_AM);

        std::vector<complex> modulated_signal = input_from_binary(file_input_FM);
//        print_info(modulated_signal);
        std::vector<float> demodulated_signal_fm = demodulate_fm(modulated_signal);
        output_to_binary(demodulated_signal_fm, file_output_FM);
    }


    catch (std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}