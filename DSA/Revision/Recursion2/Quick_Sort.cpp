#include <iostream>
using namespace std;

int partition(int arr[], int si, int ei)
{
  int partition = arr[si];
  int count_smaller = 0;
  for (int i = si + 1; i <= ei; i++)
  {
    if (partition >= arr[i])
    {
      count_smaller++;
    }
  }
  int part_Index = si + count_smaller;
  arr[si] = arr[part_Index];
  arr[part_Index] = partition;
  int i = si;
  int j = ei;
  while (i < part_Index && j > part_Index)
  {
    if (arr[i] <= partition)
    {
      i++;
    }
    else if (arr[j] > partition)
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
  return part_Index;
}

void quick_Sort(int arr[], int si, int ei)
{
  if (si >= ei)
  {
    return;
  }
  int c = partition(arr, si, ei);
  quick_Sort(arr, si, c - 1);
  quick_Sort(arr, c + 1, ei);
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
  quick_Sort(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  delete[] arr;
}