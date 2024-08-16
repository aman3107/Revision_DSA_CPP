#include <iostream>
using namespace std;

int main()
{
  int dec;
  cout << "Enter decimal number : " << endl;
  cin >> dec;

  int pv = 1;
  int bin = 0;
  while (dec > 0)
  {
    int rem = dec % 2;
    bin = bin + (rem * pv);
    dec = dec / 2;
    pv = pv * 10;
  }
  cout << bin << endl;
}