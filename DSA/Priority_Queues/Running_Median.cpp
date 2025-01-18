#include <iostream>
#include <queue>
using namespace std;
void findMedian1(int *arr, int n)
{
  if (n == 0)
  {
    return;
  }
  priority_queue<int> maxPQ;
  priority_queue<int, vector<int>, greater<int>> minPQ;
  maxPQ.push(arr[0]);
  cout << arr[0] << " ";
  for (int i = 1, j = 2; i < n; i++, j++)
  {
    if (arr[i] < maxPQ.top())
    {
      maxPQ.push(arr[i]);
    }
    else
    {
      minPQ.push(arr[i]);
    }
    if ((maxPQ.size() - minPQ.size()) > 1)
    {
      if (maxPQ.size() > minPQ.size())
      {
        minPQ.push(maxPQ.top());
        maxPQ.pop();
      }
      else
      {
        maxPQ.push(minPQ.top());
        minPQ.pop();
      }
    }
    if (j % 2 == 0)
    {
      cout << (maxPQ.top() + minPQ.top()) / 2 << " ";
    }
    else
    {
      if (maxPQ.size() > minPQ.size())
      {
        cout << maxPQ.top() << " ";
      }
      else
      {
        cout << minPQ.top() << " ";
      }
    }
  }
}
void findMedian(int *arr, int n)
{
  // Write your code here
  priority_queue<int> maxPQ;
  priority_queue<int, vector<int>, greater<int>> minPQ;
  for (int i = 0, j = 1; i < n; i++, j++)
  {
    if (maxPQ.empty())
    {
      maxPQ.push(arr[i]);
      cout << maxPQ.top() << " ";
      continue;
    }
    if (arr[i] < maxPQ.top())
    {
      maxPQ.push(arr[i]);
    }
    else
    {
      minPQ.push(arr[i]);
    }
    if ((maxPQ.size() - minPQ.size()) > 1)
    {
      while (maxPQ.size() > minPQ.size())
      {
        minPQ.push(maxPQ.top());
        maxPQ.pop();
      }
      while (maxPQ.size() < minPQ.size())
      {
        maxPQ.push(minPQ.top());
        minPQ.pop();
      }
    }
    if (j % 2 == 0)
    {
      cout << (maxPQ.top() + minPQ.top()) / 2 << " ";
    }
    else
    {
      cout << maxPQ.top() << " ";
    }
  }
}

int main()
{
  int n;
  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  findMedian(arr, n);

  delete[] arr;
}
