#include <iostream>
#include<algorithm>
using namespace std;

void intersection(int arr1[], int n, int arr2[], int m){
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int i = 0, j = 0;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
    }
}

int main(){
    int n, m;
    cout << "Enter value of n and m :" << endl;
    cin >> n >> m;

    int arr1[n], arr2[m];
    cout << "Enter elements in 1 array :" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr1[i];
    cout << "Enter elements in 2 array :" << endl;
    for(int i = 0; i < m; i++)
        cin >> arr2[i];

    intersection(arr1,n,arr2,m);
}