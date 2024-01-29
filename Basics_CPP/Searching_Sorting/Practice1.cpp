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

void bubbleSort1(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int getkthSmallest(int arr[], int n, int k)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return arr[k - 1];
}

void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int pickUpCard = arr[i];
    int j = i - 1;
    while (j >= 0)
    {
      if (arr[j] > pickUpCard)
      {
        arr[j + 1] = arr[j];
        j--;
      }
      else if (pickUpCard > arr[j])
      {
        break;
      }
      arr[j + 1] = pickUpCard;
    }
  }
}

void merge2SortedArrays(int arr1[], int n, int arr2[], int m, int arr3[])
{
  int i = 0;
  int j = 0;
  int c = 0;
  while (i < n && j < m)
  {
    if (arr1[i] <= arr2[j])
    {
      arr3[c] = arr1[i];
      i++;
      c++;
    }
    else if (arr2[j] <= arr1[i])
    {
      arr3[c] = arr2[j];
      j++;
      c++;
    }
  }
  while (i < n)
  {
    arr3[c] = arr1[i];
    i++;
    c++;
  }
  while (j < m)
  {
    arr3[c] = arr2[j];
    j++;
    c++;
  }
}

int main()
{
  int n, m;
  cout << "Enter value of n and m :" << endl;
  cin >> n >> m;
  int arr1[n];
  int arr2[m];
  cout << "Enter elements in 1st array :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }
  cout << "Enter elements in 2nd array : " << endl;
  for (int i = 0; i < m; i++)
  {
    cin >> arr2[i];
  }
  int arr3[n + m];
  // insertionSort(arr, n);
  merge2SortedArrays(arr1, n, arr2, m, arr3);
  printArray(arr3, n + m);
  // int k;
  // cout << "Enter kth smallest element index :" << endl;
  // cin >> k;
  // cout << getkthSmallest(arr, n, k) << endl;
  // bubbleSort(arr, n);
  // bubbleSort1(arr, n);
  // printArray(arr, n);
  // int searchEle;
  // cout << "Enter search element :" << endl;
  // cin >> searchEle;
  // selectionSort(arr, n);
  // cout << getInversions(arr, n);
  // printArray(arr, n);
  // cout << binarySearch(arr, n, searchEle);
  // cout << findClosestIndex(arr, n, searchEle);
}