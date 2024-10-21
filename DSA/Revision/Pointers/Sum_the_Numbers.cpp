#include <iostream>
using namespace std;

int sum(int *ar, int n)
{
  // write your code here
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + ar[i];
  }
  return sum;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int ans = sum(arr, n);
  cout << ans << endl;
}