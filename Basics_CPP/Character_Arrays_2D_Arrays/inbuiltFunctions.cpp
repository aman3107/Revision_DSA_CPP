#include <iostream>
#include <cstring>  
using namespace std;

void printAllPrefixes(char input[]){
    for(int i = 0; input[i] != '\0'; i++){
        for(int j = 0; j <= i; j++){
            cout << input[j];
        }
        cout << endl;
    }
}

int main(){
    // char input[100];
    // cin.getline(input,100);
    // cout << "Length :" <<strlen(input);
    // char input1[100], input2[100];
    // cin.getline(input1,100);
    // cin.getline(input2,100);

    // if(strcmp(input1,input2) == 0){
    //     cout << "True " << endl;
    // }
    // else{
    //     cout << "False " << endl;
    // }

    // cout << strcpy(input1,input2) << endl;
    // cout << strncpy(input1,"abcd",5);
    char input[100];
    cin.getline(input,100);
    printAllPrefixes(input);
}