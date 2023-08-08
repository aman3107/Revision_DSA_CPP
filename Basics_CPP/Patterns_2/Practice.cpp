#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n - i)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     int k = 1;
    //     while (k <= i)
    //     {
    //         cout << "*";
    //         k++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j++;
        }
        int k = 1;
        while (k <= i)
        {
            cout << k;
            k++;
        }
        int k1 = i - 1;
        while (k1 > 0)
        {
            cout << k1;
            k1--;
        }
        cout << endl;
        i++;
    }
}