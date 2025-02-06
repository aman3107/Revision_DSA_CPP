#include <iostream>
using namespace std;
int knapsackHelper(int *weights, int *values, int n, int maxWeight, int ind, int ans)
{
  if (ind == n || maxWeight == 0)
  {
    return ans;
  }
  if (weights[ind] > maxWeight)
  {
    return knapsackHelper(weights, values, n, maxWeight, ind + 1, ans);
  }
  int x = knapsackHelper(weights, values, n, maxWeight - weights[ind], ind + 1, values[ind] + ans);
  int y = knapsackHelper(weights, values, n, maxWeight, ind + 1, ans);
  int out = max(x, y);
  return out;
}

int knapsack(int *weights, int *values, int n, int maxWeight)
{
  // write your code here
  return knapsackHelper(weights, values, n, maxWeight, 0, 0);
}

int main()
{
  int n;
  cin >> n;

  int *weights = new int[n];
  int *values = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> weights[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> values[i];
  }

  int maxWeight;
  cin >> maxWeight;

  cout << knapsack(weights, values, n, maxWeight) << endl;

  delete[] weights;
  delete[] values;
}