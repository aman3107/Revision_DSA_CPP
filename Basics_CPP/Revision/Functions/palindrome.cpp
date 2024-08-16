#include <iostream>
using namespace std;

int palin(int n)
{
  int rev_num = 0;
  int num = n;
  while (num > 0)
  {
    int rem = num % 10;
    rev_num = rev_num * 10 + rem;
    num = num / 10;
  }
  return (n == rev_num);
}

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;
  cout << palin(n) << endl;
}