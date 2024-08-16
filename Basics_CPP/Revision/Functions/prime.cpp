#include <iostream>
using namespace std;

bool prime(int n)
{
  for (int d = 2; d < n; d++)
  {
    if (n % d == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cout << "Enter value of n : " << endl;
  cin >> n;
  cout << prime(n) << endl;
}