#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> arr(5);
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }
  // sort(arr.begin(), arr.end());
  sort(arr.begin(), arr.end(), greater<int>());
  vector<int>::iterator i = arr.begin();
  for (; i != arr.end(); i++)
  {
    cout << *i << " ";
  }
  cout << endl;
  // arr.erase(arr.begin() + 1, arr.begin() + 3 + 1);
  // reverse(arr.begin(), arr.end());

  // cout << arr.at(4) << endl;
  // arr.clear();
  // cout << arr.empty() << endl;
  // vector<int> arr(5, -1);
  // vector<int> arr(5);
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cin >> arr[i];
  // }
  // cout << "before push_back capacity : " << arr.capacity() << endl;
  // arr.push_back(6);
  // cout << "after push_back capacity : " << arr.capacity() << endl;
  // arr.pop_back();
  // arr.pop_back();
  // cout << "after pop_back capacity : " << arr.capacity() << endl;
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cout << arr[i] << " ";
  // }
  cout
      << endl;
}