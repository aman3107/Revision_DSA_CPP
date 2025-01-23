#include <iostream>
#include <string>
using namespace std;

int returnPermutations2(string input, string output[])
{
  if (input.size() == 0)
  {
    output[0] = "";
    return 1;
  }
  int k = 0;
  for (int i = 0; i < input.length(); i++)
  {
    char firstChar = input[i];
    string temp[1000];
    string remainingString = input.substr(0, i) + input.substr(i + 1);
    int smallOutput = returnPermutations2(remainingString, temp);
    for (int j = 0; j < smallOutput; j++)
    {
      output[k] = firstChar + temp[j];
      k++;
    }
  }
  return k;
}

int returnPermutations(string input, string output[])
{
  if (input.size() == 0)
  {
    output[0] = "";
    return 1;
  }
  int smallOutput = returnPermutations(input.substr(1), output);
  string temp[smallOutput];
  for (int i = 0; i < smallOutput; i++)
  {
    temp[i] = output[i];
  }

  int count = 0;
  int size = input.size();
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < smallOutput; j++)
    {
      output[count] = temp[j].substr(0, i) + input[0] + temp[j].substr(i);
      count++;
    }
  }
  return count;
}

int main()
{
  string input;
  cin >> input;
  string output[10000];
  int count = returnPermutations2(input, output);
  for (int i = 0; i < count && i < 10000; i++)
  {
    cout << output[i] << endl;
  }
  return 0;
}
