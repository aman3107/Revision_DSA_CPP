#include <iostream>
using namespace std;

int helper(int arr[], int si, int ei, int x)
{
  if (si > ei)
  {
    return -1;
  }
  int mid = (si + ei) / 2;
  if (arr[mid] == x)
  {
    return mid;
  }
  else
  {
    if (arr[mid] > x)
    {
      return helper(arr, si, mid - 1, x);
    }
    else
    {
      return helper(arr, mid + 1, ei, x);
    }
  }
}

int binarySearch(int input[], int size, int element)
{
  return (helper(input, 0, size - 1, element));
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
  int ele;
  cin >> ele;
  cout << binarySearch(arr, n, ele) << endl;
  delete[] arr;
}