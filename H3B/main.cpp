#include <iostream>

class Animal {
public:
    virtual void callOut() {
        std::cout<< "Elain aantelee" << std::endl;
    }

    virtual ~Animal() {
        std::cout << "Animal-olio byebye" << std::endl;
    }
};

class Dog : public Animal {
public:
    void callOut() override {
        std::cout << "Koira haukkuu!" << std::endl;
    }

    ~Dog() override {
        std::cout << "Dog-olio byebye" << std::endl;
    }
};

int main() {
    Animal* animal = new Animal();
    animal->callOut();

    Dog* dog = new Dog();
    dog->callOut();

    delete animal;
    delete dog;

    return 0;
}
