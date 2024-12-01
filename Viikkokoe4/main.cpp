#include <iostream>
#include <string>
#include <cmath>

using namespace std;
#define SEPARATOR "#<ab@17943918#@>#"

#include <iostream>

class Bicycle {
public:

    Bicycle() {
        std::cout << "A new Bicycle created" << std::endl;
    }

    ~Bicycle() {
        std::cout << "Bicycle deleted" << std::endl;
    }
};

class Storage {
private:
    Bicycle a;
    Bicycle b;
    Bicycle c;

public:

    Storage() {
        std::cout << "A new Storage created" << std::endl;
    }

    ~Storage() {
        std::cout << "Storage deleted" << std::endl;
    }
};


int main() {
    {
        ;
        Storage room;;
    }
    return 0;
}
