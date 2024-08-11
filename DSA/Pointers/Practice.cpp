#include <iostream>
using namespace std;

void increment(int &n)
{
  n++;
}
void func(int p)
{
  cout << p << " ";
}

int main()
{
  int row, col;
  cin >> row >> col;
  int **p = new int *[row];
  for (int i = 0; i < row; i++)
  {
    p[i] = new int[col];
    for (int j = 0; j < col; j++)
    {
      cin >> p[i][j];
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << &p[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < row; i++)
  {
    delete[] p[i];
  }
  delete[] p;
  // int *p = new int;
  // *p = 10;
  // cout << *p << endl;
  // int n;
  // cin >> n;
  // int *arr = new int[n];
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr[i];
  // }

  // int max = -1;

  // for (int i = 0; i < n; i++)
  // {
  //   if (arr[i] > max)
  //   {
  //     max = arr[i];
  //   }
  // }
  // cout << max << endl;
  // delete p;
  // delete[] arr;
  // int i = 10;
  // int &p = i;
  // func(p++);
  // cout << i;
  // cout << "Hello World" << endl;
  // int i = 65;
  // char c = i;
  // cout << c << endl;
  // int *p = &i;
  // char *pc = (char *)p;
  // cout << p << endl;
  // cout << pc << endl;
  // cout << *pc << endl;
  // cout << *(pc + 1) << endl;
  // cout << *(pc + 3);

  // int i = 10;
  // increment(i);
  // cout << i << endl;
  // int &j = i;

  // i++;
  // cout << i << endl;
  // cout << j << endl;

  // j++;
  // cout << i << endl;
  // cout << j << endl;

  // int k = 100;
  // j = k;
  // cout << i << endl;
  // cout << j << endl;
}