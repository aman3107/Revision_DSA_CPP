#include <iostream>
#include <math.h>
using namespace std;

int minCostPath_DP1(int **input, int m, int n)
{
  int **ans = new int *[m];
  for (int i = 0; i < m; i++)
  {
    ans[i] = new int[n];
  }

  ans[m - 1][n - 1] = input[m - 1][n - 1];

  // Last row
  for (int j = n - 2; j >= 0; j--)
  {
    ans[m - 1][j] = input[m - 1][j] + ans[m - 1][j + 1];
  }

  // Last col
  for (int i = m - 2; i >= 0; i--)
  {
    ans[i][n - 1] = input[i][n - 1] + ans[i + 1][n - 1];
  }

  for (int i = m - 2; i >= 0; i--)
  {
    for (int j = n - 2; j >= 0; j--)
    {
      ans[i][j] = input[i][j] + min(ans[i][j + 1], min(ans[i + 1][j + 1], ans[i + 1][j]));
    }
  }
  return ans[0][0];
}

int minCostPath_DP(int **input, int m, int n)
{
  int **output = new int *[m];
  for (int i = 0; i < m; i++)
  {
    output[i] = new int[n];
  }
  output[m - 1][n - 1] = input[m - 1][n - 1];
  for (int j = n - 2; j >= 0; j--)
  {
    output[m - 1][j] = output[m - 1][j + 1] + input[m - 1][j];
  }
  for (int i = m - 2; i >= 0; i--)
  {
    output[i][n - 1] = output[i + 1][n - 1] + input[i][n - 1];
  }
  for (int i = m - 2; i >= 0; i--)
  {
    for (int j = n - 2; j >= 0; j--)
    {
      int x = output[i][j + 1];
      int y = output[i + 1][j];
      int z = output[i + 1][j + 1];
      output[i][j] = min(x, min(y, z)) + input[i][j];
    }
  }
  return output[0][0];
}

int minCostPath_Memo(int **input, int m, int n, int i, int j, int **out)
{
  if (i == m - 1 && j == n - 1)
  {
    return input[i][j];
  }
  if (i >= m || j >= n)
  {
    return INT_MAX;
  }
  if (out[i][j] != -1)
  {
    return out[i][j];
  }
  int x = minCostPath_Memo(input, m, n, i + 1, j, out);
  int y = minCostPath_Memo(input, m, n, i, j + 1, out);
  int z = minCostPath_Memo(input, m, n, i + 1, j + 1, out);
  int ans = min(x, min(y, z)) + input[i][j];
  out[i][j] = ans;
  return ans;
}

int minCostPath2(int **input, int m, int n)
{
  int **output = new int *[m];
  for (int i = 0; i < m; i++)
  {
    output[i] = new int[n];
    for (int j = 0; j < n; j++)
    {
      output[i][j] = -1;
    }
  }
  int ans = minCostPath_Memo(input, m, n, 0, 0, output);
  delete[] output;
  return ans;
}

int minCostPathHelper(int **input, int m, int n, int i, int j)
{
  if (i >= m || j >= n)
  {
    return INT_MAX;
  }
  if (i == m - 1 && j == n - 1)
  {
    return input[i][j];
  }
  int x = minCostPathHelper(input, m, n, i + 1, j);
  int y = minCostPathHelper(input, m, n, i, j + 1);
  int z = minCostPathHelper(input, m, n, i + 1, j + 1);
  return min(x, min(y, z)) + input[i][j];
}

int minCostPath(int **input, int m, int n)
{
  // Write your code here
  return minCostPathHelper(input, m, n, 0, 0);
}

int main()
{
  int **arr, n, m;
  cin >> n >> m;
  arr = new int *[n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = new int[m];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << minCostPath_DP(arr, n, m) << endl;
  cout << minCostPath_DP1(arr, n, m) << endl;
  delete[] arr;
}