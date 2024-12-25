#include <iostream>
#include <string>
#include <stack>
using namespace std;

int countBracketReversals(string input)
{
  // Write your code here
  if (input.length() % 2 != 0)
  {
    return -1;
  }
  int ans = 0;
  stack<char> s;
  for (int i = 0; i < input.length(); i++)
  {
    if (input[i] == '{')
    {
      s.push(input[i]);
    }
    else
    {
      if (s.empty())
      {
        s.push(input[i]);
      }
      else if (!s.empty() && s.top() == '{')
      {
        s.pop();
      }
      else if (!s.empty() && s.top() != '{')
      {
        s.push(input[i]);
      }
    }
  }

  while (!s.empty())
  {
    char c1 = s.top();
    s.pop();
    char c2 = s.top();
    s.pop();
    if (c1 == c2)
    {
      ans = ans + 1;
    }
    else if (c1 != c2)
    {
      ans = ans + 2;
    }
  }

  return ans;
}

int main()
{
  string input;
  cin >> input;
  cout << countBracketReversals(input);
}