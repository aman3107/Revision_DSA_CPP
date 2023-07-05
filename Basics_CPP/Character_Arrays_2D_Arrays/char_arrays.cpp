#include <iostream>
using namespace std;

int length(char arr[]){
    int len = 0;
    while(arr[len] != '\0'){
        len++;
    }
    return len;
}

int main(){
    char name[10];
    cout << "Enter your name :" <<endl;
    cin >> name;
    // name[1] = '\0';
    // name[3] = 'd';
    // name[4] = 'x';
    // cout << name << endl;
    cout << length(name);
}