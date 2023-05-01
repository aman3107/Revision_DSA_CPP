#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n :";
    cin >> n;

    int i = 1;
    int mid1 = (n/2)+1;
    int mid2 = mid1-1;

    while(i <= mid1){
        int spaces = 1;
        while(spaces <= mid1 - i){
            cout << " ";
            spaces++;
        }
        int j = 1;
        while(j <= 2*i-1){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    while(mid2 > 0){
        int spaces = i;
        while(spaces > 0){
            cout << " ";
            spaces--;
        }
        int j = 2*mid2-1;
        while(j > 0){
            cout << "*";
            j--;
        }
        cout << endl;
        mid2--;
        i++;
    }
}