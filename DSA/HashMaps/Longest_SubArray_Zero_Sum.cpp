#include <iostream>
#include <unordered_map>
#include <limits.h>
using namespace std;

int lengthOfLongestSubsetWithZeroSum(int *arr, int n)
{
  // Write your code here
  unordered_map<int, int> sum;
  int maxLength = INT_MIN;
  int len = 0;
  int keySum = 0;
  for (int i = 0; i < n; i++)
  {
    keySum = keySum + arr[i];
    if (sum.count(keySum) > 0)
    {
      len = i - (sum[keySum]);
      if (maxLength < len)
      {
        maxLength = len;
      }
    }
    else if (keySum == 0)
    {
      len = i + 1;
      if (maxLength < len)
      {
        maxLength = len;
      }
    }
    else
    {
      sum[keySum] = i;
    }
  }
  return maxLength;
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

  cout << lengthOfLongestSubsetWithZeroSum(arr, size);

  delete[] arr;
}