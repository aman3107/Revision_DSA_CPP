#include <iostream>
#include <vector>
#include <string>
using namespace std;

void presentHelper(int x, int y, int ind, vector<vector<char>> &board, string &word, int n, int m, vector<vector<bool>> visited, bool &ans)
{
  if (ind == word.size() - 1)
  {
    ans = true;
    return;
  }
  if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y] == 1 || board[x][y] != word[ind])
    return;
  visited[x][y] = 1;
  presentHelper(x + 1, y, ind + 1, board, word, n, m, visited, ans);
  presentHelper(x, y - 1, ind + 1, board, word, n, m, visited, ans);
  presentHelper(x, y + 1, ind + 1, board, word, n, m, visited, ans);
  presentHelper(x - 1, y, ind + 1, board, word, n, m, visited, ans);
  visited[x][y] = 0;
}

bool present(vector<vector<char>> &board, string &word, int n, int m)
{
  // Write your code here.
  bool ans = false;
  vector<vector<bool>> visited;
  visited = vector<vector<bool>>(n, vector<bool>(m, false));
  for (int i = 0; i < board.size(); i++)
  {
    for (int j = 0; j < board[i].size(); j++)
    {
      if (board[i][j] == word[0])
      {
        presentHelper(i, j, 0, board, word, n, m, visited, ans);
        if (ans)
        {
          return ans;
        }
      }
    }
  }
  return ans;
}

int main()
{
  string s;
  int n, m;
  vector<vector<char>> mat;
  cin >> s >> n >> m;
  mat = vector<vector<char>>(n, vector<char>(m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> mat[i][j];
  if (present(mat, s, n, m))
    cout << "true";
  else
    cout << "false";
}