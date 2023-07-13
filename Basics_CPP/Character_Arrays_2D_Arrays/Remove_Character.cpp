#include <iostream>
using namespace std;

void removeCharacter(char str[], char c){
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            continue;
        }
        else{
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main(){
    char str[100];
    cout << "Enter string :" << endl;
    cin.getline(str,100);

    char c;
    cout << "Enter character to remove :";
    cin >> c;
    removeCharacter(str,c);
    cout << str << endl;
}