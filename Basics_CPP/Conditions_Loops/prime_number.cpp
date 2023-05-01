#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 2;
    while(i < n){
        if(n % i == 0){
            cout << "Not Prime";
            break;
        }
        i++;
    }

    if(n == i){
        cout << "Prime";
    }

}