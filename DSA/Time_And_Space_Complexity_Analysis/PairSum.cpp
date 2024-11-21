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

void merge(int arr[], int si, int mid, int ei)
{
  int n1 = mid - si + 1;
  int n2 = ei - mid;
  int arr1[n1];
  int arr2[n2];
  for (int i = 0; i < n1; i++)
  {
    arr1[i] = arr[si + i];
  }
  for (int i = 0; i < n2; i++)
  {
    arr2[i] = arr[mid + i + 1];
  }

  int i = 0;
  int j = 0;
  int k = si;
  while (i < n1 && j < n2)
  {
    if (arr1[i] < arr2[j])
    {
      arr[k] = arr1[i];
      i++;
    }
    else if (arr1[i] >= arr2[j])
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
  while (j < n2)
  {
    arr[k] = arr2[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int si, int ei)
{
  if (si >= ei)
  {
    return;
  }
  int mid = (si + ei) / 2;
  mergeSort(arr, si, mid);
  mergeSort(arr, mid + 1, ei);
  merge(arr, si, mid, ei);
}

int PairSum(int arr[], int n, int k)
{
  int i = 0;
  int j = n - 1;
  int pair_sum = 0;
  while (i < j)
  {
    if (arr[i] + arr[j] == k)
    {
      i++;
      j--;
      pair_sum++;
    }
    else if (arr[i] + arr[j] < k)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
  return pair_sum;
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
  mergeSort(arr, 0, n - 1);
  print(arr, n);
  int k;
  cin >> k;
  cout << PairSum(arr, n, k);
  delete[] arr;
}