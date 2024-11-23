#include <iostream>
#include <string>

class Chef {
private:
    std::string name;

public:
    // Konstruktori
    Chef(std::string chefName) : name(chefName) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    // makeSalad -metodi
    void makeSalad() {
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }

    // makeSoup -metodi
    void makeSoup() {
        std::cout << "Chef " << name << " makes soup" << std::endl;
    }

    // Destruktori
    ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }
};

int main() {
    // Chef -olion luominen pinomuistiin
    Chef chef("Gordon Ramsay");

    // Kutsu metodit
    chef.makeSalad();
    chef.makeSoup();

    // End of Main, Byebye destructor :)
    return 0;
}
