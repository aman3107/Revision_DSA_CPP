#include <iostream>
using namespace std;

class StudentStatic
{
public:
  int rollNumber;
  int age;
  static int totalStudents;

  StudentStatic()
  {
    totalStudents++;
  }
  int getRollNumber()
  {
    return rollNumber;
  }

  static int getTotalStudents()
  {
    return totalStudents;
  }
};

int StudentStatic ::totalStudents = 0;