#include <iostream>
#include <string>
using namespace std;

int subSequence(string input, string output[])
{
  if (input.size() == 0)
  {
    output[0] = "";
    return 1;
  }
  string smallString = input.substr(1);
  int smallOutput = subSequence(smallString, output);
  for (int i = 0; i < smallOutput; i++)
  {
    output[i + smallOutput] = input[0] + output[i];
  }
  return 2 * smallOutput;
}

int main()
{
  string input;
  cin >> input;
  string *output = new string[1000];
  int count = subSequence(input, output);
  for (int i = 0; i < count; i++)
  {
    cout << output[i] << endl;
  }
}
