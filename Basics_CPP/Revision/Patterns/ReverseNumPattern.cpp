#include <iostream>
using namespace std;

int main()
{

  int n;
  cout << "Enter number of rows and columns" << endl;
  cin >> n;
  int i = 0;
  while (i < n)
  {
    int j = 0;
    int k = i + 1;
    while (j <= i)
    {
      cout << k << " ";
      k--;
      j++;
    }
    cout << endl;
    i++;
  }
}