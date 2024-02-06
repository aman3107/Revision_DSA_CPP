#include <iostream>
#include <climits>
#include <cstring>
#include <string>
using namespace std;

void minLengthWord(char input[], char output[])
{
  // Write your code here
  int i = 0;
  int minLentgh = INT_MAX;
  int index = 0;
  int count = 0;
  int n = strlen(input);
  while (i <= n)
  {
    if (input[i] == ' ' || i == n)
    {
      if (count < minLentgh)
      {
        minLentgh = count;
        index = abs(count - i);
        count = 0;
      }
      else
      {
        count = 0;
      }
    }
    else
    {
      count++;
    }
    i++;
  }
  int c = 0;
  for (int i = index; i < index + minLentgh; i++)
  {
    output[c] = input[i];
    c++;
  }
}

int main()
{
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}
