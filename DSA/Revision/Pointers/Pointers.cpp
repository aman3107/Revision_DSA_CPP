#include <iostream>
using namespace std;

int main()
{
  int i = 10;
  cout << &i << endl;
  int *p = &i;
  cout << p << endl;
  cout << *p << endl;

  int *q = p;
  (*p)++;
  cout << i << endl;
  cout << *p << endl;
  cout << *q << endl;
}