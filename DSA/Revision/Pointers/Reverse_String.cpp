#include <iostream>
using namespace std;

#include <cstring>
void func(char *str)
{
  int len = strlen(str);
  int i = 0;
  int j = len - 1;
  while (i < j)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
  str[len] = '\0';
}

int main()
{
  char ch[1000];
  cin >> ch;
  func(ch);
  cout << ch << endl;
}