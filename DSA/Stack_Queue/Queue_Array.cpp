#include <iostream>
using namespace std;

template <typename T>
class Queue
{
  T *data;
  int nextIndex;
  int firstIndex;
  int size;
  int capacity;

public:
  Queue(int s)
  {
    data = new T[s];
    nextIndex = 0;
    firstIndex = -1;
    size = 0;
    capacity = s;
  }

  bool isEmpty()
  {
    return size == 0;
  }

  int getSize()
  {
    return size;
  }

  void enque(T element)
  {
    if (size != capacity)
    {
      data[nextIndex] = element;
      nextIndex = (nextIndex + 1) % capacity;
      if (firstIndex == -1)
      {
        firstIndex = 0;
      }
      size++;
    }
    else
    {
      cout << "queue is full :" << endl;
      return;
    }
  }

  T front()
  {
    if (isEmpty())
    {
      cout << "Queue is empty";
      return 0;
    }
    return data[firstIndex];
  }

  T deque()
  {
    if (isEmpty())
    {
      cout << "Queue is empty";
      return 0;
    }
    T ans = data[firstIndex];
    size--;
    firstIndex = (firstIndex + 1) % capacity;
    if (size == 0)
    {
      firstIndex = -1;
      nextIndex = 0;
    }
    return ans;
  }
};