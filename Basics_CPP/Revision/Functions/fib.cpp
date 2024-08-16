#include <iostream>
using namespace std;

bool fib(int n)
{
  if (n == 0 || n == 1)
  {
    return true;
  }
  int a = 0;
  int b = 1;
  int c = a + b;
  while (c <= n)
  {
    if (c == n)
    {
      return true;
    }
    a = b;
    b = c;
    c = a + b;
  }
  return false;
}

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;

  cout << fib(n) << endl;
}