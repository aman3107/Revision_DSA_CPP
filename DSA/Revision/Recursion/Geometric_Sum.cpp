#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k)
{
  if (k == 0)
  {
    return 1;
  }
  double smallOutput = geometricSum(k - 1);
  return smallOutput + (1 / pow(2, k));
}

int main()
{
  int n;
  cin >> n;
  cout << fixed << setprecision(5);
  cout << geometricSum(n) << endl;
}