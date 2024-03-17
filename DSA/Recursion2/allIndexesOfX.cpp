#include <iostream>
using namespace std;

int allIndexesHelper(int input[], int currIndex, int size, int x, int output[], int ans)
{
  if (currIndex == size)
  {
    return ans;
  }
  if (input[currIndex] == x)
  {
    output[ans] = currIndex;
    ans++;
    allIndexesHelper(input, currIndex + 1, size, x, output, ans);
  }
  else
  {
    allIndexesHelper(input, currIndex + 1, size, x, output, ans);
  }
}

int allIndexes(int input[], int size, int x, int output[])
{
  return allIndexesHelper(input, 0, size, x, output, 0);
  // if (size == 0)
  // {
  //   return 0;
  // }
  // int ans = allIndexes(input + 1, size - 1, x, output);
  // for (int i = 0; i < ans; i++)
  // {
  //   output[i] = output[i] + 1;
  // }
  // if (input[0] == x)
  // {
  //   for (int i = ans + 1; i > 0; i--)
  //   {
  //     output[i] = output[i - 1];
  //   }
  //   output[0] = 0;
  //   return ans + 1;
  // }
  // else
  // {
  //   return ans;
  // }
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
  int x;
  cin >> x;

  int *output = new int[n];
  int size = allIndexes(input, n, x, output);
  for (int i = 0; i < size; i++)
  {
    cout << output[i] << " ";
  }

  delete[] input;

  delete[] output;
}