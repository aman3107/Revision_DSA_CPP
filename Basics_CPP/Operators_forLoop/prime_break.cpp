#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n" << endl;
    cin >> n;
    bool divided = true;
    int d = 2;
    while(d < n){
        if(n % d == 0){
            divided = false;
            break;
        }
        d++;
    }

    if(divided == true){
        cout << "Prime";
    }
}