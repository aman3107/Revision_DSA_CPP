#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
  int n1 = mid - low + 1;
  int n2 = high - mid;
  int arr1[n1];
  int arr2[n2];
  for (int i = 0; i < n1; i++)
  {
    arr1[i] = arr[low + i];
  }
  for (int i = 0; i < n2; i++)
  {
    arr2[i] = arr[mid + 1 + i];
  }
  int i = 0;
  int j = 0;
  int k = low;
  while (i < n1 && j < n2)
  {
    if (arr1[i] < arr2[j])
    {
      arr[k] = arr1[i];
      i++;
    }
    else
    {
      arr[k] = arr2[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    arr[k] = arr1[i];
    i++;
    k++;
  }

  while (j < n1)
  {
    arr[k] = arr2[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r)
{
  if (l >= r)
  {
    return;
  }
  int mid = (l + r) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);
  merge(arr, l, mid, r);
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  mergeSort(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}