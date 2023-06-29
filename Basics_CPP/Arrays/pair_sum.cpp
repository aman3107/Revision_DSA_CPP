#include<iostream>
#include <algorithm>
using namespace std;

int pair_sum(int arr[], int n, int sum){
    int low = 0;
    int high = n - 1;
    int count = 0;
    int count1 = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i+1]){
            count1++;
        }
    }
    while(low < high){
        if(arr[low] + arr[high] == sum){
            count++;
            low++;
            high--;
        }
        else if(arr[low] + arr[high] > sum){
            high--;
        }
        else{
            low++;
        }
    }
    cout << count1 << endl;
    return count;
}

int main(){
    int n;
    cout << "enter value of n :" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements in array :" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum;
    cout << "enter value of sum :" << endl;
    cin >> sum;
    sort(arr,arr+n);
    cout << pair_sum(arr,n,sum);
}