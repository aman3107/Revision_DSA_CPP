#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n ";
    cin >> n;

    int odd_sum = 0;
    int even_sum = 0;
     while(n > 0){
        int mod = n % 10;
        if(mod % 2 == 0){
            even_sum = even_sum + mod;
        }
        else{
            odd_sum = odd_sum + mod;
        }
        n = n / 10;
     }

     cout << "Even " << even_sum <<" "<< "Odd" << odd_sum;
}