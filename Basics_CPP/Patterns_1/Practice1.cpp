#include <iostream>
#include <vector>
using namespace std;

void Pattern1(int n)
{
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }
}

void SquarePattern(int n)
{
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    int num = n;
    while (j <= n)
    {
      cout << num;
      j++;
    }
    cout << endl;
    i++;
  }
}

void Pattern2(int n)
{
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << i;
      j++;
    }
    cout << endl;
    i++;
  }
}

void Pattern3(int n)
{
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << j;
      j++;
    }
    cout << endl;
    i++;
  }
}

void Pattern4(int n)
{
  int i = 1;
  while (i <= n)
  {
    int j = n;
    while (j > 0)
    {
      cout << j;
      j--;
    }
    cout << endl;
    i++;
  }
}

void Pattern5(int n)
{
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << j;
      j++;
    }
    cout << endl;
    i++;
  }
}

void Pattern6(int n)
{
  int i = 1;
  int num = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << num;
      num++;
      j++;
    }
    cout << endl;
    i++;
  }
}

void Pattern7(int n)
{
  int i = 1;
  while (i <= n)
  {
    int num = i;
    int j = 1;
    while (j <= i)
    {
      cout << num;
      num++;
      j++;
    }
    cout << endl;
    i++;
  }
}

void Triangular_Star_Pattern(int n)
{
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }
}

void Triangular_Number_Pattern(int n)
{
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << i;
      j++;
    }
    cout << endl;
    i++;
  }
}

void Reverse_Number_Pattern(int n)
{
  int i = 1;
  while (i <= n)
  {
    int num = i;
    int j = 1;
    while (j <= i)
    {
      cout << num;
      num--;
      j++;
    }
    cout << endl;
    i++;
  }
}

void charPattern1(int n)
{
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      char ch = 'A' + j - 1;
      cout << ch;
      j++;
    }
    cout << endl;
    i++;
  }
}

void charPattern2(int n)
{
  int i = 1;
  while (i <= n)
  {
    char ch = 'A' + i - 1;
    int j = 1;
    while (j <= n)
    {
      cout << ch;
      ch = ch + 1;
      j++;
    }
    cout << endl;
    i++;
  }
}

void alphaPattern(int n)
{
  int i = 1;
  while (i <= n)
  {
    char ch = 'A' + i - 1;
    int j = 1;
    while (j <= i)
    {
      cout << ch;
      j++;
    }
    cout << endl;
    i++;
  }
}

void characterPattern(int n)
{
  int i = 1;
  while (i <= n)
  {
    char ch = 'A' + i - 1;
    int j = 1;
    while (j <= i)
    {
      cout << ch;
      ch = ch + 1;
      j++;
    }
    cout << endl;
    i++;
  }
}

void interestingAlphabets(int n)
{
  int i = 1;
  while (i <= n)
  {
    char ch = 'A' + n - i;
    int j = 1;
    while (j <= i)
    {
      cout << ch;
      ch++;
      j++;
    }
    cout << endl;
    i++;
  }
}

vector<string> Patternfy(int n)
{
  int i = 1;
  vector<string> st;
  while (i <= n)
  {
    int j = n + 1 - i;
    while (j > 0)
    {
      cout << "*";
      j--;
    }
    cout << endl;
    i++;
  }
}
int main()
{
  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;
  // Pattern1(n);
  // SquarePattern(n);
  // Pattern2(n);
  // Pattern3(n);
  // Pattern4(n);
  // Pattern5(n);
  // Pattern6(n);
  // Pattern7(n);
  // Triangular_Star_Pattern(n);
  // Triangular_Number_Pattern(n);
  // Reverse_Number_Pattern(n);
  // charPattern1(n);
  // charPattern2(n);
  // alphaPattern(n);
  // characterPattern(n);
  // interestingAlphabets(n);
}