#include <iostream>
#include <string.h>
using namespace std;

int getCodes(string input, string output[10000])
{
  if (input[0] == '\0')
  {
    output[0] = "";
    return 1;
  }
  string output1[500], output2[500];
  int first = input[0] - '0';
  char secondChar = '\0';
  char firstChar = 'a' + first - 1;
  int size1 = getCodes(input.substr(1), output1);
  int size2 = 0;
  if (input[1] != '\0')
  {
    int second = first * 10 + input[1] - '0';
    if (second >= 10 && second <= 26)
    {
      secondChar = 'a' + second - 1;
      size2 = getCodes(input.substr(2), output2);
    }
  }
  int row = 0;
  for (int i = 0; i < size1; i++)
  {
    output[row] = firstChar + output1[i];
    row++;
  }
  for (int i = 0; i < size2; i++)
  {
    output[row] = secondChar + output2[i];
    row++;
  }
  return row;
}

int main()
{
  string input;
  cin >> input;

  string output[10000];
  int count = getCodes(input, output);
  for (int i = 0; i < count && i < 10000; i++)
    cout << output[i] << endl;
  return 0;
}
