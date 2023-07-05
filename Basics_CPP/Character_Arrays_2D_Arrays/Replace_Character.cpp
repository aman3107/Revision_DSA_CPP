#include <iostream>
#include <cstring>
using namespace std;


void replaceCharacter(char str[], char s1, char s2){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == s1){
            str[i] = s2;
        }
    }
}

int main(){
    int size = 1e6;
    char str[size];
    cin >> str;
    char s1,s2;
    cout << "Enter s1 and s2 :" << endl;
    cin >> s1 >> s2;
    replaceCharacter(str,s1,s2);
    cout << str << endl;
}