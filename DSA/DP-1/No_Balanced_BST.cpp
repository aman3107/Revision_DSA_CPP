#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int balancedBt2(int n)
{
  int *arr = new int[n + 1];
  arr[0] = 1;
  arr[1] = 1;
  // arr[2] = 3;
  int mod = (int)(pow(10, 9) + 7);
  for (int i = 2; i <= n; i++)
  {
    long long int x = arr[i - 1];
    long long int y = arr[i - 2];
    long long int temp1 = (int)(((long)x * x) % mod);
    long long int temp2 = (int)(2 * ((long)x * y) % mod);
    arr[i] = (temp1 + temp2) % mod;
  }
  long long int ans = arr[n];
  delete[] arr;
  return ans;
}

int balancedBt1Helper(int n, int *arr)
{
  if (n <= 1)
  {
    return 1;
  }
  if (arr[n] != -1)
  {
    return arr[n];
  }
  int mod = (int)(pow(10, 9) + 7);
  int x = balancedBt1Helper(n - 1, arr);
  int y = balancedBt1Helper(n - 2, arr);
  int temp1 = (int)(((long)x * x) % mod);
  int temp2 = (int)(2 * ((long)x * y) % mod);
  int ans = (temp1 + temp2) % mod;
  arr[n] = ans;
  return ans;
}

int balancedBt1(int n)
{
  int *arr = new int[n + 1];
  for (int i = 0; i <= n; i++)
  {
    arr[i] = -1;
  }
  int ans = balancedBt1Helper(n, arr);
  delete[] arr;
  return ans;
}

int balancedBTs(int n)
{
  if (n <= 1)
  {
    return 1;
  }
  int mod = (int)(pow(10, 9) + 7);
  int x = balancedBTs(n - 1);
  int y = balancedBTs(n - 2);

  int temp1 = (int)(((long)x * x) % mod);     // (h-1)(h-1)
  int temp2 = (int)(2 * ((long)x * y) % mod); // (h-1)(h-2), (h-2)(h-1)
  int ans = (temp1 + temp2) % mod;
  return ans;
}

int main()
{
  int n;
  cin >> n;
  cout << balancedBt2(n);
}