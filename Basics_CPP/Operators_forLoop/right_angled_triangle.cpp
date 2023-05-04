#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter length of largest side" << endl;
    cin >> a;
    cout << "Enter length of base" << endl;
    cin >> b;
    cout << "Enter length of height" << endl;
    cin >> c;

    if(a*a == (b*b)+(c*c)){
        cout << "Right Triangle";
    }


}