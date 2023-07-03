#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
/* int c = 0;
    for(int i = 0; i < size; i++){
        if(input[i] != 0){
            input[c] = input[i];
            c++;
        }
    }
    while(c < size){
        input[c] = 0;
        c++;
    }*/

void pushZeroEnd2(int arr[], int n){
    int i = 0;
    int j = 1;
    while(j < n && i < n){
        if(arr[i] != 0){
            i++;
        }
        else if(arr[j] == 0){
            j++;
        }
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
    }
}

void pushZeroEnd(int arr[], int n){
    int i = 0;
    int j = n - 1;
    while(i < j){
        if(arr[i] != 0){
            i++;
        }
        else if(arr[j] == 0){
            j--;
        }
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
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

    pushZeroEnd2(arr,n);
    printArray(arr,n);
}