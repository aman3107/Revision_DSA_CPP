#include <iostream>
using namespace std;

void print(int *p)
{
  cout << *p << endl;
}

void incrementPointer(int *p)
{
  p = p + 1;
}

void increment(int *p)
{
  (*p)++;
}

int main()
{
  int p = 10;
  int *pi = &p;
  print(pi);
  incrementPointer(pi);
  cout << pi << endl;
  increment(pi);
  cout << *pi << endl;
}