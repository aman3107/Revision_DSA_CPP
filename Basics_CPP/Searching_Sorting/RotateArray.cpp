#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotateArray(int arr[], int n, int d){
    // if(d == 0 && d > n){
    //     return;
    // }
    // for(int i = 0; i < n-d; i++){
    //     int temp = arr[i];
    //     arr[i] = arr[d+i];
    //     arr[d+i] = temp;
    // }

    // if(n % 2 != 0){
    //     int temp = arr[n-2];
    //     arr[n-2] = arr[n-1];
    //     arr[n-1] = temp;
    // }
    // else{
    //     return;
    // }

    int arr1[d];
    for(int i = 0; i < d; i++){
        arr1[i] = arr[i];
    }
    for(int i = d, j = 0; i < n; i++,j++){
        arr[j] = arr[i];
    }

    for(int i = n - d,j = 0; i < n; i++,j++){
        arr[i] = arr1[j];
    }

}

int main(){
    int n;
    cout << "Enter value of n :" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements in array :" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int d;
    cout << "Enter value of d :" << endl;
    cin >> d;

    rotateArray(arr,n,d);
    printArray(arr,n);
}