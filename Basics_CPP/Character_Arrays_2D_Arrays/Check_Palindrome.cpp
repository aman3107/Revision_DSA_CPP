#include <iostream>
#include <cstring>
using namespace std;

int length(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

bool Palindrome(char str[], int len){
    int i = 0;
    int j = len - 1;
    while(i < j){
        if(str[i] != str[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << Palindrome(str,length(str));
}