//
// Created by artem on 04.03.2021.
//
#include "file_puts.h"

std::vector<complex> input_from_binary(const std::string &filename) {
    std::fstream fin(filename, std::ios_base::binary | std::ios_base::in);
    if (fin) {
        std::vector<float> buf((std::istreambuf_iterator<char>(fin)), std::istreambuf_iterator<char>());
        fin.close();

        std::vector<complex> complex_signal;
        complex comp{};
        for (size_t i = 0; i < buf.size() - 1; i+=2){
            comp.Re = buf[i];
            comp.Im = buf[i+1];
            complex_signal.push_back(comp);
        }

        return (std::vector<complex>)complex_signal;

    } else throw std::invalid_argument("Invalid input file!");
}

void output_to_binary(const std::vector<complex> &modulated_signal, const std::string &file_output){
    std::ofstream fout("../source/demod_am.bin",std::ios_base::binary | std::ios_base::out);

    if(fout) {
        std::vector<float> demodulated_signal = demodulate_am(modulated_signal);
        for (auto i : demodulated_signal) {
            fout.write((char*)&i,sizeof (i));
        }
        fout.close();
    } else throw std::invalid_argument("Invalid output file!");

}
