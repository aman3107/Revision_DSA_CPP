#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n : ";
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        int val = i;
        int k = 1;
        while(k <= n-i){
            cout << " ";
            k++;
        }
        while(j <= i){
            cout << val;
            val++;
            j++;
        }
        cout << endl;
        i++;
    }

}