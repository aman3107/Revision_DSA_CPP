#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n)
{
  // Your Code goes here
  unordered_map<int, bool> ump;
  for (int i = 0; i < n; i++)
  {
    ump[arr[i]] = true;
  }
  int maxLength = INT_MIN;
  int start = 0;
  int end = 0;
  for (int i = 0; i < n; i++)
  {
    int val = arr[i];
    int a = val;
    int b = val;
    int k = 1;
    int len = 1;
    ump[val] = false;
    while (ump[val + k])
    {
      // ump[val + k] = false;
      k++;
      len++;
    }
    b = val + (k - 1);
    k = 1;
    while (ump[val - k])
    {
      k++;
      len++;
    }
    a = val - (k - 1);
    if (maxLength < len)
    {
      start = a;
      end = b;
      maxLength = len;
    }
    else if (maxLength == len && ump[start])
    {
      start = a;
      end = b;
      maxLength = len;
    }
  }
  vector<int> v;
  if (start == end)
  {
    v.push_back(start);
  }
  else
  {
    v.push_back(start);
    v.push_back(end);
  }
  return v;
}

int main()
{
  int size;
  cin >> size;

  int *arr = new int[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

  for (auto i = ans.begin(); i != ans.end(); ++i)
    cout << *i << " ";

  delete[] arr;
}
