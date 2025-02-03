#include <iostream>
using namespace std;

int minSteps3(int n)
{
  int *arr = new int[n + 1];
  arr[1] = 0;
  for (int i = 2; i <= n; i++)
  {
    int a = arr[i - 1];
    int b = INT_MAX;
    int c = INT_MAX;
    if (i % 2 == 0)
    {
      b = arr[i / 2];
    }
    if (i % 3 == 0)
    {
      c = arr[i / 3];
    }
    arr[i] = min(a, min(b, c)) + 1;
  }
  int result = arr[n];
  delete[] arr;
  return result;
}

int minSteps2Helper(int n, int *arr)
{
  if (n <= 1)
  {
    return 0;
  }
  if (arr[n] != -1)
  {
    return arr[n];
  }
  int a = minSteps2Helper(n - 1, arr);
  int b = INT_MAX, c = INT_MAX;
  if (n % 2 == 0)
  {
    b = minSteps2Helper(n / 2, arr);
  }
  if (n % 3 == 0)
  {
    c = minSteps2Helper(n / 3, arr);
  }

  arr[n] = min(a, min(b, c)) + 1;
  return arr[n];
}

int minSteps2(int n)
{
  int *arr = new int[n + 1];
  for (int i = 0; i <= n; i++)
  {
    arr[i] = -1;
  }
  int ans = minSteps2Helper(n, arr);
  delete[] arr;
  return ans;
}

int minSteps1(int n)
{
  if (n == 1)
  {
    return 0;
  }
  int a = minSteps1(n - 1);
  int b = INT_MAX, c = INT_MAX;
  if (n % 2 == 0)
  {

    b = minSteps1(n / 2);
  }
  if (n % 3 == 0)
  {
    c = minSteps1(n / 3);
  }
  return min(a, min(b, c)) + 1;
}

int main()
{
  int n;
  cin >> n;
  cout << minSteps2(n) << endl;
}