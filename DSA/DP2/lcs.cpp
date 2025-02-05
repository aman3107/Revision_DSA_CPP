#include <iostream>
#include <string>
using namespace std;

int lcsDP(string s, string t)
{
  int m = s.size();
  int n = t.size();
  int **output = new int *[m + 1];
  for (int i = 0; i <= m; i++)
  {
    output[i] = new int[n + 1];
  }

  for (int i = 0; i <= n; i++)
  {
    output[0][i] = 0;
  }
  for (int i = 0; i <= m; i++)
  {
    output[i][0] = 0;
  }
  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (s[m - i] == t[n - j])
      {
        output[i][j] = output[i - 1][j - 1] + 1;
      }
      else
      {
        output[i][j] = max(output[i - 1][j], max(output[i][j - 1], output[i - 1][j - 1]));
      }
    }
  }
  return output[m][n];
}

int lcsMemo(string s, string t, int **output)
{
  int m = s.size();
  int n = t.size();
  if (m == 0 || n == 0)
  {
    return 0;
  }
  if (output[m][n] != -1)
  {
    return output[m][n];
  }
  if (s[0] == t[0])
  {
    int ans = 1 + lcsMemo(s.substr(1), t.substr(1), output);
    output[m][n] = ans;
    return ans;
  }
  else
  {
    int x = lcsMemo(s.substr(1), t, output);
    int y = lcsMemo(s, t.substr(1), output);
    int ans = max(x, y);
    output[m][n] = ans;
    return ans;
  }
}

int lcs1(string s, string t)
{
  int m = s.size();
  int n = t.size();
  int **output = new int *[m + 1];
  for (int i = 0; i <= m; i++)
  {
    output[i] = new int[n + 1];
    for (int j = 0; j <= n; j++)
    {
      output[i][j] = -1;
    }
  }
  return lcsMemo(s, t, output);
}

int lcs(string s, string t)
{
  if (s.size() == 0 || t.size() == 0)
  {
    return 0;
  }
  if (s[0] == t[0])
  {
    return 1 + lcs(s.substr(1), t.substr(1));
  }
  else
  {
    int a = lcs(s.substr(1), t);
    int b = lcs(s, t.substr(1));
    return max(a, b);
  }
}

int main()
{
  string s1;
  string s2;
  cin >> s1 >> s2;
  cout << lcs1(s1, s2) << endl;
  cout << lcsDP(s1, s2) << endl;
}