#include <iostream>
#include "Fraction.cpp"
using namespace std;

int main()
{
  Fraction f1(10, 2);
  Fraction f2(15, 4);

  // Fraction f3 = f1.add(f2);
  Fraction f3 = f1 + f2;
  f1.print();
  f2.print();
  f3.print();

  // cout << f4.getNumerator() << " " << f4.getDenominator() << endl;
  // Fraction const f3(20, 8);
  // cout << f3.getNumerator() << " " << f3.getDenominator() << endl;
  // f3.print();
  // f3.print();
}