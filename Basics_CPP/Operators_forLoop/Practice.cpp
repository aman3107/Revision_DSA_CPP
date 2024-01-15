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

  // int n;
  // cout << "Enter value of n :" << endl;
  // cin >> n;

  // for (int i = 2; i <= n; i++)
  // {
  //   bool prime = true;
  //   for (int d = 2; d < i; d++)
  //   {
  //     if (i % d == 0)
  //     {
  //       prime = false;
  //       break;
  //     }
  //   }
  //   if (prime)
  //   {
  //     cout << i << " ";
  //   }
  // }
  // char c;
  // cin >> c;
  // int count = 0;
  // while (c != '$')
  // {
  //   cin >> c;
  //   count++;
  // }
  // cout << count;

  // char c;
  // c = cin.get();
  // int count = 0;
  // while (c != '$')
  // {
  //   c = cin.get();
  //   count++;
  // }
  // cout << count;

  // char c;
  // c = cin.get();
  // int ca = 0;
  // int cn = 0;
  // int cs = 0;
  // int ct = 0;
  // int cnum = 0;
  // while (c != '$')
  // {
  //   if (c >= 97 && c <= 122)
  //   {
  //     ca++;
  //   }
  //   else if (c >= 48 && c <= 57)
  //   {
  //     cnum++;
  //   }
  //   else if (c == ' ')
  //   {
  //     cs++;
  //   }
  //   else if (c == '\t')
  //   {
  //     ct++;
  //   }
  //   else if (c == '\n')
  //   {
  //     cn++;
  //   }
  //   c = cin.get();
  // }
  // cout << ca << " " << cn << " " << ct << " " << cs;
  // int n, c;
  // cout << "Enter value of n :" << endl;
  // cin >> n;
  // cout << "Enter your choice 1. Sum 2. Product " << endl;
  // cin >> c;
  // int sum = 0;
  // unsigned long int prod = 1;
  // for (int i = 1; i <= n; i++)
  // {
  //   if (c == 1)
  //   {
  //     sum = sum + i;
  //   }
  //   else if (c == 2)
  //   {
  //     prod = prod * i;
  //   }
  //   else
  //   {
  //     break;
  //   }
  // }
  // if (c == 1)
  // {
  //   cout << sum;
  // }
  // else if (c == 2)
  // {
  //   cout << prod;
  // }
  // else
  // {
  //   cout << -1;
  // }

  // int n;
  // cout << "Enter value of n : " << endl;
  // cin >> n;
  // int d = 1;
  // for (int i = 1; i <= n; i++)
  // {
  //   int ap = 3 * d + 2;
  //   if (ap % 4 != 0)
  //   {
  //     d++;
  //   }
  //   else
  //   {
  //     ap = 3 * (d + 1) + 2;
  //     d += 2;
  //   }
  //   cout << ap << " ";
  // }
  // int n;
  // cout << "Enter value of n : " << endl;
  // cin >> n;
  // bool num_start = false;
  // int reverse = 0;
  // while (n > 0)
  // {
  //   int rem = n % 10;
  //   if (rem == 0 && num_start == false)
  //   {
  //     n = n / 10;
  //     continue;
  //   }
  //   else
  //   {
  //     num_start = true;
  //     reverse = reverse * 10 + rem;
  //     n = n / 10;
  //   }
  // }
  // cout << reverse;
  // int binary;
  // cout << "Enter binary number : " << endl;
  // cin >> binary;
  // int decimal = 0;
  // int pv = 1;
  // while (binary > 0)
  // {
  //   int rem = binary % 10;
  //   decimal = decimal + pv * rem;
  //   binary = binary / 10;
  //   pv = pv * 2;
  // }
  // cout << decimal;

  // int decimal;
  // cout << "Enter decimal number : " << endl;
  // cin >> decimal;
  // long int binary = 0;
  // int pv = 1;
  // while (decimal > 0)
  // {
  //   int rem = decimal % 2;
  //   binary = binary + (rem * pv);
  //   decimal = decimal / 2;
  //   pv = pv * 10;
  // }
  // cout << binary;

  // int n;
  // cout << "Enter value of n : " << endl;
  // cin >> n;
  // int sq = 1;
  // int i = 0;
  // while (sq <= n)
  // {
  //   i++;
  //   sq = i * i;
  // }
  // cout << i - 1;
}