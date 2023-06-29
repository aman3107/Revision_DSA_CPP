#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void increment(int a,int arr[],int n){
    a++;
    arr[0]++;
}

int main(){
    int a = 10;
    int b[10] = {1,2,3};
    increment(a,b,10);
    cout << a << b[0] << endl;
    // int n;
    // cout << "Enter value of n :" << endl;
    // cin >> n;

    int arr[100] = {1,2,3};
    // cout << "Enter elements of Array :" << endl;
    // for(int i = 0; i < n; i++){
    //     cin >> arr[n];
    // }

    printArray(arr,100);
}