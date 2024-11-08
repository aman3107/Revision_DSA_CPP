#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findPeakElement2(vector<int> &arr)
{

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

int findPeakElement(vector<int> &arr)
{
  int ans = 0;
  int n = arr.size();
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      if (INT_MIN < arr[i] && arr[i + 1] < arr[i])
      {
        ans = i;
      }
      else
      {
        continue;
      }
    }
    else if (i == n - 1)
    {
      if (arr[i - 1] < arr[i] && INT_MIN < arr[i])
      {
        ans = i;
      }
      else
      {
        continue;
      }
    }
    else
    {
      if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
      {
        ans = i;
      }
    }
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int ans = findPeakElement(v);
  if (ans > 0)
  {
    cout << "True" << endl;
  }
  else
  {
    cout << "False" << endl;
  }
}