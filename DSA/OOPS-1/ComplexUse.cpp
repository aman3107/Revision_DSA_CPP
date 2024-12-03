#include <iostream>
#include "Complex.cpp"
using namespace std;

int main()
{
  ComplexNumbers c1(3, 4);
  ComplexNumbers c2(5, 1);
  // c1.plus(c2);
  c1.multiply(c2);
  c1.print();
}