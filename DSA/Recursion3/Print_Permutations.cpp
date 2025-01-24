#include <iostream>
#include <string>
using namespace std;

void printPermutationsHelper(string input, string output)
{
  if (input.size() == 1)
  {
    cout << input[0] + output << endl;
    return;
  }

  for (int i = 0; i < input.size(); i++)
  {
    string remainingString = input.substr(0, i) + input.substr(i + 1);
    printPermutationsHelper(remainingString, input[i] + output);
  }
}

void printPermutations(string input)
{
  printPermutationsHelper(input, "");
}

int main()
{
  string input;
  cin >> input;
  printPermutations(input);
  return 0;
}