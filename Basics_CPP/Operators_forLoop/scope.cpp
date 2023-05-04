#include <iostream>
using namespace std;

int main(){

    int i = 10;
    if(i == 10){
        int i = 23;
        cout << i << endl;
    }
    cout << i << endl;

    int k = 0;
    for(;k < 10; k++){
        cout << k << endl;
    }
    cout << k;
}