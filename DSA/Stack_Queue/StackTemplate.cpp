#include <iostream>
#include "Stack_Using_Template.cpp"
using namespace std;

int main()
{
  TemplatePair<int> p1;
  p1.push(10);
  p1.push(20);
  p1.push(30);
  p1.push(40);
  cout << p1.pop() << endl;
  cout << p1.top() << endl;
  cout << p1.size() << endl;
  cout << p1.isEmpty() << endl;

  TemplatePair<double> p2;
  p2.push(10.11);
  p2.push(20.21);
  p2.push(30.31);
  p2.push(40.41);
  cout << p2.pop() << endl;
  cout << p2.top() << endl;
  cout << p2.size() << endl;
  cout << p2.isEmpty() << endl;

  TemplatePair<char> p3;
  // p3.push('a');
  // p3.push('b');
  // p3.push('c');
  // p3.push('d');
  cout << p3.pop() << endl;
  cout << p3.top() << endl;
  cout << p3.size() << endl;
  cout << p3.isEmpty() << endl;
}