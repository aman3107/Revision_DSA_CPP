#include <iostream>
using namespace std;

int SumofArray(int arr[], int n)
{
  if (n == 0)
  {
    return 0;
  }
  if (n == 1)
  {
    return arr[0];
  }
  int smallOutput = SumofArray(arr + 1, n - 1);
  return arr[0] + smallOutput;
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

  cout << SumofArray(arr, n) << endl;
  delete[] arr;
}