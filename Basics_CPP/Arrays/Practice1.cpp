#include <iostream>
#include <climits>
#include <math.h>
#include <string.h>
#include <vector>

using namespace std;

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int linearSearch(int arr[], int n, int val)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == val)
    {
      return i;
    }
  }
  return -1;
}

void increment(int a, int arr[], int n)
{
  a++;
  arr[0]++;
}

void reverse(int arr[], int n)
{
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
}

void pairSum(int arr[], int n)
{
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    int sum = arr[i] + arr[j];
    cout << sum << " ";
    i++;
    j--;
  }
}

void swapAlternate(int arr[], int n)
{
  int i = 0;
  int j = 1;
  while (j < n)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i += 2;
    j = i + 1;
  }
}

void arrangeNumbers(int arr[], int n)
{
  int i = 0;
  int j = n - 1;
  int num = 0;
  while (i < j)
  {
    num++;
    arr[i] = num;
    num++;
    arr[j] = num;
    i++;
    j--;
  }
  if (n % 2 != 0)
  {
    arr[n / 2] = n;
  }
}

void sumOf2Arrays(int arr1[], int arr2[], int arr3[], int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    arr3[i] = arr1[i] + arr2[i];
  }
}

void prefixSum(int arr[], int n, int output[])
{
  output[0] = arr[0];
  for (int i = 1; i < n; i++)
  {
    output[i] = output[i - 1] + arr[i];
  }
}

void maximumCandies(int arr[], int n, bool output[], int candies)
{
  int max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] + candies >= max)
    {
      output[i] = true;
    }
    else
    {
      output[i] = false;
    }
  }
}

int findUnique(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    bool unique = true;
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        continue;
      }
      else if (arr[i] == arr[j])
      {
        unique = false;
        break;
      }
    }
    if (unique)
    {
      return arr[i];
    }
  }
  return -1;
}

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;
  int arr[n];
  // bool output[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << findUnique(arr, n);
  // int candies;
  // cout << "Enter candies : " << endl;
  // cin >> candies;
  // maximumCandies(arr, n, output, candies);
  // for (int i = 0; i < n; i++)
  // {
  //   cout << output[i];
  // }
  // prefixSum(arr, n, output);
  // printArray(output, n);
  // int n, m;
  // cout << "Enter value of n and m :" << endl;
  // cin >> n >> m;
  // int arr1[n], arr2[m], arr3[n];
  // cout << "Enter values in 1st array :" << endl;
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr1[i];
  // }
  // cout << "Enter values in 2nd array " << endl;
  // for (int i = 0; i < m; i++)
  // {
  //   cin >> arr2[i];
  // }
  // sumOf2Arrays(arr1, arr2, arr3, n, m);
  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr3[i] << "  ";
  // }
  // int n;
  // cin >> n;
  // int arr[100];
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr[i];
  // }
  // arrangeNumbers(arr, n);
  // printArray(arr, n);
  // swapAlternate(arr, n);
  // printArray(arr, n);
  // pairSum(arr, n);
  // reverse(arr, n);
  // printArray(arr, n);
  // int a = 10;
  // int b[10] = {1, 2, 3};
  // increment(a, b, 10);
  // cout << "a : " << a << endl;
  // cout << "b[0] :" << b[0] << endl;
  // int input[] = {1, 2, 3};
  // int input1[3] = {1, 2, 3};
  // int input2[6] = {1, 2, 3};
  // int input3[10] = {0};
  // cout << input;
  // int n;
  // cin >> n;
  // int arr[100];
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr[i];
  // }
  // int val;
  // cout << "Enter number to search :" << endl;
  // cin >> val;
  // cout << linearSearch(arr, n, val) << endl;
  // printArray(arr, n);

  // int sum = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   sum += arr[i];
  // }
  // cout << sum;
  // int min = INT_MAX;
  // for (int i = 0; i < n; i++)
  // {
  //   if (arr[i] < min)
  //   {
  //     min = arr[i];
  //   }
  // }
  // cout << min << endl;
  // int max = arr[0];
  // for (int i = 1; i < n; i++)
  // {
  //   if (arr[i] > max)
  //   {
  //     max = arr[i];
  //   }
  // }
  // cout << max;
  // for (int i = 0; i < 100; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // vector<string> sarr = {"abcdefghijklmnopqrstuvwxyz"};
  // int maxL = INT_MIN;
  // int smaxL = INT_MIN;
  // for (int i = 0; i < sarr.size(); i++)
  // {
  //   int sizeSt = sarr[i].size();
  //   if (sizeSt > maxL)
  //   {
  //     smaxL = maxL;
  //     maxL = sizeSt;
  //   }
  //   else if (sizeSt > smaxL && smaxL <= maxL)
  //   {
  //     smaxL = sizeSt;
  //   }
  // }
  // cout << maxL << " " << smaxL;
}