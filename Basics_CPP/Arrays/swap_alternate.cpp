#include <iostream>
using namespace std;

void print_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }
}

void swap_alternate(int arr[], int n){
    int i = 0;
    int j = 1;
    while(j < n){
        int temp = arr[i];
        arr[i] =arr[j];
        arr[j] = temp;
        i = i + 2;
        j = j + 2;
    }
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
    swap_alternate(arr,n);
    print_array(arr,n);
    
}