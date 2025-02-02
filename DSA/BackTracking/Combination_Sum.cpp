#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combSumHelper(vector<int> &arr, vector<vector<int>> &ans, vector<int> &current, int target, int ind)
{
  if (target == 0)
  {
    ans.push_back(current);
    return;
  }

  for (int i = ind; i < arr.size(); i++)
  {
    if (arr[i] > target)
    {
      break;
    }
    current.push_back(arr[i]);
    combSumHelper(arr, ans, current, target - arr[i], i);
    cout << target << endl;
    current.pop_back();
  }
}
vector<vector<int>> combSum(vector<int> &ARR, int B)
{
  // Write your code here.
  sort(ARR.begin(), ARR.end());
  vector<vector<int>> ans;
  vector<int> current;
  combSumHelper(ARR, ans, current, B, 0);
  return ans;
}

int main()
{
  int n, t;
  cin >> n >> t;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    int data;
    cin >> data;
    arr.push_back(data);
  }

  vector<vector<int>> ans = combSum(arr, t);
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}