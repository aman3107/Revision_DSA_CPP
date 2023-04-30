#include <iostream>
using namespace std;

int main(){
    int f;
    cout << "Enter Fah value :" << endl;
    cin >> f;
    int c = (5.0/9)*(f-32);
    cout << c << endl;

    int a,b;
    cout << "Enter a and b : " << endl;
    cin >> a >> b;
    
    bool bl = a == b;
    cout << bl << endl;
    
}