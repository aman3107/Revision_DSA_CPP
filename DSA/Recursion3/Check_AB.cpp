#include <iostream>
#include <cstring>
using namespace std;

bool checkAbHelper(char input[], int ind)
{
  if (input[ind] == '\0')
  {
    return true;
  }
  if (input[ind] != 'a')
  {
    return false;
  }
  if (input[ind + 1] != '\0' && input[ind + 2] != '\0')
  {
    if (input[ind + 1] == 'b' && input[ind + 2] == 'b')
    {
      return checkAbHelper(input, ind + 3);
    }
  }
  return checkAbHelper(input, ind + 1);
}

bool checkAB(char input[])
{
  if (input[0] != 'a')
  {
    return false;
  }
  return checkAbHelper(input, 0);
}

int main()
{
  char input[100];
  bool ans;
  cin >> input;
  ans = checkAB(input);
  if (ans)
    cout << "true" << endl;
  else
    cout << "false" << endl;
}
