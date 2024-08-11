#include <iostream>
using namespace std;

bool palindrome(int arr[], int n)
{
  if (n == 0 || n == 1)
  {
    return true;
  }
  if (arr[0] != arr[n - 1])
  {
    return false;
  }
  bool smallOutput = palindrome(arr + 1, n - 2);
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
  cout << palindrome(arr, n) << endl;
  delete[] arr;
}