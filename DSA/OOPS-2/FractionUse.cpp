#include <iostream>
#include "Fraction.cpp"
using namespace std;

int main()
{
  int i = 5, j = 6;
  (i += j) += j;
  // cout << i << endl;
  Fraction f1(10, 2);
  Fraction f2(15, 4);
  (f1 += f2) += f2;
  f1.print();
  f2.print();

  // Fraction f3 = f1.add(f2);
  // Fraction f3 = f1 + f2;
  // Fraction f4 = f1 * f2;
  // bool ans = (f1 == f2);
  // f1.print();
  // f2.print();
  // f3.print();
  // f4.print();
  // cout << ans << endl;
  // ++f1;
  // f1.print();
  // Fraction f3 = ++(++f1);
  Fraction f3 = f1++;

  f3.print();
  f1.print();

  // cout << f4.getNumerator() << " " << f4.getDenominator() << endl;
  // Fraction const f3(20, 8);
  // cout << f3.getNumerator() << " " << f3.getDenominator() << endl;
  // f3.print();
  // f3.print();
}