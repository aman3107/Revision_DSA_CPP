#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    int a = 0;
    int b = 1;
    int c = 0;
    for(int i = 2; i <= n; i++){
        c = a+b;
        a = b;
        b=c;
    }
    cout << c;
}