#include <iostream>
using namespace std;

int sumofDigits(int n)
{
  if (n <= 0)
  {
    return 0;
  }
  return n % 10 + sumofDigits(n / 10);
}

int main()
{
  int n;
  cin >> n;
  cout << sumofDigits(n) << endl;
}