#include <iostream>
#include "Queue_Dynamic.cpp"
using namespace std;

int main()
{
  Queue<int> q1;
  q1.equeue(10);
  q1.equeue(20);
  q1.equeue(30);
  q1.equeue(40);
  q1.equeue(50);
  q1.equeue(60);
  cout << q1.front() << endl;
  cout << q1.isEmpty() << endl;
  cout << q1.dequeue() << endl;
  cout << q1.getSize() << endl;
  cout << q1.front() << endl;
}