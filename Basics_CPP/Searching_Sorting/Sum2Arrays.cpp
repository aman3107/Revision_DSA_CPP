#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sum2Array(int arr1[],int n, int arr2[], int m, int arr3[]){
    int i = n - 1;
    int j = m - 1;
    int k = max(n,m);
    int carry = 0;
    while(i >= 0 && j >= 0){
        int sum = arr1[i] + arr2[j] + carry;
        arr3[k] = sum % 10;
        carry = sum / 10;
        i--;
        j--;
        k--;
    }

    while(i >= 0){
        int sum = arr1[i] + carry;
        arr3[k] = sum % 10;
        carry = sum / 10;
        i--;
        k--;
    }
    while(j >= 0){
        int sum = arr2[j] + carry;
        arr3[k] = sum % 10;
        carry = sum / 10;
        j--;
        k--;
    }
    arr3[0] = carry;

}

int main(){
    int n,m;
    cout << "Enter value of n and m :" << endl;
    cin >> n >> m;

    int arr1[n];
    int arr2[m];
    cout << "Enter elements in 1 array :" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cout << "Enter elements in 2 array :" << endl;
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    int k = 1 + max(n,m);
    int arr3[k];
    sum2Array(arr1,n,arr2,m,arr3);
    for(int i = 0; i < k; i++){
        cout << arr3[i] << " " ;
    }
    // printArray(arr3,k);
}