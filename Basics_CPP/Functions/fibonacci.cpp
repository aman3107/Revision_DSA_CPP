#include <iostream>
using namespace std;

bool fib_num(int n)
{
    int a = 0;
    int b = 1;
    int c = 0;
    if (n == 0)
        return true;

    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        if (c == n)
        {
            return true;
        }
        a = b;
        b = c;
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    cout << fib_num(n);
}