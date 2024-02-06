#include <iostream>
using namespace std;

void allSubstrings(string str)
{
  for (int i = 0; i < str.size(); i++)
  {
    for (int j = i; j < str.size(); j++)
    {
      for (int k = i; k <= j; k++)
      {
        cout << str[k];
      }
      cout << ",";
    }
    cout << endl;
  }
}

int main()
{
  string str;
  cin >> str;
  allSubstrings(str);
}