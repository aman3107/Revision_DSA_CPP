#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s;
    cout << "Enter string ";
    cin >> s;

    int count = s.length();

    bool palindrome = true;

    for(int i = 0; i < s.length(); i++){

        if(s[count-1] != s[i]){
            count--;
            palindrome = false;
        }
        else{
            count--;
        }
    }

    if(palindrome == true){
        cout << "Palindrome";
    }

}