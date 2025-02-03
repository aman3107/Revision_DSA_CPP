#include <iostream>
using namespace std;

// DP
int fib2(int n)
{
  int *arr = new int[n + 1];
  arr[0] = 0;
  arr[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  int ans = arr[n];
  delete[] arr;
  return ans;
}
// Brute Force
int fib1(int n)
{
  if (n <= 1)
    return n;
  int a = fib1(n - 1);
  int b = fib1(n - 2);
  return a + b;
}
// Memoization
int fibHelper(int n, int *ans)
{
  if (n <= 1)
  {
    return n;
  }
  if (ans[n] != -1)
  {
    return ans[n];
  }
  int a = fibHelper(n - 1, ans);
  int b = fibHelper(n - 2, ans);
  // Save the output for future use
  ans[n] = a + b;
  // Return the final output
  return ans[n];
}

int fib(int n)
{
  int *ans = new int[n + 1];
  for (int i = 0; i <= n; i++)
  {
    ans[i] = -1;
  }
  int res = fibHelper(n, ans);
  delete[] ans;
  return res;
}

int main()
{
  int n;
  cin >> n;
  cout << fib2(n) << endl;
}