#include <iostream>
using namespace std;

int main()
{
  // Constant int
  const int i = 10;
  // i = 12;

  // Constant reference from a non const int
  int j = 12;
  const int &k = j;
  // k++;
  j++;
  cout << k << endl;

  // Constant reference from a const int
  const int j2 = 12;
  const int &k2 = j2;
  // j2++;
  // k2++;

  // reference from a const int

  // const int j3 = 15;
  // int &k3 = j3;
  // j3++;
  // k3++;
}