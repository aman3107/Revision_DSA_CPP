#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter values of a and b : " << endl;
    cin >> a >> b;

    if(a == b){
        cout << "These are equal : " << endl;
    }
    else if(a < b){
        cout << "A is smaller : " << endl;
    }
    else{
        cout << "A is greater : ";
    }
   /* if(a == b){
        cout << "These are equal : " << endl;
    }
    else{
        if(a < b){
            cout << "A is less : " << endl;
        }
        else{
            cout << "A is greater : ";
        }
    }
    */

    /*if (a == b)
        cout << "These are equal : " << endl;
    else
        cout << "Not Equal : " << endl;
    */
}