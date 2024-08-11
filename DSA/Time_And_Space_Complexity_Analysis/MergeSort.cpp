#include <iostream>
#include <sys/time.h>
using namespace std;

long getTimeinMicroSeconds()
{
  struct timeval start;
  gettimeofday(&start, NULL);
  return start.tv_sec * 1000000 + start.tv_sec;
}

void merge(int arr[], int si, int mid, int ei)
{
  int n1 = mid - si + 1;
  int n2 = ei - mid;
  int *arr1 = new int[n1];
  int *arr2 = new int[n2];
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
  delete[] arr1;
  delete[] arr2;
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
int main()
{
  for (int n = 10; n <= 1000000; n *= 10)
  {
    int *arr = new int[n];
    long starttime, endtime;
    for (int i = 0; i < n; i++)
    {
      arr[i] = n - i;
    }
    starttime = getTimeinMicroSeconds();
    mergeSort(arr, 0, n);
    endtime = getTimeinMicroSeconds();
    cout << "Merge Sort n = " << n << " time = " << endtime << " " << starttime << endl;
    delete[] arr;
  }
}