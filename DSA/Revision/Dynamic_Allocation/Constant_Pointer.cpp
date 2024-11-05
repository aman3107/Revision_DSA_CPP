#include <iostream>
using namespace std;

void ref(const int &r)
{
  r;
}

void p(const int *p)
{
  *p++;
}

int main()
{
  int a = 10;
  p(&a);
  cout << a << endl;
  const int i = 10;
  const int *p = &i;

  int j = 12;
  const int *p2 = &j;
  j++;
  cout << *p2 << endl;
}