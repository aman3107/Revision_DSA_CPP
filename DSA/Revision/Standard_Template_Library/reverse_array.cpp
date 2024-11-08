#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  reverse(v.begin() + m + 1, v.end());
  for (auto i = v.begin(); i != v.end(); i++)
  {
    cout << *i << " ";
  }
  cout << endl;
}