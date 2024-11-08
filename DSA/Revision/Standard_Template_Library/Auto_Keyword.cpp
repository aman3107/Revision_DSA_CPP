#include <iostream>
#include <vector>
using namespace std;

auto sum(int a, int b)
{
  return a + b;
}

int main()
{
  auto name = "Aman";
  // cout << name;

  vector<int> v(5, 1);
  // for (auto ele : v)
  // {
  //   cout << ele << " ";
  // }

  for (auto i = v.begin(); i != v.end(); i++)
  {
    cout << *i << " ";
  }

  cout << sum(1, 2) << endl;
}