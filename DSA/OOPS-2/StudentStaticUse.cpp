#include <iostream>
#include "StudentStatic.cpp"
using namespace std;

int main()
{
  StudentStatic s1;
  s1.rollNumber = 102;
  s1.age = 20;
  // cout << s1.totalStudents << endl;
  cout << StudentStatic ::totalStudents << endl;

  // s1.totalStudents = 20;
  StudentStatic s2;
  // cout << s2.totalStudents << endl;
  cout << StudentStatic ::totalStudents << endl;
  StudentStatic s3, s4, s5;
  cout << StudentStatic ::totalStudents << endl;
  cout << StudentStatic ::getTotalStudents() << endl;
}