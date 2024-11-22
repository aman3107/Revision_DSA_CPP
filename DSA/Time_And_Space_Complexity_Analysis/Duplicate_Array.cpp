#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n)
{
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = ans + arr[i];
  }
  int ans2 = ((n - 2) * (n - 1)) / 2;
  return ans - ans2;
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
  cout << findDuplicate(arr, n);
  delete[] arr;
}
