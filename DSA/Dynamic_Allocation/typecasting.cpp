#include <iostream>
using namespace std;

int main()
{
    int i = 65;
    int *p = &i;
    char *c = (char *)p;
    float *f = (float *)p;

    cout << p << endl;
    cout << c << endl;

    cout << *c << endl;
    cout << *p << endl;
    cout << *(c + 1) << endl;
    cout << *(c + 2) << endl;
    cout << *(c + 3) << endl;
    cout << *f << endl;
}