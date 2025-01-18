#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int buyTicket(int *arr, int n, int k)
{
  // Write your code here
}

int kthLargest(vector<int> &arr, int k)
{
  // Write your code here
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < k; i++)
  {
    pq.push(arr[i]);
  }
  for (int i = k; i < arr.size(); i++)
  {
    if (arr[i] > pq.top())
    {
      pq.pop();
      pq.push(arr[i]);
    }
    else
    {
      continue;
    }
  }
  return pq.top();
}

bool isMaxHeap(int arr[], int n)
{
  // Write your code here
  int i = 0;
  int parentIndex = i;
  int LCI = (2 * parentIndex) + 1;
  while (LCI < n)
  {
    if (arr[parentIndex] < arr[LCI])
    {
      return false;
    }
    i++;
    parentIndex = i;
    LCI = (2 * parentIndex) + 1;
  }
  return true;
}

vector<int> kLargest(int arr[], int n, int k)
{
  vector<int> ans;
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < k; i++)
  {
    pq.push(arr[i]);
  }
  for (int i = k; i < n; i++)
  {
    if (arr[i] > pq.top())
    {
      pq.pop();
      pq.push(arr[i]);
    }
    else
    {
      continue;
    }
  }
  while (!pq.empty())
  {
    ans.push_back(pq.top());
    pq.pop();
  }
  return ans;
}

vector<int> kSmallest(int arr[], int n, int k)
{
  // Write your code here
  priority_queue<int> pq;
  vector<int> ans;
  for (int i = 0; i < k; i++)
  {
    pq.push(arr[i]);
  }
  for (int i = k; i < n; i++)
  {
    if (arr[i] < pq.top())
    {
      pq.pop();
      pq.push(arr[i]);
    }
    else
    {
      continue;
    }
  }
  while (!pq.empty())
  {
    ans.push_back(pq.top());
    pq.pop();
  }
  return ans;
}

void kSortedArrays(int arr[], int n, int k)
{
  priority_queue<int> pq;
  for (int i = 0; i < k; i++)
  {
    pq.push(arr[i]);
  }
  int j = 0;
  for (int i = k; i < n; i++)
  {
    // cout << pq.top() << endl;
    arr[j] = pq.top();
    pq.pop();
    pq.push(arr[i]);
    j++;
  }
  while (!pq.empty())
  {
    // cout << pq.top() << endl;
    arr[j] = pq.top();
    pq.pop();
    j++;
  }
}

int main()
{
  int n;
  cin >> n;
  // int *arr = new int[n];
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    int data;
    cin >> data;
    arr.push_back(data);
  }
  int k;
  cin >> k;
  cout << kthLargest(arr, k) << endl;
  // cout << isMaxHeap(arr, n) << endl;
  // int k;
  // cin >> k;
  // vector<int> ans = kSmallest(arr, n, k);
  // vector<int> ans = kLargest(arr, n, k);
  // sort(ans.begin(), ans.end());
  // for (int i = 0; i < ans.size(); i++)
  // {
  //   cout << ans[i] << " ";
  // }
  // delete[] arr;
  /*
  priority_queue<int> pq;
  cout << pq.empty() << endl;
  pq.push(10);
  pq.push(20);
  pq.push(30);
  pq.push(40);
  pq.push(50);
  cout << pq.size() << endl;
  while (!pq.empty())
  {
    cout << pq.top() << endl;
    pq.pop();
  }
  */
}