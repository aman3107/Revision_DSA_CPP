#include <iostream>
using namespace std;

int main()
{

  int n;
  cout << "Enter number of rows and columns" << endl;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int spaces = 1;
    while (spaces <= n - i)
    {
      cout << " ";
      spaces++;
    }
    int k = 1;
    while (k <= i)
    {
      cout << k;
      k++;
    }
    int num = k - 2;
    while (k <= 2 * i - 1)
    {
      cout << num;
      num--;
      k++;
    }
    cout << endl;
    i++;
  }
}