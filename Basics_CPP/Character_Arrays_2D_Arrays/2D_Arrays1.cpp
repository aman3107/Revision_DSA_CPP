#include <iostream>
#include <climits>
using namespace std;

void printArray(int arr[][100], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void squareMatrix(int arr[][100], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    cout << arr[i][i] << " ";
  }
  // for (int i = 0; i < row; i++)
  // {
  //   for (int j = 0; j < col; j++)
  //   {
  //     if (i == j)
  //     {
  //       cout << arr[i][j] << " ";
  //     }
  //   }
  // }
}

int largestRowColumn(int arr[][100], int row, int col)
{
  int max = INT_MIN;
  for (int i = 0; i < row; i++)
  {
    int sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum += arr[i][j];
    }
    if (sum > max)
    {
      max = sum;
    }
  }
  for (int i = 0; i < col; i++)
  {
    int sum = 0;
    for (int j = 0; j < row; j++)
    {
      sum += arr[j][i];
    }
    if (sum > max)
    {
      max = sum;
    }
  }
  return max;
}

void printWave(int arr[][100], int row, int col)
{
  for (int j = 0; j < col; j++)
  {
    if (j % 2 == 0)
    {
      for (int i = 0; i < row; i++)
      {
        cout << arr[i][j] << " ";
      }
    }
    else
    {
      for (int i = row - 1; i >= 0; i--)
      {
        cout << arr[i][j] << " ";
      }
    }
  }
}

void transposeOfAMatrix(int arr[][100], int row, int col)
{
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}

int totalSum(int arr[][100], int row, int col)
{
  int srow = 0, scol = 0;
  int erow = row - 1, ecol = col - 1;
  int sum = 0;
  for (int i = scol; i <= ecol; i++)
  {
    sum = sum + arr[srow][i];
  }
  srow++;
  for (int i = srow; i <= erow; i++)
  {
    sum = sum + arr[i][ecol];
  }
  ecol--;
  for (int i = ecol; i >= scol; i--)
  {
    sum = sum + arr[erow][i];
  }
  erow--;
  for (int i = erow; i >= srow; i--)
  {
    sum = sum + arr[i][scol];
  }
  for (int i = 1; i < row - 1; i++)
  {
    sum = sum + arr[i][i];
  }
  int j = row - 2;
  for (int i = 1; i < row - 1; i++)
  {
    if (i != j)
    {
      sum = sum + arr[i][j];
      j--;
    }
    else
    {
      j--;
    }
  }
  return sum;
}

int main()
{
  int arr[100][100];
  int row, col;
  cin >> row >> col;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << totalSum(arr, row, col);
  // transposeOfAMatrix(arr, row, col);
  // printWave(arr, row, col);
  // cout << largestRowColumn(arr, row, col);
  // squareMatrix(arr, row, col);
  // printArray(arr, row, col);

  // Column Sum
  // for (int i = 0; i < col; i++)
  // {
  //   int sum = 0;
  //   for (int j = 0; j < row; j++)
  //   {
  //     sum += arr[j][i];
  //   }
  //   cout << sum << " ";
  // }

  // Print Array Row Wise
  // cout << "Row Wise " << endl;
  // for (int i = 0; i < row; i++)
  // {
  //   for (int j = 0; j < col; j++)
  //   {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  // Print Array Column Wise
  // cout << "Column Wise " << endl;
  // for (int i = 0; i < col; i++)
  // {
  //   for (int j = 0; j < row; j++)
  //   {
  //     cout << arr[j][i] << " ";
  //   }
  //   cout << endl;
  // }
}
