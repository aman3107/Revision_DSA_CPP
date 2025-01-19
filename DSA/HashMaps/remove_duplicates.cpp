#include <iostream>
#include <unordered_map>
#include <vector>
#include <math.h>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m)
{
  // Write your code here
  unordered_map<int, int> ump1;
  unordered_map<int, int> ump2;

  for (int i = 0; i < n; i++)
  {
    ump1[arr1[i]]++;
  }
  for (int i = 0; i < m; i++)
  {
    ump2[arr2[i]]++;
  }
  for (int i = 0; i < m; i++)
  {
    if (ump1[arr2[i]] != 0 && ump2[arr2[i]] != 0)
    {
      cout << arr2[i] << endl;
      ump1[arr2[i]]--;
      ump2[arr2[i]]--;
    }
  }
}

int highestFrequency(int arr[], int n)
{
  // Write your code here
  unordered_map<int, int> ump;
  int maxfreq = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    ump[arr[i]] = ump[arr[i]] + 1;
    maxfreq = max(maxfreq, ump[arr[i]]);
  }
  int index;
  for (int i = 0; i < n; i++)
  {
    if (maxfreq == ump[arr[i]])
    {
      index = arr[i];
    }
  }
  return index;
}

vector<int> removeDuplicates(int *arr, int n)
{
  vector<int> ans;
  unordered_map<int, bool> ump;
  for (int i = 0; i < n; i++)
  {
    int val = arr[i];
    if (ump.count(val) > 0)
    {
      continue;
    }
    ans.push_back(val);
    ump[val] = true;
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;

  int *arr1 = new int[n];

  for (int i = 0; i < n; ++i)
  {
    cin >> arr1[i];
  }

  int m;
  cin >> m;

  int *arr2 = new int[m];

  for (int i = 0; i < m; ++i)
  {
    cin >> arr2[i];
  }

  printIntersection(arr1, arr2, n, m);

  delete[] arr1;
  delete[] arr2;

  // int size;
  // cin >> size;
  // int *arr = new int[size];
  // for (int i = 0; i < size; i++)
  // {
  //   cin >> arr[i];
  // }
  // cout << highestFrequency(arr, size) << endl;
  // vector<int> ans = removeDuplicates(arr, size);
  // for (int i = 0; i < ans.size(); i++)
  // {
  //   cout << ans[i] << " ";
  // }

  // delete[] arr;
}