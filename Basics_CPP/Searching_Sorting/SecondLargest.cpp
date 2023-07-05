#include <iostream>
#include<climits>
using namespace std;

int secondLargest(int arr[], int n){
    int max_e = INT_MIN;
    int max_e2 = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max_e){
            max_e2 = max_e; 
            max_e = arr[i];
        }
        else if(arr[i] > max_e2 && max_e2 < max_e){
            max_e2 = arr[i];
        }
        else{
            continue;
        }
    }
    return max_e2;
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

    cout << secondLargest(arr,n) << endl;
}