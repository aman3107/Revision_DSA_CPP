#include <iostream>
#include <climits>
using namespace std;

char highestOccuringCharacter(char str[]){
    int hash[26] = {0};
    for(int i = 0; str[i] != '\0'; i++){
        hash[str[i] - 'a']++;
    }

    int index = 0;
    int lar = INT_MIN;
    for(int i = 0; i < 26; i++){
        if(lar < hash[i]){
            index = i;
            lar = hash[i];
        }
    }
    return index+'a';
}

int main(){
    char str[100];
    cout << "Enter string :" << endl;
    cin.getline(str,100);

    cout << highestOccuringCharacter(str) << endl;
}