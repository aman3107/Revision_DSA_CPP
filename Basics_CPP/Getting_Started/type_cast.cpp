#include <iostream>
using namespace std;

int main(){
    int a;
    char c;
    a = 19920;
    c = a;
    cout << c << endl;
    c = 'y';
    a = c;
    cout << a << endl;
/*  Implicit Type Casting  */
    float f = 1.2;
    a = f;
    cout << a << endl;

    int i;
    c = 'd';
    i = c;
    cout << i<< endl;
    cout << 'd';
}