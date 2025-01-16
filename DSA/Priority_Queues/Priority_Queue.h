#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue
{

  vector<int> pq;

public:
  PriorityQueue()
  {
  }

  bool isEmpty()
  {
    return pq.size() == 0;
  }
  int getSize()
  {
    return pq.size();
  }

  int getMin()
  {
    if (!isEmpty())
    {
      return pq[0];
    }
    else
    {
      return -1;
    }
  }

  void insert(int data)
  {
    pq.push_back(data);
    int childIndex = pq.size() - 1;
    while (childIndex > 0)
    {
      int parentIndex = (childIndex - 1) / 2;
      if (pq[parentIndex] > pq[childIndex])
      {
        int temp = pq[parentIndex];
        pq[parentIndex] = pq[childIndex];
        pq[childIndex] = temp;
      }
      else
      {
        break;
      }
      childIndex = parentIndex;
    }
  }

  int remove()
  {
    if (isEmpty())
    {
      return -1;
    }
    int ans = pq[0];
    pq[0] = pq[pq.size() - 1];
    pq.pop_back();
    int parentIndex = 0;
    while (parentIndex < pq.size() - 1)
    {
      int leftChildIndex = (2 * parentIndex) + 1;
      int rightChildIndex = (2 * parentIndex) + 2;
      if ((leftChildIndex < pq.size()) && (pq[leftChildIndex] < pq[rightChildIndex]) && (pq[leftChildIndex] < pq[parentIndex]))
      {
        int temp = pq[parentIndex];
        pq[parentIndex] = pq[leftChildIndex];
        pq[leftChildIndex] = temp;
        parentIndex = leftChildIndex;
      }
      else if ((rightChildIndex < pq.size()) && (pq[leftChildIndex] > pq[rightChildIndex]) && (pq[rightChildIndex] < pq[parentIndex]))
      {
        int temp = pq[parentIndex];
        pq[parentIndex] = pq[rightChildIndex];
        pq[rightChildIndex] = temp;
        parentIndex = rightChildIndex;
      }
      else
      {
        break;
      }
    }
    return ans;
  }
  void print()
  {
    for (int i = 0; i < pq.size(); i++)
    {
      cout << pq[i] << endl;
    }
  }
};