#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    bool prime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
        }
    }
    if (prime == false)
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime";
    }
}