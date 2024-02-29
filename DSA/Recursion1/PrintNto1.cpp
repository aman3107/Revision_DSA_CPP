#include <iostream>
using namespace std;

void printNto1(int n)
{
  if (n < 1)
  {
    return;
  }
  cout << n << endl;
  return printNto1(n - 1);
}

int main()
{
  int n;
  cin >> n;
  printNto1(n);
}