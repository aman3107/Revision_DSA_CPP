#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

void trimSpaces(char input[])
{
    // Write your code here
    int c = 0;
    int j = 0;
    while (input[c] != '\0')
    {
        if (input[c] == ' ')
        {
            c++;
            continue;
        }
        else
        {
            input[j] = input[c];
            j++;
            c++;
        }
    }
    input[j] = '\0';
}

void squareMatrix(int n, int arr[][100], int output[])
{
    // 100 is just the upper limit, you just have to access till n
    //  int c = 0;
    //  for(int i = 0; i < n; i++){
    //      for(int j = 0; j < n; j++){
    //          if(i == j){
    //              output[c] = arr[i][j];
    //              c++;
    //          }
    //          else{
    //              continue;
    //          }
    //      }
    //  }
    for (int i = 0; i < n; i++)
    {
        output[i] = arr[i][i];
    }
}

int findLargest(int input[][1001], int row, int col)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + input[i][j];
        }
        if (maxSum < sum)
        {
            maxSum = sum;
        }
    }

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + input[j][i];
        }
        if (maxSum < sum)
        {
            maxSum = sum;
        }
    }
    return maxSum;
}

int main()
{
    // char str[100];
    // char str2[100];
    // cin.getline(str, 90, 'o');
    // cin.getline(str2, 100);
    // cout << str << " " << str2;
    // char str[100];
    // cin.getline(str, 100);
    // trimSpaces(str);
    // int c = 0;
    // while (str[c] != '\0')
    // {
    //     cout << str[c];
    //     c++;
    // }
    // char input1[7] = "word";
    // char input2[8] = "abcdef";
    // strncpy(input1, input2, 4);
    // cout << input1 << " " << input2;

    // int n;
    // cin >> n;
    // int arr[n][100];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // int output[n];
    // squareMatrix(n, arr, output);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << output[i] << " ";
    // }

    int row, col;
    cin >> row >> col;
    int arr[row][1001];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << findLargest(arr, row, col);
}