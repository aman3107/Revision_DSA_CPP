#include <iostream>
#include "Fraction.cpp"
using namespace std;

int main()
{
  Fraction f1(10, 2);
  Fraction f2(20, 5);
  f1.print();
  f1.add(f2);
  f1.simplify();
  f1.print();
}