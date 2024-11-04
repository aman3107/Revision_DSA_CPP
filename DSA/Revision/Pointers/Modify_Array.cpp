#include <iostream>
#include <climits>
using namespace std;

void modify(int *arr, int n)
{
  int min_value = INT_MAX;
  int max_value = INT_MIN;
  int *pmin = 0;
  int *pmax = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max_value)
    {
      max_value = arr[i];
      pmax = &arr[i];
    }
    if (arr[i] < min_value)
    {
      min_value = arr[i];
      pmin = &arr[i];
    }
  }
  *pmin = 0;
  *pmax = 100;
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
  modify(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}