#include <iostream>
#include <vector>
using namespace std;

void getUniqueSubsets(vector<int> &arr, int ind, vector<int> temp, vector<vector<int>> &ans)
{
  if (arr.size() == ind)
  {
    ans.push_back(temp);
    return;
  }
  temp.push_back(arr[ind]);
  getUniqueSubsets(arr, ind + 1, temp, ans);
  temp.pop_back();
  while (ind + 1 < arr.size() && arr[ind] == arr[ind + 1])
  {
    ind++;
  }
  getUniqueSubsets(arr, ind + 1, temp, ans);
}

vector<vector<int>> getUniqueSubsets(vector<int> &arr)
{
  vector<vector<int>> ans;
  vector<int> temp;
  getUniqueSubsets(arr, 0, temp, ans);
  return ans;
}

int main()
{
  vector<int> arr;
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    int ele;
    cin >> ele;
    arr.push_back(ele);
  }
  vector<vector<int>> ans = getUniqueSubsets(arr);
  for (auto val : ans)
  {
    for (auto vall : val)
    {
      cout << vall << " ";
    }
    cout << endl;
  }
}