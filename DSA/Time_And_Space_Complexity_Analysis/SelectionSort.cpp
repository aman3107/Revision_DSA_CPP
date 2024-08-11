#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
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
    arr[i] = minValue;
    arr[minIndex] = temp;
  }
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

  selectionSort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  delete[] arr;
}