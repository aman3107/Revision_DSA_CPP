#include <iostream>
using namespace std;

class DynamicArray
{
  int *data;
  int nextIndex;
  int size;

public:
  DynamicArray()
  {
    data = new int[5];
    nextIndex = 0;
    size = 5;
  }

  DynamicArray(DynamicArray const &d)
  {
    this->data = new int[d.size];
    for (int i = 0; i < d.nextIndex; i++)
    {
      this->data[i] = d.data[i];
    }
    this->nextIndex = d.nextIndex;
    this->size = d.size;
  }

  void operator=(DynamicArray const &d)
  {
    this->data = new int[d.size];
    for (int i = 0; i < d.nextIndex; i++)
    {
      this->data[i] = d.data[i];
    }
    this->nextIndex = d.nextIndex;
    this->size = d.size;
  }
  void add(int ele)
  {
    if (nextIndex == size)
    {
      int *newArray = new int[size * 2];
      for (int i = 0; i < size; i++)
      {
        newArray[i] = data[i];
      }
      delete[] data;
      data = newArray;
      size *= 2;
    }
    data[nextIndex] = ele;
    nextIndex++;
  }

  int get(int i) const
  {
    if (i >= nextIndex)
    {
      return -1;
    }
    return data[i];
  }

  void print() const
  {
    for (int i = 0; i < nextIndex; i++)
    {
      cout << data[i] << " ";
    }
    cout << endl;
  }

  void add(int i, int ele)
  {
    if (i < nextIndex)
    {
      data[i] = ele;
    }
    else if (i == nextIndex)
    {
      add(ele);
    }
    else
    {
      return;
    }
  }
};