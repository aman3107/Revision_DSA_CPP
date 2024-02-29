#include <iostream>
using namespace std;

int countDigits(int n)
{
  // Write your code here.
  if (n <= 0)
  {
    return 0;
  }
  return 1 + countDigits(n / 10);
}

int main()
{
  int n;
  cin >> n;
  cout << countDigits(n) << endl;
}