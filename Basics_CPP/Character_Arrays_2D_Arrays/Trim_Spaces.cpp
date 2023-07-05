#include <iostream>
using namespace std;

void trimSpaces(char str[]){
    int c = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            continue;
        }
        else{
            str[c] = str[i];
            c++;
        }
    }
    str[c] = '\0';
}

int main(){
    char str[10000];
    cin.getline(str,10000);
    trimSpaces(str);
    cout << str;
}