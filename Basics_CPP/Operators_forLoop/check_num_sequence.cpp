#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n :" << endl;
    cin >> n;
    int prev;
    cin >> prev;

    bool inc = true;
    bool dec = true;
    int i = 1;
    while (i < n)
    {
        int curr;
        cin >> curr;

        if (inc && dec && prev > curr)
        {

            dec = true;
        }
        else if (inc && curr > prev)
        {

            dec = false;
        }
        else
        {
            inc = false;
        }
        prev = curr;
        i++;
    }

    if (inc == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}