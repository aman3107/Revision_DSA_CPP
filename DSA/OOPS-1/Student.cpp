#include <iostream>
using namespace std;

class Student
{
public:
  int rollNo;
  int age;

private:
  char name[100];
  int phoneNumber;

public:
  // Desturctor
  ~Student()
  {
    cout << "Destructor is called :" << endl;
  }
  // Default Constructor
  Student()
  {
    cout << "Constructor Called :" << endl;
  }

  // Parameterized Constructor
  Student(int rollNo)
  {
    cout << "this : " << this << endl;
    cout << "Constructor 2 called: " << endl;
    this->rollNo = rollNo;
  }

  Student(int a, int r)
  {
    cout << "Constructor 3 called: " << endl;
    age = a;
    rollNo = r;
  }
  void display()
  {
    cout << age << " " << rollNo << endl;
  }

  int getAge()
  {
    return age;
  }

  int getPhoneNumber()
  {
    return phoneNumber;
  }

  void setPhoneNumber(int number)
  {
    phoneNumber = number;
  }
};
