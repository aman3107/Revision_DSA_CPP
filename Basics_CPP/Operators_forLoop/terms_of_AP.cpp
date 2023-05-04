#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n :" << endl;
    cin >> n;

    int j = 1;
    for(int i = 1; i <= n; i++){
        int ap = 3 * j + 2;
        if(ap % 4 == 0){
            ap = ap + 3;
            j = j + 2;
            cout << ap << " ";
        }
        else{
            j++;
            cout << ap << " ";
        }
    }
}