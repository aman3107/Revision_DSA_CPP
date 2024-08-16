#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter value of n " << endl;
  cin >> n;

  bool prime = true;
  for (int d = 2; d < n; d++)
  {
    if (n % d == 0)
    {
      prime = false;
      break;
    }
  }
  if (prime)
  {
    cout << "Num is prime :" << endl;
  }
  else
  {
    cout << "Num is not prime :" << endl;
  }
}