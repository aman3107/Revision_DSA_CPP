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
    while (j <= i)
    {
      cout << i + 1 << " ";
      j++;
    }
    cout << endl;
    i++;
  }
}