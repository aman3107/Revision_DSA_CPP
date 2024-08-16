#include <iostream>
using namespace std;

int fact(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f = f * i;
  }
  return f;
}

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;

  int r;
  cout << "Enter value of r :" << endl;
  cin >> r;

  cout << fact(n) / (fact(r) * fact(n - r)) << endl;
}