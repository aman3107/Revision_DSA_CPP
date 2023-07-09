#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter value of m and n :" << endl;
    cin >> m >> n;

    int arr[m][n];
    cout << "Enter elements in array :" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum = sum + arr[i][j];
            
        }
        cout << sum << " ";
    }
    cout << endl;
}