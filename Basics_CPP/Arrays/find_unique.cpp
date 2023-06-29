#include <iostream>
using namespace std;


void print_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
}

int find_unique(int arr[], int n){
        bool isUnique = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] == arr[i] && i != j){
                isUnique = false;
                break;
            }
            else{
                isUnique = true;
            }
        }
        if(isUnique){
            return arr[i];
        }
    }
    return -1;
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

    int ele = find_unique(arr,n);
    cout << ele << endl;
    print_array(arr,n);
}