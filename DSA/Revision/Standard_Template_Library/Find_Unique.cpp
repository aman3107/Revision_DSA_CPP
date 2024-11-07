#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findUnique1(vector<int> v, int n)
{
  sort(v.begin(), v.end());
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    int first_Index = 2 * i;
    int second_Index = 2 * i + 1;
    if (v[first_Index] != v[second_Index])
    {
      return v[first_Index];
    }
  }
  return v[2 * n];
}

int main()
{
  int n;
  cin >> n;
  int size = 2 * n + 1;
  vector<int> v(size);
  for (int i = 0; i < size; i++)
  {
    cin >> v[i];
  }

  int ans1 = findUnique1(v, n);
  cout << ans1 << endl;
}
