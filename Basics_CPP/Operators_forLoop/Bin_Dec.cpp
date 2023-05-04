#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter Binary Number : " << endl;
    cin >> n;

    int i = 0;
    int dec = 0;
    while(n > 0){
        int mod = n % 10;
        dec = dec + (pow(2,i) *mod);
        n = n / 10;
        i++;
    }
    cout << dec;
}