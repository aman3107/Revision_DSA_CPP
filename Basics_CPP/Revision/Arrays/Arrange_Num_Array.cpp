#include <iostream>
using namespace std;

void arrangeNum(int arr[], int n)
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
    num++;
    arr[j] = num;
  }
}

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;

  int arr[n];

  arrangeNum(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}