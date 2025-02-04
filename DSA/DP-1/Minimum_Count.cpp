#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int minCount(int n)
{
  int *arr = new int[n + 1];
  arr[0] = 0;
  arr[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    arr[i] = i;
    for (int j = 1; j <= (sqrt(i)); j++)
    {
      int temp = j * j;
      if (temp > i)
        break;
      arr[i] = min(arr[i], arr[i - temp] + 1);
    }
  }
  int ans = arr[n];
  delete[] arr;
  return ans;
}

int minCount2Helper(int n, int *arr)
{
  if (n == 1)
  {
    return 1;
  }
  if (arr[n] != -1)
  {
    return arr[n];
  }
  int count = n;
  for (int i = 1; i <= n; i++)
  {
    int j = i * i;
    if (j > n)
      break;
    count = min(count, minCount2Helper(n - j, arr) + 1);
  }

  arr[n] = count;
  return count;
}

int minCount2(int n)
{
  int *arr = new int[n + 1];
  for (int i = 0; i <= n; i++)
  {
    arr[i] = -1;
  }

  int ans = minCount2Helper(n, arr);
  delete[] arr;
  return ans;
}

int minCount1(int n)
{
  // Write your code here
  if (n == 1)
  {
    return 1;
  }
  int count = n;
  for (int i = 1; i < n; i++)
  {
    int j = i * i;
    if (j > n)
      break;
    count = min(count, minCount1(n - j) + 1);
  }
  return count;
}

int main()
{
  int n;
  cin >> n;
  cout << minCount1(n);
}