#include <iostream>
using namespace std;

int multiply(int a, int b){
    return a*b;
}

int main(){
    int a, b;
    cout << "Enter value of a and b :" << endl;
    cin >> a >> b;
    cout << multiply(a,b);
}