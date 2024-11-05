#include <iostream>
using namespace std;

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
  cout << "Enter rows and columns : " << endl;
  cin >> n >> m;
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
}