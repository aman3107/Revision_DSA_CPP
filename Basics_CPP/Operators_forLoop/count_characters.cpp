#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter char :" << endl;
    ch = cin.get();

    int num_count = 0;
    int char_count = 0;
    int space_count = 0;

    while(ch != '$'){
        if((ch >= 65 && ch <= 90) ||(ch >= 97 && ch <= 122)){
            char_count++;
        }
        else if(ch >= 48 && ch <= 57){
            num_count++;
        }
        else if(ch == ' ' || ch == '\n'  || ch == '\t'){
            space_count++;
        }
        ch = cin.get();
    }

    cout << char_count << " " << num_count << " " << space_count; 
}