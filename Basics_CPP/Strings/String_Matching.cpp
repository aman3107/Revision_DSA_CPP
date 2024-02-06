#include <iostream>
using namespace std;

void stringMatching(string str, string strMatch)
{
  int ans = str.find(strMatch);
  cout << ans;
}

void slidingWindow(string str, string strMatch)
{
  int i = 0;
  int j = strMatch.size();
  int k = strMatch.size() - 1;
  int n = str.size();
  bool match = false;
  while (k < n)
  {
    if (str.substr(i, j) == strMatch.substr(0, j))
    {
      match = true;
    }
    i++;
    k++;
  }
  if (match)
  {
    cout << "Match" << endl;
  }
  else
  {
    cout << "Not Match " << endl;
  }
}

int main()
{
  string str;
  getline(cin, str);
  string strMatch;
  getline(cin, strMatch);
  slidingWindow(str, strMatch);
  // stringMatching(str, strMatch);
}