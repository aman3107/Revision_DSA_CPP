#include <iostream>
using namespace std;

int length(char input[])
{
  int count = 0;
  for (int i = 0; input[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}

int stringToNumberHelper1(char input[], int last)
{
  if (last == 0)
  {
    return input[last] - '0';
  }
  int smallAns = stringToNumberHelper1(input, last - 1);
  int a = input[last] - '0';
  return smallAns * 10 + a;
}

int stringToNumberHelper(char input[], bool isInteger)
{
  if (isInteger == true || input[0] == '\0')
  {
    int num = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
      num = num * 10 + (input[i] - '0');
    }
    return num;
  }

  if (input[0] == '0' && isInteger == false)
  {
    int i = 1;
    for (; input[i] != '\0'; i++)
    {
      input[i - 1] = input[i];
    }
    input[i - 1] = '\0';
    stringToNumberHelper(input, isInteger);
  }
  else
  {
    stringToNumberHelper(input, true);
  }
}

int stringToNumber(char input[])
{
  // return stringToNumberHelper(input, false);
  return stringToNumberHelper1(input, length(input) - 1);
}

int main()
{
  char input[50];
  cin >> input;
  cout << stringToNumber(input) << endl;
}
