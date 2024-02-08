#include <iostream>
#include <cstring>
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

void func(char *str)
{
  // write your code here
  int i = 0;
  int j = strlen(str) - 1;
  while (i < j)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

void print(int *p)
{
  cout << *p << endl;
}

void incrementPointer(int *p)
{
  *p = (*p) * -1;
}

int sum1(int *a, int n)
{
  cout << sizeof(a) << endl;
  return 0;
}

int main()
{
  int numbers[5];
  int *p;
  p = numbers;
  *p = 10;
  p = &numbers[2];
  *p = 20;
  p--;
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p + 4) = 50;
  for (int n = 0; n < 5; n++)
  {
    cout << numbers[n] << ",";
  }
  // int arr[] = {4, 5, 6, 7};
  // int *p = (arr + 1);
  // cout << *arr + 9;
  // return 0;
  // int p = 10;
  // incrementPointer(&p);
  // cout << p;
  // // int a[10];
  // cout << sizeof(a) << endl;
  // int i = 10;
  // incrementPointer(&i);
  // cout << i;
  // print(&i);
  // char ch[1000];
  // cin >> ch;
  // func(ch);
  // cout << ch << endl;
  // char b[] = "abcd";
  // char *pc = &b[0];
  // cout << pc << endl;

  // char c = 'a';
  // char *pa = &c;
  // cout << pa << endl;
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