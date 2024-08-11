#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cout << "Enter value of n and m :" << endl;
  cin >> n >> m;
  int arr[100][100];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      for (int k = 0; k < m; k++)
      {
        cout << arr[i][k] << " ";
      }
      cout << endl;
    }
  }
}