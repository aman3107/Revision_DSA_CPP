#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr(5);
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }
  vector<int>::iterator i = arr.begin();
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