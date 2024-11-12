#include <iostream>
using namespace std;

void removeDuplicates(char str[])
{
  if (str[0] == '\0')
  {
    return;
  }
  if (str[0] == str[1])
  {
    int i = 1;
    for (; str[i] != '\0'; i++)
    {
      str[i - 1] = str[i];
    }
    str[i - 1] = str[i];
    removeDuplicates(str);
  }
  else
  {
    removeDuplicates(str + 1);
  }
}

int main()
{
  char str[100];
  cin >> str;
  removeDuplicates(str);
  cout << str << endl;
}