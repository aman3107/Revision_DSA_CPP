#include <iostream>
#include <unordered_map>
using namespace std;

int pairSum(int *arr, int n)
{
  // Write your code here
  unordered_map<int, int> ump;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    int val = arr[i];
    if (ump.count(-val) > 0)
    {
      count = count + ump[-val];
      ump[val]++;
    }
    else
    {
      ump[val]++;
    }
  }
  return count;
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

  cout << pairSum(arr, n);

  delete[] arr;
}