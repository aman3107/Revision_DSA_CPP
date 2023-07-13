#include <iostream>
using namespace std;

int sumN(int a[], int size){
    cout << sizeof(a) << endl;
    return 0;
}

int sumP(int *a, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    int a[10];
    cout << sizeof(a) << endl;
    cout << sumN(a,10) << endl;
    cout << sumP(a+3,7);
}