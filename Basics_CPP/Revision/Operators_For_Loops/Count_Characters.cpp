#include <iostream>
using namespace std;

int main()
{
  char c;
  cout << "Enter Characters :" << endl;
  c = cin.get();
  int characters = 0;
  int numbers = 0;
  int spaces = 0;
  while (c != '$')
  {
    if (c >= 97 && c <= 122)
    {
      characters++;
    }
    else if (c >= 48 && c <= 57)
    {
      numbers++;
    }
    else
    {
      spaces++;
    }
    c = cin.get();
  }

  cout << characters << " " << numbers << " " << spaces << endl;
}