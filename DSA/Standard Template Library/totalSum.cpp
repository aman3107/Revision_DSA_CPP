#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int totalSum(vector<vector<int>> input, int n)
{
  int sum = 0;
  int srow = 0, scol = 0;
  int erow = n - 1, ecol = n - 1;
  for (int i = scol; i <= ecol; i++)
  {
    sum = sum + input[srow][i];
  }
  srow++;
  for (int i = srow; i <= erow; i++)
  {
    sum = sum + input[i][ecol];
  }
  ecol--;
  for (int i = ecol; i >= scol; i--)
  {
    sum = sum + input[erow][i];
  }
  erow--;
  for (int i = erow; i >= srow; i--)
  {
    sum = sum + input[i][scol];
  }
  int j = n - 2;
  cout << j;
  for (int i = 1; i < n - 1; i++)
  {
    if (i != j)
    {
      sum = sum + input[i][j];
      j--;
    }
    else
    {
      j--;
    }
  }
  return sum;
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << totalSum(arr, n) << endl;
}