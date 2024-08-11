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
    int j = 1;
    int num = i;
    while (j <= i)
    {
      cout << num;
      num++;
      j++;
    }
    num = num - 2;
    while (j <= 2 * i - 1)
    {
      cout << num;
      num--;
      j++;
    }
    cout << endl;
    i++;
  }
}