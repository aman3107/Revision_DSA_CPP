#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isBalanced(string expression)
{
  // Write your code here
  if (expression[0] == ']' || expression[0] == ')' || expression[0] == '}')
  {
    return false;
  }
  stack<char> s;
  for (int i = 0; i < expression.size(); i++)
  {
    if (expression[i] == '[' || expression[i] == '(' || expression[i] == '{')
    {
      s.push(expression[i]);
    }
    else
    {
      if (expression[i] == ']' && s.top() == '[')
      {
        s.pop();
      }
      else if (expression[i] == ')' && s.top() == '(')
      {
        s.pop();
      }
      else if (expression[i] == '}' && s.top() == '{')
      {
        s.pop();
      }
      else
      {
        return false;
      }
    }
  }
  return s.empty();
}

int main()
{
  string input;
  cin >> input;
  cout << ((isBalanced(input)) ? "true" : "false");
}