#include <iostream>
#include <stack>
using namespace std;

void reverseStackRecursive(stack<int> &input, stack<int> &extra)
{
  if (input.size() == 0)
  {
    return;
  }
  int lastElement = input.top();
  input.pop();
  reverseStackRecursive(input, extra);
  extra.push(lastElement);
}

void reverseStack(stack<int> &input, stack<int> &extra)
{
  // Write your code here
  reverseStackRecursive(input, extra);
  while (!extra.empty())
  {
    input.push(extra.top());
    extra.pop();
  }
}

int main()
{
  stack<int> input, extra;
  int size;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int val;
    cin >> val;
    input.push(val);
  }
  reverseStack(input, extra);

  while (!input.empty())
  {
    cout << input.top() << " ";
    input.pop();
  }
}