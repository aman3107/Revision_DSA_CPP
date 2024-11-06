#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

void Klargest(int arr[], int output[], int n, int k)
{
  sort(arr, arr + n);
  for (int i = n - k, j = 0; i < n; i++, j++)
  {
    output[j] = arr[i];
  }
}

int main()
{
  int n, k;
  cin >> n >> k;
  int *arr = new int[n];
  int *out = new int[k];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Klargest(arr, out, n, k);
  for (int i = 0; i < k; i++)
  {
    cout << out[i] << " ";
  }
  cout << endl;

  delete[] arr;
  delete[] out;
}