#include <iostream>
#include <climits>
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

  int smallest = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }
  cout << smallest << endl;
}