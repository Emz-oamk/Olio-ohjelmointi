#include <iostream>
#include <string>
using namespace std;

// Engine -luokka
class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine() : horsepower(0), displacement(0.0) {}
    Engine(int hp, double disp) : horsepower(hp), displacement(disp) {}

    int getHorsepower() const {
        return horsepower;
    }

    void setHorsepower(int hp) {
        horsepower = hp;
    }

    double getDisplacement() const {
        return displacement;
    }

    void setDisplacement(double disp) {
        displacement = disp;
    }
};

// Wheel -luokka
class Wheel {
private:
    int size;
    string type;

public:
    Wheel() : size(0), type("") {}
    Wheel (int sz, string tp) : size(sz), type(tp) {}

    int getSize() const {
        return size;
    }

    void setSize(int sz) {
        size = sz;
    }

    string getType() const {
        return type;
    }

    void setType(const string& tp) {
        type = tp;
    }
};

// Car -luokka
class Car {
private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;
    string model;
    string brand;

public:
    Car() : model(""), brand("") {}
    Car(const string& mdl, const string& brnd) : model(mdl), brand(brnd) {}

    void setEngine() {
        objEngine.setHorsepower(150);
        objEngine.setDisplacement(2.0);
    }

    void setWheels() {
        objWheel1.setSize(17);
        objWheel1.setType("kesarengas");

        objWheel2.setSize(17);
        objWheel2.setType("kesarengas");

        objWheel3.setSize(17);
        objWheel3.setType("kesarengas");

        objWheel4.setSize(17);
        objWheel4.setType("kesarengas");
    }

    string getModel() const {
        return model;
    }

    void setModel(const string& mdl) {
        model = mdl;
    }

    string getBrand() const {
        return brand;
    }

    void setBrand(const string& brnd) {
        brand = brnd;
    }

    void printDetails() const {
        cout << "Auto : " << model << " " << brand << endl;
        cout << "Moottori: " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << " L" << endl;
        cout << "Rengas 1:" << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
        cout << "Rengas 2:" << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
        cout << "Rengas 3:" << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
        cout << "Rengas 4:" << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
    }
};

int main() {
    Car car("Corolla", "Toyota");
    car.setEngine();
    car.setWheels();
    car.printDetails();

    return 0;
}

















