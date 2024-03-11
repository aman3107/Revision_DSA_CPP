#include <iostream>
using namespace std;

int string_length(char str[])
{
  if (str[0] == '\0')
  {
    return 0;
  }
  int smallOutput = string_length(str + 1);
  return smallOutput + 1;
}

int main()
{
  char str[100];
  cin.getline(str, 100);
  cout << string_length(str) << endl;
}