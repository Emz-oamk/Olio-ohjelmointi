#include <iostream>

using namespace std;

void kertoma(int num) {
    if (num > 10) {
        std::cout << "Luku liian iso" << std::endl;
    } else if (num < 1) {
        std::cout << "Ei voida laskea" <<std::endl;
    } else {
        int tulos = 1;
        for (int i = 1; i <= num; i++) {
            tulos *= i;
        }
        std::cout << "Kertoma: " << tulos << std::endl;
    }
}
