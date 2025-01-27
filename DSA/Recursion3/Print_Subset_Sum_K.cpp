#include <iostream>
using namespace std;

void printSubsetSumToKHelper(int input[], int size, int k, int output[], int osize, int si)
{
  // Write your code here
  if (si == size)
  {
    if (k == 0)
    {
      for (int i = 0; i < osize; i++)
      {
        cout << output[i] << " ";
      }
      cout << endl;
    }

    return;
  }

  int newOutput[osize + 1];
  int i;
  for (i = 0; i < osize; i++)
  {
    newOutput[i] = output[i];
  }
  newOutput[i] = input[si];
  printSubsetSumToKHelper(input, size, k - input[si], newOutput, osize + 1, si + 1);
  printSubsetSumToKHelper(input, size, k, output, osize, si + 1);
}

void printSubsetSumToK(int input[], int size, int k)
{
  // Write your code here
  int output[100];
  printSubsetSumToKHelper(input, size, k, output, 0, 0);
}

int main()
{
  int input[1000], length, k;
  cin >> length;
  for (int i = 0; i < length; i++)
    cin >> input[i];
  cin >> k;
  printSubsetSumToK(input, length, k);
}
