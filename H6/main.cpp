#include <QCoreApplication>
#include "myclass.h"

using namespace std;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    MyClass myObject;
    myObject.raiseMySignal();

    return a.exec();
}
