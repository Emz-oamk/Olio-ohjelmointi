#include <iostream>

using namespace std;

class ClassB {
private:
    string info;
public:
    void setInfo(string value) {
        info = value;
    }
    string getInfo() {
        return info;
    }
};

class AssosiationA {
private:
    ClassB objectB;
public:
    AssosiationA(ClassB value) : objectB(value) {}
    string getBinfo() {
        return objectB.getInfo();
    }
    void setBinfo(string value) {
        objectB.setInfo(value);
    }
};

class AggregationA {
private:
    ClassB &refB;
public:
    AggregationA(ClassB &value) : refB(value) {}
    string getBinfo() {
        return refB.getInfo();
    }
    void setBinfo(string value) {
        refB.setInfo(value);
    }
};


int main() {
    // int -muuttujat a ja b
    int a = 5;
    int b = 10;

    // Tulosta arvot ja osoitteet
    std::cout << "a: arvo on: " << a << " ja osoite on: " << &a << std::endl;
    std::cout << "b: arvo on: " << a << " ja osoite on: " << &b << std::endl;

    // Osoitinmuuttuja myPointer ja muuttujan a osoite
    int* myPointer = &a;

    // Tulostaa osoittimen osoittama osoite ja sisältö
    std::cout << "Pointterin osoittama osoite on: " << myPointer << std::endl;
    std::cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << std::endl;

    // Sijoita osoittimeen myPointer muuttujan b osoite
    myPointer = &b;

    // Tulosta osoittimen osoittama osoite ja sisältö
    std::cout << "Pointterin osoittama osoite on: " << myPointer << std::endl;
    std::cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << std::endl;

    // Luo referenssi refA ja aseta se viittaamaan muuttujaan a
    int& refA = a;

    // Tulosta referenssin osoittama osoite ja sen sisältö
    std::cout << "refA osoittaa osoitteeseen on: " << &refA << std::endl;
    std::cout << "refA:n osoittaman muistipaikan arvo on: " << refA << std::endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    std::cout << "Assosiaatio esimerkki:" << std::endl;
    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objAss: " << objAss.getBinfo() << std::endl;

    std::cout << "Aggregaatio esimerkki:" << std::endl;
    ClassB &refB = objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objAggr " << objAggr.getBinfo() << std::endl;

    return 0;
}
