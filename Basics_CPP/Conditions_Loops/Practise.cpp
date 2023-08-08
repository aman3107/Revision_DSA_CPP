#include <iostream>
using namespace std;

int main()
{
    // int x = 5;
    // if (x < 6)
    //     cout << "Hello ";
    // if (x == 5)
    // {
    //     cout << "Hi ";
    // }
    // else
    // {
    //     cout << "Hey ";
    // }
    //     int x = 15;
    //     if (x <= 15)
    //     {
    //         cout << "Inside if ";
    //     }
    //     else if (x == 15)
    //     {
    //         cout << "Inside else if ";
    //     }
    //     cout << x;

    // int n;
    // cout << "Enter value of n :" << endl;
    // cin >> n;

    // int prime = true;
    // int d = 2;
    // while (d < n)
    // {
    //     if (n % d == 0)
    //     {
    //         prime = false;
    //         break;
    //     }
    //     d++;
    // }
    // if (prime)
    // {
    //     cout << "Number is Prime :" << endl;
    // }
    // else
    // {
    //     cout << "Number is not Prime :" << endl;
    // }
    // int n;
    // cin >> n;
    // bool n_start = false;
    // int rev = 0;
    // while (n > 0)
    // {
    //     int rem = n % 10;
    //     if (rem == 0 && n_start == false)
    //     {
    //         n = n / 10;
    //         continue;
    //     }
    //     else
    //     {
    //         n_start = true;
    //         rev = rev * 10 + rem;
    //         n = n / 10;
    //     }
    //     cout << rem;
    // }
    // int i = 1;
    // while (i < 3)
    // {
    //     int j = 0;
    //     while (j < 5)
    //     {
    //         j++;
    //         if (j == 3)
    //         {
    //             continue;
    //         }
    //         cout << j << " ";
    //     }
    //     i++;
    // }
    // int a = 10;
    // while (a > 5)
    // {
    //     int a = 1;
    //     cout << a << " ";
    //     a--;
    // }

    char c;
    c = cin.get();
    int sum_char = 0;
    int sum_num = 0;
    int sum_spa = 0;
    while (c != '$')
    {
        if (c >= 97 && c <= 122)
        {
            sum_char++;
        }
        else if (c >= 48 && c <= 57)
        {
            sum_num++;
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            sum_spa++;
        }
        c = cin.get();
    }
    cout << sum_char << " " << sum_num << " " << sum_spa << endl;
}