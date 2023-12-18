#include <iostream>
using namespace std;

void Pattern1(int n)
{
  int i = 1;
  while (i <= n)
  {
    int spaces = n - i;
    while (spaces > 0)
    {
      cout << " ";
      spaces--;
    }
    int stars = 1;
    while (stars <= i)
    {
      cout << "*";
      stars++;
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
    int spaces = 1;
    while (spaces <= n - i)
    {
      cout << ' ';
      spaces++;
    }
    int num = 1;
    while (num <= i)
    {
      cout << num;
      num++;
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
    int stars = 1;
    while (stars <= n - i + 1)
    {
      cout << '*';
      stars++;
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
    int num = n - i + 1;
    int j = 1;
    while (j <= num)
    {
      cout << num;
      j++;
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
    int spaces = 1;
    while (spaces <= n - i)
    {
      cout << ' ';
      spaces++;
    }
    int numL = 1;
    while (numL <= i)
    {
      cout << numL;
      numL++;
    }
    int numR = i - 1;
    while (numR > 0)
    {
      cout << numR;
      numR--;
    }
    cout << endl;
    i++;
  }
}

void Pattern6(int n)
{
  int i = 1;
  while (i <= n)
  {
    int spaces = 1;
    while (spaces <= n - i)
    {
      cout << ' ';
      spaces++;
    }
    int starL = 1;
    while (starL <= i)
    {
      cout << '*';
      starL++;
    }
    int starR = i - 1;
    while (starR > 0)
    {
      cout << '*';
      starR--;
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
    int spaces = 1;
    while (spaces <= n - i)
    {
      cout << ' ';
      spaces++;
    }
    int numL = i;
    int j = 1;
    while (j <= i)
    {
      cout << numL;
      numL++;
      j++;
    }
    int numR = numL - 2;
    while (numR >= i)
    {
      cout << numR;
      numR--;
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
  // Pattern2(n);
  // Pattern3(n);
  // Pattern4(n);
  // Pattern5(n);
  // Pattern6(n);
  Pattern7(n);
}