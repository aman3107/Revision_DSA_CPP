#include <iostream>
using namespace std;

int find_duplicate(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter value of n :" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements in array : " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << find_duplicate(arr,n) << endl;
}