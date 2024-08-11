#include <iostream>
#include <algorithm>
using namespace std;

int pairSum4(int arr[], int n, int x)
{
  sort(arr, arr + n);
  int count = 0;
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (arr[i] + arr[j] == x)
    {
      if (arr[i] == arr[j])
      {
        int countPairs = (j - i + 1);
        count += (countPairs * (countPairs - 1) / 2);
        return count;
      }
      else
      {
        int tempStartIndex = i + 1;
        int tempEndIndex = j - 1;
        while (tempStartIndex <= tempEndIndex && arr[tempStartIndex] == arr[i])
        {
          tempStartIndex += 1;
        }
        while (tempStartIndex <= tempEndIndex && arr[tempEndIndex] == arr[j])
        {
          tempEndIndex -= 1;
        }
        int totalStart = (tempStartIndex - i);
        int totalEnd = (j - tempEndIndex);
        count += (totalStart * totalEnd);
        i = tempStartIndex;
        j = tempEndIndex;
      }
    }
    else if (arr[i] + arr[j] < x)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
  return count;
}

int pairSum3(int *arr, int n, int x)
{
  // Write your code here
  sort(arr, arr + n);
  int count = 0;
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (arr[i] + arr[j] == x)
    {
      count++;
      int k = i + 1;
      while (k <= j - 1 && arr[i] == arr[k])
      {
        if (arr[i] + arr[k] == x)
        {
          count++;
          k++;
        }
        else
        {
          break;
        }
      }
      if (arr[i] == arr[i + 1])
      {
        i++;
      }
      else
      {
        i++;
        j--;
      }
    }
    else if (arr[i] + arr[j] < x)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
  return count;
}

int pairSum2(int arr[], int n, int x)
{
  sort(arr, arr + n);
  int count = 0;
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (arr[i] + arr[j] == x)
    {
      if (arr[i] == arr[j])
      {
        int countPairs = (j - i + 1);
        count += (countPairs * (countPairs - 1) / 2);
        return count;
      }
      else
      {
        count++;
        if (arr[i] == arr[i + 1])
        {
          i++;
        }
        else
        {
          i++;
          j--;
        }
      }
    }
    else if (arr[i] + arr[j] < x)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
  return count;
}

int pairSum(int arr[], int n, int x)
{
  sort(arr, arr + n);
  int count = 0;
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (arr[i] + arr[j] == x)
    {
      count++;
      i++;
      j--;
    }
    else if (arr[i] + arr[j] < x)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
  return count;
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
  int x;
  cin >> x;
  cout << pairSum4(arr, n, x) << endl;
  delete[] arr;
}