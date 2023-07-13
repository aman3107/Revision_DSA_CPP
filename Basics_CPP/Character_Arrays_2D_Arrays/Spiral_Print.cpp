#include <iostream>
using namespace std;

void spiralPrint(int ** arr, int row, int col){
    int sRow = 0;
    int eRow = row-1;
    int sCol = 0;
    int eCol = col-1;

    int count = 1;
    int end = row*col;
    while(count <= end){
        for(int i = sCol; i <= eCol && count <= end; i++){
            cout << arr[sRow][i] << " ";
            count++;
        }
        sRow++;
        for(int i = sRow; i <= eRow && count <= end; i++){
            cout << arr[i][eCol] << " ";
            count++;
        }
        eCol--;
        for(int i = eCol; i >= sCol && count <= end; i--){
            cout << arr[eRow][i] << " ";
            count++;
        }
        eRow--;
        for(int i = eRow; i >= sRow && count <= end; i--){
            cout << arr[i][sCol] << " ";
            count++;
        }
        sCol++;

    }
}

int main(){
    int row,col;
    cout << "Enter row and column of array :" << endl;
    cin >> row >> col;

    int **arr = new int*[row];

    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    spiralPrint(arr,row,col);
}