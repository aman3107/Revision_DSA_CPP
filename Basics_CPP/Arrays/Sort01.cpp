#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n :" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements in array :" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;
    while(low < high){
        if(arr[low] == 0){
            low++;
        }
        else if(arr[high] == 1){
            high--;
        }
        else{
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}