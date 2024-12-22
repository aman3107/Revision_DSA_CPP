#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{
  Stack s1;
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(40);
  s1.push(50);
  s1.push(60);
  s1.push(70);
  s1.push(80);
  s1.push(90);
  s1.push(91);
  s1.push(92);
  s1.push(93);
  s1.push(74);
  s1.push(75);

  cout << s1.top() << endl;
  cout << s1.pop() << endl;
  cout << s1.size() << endl;
  cout << s1.isEmpty() << endl;
}