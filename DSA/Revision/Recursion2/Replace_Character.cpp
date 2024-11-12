#include <iostream>
using namespace std;

void replaceChar(char str[], char s1, char s2)
{
  if (str[0] == '\0')
  {
    return;
  }
  if (str[0] == s1)
  {
    str[0] = s2;
    replaceChar(str + 1, s1, s2);
  }
  else
  {
    replaceChar(str + 1, s1, s2);
  }
}

int main()
{
  char str[100];
  cin >> str;
  char s1, s2;
  cin >> s1 >> s2;
  replaceChar(str, s1, s2);
  cout << str << endl;
}