#include <iostream>
using namespace std;

void wavePrint(int ** arr, int row, int col){
    for(int j = 0; j < col; j++){
        if(j % 2 == 0){
            for(int i = 0; i < row; i++){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for(int i = row-1; i >= 0; i--){
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main(){
    int row,column;
    cout << "Enter row and column of array :" << endl;
    cin >> row >> column;

    int **arr = new int*[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[column];
        for(int j = 0; j < column; j++){
            cin >> arr[i][j];
        }
    }

    wavePrint(arr,row,column);
    delete []arr;
}