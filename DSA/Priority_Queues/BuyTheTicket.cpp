#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int buyTicket(int *arr, int n, int k)
{
  // Write your code here
  priority_queue<int> maxPQ;
  queue<int> qi;
  int time = 0;
  for (int i = 0; i < n; i++)
  {
    qi.push(i);
    maxPQ.push(arr[i]);
  }
  while (arr[qi.front()] != maxPQ.top() || qi.front() != k)
  {
    if (arr[qi.front()] < maxPQ.top())
    {
      int temp = qi.front();
      qi.pop();
      qi.push(temp);
    }
    else if (arr[qi.front()] == maxPQ.top())
    {
      qi.pop();
      maxPQ.pop();
      time++;
    }
  }
  return time + 1;
}

int main()
{
  int n;
  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int k;
  cin >> k;

  cout << buyTicket(arr, n, k);

  delete[] arr;
}