#include <iostream>

using namespace std;

void calcSum(int, int);
int main()
{
    cout << "Hello World!" << endl;
    int a,b;
    cout << "Anna luku" << endl;
    cin >> a;
    cout << "Anna toinen luku" << endl;
    cin >> b;
    calcSum(a,b);
    return 0;
}

void calcSum(int x,int y){
    cout << "Lukujen summa on " << x+y << endl;

}
