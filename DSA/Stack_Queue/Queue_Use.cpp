#include <iostream>
#include "Queue.cpp"
// #include "Queue_Array.cpp"
using namespace std;

int main()
{
  /*
  Queue<int> q1(5);
  q1.enque(10);
  q1.enque(20);
  q1.enque(30);
  q1.enque(40);
  q1.enque(50);
  q1.enque(60);
  q1.enque(70);
  cout << q1.isEmpty() << endl;
  cout << q1.front() << endl;
  cout << q1.deque() << endl;
  cout << q1.front() << endl;
  cout << q1.getSize() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.isEmpty() << endl;
  q1.enque(70);
  cout << q1.getSize() << endl;
  cout << q1.front() << endl;
  */

  Queue<int> q1;
  q1.enque(10);
  q1.enque(20);
  q1.enque(30);
  q1.enque(40);
  q1.enque(50);
  q1.enque(60);
  q1.enque(70);
  cout << q1.isEmpty() << endl;
  cout << q1.top() << endl;
  cout << q1.deque() << endl;
  cout << q1.top() << endl;
  cout << q1.getSize() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.deque() << endl;
  cout << q1.isEmpty() << endl;
  q1.enque(70);
  cout << q1.getSize() << endl;
  cout << q1.top() << endl;
}