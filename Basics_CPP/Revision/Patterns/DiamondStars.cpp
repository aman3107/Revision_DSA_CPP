#include <iostream>
using namespace std;

int main()
{

  int n;
  cout << "Enter number of rows and columns" << endl;
  cin >> n;
  int mid1 = (n / 2) + 1;
  int mid2 = mid1 - 1;

  int i = 1;
  while (i <= mid1)
  {
    int spaces = 1;
    while (spaces <= mid1 - i)
    {
      cout << " ";
      spaces++;
    }
    int star = 1;
    while (star <= 2 * i - 1)
    {
      cout << "*";
      star++;
    }
    cout << endl;
    i++;
  }
  int j = 1;
  while (j <= mid2)
  {
    int spaces = 1;
    while (spaces <= j)
    {
      cout << " ";
      spaces++;
    }

    int stars = 1;
    int k = mid2 - j + 1;
    while (stars <= 2 * k - 1)
    {
      cout << "*";
      stars++;
    }
    cout << endl;
    j++;
  }
}