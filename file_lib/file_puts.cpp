//
// Created by artem on 04.03.2021.
//
#include "file_puts.h"

/*
 * Функции считывания и записи в бинарные файлы
 */

std::vector<IQ> input_from_binary(const std::string &file_input) {
    std::fstream fin(file_input, std::ios_base::binary | std::ios_base::in);
    if (fin) {
        std::vector<float> buf((std::istreambuf_iterator<char>(fin)), std::istreambuf_iterator<char>());
        fin.close();

        std::vector<IQ> complex_signal;
        IQ comp{};
        for (size_t i = 0; i < buf.size() - 1; i += 2) {
            comp.Re = buf[i];
            comp.Im = buf[i + 1];
            complex_signal.push_back(comp);
        }
        std::cout << "Binary file has been read successfully!" << std::endl;
        return (std::vector<IQ>) complex_signal;

    } else throw std::invalid_argument("Invalid input file!");
}

void output_to_binary(const std::vector<float> &demodulated_signal, const std::string &file_output) {
    std::ofstream fout(file_output, std::ios_base::binary | std::ios_base::out);
    if (fout) {
        for (auto i : demodulated_signal) {
            fout.write((char *) &i, sizeof(i));
        }
        fout.close();
        std::cout << "Written to binary file successfully!" << std::endl;
    } else throw std::invalid_argument("Invalid output file!");
}