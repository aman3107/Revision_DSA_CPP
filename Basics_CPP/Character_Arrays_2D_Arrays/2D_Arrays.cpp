#include <iostream>
using namespace std;


void print2DArray(int arr[][100],int m, int n){
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "Enter value of m and n :" << endl;
    cin >> m >> n;
    int arr[100][100];

    cout << "Enter elements in array :" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    print2DArray(arr,m,n);

    // cout << "Row Wise Print :" << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "Column Wise Print :" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }
}