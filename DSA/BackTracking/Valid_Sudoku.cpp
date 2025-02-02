#include <iostream>
#define N 9
using namespace std;
bool findEmptyLocation(int grid[N][N], int &row, int &col)
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (grid[i][j] == 0)
      {
        row = i;
        col = j;
        return true;
      }
    }
  }
  return false;
}

bool isSafeRow(int grid[N][N], int row, int num)
{
  for (int i = 0; i < N; i++)
  {
    if (grid[row][i] == num)
    {
      return false;
    }
  }
  return true;
}

bool isSafeCol(int grid[N][N], int col, int num)
{
  for (int i = 0; i < N; i++)
  {
    if (grid[i][col] == num)
    {
      return false;
    }
  }
  return true;
}

bool isSafeBox(int grid[N][N], int row, int col, int num)
{
  int startRow = row - (row % 3);
  int startCol = col - (col % 3);
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (grid[i + startRow][j + startCol] == num)
      {
        return false;
      }
    }
  }
  return true;
}

bool isSafe(int grid[N][N], int row, int col, int num)
{
  if (isSafeRow(grid, row, num) && isSafeCol(grid, col, num) && isSafeBox(grid, row, col, num))
  {
    return true;
  }
  return false;
}

bool isItSudoku(int grid[N][N])
{
  int row, col;
  if (!findEmptyLocation(grid, row, col))
  {
    return true;
  }
  for (int i = 1; i <= 9; i++)
  {
    if (isSafe(grid, row, col, i))
    {
      grid[row][col] = i;
      if (isItSudoku(grid))
        return true;
      grid[row][col] = 0;
    }
  }
  return false;
}
// bool findEmptyLocation(int grid[N][N], int &row, int &col)
// {
//   for (int i = 0; i < N; i++)
//   {
//     for (int j = 0; j < N; j++)
//     {
//       if (grid[i][j] == 0)
//       {
//         row = i;
//         col = j;
//         return true;
//       }
//     }
//   }
//   return false;
// }

// bool isSafeRow(int grid[N][N], int row, int num)
// {
//   for (int i = 0; i < N; i++)
//   {
//     if (grid[row][i] == num)
//     {
//       return false;
//     }
//   }
//   return true;
// }

// bool isSafeCol(int grid[N][N], int col, int num)
// {
//   for (int i = 0; i < N; i++)
//   {
//     if (grid[i][col] == num)
//       return false;
//   }
//   return true;
// }

// bool isSafeBox(int grid[N][N], int row, int col, int num)
// {
//   int startRow = row - (row % 3);
//   int startCol = col - (col % 3);
//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       if (grid[i + startRow][j + startCol] == num)
//         return false;
//     }
//   }
//   return true;
// }
// bool isSafe(int grid[N][N], int row, int col, int num)
// {
//   if (isSafeRow(grid, row, num) && isSafeCol(grid, col, num) && isSafeBox(grid, row, col, num))
//   {
//     return true;
//   }
//   return false;
// }
// bool isItSudoku(int grid[N][N])
// {
//   int row, col;
//   if (!findEmptyLocation(grid, row, col))
//   {
//     return true;
//   }
//   for (int i = 1; i <= 9; i++)
//   {
//     if (isSafe(grid, row, col, i))
//     {
//       grid[row][col] = i;
//       if (isItSudoku(grid))
//         return true;
//       grid[row][col] = 0;
//     }
//   }
//   return false;
// }

int main()
{
  int matrix[9][9];
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
      cin >> matrix[i][j];
  }
  bool ans = isItSudoku(matrix);
  if (ans)
  {
    cout << "yes\n";
  }
  else
  {
    cout << "no\n";
  }
}
