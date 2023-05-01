#include <iostream>
using namespace std;

int main(){
    int s;
    int e;
    int w;
    cout << "Enter values of start fh, end fh and step size " << endl;
    cin >> s >> e >> w;
    while(s <= e){
        int res = (5.0/9)*(s-32);
        cout << s << " " << res << endl;
        s = s + w;
    }
    
}