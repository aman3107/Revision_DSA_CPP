#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> sqsorted(vector<int> &arr)
{
  // Write your code here.
  int n = arr.size();
  vector<int> ans(n);
  int pos = n - 1;
  int i = 0;
  int j = n - 1;
  while (pos >= 0)
  {
    if (abs(arr[i]) > abs(arr[j]))
    {
      ans[pos] = abs(arr[i] * arr[i]);
      i++;
    }
    else
    {
      ans[pos] = abs(arr[j] * arr[j]);
      j--;
    }
    pos--;
  }
  return ans;
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   ans.push_back(abs(arr[i] * arr[i]));
  // }
  // sort(arr.begin(),arr.end());
}

int findPeakElement(vector<int> &arr)
{
  // Write your code here
  int peakIndex = 0;
  if (arr.size() == 1)
  {
    return peakIndex;
  }
  else
  {
    for (int i = 1; i < arr.size() - 1; i++)
    {
      if (arr[i - 1] < arr[i] and arr[i] > arr[i + 1])
      {
        peakIndex = i;
      }
    }
  }
  if (peakIndex > 0)
  {
    return peakIndex;
  }
  else
  {
    if (arr[0] > arr[1])
    {
      return 0;
    }
    else
    {
      return arr.size() - 1;
    }
  }
}

int sumOfMaxMin(vector<int> arr, int n)
{
  int minNum = INT_MAX;
  int maxNum = INT_MIN;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > maxNum)
    {
      maxNum = arr[i];
    }
    if (arr[i] < minNum)
    {
      minNum = arr[i];
    }
  }
  return maxNum + minNum;
}

void reverseArray(vector<int> &arr, int m)
{
  // Write your code here
  // reverse(arr.begin() + m + 1, arr.end());
  int i = m + 1;
  int j = arr.size() - 1;
  while (i < j)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int> ans = sqsorted(arr);
  for (auto ele : ans)
  {
    cout << ele << " ";
  }
  cout << endl;
  // int k;
  // cin >> k;
  // cout << findPeakElement(arr) << endl;
  // cout << sumOfMaxMin(arr, n) << endl;
  // reverseArray(arr, k);
  // for (auto ele : arr)
  // {
  //   cout << ele << " ";
  // }
}