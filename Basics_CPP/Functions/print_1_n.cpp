#include <iostream>
using namespace std;

void print_1_n(int n){
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
}

int main(){
    int n;
    cout << "Enter number :" << endl;
    cin >> n;
    print_1_n(n);
}