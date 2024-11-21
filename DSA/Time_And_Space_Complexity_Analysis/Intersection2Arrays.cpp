#include <iostream>
using namespace std;

void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int partition(int arr[], int si, int ei)
{
  int pv = arr[si];
  int count = 0;
  for (int i = si + 1; i <= ei; i++)
  {
    if (arr[i] <= pv)
    {
      count++;
    }
  }
  int pv_Index = si + count;
  arr[si] = arr[pv_Index];
  arr[pv_Index] = pv;
  int i = si;
  int j = ei;
  while (i < j)
  {
    if (arr[i] <= pv)
    {
      i++;
    }
    else if (arr[j] > pv)
    {
      j--;
    }
    else
    {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }
  }
  return pv_Index;
}

void quickSort(int arr[], int si, int ei)
{
  if (si >= ei)
  {
    return;
  }
  int c = partition(arr, si, ei);
  quickSort(arr, si, c - 1);
  quickSort(arr, c + 1, ei);
}

void intersection(int *arr1, int *arr2, int n, int m)
{
  quickSort(arr1, 0, n - 1);
  quickSort(arr2, 0, m - 1);
  int i = 0;
  int j = 0;
  while (i < n && j < m)
  {
    if (arr1[i] == arr2[j])
    {
      cout << arr1[i] << " ";
      i++;
      j++;
    }
    else if (arr1[i] < arr2[j])
    {
      i++;
    }
    else
    {
      j++;
    }
  }
}

int main()
{
  int n;
  cin >> n;
  int *arr1 = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }
  int m;
  cin >> m;
  int *arr2 = new int[m];
  for (int i = 0; i < m; i++)
  {
    cin >> arr2[i];
  }
  quickSort(arr1, 0, n - 1);
  print(arr1, n);
  intersection(arr1, arr2, n, m);
  delete[] arr1;
  delete[] arr2;
}