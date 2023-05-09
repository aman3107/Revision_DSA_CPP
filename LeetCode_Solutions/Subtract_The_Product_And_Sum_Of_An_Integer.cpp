#include <iostream>
using namespace std;

int subtractProductAndSum(int n){
    int prod_ans = 1;
    int sum_ans = 0;
    while(n > 0){
        int rem = n % 10;
        prod_ans = prod_ans * rem;
        sum_ans = sum_ans + rem;
        n = n / 10;
    }
    return(prod_ans - sum_ans);
}

int main(){
    int n;
    cout << "Enter n :" << endl;
    cin >> n;
    cout << subtractProductAndSum(n);
}