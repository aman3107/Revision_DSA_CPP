#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    int i = 1;
    while(i <= n){
        fact = fact * i;
        i++;
    }
    return fact;
}

int main(){
    int n, r;
    cout << "Enter n and r :"<< endl;
    cin >> n >> r;

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);
    int ans = fact_n /(fact_r * fact_n_r);
    cout << ans << endl;

    // int fact_n = 1;
    // int i = 1;

    // cout << factorial(n)/(factorial(r) * factorial(n-r));

    // while(i <= n){
    //     fact_n = fact_n * i;
    //     i++;
    // }

    // int fact_r = 1;
    // i = 1;
    // while(i <= r){
    //     fact_r = fact_r * i;
    //     i++;
    // }

    // int fact_n_r = 1;
    // i = 1;
    // while(i <= n - r){
    //     fact_n_r = fact_n_r * i;
    //     i++;
    // }

    // cout << fact_n/(fact_r*fact_n_r);
}