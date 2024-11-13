#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2)
{
  int len = n1 + n2;
  int arr3[len];
  int i = 0;
  int j = 0;
  int c = 0;
  while (i < n1 && j < n2)
  {
    if (arr1[i] < arr2[j])
    {
      arr3[c] = arr1[i];
      i++;
    }
    else if (arr1[i] > arr2[j])
    {
      arr3[c] = arr2[j];
      j++;
    }
    c++;
  }
  while (i < n1)
  {
    arr3[c] = arr1[i];
    i++;
    c++;
  }

  while (j < n2)
  {
    arr3[c] = arr2[j];
    j++;
    c++;
  }

  printArray(arr3, len);
}

int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  int arr1[n1];
  int arr2[n2];
  for (int i = 0; i < n1; i++)
  {
    cin >> arr1[i];
  }
  for (int i = 0; i < n2; i++)
  {
    cin >> arr2[i];
  }

  mergeArrays(arr1, n1, arr2, n2);
}