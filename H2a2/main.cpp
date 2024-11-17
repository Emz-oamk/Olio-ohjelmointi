#include <iostream>

using namespace std;

// Määritä luokka Rectangle
class Rectangle {
private:
    double width; // Suorakulmion leveys
    double height; // -ll- korkeus

public:
    // Aseta leveys
    void setWidth(double w) {
        if (w > 0) {
            width = w;
        }
        else {
            cout << "Virhe! Leveys pitää olla positiivinen" << endl;
        }
    }
    // Aseta korkeus
    void setHeight(double h) {
        if (h > 0) {
            height = h;
        }
        else {
            cout << "Virhe! Korkeus pitää olla positiivinen" << endl;
        }
    }

    // Laske pinta-ala
    double getArea() {
        return width * height;
    }

    // Laske ympärysmittä
    double getCircum() {
        return 2 * (width + height);
    }
};


int main() {
    // Luo Rectangle -olio kekomuistiin
    Rectangle* rect = new Rectangle();

    // Aseta suorakulmion leveys ja korkeus
    rect->setWidth(8.0);
    rect->setHeight(5.0);

    // Tulosta suorakulmion pinta-ala sekä ympärysmitta
    cout << "Suorakulmion pinta-ala: " << rect->getArea() << endl;
    cout << "Suorakulmion ympärysmitta: " << rect->getCircum() << endl;

    // Tuhoa olio
    delete rect;

    return 0;
}










