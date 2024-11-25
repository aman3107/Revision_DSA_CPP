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
  cout << s1.age << endl;
  s1.rollNo = 101;
  (*s2).age = 24;
  s2->rollNo = 102;
  // s1.name = 'Aman' // It will gives us te error
  s1.display();
  s2->display();
  cout << s1.getAge() << endl;
  cout << s1.getPhoneNumber() << endl;
  s1.setPhoneNumber(12345678);
  cout << s1.getPhoneNumber() << endl;
}