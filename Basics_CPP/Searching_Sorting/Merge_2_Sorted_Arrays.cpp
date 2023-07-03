#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void mergeArrays(int arr1[], int n, int arr2[], int m){
    int i = 0, j = 0;
    int count = 0;
    int len = n + m;
    int arr3[len];
    while(count < len){
        if(arr1[i] < arr2[j] && (i < n && j < m)){
            arr3[count] = arr1[i];
            count++;
            i++;
        }
        else if(arr2[j] < arr1[i] && (j < m && i < n)){
            arr3[count] = arr2[j];
            count++;
            j++;
        }
        else{
            if(i != n){
                arr3[count] = arr1[i];
                count++;
                i++;
            }
            else{
                arr3[count] = arr2[j];
                count++;
                j++;
            }
        }
    }
    printArray(arr3,len);
}

int main(){
    int n,m;
    cout << "Enter value of n and m :" << endl;
    cin >> n >> m;

    int arr1[n], arr2[m];
    cout << "Enter values in array 1:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cout << "Enter values in array 2:" << endl;
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    mergeArrays(arr1,n,arr2,m);
}