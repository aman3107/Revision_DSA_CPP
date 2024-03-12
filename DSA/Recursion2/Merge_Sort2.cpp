#include <iostream>
using namespace std;

void merge(int arr[], int size, int arr1[], int n1, int arr2[], int n2)
{
  int i = 0;
  int j = 0;
  int k = 0;
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

  while (j < n2)
  {
    arr[k] = arr2[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int size)
{
  if (size == 1)
  {
    return;
  }

  int n1 = size / 2;
  int n2 = size - n1;
  int arr1[n1];
  int arr2[n2];

  for (int i = 0; i < n1; i++)
  {
    arr1[i] = arr[i];
  }
  for (int i = 0; i < n2; i++)
  {
    arr2[i] = arr[+i];
  }

  mergeSort(arr, n1);
  mergeSort(arr, n2);
  merge(arr, size, arr1, n1, arr2, n2);
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

  mergeSort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  delete[] arr;
}