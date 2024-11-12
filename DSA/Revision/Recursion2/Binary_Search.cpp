#include <iostream>
using namespace std;

int BinarySearch(int arr[], int si, int ei, int x)
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
  else if (arr[mid] > x)
  {
    return BinarySearch(arr, si, mid - 1, x);
  }
  else
  {
    return BinarySearch(arr, mid + 1, ei, x);
  }
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
  int x;
  cin >> x;
  cout << BinarySearch(arr, 0, n - 1, x);

  delete[] arr;
}