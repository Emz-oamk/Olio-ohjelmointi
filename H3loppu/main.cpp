#include <iostream>
#include <string>

//Luokka Chef
class Chef {
protected:
    std::string name;

public:
    //Konstruktori
    Chef(std::string chefName) : name(chefName) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    //Metodi 1
    void makeSalad() {
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }

    //Metodi 2
    void makeSoup() {
        std::cout << "Chef " << name << " makes soup" << std::endl;
    }

    //Destruktori
    virtual ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }
};

//Aliluokka ItalianChef
class ItalianChef : public Chef {
public:
    //Konstruktori
    ItalianChef(std::string chefName) : Chef(chefName) {
        std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
    }

    //Metodi makePasta
    void makePasta() {
        std::cout << "Italian Chef " << name << " makes pasta" << std::endl;
    }

    //Metodi getName
    std::string getName() const {
        return name;
    }

    // Destruktori
    ~ItalianChef() {
        std::cout << "ItalianChef " << name << " destruktori" << std::endl;
    }
};

int main() {
    //ItalianChef -olio pinomuistiin
    ItalianChef italianChef("Anthony Bourdain");

    //Kutsu Metodit
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    std::cout << "name of the Italian Chef is " << italianChef.getName() << std::endl;

    return 0;
}








