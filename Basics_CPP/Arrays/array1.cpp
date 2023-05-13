#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of the array :" << endl;
    cin >> n;

    int input[n];
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    for(int i = 0; i < n; i++){
        cout << input[i] << " ";
    }
}