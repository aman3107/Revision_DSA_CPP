#include <iostream>
using namespace std;

void arrange(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    int num = 1;
    while (i < j)
    {
        arr[i] = num;
        arr[j] = ++num;
        num++;
        i++;
        j--;
    }
    if (n % 2 != 0)
    {
        arr[i] = num;
    }
}

int findUnique(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool unique = true;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if (arr[i] == arr[j])
                {
                    unique = false;
                    break;
                }
            }
        }
        if (unique)
        {
            return arr[i];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // arrange(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << findUnique(arr, n);
}