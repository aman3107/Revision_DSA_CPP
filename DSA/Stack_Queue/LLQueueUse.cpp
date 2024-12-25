#include <iostream>
#include "LLQueue.cpp"
using namespace std;

int main()
{
  Queue<int> q1;
  q1.enqueue(10);
  q1.enqueue(20);
  q1.enqueue(30);
  q1.enqueue(40);
  q1.enqueue(50);
  q1.enqueue(60);
  while (!q1.isEmpty())
  {
    cout << q1.dequeue() << endl;
  }

  // cout << q1.isEmpty() << endl;
  // cout << q1.getSize() << endl;
  // cout << q1.front() << endl;
  // cout << q1.dequeue() << endl;
  // cout << q1.dequeue() << endl;
  // cout << q1.getSize() << endl;
  // cout << q1.front() << endl;
  // cout << q1.dequeue() << endl;
  // cout << q1.dequeue() << endl;
  // cout << q1.front() << endl;
  // cout << q1.isEmpty() << endl;
  // cout << q1.getSize() << endl;
}