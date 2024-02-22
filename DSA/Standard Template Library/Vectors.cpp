#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
  // Write your code here.
  sort(arr.begin(), arr.end());
  vector<int> ans;
  ans.push_back(arr[k - 1]);
  ans.push_back(arr[n - k]);
  return ans;
}

int findUnique(vector<int> arr)
{
  int res = 0;
  for (int ele : arr)
  {
    res = res ^ ele;
    cout << res << " ";
  }
  return res;
}

int findDuplicate(vector<int> &arr, int n)
{
  // Write your code here.
  sort(arr.begin(), arr.end());
  for (int i = 0; i < arr.size() - 1; i++)
  {
    if (arr[i] == arr[i + 1])
    {
      return arr[i];
    }
  }
  return -1;
}

int main()
{
  // vector<vector<int>> arr(3, vector<int>(3));
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     cin >> arr[i][j];
  //   }
  // }

  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // int n, k;
  // cout << "Enter value of n and k : " << endl;
  // cin >> n >> k;
  // vector<int> arr(n);
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cin >> arr[i];
  // }
  // cout << findDuplicate(arr, n) << endl;
  // cout << findUnique(arr) << endl;
  // vector<int> output = kthSmallLarge(arr, n, k);
  // for (int i = 0; i < output.size(); i++)
  // {
  //   cout << output[i] << " ";
  // }
  // cout << endl;

  // vector<int> arr(5);
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cin >> arr[i];
  // }
  // // sort(arr.begin(), arr.end());
  // sort(arr.begin(), arr.end(), greater<int>());
  // vector<int>::iterator i = arr.begin();
  // for (; i != arr.end(); i++)
  // {
  //   cout << *i << " ";
  // }
  // cout << endl;
  // arr.erase(arr.begin() + 1, arr.begin() + 3 + 1);
  // reverse(arr.begin(), arr.end());

  // cout << arr.at(4) << endl;
  // arr.clear();
  // cout << arr.empty() << endl;
  // vector<int> arr(5, -1);
  // vector<int> arr(5);
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cin >> arr[i];
  // }
  // cout << "before push_back capacity : " << arr.capacity() << endl;
  // arr.push_back(6);
  // cout << "after push_back capacity : " << arr.capacity() << endl;
  // arr.pop_back();
  // arr.pop_back();
  // cout << "after pop_back capacity : " << arr.capacity() << endl;
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cout << arr[i] << " ";
  // }
  cout << endl;
}