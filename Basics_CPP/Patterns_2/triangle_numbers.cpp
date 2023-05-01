#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n :";
    cin >> n;

    int i = 1;
    while(i <= n){
        int spaces = 1;
        while(spaces <= n - i){
            cout << " ";
            spaces++;
        }

        int k = i;
        int j = 1;
        while(j <= i){
            cout << k;
            k++;
            j++;
        }
        k = 2*i-2;
        j = i;
        while(j > 1){
            cout << k;
            k--;
            j-- ;
        }

        cout << endl;
        i++;
    }
}