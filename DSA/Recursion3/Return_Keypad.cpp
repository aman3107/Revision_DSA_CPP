#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int keypad(int num, string output[])
{
  if (num == 0)
  {
    output[0] = "";
    return 1;
  }
  unordered_map<int, string> ump;
  ump[2] = "abc";
  ump[3] = "def";
  ump[4] = "ghi";
  ump[5] = "jkl";
  ump[6] = "mno";
  ump[7] = "pqrs";
  ump[8] = "tuv";
  ump[9] = "wxyz";
  int smallOutput = keypad(num / 10, output);
  int keyPadNum = num % 10;
  string str = ump[keyPadNum];
  string temp[smallOutput];
  for (int i = 0; i < smallOutput; i++)
  {
    temp[i] = output[i];
  }
  int count = 0;
  for (int i = 0; i < str.size(); i++)
  {
    for (int j = 0; j < smallOutput; j++)
    {
      output[count] = temp[j] + str[i];
      count++;
    }
  }
  return count;
}

int main()
{
  int num;
  cin >> num;

  string output[10000];
  int count = keypad(num, output);
  for (int i = 0; i < count && i < 10000; i++)
  {
    cout << output[i] << endl;
  }
  return 0;
}
