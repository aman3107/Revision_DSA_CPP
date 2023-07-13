#include <iostream>
using namespace std;

bool checkPermutation(char str1[], char str2[]){
    int hash1[26] = {0};
    int hash2[26] = {0};

    for(int i = 0; str1[i] != '\0'; i++){
        hash1[str1[i] - 'a']++;
        hash2[str2[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(hash1[i] != hash2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    char str1[100], str2[100];
    cout << "Enter string 1 :" << endl;
    cin.getline(str1, 100);
    cout << "Enter string 2 :" << endl;
    cin.getline(str2, 100);
    bool ans = checkPermutation(str1,str2);
    if(ans){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}