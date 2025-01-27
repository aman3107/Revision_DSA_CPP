#include <iostream>
#include <string.h>
using namespace std;
void printAllPossibleCodesHelper(string input, string output)
{
  if (input.size() == 0)
  {
    for (int i = 0; i < output.size(); i++)
    {
      cout << output[i] << "";
    }
    cout << endl;
    return;
  }
  int first = input[0] - '0';
  char firstChar = 'a' + first - 1;
  printAllPossibleCodesHelper(input.substr(1), output + firstChar);
  if (input.size() > 1)
  {
    int second = first * 10 + input[1] - '0';
    if (second <= 26)
    {
      char secondChar = 'a' + second - 1;
      printAllPossibleCodesHelper(input.substr(2), output + secondChar);
    }
  }
}

void printAllPossibleCodes(string input)
{
  printAllPossibleCodesHelper(input, "");
}

int main()
{
  string input;
  cin >> input;

  printAllPossibleCodes(input);
  return 0;
}
