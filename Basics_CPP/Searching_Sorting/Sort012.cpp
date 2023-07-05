#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort012(int arr[], int n){
    int i = 0;
    int j = 0;
    int k = n - 1;
    while(j <= k){
        if(arr[j] == 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
        else if(arr[j] == 2){
            int temp = arr[k];
            arr[k] = arr[j];
            arr[j] = temp;
            k--;
        }
        else{
            j++;
        }
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

    sort012(arr,n);
    printArray(arr,n);
}