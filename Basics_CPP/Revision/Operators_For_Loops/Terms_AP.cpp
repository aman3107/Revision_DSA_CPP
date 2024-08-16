#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;

  int d = 1;
  for (int i = 1; i <= n; i++)
  {
    int ap = 3 * d + 2;
    if (ap % 4 == 0)
    {
      d++;
      ap = 3 * d + 2;
      cout << ap << " ";
    }
    else
    {
      cout << ap << " ";
    }
    d++;
  }
}