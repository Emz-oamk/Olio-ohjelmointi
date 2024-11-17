#include <iostream>
#include <memory>
#include <string>

using namespace std;

// Määritä luokka Student
class Student {
private:
    string name; // Opiskelijan nimi
    int studentNumber; // Opiskelijanumero
    double average; // Keskiarvo
    // Refactor ei halua toimia
public:
    // Setters
    void setName(const string& newName) {
        name = newName;
    }

    void setStudentNumber(int newStudentNumber) {
        studentNumber = newStudentNumber;
    }

    void setAverage(double newAverage) {
        average = newAverage;
    }

    // Getters
    string getName() const {
        return name;
    }

    int getStudentNumber() const {
        return studentNumber;
    }

    double getAverage() const {
        return average;
    }
};


int main() {
    // Luo Student -olio
    unique_ptr<Student> student = make_unique<Student>();

    // Aseta opiskelijan tiedot
    student->setName("Emz");
    student->setStudentNumber(53310);
    student->setAverage(3.80);

    // Tulosta opiskelijan tiedot
    cout << "Opiskelijan tiedot:" << endl;
    cout << "Nimi: " << student->getName() << endl;
    cout << "Opiskelijanumero: " << student->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student->getAverage() << endl;

    return 0;
}

















