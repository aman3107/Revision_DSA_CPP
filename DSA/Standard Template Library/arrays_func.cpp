#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
void Klargest(int arr[], int output[], int n, int k)
{
  sort(arr, arr + n);
  int c = 0;
  for (int i = n - k; i < n; i++)
  {
    output[c] = arr[i];
    c++;
  }
}

int main()
{
  int n, k;
  cout << "Enter value of n and k : " << endl;
  cin >> n >> k;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int *output = new int[k];
  Klargest(arr, output, n, k);
  for (int i = 0; i < k; i++)
  {
    cout << output[i] << " ";
  }
  delete[] arr;
  delete[] output;
  // int arr[5] = {3, 2, 5, 4, 1};

  /* Works only for 0 and -1 */
  // memset(arr, -1, sizeof(arr));

  /* Works for any value */
  // fill(arr, arr + 5, 10);

  /* Sort Function */
  // sort(arr, arr + 5);
  // sort(arr + 1, arr + 4);

  /* Reverse Function */
  // reverse(arr, arr + 5);

  /* Swap Function */
  // swap(arr[0], arr[2]);

  // for (int i = 0; i < 5; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;
}