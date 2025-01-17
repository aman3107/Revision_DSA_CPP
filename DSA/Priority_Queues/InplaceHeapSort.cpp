#include <iostream>
using namespace std;

void insert(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int childIndex = i;
    while (childIndex > 0)
    {
      int parentIndex = (childIndex - 1) / 2;
      if (arr[childIndex] < arr[parentIndex])
      {
        int temp = arr[childIndex];
        arr[childIndex] = arr[parentIndex];
        arr[parentIndex] = temp;
      }
      else
      {
        break;
      }
      childIndex = parentIndex;
    }
  }
}

void remove(int arr[], int n)
{

  int size = n;
  int temp = arr[0];
  arr[0] = arr[size - 1];
  arr[size - 1] = temp;
  size--;
  int parentIndex = 0;
  while (parentIndex < size - 1)
  {
    int leftChildIndex = (2 * parentIndex) + 1;
    int rightChildIndex = (2 * parentIndex) + 2;
    if ((leftChildIndex < size) && (arr[leftChildIndex] < arr[rightChildIndex]) && (arr[leftChildIndex] < arr[parentIndex]))
    {
      int temp = arr[parentIndex];
      arr[parentIndex] = arr[leftChildIndex];
      arr[leftChildIndex] = temp;
      parentIndex = leftChildIndex;
    }
    else if ((rightChildIndex < size) && (arr[leftChildIndex] > arr[rightChildIndex]) && (arr[rightChildIndex] < arr[parentIndex]))
    {
      int temp = arr[parentIndex];
      arr[parentIndex] = arr[rightChildIndex];
      arr[rightChildIndex] = temp;
      parentIndex = rightChildIndex;
    }
    else
    {
      break;
    }
  }
}

void heapSort(int arr[], int n)
{
  // Write your code
  for (int i = 1; i < n; i++)
  {
    int childIndex = i;
    while (childIndex > 0)
    {
      int parentIndex = (childIndex - 1) / 2;
      if (arr[childIndex] < arr[parentIndex])
      {
        int temp = arr[childIndex];
        arr[childIndex] = arr[parentIndex];
        arr[parentIndex] = temp;
      }
      else
      {
        break;
      }
      childIndex = parentIndex;
    }
  }

  int size = n;
  while (size > 1)
  {
    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
    size--;
    int parentIndex = 0;
    int leftChildIndex = (2 * parentIndex) + 1;
    int rightChildIndex = (2 * parentIndex) + 2;
    while (leftChildIndex < size)
    {
      int minIndex = parentIndex;
      if ((arr[leftChildIndex] < arr[minIndex]))
      {
        minIndex = leftChildIndex;
      }
      if ((rightChildIndex < size) && (arr[rightChildIndex] < arr[minIndex]))
      {
        minIndex = rightChildIndex;
      }
      if (minIndex == parentIndex)
      {
        break;
      }
      int temp = arr[minIndex];
      arr[minIndex] = arr[parentIndex];
      arr[parentIndex] = temp;
      parentIndex = minIndex;
      leftChildIndex = (2 * parentIndex) + 1;
      rightChildIndex = (2 * parentIndex) + 2;
    }
  }
}

int main()
{
  int size;
  cin >> size;

  int *input = new int[size];

  for (int i = 0; i < size; i++)
  {
    cin >> input[i];
  }

  heapSort(input, size);

  for (int i = 0; i < size; i++)
  {
    cout << input[i] << " ";
  }

  delete[] input;
}