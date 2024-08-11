#include <iostream>
using namespace std;

int sum(int input[], int n)
{
  if (n == 0 || n == 1)
  {
    return input[0];
  }
  int smallOutput = input[0] + sum(input + 1, n - 1);
  return smallOutput;
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
  cout << sum(arr, n) << endl;
  delete[] arr;
}