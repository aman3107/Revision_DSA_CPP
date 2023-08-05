#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    *p = 10;
    cout << *p << endl;

    double *pd = new double;

    int *arr = new int[10];
    int n;
    cin >> n;
    int *arr1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int max_ele = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max_ele < arr1[i])
        {
            max_ele = arr1[i];
        }
    }
    cout << max_ele << endl;

    delete[] arr;
    delete[] arr1;
}