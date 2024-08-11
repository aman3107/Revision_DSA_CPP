#include <iostream>
using namespace std;

string getCompressedString(string &input)
{
  // Write your code here.
  string ans;
  int count = 0;
  for (int i = 0; i < input.size(); i++)
  {
    if (input[i] == input[i + 1])
    {
      count++;
    }
    else
    {
      if (count > 0)
      {
        ans = ans + input[i] + to_string(count + 1);
        count = 0;
      }
      else
      {
        ans = ans + input[i];
      }
    }
  }
  return ans;
}

string reverseStringWordWise(string input)
{
  // Write your code here
  string ans;
  int index = 0;
  int i = 0;
  int len = 0;
  for (; i < input.size(); i++)
  {
    if (input[i] == ' ')
    {
      len = i - index;
      ans = input.substr(index, len) + ' ' + ans;
      index = i + 1;
    }
  }
  len = i - index;
  ans = input.substr(index, len) + ' ' + ans;
  return ans;
}

int makeBeautiful(string str)
{
  // Write your code here

  int n = str.length();
  int t1 = 0, t2 = 0;
  char s1 = '0', s2 = '1';
  for (int i = 0; i < n; i++)
  {
    if (str[i] == '1')
    {
      if (s1 == '0')
      {
        t1++;
      }
      else
      {
        t2++;
      }
    }
    else
    {
      if (s1 == '1')
      {
        t1++;
      }
      else
      {
        t2++;
      }
    }
    if (s1 == '1')
    {
      s1 = '0';
      s2 = '1';
    }
    else
    {
      s1 = '1';
      s2 = '0';
    }
  }
  return min(t1, t2);
}

bool areAnagram(string str1, string str2)
{
  // Write your code here.
  int hash1[26] = {0};
  int hash2[26] = {0};
  for (int i = 0; i < str1.size(); i++)
  {
    hash1[str1[i] - 'a']++;
  }
  for (int i = 0; i < str2.size(); i++)
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

// void getAllOccurrenceOfThePattern1(string str, string pat)
// {
//   string str;
//   string pat;
//   cin >> str >> pat;

//   int n = str.size();
//   int m = pat.size();

//   for (int i = 0; i < n; i++)
//   {
//     if (str[i] == pat[0])
//     {
//       bool a = true;
//       for (int j = 0; j < m; j++)
//       {
//         if (pat[j] != str[i + j])
//         {
//           a = false;
//         }
//       }
//       if (a)
//       {
//         cout << i << " ";
//       }
//     }
//   }
//   cout << endl;
// }

void getAllOccurrenceOfThePattern(string str, string pat)
{
  int startingIndex = 0;
  int lastIndex = pat.size() - 1;
  int length = pat.size();
  int totalLength = str.size();
  while (lastIndex <= totalLength)
  {
    if (str.substr(startingIndex, length) == pat.substr(0, length))
    {
      cout << startingIndex << " ";
    }

    lastIndex++;
    startingIndex++;
  }
}

int main()
{
  string str1;
  getline(cin, str1);
  cout << getCompressedString(str1);
  // cout << reverseStringWordWise(str1);
  // cout << makeBeautiful(str1);
  // string str2;
  // getline(cin, str2);
  // cout << areAnagram(str1, str2);
  // getAllOccurrenceOfThePattern(str, pat);
}