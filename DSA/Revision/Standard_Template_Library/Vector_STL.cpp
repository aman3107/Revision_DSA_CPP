#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> v(5, 2);
  print(v);
  for (int i = 0; i < v.size(); i++)
  {
    cin >> v[i];
  }
  cout << v.size() << " capacity : " << v.capacity() << endl;
  v.push_back(6);
  print(v);
  v.pop_back();
  print(v);
  cout << v.size() << " capacity : " << v.capacity() << endl;
  v.push_back(10);
  cout << v.size() << "capacity : " << v.capacity() << endl;
}