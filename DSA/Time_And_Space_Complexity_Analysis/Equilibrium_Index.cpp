#include <iostream>
using namespace std;

int findEquilibriumIndex(int *arr, int n)
{

  int ls = 0;
  int rs = 0;
  for (int i = 1; i < n; i++)
  {
    rs = rs + arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (ls == rs)
    {
      return i;
    }
    else if (i < n - 1)
    {
      ls = ls + arr[i];
      rs = rs - arr[i + 1];
    }
  }
  return -1;
}

int main()
{
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << findEquilibriumIndex(arr, n);
  delete[] arr;
}