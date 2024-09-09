#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
  for (int i = 0, j = 1; j < n; i = i + 2, j = j + 2)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
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

  swapAlternate(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}