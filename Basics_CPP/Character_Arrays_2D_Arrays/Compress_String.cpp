#include <iostream>
#include <cstring>
using namespace std;

string compressString(char str[]){
    int len = strlen(str);
    string ans = "";
    for(int i = 0; str[i] != '\0'; i++){
        int c = 1;
        while(i < len - 1 && str[i] == str[i+1]){
            c++;
            i++;
        }
        if(c == 1){
            ans = ans + str[i];
        }
        else{
            ans = ans + str[i];
            ans = ans + to_string(c);
        }
    }
    return ans;
}

int main(){
    char str[100];
    cout << "Enter string :" << endl;
    cin.getline(str,100);
    cout << compressString(str) << endl;
}