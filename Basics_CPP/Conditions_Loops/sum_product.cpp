#include <iostream>
using namespace std;

int main(){
    long long int n,q;
    cout << "Enter number and query : ";
    cin >> n >> q;

    long long int sum = 1;
    int mod = 1000000007;
    int i = 2;
    while(i <= n){
        if(q == 1){
            sum = sum + i;
        }
        else{
            sum = (sum * i)%mod;
        }
        i++;
    }
    cout << sum;
}