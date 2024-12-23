#include <iostream>
#include <climits>
using namespace std;

template <typename T>

class TemplatePair
{
  T *data;
  int nextIndex;
  int capacity;

public:
  TemplatePair()
  {
    data = new T[5];
    nextIndex = 0;
    capacity = 5;
  }

  void push(T data)
  {
    if (nextIndex == capacity)
    {
      T *newData = new T[2 * capacity];
      for (int i = 0; i < capacity; i++)
      {
        newData[i] = this->data[i];
      }
      capacity = 2 * capacity;
      delete[] this->data;
      this->data = newData;
    }
    this->data[nextIndex] = data;
    nextIndex++;
  }
  bool isEmpty()
  {
    return nextIndex == 0;
  }
  T pop()
  {
    if (isEmpty())
    {
      cout << "Stack is empty";
      return nextIndex;
    }
    nextIndex--;
    return this->data[nextIndex];
  }
  T top()
  {
    if (isEmpty())
    {
      cout << "Stack is empty";
      return nextIndex;
    }
    return this->data[nextIndex - 1];
  }

  int size()
  {
    return nextIndex;
  }
};