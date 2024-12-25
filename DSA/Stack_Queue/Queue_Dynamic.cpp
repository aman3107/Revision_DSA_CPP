#include <iostream>
using namespace std;

template <typename T>
class Queue
{
  T *data;
  int size;
  int capacity;
  int firstIndex;
  int nextIndex;

public:
  Queue()
  {
    data = new T[5];
    size = 0;
    capacity = 5;
    firstIndex = -1;
    nextIndex = 0;
  }

  int getSize()
  {
    return size;
  }

  bool isEmpty()
  {
    return size == 0;
  }

  void equeue(T ele)
  {
    if (size == capacity)
    {
      T *newData = new T[2 * capacity];
      int j = 0;
      for (int i = firstIndex; i < capacity; i++)
      {
        newData[j] = data[i];
        j++;
      }
      for (int i = 0; i < firstIndex; i++)
      {
        newData[j] = data[i];
        j++;
      }
      delete[] data;
      nextIndex = capacity;
      firstIndex = 0;
      capacity = 2 * capacity;
      data = newData;
    }
    data[nextIndex] = ele;
    nextIndex = (nextIndex + 1) % capacity;
    if (firstIndex == -1)
    {
      firstIndex = 0;
    }
    size++;
  }

  T front()
  {
    if (isEmpty())
    {
      return 0;
    }
    return data[firstIndex];
  }

  T dequeue()
  {
    if (isEmpty())
    {
      return 0;
    }
    T ans = data[firstIndex];
    firstIndex = (firstIndex + 1) % capacity;
    size--;
    if (size == 0)
    {
      firstIndex = -1;
      nextIndex = 0;
    }
    return ans;
  }
};