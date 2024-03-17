#include <iostream>
using namespace std;

int length(char input[])
{
  int count = 0;
  for (int i = 0; input[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}

void pairStarHelper(char input[], int start)
{
  if (input[start] == '\0' || input[start + 1] == '\0')
  {
    return;
  }
  if (input[start] == input[start + 1])
  {
    int len = length(input);
    for (int i = len + 1; i > start; i--)
    {
      input[i] = input[i - 1];
    }
    input[start + 1] = '*';
    pairStarHelper(input, start + 2);
  }
  else
  {
    pairStarHelper(input, start + 1);
  }
}

void pairStar(char input[])
{
  pairStarHelper(input, 0);
}

int main()
{
  char input[100];
  cin.getline(input, 100);
  pairStar(input);
  cout << input << endl;
}
