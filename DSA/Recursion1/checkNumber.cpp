#include <iostream>
using namespace std;

bool checkNumber(int input[], int size, int x)
{
  if (size == 0)
  {
    return false;
  }
  if (input[0] == x)
  {
    return true;
  }
  bool smallOutput = checkNumber(input + 1, size - 1, x);
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
  int x;
  cin >> x;
  cout << checkNumber(arr, n, x) << endl;
  delete[] arr;
}