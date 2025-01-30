#include <iostream>
#include <vector>
using namespace std;

bool isValid(int row, int col, int n, vector<vector<int>> &vis)
{
  for (int i = 0; i < row; i++)
  {
    if (vis[i][col] == 1)
      return false;
  }

  for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
  {
    if (vis[i][j] == 1)
      return false;
  }
  for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
  {
    if (vis[i][j] == 1)
      return false;
  }
  return true;
}

void solveNQueensHelper(int n, int row, vector<vector<int>> &ans, vector<vector<int>> &vis)
{
  if (row == n)
  {
    vector<int> temp;
    for (int i = 0; i < vis.size(); i++)
    {
      for (int j = 0; j < vis[i].size(); j++)
      {
        temp.push_back(vis[i][j]);
      }
    }
    ans.push_back(temp);
    return;
  }
  for (int i = 0; i < n; i++)
  {
    if (isValid(row, i, n, vis))
    {
      vis[row][i] = 1;
      solveNQueensHelper(n, row + 1, ans, vis);
      vis[row][i] = 0;
    }
  }
  return;
}

vector<vector<int>> solveNQueens(int n)
{
  // Write your code here.
  vector<vector<int>> ans;
  vector<vector<int>> vis;
  vis = vector<vector<int>>(n, vector<int>(n, 0));
  solveNQueensHelper(n, 0, ans, vis);
  return ans;
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> answer;
  answer = solveNQueens(n);

  for (auto sol : answer)
  {
    for (auto i : sol)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}