#include <iostream>
using namespace std;

void increment(int &n)
{
    n++;
}

// Bad Practice
int &f1(int n)
{
    int i = n;
    return n;
}

// Bad Practice
int *f2()
{
    int i = 10;
    return &i;
}

void func(int i, int &j, int p)
{
    i++;
    j++;
    p++;
}

int main()
{
    int i = 10;
    increment(i);
    int &j = i;

    int &a = f1(i);
    int *b = f2();
    cout << i << endl;
    i++;
    cout << j << endl;
    int k = 50;
    j = k;
    cout << i << endl;

    int a1 = 10;
    int b1 = 6;
    int &c1 = a1;
    func(a1, b1, c1);
    cout << a1 << " " << b1 << " " << c1 << endl;
}