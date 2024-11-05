#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter num of elements" << endl;
  cin >> n;
  // int *p = new int;
  // *p = 20;
  // cout << *p << endl;
  int *parr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> parr[i];
  }

  int max_value = -1;
  for (int i = 0; i < n; i++)
  {
    if (parr[i] > max_value)
    {
      max_value = parr[i];
    }
  }
  cout << max_value << endl;
  delete[] parr;
}