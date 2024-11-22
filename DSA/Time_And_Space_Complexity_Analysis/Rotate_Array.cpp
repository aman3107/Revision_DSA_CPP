#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
  // Write your code here
  int arr[d];
  for (int i = 0; i < d; i++)
  {
    arr[i] = input[i];
  }
  for (int i = d; i < n; i++)
  {
    input[i - d] = input[i];
  }
  for (int i = 0; i < d; i++)
  {
    input[n - d + i] = arr[i];
  }
}

int main()
{
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int d;
  cin >> d;
  rotate(arr, d, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  delete[] arr;
}