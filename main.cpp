#include <iostream>
#include <vector>
#include <cmath>

static const unsigned FD = 24000;

struct complex{
    float Re{}, Im{};
};

std::vector<complex> dump_file_float(const char *filename){
    FILE *fin;
    fin = fopen((const char *) filename, "rb");
    std::vector<complex> buf;
    complex comp{};
    if(fin) {
        while (!std::feof(fin)) {
            fread(&comp.Re, sizeof(comp.Re), 1, fin);
            fread(&comp.Im, sizeof(comp.Im), 1, fin);
            buf.push_back(comp);
        }
        fclose(fin);
        return (std::vector<complex>)buf;
    }
    else throw std::invalid_argument("Invalid file?");
}

void demod_am(const std::vector<complex> &modulated_signal){
    FILE *fout;
    fout = fopen("../source/demod_am.bin", "wb");

    if(fout) {
        for (auto i : modulated_signal) {
            float A = std::sqrt(i.Re * i.Re + i.Im * i.Im);
            fwrite(&A, sizeof(A), 1, fout);
        }
    }
    fclose(fout);
}

int main() {
    const char* filename = "../source/am.flt";
    try {
        std::vector<complex> modulated_signal = dump_file_float(filename);
        demod_am(modulated_signal);
    }
    catch (std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}