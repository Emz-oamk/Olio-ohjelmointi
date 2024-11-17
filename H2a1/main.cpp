#include <iostream>

using namespace std;

// Määritä luokka Car
class Car {
private:
    string brand; // Auton merkki
    string model; // -ll- malli
    int yearModel; // -ll- valmistusvuosi

public:
    // Metodi tulostaa auton tiedot
    void printData() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << yearModel << endl;
    }
    // Metodit jäsenmuuttujien asettamiseen
    void setBrand(string b) {
        brand = b;
    }
    void setModel(string m) {
        model = m;
    }
    void setYearModel(int y) {
        yearModel = y;
    }
};

// Main ohjelma!
int main() {
    // Luo Car-olio pinomuistiin
    Car myCar;

    // Aseta auton tiedot
    myCar.setBrand("Nissan");
    myCar.setModel("Almera");
    myCar.setYearModel(2005);

    // Tulosta auton tiedot
    myCar.printData();

    return 0;
}
