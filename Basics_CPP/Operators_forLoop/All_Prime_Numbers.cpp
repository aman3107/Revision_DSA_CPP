#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n :";
    cin >> n;
    bool prime = true;
    for(int i = 2; i < n; i++){
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                prime = false;
                break;
            }
        }
        if(prime == true){
            cout << i << endl;
        }
        prime = true;
    }
}