#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
  vector<int> ans;
  sort(arr.begin(), arr.end());
  ans.push_back(arr[k - 1]);
  ans.push_back(arr[n - k]);
  return ans;
}

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  vector<int> ans = kthSmallLarge(v, n, k);
  cout << ans.at(0) << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}