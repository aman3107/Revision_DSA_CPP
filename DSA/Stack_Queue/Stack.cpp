#include <iostream>
#include <climits>
using namespace std;

class Stack
{
private:
  int *data;
  int nextIndex;
  int totalSize;

public:
  Stack()
  {
    data = new int[5];
    nextIndex = 0;
    totalSize = 5;
  }

  void push(int data)
  {
    if (nextIndex == totalSize)
    {
      int *newArr = new int[totalSize * 2];
      for (int i = 0; i < totalSize; i++)
      {
        newArr[i] = this->data[i];
      }
      delete[] this->data;
      this->data = newArr;
      totalSize = totalSize * 2;
    }
    this->data[nextIndex] = data;
    nextIndex++;
  }
  int pop()
  {
    if (isEmpty())
    {
      cout << "Stack is empty" << endl;
      return INT_MIN;
    }
    nextIndex--;
    return this->data[nextIndex];
  }
  int top()
  {
    if (isEmpty())
    {
      cout << "Stack is empty" << endl;
      return INT_MIN;
    }
    return this->data[nextIndex - 1];
  }
  bool isEmpty()
  {
    return (nextIndex == 0);
  }
  int size()
  {
    return nextIndex;
  }
};