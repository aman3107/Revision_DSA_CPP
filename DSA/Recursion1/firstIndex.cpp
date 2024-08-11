#include <iostream>
using namespace std;

int checkNumber(int input[], int size, int x)
{
  if (size == 0)
  {
    return -1;
  }
  if (input[0] == x)
  {
    return 0;
  }
  int smallOutput = checkNumber(input + 1, size - 1, x);
  if (smallOutput == -1)
  {
    return -1;
  }
  else
  {
    return smallOutput + 1;
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
  cout << checkNumber(arr, n, x) << endl;
  delete[] arr;
}