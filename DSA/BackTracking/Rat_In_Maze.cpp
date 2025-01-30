#include <iostream>
#include <vector>
using namespace std;

void searchMazeHelper2(vector<vector<int>> &arr, int n, int r, int c, vector<string> &ans, string visited)
{
  if (r == n - 1 && c == n - 1 && arr[r][c] == 1)
  {
    ans.push_back(visited);
    return;
  }
  if (r < 0 || c < 0 || r >= n || c >= n || arr[r][c] == 0)
    return;
  arr[r][c] = 0;
  searchMazeHelper2(arr, n, r + 1, c, ans, visited + "D");
  searchMazeHelper2(arr, n, r, c - 1, ans, visited + "L");
  searchMazeHelper2(arr, n, r, c + 1, ans, visited + "R");
  searchMazeHelper2(arr, n, r - 1, c, ans, visited + "U");
  arr[r][c] = 1;
}

vector<string> searchMaze2(vector<vector<int>> &arr, int n)
{
  // Write your code here.
  vector<string> ans;
  searchMazeHelper2(arr, n, 0, 0, ans, "");
  return ans;
}

bool isValidMove(int y, int x, vector<vector<int>> &arr, vector<vector<bool>> &visited)
{
  if (x == -1 || x == arr.size() || y == -1 || y == arr.size() || visited[y][x] || arr[y][x] == 0)
  {
    return false;
  }
  return true;
}

void printPathUtil(vector<vector<int>> &arr, int y, int x, string path, vector<string> &pathList, vector<vector<bool>> &visited)
{
  if (x == -1 || x == arr.size() || y == -1 || y == arr.size() || visited[y][x] || arr[y][x] == 0)
  {
    return;
  }
  if (x == arr.size() - 1 && y == arr.size() - 1)
  {
    pathList.push_back(path);
    return;
  }
  visited[y][x] = true;
  if (isValidMove(y + 1, x, arr, visited))
  {
    path += "D";
    printPathUtil(arr, y + 1, x, path, pathList, visited);
    path.pop_back();
  }
  if (isValidMove(y, x - 1, arr, visited))
  {
    path += "L";
    printPathUtil(arr, y, x - 1, path, pathList, visited);
    path.pop_back();
  }
  if (isValidMove(y, x + 1, arr, visited))
  {
    path += "R";
    printPathUtil(arr, y, x + 1, path, pathList, visited);
    path.pop_back();
  }
  if (isValidMove(y - 1, x, arr, visited))
  {
    path += "U";
    printPathUtil(arr, y - 1, x, path, pathList, visited);
    path.pop_back();
  }
  visited[y][x] = false;
}

vector<string> searchMaze(vector<vector<int>> &arr, int n)
{
  vector<string> possiblePaths;
  string path = "";
  vector<vector<bool>> visited(n, vector<bool>(n, false));
  printPathUtil(arr, 0, 0, path, possiblePaths, visited);
  return possiblePaths;
}

int main()
{
  vector<vector<int>> arr;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    arr.push_back(vector<int>());
    for (int j = 0; j < n; j++)
    {
      int x;
      cin >> x;
      arr[i].push_back(x);
    }
  }

  vector<string> ans = searchMaze(arr, arr.size());
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  cout << "\n";
}