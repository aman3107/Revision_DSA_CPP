#include <iostream>
using namespace std;

void printCelsius(int s, int e, int w){

    while(s <= e){
        int ans = (5.0/9)*(s-32);
        cout << s << " " << ans << endl;
        s = s + w;
    }

}

int main(){
    int sf, fv, ss;
    cout << "Enter start fah value, fah value, and step size :"<< endl;
    cin>> sf >> fv >> ss;
    printCelsius(sf,fv,ss);
}