#include <iostream>
#include <math.h>
using namespace std;

class Polynomial
{
public:
  int *degCoeff;
  int capacity;

public:
  Polynomial()
  {
    this->degCoeff = new int[10];
    capacity = 10;
    for (int i = 0; i < capacity; i++)
    {
      degCoeff[i] = 0;
    }
  }

  Polynomial(Polynomial const &p1)
  {
    this->degCoeff = new int[p1.capacity];
    for (int i = 0; i < p1.capacity; i++)
    {
      degCoeff[i] = p1.degCoeff[i];
    }
    this->capacity = p1.capacity;
  }

  void operator=(Polynomial const &p1)
  {
    this->degCoeff = new int[p1.capacity];
    for (int i = 0; i < p1.capacity; i++)
    {
      degCoeff[i] = p1.degCoeff[i];
    }
    this->capacity = p1.capacity;
  }

  void setCoefficient(int deg, int coeff)
  {
    if (deg < capacity)
    {
      degCoeff[deg] = coeff;
    }
    else
    {
      int preCapacity = capacity;
      while (deg >= capacity)
      {
        capacity = capacity * 2;
      }
      int *newCoeff = new int[capacity];
      for (int i = 0; i < capacity; i++)
      {
        if (i < preCapacity)
        {
          newCoeff[i] = degCoeff[i];
        }
        else
        {
          newCoeff[i] = 0;
        }
      }
      newCoeff[deg] = coeff;
      delete[] degCoeff;
      degCoeff = newCoeff;
    }
  }

  void print()
  {
    for (int i = 0; i < capacity; i++)
    {
      if (degCoeff[i] != 0)
      {
        cout << degCoeff[i] << "x" << i << " ";
      }
    }
    cout << endl;
  }

  Polynomial operator+(Polynomial const &p1) const
  {
    Polynomial p2;
    p2.capacity = max(this->capacity, p1.capacity);
    p2.degCoeff = new int[p2.capacity];
    for (int i = 0; i < p2.capacity; i++)
    {
      if (i < this->capacity && i < p1.capacity)
      {
        p2.degCoeff[i] = this->degCoeff[i] + p1.degCoeff[i];
      }
      else if (i < this->capacity)
      {
        p2.degCoeff[i] = this->degCoeff[i];
      }
      else if (i < p1.capacity)
      {
        p2.degCoeff[i] = p1.degCoeff[i];
      }
    }
    return p2;
  }

  Polynomial operator-(Polynomial const &p1) const
  {
    Polynomial p2;
    p2.capacity = max(this->capacity, p1.capacity);
    p2.degCoeff = new int[p2.capacity];
    for (int i = 0; i < p2.capacity; i++)
    {
      if (i < this->capacity && i < p1.capacity)
      {
        p2.degCoeff[i] = this->degCoeff[i] - (p1.degCoeff[i]);
      }
      else if (i < this->capacity)
      {
        p2.degCoeff[i] = this->degCoeff[i];
      }
      else if (i < p1.capacity)
      {
        p2.degCoeff[i] = p1.degCoeff[i];
      }
    }
    return p2;
  }
  Polynomial operator*(Polynomial const &p1)
  {
    Polynomial p2;
    p2.capacity = this->capacity + p1.capacity;
    p2.degCoeff = new int[p2.capacity];
    for (int i = 0; i < p2.capacity; i++)
    {
      p2.degCoeff[i] = 0;
    }
    for (int i = 0; i < this->capacity; i++)
    {
      if (this->degCoeff[i] != 0)
      {
        for (int j = 0; j < p1.capacity; j++)
        {
          if (p1.degCoeff[j] != 0)
          {
            int newCoeff = this->degCoeff[i] * p1.degCoeff[j];
            p2.degCoeff[i + j] += newCoeff;
          }
        }
      }
    }
    return p2;
  }
};
