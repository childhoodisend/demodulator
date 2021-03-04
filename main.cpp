#include "demodulators.h"
#include "file_puts.h"

static const unsigned FD = 24000;

int main() {
    const std::string file_input ("../source/am.flt");
    const std::string file_output("../source/demod_am.bin");

    try {
        std::vector<complex> modulated_signal = input_from_binary(file_input);
        output_to_binary(modulated_signal, file_output);
    }
    catch (std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}