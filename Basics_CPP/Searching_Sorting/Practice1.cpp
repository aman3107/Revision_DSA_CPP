#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int binarySearch(int arr[], int n, int searchEle)
{
  int start = 0;
  int end = n - 1;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] == searchEle)
    {
      return mid;
    }
    else if (arr[mid] > searchEle)
    {
      end = mid - 1;
    }
    else if (arr[mid] < searchEle)
    {
      start = mid + 1;
    }
  }
  return -1;
}

int findClosestIndex(int arr[], int n, int target)
{
  int start = 0;
  int end = n - 1;
  int closest = 0;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] > target)
    {
      end = mid - 1;
    }
    else if (arr[mid] < target)
    {
      start = mid + 1;
    }
    if (arr[mid] - 1 == target || arr[mid] + 1 == target)
    {
      closest = mid;
    }
  }
  return closest;
}

int getInversions(int arr[], int n)
{
  int swapPairsValue = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int minValue = arr[i];
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < minValue)
      {
        minValue = arr[j];
        minIndex = j;
      }
    }
    int temp = arr[i];
    swapPairsValue += abs(minIndex - i);
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }
  return swapPairsValue;
}
void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = arr[i];
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      // find min value and index
      if (arr[j] < min)
      {
        min = arr[j];
        minIndex = j;
      }
      else
      {
        continue;
      }
    }
    // Swap
    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }
}

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 1; j < n - i; j++)
    {
      if (arr[j] < arr[j - 1])
      {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
    }
  }
}

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  bubbleSort(arr, n);
  printArray(arr, n);
  // int searchEle;
  // cout << "Enter search element :" << endl;
  // cin >> searchEle;
  // selectionSort(arr, n);
  // cout << getInversions(arr, n);
  // printArray(arr, n);
  // cout << binarySearch(arr, n, searchEle);
  // cout << findClosestIndex(arr, n, searchEle);
}