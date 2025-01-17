#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue
{
  // Declare the data members here
  vector<int> pq;

public:
  PriorityQueue()
  {
    // Implement the constructor here
  }

  /**************** Implement all the public functions here ***************/

  void insert(int element)
  {
    // Implement the insert() function here
    pq.push_back(element);
    int childIndex = pq.size() - 1;
    while (childIndex > 0)
    {
      int parentIndex = (childIndex - 1) / 2;
      if (pq[childIndex] > pq[parentIndex])
      {
        int temp = pq[childIndex];
        pq[childIndex] = pq[parentIndex];
        pq[parentIndex] = temp;
      }
      else
      {
        break;
      }
      childIndex = parentIndex;
    }
  }

  int getMax()
  {
    // Implement the getMax() function here
    if (!isEmpty())
    {
      return pq[0];
    }
    return -1;
  }

  int removeMax()
  {
    // Implement the removeMax() function here
    int ans = pq[0];
    pq[0] = pq[pq.size() - 1];
    pq.pop_back();
    int parentIndex = 0;
    while (parentIndex < pq.size())
    {
      int leftChildIndex = (2 * parentIndex) + 1;
      int rightChildIndex = (2 * parentIndex) + 2;
      if (leftChildIndex < pq.size() && pq[leftChildIndex] > pq[rightChildIndex] && pq[leftChildIndex] > pq[parentIndex])
      {
        int temp = pq[leftChildIndex];
        pq[leftChildIndex] = pq[parentIndex];
        pq[parentIndex] = temp;
        parentIndex = leftChildIndex;
      }
      else if (rightChildIndex < pq.size() && pq[leftChildIndex] < pq[rightChildIndex] && pq[rightChildIndex] > pq[parentIndex])
      {
        int temp = pq[rightChildIndex];
        pq[rightChildIndex] = pq[parentIndex];
        pq[parentIndex] = temp;
        parentIndex = rightChildIndex;
      }
      else
      {
        break;
      }
    }
    return ans;
  }

  int getSize()
  {
    // Implement the getSize() function here
    return pq.size();
  }

  bool isEmpty()
  {
    // Implement the isEmpty() function here
    return pq.size() == 0;
  }
};