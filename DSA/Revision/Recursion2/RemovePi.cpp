#include <iostream>
using namespace std;

void replacePi(char input[])
{
  if (input[0] == '\0')
  {
    return;
  }
  if (input[0] == 'p' && input[1] == 'i')
  {
    char str[10000];
    int i = 2;
    for (; input[i] != '\0'; i++)
    {
      str[i - 2] = input[i];
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
    replacePi(input + 3);
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
  cout << input << endl;
}