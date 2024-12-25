#include <iostream>
using namespace std;
template <typename T>
class Queue
{
  T *data;
  int capacity;
  int front;
  int nextIndex;

public:
  Queue()
  {
    data = new T[5];
    capacity = 5;
    front = -1;
    nextIndex = 0;
  }

  bool isEmpty()
  {
    return front == -1 | front == nextIndex;
  }

  int getSize()
  {
    return nextIndex - front;
  }
  void enque(T element)
  {
    if (nextIndex == capacity)
    {
      T *newData = new T[2 * capacity];
      for (int i = 0; i < capacity; i++)
      {
        newData[i] = data[i];
      }
      capacity = 2 * capacity;
      delete[] data;
      data = newData;
    }
    if (front == -1)
    {
      front = 0;
    }
    data[nextIndex] = element;
    nextIndex++;
  }
  T deque()
  {
    if (isEmpty())
    {
      return 0;
    }
    T ans = data[front];

    if (nextIndex != front)
      front++;
    return ans;
  }
  T top()
  {
    if (isEmpty())
    {
      return 0;
    }
    return data[front];
  }
};
