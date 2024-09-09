#include <iostream>
using namespace std;

void corrspPairSum(int arr[], int n)
{
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    int sum = arr[i] + arr[j];
    arr[i] = sum;
    i++;
    j--;
  }
}

int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;

  int arr[n];
  cout << "Enter elements in the array :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  corrspPairSum(arr, n);

  for (int i = 0; i < n / 2; i++)
  {
    cout << arr[i] << " ";
  }
}