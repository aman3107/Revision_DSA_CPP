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

void replacePi3(char input[])
{
  if (input[0] == '\0' || input[1] == '\0')
  {
    return;
  }
  if (input[0] != 'p' && input[1] != 'i')
  {
    replacePi3(input + 1);
  }
  else
  {
    int length = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
      length++;
    }
    for (int i = length; i >= 2; i--)
    {
      input[i + 2] = input[i];
    }
    input[0] = '3';
    input[1] = '.';
    input[2] = '1';
    input[3] = '4';
    replacePi3(input + 4);
  }
}

void replacePi2(char input[], int start)
{
  if (input[start] == '\0' || input[start + 1] == '\0')
  {
    return;
  }
  replacePi2(input, start + 1);
  if (input[start] == 'p' && input[start + 1] == 'i')
  {
    int len = length(input);
    cout << len << start << endl;
    input[len + 2] = '\0';
    for (int i = len - 1; i >= start + 2; i--)
    {
      input[i + 2] = input[i];
    }
    input[start] = '3';
    input[start + 1] = '.';
    input[start + 2] = '1';
    input[start + 3] = '4';
  }
}

void replacePi2(char input[])
{
  replacePi2(input, 0);
}

void replacePi(char input[])
{
  if (input[0] == '\0')
  {
    return;
  }

  if (input[0] == 'p' && input[1] == 'i')
  {
    char str[10000];
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
      str[i] = input[i + 2];
    }
    str[i] = '\0';
    input[0] = '3';
    input[1] = '.';
    input[2] = '1';
    input[3] = '4';
    int j = 0;
    for (; str[j] != '\0'; j++)
    {
      input[j + 4] = str[j];
    }
    input[j + 4] = '\0';
    replacePi(input + 4);
  }
  else
  {
    replacePi(input + 1);
  }
}

int main()
{
  char input[10000];
  cin.getline(input, 10000);
  replacePi(input);
  // replacePi2(input);
  // replacePi3(input);
  cout << input << endl;
}
