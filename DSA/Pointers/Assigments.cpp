#include <iostream>
using namespace std;

void moveZerosToEnd(int *arr, int n)
{
  int i = 0;
  int j = 1;
  while (j < n && i < n)
  {
    if (arr[i] != 0)
    {
      i++;
    }
    else if (arr[j] == 0 || j < i)
    {
      j++;
    }
    else
    {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j++;
    }
  }
}

void transposeMatrix(int **arr, int m, int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int m, n;
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
  transposeMatrix(arr, m, n);
  for (int i = 0; i < m; i++)
  {
    delete[] arr[i];
  }
  delete[] arr;
  // int n;
  // cin >> n;
  // int *arr = new int[n];
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr[i];
  // }
  // moveZerosToEnd(arr, n);
  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // delete[] arr;
}