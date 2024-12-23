#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> s1;
  s1.push(10);
  cout << s1.top() << endl;
  s1.pop();
}