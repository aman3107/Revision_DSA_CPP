#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == m)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;

  int arr[n];
  cout << "Enter elements in the array :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int m;
  cout << "Enter search element :" << endl;
  cin >> m;

  cout << linearSearch(arr, n, m) << endl;
}