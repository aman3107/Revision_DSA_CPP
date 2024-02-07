#include <iostream>
using namespace std;

int sum(int *ar, int n)
{
  // write your code here
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += *(ar + i);
  }
  return sum;
}

int main()
{
  // int a[] = {1, 2, 3, 4};
  // int *p = a++;
  // cout << *p << endl;

  // int arr[100];
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr[i];
  // }
  // cout << sum(arr, n) << endl;

  // int i;
  // int *ptr = &i;
  // cout << ptr << endl;
  // cout << &i << endl;

  // float f = 10.2;
  // float *pf = &f;
  // cout << *pf << endl;

  // int *ptr = 0;
  // int a = 10;
  // *ptr = a;
  // cout << *ptr << endl;
  // float f = 10.5;
  // float p = 2.5;
  // float *ptr = &f;
  // (*ptr)++;
  // *ptr = p;
  // cout << *ptr << " " << f << " " << p;

  // int i = 10;
  // int *p = &i;
  // cout << p << endl;
  // p = p + 1;
  // cout << p << endl;

  // cout << p << endl;
  // p = p - 1;
  // cout << p << endl;

  // int a[10];
  // cout << a << endl;
  // cout << &a << endl;
  // cout << &a[0] << endl;
  // a[0] = 5;
  // a[1] = 10;
  // cout << *a << endl;
  // cout << *(a + 1) << endl;
}