#include <iostream>
using namespace std;

int firstIndex(int arr[], int n, int x)
{
  if (n == 0)
    return -1;
  if (arr[0] == x)
  {
    return 0;
  }
  int smallOutput = firstIndex(arr + 1, n - 1, x);
  if (smallOutput == -1)
  {
    return -1;
  }
  else
  {
    return 1 + smallOutput;
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
  cout << firstIndex(arr, n, x) << endl;
  delete[] arr;
}