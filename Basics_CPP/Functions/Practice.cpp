#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

void printTable(int start, int end, int step)
{
    while (start <= end)
    {
        int cel = (start - 32) * (5.0 / 9);
        cout << start << " " << cel << endl;
        start = start + step;
    }
}

bool checkMember(int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    int a = 0;
    int b = 1;
    int c = a + b;
    while (c <= n)
    {
        if (c == n)
        {
            return true;
        }
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

bool checkArmstrong(int n)
{
    if (n == 1)
    {
        return true;
    }
    int num = n;
    int n1 = n;
    int sum = 0;
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    while (n1 > 0)
    {
        int rem = n1 % 10;
        sum = sum + pow(rem, count);
        n1 = n1 / 10;
    }
    if (num == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // int start, end, step;
    // cin >> start >> end >> step;
    // printTable(start, end, step);
    int n;
    cin >> n;
    // cout << checkMember(n);
    cout << checkArmstrong(n);
}