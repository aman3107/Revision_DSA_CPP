#include <iostream>
using namespace std;

#include "Student.cpp"

int main()
{
  // Create Objects Statically
  Student s1;

  // Create Objects Dynamically
  Student *s2 = new Student;
  s1.age = 10;
  cout << s1.age;
  (*s2).age = 24;
  s2->rollNo = 102;
}