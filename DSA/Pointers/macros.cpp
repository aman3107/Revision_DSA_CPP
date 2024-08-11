#include <iostream>
using namespace std;

// #define PI 3.14
// int a;
// #define MULTIPLY(a, b) a *b
// #define SQUARE(x) x *x

// void g()
// {
//   a++;
//   cout << a << endl;
// }

// void f()
// {
//   cout << a << endl;
//   a++;
//   g();
// }

inline int max(int a, int b)
{
  return (a > b) ? a : b;
}
int main()

{
  int i = 12;
  int const *const p = &i;
  // int const i = 20;
  // int const *p = &i;

  // int j = 12;
  // int const *p1 = &j;
  // cout << *p1 << endl;
  // j++;
  // cout << *p1 << endl;
  // cout << *p << endl;
  // const int i = 10;
  // cout << i << endl;
  // int j = 12;
  // const int &k = j;
  // cout << k << endl;
  // j++;
  // cout << k << endl;
  // const int a = 20;
  // const int &b = a;

  // int const j1 = 10;
  // int k1 = j1;
  // k++;
  // i = 12;
  // int a, b;
  // cin >> a >> b;
  // int c = max(a, b);
  // cout << c << endl;
  // int c = (a > b) ? b : a;
  // int x = 36 / SQUARE(6);
  // cout << x;
  // cout << MULTIPLY(2 + 3, 3 + 5);
  // a = 10;
  // f();
  // cout << a << endl;
  // int r;
  // cin >> r;
  // cout << PI * r * r << endl;
}