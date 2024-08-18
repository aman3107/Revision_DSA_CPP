#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter value of n " << endl;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int array_sum = 0;
  for (int i = 0; i < n; i++)
  {
    array_sum += arr[i];
  }

  cout << array_sum << endl;
}