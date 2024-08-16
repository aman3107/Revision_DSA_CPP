#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter square root number :" << endl;
  cin >> n;
  int sq_root = 1;
  int i = 1;
  while (sq_root <= n)
  {
    sq_root = i * i;
    i++;
  }
  if (n == 0)
  {
    cout << "0" << endl;
  }
  else
  {
    cout << i - 2 << endl;
  }
}