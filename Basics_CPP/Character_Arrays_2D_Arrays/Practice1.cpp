#include <iostream>
#include <cstring>
using namespace std;

int strLen(char str[])
{
  int len = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    len++;
  }
  return len;
}

bool palindrome(char str[])
{
  int n = strLen(str);
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (str[i] != str[j])
    {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

void replaceCharacter(char str[], char c1, char c2)
{
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == c1)
    {
      str[i] = c2;
    }
  }
}

void reverseChar(char str[])
{
  int i = 0;
  int j = strLen(str) - 1;
  while (i < j)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

void trimSpaces(char str[])
{
  int c = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ')
    {
      continue;
    }
    else
    {
      str[c] = str[i];
      c++;
    }
  }
  str[c] = '\0';
}

void printPrefixes(char str[])
{
  for (int i = 0; str[i] != '\0'; i++)
  {
    for (int j = i; str[j] != '\0'; j++)
    {
      for (int k = i; k <= j; k++)
      {
        cout << str[k];
      }
      cout << endl;
    }
  }
}

bool isPermutation(char str1[], char str2[])
{
  int hash1[26] = {0};
  int hash2[26] = {0};
  for (int i = 0; str1[i] != '\0'; i++)
  {
    hash1[str1[i] - 'a']++;
  }
  for (int i = 0; str2[i] != '\0'; i++)
  {
    hash2[str2[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (hash1[i] != hash2[i])
    {
      return false;
    }
  }
  return true;
}

void removeConsecutiveDuplicates(char str[])
{
  int c = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == str[i + 1])
      continue;
    else
    {
      str[c] = str[i];
      c++;
    }
  }
  str[c] = '\0';
}

char highestOccurringChar(char str[])
{
  int hash[26] = {0};
  for (int i = 0; str[i] != '\0'; i++)
  {
    hash[str[i] - 'a']++;
  }
  int max = INT_MIN;
  int index = 0;
  for (int i = 0; i < 26; i++)
  {
    if (hash[i] > max)
    {
      index = i;
      max = hash[i];
    }
  }
  return char(index + 'a');
}

void reverseWord(char str[], int i, int j)
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

void reverseEachWord(char str[])
{
  int previousIndex = -1;
  int i = 0;
  for (; str[i] != '\0'; i++)
  {
    if (str[i] == ' ')
    {
      reverseWord(str, previousIndex + 1, i - 1);
      previousIndex = i;
    }
  }
  reverseWord(str, previousIndex + 1, i - 1);
}

int main()
{
  char str1[100], str2[100];
  cin.getline(str1, 100);
  reverseEachWord(str1);
  cout << str1;
  // cout << highestOccurringChar(str1);
  // removeConsecutiveDuplicates(str1);
  // cout << str1;
  // cin.getline(str2, 100);
  // cout << isPermutation(str1, str2);
  // cout << "Hello World";
  // char str[100];
  // cin.getline(str, 100);
  // printPrefixes(str);
  // char str2[100];
  // cin.getline(str2, 100);
  // cout << "Before Copying " << endl;
  // cout << "String 1 " << str << endl;
  // cout << "String 2 " << str2 << endl;
  // strncpy(str, str2, 4);
  // cout << "After Copying " << endl;
  // cout << "String 1 " << str << endl;
  // cout << "String 2 " << str2 << endl;
  // strcpy(str, str2);
  // if (strcmp(str, str2) == 0)
  // {
  //   cout << "true" << endl;
  // }
  // else
  // {
  //   cout << "false" << endl;
  // }
  // cout << strcmp(str, str2);
  // cout << strlen(str) << endl;
  // trimSpaces(str);
  // cout << str << endl;
  // reverseChar(str);
  // cin.getline(str, 100, '$');
  // cin >> str;
  // char c1, c2;
  // cin >> c1 >> c2;
  // replaceCharacter(b, c1, c2);
  // cout << b;
  // bool ans = palindrome(b);
  // cout << bool(ans) << endl;
  // cout << "Length :" << strLen(b) << endl;
  // b[1] = '\0';
  // b[3] = 'd';
  // b[4] = 'x';
  // cout << b;
  // int i = 0;
  // while (b[i] != '\0')
  // {
  //   cout << b[i] << " ";
  //   i++;
  // }
}