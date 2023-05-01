#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n :";
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        char c = 'A';
        while(j <= n){
            cout << c;
            c = 'A' + j;
            j++;
        }
        cout << endl;
        i++;
    }
}