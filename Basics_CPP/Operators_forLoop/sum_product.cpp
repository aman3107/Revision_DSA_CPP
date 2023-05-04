#include <iostream>
using namespace std;

int main(){
    int n;
    int ch;
    cout << "Enter number and choice " << endl;
    cin >> n >> ch;

    int sum = 1;
    if(ch == 1){
        for(int i = 2; i <= n; i++){
            sum += i;
        }
    }
    else if(ch == 2){
        for(int i = 2; i <= n; i++){
            sum *= i;
        }
    }
    else{
        sum = -1;
    }
    cout << sum;
}