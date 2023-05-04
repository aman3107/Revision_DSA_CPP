#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number : " << endl;
    cin >> n;

    int rev = 0;
    while(n > 0){
        int mod = n % 10;
        rev = rev * 10 + mod;
        n = n / 10;
    }
    cout << rev;
}