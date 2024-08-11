#include <iostream>
#include <climits>
using namespace std;
void swap(char *x, char *y)
{
  char *t = x;
  x = y;
  y = t;
}

void modify(int *ar, int n)
{
  // write your code here
  int max = INT_MIN;
  int min = INT_MAX;
  int maxIndex = 0;
  int minIndex = 0;
  for (int i = 0; i < n; i++)
  {
    if (ar[i] > max)
    {
      max = ar[i];
      maxIndex = i;
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (ar[i] < min)
    {
      min = ar[i];
      minIndex = i;
    }
  }
  int *maxP = &ar[maxIndex];
  int *minP = &ar[minIndex];
  *maxP = 100;
  *minP = 0;
}

int main()
{
  int n;
  cin >> n;
  int ar[n];
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  modify(ar, n);
  for (int i = 0; i < n; i++)
  {
    cout << ar[i] << " ";
  }
  return 0;
  // char st[] = "ABCD";
  // for (int i = 0; st[i] != '\0'; i++)
  // {
  //   cout << st[i] << *(st) + i << *(i + st) << i[st];
  // }
  // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  // float *ptr1 = &arr[0];
  // float *ptr2 = ptr1 + 3;
  // cout << *ptr2 << " ";
  // cout << ptr2 - ptr1;
  // return 0;
  // char *x = "ninjasquiz";
  // char *y = "codingninjas";
  // char *t;
  // swap(x, y);
  // cout << x << " " << y;
  // t = x;
  // x = y;
  // y = t;
  // cout << " " << x << " " << y;
  // return 0;
}