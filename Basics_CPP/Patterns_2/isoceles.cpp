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
        while(k <= i){
            cout << k;
            k++;
        }
        int a = i-1;
        k = 1;
        while(k < i){
            cout << a;
            a--;
            k++;
        }   

        cout << endl;
        i++;
    }
}