#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of num " << endl;
    cin >> n;

    int i = 0;
    int sq = 1;
    while(sq <= n){
        i++;
        sq = i * i;
    }
    cout << i - 1;
}