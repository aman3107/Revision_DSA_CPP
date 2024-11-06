#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  vector<int>::iterator i = v.begin();
  reverse(v.begin(), v.end());
  for (; i != v.end(); i++)
  {
    cout << *i << " ";
  }
  cout << endl;
  cout << v.at(3) << endl;
  cout << v.front() << " " << v.back() << endl;
  // v.erase(v.begin());
  // v.erase(v.begin() + 1, v.begin() + 4);
  sort(v.begin(), v.end());                 // Ascending Order
  sort(v.begin(), v.end(), greater<int>()); // Decending Order
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  v.clear();
  cout << v.size() << " " << v.empty() << endl;
}