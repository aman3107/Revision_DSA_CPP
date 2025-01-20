#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char firstNonRepeatingCharacter(string str)
{
  // Write your code here
  unordered_map<char, int> ump;
  for (int i = 0; i < str.size(); i++)
  {
    ump[str[i]]++;
  }
  for (int i = 0; i < str.size(); i++)
  {
    if (ump[str[i]] == 1)
    {
      return str[i];
    }
  }
  return str[0];
}

int main()
{
  string s;
  cin >> s;
  cout << firstNonRepeatingCharacter(s) << endl;
}