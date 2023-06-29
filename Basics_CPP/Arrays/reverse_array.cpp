#include <iostream>
using namespace std;

void print_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void reverse(int arr[], int n){
    int i = 0;
    int j = n-1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
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

    reverse(arr,n);
    print_array(arr,n);
}