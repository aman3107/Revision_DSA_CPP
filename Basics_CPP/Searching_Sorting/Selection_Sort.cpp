#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_value = arr[i];
        int index = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < min_value){
                min_value = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = min_value;
        arr[index] = temp;

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

    selectionSort(arr,n);
    printArray(arr,n);
}