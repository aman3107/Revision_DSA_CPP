#include <iostream>
#include <climits>
using namespace std;

void maximum_candy(int n, int arr[], int extraCandies, bool output[])
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
    if (arr[i] + extraCandies >= max)
    {
      output[i] = true;
    }
    else
    {
      output[i] = false;
    }
  }
}

int main()
{
  int n;
  cout << "Enter value of n";
  cin >> n;
  int childrens[n];
  cout << "Enter number of childrens" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> childrens[i];
  }
  int candies;
  cout << "Enter number of candies" << endl;
  cin >> candies;

  bool output[n];

  maximum_candy(n, childrens, candies, output);
  for (int i = 0; i < n; i++)
  {
    cout << output[i] << endl;
  }
}