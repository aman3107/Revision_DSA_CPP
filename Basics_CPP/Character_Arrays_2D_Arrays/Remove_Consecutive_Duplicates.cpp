#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char str[]){
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == str[i+1]){
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

    removeConsecutiveDuplicates(str);
    cout << str << endl;
}