#include <iostream>
#include "Stack_Using_LL.cpp"
using namespace std;

int main()
{
  StackLL<int> s1;
  s1.push(10);
  s1.push(20);
  cout << s1.isEmpty() << endl;
  cout << s1.pop() << endl;
  cout << s1.top() << endl;
  cout << s1.size() << endl;

  StackLL<char> s2;
  s2.push('a');
  s2.push('b');
  cout << s2.pop() << endl;
  cout << s2.pop() << endl;
  cout << s2.pop() << endl;
  cout << s2.top() << endl;
  cout << s2.size() << endl;
  cout << s2.isEmpty() << endl;
}