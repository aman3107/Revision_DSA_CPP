#include <iostream>
using namespace std;

int main()
{
  char ch[] = "abc";
  cout << ch << endl;

  char *pch = &ch[0];
  cout << pch << endl;

  char c1 = 'c';
  char *pc = &c1;
  cout << pc << endl;
}