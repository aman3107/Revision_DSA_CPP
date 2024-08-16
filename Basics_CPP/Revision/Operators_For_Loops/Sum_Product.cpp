#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;
  int ch;
  cout << "Enter your choice 1. Sum 2. Product :" << endl;
  cin >> ch;

  int sum = 0;
  int prod = 1;
  for (int i = 1; i <= n; i++)
  {
    if (ch == 1)
    {
      sum = sum + i;
    }
    else if (ch == 2)
    {
      prod = prod * i;
    }
    else
    {
      cout << "-1 " << endl;
      break;
    }
  }
  if (ch == 1)
  {
    cout << sum << endl;
  }
  else if (ch == 2)
  {
    cout << prod << endl;
  }
}