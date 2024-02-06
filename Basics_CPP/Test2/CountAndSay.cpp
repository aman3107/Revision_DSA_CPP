#include <iostream>
#include <string>
using namespace std;

string writeAsYouSpeak(int n)
{
  // Write your code here.
  string ans = "1";

  while (--n)
  {
    string next;
    for (int i = 0; i < ans.length(); ++i)
    {
      int count = 1;
      while (i + 1 < ans.length() && ans[i] == ans[i + 1])
      {
        ++count;
        ++i;
      }
      next += to_string(count) + ans[i];
    }
    ans = move(next);
    cout << ans << endl;
  }

  return ans;
}

int main()
{
  int n;
  cin >> n;
  cout << writeAsYouSpeak(n);
}