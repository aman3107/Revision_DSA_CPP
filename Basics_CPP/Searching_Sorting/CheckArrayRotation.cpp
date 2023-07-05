#include <iostream>
using namespace std;

int checkArrayRotation(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        if(arr[i+1] < arr[i]){
            return i+1;
        }
        else{
            continue;
        }
    }
    return 0;
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

    cout << checkArrayRotation(arr,n) << endl;
}