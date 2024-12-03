#include <iostream>
using namespace std;

class Fraction
{
private:
  int numerator;
  int denominator;

public:
  Fraction(int numerator, int denominator)
  {
    this->numerator = numerator;
    this->denominator = denominator;
  }

  void print()
  {
    cout << this->numerator << "/" << this->denominator << endl;
  }

  void simplify()
  {
    int gcd = 1;
    int j = min(this->numerator, this->denominator);
    for (int i = 1; i <= j; i++)
    {
      if (numerator % i == 0 && denominator % j == 0)
      {
        gcd = i;
      }
    }
    numerator = numerator / gcd;
    denominator = denominator / gcd;
  }

  void add(Fraction const &f1)
  {
    int lcm = this->denominator * f1.denominator;
    int x = lcm / this->denominator;
    int y = lcm / f1.denominator;
    int num = (x * this->numerator) + (y * f1.numerator);
    this->numerator = num;
    this->denominator = lcm;

    this->simplify();
  }

  void multiply(Fraction const &f1)
  {
    this->numerator = this->numerator * f1.numerator;
    this->denominator = this->denominator * f1.denominator;
    this->simplify();
  }
};