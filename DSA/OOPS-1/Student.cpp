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
