#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n :";
    cin >> n;

    int i = 1;
    while(i <= n){
        int spaces = 1;
        while(spaces <= n-i){
            cout << " ";
            spaces++;
        }
        int k = 1;
        int num = 1;
        while(k <= i){
            cout << k;
            k++;
        }
        cout << endl;
        i++;
    }
}