#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Decimal Number :" << endl;
    cin >> n;

    int bin = 0;
    int pv = 1;
    while(n > 0){
        int mod = n % 2;
        bin = bin + (mod * pv);
        n = n / 2;
        pv = pv*10;
    }
    cout << bin;
}