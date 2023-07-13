#include <iostream>
using namespace std;

int main(){
    int i = 10;
    int *p = &i;

    cout << p << endl;
    p = p + 2;
    cout << p << endl;

    p = p - 2;
    cout << p << endl;

    double d = 121.32;
    double *pd = &d;
    cout << pd << endl;
    pd = pd + 1;
    cout << pd << endl;
} 