#include <iostream>
using namespace std;

bool is_Sorted(int arr[], int n)
{
  if (n == 0 || n == 1)
  {
    return true;
  }
  if (arr[0] > arr[1])
  {
    return false;
  }

  bool isSmallerSoted = is_Sorted(arr + 1, n - 1);
  return isSmallerSoted;
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
  cout << is_Sorted(arr, n);
  delete[] arr;
}