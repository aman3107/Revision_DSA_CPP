#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int puc = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > puc){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = puc;
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
    cout << "Before Sort Array :" << endl;
    printArray(arr,n);
    cout << "After Sort Array :" << endl;
    insertionSort(arr,n);
    printArray(arr,n);
}