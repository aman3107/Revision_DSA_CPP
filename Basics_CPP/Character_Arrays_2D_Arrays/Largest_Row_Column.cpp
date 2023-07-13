#include <iostream>
#include <climits>
using namespace std;

void largest_row_column(int **arr, int m, int n)
{
    int sum = INT_MIN;
    int index = 0;
    string s = " ";
    for (int i = 0; i < m; i++)
    {
        int rSum = 0;
        for (int j = 0; j < n; j++)
        {
            rSum = rSum + arr[i][j];
        }
        if (sum < rSum)
        {
            sum = rSum;
            index = i;
            s = "row";
        }
    }

    for (int j = 0; j < n; j++)
    {
        int cSum = 0;
        for (int i = 0; i < m; i++)
        {
            cSum = cSum + arr[i][j];
        }
        if (sum < cSum)
        {
            sum = cSum;
            index = j;
            s = "column";
        }
    }
    if (sum == INT_MIN)
    {
        cout << "row " << index << " " << sum;
    }
    else
    {
        cout << s << " " << index << " " << sum;
    }
}

int main()
{
    int m, n;
    cout << "Enter value of m and n :" << endl;
    cin >> m >> n;

    int **arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    largest_row_column(arr, m, n);
    delete []arr;
}