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
    char ch = 'A' + (n - 1) - i;
    while (j <= i)
    {
      cout << ch << " ";
      ch++;
      j++;
    }
    cout << endl;
    i++;
  }
}