#include <iostream>
#include "Student.cpp"
using namespace std;

int main()
{
  // Constructor
  // Student s1;
  // Student *s2 = new Student;
  // s1.display();
  // s2->display();
  // Student s3(20);
  // s3.display();

  // Student *s4 = new Student(22);
  // cout << "Student s4 address :" << s4 << endl;
  // s4->display();

  // Student s5(20, 102);
  // s5.display();

  // Copy Constructor

  // Student s1(10, 20);
  // Student s2(s1);
  // s1.display();
  // s2.display();

  // Student *s3 = new Student(10, 200);
  // Student s4(*s3);
  // Student *s5 = new Student(*s3);
  // s3->display();
  // s4.display();
  // s5->display();

  // Copy Assignment Constructor

  Student s1(10, 200);
  Student s2(20, 100);
  Student *s3 = new Student(30, 300);
  s2 = s1;
  *s3 = s1;
  s1.display();
  s3->display();
  s2.display();
  delete s3;
  Student s4 = s1; // Student s4(s1); Copy Constructor Called
}