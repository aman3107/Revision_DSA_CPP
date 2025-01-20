#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

bool isPermutation(char input1[], char input2[])
{
  // Write your code here
  unordered_map<char, int> ump;
  int n1 = strlen(input1);
  int n2 = strlen(input2);
  for (int i = 0; i < n1; i++)
  {
    ump[input1[i]]++;
  }
  for (int i = 0; i < n2; i++)
  {
    if (ump.count(input2[i]) > 0)
    {
      ump[input2[i]]--;
      continue;
    }
    else
    {
      return false;
    }
  }
  unordered_map<char, int>::iterator it = ump.begin();
  while (it != ump.end())
  {
    cout << it->first << " " << it->second << endl;
    if (it->second > 0)
    {
      return false;
    }
    it++;
  }
  return true;
}

int main()
{
  int size = 1e6;
  char str1[size];
  char str2[size];
  cin >> str1 >> str2;
  cout << (isPermutation(str1, str2) ? "true" : "false");
}