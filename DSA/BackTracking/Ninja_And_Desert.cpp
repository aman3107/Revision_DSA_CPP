#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int closest(int a, int b, int target)
{
  if (a == 0)
  {
    return b;
  }
  if (b == 0)
  {
    return a;
  }

  if (abs(a - target) == abs(b - target))
  {
    return a < b ? a : b;
  }
  return (abs(a - target) > abs(b - target) ? b : a);
}

int dfs(vector<int> &topping, int ind, int sum, int target)
{
  if (ind >= topping.size())
  {
    return sum;
  }
  int a = dfs(topping, ind + 1, sum + topping[ind], target);
  int b = dfs(topping, ind + 1, sum + topping[ind] * 2, target);
  int c = dfs(topping, ind + 1, sum, target);
  sum = closest(a, closest(b, c, target), target);
  return sum;
}

int closestCost(int n, int m, vector<int> &baseCosts, vector<int> &toppingCosts, int target)
{
  // wrtie your code here;
  int ans = 0;
  for (int i = 0; i < baseCosts.size(); i++)
  {
    ans = closest(dfs(toppingCosts, 0, baseCosts[i], target), ans, target);
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  vector<int> base;
  for (int i = 0; i < n; i++)
  {
    int data;
    cin >> data;
    base.push_back(data);
  }
  int m;
  cin >> m;
  vector<int> topping;
  for (int i = 0; i < m; i++)
  {
    int data;
    cin >> data;
    topping.push_back(data);
  }
  int target;
  cin >> target;
  cout << closestCost(n, m, base, topping, target);
}