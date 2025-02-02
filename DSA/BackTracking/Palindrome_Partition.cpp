#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool palindrome(string &s, int start, int end)
{
  while (start < end)
  {
    if (s[start] != s[end])
    {
      return false;
    }
    start++;
    end--;
  }
  return true;
}
void partitionHelper(string &s, int start, vector<vector<string>> &res, vector<string> &curr)
{
  if (s.size() == start)
  {
    res.push_back(curr);
    return;
  }

  for (int end = start; end <= s.size(); end++)
  {
    if (palindrome(s, start, end))
    {
      int len = (end - start) + 1;
      curr.push_back(s.substr(start, len));
      partitionHelper(s, end + 1, res, curr);
      curr.pop_back();
    }
  }
}

vector<vector<string>> partition(string &s)
{
  // Write your code here.
  vector<vector<string>> res;
  vector<string> curr;
  partitionHelper(s, 0, res, curr);
  return res;
}

int main()
{
  string str;
  cin >> str;
  vector<vector<string>> ans = partition(str);
  for (int i = 0; i < ans.size(); i++)
  {

    cout << "[";

    sort(ans[i].begin(), ans[i].end());
    for (int j = 0; j < ans[i].size(); j++)
    {

      if (j != ans[i].size() - 1)
      {
        cout << "\"" << ans[i][j] << "\", ";
      }
      else
      {
        cout << "\"" << ans[i][j] << "\"";
      }
    }

    cout << "]" << endl;
  }
}