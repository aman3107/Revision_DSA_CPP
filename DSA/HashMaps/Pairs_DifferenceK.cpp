#include <iostream>
#include <unordered_map>
using namespace std;

int getPairsWithDifferenceK(int *arr, int n, int k)
{
  // Write your code here
  unordered_map<int, int> ump;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    int val = arr[i];
    if (ump.count(val - k) > 0)
    {
      count = count + ump[val - k];
      ump[val]++;
    }
    else if (ump.count(val + k) > 0)
    {
      count = count + ump[val + k];
      ump[val]++;
    }
    else
    {
      ump[val]++;
    }
  }
  return count;
}

int main()
{
  int n;
  cin >> n;

  int *input = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> input[i];
  }

  int k;
  cin >> k;

  cout << getPairsWithDifferenceK(input, n, k);

  delete[] input;
}