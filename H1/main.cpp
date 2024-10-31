#include <iostream>

using namespace std;

void retSum(int, int);
int main()
{
    int a,b;
    cout << "Anna luku" << endl;
    cin >> a;
    cout << "Anna toinen luku" << endl;
    cin >> b;
    retSum(a,b);
    return 0;
}

void retSum(int x,int y){
    cout << "Lukujen jako on " << x/y << endl;

}
