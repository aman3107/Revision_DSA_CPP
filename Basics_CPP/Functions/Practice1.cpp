#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n)
{
  int i = 1;
  int fact = 1;
  while (i <= n)
  {
    fact = fact * i;
    i++;
  }
  return fact;
}

bool prime(int n)
{
  int d = 2;
  while (d < n)
  {
    if (n % d == 0)
    {
      return false;
    }
    d++;
  }
  return true;
}

void print_1_N(int n)
{
  for (int i = 1; i <= n; i++)
  {
    cout << i << " ";
  }
  cout << endl;
}

int multiply(int a, int b)
{
  return a * b;
}

void printTable(int start_f, int end_f, int step)
{
  while (start_f <= end_f)
  {
    int fahrenheit = (start_f - 32) * (5.0 / 9);
    cout << start_f << " " << fahrenheit << endl;
    start_f += step;
  }
}

bool fibonaci(int n)
{
  if (n == 0 || n == 0)
  {
    return true;
  }
  int a = 0;
  int b = 1;
  int c = 1;
  while (c <= n)
  {
    c = a + b;
    if (c == n)
    {
      return true;
    }
    a = b;
    b = c;
  }
  return false;
}

bool palindrome(int n)
{
  int reverse = 0;
  int num = n;
  while (n > 0)
  {
    int rem = n % 10;
    reverse = reverse * 10 + rem;
    n = n / 10;
  }
  return (reverse == num);
}
bool checkArmstrong(int n)
{
  int num = n;
  int armStrongNumber = 0;
  int ans = n;
  int c = 0;
  while (n > 0)
  {
    c++;
    n = n / 10;
  }
  while (num > 0)
  {
    int rem = num % 10;
    armStrongNumber = armStrongNumber + pow(rem, c);
    num = num / 10;
  }
  return (armStrongNumber == ans);
}
bool composite(int n)
{
  for (int d = 2; d < n; d++)
  {
    if (n % d == 0)
    {
      return true;
    }
  }
  return false;
}
int main()
{
  int n;
  cout << "Enter value of n : " << endl;
  cin >> n;
  // cout << palindrome(n) << endl;
  // cout << checkArmstrong(n) << endl;
  cout << composite(n);
  // int n;
  // cin >> n;
  // cout << fibonaci(n);
  // for (int d = 2; d <= n; d++)
  // {
  //   if (prime(d))
  //   {
  //     cout << d << endl;
  //   }
  // }
  // int n, r;
  // cin >> n >> r;
  // int fact_n = factorial(n);
  // int fact_r = factorial(r);
  // int fact_n_r = factorial(n - r);
  // int ncr = fact_n / (fact_r * fact_n_r);
  // cout << ncr;
  // int i = 1;
  // while (i <= n)
  // {
  //   fact_n = fact_n * i;
  //   i++;
  // }
  // int n;
  // cout << "Enter value of n :" << endl;
  // cin >> n;
  // print_1_N(n);
  // cout << multiply(5, 2) << endl;
  // if (prime(n))
  // {
  //   cout << "Prime" << endl;
  // }
  // else
  // {
  //   cout << "Not Prime" << endl;
  // }
  // int start_f;
  // int end_f;
  // int step;
  // cout << "Enter start fahrenheit, End fahrenheit and step :" << endl;
  // cin >> start_f >> end_f >> step;
  // printTable(start_f, end_f, step);
}