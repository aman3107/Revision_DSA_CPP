#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkRedundantBrackets(string expression)
{
  stack<char> s;
  int count = 0;
  bool ans = true;
  for (int i = 0; i < expression.length(); i++)
  {
    if (expression[i] != ')')
    {
      s.push(expression[i]);
    }
    else
    {
      count = 0;
      while (!s.empty() && s.top() != '(')
      {
        count++;
        s.pop();
      }
      if (count > 1)
      {
        ans = false;
      }
      else
      {
        return true;
      }
      s.pop();
    }
  }
  return ans;
}

int main()
{
  string input;
  cin >> input;
  cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}