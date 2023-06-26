#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    cout << "Function :" << sizeof(arr) << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;
    int arr[100];
    cout << "Enter elements of array :" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Main :" << sizeof(arr) << endl;
    printArray(arr,n);

}