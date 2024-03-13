#include <iostream>
using namespace std;

int partitionArray(int input[], int start, int end)
{
  int pv = input[start];
  int count = 0;
  for (int i = start + 1; i <= end; i++)
  {
    if (input[i] < pv)
    {
      count++;
    }
  }
  int index = start + count;
  input[start] = input[index];
  input[index] = pv;

  int i = start;
  int j = end;
  while (i < index && j > index)
  {
    if (input[i] < pv)
    {
      i++;
    }
    else if (input[j] >= pv)
    {
      j--;
    }
    else
    {
      int temp = input[i];
      input[i] = input[j];
      input[j] = temp;
      i++;
      j--;
    }
  }
  return index;
}

void quickSort(int input[], int start, int end)
{
  if (start >= end)
  {
    return;
  }
  int c = partitionArray(input, start, end);
  quickSort(input, start, c - 1);
  quickSort(input, c + 1, end);
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
  quickSort(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  delete[] arr;
}