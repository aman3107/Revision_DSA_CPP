#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void printKeypadHelper(int num, string output)
{
  if (num == 0)
  {
    cout << output << endl;
    return;
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
  int rem = num % 10;
  int divNum = num / 10;
  string temp = ump[rem];
  for (int i = 0; i < temp.size(); i++)
  {
    printKeypadHelper(divNum, temp[i] + output);
  }
}

void printKeypad(int num)
{
  printKeypadHelper(num, "");
}
int main()
{
  int num;
  cin >> num;

  printKeypad(num);

  return 0;
}
