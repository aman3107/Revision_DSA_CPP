#include <iostream>
using namespace std;

void moveZerosToEnd(int *arr, int n)
{
  int i = 0;
  int j = 1;
  while (j < n && i < n)
  {
    if (arr[i] != 0)
    {
      i++;
    }
    else if (arr[j] == 0 || j < i)
    {
      j++;
    }
    else
    {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j++;
    }
  }
}

int main()
{
  int n;
  cout << "Enter number of elements :";
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  moveZerosToEnd(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  delete[] arr;
}