#include <iostream>
using namespace std;

void sum2Arrays(int arr1[], int arr2[], int n, int arr3[])
{
  for (int i = 0; i < n; i++)
  {
    arr3[i] = arr1[i] + arr2[i];
  }
}

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;

  int arr[n];
  cout << "Enter elements in the array 1 :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int arr1[n];
  cout << "Enter elements in the array 2:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }

  int arr2[n];

  sum2Arrays(arr, arr1, n, arr2);

  for (int i = 0; i < n; i++)
  {
    cout << arr2[i] << " ";
  }
}