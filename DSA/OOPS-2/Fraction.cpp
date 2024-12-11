#include <iostream>
#include <math.h>
using namespace std;

class Fraction
{
  int numerator;
  int denominator;

public:
  Fraction()
  {
  }
  Fraction(int numerator, int denominator)
  {
    this->numerator = numerator;
    this->denominator = denominator;
  }

  int getNumerator() const
  {
    return numerator;
  }
  int getDenominator() const
  {
    return denominator;
  }
  void setNumerator(int numerator)
  {
    this->numerator = numerator;
  }
  void setDenominator(int denominator)
  {
    this->denominator = denominator;
  }

  void print() const
  {
    cout << numerator << " / " << denominator << endl;
  }

  void simplify()
  {
    int gcd = 1;
    int min_value = min(numerator, denominator);
    for (int i = 1; i <= min_value; i++)
    {
      if (numerator % i == 0 && denominator % i == 0)
      {
        gcd = i;
      }
    }
    numerator = numerator / gcd;
    denominator = denominator / gcd;
  }

  // void add(Fraction const &f2)
  // {
  //   int lcm = denominator * f2.denominator;
  //   int x = lcm / denominator;
  //   int y = lcm / f2.denominator;
  //   int num = (numerator * x) + (f2.numerator * y);

  //   numerator = num;
  //   denominator = lcm;
  //   simplify();
  // }
  // Fraction add(Fraction const &f2)
  // {
  //   int lcm = denominator * f2.denominator;
  //   int x = lcm / denominator;
  //   int y = lcm / f2.denominator;
  //   int num = (numerator * x) + (f2.numerator * y);

  //   Fraction fNew(num, lcm);
  //   fNew.simplify();
  //   return fNew;
  // }

  Fraction operator+(Fraction const &f2) const
  {
    int lcm = denominator * f2.denominator;
    int x = lcm / denominator;
    int y = lcm / f2.denominator;
    int num = (numerator * x) + (f2.numerator * y);

    Fraction fNew(num, lcm);
    fNew.simplify();
    return fNew;
  }

  Fraction operator*(Fraction const &f2) const
  {
    Fraction fNew;
    fNew.numerator = this->numerator * f2.numerator;
    fNew.denominator = this->denominator * f2.denominator;
    fNew.simplify();
    return fNew;
  }

  bool operator==(Fraction const &f2) const
  {
    if (this->numerator == f2.numerator && this->denominator == f2.denominator)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  Fraction &operator++()
  {
    this->numerator = this->numerator + this->denominator;
    simplify();
    // Fraction fNew(numerator, denominator);
    // return fNew;
    return *this;
  }

  Fraction operator++(int)
  {
    Fraction fNew(numerator, denominator);
    numerator = numerator + denominator;
    simplify();
    fNew.simplify();
    return fNew;
  }

  Fraction operator+=(Fraction const &f2)
  {
    int lcm = denominator * f2.denominator;
    int x = lcm / denominator;
    int y = lcm / f2.denominator;
    int num = (numerator * x) + (f2.numerator * y);
    numerator = num;
    denominator = lcm;
    simplify();
    return *this;
  }

  void multiply(Fraction const &f2)
  {
    numerator = numerator * f2.numerator;
    denominator = denominator * f2.denominator;
    simplify();
  }
};