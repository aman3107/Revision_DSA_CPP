#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void sort012(int *arr, int n)
{
  int i = 0;
  int k = 0;
  int j = n - 1;
  while (i <= j)
  {
    if (arr[i] == 0)
    {
      swap(arr[i], arr[k]);
      i++;
      k++;
    }
    else if (arr[i] == 1)
    {
      i++;
    }
    else if (arr[i] == 2)
    {
      swap(arr[i], arr[j]);
      j--;
    }
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
  sort012(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  delete[] arr;
}