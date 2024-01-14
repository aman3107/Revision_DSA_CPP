#include <iostream>

using namespace std;

int main()
{
  // int a = -3;
  // int ror = 15 | 30;
  // int rand = 15 & 30;
  // int rnot = ~30;
  // int rxor = 15 ^ 30;
  // int rrs = 15 >> 2;
  // int rls = 15 << 2;
  // cout << ror << '\t' << rand << '\t' << rnot << '\t' << rxor << '\t' << rls << '\t' << rrs << '\t';
  // cout << "Hello World";
  // cout << endl;
  // cout << ~2 << endl;
  // cout << (15 << 2) << endl;
  // cout << (a >> 1);s
  // int a = 10;
  // a += 3;
  // a *= 2;
  // a /= 3;
  // cout << ++a;
  // cout << a++ << endl;
  // int n;
  // cout << "Enter value of n ";
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   cout << i << endl;
  // }
  /* Prime Numbers*/
  // int n;
  // cout << "enter value of n :" << endl;
  // cin >> n;
  // // bool prime = false;
  // // for (int i = 2; i < n; i++)
  // // {
  // //   if (n % i == 0)
  // //   {
  // //     prime = false;
  // //     break;
  // //   }
  // //   else
  // //   {
  // //     prime = true;
  // //   }
  // // }
  // // if (prime)
  // // {
  // //   cout << "Number is Prime : " << n;
  // // }
  // // else
  // // {
  // //   cout << "Number is not Prime :" << n;
  // // }

  /* Fibonacci Program */
  // int n;
  // cout << "enter value of n :" << endl;
  // cin >> n;
  // int a = 0;
  // int b = 1;
  // int c = 1;
  // for (int i = 2; i <= n; i++)
  // {
  //   c = a + b;
  //   a = b;
  //   b = c;
  // }
  // cout << c;

  // int n;
  // cout << "Enter value of n :" << endl;
  // cin >> n;
  // int d = 2;
  // bool prime = true;
  // while (d < n)
  // {
  //   cout << d;
  //   if (n % d == 0)
  //   {
  //     prime = false;
  //     break;
  //   }
  //   d++;
  // }
  // if (prime)
  // {
  //   cout << "Prime";
  // }
  // else
  // {
  //   cout << "Not Prime";
  // }

  int n;
  cout << "Enter value of n :" << endl;
  cin >> n;

  for (int i = 2; i <= n; i++)
  {
    bool prime = true;
    for (int d = 2; d < i; d++)
    {
      if (i % d == 0)
      {
        prime = false;
        break;
      }
    }
    if (prime)
    {
      cout << i << " ";
    }
  }
}