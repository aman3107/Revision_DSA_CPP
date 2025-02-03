#include <iostream>
using namespace std;
typedef long long int ll;
const ll m = 1e9 + 7;

int modAdd(ll a, ll b)
{
  return (int)((a % m + b % m) % m);
}
int stairCase3(int n)
{
  int arr[n + 1];
  arr[0] = 1;
  arr[1] = 1;
  arr[2] = 2;
  for (int i = 3; i <= n; i++)
  {
    arr[i] = modAdd(arr[i - 1], modAdd(arr[i - 2], arr[i - 3]));
  }
  return arr[n];
}

int stairCase2Helper(int n, int *arr)
{
  if (n < 0)
  {
    return 0;
  }
  if (n == 0 || n == 1)
  {
    return 1;
  }
  if (arr[n] != -1)
  {
    return arr[n];
  }
  int sum = stairCase2Helper(n - 1, arr) + stairCase2Helper(n - 2, arr) + stairCase2Helper(n - 3, arr);
  arr[n] = sum;
  return sum;
}

int stairCase2(int n)
{
  int *arr = new int[n + 1];
  for (int i = 0; i <= n; i++)
  {
    arr[i] = -1;
  }
  int ans = stairCase2Helper(n, arr);
  delete[] arr;
  return ans;
}

int stairCase1(int n)
{
  if (n < 0)
  {
    return 0;
  }
  if (n == 0)
  {
    return 1;
  }
  return (stairCase1(n - 1) + stairCase1(n - 2) + stairCase1(n - 3));
}

int main()
{
  int n;
  cin >> n;
  int output = stairCase3(n);
  cout << output << endl;
}