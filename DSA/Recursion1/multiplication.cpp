#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n)
{
  if (n == 0)
  {
    return 0;
  }
  // if (n == 1)
  // {
  //   return n;
  // }

  int smallOutput = multiplyNumbers(m, n - 1);
  // return n * m;
  return smallOutput + m;
}

int main()
{
  int m, n;
  cin >> m >> n;
  cout << multiplyNumbers(m, n) << endl;
}