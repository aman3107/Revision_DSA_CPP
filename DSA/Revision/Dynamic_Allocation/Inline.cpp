#include <iostream>
using namespace std;

int sum(int arr[], int size, int si = 0)
{
  int ans = 0;
  for (int i = si; i < size; i++)
  {
    ans += arr[i];
  }
  return ans;
}

inline int ma(int a, int b)
{
  return a > b ? a : b;
}

int main()
{
  int a, b;
  cin >> a >> b;

  int c = max(a, b);
  cout << c << endl;
}