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
    int stars = 1;
    while (stars <= n - i + 1)
    {
      cout << "* ";
      stars++;
    }
    cout << endl;
    i++;
  }
}