#include <iostream>

// Объявления функций обработки 1D и 3D гистограмм
void process_1d_histograms(const char* fileName);
void process_3d_histograms(const char* fileName);

int main() {
    // Указание входного ROOT-файла с гистограммами
    const char* inputFile = "/home/ubuntu/Temir/smash/build/data/sthbtmaker-repo/merged_output.root";
    
    // Последовательно выполняем обработку 1D и 3D корреляционных функций
    process_1d_histograms(inputFile);
    process_3d_histograms(inputFile);
    
    return 0;
}
