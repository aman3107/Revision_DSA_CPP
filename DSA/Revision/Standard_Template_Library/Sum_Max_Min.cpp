#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int sumOfMaxMin(vector<int> v, int n)
{
  int max_value = INT_MIN;
  int min_value = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (v[i] > max_value)
    {
      max_value = v[i];
    }
    if (v[i] < min_value)
    {
      min_value = v[i];
    }
  }
  return max_value + min_value;
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
  int ans = sumOfMaxMin(v, n);
  cout << ans << endl;
}