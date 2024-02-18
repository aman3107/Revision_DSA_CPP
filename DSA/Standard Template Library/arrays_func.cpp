#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
  int arr[5] = {3, 2, 5, 4, 1};

  /* Works only for 0 and -1 */
  // memset(arr, -1, sizeof(arr));

  /* Works for any value */
  // fill(arr, arr + 5, 10);

  /* Sort Function */
  // sort(arr, arr + 5);
  sort(arr + 1, arr + 4);

  /* Reverse Function */
  // reverse(arr, arr + 5);

  /* Swap Function */
  // swap(arr[0], arr[2]);

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}