#include <iostream>
using namespace std;

void prefixSum(int arr[], int n, int output[])
{
  int sum = arr[0];
  output[0] = arr[0];
  for (int i = 1; i < n; i++)
  {
    output[i] = sum + arr[i];
    sum = output[i];
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

  int output[n];

  prefixSum(arr, n, output);

  for (int i = 0; i < n; i++)
  {
    cout << output[i] << " ";
  }
}