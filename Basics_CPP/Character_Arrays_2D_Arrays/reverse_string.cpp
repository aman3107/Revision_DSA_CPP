#include <iostream>
using namespace std;

int length(char str[]){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}

void reverseString(char str[], int len){
    int i = 0;
    int j = len-1;
    while(i < j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main(){
    char str[100];
    cin.getline(str,100);
    reverseString(str,length(str));
    cout << str;
}