#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
  int bin;
  cout << "Enter binary number : " << endl;
  cin >> bin;

  int dec = 0;
  int i = 0;
  while (bin > 0)
  {
    int rem = bin % 10;
    dec = dec + pow(2, i) * rem;
    bin = bin / 10;
    i++;
  }
  cout << dec;
}