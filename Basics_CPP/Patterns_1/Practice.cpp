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
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << n - j + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // while (i <= n)
    // {
    //     int j = 1;
    //     int num = i;
    //     while (j <= i)
    //     {
    //         cout << num;
    //         j++;
    //         num++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // int num = 1;
    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= i)
    //     {
    //         cout << num;
    //         j++;
    //         num++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // char c = 'A';
    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {
    //         cout << char(c + j - 1);
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    while (i <= n)
    {
        int j = 1;
        char c = 'A' + i - 1;
        while (j <= n)
        {
            cout << char(c + j - 1);
            j++;
        }
        cout << endl;
        i++;
    }
}