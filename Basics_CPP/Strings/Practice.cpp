#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

void strSort(string &str)
{
  sort(str.begin(), str.end());
}

void reverseWord(string &str, int i, int j)
{
  while (i < j)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

string reverseEachWord(string str)
{
  int preIndex = -1;
  int i = 0;
  for (; i < str.size(); i++)
  {
    if (str[i] == ' ')
    {
      reverseWord(str, preIndex + 1, i - 1);
      preIndex = i;
    }
  }
  reverseWord(str, preIndex + 1, i - 1);
  return str;
}

string reverse(string str)
{
  int i = 0;
  int j = str.size() - 1;
  while (i < j)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
  return str;
}

int value(char ch, int val)
{
  if (val < 0)
  {
    return 0;
  }

  return (ch - '0');
}

string addBinaryString(string &a, string &b, int n, int m)
{
  // Write your code here.
  n = n - 1;
  m = m - 1;
  int carry = 0;
  string ans;
  int add_val = 0;
  int sum = 0;
  while (n >= 0 || m >= 0)
  {
    sum = carry + value(a[n], n) + value(b[m], m);
    add_val = sum % 2;
    carry = sum / 2;
    ans.push_back(char(add_val + '0'));
    n--;
    m--;
  }
  if (carry > 0)
  {
    ans.push_back(char(carry + '0'));
  }

  return ans;
}

string removeConsecutiveDuplicates(string str)
{
  // Write your code here
  for (int i = 0; i < str.size() - 1; i++)
  {
    if (str[i] == str[i + 1])
    {
      str.erase(i, 1);
      i--;
    }
  }
  return str;
}

void stringOperations(string str1, string str2)
{
  // str1.push_back('x');
  // cout << str1 << endl;
  // str1.insert(4, "man");
  // cout << str1 << endl;

  // str1.pop_back();
  // cout << str1 << endl;
  // str1.erase(2, 2);
  // cout << str1 << endl;

  str1.append(str2);
  cout << str1 << " " << str2 << endl;
}

int countWords(string str)
{
  // Write your code here
  int countWords = 0;
  for (char ch : str)
  {
    if (ch == ' ')
    {
      countWords++;
    }
  }
  return countWords + 1;
}

bool checkPalindrome(string str)
{
  int i = 0;
  int j = str.size() - 1;
  while (i < j)
  {
    if (str[i] != str[j])
    {
      return false;
    }
    j--;
    i++;
  }
  return true;
}

void removeAllOccurrencesOfChar(string input, char c)
{
  string ans;
  int index = 0;
  for (int i = 0; i < input.size(); i++)
  {
    if (input[i] == c)
    {
      continue;
    }
    else
    {
      // input[index] = input[i];
      // cout << input[index] << " ";
      ans += input[i];
      // index++;
    }
  }
  cout << ans << endl;
  // cout << input << endl;
}

int main()
{
  string str;
  getline(cin, str);
  strSort(str);
  cout << str;

  // getline(cin, str2);
  // cout << addBinaryString(str1, str2, str1.size(), str2.size());

  // cout << removeConsecutiveDuplicates(str1);
  // stringOperations(str1, str2);
  // cout << countWords(str);
  // cout << checkPalindrome(str);
  // char c;
  // cin >> c;
  // removeAllOccurrencesOfChar(name, c);
  // cout << name << endl;
  // name.at(4) = 'c';
  // cout << name << endl;
  // for (int i = 0; i < name.size(); i++)
  // {
  //   cout << name.at(i) << " " << endl;
  // }

  // for (char ch : name)
  // {
  //   cout << ch << " ";
  // }
  // cout << name.at(10);
  // cout << name[2] << endl;
  // string a, b;
  // cin >> a >> b;
  // if (a == b)
  // {
  //   cout << "Both strings are equal :" << endl;
  // }
  // else
  // {
  //   cout << "Strings are not equal :" << endl;
  // }

  // if (a < b)
  // {
  //   cout << "a is smaller than b :" << endl;
  // }
  // else
  // {
  //   cout << "b is smaller than a " << endl;
  // }
  // getline(cin, a);
  // string name;
  // cout << "Enter string :" << endl;
  // int age;
  // cin >> age;
  // cin.ignore(1);
  // getline(cin, name);
  // cout << age << " " << name;
  // cin >> name;
  // cout << name << endl;
  // cout << name.size() << endl;
}