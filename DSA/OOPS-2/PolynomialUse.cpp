#include <iostream>
#include "Polynomial.cpp"
using namespace std;

int main()
{
  // Polynomial p1;
  // Polynomial p2;
  // p1.setCoefficient(0, 1);
  // p1.setCoefficient(2, 2);
  // p1.setCoefficient(4, 3);
  // p1.setCoefficient(11, 4);
  // p1.setCoefficient(30, 5);
  // p1.setCoefficient(2, 3);
  // p1.setCoefficient(1, 2);
  // p1.setCoefficient(0, 1);
  // p1.setCoefficient(5, 10);
  // p2.setCoefficient(2, -4);
  // p2.setCoefficient(1, 4);
  // p2.setCoefficient(0, 2);
  // p2.setCoefficient(6, 12);
  // Polynomial p3 = p1 + p2;
  // Polynomial p4 = p1 - p2;
  // p1.print();
  // p2.print();

  int count1, count2, choice;
  cin >> count1;

  int *degree1 = new int[count1];
  int *coeff1 = new int[count1];

  for (int i = 0; i < count1; i++)
  {
    cin >> degree1[i];
  }

  for (int i = 0; i < count1; i++)
  {
    cin >> coeff1[i];
  }

  Polynomial first;
  for (int i = 0; i < count1; i++)
  {
    first.setCoefficient(degree1[i], coeff1[i]);
  }

  cin >> count2;

  int *degree2 = new int[count2];
  int *coeff2 = new int[count2];

  for (int i = 0; i < count2; i++)
  {
    cin >> degree2[i];
  }

  for (int i = 0; i < count2; i++)
  {
    cin >> coeff2[i];
  }

  Polynomial second;
  for (int i = 0; i < count2; i++)
  {
    second.setCoefficient(degree2[i], coeff2[i]);
  }

  cin >> choice;

  Polynomial result;
  switch (choice)
  {
    // Add
  case 1:
    result = first + second;
    result.print();
    break;
    // Subtract
  case 2:
    result = first - second;
    result.print();
    break;
    // Multiply
  case 3:
    result = first * second;
    result.print();
    break;

  case 4: // Copy constructor
  {
    Polynomial third(first);
    if (third.degCoeff == first.degCoeff)
    {
      cout << "false" << endl;
    }
    else
    {
      cout << "true" << endl;
    }
    break;
  }

  case 5: // Copy assignment operator
  {
    Polynomial fourth(first);
    if (fourth.degCoeff == first.degCoeff)
    {
      cout << "false" << endl;
    }
    else
    {
      cout << "true" << endl;
    }
    break;
  }
  }

  return 0;
}