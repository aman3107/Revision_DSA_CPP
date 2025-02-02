#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void ratInAmazeHelper(vector<vector<int>> &maze, int n, vector<vector<int>> &res, vector<vector<int>> &vis, int x, int y)
{
  if (x == n - 1 && y == n - 1)
  {
    vector<int> temp;
    for (int i = 0; i < vis.size(); i++)
    {
      for (int j = 0; j < vis[i].size(); j++)
      {
        temp.push_back(vis[i][j]);
      }
    }
    int size = temp.size();
    temp[size - 1] = 1;
    res.push_back(temp);
    return;
  }
  if (x < 0 || x >= n || y < 0 || y >= n || vis[x][y] == 1 || maze[x][y] == 0)
  {
    return;
  }
  vis[x][y] = 1;
  ratInAmazeHelper(maze, n, res, vis, x, y - 1);
  ratInAmazeHelper(maze, n, res, vis, x, y + 1);
  ratInAmazeHelper(maze, n, res, vis, x + 1, y);
  ratInAmazeHelper(maze, n, res, vis, x - 1, y);
  vis[x][y] = 0;
}

vector<vector<int>> ratInAMaze(vector<vector<int>> &maze, int n)
{
  // Write your code here.
  vector<vector<int>> res;
  vector<vector<int>> vis;
  vis = vector<vector<int>>(n, vector<int>(n, 0));
  ratInAmazeHelper(maze, n, res, vis, 0, 0);
  return res;
}

int main()
{

  int n;
  cin >> n;
  vector<vector<int>> maze(n, vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> maze[i][j];
    }
  }

  vector<vector<int>> ans = ratInAMaze(maze, n);

  // sort(ans.begin(),ans.end());

  int s = ans.size();
  for (int i = 0; i < s; i++)
  {
    int t = ans[i].size();
    for (int j = 0; j < t; j++)
    {
      cout << ans[i][j] << " ";
    }

    cout << endl;
  }
}