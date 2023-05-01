#include <iostream>
using namespace std;

int main(){
    int n,p;
    cout << "Enter number and power :";
    cin >> n >> p;

    int i = 1;
    int pow = 1;

    while(i <= p){
        pow = pow * n;
        i++;
    }
    cout << pow;
}