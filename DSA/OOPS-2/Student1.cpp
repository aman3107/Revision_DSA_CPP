#include <iostream>
using namespace std;

class Student1
{
public:
  int age;
  const int rollNumber;
  int &x;

  Student1(int rollNumber, int x) : rollNumber(rollNumber), x(x)
  {
  }

  void print()
  {
    cout << age << " " << rollNumber << " " << x << endl;
  }
};