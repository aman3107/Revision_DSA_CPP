#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;
  int a = 0;
  int b = 1;
  int c = 1;
  for (int i = 2; i <= n; i++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  cout << c;
}