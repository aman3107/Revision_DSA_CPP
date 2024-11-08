#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
  int n;
  int a, b;
  cin >> n;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b;
    v.push_back({a, b});
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (v[i].first > v[i].second)
    {
      count++;
    }
  }
  cout << count << endl;
}